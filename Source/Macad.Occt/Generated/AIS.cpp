// Generated wrapper code for package AIS

#include "OcctPCH.h"
#include "AIS.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "SelectMgr.h"
#include "TopoDS.h"
#include "V3d.h"
#include "PrsMgr.h"
#include "TCollection.h"
#include "Prs3d.h"
#include "Graphic3d.h"
#include "TopLoc.h"
#include "gp.h"
#include "TColgp.h"
#include "Bnd.h"
#include "Standard.h"
#include "TColStd.h"
#include "Aspect.h"
#include "Quantity.h"
#include "Geom.h"
#include "TopAbs.h"
#include "Image.h"


//---------------------------------------------------------------------
//  Class  AIS_DataMapOfIOStatus
//---------------------------------------------------------------------

Macad::Occt::AIS_DataMapOfIOStatus::AIS_DataMapOfIOStatus()
    : Macad::Occt::BaseClass<::AIS_DataMapOfIOStatus>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_DataMapOfIOStatus();
}

Macad::Occt::AIS_DataMapOfIOStatus::AIS_DataMapOfIOStatus(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::AIS_DataMapOfIOStatus>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_DataMapOfIOStatus(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::AIS_DataMapOfIOStatus::AIS_DataMapOfIOStatus(int theNbBuckets)
    : Macad::Occt::BaseClass<::AIS_DataMapOfIOStatus>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_DataMapOfIOStatus(theNbBuckets, 0L);
}

void Macad::Occt::AIS_DataMapOfIOStatus::Exchange(Macad::Occt::AIS_DataMapOfIOStatus^ theOther)
{
    ((::AIS_DataMapOfIOStatus*)_NativeInstance)->Exchange(*(::AIS_DataMapOfIOStatus*)theOther->NativeInstance);
}

Macad::Occt::AIS_DataMapOfIOStatus^ Macad::Occt::AIS_DataMapOfIOStatus::Assign(Macad::Occt::AIS_DataMapOfIOStatus^ theOther)
{
    ::AIS_DataMapOfIOStatus* _result = new ::AIS_DataMapOfIOStatus();
    *_result = ((::AIS_DataMapOfIOStatus*)_NativeInstance)->Assign(*(::AIS_DataMapOfIOStatus*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::AIS_DataMapOfIOStatus(_result);
}

void Macad::Occt::AIS_DataMapOfIOStatus::ReSize(int N)
{
    ((::AIS_DataMapOfIOStatus*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::AIS_DataMapOfIOStatus::Bind(Macad::Occt::AIS_InteractiveObject^ theKey, Macad::Occt::AIS_GlobalStatus^ theItem)
{
    bool _result = ((::AIS_DataMapOfIOStatus*)_NativeInstance)->Bind(Handle(::AIS_InteractiveObject)(theKey->NativeInstance), Handle(::AIS_GlobalStatus)(theItem->NativeInstance));
    return _result;
}

Macad::Occt::AIS_GlobalStatus^ Macad::Occt::AIS_DataMapOfIOStatus::Bound(Macad::Occt::AIS_InteractiveObject^ theKey, Macad::Occt::AIS_GlobalStatus^ theItem)
{
    throw gcnew System::NotImplementedException();
}

bool Macad::Occt::AIS_DataMapOfIOStatus::IsBound(Macad::Occt::AIS_InteractiveObject^ theKey)
{
    bool _result = ((::AIS_DataMapOfIOStatus*)_NativeInstance)->IsBound(Handle(::AIS_InteractiveObject)(theKey->NativeInstance));
    return _result;
}

bool Macad::Occt::AIS_DataMapOfIOStatus::UnBind(Macad::Occt::AIS_InteractiveObject^ theKey)
{
    bool _result = ((::AIS_DataMapOfIOStatus*)_NativeInstance)->UnBind(Handle(::AIS_InteractiveObject)(theKey->NativeInstance));
    return _result;
}

Macad::Occt::AIS_GlobalStatus^ Macad::Occt::AIS_DataMapOfIOStatus::Seek(Macad::Occt::AIS_InteractiveObject^ theKey)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::AIS_GlobalStatus^ Macad::Occt::AIS_DataMapOfIOStatus::Find(Macad::Occt::AIS_InteractiveObject^ theKey)
{
    Handle(::AIS_GlobalStatus) _result = ((::AIS_DataMapOfIOStatus*)_NativeInstance)->Find(Handle(::AIS_InteractiveObject)(theKey->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_GlobalStatus::CreateDowncasted(_result.get());
}

Macad::Occt::AIS_GlobalStatus^ Macad::Occt::AIS_DataMapOfIOStatus::ChangeSeek(Macad::Occt::AIS_InteractiveObject^ theKey)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::AIS_GlobalStatus^ Macad::Occt::AIS_DataMapOfIOStatus::ChangeFind(Macad::Occt::AIS_InteractiveObject^ theKey)
{
    Handle(::AIS_GlobalStatus) _result = ((::AIS_DataMapOfIOStatus*)_NativeInstance)->ChangeFind(Handle(::AIS_InteractiveObject)(theKey->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_GlobalStatus::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_DataMapOfIOStatus::Clear(bool doReleaseMemory)
{
    ((::AIS_DataMapOfIOStatus*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::AIS_DataMapOfIOStatus::Clear()
{
    ((::AIS_DataMapOfIOStatus*)_NativeInstance)->Clear(false);
}

int Macad::Occt::AIS_DataMapOfIOStatus::Size()
{
    int _result = ((::AIS_DataMapOfIOStatus*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  AIS_DataMapOfIOStatus::Iterator
//---------------------------------------------------------------------

Macad::Occt::AIS_DataMapOfIOStatus::Iterator::Iterator()
    : Macad::Occt::BaseClass<::AIS_DataMapOfIOStatus::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_DataMapOfIOStatus::Iterator();
}

bool Macad::Occt::AIS_DataMapOfIOStatus::Iterator::More()
{
    bool _result = ((::AIS_DataMapOfIOStatus::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::AIS_DataMapOfIOStatus::Iterator::Next()
{
    ((::AIS_DataMapOfIOStatus::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::AIS_GlobalStatus^ Macad::Occt::AIS_DataMapOfIOStatus::Iterator::Value()
{
    Handle(::AIS_GlobalStatus) _result = ((::AIS_DataMapOfIOStatus::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_GlobalStatus::CreateDowncasted(_result.get());
}

Macad::Occt::AIS_GlobalStatus^ Macad::Occt::AIS_DataMapOfIOStatus::Iterator::ChangeValue()
{
    Handle(::AIS_GlobalStatus) _result = ((::AIS_DataMapOfIOStatus::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_GlobalStatus::CreateDowncasted(_result.get());
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_DataMapOfIOStatus::Iterator::Key()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_DataMapOfIOStatus::Iterator*)_NativeInstance)->Key();
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  AIS_ListOfInteractive
//---------------------------------------------------------------------

Macad::Occt::AIS_ListOfInteractive::AIS_ListOfInteractive()
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_ListOfInteractive();
}

Macad::Occt::AIS_ListOfInteractive::AIS_ListOfInteractive(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_ListOfInteractive(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::AIS_ListOfInteractive::Size()
{
    int _result = ((::AIS_ListOfInteractive*)_NativeInstance)->Size();
    return _result;
}

Macad::Occt::AIS_ListOfInteractive^ Macad::Occt::AIS_ListOfInteractive::Assign(Macad::Occt::AIS_ListOfInteractive^ theOther)
{
    ::AIS_ListOfInteractive* _result = new ::AIS_ListOfInteractive();
    *_result = ((::AIS_ListOfInteractive*)_NativeInstance)->Assign(*(::AIS_ListOfInteractive*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::AIS_ListOfInteractive(_result);
}

void Macad::Occt::AIS_ListOfInteractive::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::AIS_ListOfInteractive*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::AIS_ListOfInteractive::Clear()
{
    ((::AIS_ListOfInteractive*)_NativeInstance)->Clear(0L);
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_ListOfInteractive::First()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ListOfInteractive*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_ListOfInteractive::Last()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ListOfInteractive*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_ListOfInteractive::Append(Macad::Occt::AIS_InteractiveObject^ theItem)
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ListOfInteractive*)_NativeInstance)->Append(Handle(::AIS_InteractiveObject)(theItem->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_ListOfInteractive::Prepend(Macad::Occt::AIS_InteractiveObject^ theItem)
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ListOfInteractive*)_NativeInstance)->Prepend(Handle(::AIS_InteractiveObject)(theItem->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_ListOfInteractive::RemoveFirst()
{
    ((::AIS_ListOfInteractive*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::AIS_ListOfInteractive::Remove(Macad::Occt::AIS_ListOfInteractive::Iterator^ theIter)
{
    ((::AIS_ListOfInteractive*)_NativeInstance)->Remove(*(::AIS_ListOfInteractive::Iterator*)theIter->NativeInstance);
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_ListOfInteractive::InsertBefore(Macad::Occt::AIS_InteractiveObject^ theItem, Macad::Occt::AIS_ListOfInteractive::Iterator^ theIter)
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ListOfInteractive*)_NativeInstance)->InsertBefore(Handle(::AIS_InteractiveObject)(theItem->NativeInstance), *(::AIS_ListOfInteractive::Iterator*)theIter->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_ListOfInteractive::InsertAfter(Macad::Occt::AIS_InteractiveObject^ theItem, Macad::Occt::AIS_ListOfInteractive::Iterator^ theIter)
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ListOfInteractive*)_NativeInstance)->InsertAfter(Handle(::AIS_InteractiveObject)(theItem->NativeInstance), *(::AIS_ListOfInteractive::Iterator*)theIter->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_ListOfInteractive::Reverse()
{
    ((::AIS_ListOfInteractive*)_NativeInstance)->Reverse();
}



//---------------------------------------------------------------------
//  Class  AIS_ListOfInteractive::Iterator
//---------------------------------------------------------------------

Macad::Occt::AIS_ListOfInteractive::Iterator::Iterator()
    : Macad::Occt::BaseClass<::AIS_ListOfInteractive::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_ListOfInteractive::Iterator();
}

bool Macad::Occt::AIS_ListOfInteractive::Iterator::More()
{
    bool _result = ((::AIS_ListOfInteractive::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::AIS_ListOfInteractive::Iterator::Next()
{
    ((::AIS_ListOfInteractive::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_ListOfInteractive::Iterator::Value()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ListOfInteractive::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_ListOfInteractive::Iterator::ChangeValue()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ListOfInteractive::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  AIS_NArray1OfEntityOwner
//---------------------------------------------------------------------

Macad::Occt::AIS_NArray1OfEntityOwner::AIS_NArray1OfEntityOwner()
    : Macad::Occt::BaseClass<::AIS_NArray1OfEntityOwner>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_NArray1OfEntityOwner();
}

Macad::Occt::AIS_NArray1OfEntityOwner::AIS_NArray1OfEntityOwner(int theLower, int theUpper)
    : Macad::Occt::BaseClass<::AIS_NArray1OfEntityOwner>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_NArray1OfEntityOwner(theLower, theUpper);
}

Macad::Occt::AIS_NArray1OfEntityOwner::AIS_NArray1OfEntityOwner(Macad::Occt::SelectMgr_EntityOwner^ theBegin, int theLower, int theUpper, bool theUseBuffer)
    : Macad::Occt::BaseClass<::AIS_NArray1OfEntityOwner>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_NArray1OfEntityOwner(Handle(::SelectMgr_EntityOwner)(theBegin->NativeInstance), theLower, theUpper, theUseBuffer);
}

Macad::Occt::AIS_NArray1OfEntityOwner::AIS_NArray1OfEntityOwner(Macad::Occt::SelectMgr_EntityOwner^ theBegin, int theLower, int theUpper)
    : Macad::Occt::BaseClass<::AIS_NArray1OfEntityOwner>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_NArray1OfEntityOwner(Handle(::SelectMgr_EntityOwner)(theBegin->NativeInstance), theLower, theUpper, true);
}

void Macad::Occt::AIS_NArray1OfEntityOwner::Init(Macad::Occt::SelectMgr_EntityOwner^ theValue)
{
    ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->Init(Handle(::SelectMgr_EntityOwner)(theValue->NativeInstance));
}

int Macad::Occt::AIS_NArray1OfEntityOwner::Size()
{
    int _result = ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::AIS_NArray1OfEntityOwner::Length()
{
    int _result = ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::AIS_NArray1OfEntityOwner::IsEmpty()
{
    bool _result = ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::AIS_NArray1OfEntityOwner::Lower()
{
    int _result = ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::AIS_NArray1OfEntityOwner::Upper()
{
    int _result = ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::AIS_NArray1OfEntityOwner^ Macad::Occt::AIS_NArray1OfEntityOwner::Assign(Macad::Occt::AIS_NArray1OfEntityOwner^ theOther)
{
    ::AIS_NArray1OfEntityOwner* _result = new ::AIS_NArray1OfEntityOwner();
    *_result = ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->Assign(*(::AIS_NArray1OfEntityOwner*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::AIS_NArray1OfEntityOwner(_result);
}

Macad::Occt::AIS_NArray1OfEntityOwner^ Macad::Occt::AIS_NArray1OfEntityOwner::Move(Macad::Occt::AIS_NArray1OfEntityOwner^ theOther)
{
    ::AIS_NArray1OfEntityOwner* _result = new ::AIS_NArray1OfEntityOwner();
    *_result = ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->Move(*(::AIS_NArray1OfEntityOwner*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::AIS_NArray1OfEntityOwner(_result);
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_NArray1OfEntityOwner::First()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_NArray1OfEntityOwner::ChangeFirst()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->ChangeFirst();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_NArray1OfEntityOwner::Last()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_NArray1OfEntityOwner::ChangeLast()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->ChangeLast();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_NArray1OfEntityOwner::Value(int theIndex)
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->Value(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_NArray1OfEntityOwner::ChangeValue(int theIndex)
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->ChangeValue(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_NArray1OfEntityOwner::SetValue(int theIndex, Macad::Occt::SelectMgr_EntityOwner^ theItem)
{
    ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->SetValue(theIndex, Handle(::SelectMgr_EntityOwner)(theItem->NativeInstance));
}

void Macad::Occt::AIS_NArray1OfEntityOwner::UpdateLowerBound(int theLower)
{
    ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::AIS_NArray1OfEntityOwner::UpdateUpperBound(int theUpper)
{
    ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::AIS_NArray1OfEntityOwner::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool Macad::Occt::AIS_NArray1OfEntityOwner::IsDeletable()
{
    bool _result = ((::AIS_NArray1OfEntityOwner*)_NativeInstance)->IsDeletable();
    return _result;
}

System::Collections::Generic::IEnumerator<Macad::Occt::SelectMgr_EntityOwner^>^ Macad::Occt::AIS_NArray1OfEntityOwner::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::SelectMgr_EntityOwner^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::AIS_NArray1OfEntityOwner::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::SelectMgr_EntityOwner^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  AIS_NArray1OfEntityOwner::Iterator
//---------------------------------------------------------------------

void Macad::Occt::AIS_NArray1OfEntityOwner::Iterator::Init(Macad::Occt::AIS_NArray1OfEntityOwner^ theList)
{
    ((::AIS_NArray1OfEntityOwner::Iterator*)_NativeInstance)->Init(*(::AIS_NArray1OfEntityOwner*)theList->NativeInstance);
}

bool Macad::Occt::AIS_NArray1OfEntityOwner::Iterator::More()
{
    bool _result = ((::AIS_NArray1OfEntityOwner::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::AIS_NArray1OfEntityOwner::Iterator::Initialize(Macad::Occt::AIS_NArray1OfEntityOwner^ theList)
{
    ((::AIS_NArray1OfEntityOwner::Iterator*)_NativeInstance)->Initialize(*(::AIS_NArray1OfEntityOwner*)theList->NativeInstance);
}

void Macad::Occt::AIS_NArray1OfEntityOwner::Iterator::Next()
{
    ((::AIS_NArray1OfEntityOwner::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_NArray1OfEntityOwner::Iterator::Value()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_NArray1OfEntityOwner::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_NArray1OfEntityOwner::Iterator::ChangeValue()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_NArray1OfEntityOwner::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  AIS_NListOfEntityOwner
//---------------------------------------------------------------------

Macad::Occt::AIS_NListOfEntityOwner::AIS_NListOfEntityOwner()
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_NListOfEntityOwner();
}

Macad::Occt::AIS_NListOfEntityOwner::AIS_NListOfEntityOwner(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_NListOfEntityOwner(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::AIS_NListOfEntityOwner::Size()
{
    int _result = ((::AIS_NListOfEntityOwner*)_NativeInstance)->Size();
    return _result;
}

Macad::Occt::AIS_NListOfEntityOwner^ Macad::Occt::AIS_NListOfEntityOwner::Assign(Macad::Occt::AIS_NListOfEntityOwner^ theOther)
{
    ::AIS_NListOfEntityOwner* _result = new ::AIS_NListOfEntityOwner();
    *_result = ((::AIS_NListOfEntityOwner*)_NativeInstance)->Assign(*(::AIS_NListOfEntityOwner*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::AIS_NListOfEntityOwner(_result);
}

void Macad::Occt::AIS_NListOfEntityOwner::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::AIS_NListOfEntityOwner*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::AIS_NListOfEntityOwner::Clear()
{
    ((::AIS_NListOfEntityOwner*)_NativeInstance)->Clear(0L);
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_NListOfEntityOwner::First()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_NListOfEntityOwner*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_NListOfEntityOwner::Last()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_NListOfEntityOwner*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_NListOfEntityOwner::Append(Macad::Occt::SelectMgr_EntityOwner^ theItem)
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_NListOfEntityOwner*)_NativeInstance)->Append(Handle(::SelectMgr_EntityOwner)(theItem->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_NListOfEntityOwner::Prepend(Macad::Occt::SelectMgr_EntityOwner^ theItem)
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_NListOfEntityOwner*)_NativeInstance)->Prepend(Handle(::SelectMgr_EntityOwner)(theItem->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_NListOfEntityOwner::RemoveFirst()
{
    ((::AIS_NListOfEntityOwner*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::AIS_NListOfEntityOwner::Remove(Macad::Occt::AIS_NListOfEntityOwner::Iterator^ theIter)
{
    ((::AIS_NListOfEntityOwner*)_NativeInstance)->Remove(*(::AIS_NListOfEntityOwner::Iterator*)theIter->NativeInstance);
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_NListOfEntityOwner::InsertBefore(Macad::Occt::SelectMgr_EntityOwner^ theItem, Macad::Occt::AIS_NListOfEntityOwner::Iterator^ theIter)
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_NListOfEntityOwner*)_NativeInstance)->InsertBefore(Handle(::SelectMgr_EntityOwner)(theItem->NativeInstance), *(::AIS_NListOfEntityOwner::Iterator*)theIter->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_NListOfEntityOwner::InsertAfter(Macad::Occt::SelectMgr_EntityOwner^ theItem, Macad::Occt::AIS_NListOfEntityOwner::Iterator^ theIter)
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_NListOfEntityOwner*)_NativeInstance)->InsertAfter(Handle(::SelectMgr_EntityOwner)(theItem->NativeInstance), *(::AIS_NListOfEntityOwner::Iterator*)theIter->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_NListOfEntityOwner::Reverse()
{
    ((::AIS_NListOfEntityOwner*)_NativeInstance)->Reverse();
}



//---------------------------------------------------------------------
//  Class  AIS_NListOfEntityOwner::Iterator
//---------------------------------------------------------------------

Macad::Occt::AIS_NListOfEntityOwner::Iterator::Iterator()
    : Macad::Occt::BaseClass<::AIS_NListOfEntityOwner::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_NListOfEntityOwner::Iterator();
}

bool Macad::Occt::AIS_NListOfEntityOwner::Iterator::More()
{
    bool _result = ((::AIS_NListOfEntityOwner::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::AIS_NListOfEntityOwner::Iterator::Next()
{
    ((::AIS_NListOfEntityOwner::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_NListOfEntityOwner::Iterator::Value()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_NListOfEntityOwner::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_NListOfEntityOwner::Iterator::ChangeValue()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_NListOfEntityOwner::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  AIS_DataMapOfShapeDrawer
//---------------------------------------------------------------------

Macad::Occt::AIS_DataMapOfShapeDrawer::AIS_DataMapOfShapeDrawer()
    : Macad::Occt::BaseClass<::AIS_DataMapOfShapeDrawer>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_DataMapOfShapeDrawer();
}

Macad::Occt::AIS_DataMapOfShapeDrawer::AIS_DataMapOfShapeDrawer(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::AIS_DataMapOfShapeDrawer>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_DataMapOfShapeDrawer(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::AIS_DataMapOfShapeDrawer::AIS_DataMapOfShapeDrawer(int theNbBuckets)
    : Macad::Occt::BaseClass<::AIS_DataMapOfShapeDrawer>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_DataMapOfShapeDrawer(theNbBuckets, 0L);
}

void Macad::Occt::AIS_DataMapOfShapeDrawer::Exchange(Macad::Occt::AIS_DataMapOfShapeDrawer^ theOther)
{
    ((::AIS_DataMapOfShapeDrawer*)_NativeInstance)->Exchange(*(::AIS_DataMapOfShapeDrawer*)theOther->NativeInstance);
}

Macad::Occt::AIS_DataMapOfShapeDrawer^ Macad::Occt::AIS_DataMapOfShapeDrawer::Assign(Macad::Occt::AIS_DataMapOfShapeDrawer^ theOther)
{
    ::AIS_DataMapOfShapeDrawer* _result = new ::AIS_DataMapOfShapeDrawer();
    *_result = ((::AIS_DataMapOfShapeDrawer*)_NativeInstance)->Assign(*(::AIS_DataMapOfShapeDrawer*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::AIS_DataMapOfShapeDrawer(_result);
}

void Macad::Occt::AIS_DataMapOfShapeDrawer::ReSize(int N)
{
    ((::AIS_DataMapOfShapeDrawer*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::AIS_DataMapOfShapeDrawer::Bind(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::AIS_ColoredDrawer^ theItem)
{
    bool _result = ((::AIS_DataMapOfShapeDrawer*)_NativeInstance)->Bind(*(::TopoDS_Shape*)theKey->NativeInstance, Handle(::AIS_ColoredDrawer)(theItem->NativeInstance));
    return _result;
}

Macad::Occt::AIS_ColoredDrawer^ Macad::Occt::AIS_DataMapOfShapeDrawer::Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::AIS_ColoredDrawer^ theItem)
{
    throw gcnew System::NotImplementedException();
}

bool Macad::Occt::AIS_DataMapOfShapeDrawer::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::AIS_DataMapOfShapeDrawer*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

bool Macad::Occt::AIS_DataMapOfShapeDrawer::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::AIS_DataMapOfShapeDrawer*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

Macad::Occt::AIS_ColoredDrawer^ Macad::Occt::AIS_DataMapOfShapeDrawer::Seek(Macad::Occt::TopoDS_Shape^ theKey)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::AIS_ColoredDrawer^ Macad::Occt::AIS_DataMapOfShapeDrawer::Find(Macad::Occt::TopoDS_Shape^ theKey)
{
    Handle(::AIS_ColoredDrawer) _result = ((::AIS_DataMapOfShapeDrawer*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_ColoredDrawer::CreateDowncasted(_result.get());
}

Macad::Occt::AIS_ColoredDrawer^ Macad::Occt::AIS_DataMapOfShapeDrawer::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::AIS_ColoredDrawer^ Macad::Occt::AIS_DataMapOfShapeDrawer::ChangeFind(Macad::Occt::TopoDS_Shape^ theKey)
{
    Handle(::AIS_ColoredDrawer) _result = ((::AIS_DataMapOfShapeDrawer*)_NativeInstance)->ChangeFind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_ColoredDrawer::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_DataMapOfShapeDrawer::Clear(bool doReleaseMemory)
{
    ((::AIS_DataMapOfShapeDrawer*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::AIS_DataMapOfShapeDrawer::Clear()
{
    ((::AIS_DataMapOfShapeDrawer*)_NativeInstance)->Clear(false);
}

int Macad::Occt::AIS_DataMapOfShapeDrawer::Size()
{
    int _result = ((::AIS_DataMapOfShapeDrawer*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  AIS_DataMapOfShapeDrawer::Iterator
//---------------------------------------------------------------------

Macad::Occt::AIS_DataMapOfShapeDrawer::Iterator::Iterator()
    : Macad::Occt::BaseClass<::AIS_DataMapOfShapeDrawer::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_DataMapOfShapeDrawer::Iterator();
}

bool Macad::Occt::AIS_DataMapOfShapeDrawer::Iterator::More()
{
    bool _result = ((::AIS_DataMapOfShapeDrawer::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::AIS_DataMapOfShapeDrawer::Iterator::Next()
{
    ((::AIS_DataMapOfShapeDrawer::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::AIS_ColoredDrawer^ Macad::Occt::AIS_DataMapOfShapeDrawer::Iterator::Value()
{
    Handle(::AIS_ColoredDrawer) _result = ((::AIS_DataMapOfShapeDrawer::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_ColoredDrawer::CreateDowncasted(_result.get());
}

Macad::Occt::AIS_ColoredDrawer^ Macad::Occt::AIS_DataMapOfShapeDrawer::Iterator::ChangeValue()
{
    Handle(::AIS_ColoredDrawer) _result = ((::AIS_DataMapOfShapeDrawer::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_ColoredDrawer::CreateDowncasted(_result.get());
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::AIS_DataMapOfShapeDrawer::Iterator::Key()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::AIS_DataMapOfShapeDrawer::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  AIS_MouseGestureMap
//---------------------------------------------------------------------

Macad::Occt::AIS_MouseGestureMap::AIS_MouseGestureMap()
    : Macad::Occt::BaseClass<::AIS_MouseGestureMap>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_MouseGestureMap();
}

Macad::Occt::AIS_MouseGestureMap::AIS_MouseGestureMap(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::AIS_MouseGestureMap>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_MouseGestureMap(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::AIS_MouseGestureMap::AIS_MouseGestureMap(int theNbBuckets)
    : Macad::Occt::BaseClass<::AIS_MouseGestureMap>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_MouseGestureMap(theNbBuckets, 0L);
}

void Macad::Occt::AIS_MouseGestureMap::Exchange(Macad::Occt::AIS_MouseGestureMap^ theOther)
{
    ((::AIS_MouseGestureMap*)_NativeInstance)->Exchange(*(::AIS_MouseGestureMap*)theOther->NativeInstance);
}

Macad::Occt::AIS_MouseGestureMap^ Macad::Occt::AIS_MouseGestureMap::Assign(Macad::Occt::AIS_MouseGestureMap^ theOther)
{
    ::AIS_MouseGestureMap* _result = new ::AIS_MouseGestureMap();
    *_result = ((::AIS_MouseGestureMap*)_NativeInstance)->Assign(*(::AIS_MouseGestureMap*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::AIS_MouseGestureMap(_result);
}

void Macad::Occt::AIS_MouseGestureMap::ReSize(int N)
{
    ((::AIS_MouseGestureMap*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::AIS_MouseGestureMap::Bind(unsigned int theKey, Macad::Occt::AIS_MouseGesture theItem)
{
    pin_ptr<unsigned int> pp_theKey = &theKey;
    pin_ptr<Macad::Occt::AIS_MouseGesture> pp_theItem = &theItem;
    bool _result = ((::AIS_MouseGestureMap*)_NativeInstance)->Bind(*(unsigned int*)pp_theKey, *(::AIS_MouseGesture*)pp_theItem);
    return _result;
}

Macad::Occt::AIS_MouseGesture Macad::Occt::AIS_MouseGestureMap::Bound(unsigned int theKey, Macad::Occt::AIS_MouseGesture theItem)
{
    pin_ptr<unsigned int> pp_theKey = &theKey;
    pin_ptr<Macad::Occt::AIS_MouseGesture> pp_theItem = &theItem;
    const ::AIS_MouseGesture* _result = ((::AIS_MouseGestureMap*)_NativeInstance)->Bound(*(unsigned int*)pp_theKey, *(::AIS_MouseGesture*)pp_theItem);
    return (Macad::Occt::AIS_MouseGesture)*_result;
}

bool Macad::Occt::AIS_MouseGestureMap::IsBound(unsigned int theKey)
{
    pin_ptr<unsigned int> pp_theKey = &theKey;
    bool _result = ((::AIS_MouseGestureMap*)_NativeInstance)->IsBound(*(unsigned int*)pp_theKey);
    return _result;
}

bool Macad::Occt::AIS_MouseGestureMap::UnBind(unsigned int theKey)
{
    pin_ptr<unsigned int> pp_theKey = &theKey;
    bool _result = ((::AIS_MouseGestureMap*)_NativeInstance)->UnBind(*(unsigned int*)pp_theKey);
    return _result;
}

Macad::Occt::AIS_MouseGesture Macad::Occt::AIS_MouseGestureMap::Seek(unsigned int theKey)
{
    pin_ptr<unsigned int> pp_theKey = &theKey;
    const ::AIS_MouseGesture* _result = ((::AIS_MouseGestureMap*)_NativeInstance)->Seek(*(unsigned int*)pp_theKey);
    return (Macad::Occt::AIS_MouseGesture)*_result;
}

Macad::Occt::AIS_MouseGesture Macad::Occt::AIS_MouseGestureMap::Find(unsigned int theKey)
{
    pin_ptr<unsigned int> pp_theKey = &theKey;
    ::AIS_MouseGesture _result = ((::AIS_MouseGestureMap*)_NativeInstance)->Find(*(unsigned int*)pp_theKey);
    return (Macad::Occt::AIS_MouseGesture)_result;
}

Macad::Occt::AIS_MouseGesture Macad::Occt::AIS_MouseGestureMap::ChangeSeek(unsigned int theKey)
{
    pin_ptr<unsigned int> pp_theKey = &theKey;
    const ::AIS_MouseGesture* _result = ((::AIS_MouseGestureMap*)_NativeInstance)->ChangeSeek(*(unsigned int*)pp_theKey);
    return (Macad::Occt::AIS_MouseGesture)*_result;
}

Macad::Occt::AIS_MouseGesture Macad::Occt::AIS_MouseGestureMap::ChangeFind(unsigned int theKey)
{
    pin_ptr<unsigned int> pp_theKey = &theKey;
    ::AIS_MouseGesture _result = ((::AIS_MouseGestureMap*)_NativeInstance)->ChangeFind(*(unsigned int*)pp_theKey);
    return (Macad::Occt::AIS_MouseGesture)_result;
}

void Macad::Occt::AIS_MouseGestureMap::Clear(bool doReleaseMemory)
{
    ((::AIS_MouseGestureMap*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::AIS_MouseGestureMap::Clear()
{
    ((::AIS_MouseGestureMap*)_NativeInstance)->Clear(false);
}

int Macad::Occt::AIS_MouseGestureMap::Size()
{
    int _result = ((::AIS_MouseGestureMap*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  AIS_MouseGestureMap::Iterator
//---------------------------------------------------------------------

Macad::Occt::AIS_MouseGestureMap::Iterator::Iterator()
    : Macad::Occt::BaseClass<::AIS_MouseGestureMap::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_MouseGestureMap::Iterator();
}

bool Macad::Occt::AIS_MouseGestureMap::Iterator::More()
{
    bool _result = ((::AIS_MouseGestureMap::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::AIS_MouseGestureMap::Iterator::Next()
{
    ((::AIS_MouseGestureMap::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::AIS_MouseGesture Macad::Occt::AIS_MouseGestureMap::Iterator::Value()
{
    ::AIS_MouseGesture _result = ((::AIS_MouseGestureMap::Iterator*)_NativeInstance)->Value();
    return (Macad::Occt::AIS_MouseGesture)_result;
}

Macad::Occt::AIS_MouseGesture Macad::Occt::AIS_MouseGestureMap::Iterator::ChangeValue()
{
    ::AIS_MouseGesture _result = ((::AIS_MouseGestureMap::Iterator*)_NativeInstance)->ChangeValue();
    return (Macad::Occt::AIS_MouseGesture)_result;
}

unsigned int Macad::Occt::AIS_MouseGestureMap::Iterator::Key()
{
    unsigned int _result = ((::AIS_MouseGestureMap::Iterator*)_NativeInstance)->Key();
    return _result;
}



//---------------------------------------------------------------------
//  Class  AIS_MouseSelectionSchemeMap
//---------------------------------------------------------------------

Macad::Occt::AIS_MouseSelectionSchemeMap::AIS_MouseSelectionSchemeMap()
    : Macad::Occt::BaseClass<::AIS_MouseSelectionSchemeMap>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_MouseSelectionSchemeMap();
}

Macad::Occt::AIS_MouseSelectionSchemeMap::AIS_MouseSelectionSchemeMap(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::AIS_MouseSelectionSchemeMap>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_MouseSelectionSchemeMap(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::AIS_MouseSelectionSchemeMap::AIS_MouseSelectionSchemeMap(int theNbBuckets)
    : Macad::Occt::BaseClass<::AIS_MouseSelectionSchemeMap>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_MouseSelectionSchemeMap(theNbBuckets, 0L);
}

void Macad::Occt::AIS_MouseSelectionSchemeMap::Exchange(Macad::Occt::AIS_MouseSelectionSchemeMap^ theOther)
{
    ((::AIS_MouseSelectionSchemeMap*)_NativeInstance)->Exchange(*(::AIS_MouseSelectionSchemeMap*)theOther->NativeInstance);
}

Macad::Occt::AIS_MouseSelectionSchemeMap^ Macad::Occt::AIS_MouseSelectionSchemeMap::Assign(Macad::Occt::AIS_MouseSelectionSchemeMap^ theOther)
{
    ::AIS_MouseSelectionSchemeMap* _result = new ::AIS_MouseSelectionSchemeMap();
    *_result = ((::AIS_MouseSelectionSchemeMap*)_NativeInstance)->Assign(*(::AIS_MouseSelectionSchemeMap*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::AIS_MouseSelectionSchemeMap(_result);
}

void Macad::Occt::AIS_MouseSelectionSchemeMap::ReSize(int N)
{
    ((::AIS_MouseSelectionSchemeMap*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::AIS_MouseSelectionSchemeMap::Bind(unsigned int theKey, Macad::Occt::AIS_SelectionScheme theItem)
{
    pin_ptr<unsigned int> pp_theKey = &theKey;
    pin_ptr<Macad::Occt::AIS_SelectionScheme> pp_theItem = &theItem;
    bool _result = ((::AIS_MouseSelectionSchemeMap*)_NativeInstance)->Bind(*(unsigned int*)pp_theKey, *(::AIS_SelectionScheme*)pp_theItem);
    return _result;
}

Macad::Occt::AIS_SelectionScheme Macad::Occt::AIS_MouseSelectionSchemeMap::Bound(unsigned int theKey, Macad::Occt::AIS_SelectionScheme theItem)
{
    pin_ptr<unsigned int> pp_theKey = &theKey;
    pin_ptr<Macad::Occt::AIS_SelectionScheme> pp_theItem = &theItem;
    const ::AIS_SelectionScheme* _result = ((::AIS_MouseSelectionSchemeMap*)_NativeInstance)->Bound(*(unsigned int*)pp_theKey, *(::AIS_SelectionScheme*)pp_theItem);
    return (Macad::Occt::AIS_SelectionScheme)*_result;
}

bool Macad::Occt::AIS_MouseSelectionSchemeMap::IsBound(unsigned int theKey)
{
    pin_ptr<unsigned int> pp_theKey = &theKey;
    bool _result = ((::AIS_MouseSelectionSchemeMap*)_NativeInstance)->IsBound(*(unsigned int*)pp_theKey);
    return _result;
}

bool Macad::Occt::AIS_MouseSelectionSchemeMap::UnBind(unsigned int theKey)
{
    pin_ptr<unsigned int> pp_theKey = &theKey;
    bool _result = ((::AIS_MouseSelectionSchemeMap*)_NativeInstance)->UnBind(*(unsigned int*)pp_theKey);
    return _result;
}

Macad::Occt::AIS_SelectionScheme Macad::Occt::AIS_MouseSelectionSchemeMap::Seek(unsigned int theKey)
{
    pin_ptr<unsigned int> pp_theKey = &theKey;
    const ::AIS_SelectionScheme* _result = ((::AIS_MouseSelectionSchemeMap*)_NativeInstance)->Seek(*(unsigned int*)pp_theKey);
    return (Macad::Occt::AIS_SelectionScheme)*_result;
}

Macad::Occt::AIS_SelectionScheme Macad::Occt::AIS_MouseSelectionSchemeMap::Find(unsigned int theKey)
{
    pin_ptr<unsigned int> pp_theKey = &theKey;
    ::AIS_SelectionScheme _result = ((::AIS_MouseSelectionSchemeMap*)_NativeInstance)->Find(*(unsigned int*)pp_theKey);
    return (Macad::Occt::AIS_SelectionScheme)_result;
}

Macad::Occt::AIS_SelectionScheme Macad::Occt::AIS_MouseSelectionSchemeMap::ChangeSeek(unsigned int theKey)
{
    pin_ptr<unsigned int> pp_theKey = &theKey;
    const ::AIS_SelectionScheme* _result = ((::AIS_MouseSelectionSchemeMap*)_NativeInstance)->ChangeSeek(*(unsigned int*)pp_theKey);
    return (Macad::Occt::AIS_SelectionScheme)*_result;
}

Macad::Occt::AIS_SelectionScheme Macad::Occt::AIS_MouseSelectionSchemeMap::ChangeFind(unsigned int theKey)
{
    pin_ptr<unsigned int> pp_theKey = &theKey;
    ::AIS_SelectionScheme _result = ((::AIS_MouseSelectionSchemeMap*)_NativeInstance)->ChangeFind(*(unsigned int*)pp_theKey);
    return (Macad::Occt::AIS_SelectionScheme)_result;
}

void Macad::Occt::AIS_MouseSelectionSchemeMap::Clear(bool doReleaseMemory)
{
    ((::AIS_MouseSelectionSchemeMap*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::AIS_MouseSelectionSchemeMap::Clear()
{
    ((::AIS_MouseSelectionSchemeMap*)_NativeInstance)->Clear(false);
}

int Macad::Occt::AIS_MouseSelectionSchemeMap::Size()
{
    int _result = ((::AIS_MouseSelectionSchemeMap*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  AIS_MouseSelectionSchemeMap::Iterator
//---------------------------------------------------------------------

Macad::Occt::AIS_MouseSelectionSchemeMap::Iterator::Iterator()
    : Macad::Occt::BaseClass<::AIS_MouseSelectionSchemeMap::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_MouseSelectionSchemeMap::Iterator();
}

bool Macad::Occt::AIS_MouseSelectionSchemeMap::Iterator::More()
{
    bool _result = ((::AIS_MouseSelectionSchemeMap::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::AIS_MouseSelectionSchemeMap::Iterator::Next()
{
    ((::AIS_MouseSelectionSchemeMap::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::AIS_SelectionScheme Macad::Occt::AIS_MouseSelectionSchemeMap::Iterator::Value()
{
    ::AIS_SelectionScheme _result = ((::AIS_MouseSelectionSchemeMap::Iterator*)_NativeInstance)->Value();
    return (Macad::Occt::AIS_SelectionScheme)_result;
}

Macad::Occt::AIS_SelectionScheme Macad::Occt::AIS_MouseSelectionSchemeMap::Iterator::ChangeValue()
{
    ::AIS_SelectionScheme _result = ((::AIS_MouseSelectionSchemeMap::Iterator*)_NativeInstance)->ChangeValue();
    return (Macad::Occt::AIS_SelectionScheme)_result;
}

unsigned int Macad::Occt::AIS_MouseSelectionSchemeMap::Iterator::Key()
{
    unsigned int _result = ((::AIS_MouseSelectionSchemeMap::Iterator*)_NativeInstance)->Key();
    return _result;
}



//---------------------------------------------------------------------
//  Class  AIS_AnimationProgress
//---------------------------------------------------------------------

Macad::Occt::AIS_AnimationProgress::AIS_AnimationProgress()
    : Macad::Occt::BaseClass<::AIS_AnimationProgress>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_AnimationProgress();
}



//---------------------------------------------------------------------
//  Class  AIS_WalkPart
//---------------------------------------------------------------------

Macad::Occt::AIS_WalkPart::AIS_WalkPart()
    : Macad::Occt::BaseClass<::AIS_WalkPart>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_WalkPart();
}

bool Macad::Occt::AIS_WalkPart::IsEmpty()
{
    bool _result = ((::AIS_WalkPart*)_NativeInstance)->IsEmpty();
    return _result;
}



//---------------------------------------------------------------------
//  Class  AIS_WalkDelta
//---------------------------------------------------------------------

Macad::Occt::AIS_WalkDelta::AIS_WalkDelta()
    : Macad::Occt::BaseClass<::AIS_WalkDelta>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_WalkDelta();
}

bool Macad::Occt::AIS_WalkDelta::IsJumping()
{
    bool _result = ((::AIS_WalkDelta*)_NativeInstance)->IsJumping();
    return _result;
}

void Macad::Occt::AIS_WalkDelta::SetJumping(bool theIsJumping)
{
    ((::AIS_WalkDelta*)_NativeInstance)->SetJumping(theIsJumping);
}

bool Macad::Occt::AIS_WalkDelta::IsCrouching()
{
    bool _result = ((::AIS_WalkDelta*)_NativeInstance)->IsCrouching();
    return _result;
}

void Macad::Occt::AIS_WalkDelta::SetCrouching(bool theIsCrouching)
{
    ((::AIS_WalkDelta*)_NativeInstance)->SetCrouching(theIsCrouching);
}

bool Macad::Occt::AIS_WalkDelta::IsRunning()
{
    bool _result = ((::AIS_WalkDelta*)_NativeInstance)->IsRunning();
    return _result;
}

void Macad::Occt::AIS_WalkDelta::SetRunning(bool theIsRunning)
{
    ((::AIS_WalkDelta*)_NativeInstance)->SetRunning(theIsRunning);
}

bool Macad::Occt::AIS_WalkDelta::IsDefined()
{
    bool _result = ((::AIS_WalkDelta*)_NativeInstance)->IsDefined();
    return _result;
}

void Macad::Occt::AIS_WalkDelta::SetDefined(bool theIsDefined)
{
    ((::AIS_WalkDelta*)_NativeInstance)->SetDefined(theIsDefined);
}

bool Macad::Occt::AIS_WalkDelta::IsEmpty()
{
    bool _result = ((::AIS_WalkDelta*)_NativeInstance)->IsEmpty();
    return _result;
}

bool Macad::Occt::AIS_WalkDelta::ToMove()
{
    bool _result = ((::AIS_WalkDelta*)_NativeInstance)->ToMove();
    return _result;
}

bool Macad::Occt::AIS_WalkDelta::ToRotate()
{
    bool _result = ((::AIS_WalkDelta*)_NativeInstance)->ToRotate();
    return _result;
}



//---------------------------------------------------------------------
//  Class  AIS
//---------------------------------------------------------------------

Macad::Occt::AIS::AIS()
    : Macad::Occt::BaseClass<::AIS>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS();
}



//---------------------------------------------------------------------
//  Class  AIS_InteractiveContext
//---------------------------------------------------------------------

Macad::Occt::AIS_InteractiveContext::AIS_InteractiveContext(Macad::Occt::V3d_Viewer^ MainViewer)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_InteractiveContext(Handle(::V3d_Viewer)(MainViewer->NativeInstance));
}

Macad::Occt::PrsMgr_DisplayStatus Macad::Occt::AIS_InteractiveContext::DisplayStatus(Macad::Occt::AIS_InteractiveObject^ anIobj)
{
    ::PrsMgr_DisplayStatus _result = ((::AIS_InteractiveContext*)_NativeInstance)->DisplayStatus(Handle(::AIS_InteractiveObject)(anIobj->NativeInstance));
    return (Macad::Occt::PrsMgr_DisplayStatus)_result;
}

void Macad::Occt::AIS_InteractiveContext::Status(Macad::Occt::AIS_InteractiveObject^ anObj, Macad::Occt::TCollection_ExtendedString^ astatus)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Status(Handle(::AIS_InteractiveObject)(anObj->NativeInstance), *(::TCollection_ExtendedString*)astatus->NativeInstance);
}

bool Macad::Occt::AIS_InteractiveContext::IsDisplayed(Macad::Occt::AIS_InteractiveObject^ anIobj)
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->IsDisplayed(Handle(::AIS_InteractiveObject)(anIobj->NativeInstance));
    return _result;
}

bool Macad::Occt::AIS_InteractiveContext::IsDisplayed(Macad::Occt::AIS_InteractiveObject^ aniobj, int aMode)
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->IsDisplayed(Handle(::AIS_InteractiveObject)(aniobj->NativeInstance), aMode);
    return _result;
}

void Macad::Occt::AIS_InteractiveContext::SetAutoActivateSelection(bool theIsAuto)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetAutoActivateSelection(theIsAuto);
}

bool Macad::Occt::AIS_InteractiveContext::GetAutoActivateSelection()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->GetAutoActivateSelection();
    return _result;
}

void Macad::Occt::AIS_InteractiveContext::Display(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Display(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::Display(Macad::Occt::AIS_InteractiveObject^ theIObj, int theDispMode, int theSelectionMode, bool theToUpdateViewer, Macad::Occt::PrsMgr_DisplayStatus theDispStatus)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Display(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theDispMode, theSelectionMode, theToUpdateViewer, (::PrsMgr_DisplayStatus)theDispStatus);
}

void Macad::Occt::AIS_InteractiveContext::Display(Macad::Occt::AIS_InteractiveObject^ theIObj, int theDispMode, int theSelectionMode, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Display(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theDispMode, theSelectionMode, theToUpdateViewer, PrsMgr_DisplayStatus_None);
}

void Macad::Occt::AIS_InteractiveContext::Load(Macad::Occt::AIS_InteractiveObject^ theObj, int theSelectionMode)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Load(Handle(::AIS_InteractiveObject)(theObj->NativeInstance), theSelectionMode);
}

void Macad::Occt::AIS_InteractiveContext::Load(Macad::Occt::AIS_InteractiveObject^ theObj)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Load(Handle(::AIS_InteractiveObject)(theObj->NativeInstance), -1);
}

void Macad::Occt::AIS_InteractiveContext::Erase(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Erase(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::EraseAll(bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->EraseAll(theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::DisplayAll(bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->DisplayAll(theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::EraseSelected(bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->EraseSelected(theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::DisplaySelected(bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->DisplaySelected(theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::ClearPrs(Macad::Occt::AIS_InteractiveObject^ theIObj, int theMode, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->ClearPrs(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theMode, theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::Remove(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Remove(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::RemoveAll(bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->RemoveAll(theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::Redisplay(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer, bool theAllModes)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Redisplay(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theToUpdateViewer, theAllModes);
}

void Macad::Occt::AIS_InteractiveContext::Redisplay(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Redisplay(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theToUpdateViewer, false);
}

void Macad::Occt::AIS_InteractiveContext::Redisplay(Macad::Occt::AIS_KindOfInteractive theTypeOfObject, int theSignature, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Redisplay((::AIS_KindOfInteractive)theTypeOfObject, theSignature, theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::RecomputePrsOnly(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer, bool theAllModes)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->RecomputePrsOnly(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theToUpdateViewer, theAllModes);
}

void Macad::Occt::AIS_InteractiveContext::RecomputePrsOnly(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->RecomputePrsOnly(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theToUpdateViewer, false);
}

void Macad::Occt::AIS_InteractiveContext::RecomputeSelectionOnly(Macad::Occt::AIS_InteractiveObject^ anIObj)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->RecomputeSelectionOnly(Handle(::AIS_InteractiveObject)(anIObj->NativeInstance));
}

void Macad::Occt::AIS_InteractiveContext::Update(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Update(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theUpdateViewer);
}

Macad::Occt::Prs3d_Drawer^ Macad::Occt::AIS_InteractiveContext::HighlightStyle(Macad::Occt::Prs3d_TypeOfHighlight theStyleType)
{
    Handle(::Prs3d_Drawer) _result = ((::AIS_InteractiveContext*)_NativeInstance)->HighlightStyle((::Prs3d_TypeOfHighlight)theStyleType);
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_Drawer::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_InteractiveContext::SetHighlightStyle(Macad::Occt::Prs3d_TypeOfHighlight theStyleType, Macad::Occt::Prs3d_Drawer^ theStyle)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetHighlightStyle((::Prs3d_TypeOfHighlight)theStyleType, Handle(::Prs3d_Drawer)(theStyle->NativeInstance));
}

Macad::Occt::Prs3d_Drawer^ Macad::Occt::AIS_InteractiveContext::HighlightStyle()
{
    Handle(::Prs3d_Drawer) _result = ((::AIS_InteractiveContext*)_NativeInstance)->HighlightStyle();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_Drawer::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_InteractiveContext::SetHighlightStyle(Macad::Occt::Prs3d_Drawer^ theStyle)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetHighlightStyle(Handle(::Prs3d_Drawer)(theStyle->NativeInstance));
}

Macad::Occt::Prs3d_Drawer^ Macad::Occt::AIS_InteractiveContext::SelectionStyle()
{
    Handle(::Prs3d_Drawer) _result = ((::AIS_InteractiveContext*)_NativeInstance)->SelectionStyle();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_Drawer::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_InteractiveContext::SetSelectionStyle(Macad::Occt::Prs3d_Drawer^ theStyle)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetSelectionStyle(Handle(::Prs3d_Drawer)(theStyle->NativeInstance));
}

bool Macad::Occt::AIS_InteractiveContext::HighlightStyle(Macad::Occt::AIS_InteractiveObject^ theObj, Macad::Occt::Prs3d_Drawer^ theStyle)
{
    Handle(::Prs3d_Drawer) h_theStyle = theStyle->NativeInstance;
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->HighlightStyle(Handle(::AIS_InteractiveObject)(theObj->NativeInstance), h_theStyle);
    theStyle->NativeInstance = h_theStyle.get();
    return _result;
}

bool Macad::Occt::AIS_InteractiveContext::HighlightStyle(Macad::Occt::SelectMgr_EntityOwner^ theOwner, Macad::Occt::Prs3d_Drawer^ theStyle)
{
    Handle(::Prs3d_Drawer) h_theStyle = theStyle->NativeInstance;
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->HighlightStyle(Handle(::SelectMgr_EntityOwner)(theOwner->NativeInstance), h_theStyle);
    theStyle->NativeInstance = h_theStyle.get();
    return _result;
}

bool Macad::Occt::AIS_InteractiveContext::IsHilighted(Macad::Occt::AIS_InteractiveObject^ theObj)
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->IsHilighted(Handle(::AIS_InteractiveObject)(theObj->NativeInstance));
    return _result;
}

bool Macad::Occt::AIS_InteractiveContext::IsHilighted(Macad::Occt::SelectMgr_EntityOwner^ theOwner)
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->IsHilighted(Handle(::SelectMgr_EntityOwner)(theOwner->NativeInstance));
    return _result;
}

void Macad::Occt::AIS_InteractiveContext::HilightWithColor(Macad::Occt::AIS_InteractiveObject^ theObj, Macad::Occt::Prs3d_Drawer^ theStyle, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->HilightWithColor(Handle(::AIS_InteractiveObject)(theObj->NativeInstance), Handle(::Prs3d_Drawer)(theStyle->NativeInstance), theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::Unhilight(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Unhilight(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theToUpdateViewer);
}

Macad::Occt::Graphic3d_DisplayPriority Macad::Occt::AIS_InteractiveContext::DisplayPriority(Macad::Occt::AIS_InteractiveObject^ theIObj)
{
    ::Graphic3d_DisplayPriority _result = ((::AIS_InteractiveContext*)_NativeInstance)->DisplayPriority(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance));
    return (Macad::Occt::Graphic3d_DisplayPriority)_result;
}

void Macad::Occt::AIS_InteractiveContext::SetDisplayPriority(Macad::Occt::AIS_InteractiveObject^ theIObj, Macad::Occt::Graphic3d_DisplayPriority thePriority)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetDisplayPriority(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), (::Graphic3d_DisplayPriority)thePriority);
}

void Macad::Occt::AIS_InteractiveContext::SetDisplayPriority(Macad::Occt::AIS_InteractiveObject^ theIObj, int thePriority)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetDisplayPriority(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), thePriority);
}

int Macad::Occt::AIS_InteractiveContext::GetZLayer(Macad::Occt::AIS_InteractiveObject^ theIObj)
{
    int _result = ((::AIS_InteractiveContext*)_NativeInstance)->GetZLayer(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance));
    return _result;
}

void Macad::Occt::AIS_InteractiveContext::SetZLayer(Macad::Occt::AIS_InteractiveObject^ theIObj, int theLayerId)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetZLayer(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theLayerId);
}

void Macad::Occt::AIS_InteractiveContext::SetViewAffinity(Macad::Occt::AIS_InteractiveObject^ theIObj, Macad::Occt::V3d_View^ theView, bool theIsVisible)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetViewAffinity(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), Handle(::V3d_View)(theView->NativeInstance), theIsVisible);
}

int Macad::Occt::AIS_InteractiveContext::DisplayMode()
{
    int _result = ((::AIS_InteractiveContext*)_NativeInstance)->DisplayMode();
    return _result;
}

void Macad::Occt::AIS_InteractiveContext::SetDisplayMode(int theMode, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetDisplayMode(theMode, theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::SetDisplayMode(Macad::Occt::AIS_InteractiveObject^ theIObj, int theMode, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetDisplayMode(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theMode, theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::UnsetDisplayMode(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->UnsetDisplayMode(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::SetLocation(Macad::Occt::AIS_InteractiveObject^ theObject, Macad::Occt::TopLoc_Location^ theLocation)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetLocation(Handle(::AIS_InteractiveObject)(theObject->NativeInstance), *(::TopLoc_Location*)theLocation->NativeInstance);
}

void Macad::Occt::AIS_InteractiveContext::ResetLocation(Macad::Occt::AIS_InteractiveObject^ theObject)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->ResetLocation(Handle(::AIS_InteractiveObject)(theObject->NativeInstance));
}

bool Macad::Occt::AIS_InteractiveContext::HasLocation(Macad::Occt::AIS_InteractiveObject^ theObject)
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->HasLocation(Handle(::AIS_InteractiveObject)(theObject->NativeInstance));
    return _result;
}

Macad::Occt::TopLoc_Location^ Macad::Occt::AIS_InteractiveContext::Location(Macad::Occt::AIS_InteractiveObject^ theObject)
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = ((::AIS_InteractiveContext*)_NativeInstance)->Location(Handle(::AIS_InteractiveObject)(theObject->NativeInstance));
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

void Macad::Occt::AIS_InteractiveContext::SetTransformPersistence(Macad::Occt::AIS_InteractiveObject^ theObject, Macad::Occt::Graphic3d_TransformPers^ theTrsfPers)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetTransformPersistence(Handle(::AIS_InteractiveObject)(theObject->NativeInstance), Handle(::Graphic3d_TransformPers)(theTrsfPers->NativeInstance));
}

void Macad::Occt::AIS_InteractiveContext::SetPixelTolerance(int thePrecision)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetPixelTolerance(thePrecision);
}

void Macad::Occt::AIS_InteractiveContext::SetPixelTolerance()
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetPixelTolerance(2);
}

int Macad::Occt::AIS_InteractiveContext::PixelTolerance()
{
    int _result = ((::AIS_InteractiveContext*)_NativeInstance)->PixelTolerance();
    return _result;
}

void Macad::Occt::AIS_InteractiveContext::SetSelectionSensitivity(Macad::Occt::AIS_InteractiveObject^ theObject, int theMode, int theNewSensitivity)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetSelectionSensitivity(Handle(::AIS_InteractiveObject)(theObject->NativeInstance), theMode, theNewSensitivity);
}

Macad::Occt::V3d_View^ Macad::Occt::AIS_InteractiveContext::LastActiveView()
{
    Handle(::V3d_View) _result = ((::AIS_InteractiveContext*)_NativeInstance)->LastActiveView();
    return _result.IsNull() ? nullptr : Macad::Occt::V3d_View::CreateDowncasted(_result.get());
}

Macad::Occt::AIS_StatusOfDetection Macad::Occt::AIS_InteractiveContext::MoveTo(int theXPix, int theYPix, Macad::Occt::V3d_View^ theView, bool theToRedrawOnUpdate)
{
    ::AIS_StatusOfDetection _result = ((::AIS_InteractiveContext*)_NativeInstance)->MoveTo(theXPix, theYPix, Handle(::V3d_View)(theView->NativeInstance), theToRedrawOnUpdate);
    return (Macad::Occt::AIS_StatusOfDetection)_result;
}

Macad::Occt::AIS_StatusOfDetection Macad::Occt::AIS_InteractiveContext::MoveTo(Macad::Occt::Ax1 theAxis, Macad::Occt::V3d_View^ theView, bool theToRedrawOnUpdate)
{
    pin_ptr<Macad::Occt::Ax1> pp_theAxis = &theAxis;
    ::AIS_StatusOfDetection _result = ((::AIS_InteractiveContext*)_NativeInstance)->MoveTo(*(gp_Ax1*)pp_theAxis, Handle(::V3d_View)(theView->NativeInstance), theToRedrawOnUpdate);
    return (Macad::Occt::AIS_StatusOfDetection)_result;
}

bool Macad::Occt::AIS_InteractiveContext::ClearDetected(bool theToRedrawImmediate)
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->ClearDetected(theToRedrawImmediate);
    return _result;
}

bool Macad::Occt::AIS_InteractiveContext::ClearDetected()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->ClearDetected(false);
    return _result;
}

bool Macad::Occt::AIS_InteractiveContext::HasDetected()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->HasDetected();
    return _result;
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_InteractiveContext::DetectedOwner()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_InteractiveContext*)_NativeInstance)->DetectedOwner();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_InteractiveContext::DetectedInteractive()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_InteractiveContext*)_NativeInstance)->DetectedInteractive();
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

bool Macad::Occt::AIS_InteractiveContext::HasDetectedShape()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->HasDetectedShape();
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::AIS_InteractiveContext::DetectedShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::AIS_InteractiveContext*)_NativeInstance)->DetectedShape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::AIS_InteractiveContext::HasNextDetected()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->HasNextDetected();
    return _result;
}

int Macad::Occt::AIS_InteractiveContext::HilightNextDetected(Macad::Occt::V3d_View^ theView, bool theToRedrawImmediate)
{
    int _result = ((::AIS_InteractiveContext*)_NativeInstance)->HilightNextDetected(Handle(::V3d_View)(theView->NativeInstance), theToRedrawImmediate);
    return _result;
}

int Macad::Occt::AIS_InteractiveContext::HilightNextDetected(Macad::Occt::V3d_View^ theView)
{
    int _result = ((::AIS_InteractiveContext*)_NativeInstance)->HilightNextDetected(Handle(::V3d_View)(theView->NativeInstance), true);
    return _result;
}

int Macad::Occt::AIS_InteractiveContext::HilightPreviousDetected(Macad::Occt::V3d_View^ theView, bool theToRedrawImmediate)
{
    int _result = ((::AIS_InteractiveContext*)_NativeInstance)->HilightPreviousDetected(Handle(::V3d_View)(theView->NativeInstance), theToRedrawImmediate);
    return _result;
}

int Macad::Occt::AIS_InteractiveContext::HilightPreviousDetected(Macad::Occt::V3d_View^ theView)
{
    int _result = ((::AIS_InteractiveContext*)_NativeInstance)->HilightPreviousDetected(Handle(::V3d_View)(theView->NativeInstance), true);
    return _result;
}

void Macad::Occt::AIS_InteractiveContext::InitDetected()
{
    ((::AIS_InteractiveContext*)_NativeInstance)->InitDetected();
}

bool Macad::Occt::AIS_InteractiveContext::MoreDetected()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->MoreDetected();
    return _result;
}

void Macad::Occt::AIS_InteractiveContext::NextDetected()
{
    ((::AIS_InteractiveContext*)_NativeInstance)->NextDetected();
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_InteractiveContext::DetectedCurrentOwner()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_InteractiveContext*)_NativeInstance)->DetectedCurrentOwner();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

Macad::Occt::AIS_StatusOfPick Macad::Occt::AIS_InteractiveContext::AddSelect(Macad::Occt::SelectMgr_EntityOwner^ theObject)
{
    ::AIS_StatusOfPick _result = ((::AIS_InteractiveContext*)_NativeInstance)->AddSelect(Handle(::SelectMgr_EntityOwner)(theObject->NativeInstance));
    return (Macad::Occt::AIS_StatusOfPick)_result;
}

Macad::Occt::AIS_StatusOfPick Macad::Occt::AIS_InteractiveContext::AddSelect(Macad::Occt::AIS_InteractiveObject^ theObject)
{
    ::AIS_StatusOfPick _result = ((::AIS_InteractiveContext*)_NativeInstance)->AddSelect(Handle(::AIS_InteractiveObject)(theObject->NativeInstance));
    return (Macad::Occt::AIS_StatusOfPick)_result;
}

Macad::Occt::AIS_StatusOfPick Macad::Occt::AIS_InteractiveContext::SelectRectangle(Macad::Occt::Graphic3d_Vec2i^ thePntMin, Macad::Occt::Graphic3d_Vec2i^ thePntMax, Macad::Occt::V3d_View^ theView, Macad::Occt::AIS_SelectionScheme theSelScheme)
{
    ::AIS_StatusOfPick _result = ((::AIS_InteractiveContext*)_NativeInstance)->SelectRectangle(*(::Graphic3d_Vec2i*)thePntMin->NativeInstance, *(::Graphic3d_Vec2i*)thePntMax->NativeInstance, Handle(::V3d_View)(theView->NativeInstance), (::AIS_SelectionScheme)theSelScheme);
    return (Macad::Occt::AIS_StatusOfPick)_result;
}

Macad::Occt::AIS_StatusOfPick Macad::Occt::AIS_InteractiveContext::SelectRectangle(Macad::Occt::Graphic3d_Vec2i^ thePntMin, Macad::Occt::Graphic3d_Vec2i^ thePntMax, Macad::Occt::V3d_View^ theView)
{
    ::AIS_StatusOfPick _result = ((::AIS_InteractiveContext*)_NativeInstance)->SelectRectangle(*(::Graphic3d_Vec2i*)thePntMin->NativeInstance, *(::Graphic3d_Vec2i*)thePntMax->NativeInstance, Handle(::V3d_View)(theView->NativeInstance), AIS_SelectionScheme_Replace);
    return (Macad::Occt::AIS_StatusOfPick)_result;
}

Macad::Occt::AIS_StatusOfPick Macad::Occt::AIS_InteractiveContext::SelectPolygon(Macad::Occt::TColgp_Array1OfPnt2d^ thePolyline, Macad::Occt::V3d_View^ theView, Macad::Occt::AIS_SelectionScheme theSelScheme)
{
    ::AIS_StatusOfPick _result = ((::AIS_InteractiveContext*)_NativeInstance)->SelectPolygon(*(::TColgp_Array1OfPnt2d*)thePolyline->NativeInstance, Handle(::V3d_View)(theView->NativeInstance), (::AIS_SelectionScheme)theSelScheme);
    return (Macad::Occt::AIS_StatusOfPick)_result;
}

Macad::Occt::AIS_StatusOfPick Macad::Occt::AIS_InteractiveContext::SelectPolygon(Macad::Occt::TColgp_Array1OfPnt2d^ thePolyline, Macad::Occt::V3d_View^ theView)
{
    ::AIS_StatusOfPick _result = ((::AIS_InteractiveContext*)_NativeInstance)->SelectPolygon(*(::TColgp_Array1OfPnt2d*)thePolyline->NativeInstance, Handle(::V3d_View)(theView->NativeInstance), AIS_SelectionScheme_Replace);
    return (Macad::Occt::AIS_StatusOfPick)_result;
}

Macad::Occt::AIS_StatusOfPick Macad::Occt::AIS_InteractiveContext::SelectPoint(Macad::Occt::Graphic3d_Vec2i^ thePnt, Macad::Occt::V3d_View^ theView, Macad::Occt::AIS_SelectionScheme theSelScheme)
{
    ::AIS_StatusOfPick _result = ((::AIS_InteractiveContext*)_NativeInstance)->SelectPoint(*(::Graphic3d_Vec2i*)thePnt->NativeInstance, Handle(::V3d_View)(theView->NativeInstance), (::AIS_SelectionScheme)theSelScheme);
    return (Macad::Occt::AIS_StatusOfPick)_result;
}

Macad::Occt::AIS_StatusOfPick Macad::Occt::AIS_InteractiveContext::SelectPoint(Macad::Occt::Graphic3d_Vec2i^ thePnt, Macad::Occt::V3d_View^ theView)
{
    ::AIS_StatusOfPick _result = ((::AIS_InteractiveContext*)_NativeInstance)->SelectPoint(*(::Graphic3d_Vec2i*)thePnt->NativeInstance, Handle(::V3d_View)(theView->NativeInstance), AIS_SelectionScheme_Replace);
    return (Macad::Occt::AIS_StatusOfPick)_result;
}

Macad::Occt::AIS_StatusOfPick Macad::Occt::AIS_InteractiveContext::SelectDetected(Macad::Occt::AIS_SelectionScheme theSelScheme)
{
    ::AIS_StatusOfPick _result = ((::AIS_InteractiveContext*)_NativeInstance)->SelectDetected((::AIS_SelectionScheme)theSelScheme);
    return (Macad::Occt::AIS_StatusOfPick)_result;
}

Macad::Occt::AIS_StatusOfPick Macad::Occt::AIS_InteractiveContext::SelectDetected()
{
    ::AIS_StatusOfPick _result = ((::AIS_InteractiveContext*)_NativeInstance)->SelectDetected(AIS_SelectionScheme_Replace);
    return (Macad::Occt::AIS_StatusOfPick)_result;
}

Macad::Occt::Bnd_Box^ Macad::Occt::AIS_InteractiveContext::BoundingBoxOfSelection(Macad::Occt::V3d_View^ theView)
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = ((::AIS_InteractiveContext*)_NativeInstance)->BoundingBoxOfSelection(Handle(::V3d_View)(theView->NativeInstance));
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::AIS_InteractiveContext::BoundingBoxOfSelection()
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = ((::AIS_InteractiveContext*)_NativeInstance)->BoundingBoxOfSelection();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::AIS_StatusOfPick Macad::Occt::AIS_InteractiveContext::Select(Macad::Occt::AIS_NArray1OfEntityOwner^ theOwners, Macad::Occt::AIS_SelectionScheme theSelScheme)
{
    ::AIS_StatusOfPick _result = ((::AIS_InteractiveContext*)_NativeInstance)->Select(*(::AIS_NArray1OfEntityOwner*)theOwners->NativeInstance, (::AIS_SelectionScheme)theSelScheme);
    return (Macad::Occt::AIS_StatusOfPick)_result;
}

void Macad::Occt::AIS_InteractiveContext::FitSelected(Macad::Occt::V3d_View^ theView, double theMargin, bool theToUpdate)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->FitSelected(Handle(::V3d_View)(theView->NativeInstance), theMargin, theToUpdate);
}

void Macad::Occt::AIS_InteractiveContext::FitSelected(Macad::Occt::V3d_View^ theView)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->FitSelected(Handle(::V3d_View)(theView->NativeInstance));
}

bool Macad::Occt::AIS_InteractiveContext::ToHilightSelected()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->ToHilightSelected();
    return _result;
}

void Macad::Occt::AIS_InteractiveContext::SetToHilightSelected(bool toHilight)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetToHilightSelected(toHilight);
}

bool Macad::Occt::AIS_InteractiveContext::AutomaticHilight()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->AutomaticHilight();
    return _result;
}

void Macad::Occt::AIS_InteractiveContext::SetAutomaticHilight(bool theStatus)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetAutomaticHilight(theStatus);
}

void Macad::Occt::AIS_InteractiveContext::SetSelected(Macad::Occt::SelectMgr_EntityOwner^ theOwners, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetSelected(Handle(::SelectMgr_EntityOwner)(theOwners->NativeInstance), theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::SetSelected(Macad::Occt::AIS_InteractiveObject^ theObject, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetSelected(Handle(::AIS_InteractiveObject)(theObject->NativeInstance), theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::AddOrRemoveSelected(Macad::Occt::AIS_InteractiveObject^ theObject, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->AddOrRemoveSelected(Handle(::AIS_InteractiveObject)(theObject->NativeInstance), theToUpdateViewer);
}

bool Macad::Occt::AIS_InteractiveContext::SetSelectedState(Macad::Occt::SelectMgr_EntityOwner^ theOwner, bool theIsSelected)
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->SetSelectedState(Handle(::SelectMgr_EntityOwner)(theOwner->NativeInstance), theIsSelected);
    return _result;
}

void Macad::Occt::AIS_InteractiveContext::HilightSelected(bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->HilightSelected(theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::UnhilightSelected(bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->UnhilightSelected(theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::UpdateSelected(bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->UpdateSelected(theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::ClearSelected(bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->ClearSelected(theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::AddOrRemoveSelected(Macad::Occt::SelectMgr_EntityOwner^ theOwner, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->AddOrRemoveSelected(Handle(::SelectMgr_EntityOwner)(theOwner->NativeInstance), theToUpdateViewer);
}

bool Macad::Occt::AIS_InteractiveContext::IsSelected(Macad::Occt::SelectMgr_EntityOwner^ theOwner)
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->IsSelected(Handle(::SelectMgr_EntityOwner)(theOwner->NativeInstance));
    return _result;
}

bool Macad::Occt::AIS_InteractiveContext::IsSelected(Macad::Occt::AIS_InteractiveObject^ theObj)
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->IsSelected(Handle(::AIS_InteractiveObject)(theObj->NativeInstance));
    return _result;
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_InteractiveContext::FirstSelectedObject()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_InteractiveContext*)_NativeInstance)->FirstSelectedObject();
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

int Macad::Occt::AIS_InteractiveContext::NbSelected()
{
    int _result = ((::AIS_InteractiveContext*)_NativeInstance)->NbSelected();
    return _result;
}

void Macad::Occt::AIS_InteractiveContext::InitSelected()
{
    ((::AIS_InteractiveContext*)_NativeInstance)->InitSelected();
}

bool Macad::Occt::AIS_InteractiveContext::MoreSelected()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->MoreSelected();
    return _result;
}

void Macad::Occt::AIS_InteractiveContext::NextSelected()
{
    ((::AIS_InteractiveContext*)_NativeInstance)->NextSelected();
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_InteractiveContext::SelectedOwner()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_InteractiveContext*)_NativeInstance)->SelectedOwner();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_InteractiveContext::SelectedInteractive()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_InteractiveContext*)_NativeInstance)->SelectedInteractive();
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

bool Macad::Occt::AIS_InteractiveContext::HasSelectedShape()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->HasSelectedShape();
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::AIS_InteractiveContext::SelectedShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::AIS_InteractiveContext*)_NativeInstance)->SelectedShape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::AIS_InteractiveContext::HasApplicative()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->HasApplicative();
    return _result;
}

Macad::Occt::Standard_Transient^ Macad::Occt::AIS_InteractiveContext::Applicative()
{
    Handle(::Standard_Transient) _result = ((::AIS_InteractiveContext*)_NativeInstance)->Applicative();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

bool Macad::Occt::AIS_InteractiveContext::BeginImmediateDraw()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->BeginImmediateDraw();
    return _result;
}

bool Macad::Occt::AIS_InteractiveContext::ImmediateAdd(Macad::Occt::AIS_InteractiveObject^ theObj, int theMode)
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->ImmediateAdd(Handle(::AIS_InteractiveObject)(theObj->NativeInstance), theMode);
    return _result;
}

bool Macad::Occt::AIS_InteractiveContext::ImmediateAdd(Macad::Occt::AIS_InteractiveObject^ theObj)
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->ImmediateAdd(Handle(::AIS_InteractiveObject)(theObj->NativeInstance), 0);
    return _result;
}

bool Macad::Occt::AIS_InteractiveContext::EndImmediateDraw(Macad::Occt::V3d_View^ theView)
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->EndImmediateDraw(Handle(::V3d_View)(theView->NativeInstance));
    return _result;
}

bool Macad::Occt::AIS_InteractiveContext::EndImmediateDraw()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->EndImmediateDraw();
    return _result;
}

bool Macad::Occt::AIS_InteractiveContext::IsImmediateModeOn()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->IsImmediateModeOn();
    return _result;
}

void Macad::Occt::AIS_InteractiveContext::RedrawImmediate(Macad::Occt::V3d_Viewer^ theViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->RedrawImmediate(Handle(::V3d_Viewer)(theViewer->NativeInstance));
}

void Macad::Occt::AIS_InteractiveContext::SetSelectionModeActive(Macad::Occt::AIS_InteractiveObject^ theObj, int theMode, bool theToActivate, Macad::Occt::AIS_SelectionModesConcurrency theConcurrency, bool theIsForce)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetSelectionModeActive(Handle(::AIS_InteractiveObject)(theObj->NativeInstance), theMode, theToActivate, (::AIS_SelectionModesConcurrency)theConcurrency, theIsForce);
}

void Macad::Occt::AIS_InteractiveContext::SetSelectionModeActive(Macad::Occt::AIS_InteractiveObject^ theObj, int theMode, bool theToActivate, Macad::Occt::AIS_SelectionModesConcurrency theConcurrency)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetSelectionModeActive(Handle(::AIS_InteractiveObject)(theObj->NativeInstance), theMode, theToActivate, (::AIS_SelectionModesConcurrency)theConcurrency, false);
}

void Macad::Occt::AIS_InteractiveContext::SetSelectionModeActive(Macad::Occt::AIS_InteractiveObject^ theObj, int theMode, bool theToActivate)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetSelectionModeActive(Handle(::AIS_InteractiveObject)(theObj->NativeInstance), theMode, theToActivate, AIS_SelectionModesConcurrency_Multiple, false);
}

void Macad::Occt::AIS_InteractiveContext::Activate(Macad::Occt::AIS_InteractiveObject^ theObj, int theMode, bool theIsForce)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Activate(Handle(::AIS_InteractiveObject)(theObj->NativeInstance), theMode, theIsForce);
}

void Macad::Occt::AIS_InteractiveContext::Activate(Macad::Occt::AIS_InteractiveObject^ theObj, int theMode)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Activate(Handle(::AIS_InteractiveObject)(theObj->NativeInstance), theMode, false);
}

void Macad::Occt::AIS_InteractiveContext::Activate(Macad::Occt::AIS_InteractiveObject^ theObj)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Activate(Handle(::AIS_InteractiveObject)(theObj->NativeInstance), 0, false);
}

void Macad::Occt::AIS_InteractiveContext::Activate(int theMode, bool theIsForce)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Activate(theMode, theIsForce);
}

void Macad::Occt::AIS_InteractiveContext::Activate(int theMode)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Activate(theMode, false);
}

void Macad::Occt::AIS_InteractiveContext::Deactivate(Macad::Occt::AIS_InteractiveObject^ theObj)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Deactivate(Handle(::AIS_InteractiveObject)(theObj->NativeInstance));
}

void Macad::Occt::AIS_InteractiveContext::Deactivate(Macad::Occt::AIS_InteractiveObject^ theObj, int theMode)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Deactivate(Handle(::AIS_InteractiveObject)(theObj->NativeInstance), theMode);
}

void Macad::Occt::AIS_InteractiveContext::Deactivate(int theMode)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Deactivate(theMode);
}

void Macad::Occt::AIS_InteractiveContext::Deactivate()
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Deactivate();
}

void Macad::Occt::AIS_InteractiveContext::ActivatedModes(Macad::Occt::AIS_InteractiveObject^ anIobj, Macad::Occt::TColStd_ListOfInteger^ theList)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->ActivatedModes(Handle(::AIS_InteractiveObject)(anIobj->NativeInstance), *(::TColStd_ListOfInteger*)theList->NativeInstance);
}

Macad::Occt::SelectMgr_FilterType Macad::Occt::AIS_InteractiveContext::FilterType()
{
    ::SelectMgr_FilterType _result = ((::AIS_InteractiveContext*)_NativeInstance)->FilterType();
    return (Macad::Occt::SelectMgr_FilterType)_result;
}

void Macad::Occt::AIS_InteractiveContext::SetFilterType(Macad::Occt::SelectMgr_FilterType theFilterType)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetFilterType((::SelectMgr_FilterType)theFilterType);
}

Macad::Occt::SelectMgr_ListOfFilter^ Macad::Occt::AIS_InteractiveContext::Filters()
{
    ::SelectMgr_ListOfFilter* _result = new ::SelectMgr_ListOfFilter();
    *_result = (::SelectMgr_ListOfFilter)((::AIS_InteractiveContext*)_NativeInstance)->Filters();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_ListOfFilter(_result);
}

Macad::Occt::SelectMgr_AndOrFilter^ Macad::Occt::AIS_InteractiveContext::GlobalFilter()
{
    Handle(::SelectMgr_AndOrFilter) _result = ((::AIS_InteractiveContext*)_NativeInstance)->GlobalFilter();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_AndOrFilter::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_InteractiveContext::AddFilter(Macad::Occt::SelectMgr_Filter^ theFilter)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->AddFilter(Handle(::SelectMgr_Filter)(theFilter->NativeInstance));
}

void Macad::Occt::AIS_InteractiveContext::RemoveFilter(Macad::Occt::SelectMgr_Filter^ theFilter)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->RemoveFilter(Handle(::SelectMgr_Filter)(theFilter->NativeInstance));
}

void Macad::Occt::AIS_InteractiveContext::RemoveFilters()
{
    ((::AIS_InteractiveContext*)_NativeInstance)->RemoveFilters();
}

Macad::Occt::SelectMgr_PickingStrategy Macad::Occt::AIS_InteractiveContext::PickingStrategy()
{
    ::SelectMgr_PickingStrategy _result = ((::AIS_InteractiveContext*)_NativeInstance)->PickingStrategy();
    return (Macad::Occt::SelectMgr_PickingStrategy)_result;
}

void Macad::Occt::AIS_InteractiveContext::SetPickingStrategy(Macad::Occt::SelectMgr_PickingStrategy theStrategy)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetPickingStrategy((::SelectMgr_PickingStrategy)theStrategy);
}

Macad::Occt::Prs3d_Drawer^ Macad::Occt::AIS_InteractiveContext::DefaultDrawer()
{
    Handle(::Prs3d_Drawer) _result = ((::AIS_InteractiveContext*)_NativeInstance)->DefaultDrawer();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_Drawer::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_InteractiveContext::SetDefaultDrawer(Macad::Occt::Prs3d_Drawer^ theDrawer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetDefaultDrawer(Handle(::Prs3d_Drawer)(theDrawer->NativeInstance));
}

Macad::Occt::V3d_Viewer^ Macad::Occt::AIS_InteractiveContext::CurrentViewer()
{
    Handle(::V3d_Viewer) _result = ((::AIS_InteractiveContext*)_NativeInstance)->CurrentViewer();
    return _result.IsNull() ? nullptr : Macad::Occt::V3d_Viewer::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_SelectionManager^ Macad::Occt::AIS_InteractiveContext::SelectionManager()
{
    Handle(::SelectMgr_SelectionManager) _result = ((::AIS_InteractiveContext*)_NativeInstance)->SelectionManager();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_SelectionManager::CreateDowncasted(_result.get());
}

Macad::Occt::PrsMgr_PresentationManager^ Macad::Occt::AIS_InteractiveContext::MainPrsMgr()
{
    Handle(::PrsMgr_PresentationManager) _result = ((::AIS_InteractiveContext*)_NativeInstance)->MainPrsMgr();
    return _result.IsNull() ? nullptr : Macad::Occt::PrsMgr_PresentationManager::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_ViewerSelector^ Macad::Occt::AIS_InteractiveContext::MainSelector()
{
    Handle(::SelectMgr_ViewerSelector) _result = ((::AIS_InteractiveContext*)_NativeInstance)->MainSelector();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_ViewerSelector::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_InteractiveContext::UpdateCurrentViewer()
{
    ((::AIS_InteractiveContext*)_NativeInstance)->UpdateCurrentViewer();
}

void Macad::Occt::AIS_InteractiveContext::DisplayedObjects(Macad::Occt::AIS_ListOfInteractive^ aListOfIO)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->DisplayedObjects(*(::AIS_ListOfInteractive*)aListOfIO->NativeInstance);
}

void Macad::Occt::AIS_InteractiveContext::DisplayedObjects(Macad::Occt::AIS_KindOfInteractive theWhichKind, int theWhichSignature, Macad::Occt::AIS_ListOfInteractive^ theListOfIO)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->DisplayedObjects((::AIS_KindOfInteractive)theWhichKind, theWhichSignature, *(::AIS_ListOfInteractive*)theListOfIO->NativeInstance);
}

void Macad::Occt::AIS_InteractiveContext::ErasedObjects(Macad::Occt::AIS_ListOfInteractive^ theListOfIO)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->ErasedObjects(*(::AIS_ListOfInteractive*)theListOfIO->NativeInstance);
}

void Macad::Occt::AIS_InteractiveContext::ErasedObjects(Macad::Occt::AIS_KindOfInteractive theWhichKind, int theWhichSignature, Macad::Occt::AIS_ListOfInteractive^ theListOfIO)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->ErasedObjects((::AIS_KindOfInteractive)theWhichKind, theWhichSignature, *(::AIS_ListOfInteractive*)theListOfIO->NativeInstance);
}

void Macad::Occt::AIS_InteractiveContext::ObjectsByDisplayStatus(Macad::Occt::PrsMgr_DisplayStatus theStatus, Macad::Occt::AIS_ListOfInteractive^ theListOfIO)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->ObjectsByDisplayStatus((::PrsMgr_DisplayStatus)theStatus, *(::AIS_ListOfInteractive*)theListOfIO->NativeInstance);
}

void Macad::Occt::AIS_InteractiveContext::ObjectsByDisplayStatus(Macad::Occt::AIS_KindOfInteractive WhichKind, int WhichSignature, Macad::Occt::PrsMgr_DisplayStatus theStatus, Macad::Occt::AIS_ListOfInteractive^ theListOfIO)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->ObjectsByDisplayStatus((::AIS_KindOfInteractive)WhichKind, WhichSignature, (::PrsMgr_DisplayStatus)theStatus, *(::AIS_ListOfInteractive*)theListOfIO->NativeInstance);
}

void Macad::Occt::AIS_InteractiveContext::ObjectsInside(Macad::Occt::AIS_ListOfInteractive^ aListOfIO, Macad::Occt::AIS_KindOfInteractive WhichKind, int WhichSignature)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->ObjectsInside(*(::AIS_ListOfInteractive*)aListOfIO->NativeInstance, (::AIS_KindOfInteractive)WhichKind, WhichSignature);
}

void Macad::Occt::AIS_InteractiveContext::ObjectsInside(Macad::Occt::AIS_ListOfInteractive^ aListOfIO, Macad::Occt::AIS_KindOfInteractive WhichKind)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->ObjectsInside(*(::AIS_ListOfInteractive*)aListOfIO->NativeInstance, (::AIS_KindOfInteractive)WhichKind, -1);
}

void Macad::Occt::AIS_InteractiveContext::ObjectsInside(Macad::Occt::AIS_ListOfInteractive^ aListOfIO)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->ObjectsInside(*(::AIS_ListOfInteractive*)aListOfIO->NativeInstance, AIS_KindOfInteractive_None, -1);
}

void Macad::Occt::AIS_InteractiveContext::RebuildSelectionStructs()
{
    ((::AIS_InteractiveContext*)_NativeInstance)->RebuildSelectionStructs();
}

void Macad::Occt::AIS_InteractiveContext::Disconnect(Macad::Occt::AIS_InteractiveObject^ theAssembly, Macad::Occt::AIS_InteractiveObject^ theObjToDisconnect)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Disconnect(Handle(::AIS_InteractiveObject)(theAssembly->NativeInstance), Handle(::AIS_InteractiveObject)(theObjToDisconnect->NativeInstance));
}

void Macad::Occt::AIS_InteractiveContext::Disconnect(Macad::Occt::AIS_InteractiveObject^ theAssembly)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Disconnect(Handle(::AIS_InteractiveObject)(theAssembly->NativeInstance), nullptr);
}

void Macad::Occt::AIS_InteractiveContext::ObjectsForView(Macad::Occt::AIS_ListOfInteractive^ theListOfIO, Macad::Occt::V3d_View^ theView, bool theIsVisibleInView, Macad::Occt::PrsMgr_DisplayStatus theStatus)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->ObjectsForView(*(::AIS_ListOfInteractive*)theListOfIO->NativeInstance, Handle(::V3d_View)(theView->NativeInstance), theIsVisibleInView, (::PrsMgr_DisplayStatus)theStatus);
}

void Macad::Occt::AIS_InteractiveContext::ObjectsForView(Macad::Occt::AIS_ListOfInteractive^ theListOfIO, Macad::Occt::V3d_View^ theView, bool theIsVisibleInView)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->ObjectsForView(*(::AIS_ListOfInteractive*)theListOfIO->NativeInstance, Handle(::V3d_View)(theView->NativeInstance), theIsVisibleInView, PrsMgr_DisplayStatus_None);
}

Macad::Occt::Pnt Macad::Occt::AIS_InteractiveContext::GravityPoint(Macad::Occt::V3d_View^ theView)
{
    ::gp_Pnt _nativeResult = ((::AIS_InteractiveContext*)_NativeInstance)->GravityPoint(Handle(::V3d_View)(theView->NativeInstance));
    return Macad::Occt::Pnt(_nativeResult);
}

void Macad::Occt::AIS_InteractiveContext::DisplayActiveSensitive(Macad::Occt::V3d_View^ aView)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->DisplayActiveSensitive(Handle(::V3d_View)(aView->NativeInstance));
}

void Macad::Occt::AIS_InteractiveContext::ClearActiveSensitive(Macad::Occt::V3d_View^ aView)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->ClearActiveSensitive(Handle(::V3d_View)(aView->NativeInstance));
}

void Macad::Occt::AIS_InteractiveContext::DisplayActiveSensitive(Macad::Occt::AIS_InteractiveObject^ anObject, Macad::Occt::V3d_View^ aView)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->DisplayActiveSensitive(Handle(::AIS_InteractiveObject)(anObject->NativeInstance), Handle(::V3d_View)(aView->NativeInstance));
}

void Macad::Occt::AIS_InteractiveContext::SetLocalAttributes(Macad::Occt::AIS_InteractiveObject^ theIObj, Macad::Occt::Prs3d_Drawer^ theDrawer, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetLocalAttributes(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), Handle(::Prs3d_Drawer)(theDrawer->NativeInstance), theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::UnsetLocalAttributes(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->UnsetLocalAttributes(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::SetCurrentFacingModel(Macad::Occt::AIS_InteractiveObject^ aniobj, Macad::Occt::Aspect_TypeOfFacingModel aModel)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetCurrentFacingModel(Handle(::AIS_InteractiveObject)(aniobj->NativeInstance), (::Aspect_TypeOfFacingModel)aModel);
}

void Macad::Occt::AIS_InteractiveContext::SetCurrentFacingModel(Macad::Occt::AIS_InteractiveObject^ aniobj)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetCurrentFacingModel(Handle(::AIS_InteractiveObject)(aniobj->NativeInstance), Aspect_TOFM_BOTH_SIDE);
}

bool Macad::Occt::AIS_InteractiveContext::HasColor(Macad::Occt::AIS_InteractiveObject^ aniobj)
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->HasColor(Handle(::AIS_InteractiveObject)(aniobj->NativeInstance));
    return _result;
}

void Macad::Occt::AIS_InteractiveContext::Color(Macad::Occt::AIS_InteractiveObject^ aniobj, Macad::Occt::Quantity_Color^ acolor)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Color(Handle(::AIS_InteractiveObject)(aniobj->NativeInstance), *(::Quantity_Color*)acolor->NativeInstance);
}

void Macad::Occt::AIS_InteractiveContext::SetColor(Macad::Occt::AIS_InteractiveObject^ theIObj, Macad::Occt::Quantity_Color^ theColor, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetColor(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), *(::Quantity_Color*)theColor->NativeInstance, theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::UnsetColor(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->UnsetColor(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theToUpdateViewer);
}

double Macad::Occt::AIS_InteractiveContext::Width(Macad::Occt::AIS_InteractiveObject^ aniobj)
{
    double _result = ((::AIS_InteractiveContext*)_NativeInstance)->Width(Handle(::AIS_InteractiveObject)(aniobj->NativeInstance));
    return _result;
}

void Macad::Occt::AIS_InteractiveContext::SetWidth(Macad::Occt::AIS_InteractiveObject^ theIObj, double theValue, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetWidth(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theValue, theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::UnsetWidth(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->UnsetWidth(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::SetMaterial(Macad::Occt::AIS_InteractiveObject^ theIObj, Macad::Occt::Graphic3d_MaterialAspect^ theMaterial, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetMaterial(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), *(::Graphic3d_MaterialAspect*)theMaterial->NativeInstance, theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::UnsetMaterial(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->UnsetMaterial(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::SetTransparency(Macad::Occt::AIS_InteractiveObject^ theIObj, double theValue, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetTransparency(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theValue, theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::UnsetTransparency(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->UnsetTransparency(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::SetPolygonOffsets(Macad::Occt::AIS_InteractiveObject^ theIObj, int theMode, float theFactor, float theUnits, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetPolygonOffsets(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theMode, theFactor, theUnits, theToUpdateViewer);
}

bool Macad::Occt::AIS_InteractiveContext::HasPolygonOffsets(Macad::Occt::AIS_InteractiveObject^ anObj)
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->HasPolygonOffsets(Handle(::AIS_InteractiveObject)(anObj->NativeInstance));
    return _result;
}

void Macad::Occt::AIS_InteractiveContext::PolygonOffsets(Macad::Occt::AIS_InteractiveObject^ anObj, int% aMode, float% aFactor, float% aUnits)
{
    pin_ptr<int> pp_aMode = &aMode;
    pin_ptr<float> pp_aFactor = &aFactor;
    pin_ptr<float> pp_aUnits = &aUnits;
    ((::AIS_InteractiveContext*)_NativeInstance)->PolygonOffsets(Handle(::AIS_InteractiveObject)(anObj->NativeInstance), *(int*)pp_aMode, *(float*)pp_aFactor, *(float*)pp_aUnits);
}

void Macad::Occt::AIS_InteractiveContext::SetTrihedronSize(double theSize, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetTrihedronSize(theSize, theToUpdateViewer);
}

double Macad::Occt::AIS_InteractiveContext::TrihedronSize()
{
    double _result = ((::AIS_InteractiveContext*)_NativeInstance)->TrihedronSize();
    return _result;
}

void Macad::Occt::AIS_InteractiveContext::SetPlaneSize(double theSizeX, double theSizeY, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetPlaneSize(theSizeX, theSizeY, theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::SetPlaneSize(double theSize, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetPlaneSize(theSize, theToUpdateViewer);
}

bool Macad::Occt::AIS_InteractiveContext::PlaneSize(double% XSize, double% YSize)
{
    pin_ptr<double> pp_XSize = &XSize;
    pin_ptr<double> pp_YSize = &YSize;
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->PlaneSize(*(double*)pp_XSize, *(double*)pp_YSize);
    return _result;
}

void Macad::Occt::AIS_InteractiveContext::SetDeviationCoefficient(Macad::Occt::AIS_InteractiveObject^ theIObj, double theCoefficient, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetDeviationCoefficient(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theCoefficient, theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::SetDeviationAngle(Macad::Occt::AIS_InteractiveObject^ theIObj, double theAngle, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetDeviationAngle(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theAngle, theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::SetAngleAndDeviation(Macad::Occt::AIS_InteractiveObject^ theIObj, double theAngle, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetAngleAndDeviation(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theAngle, theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::SetDeviationCoefficient(double theCoefficient)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetDeviationCoefficient(theCoefficient);
}

double Macad::Occt::AIS_InteractiveContext::DeviationCoefficient()
{
    double _result = ((::AIS_InteractiveContext*)_NativeInstance)->DeviationCoefficient();
    return _result;
}

void Macad::Occt::AIS_InteractiveContext::SetDeviationAngle(double theAngle)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetDeviationAngle(theAngle);
}

double Macad::Occt::AIS_InteractiveContext::DeviationAngle()
{
    double _result = ((::AIS_InteractiveContext*)_NativeInstance)->DeviationAngle();
    return _result;
}

Macad::Occt::Prs3d_LineAspect^ Macad::Occt::AIS_InteractiveContext::HiddenLineAspect()
{
    Handle(::Prs3d_LineAspect) _result = ((::AIS_InteractiveContext*)_NativeInstance)->HiddenLineAspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_LineAspect::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_InteractiveContext::SetHiddenLineAspect(Macad::Occt::Prs3d_LineAspect^ theAspect)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetHiddenLineAspect(Handle(::Prs3d_LineAspect)(theAspect->NativeInstance));
}

bool Macad::Occt::AIS_InteractiveContext::DrawHiddenLine()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->DrawHiddenLine();
    return _result;
}

void Macad::Occt::AIS_InteractiveContext::EnableDrawHiddenLine()
{
    ((::AIS_InteractiveContext*)_NativeInstance)->EnableDrawHiddenLine();
}

void Macad::Occt::AIS_InteractiveContext::DisableDrawHiddenLine()
{
    ((::AIS_InteractiveContext*)_NativeInstance)->DisableDrawHiddenLine();
}

void Macad::Occt::AIS_InteractiveContext::SetIsoNumber(int NbIsos, Macad::Occt::AIS_TypeOfIso WhichIsos)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetIsoNumber(NbIsos, (::AIS_TypeOfIso)WhichIsos);
}

void Macad::Occt::AIS_InteractiveContext::SetIsoNumber(int NbIsos)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetIsoNumber(NbIsos, AIS_TOI_Both);
}

int Macad::Occt::AIS_InteractiveContext::IsoNumber(Macad::Occt::AIS_TypeOfIso WhichIsos)
{
    int _result = ((::AIS_InteractiveContext*)_NativeInstance)->IsoNumber((::AIS_TypeOfIso)WhichIsos);
    return _result;
}

int Macad::Occt::AIS_InteractiveContext::IsoNumber()
{
    int _result = ((::AIS_InteractiveContext*)_NativeInstance)->IsoNumber(AIS_TOI_Both);
    return _result;
}

void Macad::Occt::AIS_InteractiveContext::IsoOnPlane(bool theToSwitchOn)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->IsoOnPlane(theToSwitchOn);
}

bool Macad::Occt::AIS_InteractiveContext::IsoOnPlane()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->IsoOnPlane();
    return _result;
}

void Macad::Occt::AIS_InteractiveContext::IsoOnTriangulation(bool theIsEnabled, Macad::Occt::AIS_InteractiveObject^ theObject)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->IsoOnTriangulation(theIsEnabled, Handle(::AIS_InteractiveObject)(theObject->NativeInstance));
}

void Macad::Occt::AIS_InteractiveContext::IsoOnTriangulation(bool theToSwitchOn)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->IsoOnTriangulation(theToSwitchOn);
}

bool Macad::Occt::AIS_InteractiveContext::IsoOnTriangulation()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->IsoOnTriangulation();
    return _result;
}

void Macad::Occt::AIS_InteractiveContext::Display(Macad::Occt::AIS_InteractiveObject^ theIObj, int theDispMode, int theSelectionMode, bool theToUpdateViewer, bool theToAllowDecomposition, Macad::Occt::PrsMgr_DisplayStatus theDispStatus)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Display(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theDispMode, theSelectionMode, theToUpdateViewer, theToAllowDecomposition, (::PrsMgr_DisplayStatus)theDispStatus);
}

void Macad::Occt::AIS_InteractiveContext::Display(Macad::Occt::AIS_InteractiveObject^ theIObj, int theDispMode, int theSelectionMode, bool theToUpdateViewer, bool theToAllowDecomposition)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Display(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theDispMode, theSelectionMode, theToUpdateViewer, theToAllowDecomposition, PrsMgr_DisplayStatus_None);
}

void Macad::Occt::AIS_InteractiveContext::Load(Macad::Occt::AIS_InteractiveObject^ theObj, int theSelectionMode, bool parameter1)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Load(Handle(::AIS_InteractiveObject)(theObj->NativeInstance), theSelectionMode, parameter1);
}

void Macad::Occt::AIS_InteractiveContext::Hilight(Macad::Occt::AIS_InteractiveObject^ theObj, bool theIsToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->Hilight(Handle(::AIS_InteractiveObject)(theObj->NativeInstance), theIsToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::SetSelectedAspect(Macad::Occt::Prs3d_BasicAspect^ theAspect, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetSelectedAspect(Handle(::Prs3d_BasicAspect)(theAspect->NativeInstance), theToUpdateViewer);
}

Macad::Occt::AIS_StatusOfPick Macad::Occt::AIS_InteractiveContext::Select(int theXPMin, int theYPMin, int theXPMax, int theYPMax, Macad::Occt::V3d_View^ theView, bool theToUpdateViewer)
{
    ::AIS_StatusOfPick _result = ((::AIS_InteractiveContext*)_NativeInstance)->Select(theXPMin, theYPMin, theXPMax, theYPMax, Handle(::V3d_View)(theView->NativeInstance), theToUpdateViewer);
    return (Macad::Occt::AIS_StatusOfPick)_result;
}

Macad::Occt::AIS_StatusOfPick Macad::Occt::AIS_InteractiveContext::Select(Macad::Occt::TColgp_Array1OfPnt2d^ thePolyline, Macad::Occt::V3d_View^ theView, bool theToUpdateViewer)
{
    ::AIS_StatusOfPick _result = ((::AIS_InteractiveContext*)_NativeInstance)->Select(*(::TColgp_Array1OfPnt2d*)thePolyline->NativeInstance, Handle(::V3d_View)(theView->NativeInstance), theToUpdateViewer);
    return (Macad::Occt::AIS_StatusOfPick)_result;
}

Macad::Occt::AIS_StatusOfPick Macad::Occt::AIS_InteractiveContext::Select(bool theToUpdateViewer)
{
    ::AIS_StatusOfPick _result = ((::AIS_InteractiveContext*)_NativeInstance)->Select(theToUpdateViewer);
    return (Macad::Occt::AIS_StatusOfPick)_result;
}

Macad::Occt::AIS_StatusOfPick Macad::Occt::AIS_InteractiveContext::ShiftSelect(bool theToUpdateViewer)
{
    ::AIS_StatusOfPick _result = ((::AIS_InteractiveContext*)_NativeInstance)->ShiftSelect(theToUpdateViewer);
    return (Macad::Occt::AIS_StatusOfPick)_result;
}

Macad::Occt::AIS_StatusOfPick Macad::Occt::AIS_InteractiveContext::ShiftSelect(Macad::Occt::TColgp_Array1OfPnt2d^ thePolyline, Macad::Occt::V3d_View^ theView, bool theToUpdateViewer)
{
    ::AIS_StatusOfPick _result = ((::AIS_InteractiveContext*)_NativeInstance)->ShiftSelect(*(::TColgp_Array1OfPnt2d*)thePolyline->NativeInstance, Handle(::V3d_View)(theView->NativeInstance), theToUpdateViewer);
    return (Macad::Occt::AIS_StatusOfPick)_result;
}

Macad::Occt::AIS_StatusOfPick Macad::Occt::AIS_InteractiveContext::ShiftSelect(int theXPMin, int theYPMin, int theXPMax, int theYPMax, Macad::Occt::V3d_View^ theView, bool theToUpdateViewer)
{
    ::AIS_StatusOfPick _result = ((::AIS_InteractiveContext*)_NativeInstance)->ShiftSelect(theXPMin, theYPMin, theXPMax, theYPMax, Handle(::V3d_View)(theView->NativeInstance), theToUpdateViewer);
    return (Macad::Occt::AIS_StatusOfPick)_result;
}

void Macad::Occt::AIS_InteractiveContext::SetCurrentObject(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetCurrentObject(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::AddOrRemoveCurrentObject(Macad::Occt::AIS_InteractiveObject^ theObj, bool theIsToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->AddOrRemoveCurrentObject(Handle(::AIS_InteractiveObject)(theObj->NativeInstance), theIsToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::UpdateCurrent()
{
    ((::AIS_InteractiveContext*)_NativeInstance)->UpdateCurrent();
}

bool Macad::Occt::AIS_InteractiveContext::IsCurrent(Macad::Occt::AIS_InteractiveObject^ theObject)
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->IsCurrent(Handle(::AIS_InteractiveObject)(theObject->NativeInstance));
    return _result;
}

void Macad::Occt::AIS_InteractiveContext::InitCurrent()
{
    ((::AIS_InteractiveContext*)_NativeInstance)->InitCurrent();
}

bool Macad::Occt::AIS_InteractiveContext::MoreCurrent()
{
    bool _result = ((::AIS_InteractiveContext*)_NativeInstance)->MoreCurrent();
    return _result;
}

void Macad::Occt::AIS_InteractiveContext::NextCurrent()
{
    ((::AIS_InteractiveContext*)_NativeInstance)->NextCurrent();
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_InteractiveContext::Current()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_InteractiveContext*)_NativeInstance)->Current();
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

int Macad::Occt::AIS_InteractiveContext::NbCurrents()
{
    int _result = ((::AIS_InteractiveContext*)_NativeInstance)->NbCurrents();
    return _result;
}

void Macad::Occt::AIS_InteractiveContext::HilightCurrents(bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->HilightCurrents(theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::UnhilightCurrents(bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->UnhilightCurrents(theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::ClearCurrents(bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->ClearCurrents(theToUpdateViewer);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::AIS_InteractiveContext::DetectedCurrentShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::AIS_InteractiveContext*)_NativeInstance)->DetectedCurrentShape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_InteractiveContext::DetectedCurrentObject()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_InteractiveContext*)_NativeInstance)->DetectedCurrentObject();
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

Macad::Occt::Quantity_Color^ Macad::Occt::AIS_InteractiveContext::SubIntensityColor()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::AIS_InteractiveContext*)_NativeInstance)->SubIntensityColor();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::AIS_InteractiveContext::SetSubIntensityColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetSubIntensityColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::AIS_InteractiveContext::SubIntensityOn(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SubIntensityOn(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::SubIntensityOff(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SubIntensityOff(Handle(::AIS_InteractiveObject)(theIObj->NativeInstance), theToUpdateViewer);
}

Macad::Occt::AIS_Selection^ Macad::Occt::AIS_InteractiveContext::Selection()
{
    Handle(::AIS_Selection) _result = ((::AIS_InteractiveContext*)_NativeInstance)->Selection();
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_Selection::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_InteractiveContext::SetSelection(Macad::Occt::AIS_Selection^ theSelection)
{
    ((::AIS_InteractiveContext*)_NativeInstance)->SetSelection(Handle(::AIS_Selection)(theSelection->NativeInstance));
}

void Macad::Occt::AIS_InteractiveContext::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::AIS_InteractiveContext*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::AIS_InteractiveContext::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::AIS_InteractiveContext*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::AIS_InteractiveContext^ Macad::Occt::AIS_InteractiveContext::CreateDowncasted(::AIS_InteractiveContext* instance)
{
    return gcnew Macad::Occt::AIS_InteractiveContext( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_InteractiveObject
//---------------------------------------------------------------------

Macad::Occt::AIS_KindOfInteractive Macad::Occt::AIS_InteractiveObject::Type()
{
    ::AIS_KindOfInteractive _result = ((::AIS_InteractiveObject*)_NativeInstance)->Type();
    return (Macad::Occt::AIS_KindOfInteractive)_result;
}

int Macad::Occt::AIS_InteractiveObject::Signature()
{
    int _result = ((::AIS_InteractiveObject*)_NativeInstance)->Signature();
    return _result;
}

void Macad::Occt::AIS_InteractiveObject::Redisplay(bool AllModes)
{
    ((::AIS_InteractiveObject*)_NativeInstance)->Redisplay(AllModes);
}

void Macad::Occt::AIS_InteractiveObject::Redisplay()
{
    ((::AIS_InteractiveObject*)_NativeInstance)->Redisplay(false);
}

bool Macad::Occt::AIS_InteractiveObject::HasInteractiveContext()
{
    bool _result = ((::AIS_InteractiveObject*)_NativeInstance)->HasInteractiveContext();
    return _result;
}

Macad::Occt::AIS_InteractiveContext^ Macad::Occt::AIS_InteractiveObject::InteractiveContext()
{
    ::AIS_InteractiveContext* _result = ((::AIS_InteractiveObject*)_NativeInstance)->InteractiveContext();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::AIS_InteractiveContext(_result);
}

void Macad::Occt::AIS_InteractiveObject::SetContext(Macad::Occt::AIS_InteractiveContext^ aCtx)
{
    ((::AIS_InteractiveObject*)_NativeInstance)->SetContext(Handle(::AIS_InteractiveContext)(aCtx->NativeInstance));
}

bool Macad::Occt::AIS_InteractiveObject::HasOwner()
{
    bool _result = ((::AIS_InteractiveObject*)_NativeInstance)->HasOwner();
    return _result;
}

Macad::Occt::Standard_Transient^ Macad::Occt::AIS_InteractiveObject::GetOwner()
{
    Handle(::Standard_Transient) _result = ((::AIS_InteractiveObject*)_NativeInstance)->GetOwner();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_InteractiveObject::SetOwner(Macad::Occt::Standard_Transient^ theApplicativeEntity)
{
    ((::AIS_InteractiveObject*)_NativeInstance)->SetOwner(Handle(::Standard_Transient)(theApplicativeEntity->NativeInstance));
}

void Macad::Occt::AIS_InteractiveObject::ClearOwner()
{
    ((::AIS_InteractiveObject*)_NativeInstance)->ClearOwner();
}

bool Macad::Occt::AIS_InteractiveObject::ProcessDragging(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView, Macad::Occt::SelectMgr_EntityOwner^ theOwner, Macad::Occt::Graphic3d_Vec2i^ theDragFrom, Macad::Occt::Graphic3d_Vec2i^ theDragTo, Macad::Occt::AIS_DragAction theAction)
{
    bool _result = ((::AIS_InteractiveObject*)_NativeInstance)->ProcessDragging(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance), Handle(::SelectMgr_EntityOwner)(theOwner->NativeInstance), *(::Graphic3d_Vec2i*)theDragFrom->NativeInstance, *(::Graphic3d_Vec2i*)theDragTo->NativeInstance, (::AIS_DragAction)theAction);
    return _result;
}

Macad::Occt::AIS_InteractiveContext^ Macad::Occt::AIS_InteractiveObject::GetContext()
{
    Handle(::AIS_InteractiveContext) _result = ((::AIS_InteractiveObject*)_NativeInstance)->GetContext();
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveContext::CreateDowncasted(_result.get());
}

bool Macad::Occt::AIS_InteractiveObject::HasPresentation()
{
    bool _result = ((::AIS_InteractiveObject*)_NativeInstance)->HasPresentation();
    return _result;
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::AIS_InteractiveObject::Presentation()
{
    Handle(::Graphic3d_Structure) _result = ((::AIS_InteractiveObject*)_NativeInstance)->Presentation();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_InteractiveObject::SetAspect(Macad::Occt::Prs3d_BasicAspect^ anAspect)
{
    ((::AIS_InteractiveObject*)_NativeInstance)->SetAspect(Handle(::Prs3d_BasicAspect)(anAspect->NativeInstance));
}

void Macad::Occt::AIS_InteractiveObject::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::AIS_InteractiveObject*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::AIS_InteractiveObject::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::AIS_InteractiveObject*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_InteractiveObject::CreateDowncasted(::AIS_InteractiveObject* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::AIS_Axis)))
        return Macad::Occt::AIS_Axis::CreateDowncasted((::AIS_Axis*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_CameraFrustum)))
        return Macad::Occt::AIS_CameraFrustum::CreateDowncasted((::AIS_CameraFrustum*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_Circle)))
        return Macad::Occt::AIS_Circle::CreateDowncasted((::AIS_Circle*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_Shape)))
        return Macad::Occt::AIS_Shape::CreateDowncasted((::AIS_Shape*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_ColorScale)))
        return Macad::Occt::AIS_ColorScale::CreateDowncasted((::AIS_ColorScale*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_ConnectedInteractive)))
        return Macad::Occt::AIS_ConnectedInteractive::CreateDowncasted((::AIS_ConnectedInteractive*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_LightSource)))
        return Macad::Occt::AIS_LightSource::CreateDowncasted((::AIS_LightSource*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_Line)))
        return Macad::Occt::AIS_Line::CreateDowncasted((::AIS_Line*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_MediaPlayer)))
        return Macad::Occt::AIS_MediaPlayer::CreateDowncasted((::AIS_MediaPlayer*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_MultipleConnectedInteractive)))
        return Macad::Occt::AIS_MultipleConnectedInteractive::CreateDowncasted((::AIS_MultipleConnectedInteractive*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_Plane)))
        return Macad::Occt::AIS_Plane::CreateDowncasted((::AIS_Plane*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_Point)))
        return Macad::Occt::AIS_Point::CreateDowncasted((::AIS_Point*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_PlaneTrihedron)))
        return Macad::Occt::AIS_PlaneTrihedron::CreateDowncasted((::AIS_PlaneTrihedron*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_PointCloud)))
        return Macad::Occt::AIS_PointCloud::CreateDowncasted((::AIS_PointCloud*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_RubberBand)))
        return Macad::Occt::AIS_RubberBand::CreateDowncasted((::AIS_RubberBand*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_TextLabel)))
        return Macad::Occt::AIS_TextLabel::CreateDowncasted((::AIS_TextLabel*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_Triangulation)))
        return Macad::Occt::AIS_Triangulation::CreateDowncasted((::AIS_Triangulation*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_Trihedron)))
        return Macad::Occt::AIS_Trihedron::CreateDowncasted((::AIS_Trihedron*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_XRTrackedDevice)))
        return Macad::Occt::AIS_XRTrackedDevice::CreateDowncasted((::AIS_XRTrackedDevice*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_ViewCube)))
        return Macad::Occt::AIS_ViewCube::CreateDowncasted((::AIS_ViewCube*)instance);
    
    return gcnew Macad::Occt::AIS_InteractiveObject( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_Animation
//---------------------------------------------------------------------

Macad::Occt::AIS_Animation::AIS_Animation(Macad::Occt::TCollection_AsciiString^ theAnimationName)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Animation(*(::TCollection_AsciiString*)theAnimationName->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::AIS_Animation::Name()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::AIS_Animation*)_NativeInstance)->Name();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

double Macad::Occt::AIS_Animation::StartPts()
{
    double _result = ((::AIS_Animation*)_NativeInstance)->StartPts();
    return _result;
}

void Macad::Occt::AIS_Animation::SetStartPts(double thePtsStart)
{
    ((::AIS_Animation*)_NativeInstance)->SetStartPts(thePtsStart);
}

double Macad::Occt::AIS_Animation::Duration()
{
    double _result = ((::AIS_Animation*)_NativeInstance)->Duration();
    return _result;
}

void Macad::Occt::AIS_Animation::UpdateTotalDuration()
{
    ((::AIS_Animation*)_NativeInstance)->UpdateTotalDuration();
}

bool Macad::Occt::AIS_Animation::HasOwnDuration()
{
    bool _result = ((::AIS_Animation*)_NativeInstance)->HasOwnDuration();
    return _result;
}

double Macad::Occt::AIS_Animation::OwnDuration()
{
    double _result = ((::AIS_Animation*)_NativeInstance)->OwnDuration();
    return _result;
}

void Macad::Occt::AIS_Animation::SetOwnDuration(double theDuration)
{
    ((::AIS_Animation*)_NativeInstance)->SetOwnDuration(theDuration);
}

void Macad::Occt::AIS_Animation::Add(Macad::Occt::AIS_Animation^ theAnimation)
{
    ((::AIS_Animation*)_NativeInstance)->Add(Handle(::AIS_Animation)(theAnimation->NativeInstance));
}

void Macad::Occt::AIS_Animation::Clear()
{
    ((::AIS_Animation*)_NativeInstance)->Clear();
}

Macad::Occt::AIS_Animation^ Macad::Occt::AIS_Animation::Find(Macad::Occt::TCollection_AsciiString^ theAnimationName)
{
    Handle(::AIS_Animation) _result = ((::AIS_Animation*)_NativeInstance)->Find(*(::TCollection_AsciiString*)theAnimationName->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_Animation::CreateDowncasted(_result.get());
}

bool Macad::Occt::AIS_Animation::Remove(Macad::Occt::AIS_Animation^ theAnimation)
{
    bool _result = ((::AIS_Animation*)_NativeInstance)->Remove(Handle(::AIS_Animation)(theAnimation->NativeInstance));
    return _result;
}

bool Macad::Occt::AIS_Animation::Replace(Macad::Occt::AIS_Animation^ theAnimationOld, Macad::Occt::AIS_Animation^ theAnimationNew)
{
    bool _result = ((::AIS_Animation*)_NativeInstance)->Replace(Handle(::AIS_Animation)(theAnimationOld->NativeInstance), Handle(::AIS_Animation)(theAnimationNew->NativeInstance));
    return _result;
}

void Macad::Occt::AIS_Animation::CopyFrom(Macad::Occt::AIS_Animation^ theOther)
{
    ((::AIS_Animation*)_NativeInstance)->CopyFrom(Handle(::AIS_Animation)(theOther->NativeInstance));
}

void Macad::Occt::AIS_Animation::StartTimer(double theStartPts, double thePlaySpeed, bool theToUpdate, bool theToStopTimer)
{
    ((::AIS_Animation*)_NativeInstance)->StartTimer(theStartPts, thePlaySpeed, theToUpdate, theToStopTimer);
}

void Macad::Occt::AIS_Animation::StartTimer(double theStartPts, double thePlaySpeed, bool theToUpdate)
{
    ((::AIS_Animation*)_NativeInstance)->StartTimer(theStartPts, thePlaySpeed, theToUpdate, false);
}

double Macad::Occt::AIS_Animation::UpdateTimer()
{
    double _result = ((::AIS_Animation*)_NativeInstance)->UpdateTimer();
    return _result;
}

double Macad::Occt::AIS_Animation::ElapsedTime()
{
    double _result = ((::AIS_Animation*)_NativeInstance)->ElapsedTime();
    return _result;
}

void Macad::Occt::AIS_Animation::Start(bool theToUpdate)
{
    ((::AIS_Animation*)_NativeInstance)->Start(theToUpdate);
}

void Macad::Occt::AIS_Animation::Pause()
{
    ((::AIS_Animation*)_NativeInstance)->Pause();
}

void Macad::Occt::AIS_Animation::Stop()
{
    ((::AIS_Animation*)_NativeInstance)->Stop();
}

bool Macad::Occt::AIS_Animation::IsStopped()
{
    bool _result = ((::AIS_Animation*)_NativeInstance)->IsStopped();
    return _result;
}

bool Macad::Occt::AIS_Animation::Update(double thePts)
{
    bool _result = ((::AIS_Animation*)_NativeInstance)->Update(thePts);
    return _result;
}

Macad::Occt::AIS_Animation^ Macad::Occt::AIS_Animation::CreateDowncasted(::AIS_Animation* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::AIS_BaseAnimationObject)))
        return Macad::Occt::AIS_BaseAnimationObject::CreateDowncasted((::AIS_BaseAnimationObject*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_AnimationCamera)))
        return Macad::Occt::AIS_AnimationCamera::CreateDowncasted((::AIS_AnimationCamera*)instance);
    
    return gcnew Macad::Occt::AIS_Animation( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_GlobalStatus
//---------------------------------------------------------------------

Macad::Occt::AIS_GlobalStatus::AIS_GlobalStatus()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_GlobalStatus();
}

int Macad::Occt::AIS_GlobalStatus::DisplayMode()
{
    int _result = ((::AIS_GlobalStatus*)_NativeInstance)->DisplayMode();
    return _result;
}

void Macad::Occt::AIS_GlobalStatus::SetDisplayMode(int theMode)
{
    ((::AIS_GlobalStatus*)_NativeInstance)->SetDisplayMode(theMode);
}

bool Macad::Occt::AIS_GlobalStatus::IsHilighted()
{
    bool _result = ((::AIS_GlobalStatus*)_NativeInstance)->IsHilighted();
    return _result;
}

void Macad::Occt::AIS_GlobalStatus::SetHilightStatus(bool theStatus)
{
    ((::AIS_GlobalStatus*)_NativeInstance)->SetHilightStatus(theStatus);
}

void Macad::Occt::AIS_GlobalStatus::SetHilightStyle(Macad::Occt::Prs3d_Drawer^ theStyle)
{
    ((::AIS_GlobalStatus*)_NativeInstance)->SetHilightStyle(Handle(::Prs3d_Drawer)(theStyle->NativeInstance));
}

Macad::Occt::Prs3d_Drawer^ Macad::Occt::AIS_GlobalStatus::HilightStyle()
{
    Handle(::Prs3d_Drawer) _result = ((::AIS_GlobalStatus*)_NativeInstance)->HilightStyle();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_Drawer::CreateDowncasted(_result.get());
}

Macad::Occt::TColStd_ListOfInteger^ Macad::Occt::AIS_GlobalStatus::SelectionModes()
{
    ::TColStd_ListOfInteger* _result = new ::TColStd_ListOfInteger();
    *_result = (::TColStd_ListOfInteger)((::AIS_GlobalStatus*)_NativeInstance)->SelectionModes();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfInteger(_result);
}

bool Macad::Occt::AIS_GlobalStatus::IsSModeIn(int theMode)
{
    bool _result = ((::AIS_GlobalStatus*)_NativeInstance)->IsSModeIn(theMode);
    return _result;
}

bool Macad::Occt::AIS_GlobalStatus::AddSelectionMode(int theMode)
{
    bool _result = ((::AIS_GlobalStatus*)_NativeInstance)->AddSelectionMode(theMode);
    return _result;
}

bool Macad::Occt::AIS_GlobalStatus::RemoveSelectionMode(int theMode)
{
    bool _result = ((::AIS_GlobalStatus*)_NativeInstance)->RemoveSelectionMode(theMode);
    return _result;
}

void Macad::Occt::AIS_GlobalStatus::ClearSelectionModes()
{
    ((::AIS_GlobalStatus*)_NativeInstance)->ClearSelectionModes();
}

bool Macad::Occt::AIS_GlobalStatus::IsSubIntensityOn()
{
    bool _result = ((::AIS_GlobalStatus*)_NativeInstance)->IsSubIntensityOn();
    return _result;
}

void Macad::Occt::AIS_GlobalStatus::SetSubIntensity(bool theIsOn)
{
    ((::AIS_GlobalStatus*)_NativeInstance)->SetSubIntensity(theIsOn);
}

Macad::Occt::AIS_GlobalStatus^ Macad::Occt::AIS_GlobalStatus::CreateDowncasted(::AIS_GlobalStatus* instance)
{
    return gcnew Macad::Occt::AIS_GlobalStatus( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_Selection
//---------------------------------------------------------------------

Macad::Occt::AIS_Selection::AIS_Selection()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Selection();
}

void Macad::Occt::AIS_Selection::Clear()
{
    ((::AIS_Selection*)_NativeInstance)->Clear();
}

Macad::Occt::AIS_SelectStatus Macad::Occt::AIS_Selection::Select(Macad::Occt::SelectMgr_EntityOwner^ theOwner, Macad::Occt::SelectMgr_Filter^ theFilter, Macad::Occt::AIS_SelectionScheme theSelScheme, bool theIsDetected)
{
    ::AIS_SelectStatus _result = ((::AIS_Selection*)_NativeInstance)->Select(Handle(::SelectMgr_EntityOwner)(theOwner->NativeInstance), Handle(::SelectMgr_Filter)(theFilter->NativeInstance), (::AIS_SelectionScheme)theSelScheme, theIsDetected);
    return (Macad::Occt::AIS_SelectStatus)_result;
}

Macad::Occt::AIS_SelectStatus Macad::Occt::AIS_Selection::AddSelect(Macad::Occt::SelectMgr_EntityOwner^ theObject)
{
    ::AIS_SelectStatus _result = ((::AIS_Selection*)_NativeInstance)->AddSelect(Handle(::SelectMgr_EntityOwner)(theObject->NativeInstance));
    return (Macad::Occt::AIS_SelectStatus)_result;
}

void Macad::Occt::AIS_Selection::ClearAndSelect(Macad::Occt::SelectMgr_EntityOwner^ theObject, Macad::Occt::SelectMgr_Filter^ theFilter, bool theIsDetected)
{
    ((::AIS_Selection*)_NativeInstance)->ClearAndSelect(Handle(::SelectMgr_EntityOwner)(theObject->NativeInstance), Handle(::SelectMgr_Filter)(theFilter->NativeInstance), theIsDetected);
}

bool Macad::Occt::AIS_Selection::IsSelected(Macad::Occt::SelectMgr_EntityOwner^ theObject)
{
    bool _result = ((::AIS_Selection*)_NativeInstance)->IsSelected(Handle(::SelectMgr_EntityOwner)(theObject->NativeInstance));
    return _result;
}

Macad::Occt::AIS_NListOfEntityOwner^ Macad::Occt::AIS_Selection::Objects()
{
    ::AIS_NListOfEntityOwner* _result = new ::AIS_NListOfEntityOwner();
    *_result = (::AIS_NListOfEntityOwner)((::AIS_Selection*)_NativeInstance)->Objects();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::AIS_NListOfEntityOwner(_result);
}

int Macad::Occt::AIS_Selection::Extent()
{
    int _result = ((::AIS_Selection*)_NativeInstance)->Extent();
    return _result;
}

bool Macad::Occt::AIS_Selection::IsEmpty()
{
    bool _result = ((::AIS_Selection*)_NativeInstance)->IsEmpty();
    return _result;
}

void Macad::Occt::AIS_Selection::Init()
{
    ((::AIS_Selection*)_NativeInstance)->Init();
}

bool Macad::Occt::AIS_Selection::More()
{
    bool _result = ((::AIS_Selection*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::AIS_Selection::Next()
{
    ((::AIS_Selection*)_NativeInstance)->Next();
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_Selection::Value()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_Selection*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_Selection::SelectOwners(Macad::Occt::AIS_NArray1OfEntityOwner^ thePickedOwners, Macad::Occt::AIS_SelectionScheme theSelScheme, bool theToAllowSelOverlap, Macad::Occt::SelectMgr_Filter^ theFilter)
{
    ((::AIS_Selection*)_NativeInstance)->SelectOwners(*(::AIS_NArray1OfEntityOwner*)thePickedOwners->NativeInstance, (::AIS_SelectionScheme)theSelScheme, theToAllowSelOverlap, Handle(::SelectMgr_Filter)(theFilter->NativeInstance));
}

Macad::Occt::AIS_Selection^ Macad::Occt::AIS_Selection::CreateDowncasted(::AIS_Selection* instance)
{
    return gcnew Macad::Occt::AIS_Selection( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_BaseAnimationObject
//---------------------------------------------------------------------

Macad::Occt::AIS_BaseAnimationObject^ Macad::Occt::AIS_BaseAnimationObject::CreateDowncasted(::AIS_BaseAnimationObject* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::AIS_AnimationAxisRotation)))
        return Macad::Occt::AIS_AnimationAxisRotation::CreateDowncasted((::AIS_AnimationAxisRotation*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_AnimationObject)))
        return Macad::Occt::AIS_AnimationObject::CreateDowncasted((::AIS_AnimationObject*)instance);
    
    return gcnew Macad::Occt::AIS_BaseAnimationObject( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_AnimationAxisRotation
//---------------------------------------------------------------------

Macad::Occt::AIS_AnimationAxisRotation::AIS_AnimationAxisRotation(Macad::Occt::TCollection_AsciiString^ theAnimationName, Macad::Occt::AIS_InteractiveContext^ theContext, Macad::Occt::AIS_InteractiveObject^ theObject, Macad::Occt::Ax1 theAxis, double theAngleStart, double theAngleEnd)
    : Macad::Occt::AIS_BaseAnimationObject(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax1> pp_theAxis = &theAxis;
    NativeInstance = new ::AIS_AnimationAxisRotation(*(::TCollection_AsciiString*)theAnimationName->NativeInstance, Handle(::AIS_InteractiveContext)(theContext->NativeInstance), Handle(::AIS_InteractiveObject)(theObject->NativeInstance), *(gp_Ax1*)pp_theAxis, theAngleStart, theAngleEnd);
}

Macad::Occt::AIS_AnimationAxisRotation^ Macad::Occt::AIS_AnimationAxisRotation::CreateDowncasted(::AIS_AnimationAxisRotation* instance)
{
    return gcnew Macad::Occt::AIS_AnimationAxisRotation( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_AnimationCamera
//---------------------------------------------------------------------

Macad::Occt::AIS_AnimationCamera::AIS_AnimationCamera(Macad::Occt::TCollection_AsciiString^ theAnimationName, Macad::Occt::V3d_View^ theView)
    : Macad::Occt::AIS_Animation(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_AnimationCamera(*(::TCollection_AsciiString*)theAnimationName->NativeInstance, Handle(::V3d_View)(theView->NativeInstance));
}

Macad::Occt::V3d_View^ Macad::Occt::AIS_AnimationCamera::View()
{
    Handle(::V3d_View) _result = ((::AIS_AnimationCamera*)_NativeInstance)->View();
    return _result.IsNull() ? nullptr : Macad::Occt::V3d_View::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_AnimationCamera::SetView(Macad::Occt::V3d_View^ theView)
{
    ((::AIS_AnimationCamera*)_NativeInstance)->SetView(Handle(::V3d_View)(theView->NativeInstance));
}

Macad::Occt::Graphic3d_Camera^ Macad::Occt::AIS_AnimationCamera::CameraStart()
{
    Handle(::Graphic3d_Camera) _result = ((::AIS_AnimationCamera*)_NativeInstance)->CameraStart();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Camera::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_AnimationCamera::SetCameraStart(Macad::Occt::Graphic3d_Camera^ theCameraStart)
{
    ((::AIS_AnimationCamera*)_NativeInstance)->SetCameraStart(Handle(::Graphic3d_Camera)(theCameraStart->NativeInstance));
}

Macad::Occt::Graphic3d_Camera^ Macad::Occt::AIS_AnimationCamera::CameraEnd()
{
    Handle(::Graphic3d_Camera) _result = ((::AIS_AnimationCamera*)_NativeInstance)->CameraEnd();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Camera::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_AnimationCamera::SetCameraEnd(Macad::Occt::Graphic3d_Camera^ theCameraEnd)
{
    ((::AIS_AnimationCamera*)_NativeInstance)->SetCameraEnd(Handle(::Graphic3d_Camera)(theCameraEnd->NativeInstance));
}

Macad::Occt::AIS_AnimationCamera^ Macad::Occt::AIS_AnimationCamera::CreateDowncasted(::AIS_AnimationCamera* instance)
{
    return gcnew Macad::Occt::AIS_AnimationCamera( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_AnimationObject
//---------------------------------------------------------------------

Macad::Occt::AIS_AnimationObject::AIS_AnimationObject(Macad::Occt::TCollection_AsciiString^ theAnimationName, Macad::Occt::AIS_InteractiveContext^ theContext, Macad::Occt::AIS_InteractiveObject^ theObject, Macad::Occt::Trsf theTrsfStart, Macad::Occt::Trsf theTrsfEnd)
    : Macad::Occt::AIS_BaseAnimationObject(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsfStart = &theTrsfStart;
    pin_ptr<Macad::Occt::Trsf> pp_theTrsfEnd = &theTrsfEnd;
    NativeInstance = new ::AIS_AnimationObject(*(::TCollection_AsciiString*)theAnimationName->NativeInstance, Handle(::AIS_InteractiveContext)(theContext->NativeInstance), Handle(::AIS_InteractiveObject)(theObject->NativeInstance), *(gp_Trsf*)pp_theTrsfStart, *(gp_Trsf*)pp_theTrsfEnd);
}

Macad::Occt::AIS_AnimationObject^ Macad::Occt::AIS_AnimationObject::CreateDowncasted(::AIS_AnimationObject* instance)
{
    return gcnew Macad::Occt::AIS_AnimationObject( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_AttributeFilter
//---------------------------------------------------------------------

Macad::Occt::AIS_AttributeFilter::AIS_AttributeFilter()
    : Macad::Occt::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_AttributeFilter();
}

Macad::Occt::AIS_AttributeFilter::AIS_AttributeFilter(Macad::Occt::Quantity_NameOfColor aCol)
    : Macad::Occt::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_AttributeFilter((::Quantity_NameOfColor)aCol);
}

Macad::Occt::AIS_AttributeFilter::AIS_AttributeFilter(double aWidth)
    : Macad::Occt::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_AttributeFilter(aWidth);
}

bool Macad::Occt::AIS_AttributeFilter::HasColor()
{
    bool _result = ((::AIS_AttributeFilter*)_NativeInstance)->HasColor();
    return _result;
}

bool Macad::Occt::AIS_AttributeFilter::HasWidth()
{
    bool _result = ((::AIS_AttributeFilter*)_NativeInstance)->HasWidth();
    return _result;
}

void Macad::Occt::AIS_AttributeFilter::SetColor(Macad::Occt::Quantity_NameOfColor theCol)
{
    ((::AIS_AttributeFilter*)_NativeInstance)->SetColor((::Quantity_NameOfColor)theCol);
}

void Macad::Occt::AIS_AttributeFilter::SetWidth(double theWidth)
{
    ((::AIS_AttributeFilter*)_NativeInstance)->SetWidth(theWidth);
}

void Macad::Occt::AIS_AttributeFilter::UnsetColor()
{
    ((::AIS_AttributeFilter*)_NativeInstance)->UnsetColor();
}

void Macad::Occt::AIS_AttributeFilter::UnsetWidth()
{
    ((::AIS_AttributeFilter*)_NativeInstance)->UnsetWidth();
}

bool Macad::Occt::AIS_AttributeFilter::IsOk(Macad::Occt::SelectMgr_EntityOwner^ anObj)
{
    bool _result = ((::AIS_AttributeFilter*)_NativeInstance)->IsOk(Handle(::SelectMgr_EntityOwner)(anObj->NativeInstance));
    return _result;
}

Macad::Occt::AIS_AttributeFilter^ Macad::Occt::AIS_AttributeFilter::CreateDowncasted(::AIS_AttributeFilter* instance)
{
    return gcnew Macad::Occt::AIS_AttributeFilter( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_Axis
//---------------------------------------------------------------------

Macad::Occt::AIS_Axis::AIS_Axis(Macad::Occt::Geom_Line^ aComponent)
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Axis(Handle(::Geom_Line)(aComponent->NativeInstance));
}

Macad::Occt::AIS_Axis::AIS_Axis(Macad::Occt::Geom_Axis2Placement^ aComponent, Macad::Occt::AIS_TypeOfAxis anAxisType)
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Axis(Handle(::Geom_Axis2Placement)(aComponent->NativeInstance), (::AIS_TypeOfAxis)anAxisType);
}

Macad::Occt::AIS_Axis::AIS_Axis(Macad::Occt::Geom_Axis1Placement^ anAxis)
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Axis(Handle(::Geom_Axis1Placement)(anAxis->NativeInstance));
}

Macad::Occt::AIS_Axis::AIS_Axis(Macad::Occt::Ax1 theAxis, double theLength)
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax1> pp_theAxis = &theAxis;
    NativeInstance = new ::AIS_Axis(*(gp_Ax1*)pp_theAxis, theLength);
}

Macad::Occt::AIS_Axis::AIS_Axis(Macad::Occt::Ax1 theAxis)
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax1> pp_theAxis = &theAxis;
    NativeInstance = new ::AIS_Axis(*(gp_Ax1*)pp_theAxis, -1);
}

Macad::Occt::Geom_Line^ Macad::Occt::AIS_Axis::Component()
{
    Handle(::Geom_Line) _result = ((::AIS_Axis*)_NativeInstance)->Component();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Line::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_Axis::SetComponent(Macad::Occt::Geom_Line^ aComponent)
{
    ((::AIS_Axis*)_NativeInstance)->SetComponent(Handle(::Geom_Line)(aComponent->NativeInstance));
}

Macad::Occt::Geom_Axis2Placement^ Macad::Occt::AIS_Axis::Axis2Placement()
{
    Handle(::Geom_Axis2Placement) _result = ((::AIS_Axis*)_NativeInstance)->Axis2Placement();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Axis2Placement::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_Axis::SetAxis2Placement(Macad::Occt::Geom_Axis2Placement^ aComponent, Macad::Occt::AIS_TypeOfAxis anAxisType)
{
    ((::AIS_Axis*)_NativeInstance)->SetAxis2Placement(Handle(::Geom_Axis2Placement)(aComponent->NativeInstance), (::AIS_TypeOfAxis)anAxisType);
}

void Macad::Occt::AIS_Axis::SetAxis1Placement(Macad::Occt::Geom_Axis1Placement^ anAxis)
{
    ((::AIS_Axis*)_NativeInstance)->SetAxis1Placement(Handle(::Geom_Axis1Placement)(anAxis->NativeInstance));
}

Macad::Occt::AIS_TypeOfAxis Macad::Occt::AIS_Axis::TypeOfAxis()
{
    ::AIS_TypeOfAxis _result = ((::AIS_Axis*)_NativeInstance)->TypeOfAxis();
    return (Macad::Occt::AIS_TypeOfAxis)_result;
}

void Macad::Occt::AIS_Axis::SetTypeOfAxis(Macad::Occt::AIS_TypeOfAxis theTypeAxis)
{
    ((::AIS_Axis*)_NativeInstance)->SetTypeOfAxis((::AIS_TypeOfAxis)theTypeAxis);
}

bool Macad::Occt::AIS_Axis::IsXYZAxis()
{
    bool _result = ((::AIS_Axis*)_NativeInstance)->IsXYZAxis();
    return _result;
}

bool Macad::Occt::AIS_Axis::AcceptDisplayMode(int aMode)
{
    bool _result = ((::AIS_Axis*)_NativeInstance)->AcceptDisplayMode(aMode);
    return _result;
}

int Macad::Occt::AIS_Axis::Signature()
{
    int _result = ((::AIS_Axis*)_NativeInstance)->Signature();
    return _result;
}

Macad::Occt::AIS_KindOfInteractive Macad::Occt::AIS_Axis::Type()
{
    ::AIS_KindOfInteractive _result = ((::AIS_Axis*)_NativeInstance)->Type();
    return (Macad::Occt::AIS_KindOfInteractive)_result;
}

void Macad::Occt::AIS_Axis::SetColor(Macad::Occt::Quantity_Color^ aColor)
{
    ((::AIS_Axis*)_NativeInstance)->SetColor(*(::Quantity_Color*)aColor->NativeInstance);
}

void Macad::Occt::AIS_Axis::SetWidth(double aValue)
{
    ((::AIS_Axis*)_NativeInstance)->SetWidth(aValue);
}

void Macad::Occt::AIS_Axis::SetDisplayAspect(Macad::Occt::Prs3d_LineAspect^ theNewDatumAspect)
{
    ((::AIS_Axis*)_NativeInstance)->SetDisplayAspect(Handle(::Prs3d_LineAspect)(theNewDatumAspect->NativeInstance));
}

void Macad::Occt::AIS_Axis::UnsetColor()
{
    ((::AIS_Axis*)_NativeInstance)->UnsetColor();
}

void Macad::Occt::AIS_Axis::UnsetWidth()
{
    ((::AIS_Axis*)_NativeInstance)->UnsetWidth();
}

Macad::Occt::AIS_Axis^ Macad::Occt::AIS_Axis::CreateDowncasted(::AIS_Axis* instance)
{
    return gcnew Macad::Occt::AIS_Axis( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_BadEdgeFilter
//---------------------------------------------------------------------

Macad::Occt::AIS_BadEdgeFilter::AIS_BadEdgeFilter()
    : Macad::Occt::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_BadEdgeFilter();
}

bool Macad::Occt::AIS_BadEdgeFilter::ActsOn(Macad::Occt::TopAbs_ShapeEnum aType)
{
    bool _result = ((::AIS_BadEdgeFilter*)_NativeInstance)->ActsOn((::TopAbs_ShapeEnum)aType);
    return _result;
}

bool Macad::Occt::AIS_BadEdgeFilter::IsOk(Macad::Occt::SelectMgr_EntityOwner^ EO)
{
    bool _result = ((::AIS_BadEdgeFilter*)_NativeInstance)->IsOk(Handle(::SelectMgr_EntityOwner)(EO->NativeInstance));
    return _result;
}

void Macad::Occt::AIS_BadEdgeFilter::SetContour(int Index)
{
    ((::AIS_BadEdgeFilter*)_NativeInstance)->SetContour(Index);
}

void Macad::Occt::AIS_BadEdgeFilter::AddEdge(Macad::Occt::TopoDS_Edge^ anEdge, int Index)
{
    ((::AIS_BadEdgeFilter*)_NativeInstance)->AddEdge(*(::TopoDS_Edge*)anEdge->NativeInstance, Index);
}

void Macad::Occt::AIS_BadEdgeFilter::RemoveEdges(int Index)
{
    ((::AIS_BadEdgeFilter*)_NativeInstance)->RemoveEdges(Index);
}

Macad::Occt::AIS_BadEdgeFilter^ Macad::Occt::AIS_BadEdgeFilter::CreateDowncasted(::AIS_BadEdgeFilter* instance)
{
    return gcnew Macad::Occt::AIS_BadEdgeFilter( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_C0RegularityFilter
//---------------------------------------------------------------------

Macad::Occt::AIS_C0RegularityFilter::AIS_C0RegularityFilter(Macad::Occt::TopoDS_Shape^ aShape)
    : Macad::Occt::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_C0RegularityFilter(*(::TopoDS_Shape*)aShape->NativeInstance);
}

bool Macad::Occt::AIS_C0RegularityFilter::ActsOn(Macad::Occt::TopAbs_ShapeEnum aType)
{
    bool _result = ((::AIS_C0RegularityFilter*)_NativeInstance)->ActsOn((::TopAbs_ShapeEnum)aType);
    return _result;
}

bool Macad::Occt::AIS_C0RegularityFilter::IsOk(Macad::Occt::SelectMgr_EntityOwner^ EO)
{
    bool _result = ((::AIS_C0RegularityFilter*)_NativeInstance)->IsOk(Handle(::SelectMgr_EntityOwner)(EO->NativeInstance));
    return _result;
}

Macad::Occt::AIS_C0RegularityFilter^ Macad::Occt::AIS_C0RegularityFilter::CreateDowncasted(::AIS_C0RegularityFilter* instance)
{
    return gcnew Macad::Occt::AIS_C0RegularityFilter( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_CameraFrustum
//---------------------------------------------------------------------

Macad::Occt::AIS_CameraFrustum::AIS_CameraFrustum()
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_CameraFrustum();
}

void Macad::Occt::AIS_CameraFrustum::SetCameraFrustum(Macad::Occt::Graphic3d_Camera^ theCamera)
{
    ((::AIS_CameraFrustum*)_NativeInstance)->SetCameraFrustum(Handle(::Graphic3d_Camera)(theCamera->NativeInstance));
}

void Macad::Occt::AIS_CameraFrustum::SetColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::AIS_CameraFrustum*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::AIS_CameraFrustum::UnsetColor()
{
    ((::AIS_CameraFrustum*)_NativeInstance)->UnsetColor();
}

void Macad::Occt::AIS_CameraFrustum::UnsetTransparency()
{
    ((::AIS_CameraFrustum*)_NativeInstance)->UnsetTransparency();
}

bool Macad::Occt::AIS_CameraFrustum::AcceptDisplayMode(int theMode)
{
    bool _result = ((::AIS_CameraFrustum*)_NativeInstance)->AcceptDisplayMode(theMode);
    return _result;
}

Macad::Occt::AIS_CameraFrustum^ Macad::Occt::AIS_CameraFrustum::CreateDowncasted(::AIS_CameraFrustum* instance)
{
    return gcnew Macad::Occt::AIS_CameraFrustum( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_Circle
//---------------------------------------------------------------------

Macad::Occt::AIS_Circle::AIS_Circle(Macad::Occt::Geom_Circle^ aCircle)
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Circle(Handle(::Geom_Circle)(aCircle->NativeInstance));
}

Macad::Occt::AIS_Circle::AIS_Circle(Macad::Occt::Geom_Circle^ theCircle, double theUStart, double theUEnd, bool theIsFilledCircleSens)
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Circle(Handle(::Geom_Circle)(theCircle->NativeInstance), theUStart, theUEnd, theIsFilledCircleSens);
}

Macad::Occt::AIS_Circle::AIS_Circle(Macad::Occt::Geom_Circle^ theCircle, double theUStart, double theUEnd)
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Circle(Handle(::Geom_Circle)(theCircle->NativeInstance), theUStart, theUEnd, false);
}

int Macad::Occt::AIS_Circle::Signature()
{
    int _result = ((::AIS_Circle*)_NativeInstance)->Signature();
    return _result;
}

Macad::Occt::AIS_KindOfInteractive Macad::Occt::AIS_Circle::Type()
{
    ::AIS_KindOfInteractive _result = ((::AIS_Circle*)_NativeInstance)->Type();
    return (Macad::Occt::AIS_KindOfInteractive)_result;
}

Macad::Occt::Geom_Circle^ Macad::Occt::AIS_Circle::Circle()
{
    Handle(::Geom_Circle) _result = ((::AIS_Circle*)_NativeInstance)->Circle();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Circle::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_Circle::Parameters(double% theU1, double% theU2)
{
    pin_ptr<double> pp_theU1 = &theU1;
    pin_ptr<double> pp_theU2 = &theU2;
    ((::AIS_Circle*)_NativeInstance)->Parameters(*(double*)pp_theU1, *(double*)pp_theU2);
}

void Macad::Occt::AIS_Circle::SetCircle(Macad::Occt::Geom_Circle^ theCircle)
{
    ((::AIS_Circle*)_NativeInstance)->SetCircle(Handle(::Geom_Circle)(theCircle->NativeInstance));
}

void Macad::Occt::AIS_Circle::SetFirstParam(double theU)
{
    ((::AIS_Circle*)_NativeInstance)->SetFirstParam(theU);
}

void Macad::Occt::AIS_Circle::SetLastParam(double theU)
{
    ((::AIS_Circle*)_NativeInstance)->SetLastParam(theU);
}

void Macad::Occt::AIS_Circle::SetColor(Macad::Occt::Quantity_Color^ aColor)
{
    ((::AIS_Circle*)_NativeInstance)->SetColor(*(::Quantity_Color*)aColor->NativeInstance);
}

void Macad::Occt::AIS_Circle::SetWidth(double aValue)
{
    ((::AIS_Circle*)_NativeInstance)->SetWidth(aValue);
}

void Macad::Occt::AIS_Circle::UnsetColor()
{
    ((::AIS_Circle*)_NativeInstance)->UnsetColor();
}

void Macad::Occt::AIS_Circle::UnsetWidth()
{
    ((::AIS_Circle*)_NativeInstance)->UnsetWidth();
}

bool Macad::Occt::AIS_Circle::IsFilledCircleSens()
{
    bool _result = ((::AIS_Circle*)_NativeInstance)->IsFilledCircleSens();
    return _result;
}

void Macad::Occt::AIS_Circle::SetFilledCircleSens(bool theIsFilledCircleSens)
{
    ((::AIS_Circle*)_NativeInstance)->SetFilledCircleSens(theIsFilledCircleSens);
}

Macad::Occt::AIS_Circle^ Macad::Occt::AIS_Circle::CreateDowncasted(::AIS_Circle* instance)
{
    return gcnew Macad::Occt::AIS_Circle( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_ColoredDrawer
//---------------------------------------------------------------------

Macad::Occt::AIS_ColoredDrawer::AIS_ColoredDrawer(Macad::Occt::Prs3d_Drawer^ theLink)
    : Macad::Occt::Prs3d_Drawer(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ColoredDrawer(Handle(::Prs3d_Drawer)(theLink->NativeInstance));
}

bool Macad::Occt::AIS_ColoredDrawer::IsHidden()
{
    bool _result = ((::AIS_ColoredDrawer*)_NativeInstance)->IsHidden();
    return _result;
}

void Macad::Occt::AIS_ColoredDrawer::SetHidden(bool theToHide)
{
    ((::AIS_ColoredDrawer*)_NativeInstance)->SetHidden(theToHide);
}

bool Macad::Occt::AIS_ColoredDrawer::HasOwnMaterial()
{
    bool _result = ((::AIS_ColoredDrawer*)_NativeInstance)->HasOwnMaterial();
    return _result;
}

void Macad::Occt::AIS_ColoredDrawer::UnsetOwnMaterial()
{
    ((::AIS_ColoredDrawer*)_NativeInstance)->UnsetOwnMaterial();
}

void Macad::Occt::AIS_ColoredDrawer::SetOwnMaterial()
{
    ((::AIS_ColoredDrawer*)_NativeInstance)->SetOwnMaterial();
}

bool Macad::Occt::AIS_ColoredDrawer::HasOwnColor()
{
    bool _result = ((::AIS_ColoredDrawer*)_NativeInstance)->HasOwnColor();
    return _result;
}

void Macad::Occt::AIS_ColoredDrawer::UnsetOwnColor()
{
    ((::AIS_ColoredDrawer*)_NativeInstance)->UnsetOwnColor();
}

void Macad::Occt::AIS_ColoredDrawer::SetOwnColor(Macad::Occt::Quantity_Color^ parameter1)
{
    ((::AIS_ColoredDrawer*)_NativeInstance)->SetOwnColor(*(::Quantity_Color*)parameter1->NativeInstance);
}

bool Macad::Occt::AIS_ColoredDrawer::HasOwnTransparency()
{
    bool _result = ((::AIS_ColoredDrawer*)_NativeInstance)->HasOwnTransparency();
    return _result;
}

void Macad::Occt::AIS_ColoredDrawer::UnsetOwnTransparency()
{
    ((::AIS_ColoredDrawer*)_NativeInstance)->UnsetOwnTransparency();
}

void Macad::Occt::AIS_ColoredDrawer::SetOwnTransparency(double parameter1)
{
    ((::AIS_ColoredDrawer*)_NativeInstance)->SetOwnTransparency(parameter1);
}

bool Macad::Occt::AIS_ColoredDrawer::HasOwnWidth()
{
    bool _result = ((::AIS_ColoredDrawer*)_NativeInstance)->HasOwnWidth();
    return _result;
}

void Macad::Occt::AIS_ColoredDrawer::UnsetOwnWidth()
{
    ((::AIS_ColoredDrawer*)_NativeInstance)->UnsetOwnWidth();
}

void Macad::Occt::AIS_ColoredDrawer::SetOwnWidth(double parameter1)
{
    ((::AIS_ColoredDrawer*)_NativeInstance)->SetOwnWidth(parameter1);
}

Macad::Occt::AIS_ColoredDrawer^ Macad::Occt::AIS_ColoredDrawer::CreateDowncasted(::AIS_ColoredDrawer* instance)
{
    return gcnew Macad::Occt::AIS_ColoredDrawer( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_Shape
//---------------------------------------------------------------------

Macad::Occt::AIS_Shape::AIS_Shape(Macad::Occt::TopoDS_Shape^ shap)
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Shape(*(::TopoDS_Shape*)shap->NativeInstance);
}

int Macad::Occt::AIS_Shape::Signature()
{
    int _result = ((::AIS_Shape*)_NativeInstance)->Signature();
    return _result;
}

Macad::Occt::AIS_KindOfInteractive Macad::Occt::AIS_Shape::Type()
{
    ::AIS_KindOfInteractive _result = ((::AIS_Shape*)_NativeInstance)->Type();
    return (Macad::Occt::AIS_KindOfInteractive)_result;
}

bool Macad::Occt::AIS_Shape::AcceptShapeDecomposition()
{
    bool _result = ((::AIS_Shape*)_NativeInstance)->AcceptShapeDecomposition();
    return _result;
}

bool Macad::Occt::AIS_Shape::AcceptDisplayMode(int theMode)
{
    bool _result = ((::AIS_Shape*)_NativeInstance)->AcceptDisplayMode(theMode);
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::AIS_Shape::Shape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::AIS_Shape*)_NativeInstance)->Shape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::AIS_Shape::SetShape(Macad::Occt::TopoDS_Shape^ theShape)
{
    ((::AIS_Shape*)_NativeInstance)->SetShape(*(::TopoDS_Shape*)theShape->NativeInstance);
}

void Macad::Occt::AIS_Shape::Set(Macad::Occt::TopoDS_Shape^ theShape)
{
    ((::AIS_Shape*)_NativeInstance)->Set(*(::TopoDS_Shape*)theShape->NativeInstance);
}

bool Macad::Occt::AIS_Shape::SetOwnDeviationCoefficient()
{
    bool _result = ((::AIS_Shape*)_NativeInstance)->SetOwnDeviationCoefficient();
    return _result;
}

bool Macad::Occt::AIS_Shape::SetOwnDeviationAngle()
{
    bool _result = ((::AIS_Shape*)_NativeInstance)->SetOwnDeviationAngle();
    return _result;
}

void Macad::Occt::AIS_Shape::SetOwnDeviationCoefficient(double aCoefficient)
{
    ((::AIS_Shape*)_NativeInstance)->SetOwnDeviationCoefficient(aCoefficient);
}

void Macad::Occt::AIS_Shape::SetAngleAndDeviation(double anAngle)
{
    ((::AIS_Shape*)_NativeInstance)->SetAngleAndDeviation(anAngle);
}

double Macad::Occt::AIS_Shape::UserAngle()
{
    double _result = ((::AIS_Shape*)_NativeInstance)->UserAngle();
    return _result;
}

void Macad::Occt::AIS_Shape::SetOwnDeviationAngle(double anAngle)
{
    ((::AIS_Shape*)_NativeInstance)->SetOwnDeviationAngle(anAngle);
}

bool Macad::Occt::AIS_Shape::OwnDeviationCoefficient(double% aCoefficient, double% aPreviousCoefficient)
{
    pin_ptr<double> pp_aCoefficient = &aCoefficient;
    pin_ptr<double> pp_aPreviousCoefficient = &aPreviousCoefficient;
    bool _result = ((::AIS_Shape*)_NativeInstance)->OwnDeviationCoefficient(*(double*)pp_aCoefficient, *(double*)pp_aPreviousCoefficient);
    return _result;
}

bool Macad::Occt::AIS_Shape::OwnDeviationAngle(double% anAngle, double% aPreviousAngle)
{
    pin_ptr<double> pp_anAngle = &anAngle;
    pin_ptr<double> pp_aPreviousAngle = &aPreviousAngle;
    bool _result = ((::AIS_Shape*)_NativeInstance)->OwnDeviationAngle(*(double*)pp_anAngle, *(double*)pp_aPreviousAngle);
    return _result;
}

void Macad::Occt::AIS_Shape::SetTypeOfHLR(Macad::Occt::Prs3d_TypeOfHLR theTypeOfHLR)
{
    ((::AIS_Shape*)_NativeInstance)->SetTypeOfHLR((::Prs3d_TypeOfHLR)theTypeOfHLR);
}

Macad::Occt::Prs3d_TypeOfHLR Macad::Occt::AIS_Shape::TypeOfHLR()
{
    ::Prs3d_TypeOfHLR _result = ((::AIS_Shape*)_NativeInstance)->TypeOfHLR();
    return (Macad::Occt::Prs3d_TypeOfHLR)_result;
}

void Macad::Occt::AIS_Shape::SetColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::AIS_Shape*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::AIS_Shape::UnsetColor()
{
    ((::AIS_Shape*)_NativeInstance)->UnsetColor();
}

void Macad::Occt::AIS_Shape::SetWidth(double aValue)
{
    ((::AIS_Shape*)_NativeInstance)->SetWidth(aValue);
}

void Macad::Occt::AIS_Shape::UnsetWidth()
{
    ((::AIS_Shape*)_NativeInstance)->UnsetWidth();
}

void Macad::Occt::AIS_Shape::SetMaterial(Macad::Occt::Graphic3d_MaterialAspect^ aName)
{
    ((::AIS_Shape*)_NativeInstance)->SetMaterial(*(::Graphic3d_MaterialAspect*)aName->NativeInstance);
}

void Macad::Occt::AIS_Shape::UnsetMaterial()
{
    ((::AIS_Shape*)_NativeInstance)->UnsetMaterial();
}

void Macad::Occt::AIS_Shape::SetTransparency(double aValue)
{
    ((::AIS_Shape*)_NativeInstance)->SetTransparency(aValue);
}

void Macad::Occt::AIS_Shape::SetTransparency()
{
    ((::AIS_Shape*)_NativeInstance)->SetTransparency(0.59999999999999998);
}

void Macad::Occt::AIS_Shape::UnsetTransparency()
{
    ((::AIS_Shape*)_NativeInstance)->UnsetTransparency();
}

Macad::Occt::Bnd_Box^ Macad::Occt::AIS_Shape::BoundingBox()
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = (::Bnd_Box)((::AIS_Shape*)_NativeInstance)->BoundingBox();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

void Macad::Occt::AIS_Shape::Color(Macad::Occt::Quantity_Color^ aColor)
{
    ((::AIS_Shape*)_NativeInstance)->Color(*(::Quantity_Color*)aColor->NativeInstance);
}

Macad::Occt::Graphic3d_NameOfMaterial Macad::Occt::AIS_Shape::Material()
{
    ::Graphic3d_NameOfMaterial _result = ((::AIS_Shape*)_NativeInstance)->Material();
    return (Macad::Occt::Graphic3d_NameOfMaterial)_result;
}

double Macad::Occt::AIS_Shape::Transparency()
{
    double _result = ((::AIS_Shape*)_NativeInstance)->Transparency();
    return _result;
}

Macad::Occt::TopAbs_ShapeEnum Macad::Occt::AIS_Shape::SelectionType(int theSelMode)
{
    ::TopAbs_ShapeEnum _result = ::AIS_Shape::SelectionType(theSelMode);
    return (Macad::Occt::TopAbs_ShapeEnum)_result;
}

int Macad::Occt::AIS_Shape::SelectionMode(Macad::Occt::TopAbs_ShapeEnum theShapeType)
{
    int _result = ::AIS_Shape::SelectionMode((::TopAbs_ShapeEnum)theShapeType);
    return _result;
}

Macad::Occt::Pnt2d Macad::Occt::AIS_Shape::TextureRepeatUV()
{
    ::gp_Pnt2d _nativeResult = ((::AIS_Shape*)_NativeInstance)->TextureRepeatUV();
    return Macad::Occt::Pnt2d(_nativeResult);
}

void Macad::Occt::AIS_Shape::SetTextureRepeatUV(Macad::Occt::Pnt2d theRepeatUV)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theRepeatUV = &theRepeatUV;
    ((::AIS_Shape*)_NativeInstance)->SetTextureRepeatUV(*(gp_Pnt2d*)pp_theRepeatUV);
}

Macad::Occt::Pnt2d Macad::Occt::AIS_Shape::TextureOriginUV()
{
    ::gp_Pnt2d _nativeResult = ((::AIS_Shape*)_NativeInstance)->TextureOriginUV();
    return Macad::Occt::Pnt2d(_nativeResult);
}

void Macad::Occt::AIS_Shape::SetTextureOriginUV(Macad::Occt::Pnt2d theOriginUV)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theOriginUV = &theOriginUV;
    ((::AIS_Shape*)_NativeInstance)->SetTextureOriginUV(*(gp_Pnt2d*)pp_theOriginUV);
}

Macad::Occt::Pnt2d Macad::Occt::AIS_Shape::TextureScaleUV()
{
    ::gp_Pnt2d _nativeResult = ((::AIS_Shape*)_NativeInstance)->TextureScaleUV();
    return Macad::Occt::Pnt2d(_nativeResult);
}

void Macad::Occt::AIS_Shape::SetTextureScaleUV(Macad::Occt::Pnt2d theScaleUV)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theScaleUV = &theScaleUV;
    ((::AIS_Shape*)_NativeInstance)->SetTextureScaleUV(*(gp_Pnt2d*)pp_theScaleUV);
}

void Macad::Occt::AIS_Shape::computeHlrPresentation(Macad::Occt::Graphic3d_Camera^ theProjector, Macad::Occt::Graphic3d_Structure^ thePrs, Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::Prs3d_Drawer^ theDrawer)
{
    ::AIS_Shape::computeHlrPresentation(Handle(::Graphic3d_Camera)(theProjector->NativeInstance), Handle(::Graphic3d_Structure)(thePrs->NativeInstance), *(::TopoDS_Shape*)theShape->NativeInstance, Handle(::Prs3d_Drawer)(theDrawer->NativeInstance));
}

void Macad::Occt::AIS_Shape::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::AIS_Shape*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::AIS_Shape::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::AIS_Shape*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::AIS_Shape^ Macad::Occt::AIS_Shape::CreateDowncasted(::AIS_Shape* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::AIS_ColoredShape)))
        return Macad::Occt::AIS_ColoredShape::CreateDowncasted((::AIS_ColoredShape*)instance);
    if (instance->IsKind(STANDARD_TYPE(::AIS_TexturedShape)))
        return Macad::Occt::AIS_TexturedShape::CreateDowncasted((::AIS_TexturedShape*)instance);
    
    return gcnew Macad::Occt::AIS_Shape( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_ColoredShape
//---------------------------------------------------------------------

Macad::Occt::AIS_ColoredShape::AIS_ColoredShape(Macad::Occt::TopoDS_Shape^ theShape)
    : Macad::Occt::AIS_Shape(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ColoredShape(*(::TopoDS_Shape*)theShape->NativeInstance);
}

Macad::Occt::AIS_ColoredShape::AIS_ColoredShape(Macad::Occt::AIS_Shape^ theShape)
    : Macad::Occt::AIS_Shape(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ColoredShape(Handle(::AIS_Shape)(theShape->NativeInstance));
}

Macad::Occt::AIS_ColoredDrawer^ Macad::Occt::AIS_ColoredShape::CustomAspects(Macad::Occt::TopoDS_Shape^ theShape)
{
    Handle(::AIS_ColoredDrawer) _result = ((::AIS_ColoredShape*)_NativeInstance)->CustomAspects(*(::TopoDS_Shape*)theShape->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_ColoredDrawer::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_ColoredShape::ClearCustomAspects()
{
    ((::AIS_ColoredShape*)_NativeInstance)->ClearCustomAspects();
}

void Macad::Occt::AIS_ColoredShape::UnsetCustomAspects(Macad::Occt::TopoDS_Shape^ theShape, bool theToUnregister)
{
    ((::AIS_ColoredShape*)_NativeInstance)->UnsetCustomAspects(*(::TopoDS_Shape*)theShape->NativeInstance, theToUnregister);
}

void Macad::Occt::AIS_ColoredShape::UnsetCustomAspects(Macad::Occt::TopoDS_Shape^ theShape)
{
    ((::AIS_ColoredShape*)_NativeInstance)->UnsetCustomAspects(*(::TopoDS_Shape*)theShape->NativeInstance, false);
}

void Macad::Occt::AIS_ColoredShape::SetCustomColor(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::Quantity_Color^ theColor)
{
    ((::AIS_ColoredShape*)_NativeInstance)->SetCustomColor(*(::TopoDS_Shape*)theShape->NativeInstance, *(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::AIS_ColoredShape::SetCustomTransparency(Macad::Occt::TopoDS_Shape^ theShape, double theTransparency)
{
    ((::AIS_ColoredShape*)_NativeInstance)->SetCustomTransparency(*(::TopoDS_Shape*)theShape->NativeInstance, theTransparency);
}

void Macad::Occt::AIS_ColoredShape::SetCustomWidth(Macad::Occt::TopoDS_Shape^ theShape, double theLineWidth)
{
    ((::AIS_ColoredShape*)_NativeInstance)->SetCustomWidth(*(::TopoDS_Shape*)theShape->NativeInstance, theLineWidth);
}

Macad::Occt::AIS_DataMapOfShapeDrawer^ Macad::Occt::AIS_ColoredShape::CustomAspectsMap()
{
    ::AIS_DataMapOfShapeDrawer* _result = new ::AIS_DataMapOfShapeDrawer();
    *_result = (::AIS_DataMapOfShapeDrawer)((::AIS_ColoredShape*)_NativeInstance)->CustomAspectsMap();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::AIS_DataMapOfShapeDrawer(_result);
}

Macad::Occt::AIS_DataMapOfShapeDrawer^ Macad::Occt::AIS_ColoredShape::ChangeCustomAspectsMap()
{
    ::AIS_DataMapOfShapeDrawer* _result = new ::AIS_DataMapOfShapeDrawer();
    *_result = ((::AIS_ColoredShape*)_NativeInstance)->ChangeCustomAspectsMap();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::AIS_DataMapOfShapeDrawer(_result);
}

void Macad::Occt::AIS_ColoredShape::SetColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::AIS_ColoredShape*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::AIS_ColoredShape::SetWidth(double theLineWidth)
{
    ((::AIS_ColoredShape*)_NativeInstance)->SetWidth(theLineWidth);
}

void Macad::Occt::AIS_ColoredShape::SetTransparency(double theValue)
{
    ((::AIS_ColoredShape*)_NativeInstance)->SetTransparency(theValue);
}

void Macad::Occt::AIS_ColoredShape::SetMaterial(Macad::Occt::Graphic3d_MaterialAspect^ theAspect)
{
    ((::AIS_ColoredShape*)_NativeInstance)->SetMaterial(*(::Graphic3d_MaterialAspect*)theAspect->NativeInstance);
}

void Macad::Occt::AIS_ColoredShape::UnsetTransparency()
{
    ((::AIS_ColoredShape*)_NativeInstance)->UnsetTransparency();
}

void Macad::Occt::AIS_ColoredShape::UnsetWidth()
{
    ((::AIS_ColoredShape*)_NativeInstance)->UnsetWidth();
}

Macad::Occt::AIS_ColoredShape^ Macad::Occt::AIS_ColoredShape::CreateDowncasted(::AIS_ColoredShape* instance)
{
    return gcnew Macad::Occt::AIS_ColoredShape( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_ColorScale
//---------------------------------------------------------------------

Macad::Occt::AIS_ColorScale::AIS_ColorScale()
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ColorScale();
}

bool Macad::Occt::AIS_ColorScale::FindColor(double theValue, double theMin, double theMax, int theColorsCount, Macad::Occt::Graphic3d_Vec3d^ theColorHlsMin, Macad::Occt::Graphic3d_Vec3d^ theColorHlsMax, Macad::Occt::Quantity_Color^ theColor)
{
    bool _result = ::AIS_ColorScale::FindColor(theValue, theMin, theMax, theColorsCount, *(::Graphic3d_Vec3d*)theColorHlsMin->NativeInstance, *(::Graphic3d_Vec3d*)theColorHlsMax->NativeInstance, *(::Quantity_Color*)theColor->NativeInstance);
    return _result;
}

bool Macad::Occt::AIS_ColorScale::FindColor(double theValue, double theMin, double theMax, int theColorsCount, Macad::Occt::Quantity_Color^ theColor)
{
    bool _result = ::AIS_ColorScale::FindColor(theValue, theMin, theMax, theColorsCount, *(::Quantity_Color*)theColor->NativeInstance);
    return _result;
}

double Macad::Occt::AIS_ColorScale::hueToValidRange(double theHue)
{
    double _result = ::AIS_ColorScale::hueToValidRange(theHue);
    return _result;
}

bool Macad::Occt::AIS_ColorScale::FindColor(double theValue, Macad::Occt::Quantity_Color^ theColor)
{
    bool _result = ((::AIS_ColorScale*)_NativeInstance)->FindColor(theValue, *(::Quantity_Color*)theColor->NativeInstance);
    return _result;
}

double Macad::Occt::AIS_ColorScale::GetMin()
{
    double _result = ((::AIS_ColorScale*)_NativeInstance)->GetMin();
    return _result;
}

void Macad::Occt::AIS_ColorScale::SetMin(double theMin)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetMin(theMin);
}

double Macad::Occt::AIS_ColorScale::GetMax()
{
    double _result = ((::AIS_ColorScale*)_NativeInstance)->GetMax();
    return _result;
}

void Macad::Occt::AIS_ColorScale::SetMax(double theMax)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetMax(theMax);
}

void Macad::Occt::AIS_ColorScale::GetRange(double% theMin, double% theMax)
{
    pin_ptr<double> pp_theMin = &theMin;
    pin_ptr<double> pp_theMax = &theMax;
    ((::AIS_ColorScale*)_NativeInstance)->GetRange(*(double*)pp_theMin, *(double*)pp_theMax);
}

void Macad::Occt::AIS_ColorScale::SetRange(double theMin, double theMax)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetRange(theMin, theMax);
}

double Macad::Occt::AIS_ColorScale::HueMin()
{
    double _result = ((::AIS_ColorScale*)_NativeInstance)->HueMin();
    return _result;
}

double Macad::Occt::AIS_ColorScale::HueMax()
{
    double _result = ((::AIS_ColorScale*)_NativeInstance)->HueMax();
    return _result;
}

void Macad::Occt::AIS_ColorScale::HueRange(double% theMinAngle, double% theMaxAngle)
{
    pin_ptr<double> pp_theMinAngle = &theMinAngle;
    pin_ptr<double> pp_theMaxAngle = &theMaxAngle;
    ((::AIS_ColorScale*)_NativeInstance)->HueRange(*(double*)pp_theMinAngle, *(double*)pp_theMaxAngle);
}

void Macad::Occt::AIS_ColorScale::SetHueRange(double theMinAngle, double theMaxAngle)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetHueRange(theMinAngle, theMaxAngle);
}

void Macad::Occt::AIS_ColorScale::ColorRange(Macad::Occt::Quantity_Color^ theMinColor, Macad::Occt::Quantity_Color^ theMaxColor)
{
    ((::AIS_ColorScale*)_NativeInstance)->ColorRange(*(::Quantity_Color*)theMinColor->NativeInstance, *(::Quantity_Color*)theMaxColor->NativeInstance);
}

void Macad::Occt::AIS_ColorScale::SetColorRange(Macad::Occt::Quantity_Color^ theMinColor, Macad::Occt::Quantity_Color^ theMaxColor)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetColorRange(*(::Quantity_Color*)theMinColor->NativeInstance, *(::Quantity_Color*)theMaxColor->NativeInstance);
}

Macad::Occt::Aspect_TypeOfColorScaleData Macad::Occt::AIS_ColorScale::GetLabelType()
{
    ::Aspect_TypeOfColorScaleData _result = ((::AIS_ColorScale*)_NativeInstance)->GetLabelType();
    return (Macad::Occt::Aspect_TypeOfColorScaleData)_result;
}

void Macad::Occt::AIS_ColorScale::SetLabelType(Macad::Occt::Aspect_TypeOfColorScaleData theType)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetLabelType((::Aspect_TypeOfColorScaleData)theType);
}

Macad::Occt::Aspect_TypeOfColorScaleData Macad::Occt::AIS_ColorScale::GetColorType()
{
    ::Aspect_TypeOfColorScaleData _result = ((::AIS_ColorScale*)_NativeInstance)->GetColorType();
    return (Macad::Occt::Aspect_TypeOfColorScaleData)_result;
}

void Macad::Occt::AIS_ColorScale::SetColorType(Macad::Occt::Aspect_TypeOfColorScaleData theType)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetColorType((::Aspect_TypeOfColorScaleData)theType);
}

int Macad::Occt::AIS_ColorScale::GetNumberOfIntervals()
{
    int _result = ((::AIS_ColorScale*)_NativeInstance)->GetNumberOfIntervals();
    return _result;
}

void Macad::Occt::AIS_ColorScale::SetNumberOfIntervals(int theNum)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetNumberOfIntervals(theNum);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::AIS_ColorScale::GetTitle()
{
    ::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
    *_result = (::TCollection_ExtendedString)((::AIS_ColorScale*)_NativeInstance)->GetTitle();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

void Macad::Occt::AIS_ColorScale::SetTitle(Macad::Occt::TCollection_ExtendedString^ theTitle)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetTitle(*(::TCollection_ExtendedString*)theTitle->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::AIS_ColorScale::GetFormat()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::AIS_ColorScale*)_NativeInstance)->GetFormat();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::AIS_ColorScale::Format()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::AIS_ColorScale*)_NativeInstance)->Format();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::AIS_ColorScale::SetFormat(Macad::Occt::TCollection_AsciiString^ theFormat)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetFormat(*(::TCollection_AsciiString*)theFormat->NativeInstance);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::AIS_ColorScale::GetLabel(int theIndex)
{
    ::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
    *_result = ((::AIS_ColorScale*)_NativeInstance)->GetLabel(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::AIS_ColorScale::GetIntervalColor(int theIndex)
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = ((::AIS_ColorScale*)_NativeInstance)->GetIntervalColor(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::AIS_ColorScale::SetIntervalColor(Macad::Occt::Quantity_Color^ theColor, int theIndex)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetIntervalColor(*(::Quantity_Color*)theColor->NativeInstance, theIndex);
}

void Macad::Occt::AIS_ColorScale::GetLabels(Macad::Occt::TColStd_SequenceOfExtendedString^ theLabels)
{
    ((::AIS_ColorScale*)_NativeInstance)->GetLabels(*(::TColStd_SequenceOfExtendedString*)theLabels->NativeInstance);
}

Macad::Occt::TColStd_SequenceOfExtendedString^ Macad::Occt::AIS_ColorScale::Labels()
{
    ::TColStd_SequenceOfExtendedString* _result = new ::TColStd_SequenceOfExtendedString();
    *_result = (::TColStd_SequenceOfExtendedString)((::AIS_ColorScale*)_NativeInstance)->Labels();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_SequenceOfExtendedString(_result);
}

void Macad::Occt::AIS_ColorScale::SetLabels(Macad::Occt::TColStd_SequenceOfExtendedString^ theSeq)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetLabels(*(::TColStd_SequenceOfExtendedString*)theSeq->NativeInstance);
}

void Macad::Occt::AIS_ColorScale::GetColors(Macad::Occt::Aspect_SequenceOfColor^ theColors)
{
    ((::AIS_ColorScale*)_NativeInstance)->GetColors(*(::Aspect_SequenceOfColor*)theColors->NativeInstance);
}

Macad::Occt::Aspect_SequenceOfColor^ Macad::Occt::AIS_ColorScale::GetColors()
{
    ::Aspect_SequenceOfColor* _result = new ::Aspect_SequenceOfColor();
    *_result = (::Aspect_SequenceOfColor)((::AIS_ColorScale*)_NativeInstance)->GetColors();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_SequenceOfColor(_result);
}

void Macad::Occt::AIS_ColorScale::SetColors(Macad::Occt::Aspect_SequenceOfColor^ theSeq)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetColors(*(::Aspect_SequenceOfColor*)theSeq->NativeInstance);
}

void Macad::Occt::AIS_ColorScale::SetUniformColors(double theLightness, double theHueFrom, double theHueTo)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetUniformColors(theLightness, theHueFrom, theHueTo);
}

Macad::Occt::Aspect_SequenceOfColor^ Macad::Occt::AIS_ColorScale::MakeUniformColors(int theNbColors, double theLightness, double theHueFrom, double theHueTo)
{
    ::Aspect_SequenceOfColor* _result = new ::Aspect_SequenceOfColor();
    *_result = ::AIS_ColorScale::MakeUniformColors(theNbColors, theLightness, theHueFrom, theHueTo);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_SequenceOfColor(_result);
}

Macad::Occt::Aspect_TypeOfColorScalePosition Macad::Occt::AIS_ColorScale::GetLabelPosition()
{
    ::Aspect_TypeOfColorScalePosition _result = ((::AIS_ColorScale*)_NativeInstance)->GetLabelPosition();
    return (Macad::Occt::Aspect_TypeOfColorScalePosition)_result;
}

void Macad::Occt::AIS_ColorScale::SetLabelPosition(Macad::Occt::Aspect_TypeOfColorScalePosition thePos)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetLabelPosition((::Aspect_TypeOfColorScalePosition)thePos);
}

Macad::Occt::Aspect_TypeOfColorScalePosition Macad::Occt::AIS_ColorScale::GetTitlePosition()
{
    ::Aspect_TypeOfColorScalePosition _result = ((::AIS_ColorScale*)_NativeInstance)->GetTitlePosition();
    return (Macad::Occt::Aspect_TypeOfColorScalePosition)_result;
}

void Macad::Occt::AIS_ColorScale::SetTitlePosition(Macad::Occt::Aspect_TypeOfColorScalePosition thePos)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetTitlePosition((::Aspect_TypeOfColorScalePosition)thePos);
}

bool Macad::Occt::AIS_ColorScale::IsReversed()
{
    bool _result = ((::AIS_ColorScale*)_NativeInstance)->IsReversed();
    return _result;
}

void Macad::Occt::AIS_ColorScale::SetReversed(bool theReverse)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetReversed(theReverse);
}

bool Macad::Occt::AIS_ColorScale::IsSmoothTransition()
{
    bool _result = ((::AIS_ColorScale*)_NativeInstance)->IsSmoothTransition();
    return _result;
}

void Macad::Occt::AIS_ColorScale::SetSmoothTransition(bool theIsSmooth)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetSmoothTransition(theIsSmooth);
}

bool Macad::Occt::AIS_ColorScale::IsLabelAtBorder()
{
    bool _result = ((::AIS_ColorScale*)_NativeInstance)->IsLabelAtBorder();
    return _result;
}

void Macad::Occt::AIS_ColorScale::SetLabelAtBorder(bool theOn)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetLabelAtBorder(theOn);
}

bool Macad::Occt::AIS_ColorScale::IsLogarithmic()
{
    bool _result = ((::AIS_ColorScale*)_NativeInstance)->IsLogarithmic();
    return _result;
}

void Macad::Occt::AIS_ColorScale::SetLogarithmic(bool isLogarithmic)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetLogarithmic(isLogarithmic);
}

void Macad::Occt::AIS_ColorScale::SetLabel(Macad::Occt::TCollection_ExtendedString^ theLabel, int theIndex)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetLabel(*(::TCollection_ExtendedString*)theLabel->NativeInstance, theIndex);
}

void Macad::Occt::AIS_ColorScale::GetSize(int% theBreadth, int% theHeight)
{
    pin_ptr<int> pp_theBreadth = &theBreadth;
    pin_ptr<int> pp_theHeight = &theHeight;
    ((::AIS_ColorScale*)_NativeInstance)->GetSize(*(int*)pp_theBreadth, *(int*)pp_theHeight);
}

void Macad::Occt::AIS_ColorScale::SetSize(int theBreadth, int theHeight)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetSize(theBreadth, theHeight);
}

int Macad::Occt::AIS_ColorScale::GetBreadth()
{
    int _result = ((::AIS_ColorScale*)_NativeInstance)->GetBreadth();
    return _result;
}

void Macad::Occt::AIS_ColorScale::SetBreadth(int theBreadth)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetBreadth(theBreadth);
}

int Macad::Occt::AIS_ColorScale::GetHeight()
{
    int _result = ((::AIS_ColorScale*)_NativeInstance)->GetHeight();
    return _result;
}

void Macad::Occt::AIS_ColorScale::SetHeight(int theHeight)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetHeight(theHeight);
}

void Macad::Occt::AIS_ColorScale::GetPosition(double% theX, double% theY)
{
    pin_ptr<double> pp_theX = &theX;
    pin_ptr<double> pp_theY = &theY;
    ((::AIS_ColorScale*)_NativeInstance)->GetPosition(*(double*)pp_theX, *(double*)pp_theY);
}

void Macad::Occt::AIS_ColorScale::SetPosition(int theX, int theY)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetPosition(theX, theY);
}

int Macad::Occt::AIS_ColorScale::GetXPosition()
{
    int _result = ((::AIS_ColorScale*)_NativeInstance)->GetXPosition();
    return _result;
}

void Macad::Occt::AIS_ColorScale::SetXPosition(int theX)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetXPosition(theX);
}

int Macad::Occt::AIS_ColorScale::GetYPosition()
{
    int _result = ((::AIS_ColorScale*)_NativeInstance)->GetYPosition();
    return _result;
}

void Macad::Occt::AIS_ColorScale::SetYPosition(int theY)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetYPosition(theY);
}

int Macad::Occt::AIS_ColorScale::GetTextHeight()
{
    int _result = ((::AIS_ColorScale*)_NativeInstance)->GetTextHeight();
    return _result;
}

void Macad::Occt::AIS_ColorScale::SetTextHeight(int theHeight)
{
    ((::AIS_ColorScale*)_NativeInstance)->SetTextHeight(theHeight);
}

int Macad::Occt::AIS_ColorScale::TextWidth(Macad::Occt::TCollection_ExtendedString^ theText)
{
    int _result = ((::AIS_ColorScale*)_NativeInstance)->TextWidth(*(::TCollection_ExtendedString*)theText->NativeInstance);
    return _result;
}

int Macad::Occt::AIS_ColorScale::TextHeight(Macad::Occt::TCollection_ExtendedString^ theText)
{
    int _result = ((::AIS_ColorScale*)_NativeInstance)->TextHeight(*(::TCollection_ExtendedString*)theText->NativeInstance);
    return _result;
}

void Macad::Occt::AIS_ColorScale::TextSize(Macad::Occt::TCollection_ExtendedString^ theText, int theHeight, int% theWidth, int% theAscent, int% theDescent)
{
    pin_ptr<int> pp_theWidth = &theWidth;
    pin_ptr<int> pp_theAscent = &theAscent;
    pin_ptr<int> pp_theDescent = &theDescent;
    ((::AIS_ColorScale*)_NativeInstance)->TextSize(*(::TCollection_ExtendedString*)theText->NativeInstance, theHeight, *(int*)pp_theWidth, *(int*)pp_theAscent, *(int*)pp_theDescent);
}

bool Macad::Occt::AIS_ColorScale::AcceptDisplayMode(int theMode)
{
    bool _result = ((::AIS_ColorScale*)_NativeInstance)->AcceptDisplayMode(theMode);
    return _result;
}

void Macad::Occt::AIS_ColorScale::Compute(Macad::Occt::PrsMgr_PresentationManager^ thePrsMgr, Macad::Occt::Graphic3d_Structure^ thePresentation, int theMode)
{
    ((::AIS_ColorScale*)_NativeInstance)->Compute(Handle(::PrsMgr_PresentationManager)(thePrsMgr->NativeInstance), Handle(::Graphic3d_Structure)(thePresentation->NativeInstance), theMode);
}

void Macad::Occt::AIS_ColorScale::ComputeSelection(Macad::Occt::SelectMgr_Selection^ parameter1, int parameter2)
{
    ((::AIS_ColorScale*)_NativeInstance)->ComputeSelection(Handle(::SelectMgr_Selection)(parameter1->NativeInstance), parameter2);
}

Macad::Occt::AIS_ColorScale^ Macad::Occt::AIS_ColorScale::CreateDowncasted(::AIS_ColorScale* instance)
{
    return gcnew Macad::Occt::AIS_ColorScale( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_ConnectedInteractive
//---------------------------------------------------------------------

Macad::Occt::AIS_ConnectedInteractive::AIS_ConnectedInteractive(Macad::Occt::PrsMgr_TypeOfPresentation3d aTypeOfPresentation3d)
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ConnectedInteractive((::PrsMgr_TypeOfPresentation3d)aTypeOfPresentation3d);
}

Macad::Occt::AIS_ConnectedInteractive::AIS_ConnectedInteractive()
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ConnectedInteractive(PrsMgr_TOP_AllView);
}

Macad::Occt::AIS_KindOfInteractive Macad::Occt::AIS_ConnectedInteractive::Type()
{
    ::AIS_KindOfInteractive _result = ((::AIS_ConnectedInteractive*)_NativeInstance)->Type();
    return (Macad::Occt::AIS_KindOfInteractive)_result;
}

int Macad::Occt::AIS_ConnectedInteractive::Signature()
{
    int _result = ((::AIS_ConnectedInteractive*)_NativeInstance)->Signature();
    return _result;
}

void Macad::Occt::AIS_ConnectedInteractive::Connect(Macad::Occt::AIS_InteractiveObject^ theAnotherObj)
{
    ((::AIS_ConnectedInteractive*)_NativeInstance)->Connect(Handle(::AIS_InteractiveObject)(theAnotherObj->NativeInstance));
}

void Macad::Occt::AIS_ConnectedInteractive::Connect(Macad::Occt::AIS_InteractiveObject^ theAnotherObj, Macad::Occt::Trsf theLocation)
{
    pin_ptr<Macad::Occt::Trsf> pp_theLocation = &theLocation;
    ((::AIS_ConnectedInteractive*)_NativeInstance)->Connect(Handle(::AIS_InteractiveObject)(theAnotherObj->NativeInstance), *(gp_Trsf*)pp_theLocation);
}

void Macad::Occt::AIS_ConnectedInteractive::Connect(Macad::Occt::AIS_InteractiveObject^ theAnotherObj, Macad::Occt::TopLoc_Datum3D^ theLocation)
{
    ((::AIS_ConnectedInteractive*)_NativeInstance)->Connect(Handle(::AIS_InteractiveObject)(theAnotherObj->NativeInstance), Handle(::TopLoc_Datum3D)(theLocation->NativeInstance));
}

bool Macad::Occt::AIS_ConnectedInteractive::HasConnection()
{
    bool _result = ((::AIS_ConnectedInteractive*)_NativeInstance)->HasConnection();
    return _result;
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_ConnectedInteractive::ConnectedTo()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ConnectedInteractive*)_NativeInstance)->ConnectedTo();
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_ConnectedInteractive::Disconnect()
{
    ((::AIS_ConnectedInteractive*)_NativeInstance)->Disconnect();
}

bool Macad::Occt::AIS_ConnectedInteractive::AcceptShapeDecomposition()
{
    bool _result = ((::AIS_ConnectedInteractive*)_NativeInstance)->AcceptShapeDecomposition();
    return _result;
}

bool Macad::Occt::AIS_ConnectedInteractive::AcceptDisplayMode(int theMode)
{
    bool _result = ((::AIS_ConnectedInteractive*)_NativeInstance)->AcceptDisplayMode(theMode);
    return _result;
}

Macad::Occt::AIS_ConnectedInteractive^ Macad::Occt::AIS_ConnectedInteractive::CreateDowncasted(::AIS_ConnectedInteractive* instance)
{
    return gcnew Macad::Occt::AIS_ConnectedInteractive( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_ExclusionFilter
//---------------------------------------------------------------------

Macad::Occt::AIS_ExclusionFilter::AIS_ExclusionFilter(bool ExclusionFlagOn)
    : Macad::Occt::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ExclusionFilter(ExclusionFlagOn);
}

Macad::Occt::AIS_ExclusionFilter::AIS_ExclusionFilter()
    : Macad::Occt::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ExclusionFilter(true);
}

Macad::Occt::AIS_ExclusionFilter::AIS_ExclusionFilter(Macad::Occt::AIS_KindOfInteractive TypeToExclude, bool ExclusionFlagOn)
    : Macad::Occt::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ExclusionFilter((::AIS_KindOfInteractive)TypeToExclude, ExclusionFlagOn);
}

Macad::Occt::AIS_ExclusionFilter::AIS_ExclusionFilter(Macad::Occt::AIS_KindOfInteractive TypeToExclude)
    : Macad::Occt::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ExclusionFilter((::AIS_KindOfInteractive)TypeToExclude, true);
}

Macad::Occt::AIS_ExclusionFilter::AIS_ExclusionFilter(Macad::Occt::AIS_KindOfInteractive TypeToExclude, int SignatureInType, bool ExclusionFlagOn)
    : Macad::Occt::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ExclusionFilter((::AIS_KindOfInteractive)TypeToExclude, SignatureInType, ExclusionFlagOn);
}

Macad::Occt::AIS_ExclusionFilter::AIS_ExclusionFilter(Macad::Occt::AIS_KindOfInteractive TypeToExclude, int SignatureInType)
    : Macad::Occt::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ExclusionFilter((::AIS_KindOfInteractive)TypeToExclude, SignatureInType, true);
}

bool Macad::Occt::AIS_ExclusionFilter::IsOk(Macad::Occt::SelectMgr_EntityOwner^ anObj)
{
    bool _result = ((::AIS_ExclusionFilter*)_NativeInstance)->IsOk(Handle(::SelectMgr_EntityOwner)(anObj->NativeInstance));
    return _result;
}

bool Macad::Occt::AIS_ExclusionFilter::Add(Macad::Occt::AIS_KindOfInteractive TypeToExclude)
{
    bool _result = ((::AIS_ExclusionFilter*)_NativeInstance)->Add((::AIS_KindOfInteractive)TypeToExclude);
    return _result;
}

bool Macad::Occt::AIS_ExclusionFilter::Add(Macad::Occt::AIS_KindOfInteractive TypeToExclude, int SignatureInType)
{
    bool _result = ((::AIS_ExclusionFilter*)_NativeInstance)->Add((::AIS_KindOfInteractive)TypeToExclude, SignatureInType);
    return _result;
}

bool Macad::Occt::AIS_ExclusionFilter::Remove(Macad::Occt::AIS_KindOfInteractive TypeToExclude)
{
    bool _result = ((::AIS_ExclusionFilter*)_NativeInstance)->Remove((::AIS_KindOfInteractive)TypeToExclude);
    return _result;
}

bool Macad::Occt::AIS_ExclusionFilter::Remove(Macad::Occt::AIS_KindOfInteractive TypeToExclude, int SignatureInType)
{
    bool _result = ((::AIS_ExclusionFilter*)_NativeInstance)->Remove((::AIS_KindOfInteractive)TypeToExclude, SignatureInType);
    return _result;
}

void Macad::Occt::AIS_ExclusionFilter::Clear()
{
    ((::AIS_ExclusionFilter*)_NativeInstance)->Clear();
}

bool Macad::Occt::AIS_ExclusionFilter::IsExclusionFlagOn()
{
    bool _result = ((::AIS_ExclusionFilter*)_NativeInstance)->IsExclusionFlagOn();
    return _result;
}

void Macad::Occt::AIS_ExclusionFilter::SetExclusionFlag(bool theStatus)
{
    ((::AIS_ExclusionFilter*)_NativeInstance)->SetExclusionFlag(theStatus);
}

bool Macad::Occt::AIS_ExclusionFilter::IsStored(Macad::Occt::AIS_KindOfInteractive aType)
{
    bool _result = ((::AIS_ExclusionFilter*)_NativeInstance)->IsStored((::AIS_KindOfInteractive)aType);
    return _result;
}

void Macad::Occt::AIS_ExclusionFilter::ListOfStoredTypes(Macad::Occt::TColStd_ListOfInteger^ TheList)
{
    ((::AIS_ExclusionFilter*)_NativeInstance)->ListOfStoredTypes(*(::TColStd_ListOfInteger*)TheList->NativeInstance);
}

void Macad::Occt::AIS_ExclusionFilter::ListOfSignature(Macad::Occt::AIS_KindOfInteractive aType, Macad::Occt::TColStd_ListOfInteger^ TheStoredList)
{
    ((::AIS_ExclusionFilter*)_NativeInstance)->ListOfSignature((::AIS_KindOfInteractive)aType, *(::TColStd_ListOfInteger*)TheStoredList->NativeInstance);
}

Macad::Occt::AIS_ExclusionFilter^ Macad::Occt::AIS_ExclusionFilter::CreateDowncasted(::AIS_ExclusionFilter* instance)
{
    return gcnew Macad::Occt::AIS_ExclusionFilter( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_GraphicTool
//---------------------------------------------------------------------

Macad::Occt::AIS_GraphicTool::AIS_GraphicTool()
    : Macad::Occt::BaseClass<::AIS_GraphicTool>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_GraphicTool();
}

Macad::Occt::Quantity_NameOfColor Macad::Occt::AIS_GraphicTool::GetLineColor(Macad::Occt::Prs3d_Drawer^ aDrawer, Macad::Occt::AIS_TypeOfAttribute TheTypeOfAttributes)
{
    ::Quantity_NameOfColor _result = ::AIS_GraphicTool::GetLineColor(Handle(::Prs3d_Drawer)(aDrawer->NativeInstance), (::AIS_TypeOfAttribute)TheTypeOfAttributes);
    return (Macad::Occt::Quantity_NameOfColor)_result;
}

void Macad::Occt::AIS_GraphicTool::GetLineColor(Macad::Occt::Prs3d_Drawer^ aDrawer, Macad::Occt::AIS_TypeOfAttribute TheTypeOfAttributes, Macad::Occt::Quantity_Color^ TheLineColor)
{
    ::AIS_GraphicTool::GetLineColor(Handle(::Prs3d_Drawer)(aDrawer->NativeInstance), (::AIS_TypeOfAttribute)TheTypeOfAttributes, *(::Quantity_Color*)TheLineColor->NativeInstance);
}

double Macad::Occt::AIS_GraphicTool::GetLineWidth(Macad::Occt::Prs3d_Drawer^ aDrawer, Macad::Occt::AIS_TypeOfAttribute TheTypeOfAttributes)
{
    double _result = ::AIS_GraphicTool::GetLineWidth(Handle(::Prs3d_Drawer)(aDrawer->NativeInstance), (::AIS_TypeOfAttribute)TheTypeOfAttributes);
    return _result;
}

Macad::Occt::Aspect_TypeOfLine Macad::Occt::AIS_GraphicTool::GetLineType(Macad::Occt::Prs3d_Drawer^ aDrawer, Macad::Occt::AIS_TypeOfAttribute TheTypeOfAttributes)
{
    ::Aspect_TypeOfLine _result = ::AIS_GraphicTool::GetLineType(Handle(::Prs3d_Drawer)(aDrawer->NativeInstance), (::AIS_TypeOfAttribute)TheTypeOfAttributes);
    return (Macad::Occt::Aspect_TypeOfLine)_result;
}

void Macad::Occt::AIS_GraphicTool::GetLineAtt(Macad::Occt::Prs3d_Drawer^ aDrawer, Macad::Occt::AIS_TypeOfAttribute TheTypeOfAttributes, Macad::Occt::Quantity_NameOfColor% aCol, double% aWidth, Macad::Occt::Aspect_TypeOfLine% aTyp)
{
    pin_ptr<Macad::Occt::Quantity_NameOfColor> pp_aCol = &aCol;
    pin_ptr<double> pp_aWidth = &aWidth;
    pin_ptr<Macad::Occt::Aspect_TypeOfLine> pp_aTyp = &aTyp;
    ::AIS_GraphicTool::GetLineAtt(Handle(::Prs3d_Drawer)(aDrawer->NativeInstance), (::AIS_TypeOfAttribute)TheTypeOfAttributes, *(::Quantity_NameOfColor*)pp_aCol, *(double*)pp_aWidth, *(::Aspect_TypeOfLine*)pp_aTyp);
}

Macad::Occt::Quantity_NameOfColor Macad::Occt::AIS_GraphicTool::GetInteriorColor(Macad::Occt::Prs3d_Drawer^ aDrawer)
{
    ::Quantity_NameOfColor _result = ::AIS_GraphicTool::GetInteriorColor(Handle(::Prs3d_Drawer)(aDrawer->NativeInstance));
    return (Macad::Occt::Quantity_NameOfColor)_result;
}

void Macad::Occt::AIS_GraphicTool::GetInteriorColor(Macad::Occt::Prs3d_Drawer^ aDrawer, Macad::Occt::Quantity_Color^ aColor)
{
    ::AIS_GraphicTool::GetInteriorColor(Handle(::Prs3d_Drawer)(aDrawer->NativeInstance), *(::Quantity_Color*)aColor->NativeInstance);
}

Macad::Occt::Graphic3d_MaterialAspect^ Macad::Occt::AIS_GraphicTool::GetMaterial(Macad::Occt::Prs3d_Drawer^ aDrawer)
{
    ::Graphic3d_MaterialAspect* _result = new ::Graphic3d_MaterialAspect();
    *_result = ::AIS_GraphicTool::GetMaterial(Handle(::Prs3d_Drawer)(aDrawer->NativeInstance));
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_MaterialAspect(_result);
}



//---------------------------------------------------------------------
//  Class  AIS_LightSource
//---------------------------------------------------------------------

Macad::Occt::AIS_LightSource::AIS_LightSource(Macad::Occt::Graphic3d_CLight^ theLightSource)
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_LightSource(Handle(::Graphic3d_CLight)(theLightSource->NativeInstance));
}

Macad::Occt::Graphic3d_CLight^ Macad::Occt::AIS_LightSource::Light()
{
    Handle(::Graphic3d_CLight) _result = ((::AIS_LightSource*)_NativeInstance)->Light();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_CLight::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_LightSource::SetLight(Macad::Occt::Graphic3d_CLight^ theLight)
{
    ((::AIS_LightSource*)_NativeInstance)->SetLight(Handle(::Graphic3d_CLight)(theLight->NativeInstance));
}

bool Macad::Occt::AIS_LightSource::ToDisplayName()
{
    bool _result = ((::AIS_LightSource*)_NativeInstance)->ToDisplayName();
    return _result;
}

void Macad::Occt::AIS_LightSource::SetDisplayName(bool theToDisplay)
{
    ((::AIS_LightSource*)_NativeInstance)->SetDisplayName(theToDisplay);
}

bool Macad::Occt::AIS_LightSource::ToDisplayRange()
{
    bool _result = ((::AIS_LightSource*)_NativeInstance)->ToDisplayRange();
    return _result;
}

void Macad::Occt::AIS_LightSource::SetDisplayRange(bool theToDisplay)
{
    ((::AIS_LightSource*)_NativeInstance)->SetDisplayRange(theToDisplay);
}

double Macad::Occt::AIS_LightSource::Size()
{
    double _result = ((::AIS_LightSource*)_NativeInstance)->Size();
    return _result;
}

void Macad::Occt::AIS_LightSource::SetSize(double theSize)
{
    ((::AIS_LightSource*)_NativeInstance)->SetSize(theSize);
}

int Macad::Occt::AIS_LightSource::ArcSize()
{
    int _result = ((::AIS_LightSource*)_NativeInstance)->ArcSize();
    return _result;
}

void Macad::Occt::AIS_LightSource::SetArcSize(int theSize)
{
    ((::AIS_LightSource*)_NativeInstance)->SetArcSize(theSize);
}

bool Macad::Occt::AIS_LightSource::IsZoomable()
{
    bool _result = ((::AIS_LightSource*)_NativeInstance)->IsZoomable();
    return _result;
}

void Macad::Occt::AIS_LightSource::SetZoomable(bool theIsZoomable)
{
    ((::AIS_LightSource*)_NativeInstance)->SetZoomable(theIsZoomable);
}

void Macad::Occt::AIS_LightSource::SetDraggable(bool theIsDraggable)
{
    ((::AIS_LightSource*)_NativeInstance)->SetDraggable(theIsDraggable);
}

bool Macad::Occt::AIS_LightSource::ToSwitchOnClick()
{
    bool _result = ((::AIS_LightSource*)_NativeInstance)->ToSwitchOnClick();
    return _result;
}

void Macad::Occt::AIS_LightSource::SetSwitchOnClick(bool theToHandle)
{
    ((::AIS_LightSource*)_NativeInstance)->SetSwitchOnClick(theToHandle);
}

int Macad::Occt::AIS_LightSource::NbArrows()
{
    int _result = ((::AIS_LightSource*)_NativeInstance)->NbArrows();
    return _result;
}

void Macad::Occt::AIS_LightSource::SetNbArrows(int theNbArrows)
{
    ((::AIS_LightSource*)_NativeInstance)->SetNbArrows(theNbArrows);
}

Macad::Occt::Graphic3d_MarkerImage^ Macad::Occt::AIS_LightSource::MarkerImage(bool theIsEnabled)
{
    Handle(::Graphic3d_MarkerImage) _result = ((::AIS_LightSource*)_NativeInstance)->MarkerImage(theIsEnabled);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_MarkerImage::CreateDowncasted(_result.get());
}

Macad::Occt::Aspect_TypeOfMarker Macad::Occt::AIS_LightSource::MarkerType(bool theIsEnabled)
{
    ::Aspect_TypeOfMarker _result = ((::AIS_LightSource*)_NativeInstance)->MarkerType(theIsEnabled);
    return (Macad::Occt::Aspect_TypeOfMarker)_result;
}

void Macad::Occt::AIS_LightSource::SetMarkerImage(Macad::Occt::Graphic3d_MarkerImage^ theImage, bool theIsEnabled)
{
    ((::AIS_LightSource*)_NativeInstance)->SetMarkerImage(Handle(::Graphic3d_MarkerImage)(theImage->NativeInstance), theIsEnabled);
}

void Macad::Occt::AIS_LightSource::SetMarkerType(Macad::Occt::Aspect_TypeOfMarker theType, bool theIsEnabled)
{
    ((::AIS_LightSource*)_NativeInstance)->SetMarkerType((::Aspect_TypeOfMarker)theType, theIsEnabled);
}

int Macad::Occt::AIS_LightSource::NbSplitsQuadric()
{
    int _result = ((::AIS_LightSource*)_NativeInstance)->NbSplitsQuadric();
    return _result;
}

void Macad::Occt::AIS_LightSource::SetNbSplitsQuadric(int theNbSplits)
{
    ((::AIS_LightSource*)_NativeInstance)->SetNbSplitsQuadric(theNbSplits);
}

int Macad::Occt::AIS_LightSource::NbSplitsArrow()
{
    int _result = ((::AIS_LightSource*)_NativeInstance)->NbSplitsArrow();
    return _result;
}

void Macad::Occt::AIS_LightSource::SetNbSplitsArrow(int theNbSplits)
{
    ((::AIS_LightSource*)_NativeInstance)->SetNbSplitsArrow(theNbSplits);
}

Macad::Occt::AIS_KindOfInteractive Macad::Occt::AIS_LightSource::Type()
{
    ::AIS_KindOfInteractive _result = ((::AIS_LightSource*)_NativeInstance)->Type();
    return (Macad::Occt::AIS_KindOfInteractive)_result;
}

Macad::Occt::AIS_LightSource^ Macad::Occt::AIS_LightSource::CreateDowncasted(::AIS_LightSource* instance)
{
    return gcnew Macad::Occt::AIS_LightSource( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_LightSourceOwner
//---------------------------------------------------------------------

Macad::Occt::AIS_LightSourceOwner::AIS_LightSourceOwner(Macad::Occt::AIS_LightSource^ theObject, int thePriority)
    : Macad::Occt::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_LightSourceOwner(Handle(::AIS_LightSource)(theObject->NativeInstance), thePriority);
}

Macad::Occt::AIS_LightSourceOwner::AIS_LightSourceOwner(Macad::Occt::AIS_LightSource^ theObject)
    : Macad::Occt::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_LightSourceOwner(Handle(::AIS_LightSource)(theObject->NativeInstance), 5);
}

bool Macad::Occt::AIS_LightSourceOwner::HandleMouseClick(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButton, unsigned int theModifiers, bool theIsDoubleClick)
{
    bool _result = ((::AIS_LightSourceOwner*)_NativeInstance)->HandleMouseClick(*(::Graphic3d_Vec2i*)thePoint->NativeInstance, theButton, theModifiers, theIsDoubleClick);
    return _result;
}

void Macad::Occt::AIS_LightSourceOwner::HilightWithColor(Macad::Occt::PrsMgr_PresentationManager^ thePrsMgr, Macad::Occt::Prs3d_Drawer^ theStyle, int theMode)
{
    ((::AIS_LightSourceOwner*)_NativeInstance)->HilightWithColor(Handle(::PrsMgr_PresentationManager)(thePrsMgr->NativeInstance), Handle(::Prs3d_Drawer)(theStyle->NativeInstance), theMode);
}

bool Macad::Occt::AIS_LightSourceOwner::IsForcedHilight()
{
    bool _result = ((::AIS_LightSourceOwner*)_NativeInstance)->IsForcedHilight();
    return _result;
}

Macad::Occt::AIS_LightSourceOwner^ Macad::Occt::AIS_LightSourceOwner::CreateDowncasted(::AIS_LightSourceOwner* instance)
{
    return gcnew Macad::Occt::AIS_LightSourceOwner( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_Line
//---------------------------------------------------------------------

Macad::Occt::AIS_Line::AIS_Line(Macad::Occt::Geom_Line^ aLine)
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Line(Handle(::Geom_Line)(aLine->NativeInstance));
}

Macad::Occt::AIS_Line::AIS_Line(Macad::Occt::Geom_Point^ aStartPoint, Macad::Occt::Geom_Point^ aEndPoint)
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Line(Handle(::Geom_Point)(aStartPoint->NativeInstance), Handle(::Geom_Point)(aEndPoint->NativeInstance));
}

int Macad::Occt::AIS_Line::Signature()
{
    int _result = ((::AIS_Line*)_NativeInstance)->Signature();
    return _result;
}

Macad::Occt::AIS_KindOfInteractive Macad::Occt::AIS_Line::Type()
{
    ::AIS_KindOfInteractive _result = ((::AIS_Line*)_NativeInstance)->Type();
    return (Macad::Occt::AIS_KindOfInteractive)_result;
}

Macad::Occt::Geom_Line^ Macad::Occt::AIS_Line::Line()
{
    Handle(::Geom_Line) _result = ((::AIS_Line*)_NativeInstance)->Line();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Line::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_Line::Points(Macad::Occt::Geom_Point^ thePStart, Macad::Occt::Geom_Point^ thePEnd)
{
    Handle(::Geom_Point) h_thePStart = thePStart->NativeInstance;
    Handle(::Geom_Point) h_thePEnd = thePEnd->NativeInstance;
    ((::AIS_Line*)_NativeInstance)->Points(h_thePStart, h_thePEnd);
    thePStart->NativeInstance = h_thePStart.get();
    thePEnd->NativeInstance = h_thePEnd.get();
}

void Macad::Occt::AIS_Line::SetLine(Macad::Occt::Geom_Line^ theLine)
{
    ((::AIS_Line*)_NativeInstance)->SetLine(Handle(::Geom_Line)(theLine->NativeInstance));
}

void Macad::Occt::AIS_Line::SetPoints(Macad::Occt::Geom_Point^ thePStart, Macad::Occt::Geom_Point^ thePEnd)
{
    ((::AIS_Line*)_NativeInstance)->SetPoints(Handle(::Geom_Point)(thePStart->NativeInstance), Handle(::Geom_Point)(thePEnd->NativeInstance));
}

void Macad::Occt::AIS_Line::SetColor(Macad::Occt::Quantity_Color^ aColor)
{
    ((::AIS_Line*)_NativeInstance)->SetColor(*(::Quantity_Color*)aColor->NativeInstance);
}

void Macad::Occt::AIS_Line::SetWidth(double aValue)
{
    ((::AIS_Line*)_NativeInstance)->SetWidth(aValue);
}

void Macad::Occt::AIS_Line::UnsetColor()
{
    ((::AIS_Line*)_NativeInstance)->UnsetColor();
}

void Macad::Occt::AIS_Line::UnsetWidth()
{
    ((::AIS_Line*)_NativeInstance)->UnsetWidth();
}

Macad::Occt::AIS_Line^ Macad::Occt::AIS_Line::CreateDowncasted(::AIS_Line* instance)
{
    return gcnew Macad::Occt::AIS_Line( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_ManipulatorObjectSequence
//---------------------------------------------------------------------

Macad::Occt::AIS_ManipulatorObjectSequence::AIS_ManipulatorObjectSequence()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ManipulatorObjectSequence();
}

void Macad::Occt::AIS_ManipulatorObjectSequence::Append(Macad::Occt::AIS_InteractiveObject^ theItem)
{
    ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Append(Handle(::AIS_InteractiveObject)(theItem->NativeInstance));
}

int Macad::Occt::AIS_ManipulatorObjectSequence::Size()
{
    int _result = ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::AIS_ManipulatorObjectSequence::Length()
{
    int _result = ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::AIS_ManipulatorObjectSequence::Lower()
{
    int _result = ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::AIS_ManipulatorObjectSequence::Upper()
{
    int _result = ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::AIS_ManipulatorObjectSequence::IsEmpty()
{
    bool _result = ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->IsEmpty();
    return _result;
}

void Macad::Occt::AIS_ManipulatorObjectSequence::Reverse()
{
    ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Reverse();
}

void Macad::Occt::AIS_ManipulatorObjectSequence::Exchange(int I, int J)
{
    ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::AIS_ManipulatorObjectSequence::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::AIS_ManipulatorObjectSequence::Clear()
{
    ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Clear(0L);
}

Macad::Occt::AIS_ManipulatorObjectSequence^ Macad::Occt::AIS_ManipulatorObjectSequence::Assign(Macad::Occt::AIS_ManipulatorObjectSequence^ theOther)
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::AIS_ManipulatorObjectSequence::Remove(Macad::Occt::AIS_ManipulatorObjectSequence::Iterator^ thePosition)
{
    ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Remove(*(::AIS_ManipulatorObjectSequence::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::AIS_ManipulatorObjectSequence::Prepend(Macad::Occt::AIS_InteractiveObject^ theItem)
{
    ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Prepend(Handle(::AIS_InteractiveObject)(theItem->NativeInstance));
}

void Macad::Occt::AIS_ManipulatorObjectSequence::InsertBefore(int theIndex, Macad::Occt::AIS_InteractiveObject^ theItem)
{
    ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->InsertBefore(theIndex, Handle(::AIS_InteractiveObject)(theItem->NativeInstance));
}

void Macad::Occt::AIS_ManipulatorObjectSequence::InsertAfter(Macad::Occt::AIS_ManipulatorObjectSequence::Iterator^ thePosition, Macad::Occt::AIS_InteractiveObject^ theItem)
{
    ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->InsertAfter(*(::AIS_ManipulatorObjectSequence::Iterator*)thePosition->NativeInstance, Handle(::AIS_InteractiveObject)(theItem->NativeInstance));
}

void Macad::Occt::AIS_ManipulatorObjectSequence::Split(int theIndex, Macad::Occt::AIS_ManipulatorObjectSequence^ theSeq)
{
    ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Split(theIndex, *(::AIS_ManipulatorObjectSequence*)theSeq->NativeInstance);
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_ManipulatorObjectSequence::First()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_ManipulatorObjectSequence::ChangeFirst()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->ChangeFirst();
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_ManipulatorObjectSequence::Last()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_ManipulatorObjectSequence::ChangeLast()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->ChangeLast();
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_ManipulatorObjectSequence::Value(int theIndex)
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Value(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_ManipulatorObjectSequence::ChangeValue(int theIndex)
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->ChangeValue(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_ManipulatorObjectSequence::SetValue(int theIndex, Macad::Occt::AIS_InteractiveObject^ theItem)
{
    ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->SetValue(theIndex, Handle(::AIS_InteractiveObject)(theItem->NativeInstance));
}

Macad::Occt::AIS_ManipulatorObjectSequence^ Macad::Occt::AIS_ManipulatorObjectSequence::CreateDowncasted(::AIS_ManipulatorObjectSequence* instance)
{
    return gcnew Macad::Occt::AIS_ManipulatorObjectSequence( instance );
}

System::Collections::Generic::IEnumerator<Macad::Occt::AIS_InteractiveObject^>^ Macad::Occt::AIS_ManipulatorObjectSequence::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::AIS_InteractiveObject^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::AIS_ManipulatorObjectSequence::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::AIS_InteractiveObject^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  AIS_ManipulatorObjectSequence::Iterator
//---------------------------------------------------------------------

Macad::Occt::AIS_ManipulatorObjectSequence::Iterator::Iterator()
    : Macad::Occt::BaseClass<::AIS_ManipulatorObjectSequence::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_ManipulatorObjectSequence::Iterator();
}

bool Macad::Occt::AIS_ManipulatorObjectSequence::Iterator::More()
{
    bool _result = ((::AIS_ManipulatorObjectSequence::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::AIS_ManipulatorObjectSequence::Iterator::Next()
{
    ((::AIS_ManipulatorObjectSequence::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_ManipulatorObjectSequence::Iterator::Value()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ManipulatorObjectSequence::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_ManipulatorObjectSequence::Iterator::ChangeValue()
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_ManipulatorObjectSequence::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

bool Macad::Occt::AIS_ManipulatorObjectSequence::Iterator::IsEqual(Macad::Occt::AIS_ManipulatorObjectSequence::Iterator^ theOther)
{
    bool _result = ((::AIS_ManipulatorObjectSequence::Iterator*)_NativeInstance)->IsEqual(*(::AIS_ManipulatorObjectSequence::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::AIS_ManipulatorObjectSequence::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::AIS_ManipulatorObjectSequence::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  AIS_ManipulatorOwner
//---------------------------------------------------------------------

Macad::Occt::AIS_ManipulatorOwner::AIS_ManipulatorOwner(Macad::Occt::SelectMgr_SelectableObject^ theSelObject, int theIndex, Macad::Occt::AIS_ManipulatorMode theMode, int thePriority)
    : Macad::Occt::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ManipulatorOwner(Handle(::SelectMgr_SelectableObject)(theSelObject->NativeInstance), theIndex, (::AIS_ManipulatorMode)theMode, thePriority);
}

Macad::Occt::AIS_ManipulatorOwner::AIS_ManipulatorOwner(Macad::Occt::SelectMgr_SelectableObject^ theSelObject, int theIndex, Macad::Occt::AIS_ManipulatorMode theMode)
    : Macad::Occt::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ManipulatorOwner(Handle(::SelectMgr_SelectableObject)(theSelObject->NativeInstance), theIndex, (::AIS_ManipulatorMode)theMode, 0);
}

void Macad::Occt::AIS_ManipulatorOwner::HilightWithColor(Macad::Occt::PrsMgr_PresentationManager^ thePM, Macad::Occt::Prs3d_Drawer^ theStyle, int theMode)
{
    ((::AIS_ManipulatorOwner*)_NativeInstance)->HilightWithColor(Handle(::PrsMgr_PresentationManager)(thePM->NativeInstance), Handle(::Prs3d_Drawer)(theStyle->NativeInstance), theMode);
}

bool Macad::Occt::AIS_ManipulatorOwner::IsHilighted(Macad::Occt::PrsMgr_PresentationManager^ thePM, int theMode)
{
    bool _result = ((::AIS_ManipulatorOwner*)_NativeInstance)->IsHilighted(Handle(::PrsMgr_PresentationManager)(thePM->NativeInstance), theMode);
    return _result;
}

void Macad::Occt::AIS_ManipulatorOwner::Unhilight(Macad::Occt::PrsMgr_PresentationManager^ thePM, int theMode)
{
    ((::AIS_ManipulatorOwner*)_NativeInstance)->Unhilight(Handle(::PrsMgr_PresentationManager)(thePM->NativeInstance), theMode);
}

Macad::Occt::AIS_ManipulatorMode Macad::Occt::AIS_ManipulatorOwner::Mode()
{
    ::AIS_ManipulatorMode _result = ((::AIS_ManipulatorOwner*)_NativeInstance)->Mode();
    return (Macad::Occt::AIS_ManipulatorMode)_result;
}

int Macad::Occt::AIS_ManipulatorOwner::Index()
{
    int _result = ((::AIS_ManipulatorOwner*)_NativeInstance)->Index();
    return _result;
}

Macad::Occt::AIS_ManipulatorOwner^ Macad::Occt::AIS_ManipulatorOwner::CreateDowncasted(::AIS_ManipulatorOwner* instance)
{
    return gcnew Macad::Occt::AIS_ManipulatorOwner( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_MediaPlayer
//---------------------------------------------------------------------

Macad::Occt::AIS_MediaPlayer::AIS_MediaPlayer()
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_MediaPlayer();
}

void Macad::Occt::AIS_MediaPlayer::OpenInput(Macad::Occt::TCollection_AsciiString^ thePath, bool theToWait)
{
    ((::AIS_MediaPlayer*)_NativeInstance)->OpenInput(*(::TCollection_AsciiString*)thePath->NativeInstance, theToWait);
}

bool Macad::Occt::AIS_MediaPlayer::PresentFrame(Macad::Occt::Graphic3d_Vec2i^ theLeftCorner, Macad::Occt::Graphic3d_Vec2i^ theMaxSize)
{
    bool _result = ((::AIS_MediaPlayer*)_NativeInstance)->PresentFrame(*(::Graphic3d_Vec2i*)theLeftCorner->NativeInstance, *(::Graphic3d_Vec2i*)theMaxSize->NativeInstance);
    return _result;
}

void Macad::Occt::AIS_MediaPlayer::PlayPause()
{
    ((::AIS_MediaPlayer*)_NativeInstance)->PlayPause();
}

void Macad::Occt::AIS_MediaPlayer::SetClosePlayer()
{
    ((::AIS_MediaPlayer*)_NativeInstance)->SetClosePlayer();
}

double Macad::Occt::AIS_MediaPlayer::Duration()
{
    double _result = ((::AIS_MediaPlayer*)_NativeInstance)->Duration();
    return _result;
}

Macad::Occt::AIS_MediaPlayer^ Macad::Occt::AIS_MediaPlayer::CreateDowncasted(::AIS_MediaPlayer* instance)
{
    return gcnew Macad::Occt::AIS_MediaPlayer( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_MultipleConnectedInteractive
//---------------------------------------------------------------------

Macad::Occt::AIS_MultipleConnectedInteractive::AIS_MultipleConnectedInteractive()
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_MultipleConnectedInteractive();
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_MultipleConnectedInteractive::Connect(Macad::Occt::AIS_InteractiveObject^ theAnotherObj, Macad::Occt::TopLoc_Datum3D^ theLocation, Macad::Occt::Graphic3d_TransformPers^ theTrsfPers)
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->Connect(Handle(::AIS_InteractiveObject)(theAnotherObj->NativeInstance), Handle(::TopLoc_Datum3D)(theLocation->NativeInstance), Handle(::Graphic3d_TransformPers)(theTrsfPers->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

Macad::Occt::AIS_KindOfInteractive Macad::Occt::AIS_MultipleConnectedInteractive::Type()
{
    ::AIS_KindOfInteractive _result = ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->Type();
    return (Macad::Occt::AIS_KindOfInteractive)_result;
}

int Macad::Occt::AIS_MultipleConnectedInteractive::Signature()
{
    int _result = ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->Signature();
    return _result;
}

bool Macad::Occt::AIS_MultipleConnectedInteractive::HasConnection()
{
    bool _result = ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->HasConnection();
    return _result;
}

void Macad::Occt::AIS_MultipleConnectedInteractive::Disconnect(Macad::Occt::AIS_InteractiveObject^ theInteractive)
{
    ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->Disconnect(Handle(::AIS_InteractiveObject)(theInteractive->NativeInstance));
}

void Macad::Occt::AIS_MultipleConnectedInteractive::DisconnectAll()
{
    ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->DisconnectAll();
}

bool Macad::Occt::AIS_MultipleConnectedInteractive::AcceptShapeDecomposition()
{
    bool _result = ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->AcceptShapeDecomposition();
    return _result;
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_MultipleConnectedInteractive::GetAssemblyOwner()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->GetAssemblyOwner();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_MultipleConnectedInteractive::GlobalSelOwner()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->GlobalSelOwner();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_MultipleConnectedInteractive::SetContext(Macad::Occt::AIS_InteractiveContext^ theCtx)
{
    ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->SetContext(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance));
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_MultipleConnectedInteractive::Connect(Macad::Occt::AIS_InteractiveObject^ theAnotherObj)
{
    Handle(::AIS_InteractiveObject) _result = ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->Connect(Handle(::AIS_InteractiveObject)(theAnotherObj->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_MultipleConnectedInteractive::Connect(Macad::Occt::AIS_InteractiveObject^ theAnotherObj, Macad::Occt::Trsf theLocation)
{
    pin_ptr<Macad::Occt::Trsf> pp_theLocation = &theLocation;
    Handle(::AIS_InteractiveObject) _result = ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->Connect(Handle(::AIS_InteractiveObject)(theAnotherObj->NativeInstance), *(gp_Trsf*)pp_theLocation);
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_MultipleConnectedInteractive::Connect(Macad::Occt::AIS_InteractiveObject^ theAnotherObj, Macad::Occt::Trsf theLocation, Macad::Occt::Graphic3d_TransformPers^ theTrsfPers)
{
    pin_ptr<Macad::Occt::Trsf> pp_theLocation = &theLocation;
    Handle(::AIS_InteractiveObject) _result = ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->Connect(Handle(::AIS_InteractiveObject)(theAnotherObj->NativeInstance), *(gp_Trsf*)pp_theLocation, Handle(::Graphic3d_TransformPers)(theTrsfPers->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted(_result.get());
}

Macad::Occt::AIS_MultipleConnectedInteractive^ Macad::Occt::AIS_MultipleConnectedInteractive::CreateDowncasted(::AIS_MultipleConnectedInteractive* instance)
{
    return gcnew Macad::Occt::AIS_MultipleConnectedInteractive( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_Plane
//---------------------------------------------------------------------

Macad::Occt::AIS_Plane::AIS_Plane(Macad::Occt::Geom_Plane^ aComponent, bool aCurrentMode)
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Plane(Handle(::Geom_Plane)(aComponent->NativeInstance), aCurrentMode);
}

Macad::Occt::AIS_Plane::AIS_Plane(Macad::Occt::Geom_Plane^ aComponent)
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Plane(Handle(::Geom_Plane)(aComponent->NativeInstance), false);
}

Macad::Occt::AIS_Plane::AIS_Plane(Macad::Occt::Geom_Plane^ aComponent, Macad::Occt::Pnt aCenter, bool aCurrentMode)
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_aCenter = &aCenter;
    NativeInstance = new ::AIS_Plane(Handle(::Geom_Plane)(aComponent->NativeInstance), *(gp_Pnt*)pp_aCenter, aCurrentMode);
}

Macad::Occt::AIS_Plane::AIS_Plane(Macad::Occt::Geom_Plane^ aComponent, Macad::Occt::Pnt aCenter)
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_aCenter = &aCenter;
    NativeInstance = new ::AIS_Plane(Handle(::Geom_Plane)(aComponent->NativeInstance), *(gp_Pnt*)pp_aCenter, false);
}

Macad::Occt::AIS_Plane::AIS_Plane(Macad::Occt::Geom_Plane^ aComponent, Macad::Occt::Pnt aCenter, Macad::Occt::Pnt aPmin, Macad::Occt::Pnt aPmax, bool aCurrentMode)
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_aCenter = &aCenter;
    pin_ptr<Macad::Occt::Pnt> pp_aPmin = &aPmin;
    pin_ptr<Macad::Occt::Pnt> pp_aPmax = &aPmax;
    NativeInstance = new ::AIS_Plane(Handle(::Geom_Plane)(aComponent->NativeInstance), *(gp_Pnt*)pp_aCenter, *(gp_Pnt*)pp_aPmin, *(gp_Pnt*)pp_aPmax, aCurrentMode);
}

Macad::Occt::AIS_Plane::AIS_Plane(Macad::Occt::Geom_Plane^ aComponent, Macad::Occt::Pnt aCenter, Macad::Occt::Pnt aPmin, Macad::Occt::Pnt aPmax)
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_aCenter = &aCenter;
    pin_ptr<Macad::Occt::Pnt> pp_aPmin = &aPmin;
    pin_ptr<Macad::Occt::Pnt> pp_aPmax = &aPmax;
    NativeInstance = new ::AIS_Plane(Handle(::Geom_Plane)(aComponent->NativeInstance), *(gp_Pnt*)pp_aCenter, *(gp_Pnt*)pp_aPmin, *(gp_Pnt*)pp_aPmax, false);
}

Macad::Occt::AIS_Plane::AIS_Plane(Macad::Occt::Geom_Axis2Placement^ aComponent, Macad::Occt::AIS_TypeOfPlane aPlaneType, bool aCurrentMode)
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Plane(Handle(::Geom_Axis2Placement)(aComponent->NativeInstance), (::AIS_TypeOfPlane)aPlaneType, aCurrentMode);
}

Macad::Occt::AIS_Plane::AIS_Plane(Macad::Occt::Geom_Axis2Placement^ aComponent, Macad::Occt::AIS_TypeOfPlane aPlaneType)
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Plane(Handle(::Geom_Axis2Placement)(aComponent->NativeInstance), (::AIS_TypeOfPlane)aPlaneType, false);
}

void Macad::Occt::AIS_Plane::SetSize(double aValue)
{
    ((::AIS_Plane*)_NativeInstance)->SetSize(aValue);
}

void Macad::Occt::AIS_Plane::SetSize(double Xval, double YVal)
{
    ((::AIS_Plane*)_NativeInstance)->SetSize(Xval, YVal);
}

void Macad::Occt::AIS_Plane::UnsetSize()
{
    ((::AIS_Plane*)_NativeInstance)->UnsetSize();
}

bool Macad::Occt::AIS_Plane::Size(double% X, double% Y)
{
    pin_ptr<double> pp_X = &X;
    pin_ptr<double> pp_Y = &Y;
    bool _result = ((::AIS_Plane*)_NativeInstance)->Size(*(double*)pp_X, *(double*)pp_Y);
    return _result;
}

bool Macad::Occt::AIS_Plane::HasOwnSize()
{
    bool _result = ((::AIS_Plane*)_NativeInstance)->HasOwnSize();
    return _result;
}

void Macad::Occt::AIS_Plane::SetMinimumSize(double theValue)
{
    ((::AIS_Plane*)_NativeInstance)->SetMinimumSize(theValue);
}

void Macad::Occt::AIS_Plane::UnsetMinimumSize()
{
    ((::AIS_Plane*)_NativeInstance)->UnsetMinimumSize();
}

bool Macad::Occt::AIS_Plane::HasMinimumSize()
{
    bool _result = ((::AIS_Plane*)_NativeInstance)->HasMinimumSize();
    return _result;
}

int Macad::Occt::AIS_Plane::Signature()
{
    int _result = ((::AIS_Plane*)_NativeInstance)->Signature();
    return _result;
}

Macad::Occt::AIS_KindOfInteractive Macad::Occt::AIS_Plane::Type()
{
    ::AIS_KindOfInteractive _result = ((::AIS_Plane*)_NativeInstance)->Type();
    return (Macad::Occt::AIS_KindOfInteractive)_result;
}

Macad::Occt::Geom_Plane^ Macad::Occt::AIS_Plane::Component()
{
    Handle(::Geom_Plane) _result = ((::AIS_Plane*)_NativeInstance)->Component();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Plane::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_Plane::SetComponent(Macad::Occt::Geom_Plane^ aComponent)
{
    ((::AIS_Plane*)_NativeInstance)->SetComponent(Handle(::Geom_Plane)(aComponent->NativeInstance));
}

bool Macad::Occt::AIS_Plane::PlaneAttributes(Macad::Occt::Geom_Plane^ aComponent, Macad::Occt::Pnt% aCenter, Macad::Occt::Pnt% aPmin, Macad::Occt::Pnt% aPmax)
{
    Handle(::Geom_Plane) h_aComponent = aComponent->NativeInstance;
    pin_ptr<Macad::Occt::Pnt> pp_aCenter = &aCenter;
    pin_ptr<Macad::Occt::Pnt> pp_aPmin = &aPmin;
    pin_ptr<Macad::Occt::Pnt> pp_aPmax = &aPmax;
    bool _result = ((::AIS_Plane*)_NativeInstance)->PlaneAttributes(h_aComponent, *(gp_Pnt*)pp_aCenter, *(gp_Pnt*)pp_aPmin, *(gp_Pnt*)pp_aPmax);
    aComponent->NativeInstance = h_aComponent.get();
    return _result;
}

void Macad::Occt::AIS_Plane::SetPlaneAttributes(Macad::Occt::Geom_Plane^ aComponent, Macad::Occt::Pnt aCenter, Macad::Occt::Pnt aPmin, Macad::Occt::Pnt aPmax)
{
    pin_ptr<Macad::Occt::Pnt> pp_aCenter = &aCenter;
    pin_ptr<Macad::Occt::Pnt> pp_aPmin = &aPmin;
    pin_ptr<Macad::Occt::Pnt> pp_aPmax = &aPmax;
    ((::AIS_Plane*)_NativeInstance)->SetPlaneAttributes(Handle(::Geom_Plane)(aComponent->NativeInstance), *(gp_Pnt*)pp_aCenter, *(gp_Pnt*)pp_aPmin, *(gp_Pnt*)pp_aPmax);
}

Macad::Occt::Pnt Macad::Occt::AIS_Plane::Center()
{
    ::gp_Pnt _nativeResult = ((::AIS_Plane*)_NativeInstance)->Center();
    return Macad::Occt::Pnt(_nativeResult);
}

void Macad::Occt::AIS_Plane::SetCenter(Macad::Occt::Pnt theCenter)
{
    pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
    ((::AIS_Plane*)_NativeInstance)->SetCenter(*(gp_Pnt*)pp_theCenter);
}

void Macad::Occt::AIS_Plane::SetAxis2Placement(Macad::Occt::Geom_Axis2Placement^ aComponent, Macad::Occt::AIS_TypeOfPlane aPlaneType)
{
    ((::AIS_Plane*)_NativeInstance)->SetAxis2Placement(Handle(::Geom_Axis2Placement)(aComponent->NativeInstance), (::AIS_TypeOfPlane)aPlaneType);
}

Macad::Occt::Geom_Axis2Placement^ Macad::Occt::AIS_Plane::Axis2Placement()
{
    Handle(::Geom_Axis2Placement) _result = ((::AIS_Plane*)_NativeInstance)->Axis2Placement();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Axis2Placement::CreateDowncasted(_result.get());
}

Macad::Occt::AIS_TypeOfPlane Macad::Occt::AIS_Plane::TypeOfPlane()
{
    ::AIS_TypeOfPlane _result = ((::AIS_Plane*)_NativeInstance)->TypeOfPlane();
    return (Macad::Occt::AIS_TypeOfPlane)_result;
}

bool Macad::Occt::AIS_Plane::IsXYZPlane()
{
    bool _result = ((::AIS_Plane*)_NativeInstance)->IsXYZPlane();
    return _result;
}

bool Macad::Occt::AIS_Plane::CurrentMode()
{
    bool _result = ((::AIS_Plane*)_NativeInstance)->CurrentMode();
    return _result;
}

void Macad::Occt::AIS_Plane::SetCurrentMode(bool theCurrentMode)
{
    ((::AIS_Plane*)_NativeInstance)->SetCurrentMode(theCurrentMode);
}

bool Macad::Occt::AIS_Plane::AcceptDisplayMode(int aMode)
{
    bool _result = ((::AIS_Plane*)_NativeInstance)->AcceptDisplayMode(aMode);
    return _result;
}

void Macad::Occt::AIS_Plane::SetContext(Macad::Occt::AIS_InteractiveContext^ aCtx)
{
    ((::AIS_Plane*)_NativeInstance)->SetContext(Handle(::AIS_InteractiveContext)(aCtx->NativeInstance));
}

void Macad::Occt::AIS_Plane::ComputeSelection(Macad::Occt::SelectMgr_Selection^ theSelection, int theMode)
{
    ((::AIS_Plane*)_NativeInstance)->ComputeSelection(Handle(::SelectMgr_Selection)(theSelection->NativeInstance), theMode);
}

void Macad::Occt::AIS_Plane::SetColor(Macad::Occt::Quantity_Color^ aColor)
{
    ((::AIS_Plane*)_NativeInstance)->SetColor(*(::Quantity_Color*)aColor->NativeInstance);
}

void Macad::Occt::AIS_Plane::UnsetColor()
{
    ((::AIS_Plane*)_NativeInstance)->UnsetColor();
}

Macad::Occt::AIS_Plane^ Macad::Occt::AIS_Plane::CreateDowncasted(::AIS_Plane* instance)
{
    return gcnew Macad::Occt::AIS_Plane( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_Point
//---------------------------------------------------------------------

Macad::Occt::AIS_Point::AIS_Point(Macad::Occt::Geom_Point^ aComponent)
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Point(Handle(::Geom_Point)(aComponent->NativeInstance));
}

int Macad::Occt::AIS_Point::Signature()
{
    int _result = ((::AIS_Point*)_NativeInstance)->Signature();
    return _result;
}

Macad::Occt::AIS_KindOfInteractive Macad::Occt::AIS_Point::Type()
{
    ::AIS_KindOfInteractive _result = ((::AIS_Point*)_NativeInstance)->Type();
    return (Macad::Occt::AIS_KindOfInteractive)_result;
}

Macad::Occt::Geom_Point^ Macad::Occt::AIS_Point::Component()
{
    Handle(::Geom_Point) _result = ((::AIS_Point*)_NativeInstance)->Component();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Point::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_Point::SetComponent(Macad::Occt::Geom_Point^ aComponent)
{
    ((::AIS_Point*)_NativeInstance)->SetComponent(Handle(::Geom_Point)(aComponent->NativeInstance));
}

bool Macad::Occt::AIS_Point::AcceptDisplayMode(int aMode)
{
    bool _result = ((::AIS_Point*)_NativeInstance)->AcceptDisplayMode(aMode);
    return _result;
}

void Macad::Occt::AIS_Point::SetColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::AIS_Point*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::AIS_Point::UnsetColor()
{
    ((::AIS_Point*)_NativeInstance)->UnsetColor();
}

void Macad::Occt::AIS_Point::SetMarker(Macad::Occt::Aspect_TypeOfMarker aType)
{
    ((::AIS_Point*)_NativeInstance)->SetMarker((::Aspect_TypeOfMarker)aType);
}

void Macad::Occt::AIS_Point::UnsetMarker()
{
    ((::AIS_Point*)_NativeInstance)->UnsetMarker();
}

bool Macad::Occt::AIS_Point::HasMarker()
{
    bool _result = ((::AIS_Point*)_NativeInstance)->HasMarker();
    return _result;
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::AIS_Point::Vertex()
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ((::AIS_Point*)_NativeInstance)->Vertex();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::AIS_Point^ Macad::Occt::AIS_Point::CreateDowncasted(::AIS_Point* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    
    return gcnew Macad::Occt::AIS_Point( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_PlaneTrihedron
//---------------------------------------------------------------------

Macad::Occt::AIS_PlaneTrihedron::AIS_PlaneTrihedron(Macad::Occt::Geom_Plane^ aPlane)
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_PlaneTrihedron(Handle(::Geom_Plane)(aPlane->NativeInstance));
}

Macad::Occt::Geom_Plane^ Macad::Occt::AIS_PlaneTrihedron::Component()
{
    Handle(::Geom_Plane) _result = ((::AIS_PlaneTrihedron*)_NativeInstance)->Component();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Plane::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_PlaneTrihedron::SetComponent(Macad::Occt::Geom_Plane^ aPlane)
{
    ((::AIS_PlaneTrihedron*)_NativeInstance)->SetComponent(Handle(::Geom_Plane)(aPlane->NativeInstance));
}

Macad::Occt::AIS_Line^ Macad::Occt::AIS_PlaneTrihedron::XAxis()
{
    Handle(::AIS_Line) _result = ((::AIS_PlaneTrihedron*)_NativeInstance)->XAxis();
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_Line::CreateDowncasted(_result.get());
}

Macad::Occt::AIS_Line^ Macad::Occt::AIS_PlaneTrihedron::YAxis()
{
    Handle(::AIS_Line) _result = ((::AIS_PlaneTrihedron*)_NativeInstance)->YAxis();
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_Line::CreateDowncasted(_result.get());
}

Macad::Occt::AIS_Point^ Macad::Occt::AIS_PlaneTrihedron::Position()
{
    Handle(::AIS_Point) _result = ((::AIS_PlaneTrihedron*)_NativeInstance)->Position();
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_Point::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_PlaneTrihedron::SetLength(double theLength)
{
    ((::AIS_PlaneTrihedron*)_NativeInstance)->SetLength(theLength);
}

double Macad::Occt::AIS_PlaneTrihedron::GetLength()
{
    double _result = ((::AIS_PlaneTrihedron*)_NativeInstance)->GetLength();
    return _result;
}

bool Macad::Occt::AIS_PlaneTrihedron::AcceptDisplayMode(int aMode)
{
    bool _result = ((::AIS_PlaneTrihedron*)_NativeInstance)->AcceptDisplayMode(aMode);
    return _result;
}

int Macad::Occt::AIS_PlaneTrihedron::Signature()
{
    int _result = ((::AIS_PlaneTrihedron*)_NativeInstance)->Signature();
    return _result;
}

Macad::Occt::AIS_KindOfInteractive Macad::Occt::AIS_PlaneTrihedron::Type()
{
    ::AIS_KindOfInteractive _result = ((::AIS_PlaneTrihedron*)_NativeInstance)->Type();
    return (Macad::Occt::AIS_KindOfInteractive)_result;
}

void Macad::Occt::AIS_PlaneTrihedron::SetColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::AIS_PlaneTrihedron*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::AIS_PlaneTrihedron::SetXLabel(Macad::Occt::TCollection_AsciiString^ theLabel)
{
    ((::AIS_PlaneTrihedron*)_NativeInstance)->SetXLabel(*(::TCollection_AsciiString*)theLabel->NativeInstance);
}

void Macad::Occt::AIS_PlaneTrihedron::SetYLabel(Macad::Occt::TCollection_AsciiString^ theLabel)
{
    ((::AIS_PlaneTrihedron*)_NativeInstance)->SetYLabel(*(::TCollection_AsciiString*)theLabel->NativeInstance);
}

Macad::Occt::AIS_PlaneTrihedron^ Macad::Occt::AIS_PlaneTrihedron::CreateDowncasted(::AIS_PlaneTrihedron* instance)
{
    return gcnew Macad::Occt::AIS_PlaneTrihedron( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_PointCloud
//---------------------------------------------------------------------

Macad::Occt::AIS_PointCloud::AIS_PointCloud()
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_PointCloud();
}

void Macad::Occt::AIS_PointCloud::SetPoints(Macad::Occt::Graphic3d_ArrayOfPoints^ thePoints)
{
    ((::AIS_PointCloud*)_NativeInstance)->SetPoints(Handle(::Graphic3d_ArrayOfPoints)(thePoints->NativeInstance));
}

void Macad::Occt::AIS_PointCloud::SetPoints(Macad::Occt::TColgp_HArray1OfPnt^ theCoords, Macad::Occt::Quantity_HArray1OfColor^ theColors, Macad::Occt::TColgp_HArray1OfDir^ theNormals)
{
    ((::AIS_PointCloud*)_NativeInstance)->SetPoints(Handle(::TColgp_HArray1OfPnt)(theCoords->NativeInstance), Handle(::Quantity_HArray1OfColor)(theColors->NativeInstance), Handle(::TColgp_HArray1OfDir)(theNormals->NativeInstance));
}

void Macad::Occt::AIS_PointCloud::SetPoints(Macad::Occt::TColgp_HArray1OfPnt^ theCoords, Macad::Occt::Quantity_HArray1OfColor^ theColors)
{
    ((::AIS_PointCloud*)_NativeInstance)->SetPoints(Handle(::TColgp_HArray1OfPnt)(theCoords->NativeInstance), Handle(::Quantity_HArray1OfColor)(theColors->NativeInstance), nullptr);
}

void Macad::Occt::AIS_PointCloud::SetPoints(Macad::Occt::TColgp_HArray1OfPnt^ theCoords)
{
    ((::AIS_PointCloud*)_NativeInstance)->SetPoints(Handle(::TColgp_HArray1OfPnt)(theCoords->NativeInstance), nullptr, nullptr);
}

Macad::Occt::Graphic3d_ArrayOfPoints^ Macad::Occt::AIS_PointCloud::GetPoints()
{
    Handle(::Graphic3d_ArrayOfPoints) _result = ((::AIS_PointCloud*)_NativeInstance)->GetPoints();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfPoints::CreateDowncasted(_result.get());
}

Macad::Occt::Bnd_Box^ Macad::Occt::AIS_PointCloud::GetBoundingBox()
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = ((::AIS_PointCloud*)_NativeInstance)->GetBoundingBox();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

void Macad::Occt::AIS_PointCloud::SetColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::AIS_PointCloud*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::AIS_PointCloud::UnsetColor()
{
    ((::AIS_PointCloud*)_NativeInstance)->UnsetColor();
}

void Macad::Occt::AIS_PointCloud::SetMaterial(Macad::Occt::Graphic3d_MaterialAspect^ theMat)
{
    ((::AIS_PointCloud*)_NativeInstance)->SetMaterial(*(::Graphic3d_MaterialAspect*)theMat->NativeInstance);
}

void Macad::Occt::AIS_PointCloud::UnsetMaterial()
{
    ((::AIS_PointCloud*)_NativeInstance)->UnsetMaterial();
}

Macad::Occt::AIS_PointCloud^ Macad::Occt::AIS_PointCloud::CreateDowncasted(::AIS_PointCloud* instance)
{
    return gcnew Macad::Occt::AIS_PointCloud( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_PointCloudOwner
//---------------------------------------------------------------------

Macad::Occt::AIS_PointCloudOwner::AIS_PointCloudOwner(Macad::Occt::AIS_PointCloud^ theOrigin)
    : Macad::Occt::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_PointCloudOwner(Handle(::AIS_PointCloud)(theOrigin->NativeInstance));
}

Macad::Occt::TColStd_HPackedMapOfInteger^ Macad::Occt::AIS_PointCloudOwner::SelectedPoints()
{
    Handle(::TColStd_HPackedMapOfInteger) _result = ((::AIS_PointCloudOwner*)_NativeInstance)->SelectedPoints();
    return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HPackedMapOfInteger::CreateDowncasted(_result.get());
}

Macad::Occt::TColStd_HPackedMapOfInteger^ Macad::Occt::AIS_PointCloudOwner::DetectedPoints()
{
    Handle(::TColStd_HPackedMapOfInteger) _result = ((::AIS_PointCloudOwner*)_NativeInstance)->DetectedPoints();
    return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HPackedMapOfInteger::CreateDowncasted(_result.get());
}

bool Macad::Occt::AIS_PointCloudOwner::IsForcedHilight()
{
    bool _result = ((::AIS_PointCloudOwner*)_NativeInstance)->IsForcedHilight();
    return _result;
}

void Macad::Occt::AIS_PointCloudOwner::HilightWithColor(Macad::Occt::PrsMgr_PresentationManager^ thePrsMgr, Macad::Occt::Prs3d_Drawer^ theStyle, int theMode)
{
    ((::AIS_PointCloudOwner*)_NativeInstance)->HilightWithColor(Handle(::PrsMgr_PresentationManager)(thePrsMgr->NativeInstance), Handle(::Prs3d_Drawer)(theStyle->NativeInstance), theMode);
}

void Macad::Occt::AIS_PointCloudOwner::Unhilight(Macad::Occt::PrsMgr_PresentationManager^ thePrsMgr, int theMode)
{
    ((::AIS_PointCloudOwner*)_NativeInstance)->Unhilight(Handle(::PrsMgr_PresentationManager)(thePrsMgr->NativeInstance), theMode);
}

void Macad::Occt::AIS_PointCloudOwner::Clear(Macad::Occt::PrsMgr_PresentationManager^ thePrsMgr, int theMode)
{
    ((::AIS_PointCloudOwner*)_NativeInstance)->Clear(Handle(::PrsMgr_PresentationManager)(thePrsMgr->NativeInstance), theMode);
}

Macad::Occt::AIS_PointCloudOwner^ Macad::Occt::AIS_PointCloudOwner::CreateDowncasted(::AIS_PointCloudOwner* instance)
{
    return gcnew Macad::Occt::AIS_PointCloudOwner( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_RubberBand
//---------------------------------------------------------------------

Macad::Occt::AIS_RubberBand::AIS_RubberBand()
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_RubberBand();
}

Macad::Occt::AIS_RubberBand::AIS_RubberBand(Macad::Occt::Quantity_Color^ theLineColor, Macad::Occt::Aspect_TypeOfLine theType, double theLineWidth, bool theIsPolygonClosed)
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_RubberBand(*(::Quantity_Color*)theLineColor->NativeInstance, (::Aspect_TypeOfLine)theType, theLineWidth, theIsPolygonClosed);
}

Macad::Occt::AIS_RubberBand::AIS_RubberBand(Macad::Occt::Quantity_Color^ theLineColor, Macad::Occt::Aspect_TypeOfLine theType, double theLineWidth)
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_RubberBand(*(::Quantity_Color*)theLineColor->NativeInstance, (::Aspect_TypeOfLine)theType, theLineWidth, true);
}

Macad::Occt::AIS_RubberBand::AIS_RubberBand(Macad::Occt::Quantity_Color^ theLineColor, Macad::Occt::Aspect_TypeOfLine theType)
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_RubberBand(*(::Quantity_Color*)theLineColor->NativeInstance, (::Aspect_TypeOfLine)theType, 1., true);
}

Macad::Occt::AIS_RubberBand::AIS_RubberBand(Macad::Occt::Quantity_Color^ theLineColor, Macad::Occt::Aspect_TypeOfLine theType, Macad::Occt::Quantity_Color^ theFillColor, double theTransparency, double theLineWidth, bool theIsPolygonClosed)
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_RubberBand(*(::Quantity_Color*)theLineColor->NativeInstance, (::Aspect_TypeOfLine)theType, *(::Quantity_Color*)theFillColor->NativeInstance, theTransparency, theLineWidth, theIsPolygonClosed);
}

Macad::Occt::AIS_RubberBand::AIS_RubberBand(Macad::Occt::Quantity_Color^ theLineColor, Macad::Occt::Aspect_TypeOfLine theType, Macad::Occt::Quantity_Color^ theFillColor, double theTransparency, double theLineWidth)
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_RubberBand(*(::Quantity_Color*)theLineColor->NativeInstance, (::Aspect_TypeOfLine)theType, *(::Quantity_Color*)theFillColor->NativeInstance, theTransparency, theLineWidth, true);
}

Macad::Occt::AIS_RubberBand::AIS_RubberBand(Macad::Occt::Quantity_Color^ theLineColor, Macad::Occt::Aspect_TypeOfLine theType, Macad::Occt::Quantity_Color^ theFillColor, double theTransparency)
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_RubberBand(*(::Quantity_Color*)theLineColor->NativeInstance, (::Aspect_TypeOfLine)theType, *(::Quantity_Color*)theFillColor->NativeInstance, theTransparency, 1., true);
}

Macad::Occt::AIS_RubberBand::AIS_RubberBand(Macad::Occt::Quantity_Color^ theLineColor, Macad::Occt::Aspect_TypeOfLine theType, Macad::Occt::Quantity_Color^ theFillColor)
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_RubberBand(*(::Quantity_Color*)theLineColor->NativeInstance, (::Aspect_TypeOfLine)theType, *(::Quantity_Color*)theFillColor->NativeInstance, 1., 1., true);
}

void Macad::Occt::AIS_RubberBand::SetRectangle(int theMinX, int theMinY, int theMaxX, int theMaxY)
{
    ((::AIS_RubberBand*)_NativeInstance)->SetRectangle(theMinX, theMinY, theMaxX, theMaxY);
}

void Macad::Occt::AIS_RubberBand::AddPoint(Macad::Occt::Graphic3d_Vec2i^ thePoint)
{
    ((::AIS_RubberBand*)_NativeInstance)->AddPoint(*(::Graphic3d_Vec2i*)thePoint->NativeInstance);
}

void Macad::Occt::AIS_RubberBand::RemoveLastPoint()
{
    ((::AIS_RubberBand*)_NativeInstance)->RemoveLastPoint();
}

void Macad::Occt::AIS_RubberBand::ClearPoints()
{
    ((::AIS_RubberBand*)_NativeInstance)->ClearPoints();
}

Macad::Occt::Quantity_Color^ Macad::Occt::AIS_RubberBand::LineColor()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = ((::AIS_RubberBand*)_NativeInstance)->LineColor();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::AIS_RubberBand::SetLineColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::AIS_RubberBand*)_NativeInstance)->SetLineColor(*(::Quantity_Color*)theColor->NativeInstance);
}

Macad::Occt::Quantity_Color^ Macad::Occt::AIS_RubberBand::FillColor()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = ((::AIS_RubberBand*)_NativeInstance)->FillColor();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::AIS_RubberBand::SetFillColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::AIS_RubberBand*)_NativeInstance)->SetFillColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::AIS_RubberBand::SetLineWidth(double theWidth)
{
    ((::AIS_RubberBand*)_NativeInstance)->SetLineWidth(theWidth);
}

double Macad::Occt::AIS_RubberBand::LineWidth()
{
    double _result = ((::AIS_RubberBand*)_NativeInstance)->LineWidth();
    return _result;
}

void Macad::Occt::AIS_RubberBand::SetLineType(Macad::Occt::Aspect_TypeOfLine theType)
{
    ((::AIS_RubberBand*)_NativeInstance)->SetLineType((::Aspect_TypeOfLine)theType);
}

Macad::Occt::Aspect_TypeOfLine Macad::Occt::AIS_RubberBand::LineType()
{
    ::Aspect_TypeOfLine _result = ((::AIS_RubberBand*)_NativeInstance)->LineType();
    return (Macad::Occt::Aspect_TypeOfLine)_result;
}

void Macad::Occt::AIS_RubberBand::SetFillTransparency(double theValue)
{
    ((::AIS_RubberBand*)_NativeInstance)->SetFillTransparency(theValue);
}

double Macad::Occt::AIS_RubberBand::FillTransparency()
{
    double _result = ((::AIS_RubberBand*)_NativeInstance)->FillTransparency();
    return _result;
}

void Macad::Occt::AIS_RubberBand::SetFilling(bool theIsFilling)
{
    ((::AIS_RubberBand*)_NativeInstance)->SetFilling(theIsFilling);
}

void Macad::Occt::AIS_RubberBand::SetFilling(Macad::Occt::Quantity_Color^ theColor, double theTransparency)
{
    ((::AIS_RubberBand*)_NativeInstance)->SetFilling(*(::Quantity_Color*)theColor->NativeInstance, theTransparency);
}

bool Macad::Occt::AIS_RubberBand::IsFilling()
{
    bool _result = ((::AIS_RubberBand*)_NativeInstance)->IsFilling();
    return _result;
}

bool Macad::Occt::AIS_RubberBand::IsPolygonClosed()
{
    bool _result = ((::AIS_RubberBand*)_NativeInstance)->IsPolygonClosed();
    return _result;
}

void Macad::Occt::AIS_RubberBand::SetPolygonClosed(bool theIsPolygonClosed)
{
    ((::AIS_RubberBand*)_NativeInstance)->SetPolygonClosed(theIsPolygonClosed);
}

Macad::Occt::AIS_RubberBand^ Macad::Occt::AIS_RubberBand::CreateDowncasted(::AIS_RubberBand* instance)
{
    return gcnew Macad::Occt::AIS_RubberBand( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_TypeFilter
//---------------------------------------------------------------------

Macad::Occt::AIS_TypeFilter::AIS_TypeFilter(Macad::Occt::AIS_KindOfInteractive aGivenKind)
    : Macad::Occt::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_TypeFilter((::AIS_KindOfInteractive)aGivenKind);
}

bool Macad::Occt::AIS_TypeFilter::IsOk(Macad::Occt::SelectMgr_EntityOwner^ anobj)
{
    bool _result = ((::AIS_TypeFilter*)_NativeInstance)->IsOk(Handle(::SelectMgr_EntityOwner)(anobj->NativeInstance));
    return _result;
}

Macad::Occt::AIS_TypeFilter^ Macad::Occt::AIS_TypeFilter::CreateDowncasted(::AIS_TypeFilter* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::AIS_SignatureFilter)))
        return Macad::Occt::AIS_SignatureFilter::CreateDowncasted((::AIS_SignatureFilter*)instance);
    
    return gcnew Macad::Occt::AIS_TypeFilter( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_SignatureFilter
//---------------------------------------------------------------------

Macad::Occt::AIS_SignatureFilter::AIS_SignatureFilter(Macad::Occt::AIS_KindOfInteractive aGivenKind, int aGivenSignature)
    : Macad::Occt::AIS_TypeFilter(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_SignatureFilter((::AIS_KindOfInteractive)aGivenKind, aGivenSignature);
}

bool Macad::Occt::AIS_SignatureFilter::IsOk(Macad::Occt::SelectMgr_EntityOwner^ anobj)
{
    bool _result = ((::AIS_SignatureFilter*)_NativeInstance)->IsOk(Handle(::SelectMgr_EntityOwner)(anobj->NativeInstance));
    return _result;
}

Macad::Occt::AIS_SignatureFilter^ Macad::Occt::AIS_SignatureFilter::CreateDowncasted(::AIS_SignatureFilter* instance)
{
    return gcnew Macad::Occt::AIS_SignatureFilter( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_TextLabel
//---------------------------------------------------------------------

Macad::Occt::AIS_TextLabel::AIS_TextLabel()
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_TextLabel();
}

bool Macad::Occt::AIS_TextLabel::AcceptDisplayMode(int theMode)
{
    bool _result = ((::AIS_TextLabel*)_NativeInstance)->AcceptDisplayMode(theMode);
    return _result;
}

void Macad::Occt::AIS_TextLabel::SetColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::AIS_TextLabel*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::AIS_TextLabel::SetTransparency(double theValue)
{
    ((::AIS_TextLabel*)_NativeInstance)->SetTransparency(theValue);
}

void Macad::Occt::AIS_TextLabel::UnsetTransparency()
{
    ((::AIS_TextLabel*)_NativeInstance)->UnsetTransparency();
}

void Macad::Occt::AIS_TextLabel::SetMaterial(Macad::Occt::Graphic3d_MaterialAspect^ parameter1)
{
    ((::AIS_TextLabel*)_NativeInstance)->SetMaterial(*(::Graphic3d_MaterialAspect*)parameter1->NativeInstance);
}

void Macad::Occt::AIS_TextLabel::SetText(Macad::Occt::TCollection_ExtendedString^ theText)
{
    ((::AIS_TextLabel*)_NativeInstance)->SetText(*(::TCollection_ExtendedString*)theText->NativeInstance);
}

void Macad::Occt::AIS_TextLabel::SetPosition(Macad::Occt::Pnt thePosition)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePosition = &thePosition;
    ((::AIS_TextLabel*)_NativeInstance)->SetPosition(*(gp_Pnt*)pp_thePosition);
}

void Macad::Occt::AIS_TextLabel::SetHJustification(Macad::Occt::Graphic3d_HorizontalTextAlignment theHJust)
{
    ((::AIS_TextLabel*)_NativeInstance)->SetHJustification((::Graphic3d_HorizontalTextAlignment)theHJust);
}

void Macad::Occt::AIS_TextLabel::SetVJustification(Macad::Occt::Graphic3d_VerticalTextAlignment theVJust)
{
    ((::AIS_TextLabel*)_NativeInstance)->SetVJustification((::Graphic3d_VerticalTextAlignment)theVJust);
}

void Macad::Occt::AIS_TextLabel::SetAngle(double theAngle)
{
    ((::AIS_TextLabel*)_NativeInstance)->SetAngle(theAngle);
}

void Macad::Occt::AIS_TextLabel::SetZoomable(bool theIsZoomable)
{
    ((::AIS_TextLabel*)_NativeInstance)->SetZoomable(theIsZoomable);
}

void Macad::Occt::AIS_TextLabel::SetHeight(double theHeight)
{
    ((::AIS_TextLabel*)_NativeInstance)->SetHeight(theHeight);
}

void Macad::Occt::AIS_TextLabel::SetFont(System::String^ theFont)
{
    const char* sz_theFont = (char*)(void*)Marshal::StringToHGlobalAnsi(theFont);
    ((::AIS_TextLabel*)_NativeInstance)->SetFont(sz_theFont);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFont);
}

void Macad::Occt::AIS_TextLabel::SetOrientation3D(Macad::Occt::Ax2 theOrientation)
{
    pin_ptr<Macad::Occt::Ax2> pp_theOrientation = &theOrientation;
    ((::AIS_TextLabel*)_NativeInstance)->SetOrientation3D(*(gp_Ax2*)pp_theOrientation);
}

void Macad::Occt::AIS_TextLabel::UnsetOrientation3D()
{
    ((::AIS_TextLabel*)_NativeInstance)->UnsetOrientation3D();
}

Macad::Occt::Pnt Macad::Occt::AIS_TextLabel::Position()
{
    ::gp_Pnt _nativeResult = ((::AIS_TextLabel*)_NativeInstance)->Position();
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::AIS_TextLabel::Text()
{
    ::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
    *_result = (::TCollection_ExtendedString)((::AIS_TextLabel*)_NativeInstance)->Text();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::AIS_TextLabel::FontName()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::AIS_TextLabel*)_NativeInstance)->FontName();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::Ax2 Macad::Occt::AIS_TextLabel::Orientation3D()
{
    ::gp_Ax2 _nativeResult = ((::AIS_TextLabel*)_NativeInstance)->Orientation3D();
    return Macad::Occt::Ax2(_nativeResult);
}

bool Macad::Occt::AIS_TextLabel::HasOrientation3D()
{
    bool _result = ((::AIS_TextLabel*)_NativeInstance)->HasOrientation3D();
    return _result;
}

void Macad::Occt::AIS_TextLabel::SetFlipping(bool theIsFlipping)
{
    ((::AIS_TextLabel*)_NativeInstance)->SetFlipping(theIsFlipping);
}

bool Macad::Occt::AIS_TextLabel::HasFlipping()
{
    bool _result = ((::AIS_TextLabel*)_NativeInstance)->HasFlipping();
    return _result;
}

bool Macad::Occt::AIS_TextLabel::HasOwnAnchorPoint()
{
    bool _result = ((::AIS_TextLabel*)_NativeInstance)->HasOwnAnchorPoint();
    return _result;
}

void Macad::Occt::AIS_TextLabel::SetOwnAnchorPoint(bool theOwnAnchorPoint)
{
    ((::AIS_TextLabel*)_NativeInstance)->SetOwnAnchorPoint(theOwnAnchorPoint);
}

void Macad::Occt::AIS_TextLabel::SetDisplayType(Macad::Occt::Aspect_TypeOfDisplayText theDisplayType)
{
    ((::AIS_TextLabel*)_NativeInstance)->SetDisplayType((::Aspect_TypeOfDisplayText)theDisplayType);
}

void Macad::Occt::AIS_TextLabel::SetColorSubTitle(Macad::Occt::Quantity_Color^ theColor)
{
    ((::AIS_TextLabel*)_NativeInstance)->SetColorSubTitle(*(::Quantity_Color*)theColor->NativeInstance);
}

Macad::Occt::AIS_TextLabel^ Macad::Occt::AIS_TextLabel::CreateDowncasted(::AIS_TextLabel* instance)
{
    return gcnew Macad::Occt::AIS_TextLabel( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_TexturedShape
//---------------------------------------------------------------------

Macad::Occt::AIS_TexturedShape::AIS_TexturedShape(Macad::Occt::TopoDS_Shape^ theShape)
    : Macad::Occt::AIS_Shape(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_TexturedShape(*(::TopoDS_Shape*)theShape->NativeInstance);
}

void Macad::Occt::AIS_TexturedShape::SetTextureFileName(Macad::Occt::TCollection_AsciiString^ theTextureFileName)
{
    ((::AIS_TexturedShape*)_NativeInstance)->SetTextureFileName(*(::TCollection_AsciiString*)theTextureFileName->NativeInstance);
}

void Macad::Occt::AIS_TexturedShape::SetTexturePixMap(Macad::Occt::Image_PixMap^ theTexturePixMap)
{
    ((::AIS_TexturedShape*)_NativeInstance)->SetTexturePixMap(Handle(::Image_PixMap)(theTexturePixMap->NativeInstance));
}

bool Macad::Occt::AIS_TexturedShape::TextureMapState()
{
    bool _result = ((::AIS_TexturedShape*)_NativeInstance)->TextureMapState();
    return _result;
}

void Macad::Occt::AIS_TexturedShape::SetTextureMapOn()
{
    ((::AIS_TexturedShape*)_NativeInstance)->SetTextureMapOn();
}

void Macad::Occt::AIS_TexturedShape::SetTextureMapOff()
{
    ((::AIS_TexturedShape*)_NativeInstance)->SetTextureMapOff();
}

System::String^ Macad::Occt::AIS_TexturedShape::TextureFile()
{
    Standard_CString _result = ((::AIS_TexturedShape*)_NativeInstance)->TextureFile();
    return gcnew System::String(_result);
}

Macad::Occt::Image_PixMap^ Macad::Occt::AIS_TexturedShape::TexturePixMap()
{
    Handle(::Image_PixMap) _result = ((::AIS_TexturedShape*)_NativeInstance)->TexturePixMap();
    return _result.IsNull() ? nullptr : Macad::Occt::Image_PixMap::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_TexturedShape::UpdateAttributes()
{
    ((::AIS_TexturedShape*)_NativeInstance)->UpdateAttributes();
}

void Macad::Occt::AIS_TexturedShape::SetColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::AIS_TexturedShape*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::AIS_TexturedShape::UnsetColor()
{
    ((::AIS_TexturedShape*)_NativeInstance)->UnsetColor();
}

void Macad::Occt::AIS_TexturedShape::SetMaterial(Macad::Occt::Graphic3d_MaterialAspect^ theAspect)
{
    ((::AIS_TexturedShape*)_NativeInstance)->SetMaterial(*(::Graphic3d_MaterialAspect*)theAspect->NativeInstance);
}

void Macad::Occt::AIS_TexturedShape::UnsetMaterial()
{
    ((::AIS_TexturedShape*)_NativeInstance)->UnsetMaterial();
}

void Macad::Occt::AIS_TexturedShape::EnableTextureModulate()
{
    ((::AIS_TexturedShape*)_NativeInstance)->EnableTextureModulate();
}

void Macad::Occt::AIS_TexturedShape::DisableTextureModulate()
{
    ((::AIS_TexturedShape*)_NativeInstance)->DisableTextureModulate();
}

bool Macad::Occt::AIS_TexturedShape::TextureRepeat()
{
    bool _result = ((::AIS_TexturedShape*)_NativeInstance)->TextureRepeat();
    return _result;
}

double Macad::Occt::AIS_TexturedShape::URepeat()
{
    double _result = ((::AIS_TexturedShape*)_NativeInstance)->URepeat();
    return _result;
}

double Macad::Occt::AIS_TexturedShape::VRepeat()
{
    double _result = ((::AIS_TexturedShape*)_NativeInstance)->VRepeat();
    return _result;
}

void Macad::Occt::AIS_TexturedShape::SetTextureRepeat(bool theToRepeat, double theURepeat, double theVRepeat)
{
    ((::AIS_TexturedShape*)_NativeInstance)->SetTextureRepeat(theToRepeat, theURepeat, theVRepeat);
}

void Macad::Occt::AIS_TexturedShape::SetTextureRepeat(bool theToRepeat, double theURepeat)
{
    ((::AIS_TexturedShape*)_NativeInstance)->SetTextureRepeat(theToRepeat, theURepeat, 1.);
}

void Macad::Occt::AIS_TexturedShape::SetTextureRepeat(bool theToRepeat)
{
    ((::AIS_TexturedShape*)_NativeInstance)->SetTextureRepeat(theToRepeat, 1., 1.);
}

bool Macad::Occt::AIS_TexturedShape::TextureOrigin()
{
    bool _result = ((::AIS_TexturedShape*)_NativeInstance)->TextureOrigin();
    return _result;
}

double Macad::Occt::AIS_TexturedShape::TextureUOrigin()
{
    double _result = ((::AIS_TexturedShape*)_NativeInstance)->TextureUOrigin();
    return _result;
}

double Macad::Occt::AIS_TexturedShape::TextureVOrigin()
{
    double _result = ((::AIS_TexturedShape*)_NativeInstance)->TextureVOrigin();
    return _result;
}

void Macad::Occt::AIS_TexturedShape::SetTextureOrigin(bool theToSetTextureOrigin, double theUOrigin, double theVOrigin)
{
    ((::AIS_TexturedShape*)_NativeInstance)->SetTextureOrigin(theToSetTextureOrigin, theUOrigin, theVOrigin);
}

void Macad::Occt::AIS_TexturedShape::SetTextureOrigin(bool theToSetTextureOrigin, double theUOrigin)
{
    ((::AIS_TexturedShape*)_NativeInstance)->SetTextureOrigin(theToSetTextureOrigin, theUOrigin, 0.);
}

void Macad::Occt::AIS_TexturedShape::SetTextureOrigin(bool theToSetTextureOrigin)
{
    ((::AIS_TexturedShape*)_NativeInstance)->SetTextureOrigin(theToSetTextureOrigin, 0., 0.);
}

bool Macad::Occt::AIS_TexturedShape::TextureScale()
{
    bool _result = ((::AIS_TexturedShape*)_NativeInstance)->TextureScale();
    return _result;
}

double Macad::Occt::AIS_TexturedShape::TextureScaleU()
{
    double _result = ((::AIS_TexturedShape*)_NativeInstance)->TextureScaleU();
    return _result;
}

double Macad::Occt::AIS_TexturedShape::TextureScaleV()
{
    double _result = ((::AIS_TexturedShape*)_NativeInstance)->TextureScaleV();
    return _result;
}

void Macad::Occt::AIS_TexturedShape::SetTextureScale(bool theToSetTextureScale, double theScaleU, double theScaleV)
{
    ((::AIS_TexturedShape*)_NativeInstance)->SetTextureScale(theToSetTextureScale, theScaleU, theScaleV);
}

void Macad::Occt::AIS_TexturedShape::SetTextureScale(bool theToSetTextureScale, double theScaleU)
{
    ((::AIS_TexturedShape*)_NativeInstance)->SetTextureScale(theToSetTextureScale, theScaleU, 1.);
}

void Macad::Occt::AIS_TexturedShape::SetTextureScale(bool theToSetTextureScale)
{
    ((::AIS_TexturedShape*)_NativeInstance)->SetTextureScale(theToSetTextureScale, 1., 1.);
}

bool Macad::Occt::AIS_TexturedShape::ShowTriangles()
{
    bool _result = ((::AIS_TexturedShape*)_NativeInstance)->ShowTriangles();
    return _result;
}

void Macad::Occt::AIS_TexturedShape::ShowTriangles(bool theToShowTriangles)
{
    ((::AIS_TexturedShape*)_NativeInstance)->ShowTriangles(theToShowTriangles);
}

bool Macad::Occt::AIS_TexturedShape::TextureModulate()
{
    bool _result = ((::AIS_TexturedShape*)_NativeInstance)->TextureModulate();
    return _result;
}

bool Macad::Occt::AIS_TexturedShape::AcceptDisplayMode(int theMode)
{
    bool _result = ((::AIS_TexturedShape*)_NativeInstance)->AcceptDisplayMode(theMode);
    return _result;
}

Macad::Occt::AIS_TexturedShape^ Macad::Occt::AIS_TexturedShape::CreateDowncasted(::AIS_TexturedShape* instance)
{
    return gcnew Macad::Occt::AIS_TexturedShape( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_Triangulation
//---------------------------------------------------------------------

void Macad::Occt::AIS_Triangulation::SetColors(Macad::Occt::TColStd_HArray1OfInteger^ aColor)
{
    ((::AIS_Triangulation*)_NativeInstance)->SetColors(Handle(::TColStd_HArray1OfInteger)(aColor->NativeInstance));
}

Macad::Occt::TColStd_HArray1OfInteger^ Macad::Occt::AIS_Triangulation::GetColors()
{
    Handle(::TColStd_HArray1OfInteger) _result = ((::AIS_Triangulation*)_NativeInstance)->GetColors();
    return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HArray1OfInteger::CreateDowncasted(_result.get());
}

bool Macad::Occt::AIS_Triangulation::HasVertexColors()
{
    bool _result = ((::AIS_Triangulation*)_NativeInstance)->HasVertexColors();
    return _result;
}

void Macad::Occt::AIS_Triangulation::SetTransparency(double aValue)
{
    ((::AIS_Triangulation*)_NativeInstance)->SetTransparency(aValue);
}

void Macad::Occt::AIS_Triangulation::SetTransparency()
{
    ((::AIS_Triangulation*)_NativeInstance)->SetTransparency(0.59999999999999998);
}

void Macad::Occt::AIS_Triangulation::UnsetTransparency()
{
    ((::AIS_Triangulation*)_NativeInstance)->UnsetTransparency();
}

Macad::Occt::AIS_Triangulation^ Macad::Occt::AIS_Triangulation::CreateDowncasted(::AIS_Triangulation* instance)
{
    return gcnew Macad::Occt::AIS_Triangulation( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_Trihedron
//---------------------------------------------------------------------

Macad::Occt::AIS_Trihedron::AIS_Trihedron(Macad::Occt::Geom_Axis2Placement^ theComponent)
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_Trihedron(Handle(::Geom_Axis2Placement)(theComponent->NativeInstance));
}

Macad::Occt::Prs3d_DatumMode Macad::Occt::AIS_Trihedron::DatumDisplayMode()
{
    ::Prs3d_DatumMode _result = ((::AIS_Trihedron*)_NativeInstance)->DatumDisplayMode();
    return (Macad::Occt::Prs3d_DatumMode)_result;
}

void Macad::Occt::AIS_Trihedron::SetDatumDisplayMode(Macad::Occt::Prs3d_DatumMode theMode)
{
    ((::AIS_Trihedron*)_NativeInstance)->SetDatumDisplayMode((::Prs3d_DatumMode)theMode);
}

Macad::Occt::Geom_Axis2Placement^ Macad::Occt::AIS_Trihedron::Component()
{
    Handle(::Geom_Axis2Placement) _result = ((::AIS_Trihedron*)_NativeInstance)->Component();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Axis2Placement::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_Trihedron::SetComponent(Macad::Occt::Geom_Axis2Placement^ theComponent)
{
    ((::AIS_Trihedron*)_NativeInstance)->SetComponent(Handle(::Geom_Axis2Placement)(theComponent->NativeInstance));
}

bool Macad::Occt::AIS_Trihedron::HasOwnSize()
{
    bool _result = ((::AIS_Trihedron*)_NativeInstance)->HasOwnSize();
    return _result;
}

double Macad::Occt::AIS_Trihedron::Size()
{
    double _result = ((::AIS_Trihedron*)_NativeInstance)->Size();
    return _result;
}

void Macad::Occt::AIS_Trihedron::SetSize(double theValue)
{
    ((::AIS_Trihedron*)_NativeInstance)->SetSize(theValue);
}

void Macad::Occt::AIS_Trihedron::UnsetSize()
{
    ((::AIS_Trihedron*)_NativeInstance)->UnsetSize();
}

bool Macad::Occt::AIS_Trihedron::HasTextColor()
{
    bool _result = ((::AIS_Trihedron*)_NativeInstance)->HasTextColor();
    return _result;
}

Macad::Occt::Quantity_Color^ Macad::Occt::AIS_Trihedron::TextColor()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = ((::AIS_Trihedron*)_NativeInstance)->TextColor();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::AIS_Trihedron::SetTextColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::AIS_Trihedron*)_NativeInstance)->SetTextColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::AIS_Trihedron::SetTextColor(Macad::Occt::Prs3d_DatumParts thePart, Macad::Occt::Quantity_Color^ theColor)
{
    ((::AIS_Trihedron*)_NativeInstance)->SetTextColor((::Prs3d_DatumParts)thePart, *(::Quantity_Color*)theColor->NativeInstance);
}

bool Macad::Occt::AIS_Trihedron::HasArrowColor()
{
    bool _result = ((::AIS_Trihedron*)_NativeInstance)->HasArrowColor();
    return _result;
}

Macad::Occt::Quantity_Color^ Macad::Occt::AIS_Trihedron::ArrowColor()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = ((::AIS_Trihedron*)_NativeInstance)->ArrowColor();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::AIS_Trihedron::SetArrowColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::AIS_Trihedron*)_NativeInstance)->SetArrowColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::AIS_Trihedron::SetArrowColor(Macad::Occt::Prs3d_DatumParts thePart, Macad::Occt::Quantity_Color^ theColor)
{
    ((::AIS_Trihedron*)_NativeInstance)->SetArrowColor((::Prs3d_DatumParts)thePart, *(::Quantity_Color*)theColor->NativeInstance);
}

Macad::Occt::Quantity_Color^ Macad::Occt::AIS_Trihedron::DatumPartColor(Macad::Occt::Prs3d_DatumParts thePart)
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = ((::AIS_Trihedron*)_NativeInstance)->DatumPartColor((::Prs3d_DatumParts)thePart);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::AIS_Trihedron::SetDatumPartColor(Macad::Occt::Prs3d_DatumParts thePart, Macad::Occt::Quantity_Color^ theColor)
{
    ((::AIS_Trihedron*)_NativeInstance)->SetDatumPartColor((::Prs3d_DatumParts)thePart, *(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::AIS_Trihedron::SetOriginColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::AIS_Trihedron*)_NativeInstance)->SetOriginColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::AIS_Trihedron::SetXAxisColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::AIS_Trihedron*)_NativeInstance)->SetXAxisColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::AIS_Trihedron::SetYAxisColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::AIS_Trihedron*)_NativeInstance)->SetYAxisColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::AIS_Trihedron::SetAxisColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::AIS_Trihedron*)_NativeInstance)->SetAxisColor(*(::Quantity_Color*)theColor->NativeInstance);
}

bool Macad::Occt::AIS_Trihedron::ToDrawArrows()
{
    bool _result = ((::AIS_Trihedron*)_NativeInstance)->ToDrawArrows();
    return _result;
}

void Macad::Occt::AIS_Trihedron::SetDrawArrows(bool theToDraw)
{
    ((::AIS_Trihedron*)_NativeInstance)->SetDrawArrows(theToDraw);
}

int Macad::Occt::AIS_Trihedron::SelectionPriority(Macad::Occt::Prs3d_DatumParts thePart)
{
    int _result = ((::AIS_Trihedron*)_NativeInstance)->SelectionPriority((::Prs3d_DatumParts)thePart);
    return _result;
}

void Macad::Occt::AIS_Trihedron::SetSelectionPriority(Macad::Occt::Prs3d_DatumParts thePart, int thePriority)
{
    ((::AIS_Trihedron*)_NativeInstance)->SetSelectionPriority((::Prs3d_DatumParts)thePart, thePriority);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::AIS_Trihedron::Label(Macad::Occt::Prs3d_DatumParts thePart)
{
    ::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
    *_result = (::TCollection_ExtendedString)((::AIS_Trihedron*)_NativeInstance)->Label((::Prs3d_DatumParts)thePart);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

void Macad::Occt::AIS_Trihedron::SetLabel(Macad::Occt::Prs3d_DatumParts thePart, Macad::Occt::TCollection_ExtendedString^ theName)
{
    ((::AIS_Trihedron*)_NativeInstance)->SetLabel((::Prs3d_DatumParts)thePart, *(::TCollection_ExtendedString*)theName->NativeInstance);
}

void Macad::Occt::AIS_Trihedron::SetColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::AIS_Trihedron*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

bool Macad::Occt::AIS_Trihedron::AcceptDisplayMode(int theMode)
{
    bool _result = ((::AIS_Trihedron*)_NativeInstance)->AcceptDisplayMode(theMode);
    return _result;
}

int Macad::Occt::AIS_Trihedron::Signature()
{
    int _result = ((::AIS_Trihedron*)_NativeInstance)->Signature();
    return _result;
}

Macad::Occt::AIS_KindOfInteractive Macad::Occt::AIS_Trihedron::Type()
{
    ::AIS_KindOfInteractive _result = ((::AIS_Trihedron*)_NativeInstance)->Type();
    return (Macad::Occt::AIS_KindOfInteractive)_result;
}

void Macad::Occt::AIS_Trihedron::UnsetColor()
{
    ((::AIS_Trihedron*)_NativeInstance)->UnsetColor();
}

void Macad::Occt::AIS_Trihedron::ClearSelected()
{
    ((::AIS_Trihedron*)_NativeInstance)->ClearSelected();
}

void Macad::Occt::AIS_Trihedron::HilightSelected(Macad::Occt::PrsMgr_PresentationManager^ thePM, Macad::Occt::SelectMgr_SequenceOfOwner^ theOwners)
{
    ((::AIS_Trihedron*)_NativeInstance)->HilightSelected(Handle(::PrsMgr_PresentationManager)(thePM->NativeInstance), *(::SelectMgr_SequenceOfOwner*)theOwners->NativeInstance);
}

void Macad::Occt::AIS_Trihedron::HilightOwnerWithColor(Macad::Occt::PrsMgr_PresentationManager^ thePM, Macad::Occt::Prs3d_Drawer^ theStyle, Macad::Occt::SelectMgr_EntityOwner^ theOwner)
{
    ((::AIS_Trihedron*)_NativeInstance)->HilightOwnerWithColor(Handle(::PrsMgr_PresentationManager)(thePM->NativeInstance), Handle(::Prs3d_Drawer)(theStyle->NativeInstance), Handle(::SelectMgr_EntityOwner)(theOwner->NativeInstance));
}

Macad::Occt::AIS_Trihedron^ Macad::Occt::AIS_Trihedron::CreateDowncasted(::AIS_Trihedron* instance)
{
    return gcnew Macad::Occt::AIS_Trihedron( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_TrihedronOwner
//---------------------------------------------------------------------

Macad::Occt::AIS_TrihedronOwner::AIS_TrihedronOwner(Macad::Occt::SelectMgr_SelectableObject^ theSelObject, Macad::Occt::Prs3d_DatumParts theDatumPart, int thePriority)
    : Macad::Occt::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_TrihedronOwner(Handle(::SelectMgr_SelectableObject)(theSelObject->NativeInstance), (::Prs3d_DatumParts)theDatumPart, thePriority);
}

Macad::Occt::Prs3d_DatumParts Macad::Occt::AIS_TrihedronOwner::DatumPart()
{
    ::Prs3d_DatumParts _result = ((::AIS_TrihedronOwner*)_NativeInstance)->DatumPart();
    return (Macad::Occt::Prs3d_DatumParts)_result;
}

void Macad::Occt::AIS_TrihedronOwner::HilightWithColor(Macad::Occt::PrsMgr_PresentationManager^ thePM, Macad::Occt::Prs3d_Drawer^ theStyle, int theMode)
{
    ((::AIS_TrihedronOwner*)_NativeInstance)->HilightWithColor(Handle(::PrsMgr_PresentationManager)(thePM->NativeInstance), Handle(::Prs3d_Drawer)(theStyle->NativeInstance), theMode);
}

bool Macad::Occt::AIS_TrihedronOwner::IsHilighted(Macad::Occt::PrsMgr_PresentationManager^ thePM, int theMode)
{
    bool _result = ((::AIS_TrihedronOwner*)_NativeInstance)->IsHilighted(Handle(::PrsMgr_PresentationManager)(thePM->NativeInstance), theMode);
    return _result;
}

void Macad::Occt::AIS_TrihedronOwner::Unhilight(Macad::Occt::PrsMgr_PresentationManager^ thePM, int theMode)
{
    ((::AIS_TrihedronOwner*)_NativeInstance)->Unhilight(Handle(::PrsMgr_PresentationManager)(thePM->NativeInstance), theMode);
}

Macad::Occt::AIS_TrihedronOwner^ Macad::Occt::AIS_TrihedronOwner::CreateDowncasted(::AIS_TrihedronOwner* instance)
{
    return gcnew Macad::Occt::AIS_TrihedronOwner( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_ViewInputBuffer
//---------------------------------------------------------------------

Macad::Occt::AIS_ViewInputBuffer::AIS_ViewInputBuffer()
    : Macad::Occt::BaseClass<::AIS_ViewInputBuffer>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_ViewInputBuffer();
}

void Macad::Occt::AIS_ViewInputBuffer::Reset()
{
    ((::AIS_ViewInputBuffer*)_NativeInstance)->Reset();
}



//---------------------------------------------------------------------
//  Class  AIS_XRTrackedDevice
//---------------------------------------------------------------------

Macad::Occt::AIS_XRTrackedDevice::AIS_XRTrackedDevice(Macad::Occt::Graphic3d_ArrayOfTriangles^ theTris, Macad::Occt::Image_Texture^ theTexture)
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_XRTrackedDevice(Handle(::Graphic3d_ArrayOfTriangles)(theTris->NativeInstance), Handle(::Image_Texture)(theTexture->NativeInstance));
}

Macad::Occt::AIS_XRTrackedDevice::AIS_XRTrackedDevice()
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_XRTrackedDevice();
}

Macad::Occt::Aspect_XRTrackedDeviceRole Macad::Occt::AIS_XRTrackedDevice::Role()
{
    ::Aspect_XRTrackedDeviceRole _result = ((::AIS_XRTrackedDevice*)_NativeInstance)->Role();
    return (Macad::Occt::Aspect_XRTrackedDeviceRole)_result;
}

void Macad::Occt::AIS_XRTrackedDevice::SetRole(Macad::Occt::Aspect_XRTrackedDeviceRole theRole)
{
    ((::AIS_XRTrackedDevice*)_NativeInstance)->SetRole((::Aspect_XRTrackedDeviceRole)theRole);
}

Macad::Occt::Quantity_Color^ Macad::Occt::AIS_XRTrackedDevice::LaserColor()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::AIS_XRTrackedDevice*)_NativeInstance)->LaserColor();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::AIS_XRTrackedDevice::SetLaserColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::AIS_XRTrackedDevice*)_NativeInstance)->SetLaserColor(*(::Quantity_Color*)theColor->NativeInstance);
}

float Macad::Occt::AIS_XRTrackedDevice::LaserLength()
{
    float _result = ((::AIS_XRTrackedDevice*)_NativeInstance)->LaserLength();
    return _result;
}

void Macad::Occt::AIS_XRTrackedDevice::SetLaserLength(float theLength)
{
    ((::AIS_XRTrackedDevice*)_NativeInstance)->SetLaserLength(theLength);
}

float Macad::Occt::AIS_XRTrackedDevice::UnitFactor()
{
    float _result = ((::AIS_XRTrackedDevice*)_NativeInstance)->UnitFactor();
    return _result;
}

void Macad::Occt::AIS_XRTrackedDevice::SetUnitFactor(float theFactor)
{
    ((::AIS_XRTrackedDevice*)_NativeInstance)->SetUnitFactor(theFactor);
}

Macad::Occt::AIS_XRTrackedDevice^ Macad::Occt::AIS_XRTrackedDevice::CreateDowncasted(::AIS_XRTrackedDevice* instance)
{
    return gcnew Macad::Occt::AIS_XRTrackedDevice( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_ViewController
//---------------------------------------------------------------------

Macad::Occt::AIS_ViewController::AIS_ViewController()
    : Macad::Occt::Aspect_WindowInputListener(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::AIS_ViewController();
}

Macad::Occt::AIS_ViewInputBuffer^ Macad::Occt::AIS_ViewController::InputBuffer(Macad::Occt::AIS_ViewInputBufferType theType)
{
    ::AIS_ViewInputBuffer* _result = new ::AIS_ViewInputBuffer();
    *_result = (::AIS_ViewInputBuffer)((::AIS_ViewController*)_NativeInstance)->InputBuffer((::AIS_ViewInputBufferType)theType);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::AIS_ViewInputBuffer(_result);
}

Macad::Occt::AIS_ViewInputBuffer^ Macad::Occt::AIS_ViewController::ChangeInputBuffer(Macad::Occt::AIS_ViewInputBufferType theType)
{
    ::AIS_ViewInputBuffer* _result = new ::AIS_ViewInputBuffer();
    *_result = ((::AIS_ViewController*)_NativeInstance)->ChangeInputBuffer((::AIS_ViewInputBufferType)theType);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::AIS_ViewInputBuffer(_result);
}

Macad::Occt::AIS_AnimationCamera^ Macad::Occt::AIS_ViewController::ViewAnimation()
{
    Handle(::AIS_AnimationCamera) _result = ((::AIS_ViewController*)_NativeInstance)->ViewAnimation();
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_AnimationCamera::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_ViewController::SetViewAnimation(Macad::Occt::AIS_AnimationCamera^ theAnimation)
{
    ((::AIS_ViewController*)_NativeInstance)->SetViewAnimation(Handle(::AIS_AnimationCamera)(theAnimation->NativeInstance));
}

void Macad::Occt::AIS_ViewController::AbortViewAnimation()
{
    ((::AIS_ViewController*)_NativeInstance)->AbortViewAnimation();
}

Macad::Occt::AIS_Animation^ Macad::Occt::AIS_ViewController::ObjectsAnimation()
{
    Handle(::AIS_Animation) _result = ((::AIS_ViewController*)_NativeInstance)->ObjectsAnimation();
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_Animation::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_ViewController::SetObjectsAnimation(Macad::Occt::AIS_Animation^ theAnimation)
{
    ((::AIS_ViewController*)_NativeInstance)->SetObjectsAnimation(Handle(::AIS_Animation)(theAnimation->NativeInstance));
}

bool Macad::Occt::AIS_ViewController::ToPauseObjectsAnimation()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->ToPauseObjectsAnimation();
    return _result;
}

void Macad::Occt::AIS_ViewController::SetPauseObjectsAnimation(bool theToPause)
{
    ((::AIS_ViewController*)_NativeInstance)->SetPauseObjectsAnimation(theToPause);
}

bool Macad::Occt::AIS_ViewController::IsContinuousRedraw()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->IsContinuousRedraw();
    return _result;
}

void Macad::Occt::AIS_ViewController::SetContinuousRedraw(bool theToEnable)
{
    ((::AIS_ViewController*)_NativeInstance)->SetContinuousRedraw(theToEnable);
}

Macad::Occt::AIS_RotationMode Macad::Occt::AIS_ViewController::RotationMode()
{
    ::AIS_RotationMode _result = ((::AIS_ViewController*)_NativeInstance)->RotationMode();
    return (Macad::Occt::AIS_RotationMode)_result;
}

void Macad::Occt::AIS_ViewController::SetRotationMode(Macad::Occt::AIS_RotationMode theMode)
{
    ((::AIS_ViewController*)_NativeInstance)->SetRotationMode((::AIS_RotationMode)theMode);
}

Macad::Occt::AIS_NavigationMode Macad::Occt::AIS_ViewController::NavigationMode()
{
    ::AIS_NavigationMode _result = ((::AIS_ViewController*)_NativeInstance)->NavigationMode();
    return (Macad::Occt::AIS_NavigationMode)_result;
}

void Macad::Occt::AIS_ViewController::SetNavigationMode(Macad::Occt::AIS_NavigationMode theMode)
{
    ((::AIS_ViewController*)_NativeInstance)->SetNavigationMode((::AIS_NavigationMode)theMode);
}

float Macad::Occt::AIS_ViewController::MouseAcceleration()
{
    float _result = ((::AIS_ViewController*)_NativeInstance)->MouseAcceleration();
    return _result;
}

void Macad::Occt::AIS_ViewController::SetMouseAcceleration(float theRatio)
{
    ((::AIS_ViewController*)_NativeInstance)->SetMouseAcceleration(theRatio);
}

float Macad::Occt::AIS_ViewController::OrbitAcceleration()
{
    float _result = ((::AIS_ViewController*)_NativeInstance)->OrbitAcceleration();
    return _result;
}

void Macad::Occt::AIS_ViewController::SetOrbitAcceleration(float theRatio)
{
    ((::AIS_ViewController*)_NativeInstance)->SetOrbitAcceleration(theRatio);
}

bool Macad::Occt::AIS_ViewController::ToShowPanAnchorPoint()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->ToShowPanAnchorPoint();
    return _result;
}

void Macad::Occt::AIS_ViewController::SetShowPanAnchorPoint(bool theToShow)
{
    ((::AIS_ViewController*)_NativeInstance)->SetShowPanAnchorPoint(theToShow);
}

bool Macad::Occt::AIS_ViewController::ToShowRotateCenter()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->ToShowRotateCenter();
    return _result;
}

void Macad::Occt::AIS_ViewController::SetShowRotateCenter(bool theToShow)
{
    ((::AIS_ViewController*)_NativeInstance)->SetShowRotateCenter(theToShow);
}

bool Macad::Occt::AIS_ViewController::ToLockOrbitZUp()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->ToLockOrbitZUp();
    return _result;
}

void Macad::Occt::AIS_ViewController::SetLockOrbitZUp(bool theToForceUp)
{
    ((::AIS_ViewController*)_NativeInstance)->SetLockOrbitZUp(theToForceUp);
}

bool Macad::Occt::AIS_ViewController::ToAllowTouchZRotation()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->ToAllowTouchZRotation();
    return _result;
}

void Macad::Occt::AIS_ViewController::SetAllowTouchZRotation(bool theToEnable)
{
    ((::AIS_ViewController*)_NativeInstance)->SetAllowTouchZRotation(theToEnable);
}

bool Macad::Occt::AIS_ViewController::ToAllowRotation()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->ToAllowRotation();
    return _result;
}

void Macad::Occt::AIS_ViewController::SetAllowRotation(bool theToEnable)
{
    ((::AIS_ViewController*)_NativeInstance)->SetAllowRotation(theToEnable);
}

bool Macad::Occt::AIS_ViewController::ToAllowPanning()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->ToAllowPanning();
    return _result;
}

void Macad::Occt::AIS_ViewController::SetAllowPanning(bool theToEnable)
{
    ((::AIS_ViewController*)_NativeInstance)->SetAllowPanning(theToEnable);
}

bool Macad::Occt::AIS_ViewController::ToAllowZooming()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->ToAllowZooming();
    return _result;
}

void Macad::Occt::AIS_ViewController::SetAllowZooming(bool theToEnable)
{
    ((::AIS_ViewController*)_NativeInstance)->SetAllowZooming(theToEnable);
}

bool Macad::Occt::AIS_ViewController::ToAllowZFocus()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->ToAllowZFocus();
    return _result;
}

void Macad::Occt::AIS_ViewController::SetAllowZFocus(bool theToEnable)
{
    ((::AIS_ViewController*)_NativeInstance)->SetAllowZFocus(theToEnable);
}

bool Macad::Occt::AIS_ViewController::ToAllowHighlight()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->ToAllowHighlight();
    return _result;
}

void Macad::Occt::AIS_ViewController::SetAllowHighlight(bool theToEnable)
{
    ((::AIS_ViewController*)_NativeInstance)->SetAllowHighlight(theToEnable);
}

bool Macad::Occt::AIS_ViewController::ToAllowDragging()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->ToAllowDragging();
    return _result;
}

void Macad::Occt::AIS_ViewController::SetAllowDragging(bool theToEnable)
{
    ((::AIS_ViewController*)_NativeInstance)->SetAllowDragging(theToEnable);
}

bool Macad::Occt::AIS_ViewController::ToStickToRayOnZoom()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->ToStickToRayOnZoom();
    return _result;
}

void Macad::Occt::AIS_ViewController::SetStickToRayOnZoom(bool theToEnable)
{
    ((::AIS_ViewController*)_NativeInstance)->SetStickToRayOnZoom(theToEnable);
}

bool Macad::Occt::AIS_ViewController::ToStickToRayOnRotation()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->ToStickToRayOnRotation();
    return _result;
}

void Macad::Occt::AIS_ViewController::SetStickToRayOnRotation(bool theToEnable)
{
    ((::AIS_ViewController*)_NativeInstance)->SetStickToRayOnRotation(theToEnable);
}

bool Macad::Occt::AIS_ViewController::ToInvertPitch()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->ToInvertPitch();
    return _result;
}

void Macad::Occt::AIS_ViewController::SetInvertPitch(bool theToInvert)
{
    ((::AIS_ViewController*)_NativeInstance)->SetInvertPitch(theToInvert);
}

float Macad::Occt::AIS_ViewController::WalkSpeedAbsolute()
{
    float _result = ((::AIS_ViewController*)_NativeInstance)->WalkSpeedAbsolute();
    return _result;
}

void Macad::Occt::AIS_ViewController::SetWalkSpeedAbsolute(float theSpeed)
{
    ((::AIS_ViewController*)_NativeInstance)->SetWalkSpeedAbsolute(theSpeed);
}

float Macad::Occt::AIS_ViewController::WalkSpeedRelative()
{
    float _result = ((::AIS_ViewController*)_NativeInstance)->WalkSpeedRelative();
    return _result;
}

void Macad::Occt::AIS_ViewController::SetWalkSpeedRelative(float theFactor)
{
    ((::AIS_ViewController*)_NativeInstance)->SetWalkSpeedRelative(theFactor);
}

float Macad::Occt::AIS_ViewController::ThrustSpeed()
{
    float _result = ((::AIS_ViewController*)_NativeInstance)->ThrustSpeed();
    return _result;
}

void Macad::Occt::AIS_ViewController::SetThrustSpeed(float theSpeed)
{
    ((::AIS_ViewController*)_NativeInstance)->SetThrustSpeed(theSpeed);
}

bool Macad::Occt::AIS_ViewController::HasPreviousMoveTo()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->HasPreviousMoveTo();
    return _result;
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::AIS_ViewController::PreviousMoveTo()
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = (::Graphic3d_Vec2i)((::AIS_ViewController*)_NativeInstance)->PreviousMoveTo();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

void Macad::Occt::AIS_ViewController::ResetPreviousMoveTo()
{
    ((::AIS_ViewController*)_NativeInstance)->ResetPreviousMoveTo();
}

bool Macad::Occt::AIS_ViewController::ToDisplayXRAuxDevices()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->ToDisplayXRAuxDevices();
    return _result;
}

void Macad::Occt::AIS_ViewController::SetDisplayXRAuxDevices(bool theToDisplay)
{
    ((::AIS_ViewController*)_NativeInstance)->SetDisplayXRAuxDevices(theToDisplay);
}

bool Macad::Occt::AIS_ViewController::ToDisplayXRHands()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->ToDisplayXRHands();
    return _result;
}

void Macad::Occt::AIS_ViewController::SetDisplayXRHands(bool theToDisplay)
{
    ((::AIS_ViewController*)_NativeInstance)->SetDisplayXRHands(theToDisplay);
}

void Macad::Occt::AIS_ViewController::KeyDown(unsigned int theKey, double theTime, double thePressure)
{
    ((::AIS_ViewController*)_NativeInstance)->KeyDown(theKey, theTime, thePressure);
}

void Macad::Occt::AIS_ViewController::KeyDown(unsigned int theKey, double theTime)
{
    ((::AIS_ViewController*)_NativeInstance)->KeyDown(theKey, theTime, 1.);
}

void Macad::Occt::AIS_ViewController::KeyUp(unsigned int theKey, double theTime)
{
    ((::AIS_ViewController*)_NativeInstance)->KeyUp(theKey, theTime);
}

void Macad::Occt::AIS_ViewController::KeyFromAxis(unsigned int theNegative, unsigned int thePositive, double theTime, double thePressure)
{
    ((::AIS_ViewController*)_NativeInstance)->KeyFromAxis(theNegative, thePositive, theTime, thePressure);
}

Macad::Occt::AIS_WalkDelta^ Macad::Occt::AIS_ViewController::FetchNavigationKeys(double theCrouchRatio, double theRunRatio)
{
    ::AIS_WalkDelta* _result = new ::AIS_WalkDelta();
    *_result = ((::AIS_ViewController*)_NativeInstance)->FetchNavigationKeys(theCrouchRatio, theRunRatio);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::AIS_WalkDelta(_result);
}

Macad::Occt::AIS_MouseGestureMap^ Macad::Occt::AIS_ViewController::MouseGestureMap()
{
    ::AIS_MouseGestureMap* _result = new ::AIS_MouseGestureMap();
    *_result = (::AIS_MouseGestureMap)((::AIS_ViewController*)_NativeInstance)->MouseGestureMap();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::AIS_MouseGestureMap(_result);
}

Macad::Occt::AIS_MouseGestureMap^ Macad::Occt::AIS_ViewController::ChangeMouseGestureMap()
{
    ::AIS_MouseGestureMap* _result = new ::AIS_MouseGestureMap();
    *_result = ((::AIS_ViewController*)_NativeInstance)->ChangeMouseGestureMap();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::AIS_MouseGestureMap(_result);
}

Macad::Occt::AIS_MouseSelectionSchemeMap^ Macad::Occt::AIS_ViewController::MouseSelectionSchemes()
{
    ::AIS_MouseSelectionSchemeMap* _result = new ::AIS_MouseSelectionSchemeMap();
    *_result = (::AIS_MouseSelectionSchemeMap)((::AIS_ViewController*)_NativeInstance)->MouseSelectionSchemes();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::AIS_MouseSelectionSchemeMap(_result);
}

Macad::Occt::AIS_MouseSelectionSchemeMap^ Macad::Occt::AIS_ViewController::ChangeMouseSelectionSchemes()
{
    ::AIS_MouseSelectionSchemeMap* _result = new ::AIS_MouseSelectionSchemeMap();
    *_result = ((::AIS_ViewController*)_NativeInstance)->ChangeMouseSelectionSchemes();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::AIS_MouseSelectionSchemeMap(_result);
}

double Macad::Occt::AIS_ViewController::MouseDoubleClickInterval()
{
    double _result = ((::AIS_ViewController*)_NativeInstance)->MouseDoubleClickInterval();
    return _result;
}

void Macad::Occt::AIS_ViewController::SetMouseDoubleClickInterval(double theSeconds)
{
    ((::AIS_ViewController*)_NativeInstance)->SetMouseDoubleClickInterval(theSeconds);
}

void Macad::Occt::AIS_ViewController::SelectInViewer(Macad::Occt::Graphic3d_Vec2i^ thePnt, Macad::Occt::AIS_SelectionScheme theScheme)
{
    ((::AIS_ViewController*)_NativeInstance)->SelectInViewer(*(::Graphic3d_Vec2i*)thePnt->NativeInstance, (::AIS_SelectionScheme)theScheme);
}

void Macad::Occt::AIS_ViewController::SelectInViewer(Macad::Occt::Graphic3d_Vec2i^ thePnt)
{
    ((::AIS_ViewController*)_NativeInstance)->SelectInViewer(*(::Graphic3d_Vec2i*)thePnt->NativeInstance, AIS_SelectionScheme_Replace);
}

void Macad::Occt::AIS_ViewController::UpdateRubberBand(Macad::Occt::Graphic3d_Vec2i^ thePntFrom, Macad::Occt::Graphic3d_Vec2i^ thePntTo)
{
    ((::AIS_ViewController*)_NativeInstance)->UpdateRubberBand(*(::Graphic3d_Vec2i*)thePntFrom->NativeInstance, *(::Graphic3d_Vec2i*)thePntTo->NativeInstance);
}

void Macad::Occt::AIS_ViewController::UpdatePolySelection(Macad::Occt::Graphic3d_Vec2i^ thePnt, bool theToAppend)
{
    ((::AIS_ViewController*)_NativeInstance)->UpdatePolySelection(*(::Graphic3d_Vec2i*)thePnt->NativeInstance, theToAppend);
}

bool Macad::Occt::AIS_ViewController::UpdateZoom(Macad::Occt::Aspect_ScrollDelta^ theDelta)
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->UpdateZoom(*(::Aspect_ScrollDelta*)theDelta->NativeInstance);
    return _result;
}

bool Macad::Occt::AIS_ViewController::UpdateZRotation(double theAngle)
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->UpdateZRotation(theAngle);
    return _result;
}

bool Macad::Occt::AIS_ViewController::UpdateMouseScroll(Macad::Occt::Aspect_ScrollDelta^ theDelta)
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->UpdateMouseScroll(*(::Aspect_ScrollDelta*)theDelta->NativeInstance);
    return _result;
}

bool Macad::Occt::AIS_ViewController::UpdateMouseButtons(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButtons, unsigned int theModifiers, bool theIsEmulated)
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->UpdateMouseButtons(*(::Graphic3d_Vec2i*)thePoint->NativeInstance, theButtons, theModifiers, theIsEmulated);
    return _result;
}

bool Macad::Occt::AIS_ViewController::UpdateMousePosition(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButtons, unsigned int theModifiers, bool theIsEmulated)
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->UpdateMousePosition(*(::Graphic3d_Vec2i*)thePoint->NativeInstance, theButtons, theModifiers, theIsEmulated);
    return _result;
}

bool Macad::Occt::AIS_ViewController::UpdateMouseClick(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButton, unsigned int theModifiers, bool theIsDoubleClick)
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->UpdateMouseClick(*(::Graphic3d_Vec2i*)thePoint->NativeInstance, theButton, theModifiers, theIsDoubleClick);
    return _result;
}

float Macad::Occt::AIS_ViewController::TouchToleranceScale()
{
    float _result = ((::AIS_ViewController*)_NativeInstance)->TouchToleranceScale();
    return _result;
}

void Macad::Occt::AIS_ViewController::SetTouchToleranceScale(float theTolerance)
{
    ((::AIS_ViewController*)_NativeInstance)->SetTouchToleranceScale(theTolerance);
}

void Macad::Occt::AIS_ViewController::AddTouchPoint(long long unsigned int theId, Macad::Occt::Graphic3d_Vec2d^ thePnt, bool theClearBefore)
{
    ((::AIS_ViewController*)_NativeInstance)->AddTouchPoint(theId, *(::Graphic3d_Vec2d*)thePnt->NativeInstance, theClearBefore);
}

void Macad::Occt::AIS_ViewController::AddTouchPoint(long long unsigned int theId, Macad::Occt::Graphic3d_Vec2d^ thePnt)
{
    ((::AIS_ViewController*)_NativeInstance)->AddTouchPoint(theId, *(::Graphic3d_Vec2d*)thePnt->NativeInstance, false);
}

bool Macad::Occt::AIS_ViewController::RemoveTouchPoint(long long unsigned int theId, bool theClearSelectPnts)
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->RemoveTouchPoint(theId, theClearSelectPnts);
    return _result;
}

bool Macad::Occt::AIS_ViewController::RemoveTouchPoint(long long unsigned int theId)
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->RemoveTouchPoint(theId, false);
    return _result;
}

void Macad::Occt::AIS_ViewController::UpdateTouchPoint(long long unsigned int theId, Macad::Occt::Graphic3d_Vec2d^ thePnt)
{
    ((::AIS_ViewController*)_NativeInstance)->UpdateTouchPoint(theId, *(::Graphic3d_Vec2d*)thePnt->NativeInstance);
}

void Macad::Occt::AIS_ViewController::ProcessExpose()
{
    ((::AIS_ViewController*)_NativeInstance)->ProcessExpose();
}

void Macad::Occt::AIS_ViewController::ProcessConfigure(bool theIsResized)
{
    ((::AIS_ViewController*)_NativeInstance)->ProcessConfigure(theIsResized);
}

void Macad::Occt::AIS_ViewController::ProcessInput()
{
    ((::AIS_ViewController*)_NativeInstance)->ProcessInput();
}

void Macad::Occt::AIS_ViewController::ProcessFocus(bool theIsActivated)
{
    ((::AIS_ViewController*)_NativeInstance)->ProcessFocus(theIsActivated);
}

void Macad::Occt::AIS_ViewController::ProcessClose()
{
    ((::AIS_ViewController*)_NativeInstance)->ProcessClose();
}

void Macad::Occt::AIS_ViewController::ResetViewInput()
{
    ((::AIS_ViewController*)_NativeInstance)->ResetViewInput();
}

void Macad::Occt::AIS_ViewController::UpdateViewOrientation(Macad::Occt::V3d_TypeOfOrientation theOrientation, bool theToFitAll)
{
    ((::AIS_ViewController*)_NativeInstance)->UpdateViewOrientation((::V3d_TypeOfOrientation)theOrientation, theToFitAll);
}

void Macad::Occt::AIS_ViewController::FlushViewEvents(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView, bool theToHandle)
{
    ((::AIS_ViewController*)_NativeInstance)->FlushViewEvents(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance), theToHandle);
}

void Macad::Occt::AIS_ViewController::FlushViewEvents(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView)
{
    ((::AIS_ViewController*)_NativeInstance)->FlushViewEvents(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance), false);
}

void Macad::Occt::AIS_ViewController::HandleViewEvents(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView)
{
    ((::AIS_ViewController*)_NativeInstance)->HandleViewEvents(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance));
}

void Macad::Occt::AIS_ViewController::OnSelectionChanged(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView)
{
    ((::AIS_ViewController*)_NativeInstance)->OnSelectionChanged(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance));
}

void Macad::Occt::AIS_ViewController::OnObjectDragged(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView, Macad::Occt::AIS_DragAction theAction)
{
    ((::AIS_ViewController*)_NativeInstance)->OnObjectDragged(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance), (::AIS_DragAction)theAction);
}

void Macad::Occt::AIS_ViewController::OnSubviewChanged(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theOldView, Macad::Occt::V3d_View^ theNewView)
{
    ((::AIS_ViewController*)_NativeInstance)->OnSubviewChanged(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theOldView->NativeInstance), Handle(::V3d_View)(theNewView->NativeInstance));
}

bool Macad::Occt::AIS_ViewController::PickPoint(Macad::Occt::Pnt% thePnt, Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView, Macad::Occt::Graphic3d_Vec2i^ theCursor, bool theToStickToPickRay)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
    bool _result = ((::AIS_ViewController*)_NativeInstance)->PickPoint(*(gp_Pnt*)pp_thePnt, Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance), *(::Graphic3d_Vec2i*)theCursor->NativeInstance, theToStickToPickRay);
    return _result;
}

bool Macad::Occt::AIS_ViewController::PickAxis(Macad::Occt::Pnt% theTopPnt, Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView, Macad::Occt::Ax1 theAxis)
{
    pin_ptr<Macad::Occt::Pnt> pp_theTopPnt = &theTopPnt;
    pin_ptr<Macad::Occt::Ax1> pp_theAxis = &theAxis;
    bool _result = ((::AIS_ViewController*)_NativeInstance)->PickAxis(*(gp_Pnt*)pp_theTopPnt, Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance), *(gp_Ax1*)pp_theAxis);
    return _result;
}

Macad::Occt::Pnt Macad::Occt::AIS_ViewController::GravityPoint(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView)
{
    ::gp_Pnt _nativeResult = ((::AIS_ViewController*)_NativeInstance)->GravityPoint(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance));
    return Macad::Occt::Pnt(_nativeResult);
}

void Macad::Occt::AIS_ViewController::FitAllAuto(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView)
{
    ((::AIS_ViewController*)_NativeInstance)->FitAllAuto(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance));
}

void Macad::Occt::AIS_ViewController::handleViewOrientationKeys(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView)
{
    ((::AIS_ViewController*)_NativeInstance)->handleViewOrientationKeys(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance));
}

Macad::Occt::AIS_WalkDelta^ Macad::Occt::AIS_ViewController::handleNavigationKeys(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView)
{
    ::AIS_WalkDelta* _result = new ::AIS_WalkDelta();
    *_result = ((::AIS_ViewController*)_NativeInstance)->handleNavigationKeys(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance));
    return _result==nullptr ? nullptr : gcnew Macad::Occt::AIS_WalkDelta(_result);
}

void Macad::Occt::AIS_ViewController::handleCameraActions(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView, Macad::Occt::AIS_WalkDelta^ theWalk)
{
    ((::AIS_ViewController*)_NativeInstance)->handleCameraActions(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance), *(::AIS_WalkDelta*)theWalk->NativeInstance);
}

void Macad::Occt::AIS_ViewController::handleMoveTo(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView)
{
    ((::AIS_ViewController*)_NativeInstance)->handleMoveTo(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance));
}

bool Macad::Occt::AIS_ViewController::toAskNextFrame()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->toAskNextFrame();
    return _result;
}

void Macad::Occt::AIS_ViewController::setAskNextFrame(bool theToDraw)
{
    ((::AIS_ViewController*)_NativeInstance)->setAskNextFrame(theToDraw);
}

void Macad::Occt::AIS_ViewController::setAskNextFrame()
{
    ((::AIS_ViewController*)_NativeInstance)->setAskNextFrame(true);
}

bool Macad::Occt::AIS_ViewController::hasPanningAnchorPoint()
{
    bool _result = ((::AIS_ViewController*)_NativeInstance)->hasPanningAnchorPoint();
    return _result;
}

Macad::Occt::Pnt Macad::Occt::AIS_ViewController::panningAnchorPoint()
{
    ::gp_Pnt _nativeResult = ((::AIS_ViewController*)_NativeInstance)->panningAnchorPoint();
    return Macad::Occt::Pnt(_nativeResult);
}

void Macad::Occt::AIS_ViewController::setPanningAnchorPoint(Macad::Occt::Pnt thePnt)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
    ((::AIS_ViewController*)_NativeInstance)->setPanningAnchorPoint(*(gp_Pnt*)pp_thePnt);
}

void Macad::Occt::AIS_ViewController::handlePanning(Macad::Occt::V3d_View^ theView)
{
    ((::AIS_ViewController*)_NativeInstance)->handlePanning(Handle(::V3d_View)(theView->NativeInstance));
}

void Macad::Occt::AIS_ViewController::handleZRotate(Macad::Occt::V3d_View^ theView)
{
    ((::AIS_ViewController*)_NativeInstance)->handleZRotate(Handle(::V3d_View)(theView->NativeInstance));
}

double Macad::Occt::AIS_ViewController::MinZoomDistance()
{
    double _result = ((::AIS_ViewController*)_NativeInstance)->MinZoomDistance();
    return _result;
}

void Macad::Occt::AIS_ViewController::SetMinZoomDistance(double theDist)
{
    ((::AIS_ViewController*)_NativeInstance)->SetMinZoomDistance(theDist);
}

void Macad::Occt::AIS_ViewController::handleZoom(Macad::Occt::V3d_View^ theView, Macad::Occt::Aspect_ScrollDelta^ theParams, Macad::Occt::Pnt thePnt)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
    ((::AIS_ViewController*)_NativeInstance)->handleZoom(Handle(::V3d_View)(theView->NativeInstance), *(::Aspect_ScrollDelta*)theParams->NativeInstance, (gp_Pnt*)pp_thePnt);
}

void Macad::Occt::AIS_ViewController::handleZFocusScroll(Macad::Occt::V3d_View^ theView, Macad::Occt::Aspect_ScrollDelta^ theParams)
{
    ((::AIS_ViewController*)_NativeInstance)->handleZFocusScroll(Handle(::V3d_View)(theView->NativeInstance), *(::Aspect_ScrollDelta*)theParams->NativeInstance);
}

void Macad::Occt::AIS_ViewController::handleOrbitRotation(Macad::Occt::V3d_View^ theView, Macad::Occt::Pnt thePnt, bool theToLockZUp)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
    ((::AIS_ViewController*)_NativeInstance)->handleOrbitRotation(Handle(::V3d_View)(theView->NativeInstance), *(gp_Pnt*)pp_thePnt, theToLockZUp);
}

void Macad::Occt::AIS_ViewController::handleViewRotation(Macad::Occt::V3d_View^ theView, double theYawExtra, double thePitchExtra, double theRoll, bool theToRestartOnIncrement)
{
    ((::AIS_ViewController*)_NativeInstance)->handleViewRotation(Handle(::V3d_View)(theView->NativeInstance), theYawExtra, thePitchExtra, theRoll, theToRestartOnIncrement);
}

void Macad::Occt::AIS_ViewController::handleViewRedraw(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView)
{
    ((::AIS_ViewController*)_NativeInstance)->handleViewRedraw(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance));
}

void Macad::Occt::AIS_ViewController::handleXRInput(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView, Macad::Occt::AIS_WalkDelta^ theWalk)
{
    ((::AIS_ViewController*)_NativeInstance)->handleXRInput(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance), *(::AIS_WalkDelta*)theWalk->NativeInstance);
}

void Macad::Occt::AIS_ViewController::handleXRTurnPad(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView)
{
    ((::AIS_ViewController*)_NativeInstance)->handleXRTurnPad(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance));
}

void Macad::Occt::AIS_ViewController::handleXRTeleport(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView)
{
    ((::AIS_ViewController*)_NativeInstance)->handleXRTeleport(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance));
}

void Macad::Occt::AIS_ViewController::handleXRPicking(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView)
{
    ((::AIS_ViewController*)_NativeInstance)->handleXRPicking(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance));
}

void Macad::Occt::AIS_ViewController::handleXRHighlight(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView)
{
    ((::AIS_ViewController*)_NativeInstance)->handleXRHighlight(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance));
}

void Macad::Occt::AIS_ViewController::handleXRPresentations(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView)
{
    ((::AIS_ViewController*)_NativeInstance)->handleXRPresentations(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance));
}

int Macad::Occt::AIS_ViewController::handleXRMoveTo(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView, Macad::Occt::Trsf thePose, bool theToHighlight)
{
    pin_ptr<Macad::Occt::Trsf> pp_thePose = &thePose;
    int _result = ((::AIS_ViewController*)_NativeInstance)->handleXRMoveTo(Handle(::AIS_InteractiveContext)(theCtx->NativeInstance), Handle(::V3d_View)(theView->NativeInstance), *(gp_Trsf*)pp_thePose, theToHighlight);
    return _result;
}



//---------------------------------------------------------------------
//  Class  AIS_ViewCubeOwner
//---------------------------------------------------------------------

Macad::Occt::AIS_ViewCubeOwner::AIS_ViewCubeOwner(Macad::Occt::AIS_ViewCube^ theObject, Macad::Occt::V3d_TypeOfOrientation theOrient, int thePriority)
    : Macad::Occt::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ViewCubeOwner(Handle(::AIS_ViewCube)(theObject->NativeInstance), (::V3d_TypeOfOrientation)theOrient, thePriority);
}

Macad::Occt::AIS_ViewCubeOwner::AIS_ViewCubeOwner(Macad::Occt::AIS_ViewCube^ theObject, Macad::Occt::V3d_TypeOfOrientation theOrient)
    : Macad::Occt::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ViewCubeOwner(Handle(::AIS_ViewCube)(theObject->NativeInstance), (::V3d_TypeOfOrientation)theOrient, 5);
}

bool Macad::Occt::AIS_ViewCubeOwner::IsForcedHilight()
{
    bool _result = ((::AIS_ViewCubeOwner*)_NativeInstance)->IsForcedHilight();
    return _result;
}

Macad::Occt::V3d_TypeOfOrientation Macad::Occt::AIS_ViewCubeOwner::MainOrientation()
{
    ::V3d_TypeOfOrientation _result = ((::AIS_ViewCubeOwner*)_NativeInstance)->MainOrientation();
    return (Macad::Occt::V3d_TypeOfOrientation)_result;
}

bool Macad::Occt::AIS_ViewCubeOwner::HandleMouseClick(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButton, unsigned int theModifiers, bool theIsDoubleClick)
{
    bool _result = ((::AIS_ViewCubeOwner*)_NativeInstance)->HandleMouseClick(*(::Graphic3d_Vec2i*)thePoint->NativeInstance, theButton, theModifiers, theIsDoubleClick);
    return _result;
}

Macad::Occt::AIS_ViewCubeOwner^ Macad::Occt::AIS_ViewCubeOwner::CreateDowncasted(::AIS_ViewCubeOwner* instance)
{
    return gcnew Macad::Occt::AIS_ViewCubeOwner( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_ViewCube
//---------------------------------------------------------------------

Macad::Occt::AIS_ViewCube::AIS_ViewCube()
    : Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::AIS_ViewCube();
}

bool Macad::Occt::AIS_ViewCube::IsBoxSide(Macad::Occt::V3d_TypeOfOrientation theOrient)
{
    bool _result = ::AIS_ViewCube::IsBoxSide((::V3d_TypeOfOrientation)theOrient);
    return _result;
}

bool Macad::Occt::AIS_ViewCube::IsBoxEdge(Macad::Occt::V3d_TypeOfOrientation theOrient)
{
    bool _result = ::AIS_ViewCube::IsBoxEdge((::V3d_TypeOfOrientation)theOrient);
    return _result;
}

bool Macad::Occt::AIS_ViewCube::IsBoxCorner(Macad::Occt::V3d_TypeOfOrientation theOrient)
{
    bool _result = ::AIS_ViewCube::IsBoxCorner((::V3d_TypeOfOrientation)theOrient);
    return _result;
}

Macad::Occt::AIS_AnimationCamera^ Macad::Occt::AIS_ViewCube::ViewAnimation()
{
    Handle(::AIS_AnimationCamera) _result = ((::AIS_ViewCube*)_NativeInstance)->ViewAnimation();
    return _result.IsNull() ? nullptr : Macad::Occt::AIS_AnimationCamera::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_ViewCube::SetViewAnimation(Macad::Occt::AIS_AnimationCamera^ theAnimation)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetViewAnimation(Handle(::AIS_AnimationCamera)(theAnimation->NativeInstance));
}

bool Macad::Occt::AIS_ViewCube::ToAutoStartAnimation()
{
    bool _result = ((::AIS_ViewCube*)_NativeInstance)->ToAutoStartAnimation();
    return _result;
}

void Macad::Occt::AIS_ViewCube::SetAutoStartAnimation(bool theToEnable)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetAutoStartAnimation(theToEnable);
}

bool Macad::Occt::AIS_ViewCube::IsFixedAnimationLoop()
{
    bool _result = ((::AIS_ViewCube*)_NativeInstance)->IsFixedAnimationLoop();
    return _result;
}

void Macad::Occt::AIS_ViewCube::SetFixedAnimationLoop(bool theToEnable)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetFixedAnimationLoop(theToEnable);
}

void Macad::Occt::AIS_ViewCube::ResetStyles()
{
    ((::AIS_ViewCube*)_NativeInstance)->ResetStyles();
}

double Macad::Occt::AIS_ViewCube::Size()
{
    double _result = ((::AIS_ViewCube*)_NativeInstance)->Size();
    return _result;
}

void Macad::Occt::AIS_ViewCube::SetSize(double theValue, bool theToAdaptAnother)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetSize(theValue, theToAdaptAnother);
}

void Macad::Occt::AIS_ViewCube::SetSize(double theValue)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetSize(theValue, true);
}

double Macad::Occt::AIS_ViewCube::BoxFacetExtension()
{
    double _result = ((::AIS_ViewCube*)_NativeInstance)->BoxFacetExtension();
    return _result;
}

void Macad::Occt::AIS_ViewCube::SetBoxFacetExtension(double theValue)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetBoxFacetExtension(theValue);
}

double Macad::Occt::AIS_ViewCube::AxesPadding()
{
    double _result = ((::AIS_ViewCube*)_NativeInstance)->AxesPadding();
    return _result;
}

void Macad::Occt::AIS_ViewCube::SetAxesPadding(double theValue)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetAxesPadding(theValue);
}

double Macad::Occt::AIS_ViewCube::BoxEdgeGap()
{
    double _result = ((::AIS_ViewCube*)_NativeInstance)->BoxEdgeGap();
    return _result;
}

void Macad::Occt::AIS_ViewCube::SetBoxEdgeGap(double theValue)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetBoxEdgeGap(theValue);
}

double Macad::Occt::AIS_ViewCube::BoxEdgeMinSize()
{
    double _result = ((::AIS_ViewCube*)_NativeInstance)->BoxEdgeMinSize();
    return _result;
}

void Macad::Occt::AIS_ViewCube::SetBoxEdgeMinSize(double theValue)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetBoxEdgeMinSize(theValue);
}

double Macad::Occt::AIS_ViewCube::BoxCornerMinSize()
{
    double _result = ((::AIS_ViewCube*)_NativeInstance)->BoxCornerMinSize();
    return _result;
}

void Macad::Occt::AIS_ViewCube::SetBoxCornerMinSize(double theValue)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetBoxCornerMinSize(theValue);
}

double Macad::Occt::AIS_ViewCube::RoundRadius()
{
    double _result = ((::AIS_ViewCube*)_NativeInstance)->RoundRadius();
    return _result;
}

void Macad::Occt::AIS_ViewCube::SetRoundRadius(double theValue)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetRoundRadius(theValue);
}

double Macad::Occt::AIS_ViewCube::AxesRadius()
{
    double _result = ((::AIS_ViewCube*)_NativeInstance)->AxesRadius();
    return _result;
}

void Macad::Occt::AIS_ViewCube::SetAxesRadius(double theRadius)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetAxesRadius(theRadius);
}

double Macad::Occt::AIS_ViewCube::AxesConeRadius()
{
    double _result = ((::AIS_ViewCube*)_NativeInstance)->AxesConeRadius();
    return _result;
}

void Macad::Occt::AIS_ViewCube::SetAxesConeRadius(double theRadius)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetAxesConeRadius(theRadius);
}

double Macad::Occt::AIS_ViewCube::AxesSphereRadius()
{
    double _result = ((::AIS_ViewCube*)_NativeInstance)->AxesSphereRadius();
    return _result;
}

void Macad::Occt::AIS_ViewCube::SetAxesSphereRadius(double theRadius)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetAxesSphereRadius(theRadius);
}

bool Macad::Occt::AIS_ViewCube::ToDrawAxes()
{
    bool _result = ((::AIS_ViewCube*)_NativeInstance)->ToDrawAxes();
    return _result;
}

void Macad::Occt::AIS_ViewCube::SetDrawAxes(bool theValue)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetDrawAxes(theValue);
}

bool Macad::Occt::AIS_ViewCube::ToDrawEdges()
{
    bool _result = ((::AIS_ViewCube*)_NativeInstance)->ToDrawEdges();
    return _result;
}

void Macad::Occt::AIS_ViewCube::SetDrawEdges(bool theValue)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetDrawEdges(theValue);
}

bool Macad::Occt::AIS_ViewCube::ToDrawVertices()
{
    bool _result = ((::AIS_ViewCube*)_NativeInstance)->ToDrawVertices();
    return _result;
}

void Macad::Occt::AIS_ViewCube::SetDrawVertices(bool theValue)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetDrawVertices(theValue);
}

bool Macad::Occt::AIS_ViewCube::IsYup()
{
    bool _result = ((::AIS_ViewCube*)_NativeInstance)->IsYup();
    return _result;
}

void Macad::Occt::AIS_ViewCube::SetYup(bool theIsYup, bool theToUpdateLabels)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetYup(theIsYup, theToUpdateLabels);
}

void Macad::Occt::AIS_ViewCube::SetYup(bool theIsYup)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetYup(theIsYup, true);
}

Macad::Occt::Prs3d_ShadingAspect^ Macad::Occt::AIS_ViewCube::BoxSideStyle()
{
    Handle(::Prs3d_ShadingAspect) _result = ((::AIS_ViewCube*)_NativeInstance)->BoxSideStyle();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_ShadingAspect::CreateDowncasted(_result.get());
}

Macad::Occt::Prs3d_ShadingAspect^ Macad::Occt::AIS_ViewCube::BoxEdgeStyle()
{
    Handle(::Prs3d_ShadingAspect) _result = ((::AIS_ViewCube*)_NativeInstance)->BoxEdgeStyle();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_ShadingAspect::CreateDowncasted(_result.get());
}

Macad::Occt::Prs3d_ShadingAspect^ Macad::Occt::AIS_ViewCube::BoxCornerStyle()
{
    Handle(::Prs3d_ShadingAspect) _result = ((::AIS_ViewCube*)_NativeInstance)->BoxCornerStyle();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_ShadingAspect::CreateDowncasted(_result.get());
}

Macad::Occt::Quantity_Color^ Macad::Occt::AIS_ViewCube::BoxColor()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::AIS_ViewCube*)_NativeInstance)->BoxColor();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::AIS_ViewCube::SetBoxColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetBoxColor(*(::Quantity_Color*)theColor->NativeInstance);
}

double Macad::Occt::AIS_ViewCube::BoxTransparency()
{
    double _result = ((::AIS_ViewCube*)_NativeInstance)->BoxTransparency();
    return _result;
}

void Macad::Occt::AIS_ViewCube::SetBoxTransparency(double theValue)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetBoxTransparency(theValue);
}

Macad::Occt::Quantity_Color^ Macad::Occt::AIS_ViewCube::InnerColor()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::AIS_ViewCube*)_NativeInstance)->InnerColor();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::AIS_ViewCube::SetInnerColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetInnerColor(*(::Quantity_Color*)theColor->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::AIS_ViewCube::BoxSideLabel(Macad::Occt::V3d_TypeOfOrientation theSide)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::AIS_ViewCube*)_NativeInstance)->BoxSideLabel((::V3d_TypeOfOrientation)theSide);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::AIS_ViewCube::SetBoxSideLabel(Macad::Occt::V3d_TypeOfOrientation theSide, Macad::Occt::TCollection_AsciiString^ theLabel)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetBoxSideLabel((::V3d_TypeOfOrientation)theSide, *(::TCollection_AsciiString*)theLabel->NativeInstance);
}

Macad::Occt::Quantity_Color^ Macad::Occt::AIS_ViewCube::TextColor()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::AIS_ViewCube*)_NativeInstance)->TextColor();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::AIS_ViewCube::SetTextColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetTextColor(*(::Quantity_Color*)theColor->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::AIS_ViewCube::Font()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::AIS_ViewCube*)_NativeInstance)->Font();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::AIS_ViewCube::SetFont(Macad::Occt::TCollection_AsciiString^ theFont)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetFont(*(::TCollection_AsciiString*)theFont->NativeInstance);
}

double Macad::Occt::AIS_ViewCube::FontHeight()
{
    double _result = ((::AIS_ViewCube*)_NativeInstance)->FontHeight();
    return _result;
}

void Macad::Occt::AIS_ViewCube::SetFontHeight(double theValue)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetFontHeight(theValue);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::AIS_ViewCube::AxisLabel(Macad::Occt::Prs3d_DatumParts theAxis)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::AIS_ViewCube*)_NativeInstance)->AxisLabel((::Prs3d_DatumParts)theAxis);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::AIS_ViewCube::SetAxesLabels(Macad::Occt::TCollection_AsciiString^ theX, Macad::Occt::TCollection_AsciiString^ theY, Macad::Occt::TCollection_AsciiString^ theZ)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetAxesLabels(*(::TCollection_AsciiString*)theX->NativeInstance, *(::TCollection_AsciiString*)theY->NativeInstance, *(::TCollection_AsciiString*)theZ->NativeInstance);
}

void Macad::Occt::AIS_ViewCube::SetColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::AIS_ViewCube::UnsetColor()
{
    ((::AIS_ViewCube*)_NativeInstance)->UnsetColor();
}

void Macad::Occt::AIS_ViewCube::SetTransparency(double theValue)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetTransparency(theValue);
}

void Macad::Occt::AIS_ViewCube::UnsetTransparency()
{
    ((::AIS_ViewCube*)_NativeInstance)->UnsetTransparency();
}

void Macad::Occt::AIS_ViewCube::SetMaterial(Macad::Occt::Graphic3d_MaterialAspect^ theMat)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetMaterial(*(::Graphic3d_MaterialAspect*)theMat->NativeInstance);
}

void Macad::Occt::AIS_ViewCube::UnsetMaterial()
{
    ((::AIS_ViewCube*)_NativeInstance)->UnsetMaterial();
}

double Macad::Occt::AIS_ViewCube::Duration()
{
    double _result = ((::AIS_ViewCube*)_NativeInstance)->Duration();
    return _result;
}

void Macad::Occt::AIS_ViewCube::SetDuration(double theValue)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetDuration(theValue);
}

bool Macad::Occt::AIS_ViewCube::ToResetCameraUp()
{
    bool _result = ((::AIS_ViewCube*)_NativeInstance)->ToResetCameraUp();
    return _result;
}

void Macad::Occt::AIS_ViewCube::SetResetCamera(bool theToReset)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetResetCamera(theToReset);
}

bool Macad::Occt::AIS_ViewCube::ToFitSelected()
{
    bool _result = ((::AIS_ViewCube*)_NativeInstance)->ToFitSelected();
    return _result;
}

void Macad::Occt::AIS_ViewCube::SetFitSelected(bool theToFitSelected)
{
    ((::AIS_ViewCube*)_NativeInstance)->SetFitSelected(theToFitSelected);
}

bool Macad::Occt::AIS_ViewCube::HasAnimation()
{
    bool _result = ((::AIS_ViewCube*)_NativeInstance)->HasAnimation();
    return _result;
}

void Macad::Occt::AIS_ViewCube::StartAnimation(Macad::Occt::AIS_ViewCubeOwner^ theOwner)
{
    ((::AIS_ViewCube*)_NativeInstance)->StartAnimation(Handle(::AIS_ViewCubeOwner)(theOwner->NativeInstance));
}

bool Macad::Occt::AIS_ViewCube::UpdateAnimation(bool theToUpdate)
{
    bool _result = ((::AIS_ViewCube*)_NativeInstance)->UpdateAnimation(theToUpdate);
    return _result;
}

void Macad::Occt::AIS_ViewCube::HandleClick(Macad::Occt::AIS_ViewCubeOwner^ theOwner)
{
    ((::AIS_ViewCube*)_NativeInstance)->HandleClick(Handle(::AIS_ViewCubeOwner)(theOwner->NativeInstance));
}

bool Macad::Occt::AIS_ViewCube::AcceptDisplayMode(int theMode)
{
    bool _result = ((::AIS_ViewCube*)_NativeInstance)->AcceptDisplayMode(theMode);
    return _result;
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_ViewCube::GlobalSelOwner()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::AIS_ViewCube*)_NativeInstance)->GlobalSelOwner();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

void Macad::Occt::AIS_ViewCube::Compute(Macad::Occt::PrsMgr_PresentationManager^ thePrsMgr, Macad::Occt::Graphic3d_Structure^ thePrs, int theMode)
{
    ((::AIS_ViewCube*)_NativeInstance)->Compute(Handle(::PrsMgr_PresentationManager)(thePrsMgr->NativeInstance), Handle(::Graphic3d_Structure)(thePrs->NativeInstance), theMode);
}

void Macad::Occt::AIS_ViewCube::Compute(Macad::Occt::PrsMgr_PresentationManager^ thePrsMgr, Macad::Occt::Graphic3d_Structure^ thePrs)
{
    ((::AIS_ViewCube*)_NativeInstance)->Compute(Handle(::PrsMgr_PresentationManager)(thePrsMgr->NativeInstance), Handle(::Graphic3d_Structure)(thePrs->NativeInstance), 0);
}

void Macad::Occt::AIS_ViewCube::ComputeSelection(Macad::Occt::SelectMgr_Selection^ theSelection, int theMode)
{
    ((::AIS_ViewCube*)_NativeInstance)->ComputeSelection(Handle(::SelectMgr_Selection)(theSelection->NativeInstance), theMode);
}

bool Macad::Occt::AIS_ViewCube::IsAutoHilight()
{
    bool _result = ((::AIS_ViewCube*)_NativeInstance)->IsAutoHilight();
    return _result;
}

void Macad::Occt::AIS_ViewCube::ClearSelected()
{
    ((::AIS_ViewCube*)_NativeInstance)->ClearSelected();
}

void Macad::Occt::AIS_ViewCube::HilightOwnerWithColor(Macad::Occt::PrsMgr_PresentationManager^ thePM, Macad::Occt::Prs3d_Drawer^ theStyle, Macad::Occt::SelectMgr_EntityOwner^ theOwner)
{
    ((::AIS_ViewCube*)_NativeInstance)->HilightOwnerWithColor(Handle(::PrsMgr_PresentationManager)(thePM->NativeInstance), Handle(::Prs3d_Drawer)(theStyle->NativeInstance), Handle(::SelectMgr_EntityOwner)(theOwner->NativeInstance));
}

void Macad::Occt::AIS_ViewCube::HilightSelected(Macad::Occt::PrsMgr_PresentationManager^ thePM, Macad::Occt::SelectMgr_SequenceOfOwner^ theSeq)
{
    ((::AIS_ViewCube*)_NativeInstance)->HilightSelected(Handle(::PrsMgr_PresentationManager)(thePM->NativeInstance), *(::SelectMgr_SequenceOfOwner*)theSeq->NativeInstance);
}

void Macad::Occt::AIS_ViewCube::UnsetAttributes()
{
    ((::AIS_ViewCube*)_NativeInstance)->UnsetAttributes();
}

void Macad::Occt::AIS_ViewCube::UnsetHilightAttributes()
{
    ((::AIS_ViewCube*)_NativeInstance)->UnsetHilightAttributes();
}

Macad::Occt::AIS_ViewCube^ Macad::Occt::AIS_ViewCube::CreateDowncasted(::AIS_ViewCube* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    
    return gcnew Macad::Occt::AIS_ViewCube( instance );
}


