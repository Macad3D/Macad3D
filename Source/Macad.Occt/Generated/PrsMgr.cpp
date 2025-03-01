// Generated wrapper code for package PrsMgr

#include "OcctPCH.h"
#include "PrsMgr.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "Graphic3d.h"
#include "SelectMgr.h"
#include "StdSelect.h"
#include "Prs3d.h"
#include "TopLoc.h"
#include "gp.h"
#include "Bnd.h"
#include "Aspect.h"
#include "Quantity.h"
#include "TColStd.h"
#include "V3d.h"


//---------------------------------------------------------------------
//  Class  PrsMgr_ListOfPresentableObjects
//---------------------------------------------------------------------

Macad::Occt::PrsMgr_ListOfPresentableObjects::PrsMgr_ListOfPresentableObjects()
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::PrsMgr_ListOfPresentableObjects();
}

Macad::Occt::PrsMgr_ListOfPresentableObjects::PrsMgr_ListOfPresentableObjects(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::PrsMgr_ListOfPresentableObjects(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::PrsMgr_ListOfPresentableObjects::Size()
{
    int _result = ((::PrsMgr_ListOfPresentableObjects*)_NativeInstance)->Size();
    return _result;
}

Macad::Occt::PrsMgr_ListOfPresentableObjects^ Macad::Occt::PrsMgr_ListOfPresentableObjects::Assign(Macad::Occt::PrsMgr_ListOfPresentableObjects^ theOther)
{
    ::PrsMgr_ListOfPresentableObjects* _result = new ::PrsMgr_ListOfPresentableObjects();
    *_result = ((::PrsMgr_ListOfPresentableObjects*)_NativeInstance)->Assign(*(::PrsMgr_ListOfPresentableObjects*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::PrsMgr_ListOfPresentableObjects(_result);
}

void Macad::Occt::PrsMgr_ListOfPresentableObjects::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::PrsMgr_ListOfPresentableObjects*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::PrsMgr_ListOfPresentableObjects::Clear()
{
    ((::PrsMgr_ListOfPresentableObjects*)_NativeInstance)->Clear(0L);
}

Macad::Occt::PrsMgr_PresentableObject^ Macad::Occt::PrsMgr_ListOfPresentableObjects::First()
{
    Handle(::PrsMgr_PresentableObject) _result = ((::PrsMgr_ListOfPresentableObjects*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::PrsMgr_PresentableObject::CreateDowncasted(_result.get());
}

Macad::Occt::PrsMgr_PresentableObject^ Macad::Occt::PrsMgr_ListOfPresentableObjects::Last()
{
    Handle(::PrsMgr_PresentableObject) _result = ((::PrsMgr_ListOfPresentableObjects*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::PrsMgr_PresentableObject::CreateDowncasted(_result.get());
}

Macad::Occt::PrsMgr_PresentableObject^ Macad::Occt::PrsMgr_ListOfPresentableObjects::Append(Macad::Occt::PrsMgr_PresentableObject^ theItem)
{
    Handle(::PrsMgr_PresentableObject) _result = ((::PrsMgr_ListOfPresentableObjects*)_NativeInstance)->Append(Handle(::PrsMgr_PresentableObject)(theItem->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::PrsMgr_PresentableObject::CreateDowncasted(_result.get());
}

Macad::Occt::PrsMgr_PresentableObject^ Macad::Occt::PrsMgr_ListOfPresentableObjects::Prepend(Macad::Occt::PrsMgr_PresentableObject^ theItem)
{
    Handle(::PrsMgr_PresentableObject) _result = ((::PrsMgr_ListOfPresentableObjects*)_NativeInstance)->Prepend(Handle(::PrsMgr_PresentableObject)(theItem->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::PrsMgr_PresentableObject::CreateDowncasted(_result.get());
}

void Macad::Occt::PrsMgr_ListOfPresentableObjects::RemoveFirst()
{
    ((::PrsMgr_ListOfPresentableObjects*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::PrsMgr_ListOfPresentableObjects::Remove(Macad::Occt::PrsMgr_ListOfPresentableObjects::Iterator^ theIter)
{
    ((::PrsMgr_ListOfPresentableObjects*)_NativeInstance)->Remove(*(::PrsMgr_ListOfPresentableObjects::Iterator*)theIter->NativeInstance);
}

Macad::Occt::PrsMgr_PresentableObject^ Macad::Occt::PrsMgr_ListOfPresentableObjects::InsertBefore(Macad::Occt::PrsMgr_PresentableObject^ theItem, Macad::Occt::PrsMgr_ListOfPresentableObjects::Iterator^ theIter)
{
    Handle(::PrsMgr_PresentableObject) _result = ((::PrsMgr_ListOfPresentableObjects*)_NativeInstance)->InsertBefore(Handle(::PrsMgr_PresentableObject)(theItem->NativeInstance), *(::PrsMgr_ListOfPresentableObjects::Iterator*)theIter->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::PrsMgr_PresentableObject::CreateDowncasted(_result.get());
}

Macad::Occt::PrsMgr_PresentableObject^ Macad::Occt::PrsMgr_ListOfPresentableObjects::InsertAfter(Macad::Occt::PrsMgr_PresentableObject^ theItem, Macad::Occt::PrsMgr_ListOfPresentableObjects::Iterator^ theIter)
{
    Handle(::PrsMgr_PresentableObject) _result = ((::PrsMgr_ListOfPresentableObjects*)_NativeInstance)->InsertAfter(Handle(::PrsMgr_PresentableObject)(theItem->NativeInstance), *(::PrsMgr_ListOfPresentableObjects::Iterator*)theIter->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::PrsMgr_PresentableObject::CreateDowncasted(_result.get());
}

void Macad::Occt::PrsMgr_ListOfPresentableObjects::Reverse()
{
    ((::PrsMgr_ListOfPresentableObjects*)_NativeInstance)->Reverse();
}



//---------------------------------------------------------------------
//  Class  PrsMgr_ListOfPresentableObjects::Iterator
//---------------------------------------------------------------------

Macad::Occt::PrsMgr_ListOfPresentableObjects::Iterator::Iterator()
    : Macad::Occt::BaseClass<::PrsMgr_ListOfPresentableObjects::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::PrsMgr_ListOfPresentableObjects::Iterator();
}

bool Macad::Occt::PrsMgr_ListOfPresentableObjects::Iterator::More()
{
    bool _result = ((::PrsMgr_ListOfPresentableObjects::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::PrsMgr_ListOfPresentableObjects::Iterator::Next()
{
    ((::PrsMgr_ListOfPresentableObjects::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::PrsMgr_PresentableObject^ Macad::Occt::PrsMgr_ListOfPresentableObjects::Iterator::Value()
{
    Handle(::PrsMgr_PresentableObject) _result = ((::PrsMgr_ListOfPresentableObjects::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::PrsMgr_PresentableObject::CreateDowncasted(_result.get());
}

Macad::Occt::PrsMgr_PresentableObject^ Macad::Occt::PrsMgr_ListOfPresentableObjects::Iterator::ChangeValue()
{
    Handle(::PrsMgr_PresentableObject) _result = ((::PrsMgr_ListOfPresentableObjects::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::PrsMgr_PresentableObject::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  PrsMgr_ListOfPresentations
//---------------------------------------------------------------------

Macad::Occt::PrsMgr_ListOfPresentations::PrsMgr_ListOfPresentations()
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::PrsMgr_ListOfPresentations();
}

Macad::Occt::PrsMgr_ListOfPresentations::PrsMgr_ListOfPresentations(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::PrsMgr_ListOfPresentations(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::PrsMgr_ListOfPresentations::Size()
{
    int _result = ((::PrsMgr_ListOfPresentations*)_NativeInstance)->Size();
    return _result;
}

Macad::Occt::PrsMgr_ListOfPresentations^ Macad::Occt::PrsMgr_ListOfPresentations::Assign(Macad::Occt::PrsMgr_ListOfPresentations^ theOther)
{
    ::PrsMgr_ListOfPresentations* _result = new ::PrsMgr_ListOfPresentations();
    *_result = ((::PrsMgr_ListOfPresentations*)_NativeInstance)->Assign(*(::PrsMgr_ListOfPresentations*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::PrsMgr_ListOfPresentations(_result);
}

void Macad::Occt::PrsMgr_ListOfPresentations::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::PrsMgr_ListOfPresentations*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::PrsMgr_ListOfPresentations::Clear()
{
    ((::PrsMgr_ListOfPresentations*)_NativeInstance)->Clear(0L);
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::PrsMgr_ListOfPresentations::First()
{
    Handle(::Graphic3d_Structure) _result = ((::PrsMgr_ListOfPresentations*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::PrsMgr_ListOfPresentations::Last()
{
    Handle(::Graphic3d_Structure) _result = ((::PrsMgr_ListOfPresentations*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::PrsMgr_ListOfPresentations::Append(Macad::Occt::Graphic3d_Structure^ theItem)
{
    Handle(::Graphic3d_Structure) _result = ((::PrsMgr_ListOfPresentations*)_NativeInstance)->Append(Handle(::Graphic3d_Structure)(theItem->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::PrsMgr_ListOfPresentations::Prepend(Macad::Occt::Graphic3d_Structure^ theItem)
{
    Handle(::Graphic3d_Structure) _result = ((::PrsMgr_ListOfPresentations*)_NativeInstance)->Prepend(Handle(::Graphic3d_Structure)(theItem->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted(_result.get());
}

void Macad::Occt::PrsMgr_ListOfPresentations::RemoveFirst()
{
    ((::PrsMgr_ListOfPresentations*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::PrsMgr_ListOfPresentations::Remove(Macad::Occt::PrsMgr_ListOfPresentations::Iterator^ theIter)
{
    ((::PrsMgr_ListOfPresentations*)_NativeInstance)->Remove(*(::PrsMgr_ListOfPresentations::Iterator*)theIter->NativeInstance);
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::PrsMgr_ListOfPresentations::InsertBefore(Macad::Occt::Graphic3d_Structure^ theItem, Macad::Occt::PrsMgr_ListOfPresentations::Iterator^ theIter)
{
    Handle(::Graphic3d_Structure) _result = ((::PrsMgr_ListOfPresentations*)_NativeInstance)->InsertBefore(Handle(::Graphic3d_Structure)(theItem->NativeInstance), *(::PrsMgr_ListOfPresentations::Iterator*)theIter->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::PrsMgr_ListOfPresentations::InsertAfter(Macad::Occt::Graphic3d_Structure^ theItem, Macad::Occt::PrsMgr_ListOfPresentations::Iterator^ theIter)
{
    Handle(::Graphic3d_Structure) _result = ((::PrsMgr_ListOfPresentations*)_NativeInstance)->InsertAfter(Handle(::Graphic3d_Structure)(theItem->NativeInstance), *(::PrsMgr_ListOfPresentations::Iterator*)theIter->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted(_result.get());
}

void Macad::Occt::PrsMgr_ListOfPresentations::Reverse()
{
    ((::PrsMgr_ListOfPresentations*)_NativeInstance)->Reverse();
}



//---------------------------------------------------------------------
//  Class  PrsMgr_ListOfPresentations::Iterator
//---------------------------------------------------------------------

Macad::Occt::PrsMgr_ListOfPresentations::Iterator::Iterator()
    : Macad::Occt::BaseClass<::PrsMgr_ListOfPresentations::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::PrsMgr_ListOfPresentations::Iterator();
}

bool Macad::Occt::PrsMgr_ListOfPresentations::Iterator::More()
{
    bool _result = ((::PrsMgr_ListOfPresentations::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::PrsMgr_ListOfPresentations::Iterator::Next()
{
    ((::PrsMgr_ListOfPresentations::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::PrsMgr_ListOfPresentations::Iterator::Value()
{
    Handle(::Graphic3d_Structure) _result = ((::PrsMgr_ListOfPresentations::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::PrsMgr_ListOfPresentations::Iterator::ChangeValue()
{
    Handle(::Graphic3d_Structure) _result = ((::PrsMgr_ListOfPresentations::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  PrsMgr_Presentations
//---------------------------------------------------------------------

Macad::Occt::PrsMgr_Presentations::PrsMgr_Presentations()
    : Macad::Occt::BaseClass<::PrsMgr_Presentations>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::PrsMgr_Presentations();
}

Macad::Occt::PrsMgr_Presentations::PrsMgr_Presentations(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::PrsMgr_Presentations>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::PrsMgr_Presentations(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::PrsMgr_Presentations::Size()
{
    int _result = ((::PrsMgr_Presentations*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::PrsMgr_Presentations::Length()
{
    int _result = ((::PrsMgr_Presentations*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::PrsMgr_Presentations::Lower()
{
    int _result = ((::PrsMgr_Presentations*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::PrsMgr_Presentations::Upper()
{
    int _result = ((::PrsMgr_Presentations*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::PrsMgr_Presentations::IsEmpty()
{
    bool _result = ((::PrsMgr_Presentations*)_NativeInstance)->IsEmpty();
    return _result;
}

void Macad::Occt::PrsMgr_Presentations::Reverse()
{
    ((::PrsMgr_Presentations*)_NativeInstance)->Reverse();
}

void Macad::Occt::PrsMgr_Presentations::Exchange(int I, int J)
{
    ((::PrsMgr_Presentations*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::PrsMgr_Presentations::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::PrsMgr_Presentations*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::PrsMgr_Presentations::Clear()
{
    ((::PrsMgr_Presentations*)_NativeInstance)->Clear(0L);
}

Macad::Occt::PrsMgr_Presentations^ Macad::Occt::PrsMgr_Presentations::Assign(Macad::Occt::PrsMgr_Presentations^ theOther)
{
    ::PrsMgr_Presentations* _result = new ::PrsMgr_Presentations();
    *_result = ((::PrsMgr_Presentations*)_NativeInstance)->Assign(*(::PrsMgr_Presentations*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::PrsMgr_Presentations(_result);
}

void Macad::Occt::PrsMgr_Presentations::Remove(Macad::Occt::PrsMgr_Presentations::Iterator^ thePosition)
{
    ((::PrsMgr_Presentations*)_NativeInstance)->Remove(*(::PrsMgr_Presentations::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::PrsMgr_Presentations::Append(Macad::Occt::PrsMgr_Presentation^ theItem)
{
    ((::PrsMgr_Presentations*)_NativeInstance)->Append(Handle(::PrsMgr_Presentation)(theItem->NativeInstance));
}

void Macad::Occt::PrsMgr_Presentations::Prepend(Macad::Occt::PrsMgr_Presentation^ theItem)
{
    ((::PrsMgr_Presentations*)_NativeInstance)->Prepend(Handle(::PrsMgr_Presentation)(theItem->NativeInstance));
}

void Macad::Occt::PrsMgr_Presentations::InsertBefore(int theIndex, Macad::Occt::PrsMgr_Presentation^ theItem)
{
    ((::PrsMgr_Presentations*)_NativeInstance)->InsertBefore(theIndex, Handle(::PrsMgr_Presentation)(theItem->NativeInstance));
}

void Macad::Occt::PrsMgr_Presentations::InsertAfter(Macad::Occt::PrsMgr_Presentations::Iterator^ thePosition, Macad::Occt::PrsMgr_Presentation^ theItem)
{
    ((::PrsMgr_Presentations*)_NativeInstance)->InsertAfter(*(::PrsMgr_Presentations::Iterator*)thePosition->NativeInstance, Handle(::PrsMgr_Presentation)(theItem->NativeInstance));
}

void Macad::Occt::PrsMgr_Presentations::Split(int theIndex, Macad::Occt::PrsMgr_Presentations^ theSeq)
{
    ((::PrsMgr_Presentations*)_NativeInstance)->Split(theIndex, *(::PrsMgr_Presentations*)theSeq->NativeInstance);
}

Macad::Occt::PrsMgr_Presentation^ Macad::Occt::PrsMgr_Presentations::First()
{
    Handle(::PrsMgr_Presentation) _result = ((::PrsMgr_Presentations*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::PrsMgr_Presentation::CreateDowncasted(_result.get());
}

Macad::Occt::PrsMgr_Presentation^ Macad::Occt::PrsMgr_Presentations::ChangeFirst()
{
    Handle(::PrsMgr_Presentation) _result = ((::PrsMgr_Presentations*)_NativeInstance)->ChangeFirst();
    return _result.IsNull() ? nullptr : Macad::Occt::PrsMgr_Presentation::CreateDowncasted(_result.get());
}

Macad::Occt::PrsMgr_Presentation^ Macad::Occt::PrsMgr_Presentations::Last()
{
    Handle(::PrsMgr_Presentation) _result = ((::PrsMgr_Presentations*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::PrsMgr_Presentation::CreateDowncasted(_result.get());
}

Macad::Occt::PrsMgr_Presentation^ Macad::Occt::PrsMgr_Presentations::ChangeLast()
{
    Handle(::PrsMgr_Presentation) _result = ((::PrsMgr_Presentations*)_NativeInstance)->ChangeLast();
    return _result.IsNull() ? nullptr : Macad::Occt::PrsMgr_Presentation::CreateDowncasted(_result.get());
}

Macad::Occt::PrsMgr_Presentation^ Macad::Occt::PrsMgr_Presentations::Value(int theIndex)
{
    Handle(::PrsMgr_Presentation) _result = ((::PrsMgr_Presentations*)_NativeInstance)->Value(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::PrsMgr_Presentation::CreateDowncasted(_result.get());
}

Macad::Occt::PrsMgr_Presentation^ Macad::Occt::PrsMgr_Presentations::ChangeValue(int theIndex)
{
    Handle(::PrsMgr_Presentation) _result = ((::PrsMgr_Presentations*)_NativeInstance)->ChangeValue(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::PrsMgr_Presentation::CreateDowncasted(_result.get());
}

void Macad::Occt::PrsMgr_Presentations::SetValue(int theIndex, Macad::Occt::PrsMgr_Presentation^ theItem)
{
    ((::PrsMgr_Presentations*)_NativeInstance)->SetValue(theIndex, Handle(::PrsMgr_Presentation)(theItem->NativeInstance));
}

System::Collections::Generic::IEnumerator<Macad::Occt::PrsMgr_Presentation^>^ Macad::Occt::PrsMgr_Presentations::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::PrsMgr_Presentation^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::PrsMgr_Presentations::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::PrsMgr_Presentation^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  PrsMgr_Presentations::Iterator
//---------------------------------------------------------------------

Macad::Occt::PrsMgr_Presentations::Iterator::Iterator()
    : Macad::Occt::BaseClass<::PrsMgr_Presentations::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::PrsMgr_Presentations::Iterator();
}

bool Macad::Occt::PrsMgr_Presentations::Iterator::More()
{
    bool _result = ((::PrsMgr_Presentations::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::PrsMgr_Presentations::Iterator::Next()
{
    ((::PrsMgr_Presentations::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::PrsMgr_Presentation^ Macad::Occt::PrsMgr_Presentations::Iterator::Value()
{
    Handle(::PrsMgr_Presentation) _result = ((::PrsMgr_Presentations::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::PrsMgr_Presentation::CreateDowncasted(_result.get());
}

Macad::Occt::PrsMgr_Presentation^ Macad::Occt::PrsMgr_Presentations::Iterator::ChangeValue()
{
    Handle(::PrsMgr_Presentation) _result = ((::PrsMgr_Presentations::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::PrsMgr_Presentation::CreateDowncasted(_result.get());
}

bool Macad::Occt::PrsMgr_Presentations::Iterator::IsEqual(Macad::Occt::PrsMgr_Presentations::Iterator^ theOther)
{
    bool _result = ((::PrsMgr_Presentations::Iterator*)_NativeInstance)->IsEqual(*(::PrsMgr_Presentations::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::PrsMgr_Presentations::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::PrsMgr_Presentations::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  PrsMgr_PresentableObject
//---------------------------------------------------------------------

Macad::Occt::PrsMgr_Presentations^ Macad::Occt::PrsMgr_PresentableObject::Presentations()
{
    ::PrsMgr_Presentations* _result = new ::PrsMgr_Presentations();
    *_result = ((::PrsMgr_PresentableObject*)_NativeInstance)->Presentations();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::PrsMgr_Presentations(_result);
}

int Macad::Occt::PrsMgr_PresentableObject::ZLayer()
{
    int _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->ZLayer();
    return _result;
}

void Macad::Occt::PrsMgr_PresentableObject::SetZLayer(int theLayerId)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetZLayer(theLayerId);
}

bool Macad::Occt::PrsMgr_PresentableObject::IsMutable()
{
    bool _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->IsMutable();
    return _result;
}

void Macad::Occt::PrsMgr_PresentableObject::SetMutable(bool theIsMutable)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetMutable(theIsMutable);
}

Macad::Occt::Graphic3d_ViewAffinity^ Macad::Occt::PrsMgr_PresentableObject::ViewAffinity()
{
    Handle(::Graphic3d_ViewAffinity) _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->ViewAffinity();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ViewAffinity::CreateDowncasted(_result.get());
}

bool Macad::Occt::PrsMgr_PresentableObject::HasDisplayMode()
{
    bool _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->HasDisplayMode();
    return _result;
}

int Macad::Occt::PrsMgr_PresentableObject::DisplayMode()
{
    int _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->DisplayMode();
    return _result;
}

void Macad::Occt::PrsMgr_PresentableObject::SetDisplayMode(int theMode)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetDisplayMode(theMode);
}

void Macad::Occt::PrsMgr_PresentableObject::UnsetDisplayMode()
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->UnsetDisplayMode();
}

bool Macad::Occt::PrsMgr_PresentableObject::HasHilightMode()
{
    bool _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->HasHilightMode();
    return _result;
}

int Macad::Occt::PrsMgr_PresentableObject::HilightMode()
{
    int _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->HilightMode();
    return _result;
}

void Macad::Occt::PrsMgr_PresentableObject::SetHilightMode(int theMode)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetHilightMode(theMode);
}

void Macad::Occt::PrsMgr_PresentableObject::UnsetHilightMode()
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->UnsetHilightMode();
}

bool Macad::Occt::PrsMgr_PresentableObject::AcceptDisplayMode(int theMode)
{
    bool _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->AcceptDisplayMode(theMode);
    return _result;
}

int Macad::Occt::PrsMgr_PresentableObject::DefaultDisplayMode()
{
    int _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->DefaultDisplayMode();
    return _result;
}

bool Macad::Occt::PrsMgr_PresentableObject::ToBeUpdated(bool theToIncludeHidden)
{
    bool _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->ToBeUpdated(theToIncludeHidden);
    return _result;
}

bool Macad::Occt::PrsMgr_PresentableObject::ToBeUpdated()
{
    bool _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->ToBeUpdated(false);
    return _result;
}

void Macad::Occt::PrsMgr_PresentableObject::SetToUpdate(int theMode)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetToUpdate(theMode);
}

void Macad::Occt::PrsMgr_PresentableObject::SetToUpdate()
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetToUpdate();
}

bool Macad::Occt::PrsMgr_PresentableObject::IsInfinite()
{
    bool _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->IsInfinite();
    return _result;
}

void Macad::Occt::PrsMgr_PresentableObject::SetInfiniteState(bool theFlag)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetInfiniteState(theFlag);
}

void Macad::Occt::PrsMgr_PresentableObject::SetInfiniteState()
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetInfiniteState(true);
}

Macad::Occt::PrsMgr_TypeOfPresentation3d Macad::Occt::PrsMgr_PresentableObject::TypeOfPresentation3d()
{
    ::PrsMgr_TypeOfPresentation3d _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->TypeOfPresentation3d();
    return (Macad::Occt::PrsMgr_TypeOfPresentation3d)_result;
}

void Macad::Occt::PrsMgr_PresentableObject::SetTypeOfPresentation(Macad::Occt::PrsMgr_TypeOfPresentation3d theType)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetTypeOfPresentation((::PrsMgr_TypeOfPresentation3d)theType);
}

Macad::Occt::PrsMgr_DisplayStatus Macad::Occt::PrsMgr_PresentableObject::DisplayStatus()
{
    ::PrsMgr_DisplayStatus _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->DisplayStatus();
    return (Macad::Occt::PrsMgr_DisplayStatus)_result;
}

Macad::Occt::Prs3d_Drawer^ Macad::Occt::PrsMgr_PresentableObject::Attributes()
{
    Handle(::Prs3d_Drawer) _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->Attributes();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_Drawer::CreateDowncasted(_result.get());
}

void Macad::Occt::PrsMgr_PresentableObject::SetAttributes(Macad::Occt::Prs3d_Drawer^ theDrawer)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetAttributes(Handle(::Prs3d_Drawer)(theDrawer->NativeInstance));
}

Macad::Occt::Prs3d_Drawer^ Macad::Occt::PrsMgr_PresentableObject::HilightAttributes()
{
    Handle(::Prs3d_Drawer) _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->HilightAttributes();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_Drawer::CreateDowncasted(_result.get());
}

void Macad::Occt::PrsMgr_PresentableObject::SetHilightAttributes(Macad::Occt::Prs3d_Drawer^ theDrawer)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetHilightAttributes(Handle(::Prs3d_Drawer)(theDrawer->NativeInstance));
}

Macad::Occt::Prs3d_Drawer^ Macad::Occt::PrsMgr_PresentableObject::DynamicHilightAttributes()
{
    Handle(::Prs3d_Drawer) _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->DynamicHilightAttributes();
    return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_Drawer::CreateDowncasted(_result.get());
}

void Macad::Occt::PrsMgr_PresentableObject::SetDynamicHilightAttributes(Macad::Occt::Prs3d_Drawer^ theDrawer)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetDynamicHilightAttributes(Handle(::Prs3d_Drawer)(theDrawer->NativeInstance));
}

void Macad::Occt::PrsMgr_PresentableObject::UnsetHilightAttributes()
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->UnsetHilightAttributes();
}

void Macad::Occt::PrsMgr_PresentableObject::SynchronizeAspects()
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SynchronizeAspects();
}

Macad::Occt::Graphic3d_TransformPers^ Macad::Occt::PrsMgr_PresentableObject::TransformPersistence()
{
    Handle(::Graphic3d_TransformPers) _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->TransformPersistence();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_TransformPers::CreateDowncasted(_result.get());
}

void Macad::Occt::PrsMgr_PresentableObject::SetTransformPersistence(Macad::Occt::Graphic3d_TransformPers^ theTrsfPers)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetTransformPersistence(Handle(::Graphic3d_TransformPers)(theTrsfPers->NativeInstance));
}

Macad::Occt::TopLoc_Datum3D^ Macad::Occt::PrsMgr_PresentableObject::LocalTransformationGeom()
{
    Handle(::TopLoc_Datum3D) _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->LocalTransformationGeom();
    return _result.IsNull() ? nullptr : Macad::Occt::TopLoc_Datum3D::CreateDowncasted(_result.get());
}

void Macad::Occt::PrsMgr_PresentableObject::SetLocalTransformation(Macad::Occt::Trsf theTrsf)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetLocalTransformation(*(gp_Trsf*)pp_theTrsf);
}

void Macad::Occt::PrsMgr_PresentableObject::SetLocalTransformation(Macad::Occt::TopLoc_Datum3D^ theTrsf)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetLocalTransformation(Handle(::TopLoc_Datum3D)(theTrsf->NativeInstance));
}

bool Macad::Occt::PrsMgr_PresentableObject::HasTransformation()
{
    bool _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->HasTransformation();
    return _result;
}

Macad::Occt::TopLoc_Datum3D^ Macad::Occt::PrsMgr_PresentableObject::TransformationGeom()
{
    Handle(::TopLoc_Datum3D) _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->TransformationGeom();
    return _result.IsNull() ? nullptr : Macad::Occt::TopLoc_Datum3D::CreateDowncasted(_result.get());
}

Macad::Occt::Trsf Macad::Occt::PrsMgr_PresentableObject::LocalTransformation()
{
    ::gp_Trsf _nativeResult = ((::PrsMgr_PresentableObject*)_NativeInstance)->LocalTransformation();
    return Macad::Occt::Trsf(_nativeResult);
}

Macad::Occt::Trsf Macad::Occt::PrsMgr_PresentableObject::Transformation()
{
    ::gp_Trsf _nativeResult = ((::PrsMgr_PresentableObject*)_NativeInstance)->Transformation();
    return Macad::Occt::Trsf(_nativeResult);
}

Macad::Occt::gp_GTrsf^ Macad::Occt::PrsMgr_PresentableObject::InversedTransformation()
{
    ::gp_GTrsf* _result = new ::gp_GTrsf();
    *_result = (::gp_GTrsf)((::PrsMgr_PresentableObject*)_NativeInstance)->InversedTransformation();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_GTrsf(_result);
}

Macad::Occt::TopLoc_Datum3D^ Macad::Occt::PrsMgr_PresentableObject::CombinedParentTransformation()
{
    Handle(::TopLoc_Datum3D) _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->CombinedParentTransformation();
    return _result.IsNull() ? nullptr : Macad::Occt::TopLoc_Datum3D::CreateDowncasted(_result.get());
}

void Macad::Occt::PrsMgr_PresentableObject::ResetTransformation()
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->ResetTransformation();
}

void Macad::Occt::PrsMgr_PresentableObject::UpdateTransformation()
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->UpdateTransformation();
}

void Macad::Occt::PrsMgr_PresentableObject::RecomputeTransformation(Macad::Occt::Graphic3d_Camera^ theProjector)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->RecomputeTransformation(Handle(::Graphic3d_Camera)(theProjector->NativeInstance));
}

Macad::Occt::Graphic3d_SequenceOfHClipPlane^ Macad::Occt::PrsMgr_PresentableObject::ClipPlanes()
{
    Handle(::Graphic3d_SequenceOfHClipPlane) _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->ClipPlanes();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_SequenceOfHClipPlane::CreateDowncasted(_result.get());
}

void Macad::Occt::PrsMgr_PresentableObject::SetClipPlanes(Macad::Occt::Graphic3d_SequenceOfHClipPlane^ thePlanes)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetClipPlanes(Handle(::Graphic3d_SequenceOfHClipPlane)(thePlanes->NativeInstance));
}

void Macad::Occt::PrsMgr_PresentableObject::AddClipPlane(Macad::Occt::Graphic3d_ClipPlane^ thePlane)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->AddClipPlane(Handle(::Graphic3d_ClipPlane)(thePlane->NativeInstance));
}

void Macad::Occt::PrsMgr_PresentableObject::RemoveClipPlane(Macad::Occt::Graphic3d_ClipPlane^ thePlane)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->RemoveClipPlane(Handle(::Graphic3d_ClipPlane)(thePlane->NativeInstance));
}

Macad::Occt::PrsMgr_PresentableObject^ Macad::Occt::PrsMgr_PresentableObject::Parent()
{
    ::PrsMgr_PresentableObject* _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->Parent();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::PrsMgr_PresentableObject(_result);
}

Macad::Occt::PrsMgr_ListOfPresentableObjects^ Macad::Occt::PrsMgr_PresentableObject::Children()
{
    ::PrsMgr_ListOfPresentableObjects* _result = new ::PrsMgr_ListOfPresentableObjects();
    *_result = (::PrsMgr_ListOfPresentableObjects)((::PrsMgr_PresentableObject*)_NativeInstance)->Children();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::PrsMgr_ListOfPresentableObjects(_result);
}

void Macad::Occt::PrsMgr_PresentableObject::AddChild(Macad::Occt::PrsMgr_PresentableObject^ theObject)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->AddChild(Handle(::PrsMgr_PresentableObject)(theObject->NativeInstance));
}

void Macad::Occt::PrsMgr_PresentableObject::AddChildWithCurrentTransformation(Macad::Occt::PrsMgr_PresentableObject^ theObject)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->AddChildWithCurrentTransformation(Handle(::PrsMgr_PresentableObject)(theObject->NativeInstance));
}

void Macad::Occt::PrsMgr_PresentableObject::RemoveChild(Macad::Occt::PrsMgr_PresentableObject^ theObject)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->RemoveChild(Handle(::PrsMgr_PresentableObject)(theObject->NativeInstance));
}

void Macad::Occt::PrsMgr_PresentableObject::RemoveChildWithRestoreTransformation(Macad::Occt::PrsMgr_PresentableObject^ theObject)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->RemoveChildWithRestoreTransformation(Handle(::PrsMgr_PresentableObject)(theObject->NativeInstance));
}

bool Macad::Occt::PrsMgr_PresentableObject::HasOwnPresentations()
{
    bool _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->HasOwnPresentations();
    return _result;
}

void Macad::Occt::PrsMgr_PresentableObject::BoundingBox(Macad::Occt::Bnd_Box^ theBndBox)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->BoundingBox(*(::Bnd_Box*)theBndBox->NativeInstance);
}

void Macad::Occt::PrsMgr_PresentableObject::SetIsoOnTriangulation(bool theIsEnabled)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetIsoOnTriangulation(theIsEnabled);
}

Macad::Occt::Aspect_TypeOfFacingModel Macad::Occt::PrsMgr_PresentableObject::CurrentFacingModel()
{
    ::Aspect_TypeOfFacingModel _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->CurrentFacingModel();
    return (Macad::Occt::Aspect_TypeOfFacingModel)_result;
}

void Macad::Occt::PrsMgr_PresentableObject::SetCurrentFacingModel(Macad::Occt::Aspect_TypeOfFacingModel theModel)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetCurrentFacingModel((::Aspect_TypeOfFacingModel)theModel);
}

void Macad::Occt::PrsMgr_PresentableObject::SetCurrentFacingModel()
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetCurrentFacingModel(Aspect_TOFM_BOTH_SIDE);
}

bool Macad::Occt::PrsMgr_PresentableObject::HasColor()
{
    bool _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->HasColor();
    return _result;
}

void Macad::Occt::PrsMgr_PresentableObject::Color(Macad::Occt::Quantity_Color^ theColor)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->Color(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::PrsMgr_PresentableObject::SetColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::PrsMgr_PresentableObject::UnsetColor()
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->UnsetColor();
}

bool Macad::Occt::PrsMgr_PresentableObject::HasWidth()
{
    bool _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->HasWidth();
    return _result;
}

double Macad::Occt::PrsMgr_PresentableObject::Width()
{
    double _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->Width();
    return _result;
}

void Macad::Occt::PrsMgr_PresentableObject::SetWidth(double theWidth)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetWidth(theWidth);
}

void Macad::Occt::PrsMgr_PresentableObject::UnsetWidth()
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->UnsetWidth();
}

bool Macad::Occt::PrsMgr_PresentableObject::HasMaterial()
{
    bool _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->HasMaterial();
    return _result;
}

Macad::Occt::Graphic3d_NameOfMaterial Macad::Occt::PrsMgr_PresentableObject::Material()
{
    ::Graphic3d_NameOfMaterial _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->Material();
    return (Macad::Occt::Graphic3d_NameOfMaterial)_result;
}

void Macad::Occt::PrsMgr_PresentableObject::SetMaterial(Macad::Occt::Graphic3d_MaterialAspect^ aName)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetMaterial(*(::Graphic3d_MaterialAspect*)aName->NativeInstance);
}

void Macad::Occt::PrsMgr_PresentableObject::UnsetMaterial()
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->UnsetMaterial();
}

bool Macad::Occt::PrsMgr_PresentableObject::IsTransparent()
{
    bool _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->IsTransparent();
    return _result;
}

double Macad::Occt::PrsMgr_PresentableObject::Transparency()
{
    double _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->Transparency();
    return _result;
}

void Macad::Occt::PrsMgr_PresentableObject::SetTransparency(double aValue)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetTransparency(aValue);
}

void Macad::Occt::PrsMgr_PresentableObject::SetTransparency()
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetTransparency(0.59999999999999998);
}

void Macad::Occt::PrsMgr_PresentableObject::UnsetTransparency()
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->UnsetTransparency();
}

bool Macad::Occt::PrsMgr_PresentableObject::HasPolygonOffsets()
{
    bool _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->HasPolygonOffsets();
    return _result;
}

void Macad::Occt::PrsMgr_PresentableObject::PolygonOffsets(int% aMode, float% aFactor, float% aUnits)
{
    pin_ptr<int> pp_aMode = &aMode;
    pin_ptr<float> pp_aFactor = &aFactor;
    pin_ptr<float> pp_aUnits = &aUnits;
    ((::PrsMgr_PresentableObject*)_NativeInstance)->PolygonOffsets(*(int*)pp_aMode, *(float*)pp_aFactor, *(float*)pp_aUnits);
}

void Macad::Occt::PrsMgr_PresentableObject::SetPolygonOffsets(int aMode, float aFactor, float aUnits)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetPolygonOffsets(aMode, aFactor, aUnits);
}

void Macad::Occt::PrsMgr_PresentableObject::SetPolygonOffsets(int aMode, float aFactor)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetPolygonOffsets(aMode, aFactor, 0.);
}

void Macad::Occt::PrsMgr_PresentableObject::SetPolygonOffsets(int aMode)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetPolygonOffsets(aMode, 1., 0.);
}

void Macad::Occt::PrsMgr_PresentableObject::UnsetAttributes()
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->UnsetAttributes();
}

void Macad::Occt::PrsMgr_PresentableObject::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::PrsMgr_PresentableObject*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::PrsMgr_PresentableObject::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::PrsMgr_PresentableObject*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::PrsMgr_PresentableObject::ToBeUpdated(Macad::Occt::TColStd_ListOfInteger^ ListOfMode)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->ToBeUpdated(*(::TColStd_ListOfInteger*)ListOfMode->NativeInstance);
}

bool Macad::Occt::PrsMgr_PresentableObject::ToPropagateVisualState()
{
    bool _result = ((::PrsMgr_PresentableObject*)_NativeInstance)->ToPropagateVisualState();
    return _result;
}

void Macad::Occt::PrsMgr_PresentableObject::SetPropagateVisualState(bool theFlag)
{
    ((::PrsMgr_PresentableObject*)_NativeInstance)->SetPropagateVisualState(theFlag);
}

Macad::Occt::PrsMgr_PresentableObject^ Macad::Occt::PrsMgr_PresentableObject::CreateDowncasted(::PrsMgr_PresentableObject* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::SelectMgr_SelectableObject)))
        return Macad::Occt::SelectMgr_SelectableObject::CreateDowncasted((::SelectMgr_SelectableObject*)instance);
    if (instance->IsKind(STANDARD_TYPE(::StdSelect_Shape)))
        return Macad::Occt::StdSelect_Shape::CreateDowncasted((::StdSelect_Shape*)instance);
    
    return gcnew Macad::Occt::PrsMgr_PresentableObject( instance );
}



//---------------------------------------------------------------------
//  Class  PrsMgr_PresentationManager
//---------------------------------------------------------------------

Macad::Occt::PrsMgr_PresentationManager::PrsMgr_PresentationManager(Macad::Occt::Graphic3d_StructureManager^ theStructureManager)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::PrsMgr_PresentationManager(Handle(::Graphic3d_StructureManager)(theStructureManager->NativeInstance));
}

void Macad::Occt::PrsMgr_PresentationManager::Display(Macad::Occt::PrsMgr_PresentableObject^ thePrsObject, int theMode)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Display(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), theMode);
}

void Macad::Occt::PrsMgr_PresentationManager::Display(Macad::Occt::PrsMgr_PresentableObject^ thePrsObject)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Display(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), 0);
}

void Macad::Occt::PrsMgr_PresentationManager::Erase(Macad::Occt::PrsMgr_PresentableObject^ thePrsObject, int theMode)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Erase(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), theMode);
}

void Macad::Occt::PrsMgr_PresentationManager::Erase(Macad::Occt::PrsMgr_PresentableObject^ thePrsObject)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Erase(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), 0);
}

void Macad::Occt::PrsMgr_PresentationManager::Clear(Macad::Occt::PrsMgr_PresentableObject^ thePrsObject, int theMode)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Clear(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), theMode);
}

void Macad::Occt::PrsMgr_PresentationManager::Clear(Macad::Occt::PrsMgr_PresentableObject^ thePrsObject)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Clear(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), 0);
}

void Macad::Occt::PrsMgr_PresentationManager::SetVisibility(Macad::Occt::PrsMgr_PresentableObject^ thePrsObject, int theMode, bool theValue)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->SetVisibility(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), theMode, theValue);
}

void Macad::Occt::PrsMgr_PresentationManager::Unhighlight(Macad::Occt::PrsMgr_PresentableObject^ thePrsObject)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Unhighlight(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance));
}

void Macad::Occt::PrsMgr_PresentationManager::SetDisplayPriority(Macad::Occt::PrsMgr_PresentableObject^ thePrsObject, int theMode, Macad::Occt::Graphic3d_DisplayPriority theNewPrior)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->SetDisplayPriority(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), theMode, (::Graphic3d_DisplayPriority)theNewPrior);
}

Macad::Occt::Graphic3d_DisplayPriority Macad::Occt::PrsMgr_PresentationManager::DisplayPriority(Macad::Occt::PrsMgr_PresentableObject^ thePrsObject, int theMode)
{
    ::Graphic3d_DisplayPriority _result = ((::PrsMgr_PresentationManager*)_NativeInstance)->DisplayPriority(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), theMode);
    return (Macad::Occt::Graphic3d_DisplayPriority)_result;
}

void Macad::Occt::PrsMgr_PresentationManager::SetZLayer(Macad::Occt::PrsMgr_PresentableObject^ thePrsObject, int theLayerId)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->SetZLayer(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), theLayerId);
}

int Macad::Occt::PrsMgr_PresentationManager::GetZLayer(Macad::Occt::PrsMgr_PresentableObject^ thePrsObject)
{
    int _result = ((::PrsMgr_PresentationManager*)_NativeInstance)->GetZLayer(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance));
    return _result;
}

bool Macad::Occt::PrsMgr_PresentationManager::IsDisplayed(Macad::Occt::PrsMgr_PresentableObject^ thePrsObject, int theMode)
{
    bool _result = ((::PrsMgr_PresentationManager*)_NativeInstance)->IsDisplayed(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), theMode);
    return _result;
}

bool Macad::Occt::PrsMgr_PresentationManager::IsDisplayed(Macad::Occt::PrsMgr_PresentableObject^ thePrsObject)
{
    bool _result = ((::PrsMgr_PresentationManager*)_NativeInstance)->IsDisplayed(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), 0);
    return _result;
}

bool Macad::Occt::PrsMgr_PresentationManager::IsHighlighted(Macad::Occt::PrsMgr_PresentableObject^ thePrsObject, int theMode)
{
    bool _result = ((::PrsMgr_PresentationManager*)_NativeInstance)->IsHighlighted(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), theMode);
    return _result;
}

bool Macad::Occt::PrsMgr_PresentationManager::IsHighlighted(Macad::Occt::PrsMgr_PresentableObject^ thePrsObject)
{
    bool _result = ((::PrsMgr_PresentationManager*)_NativeInstance)->IsHighlighted(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), 0);
    return _result;
}

void Macad::Occt::PrsMgr_PresentationManager::Update(Macad::Occt::PrsMgr_PresentableObject^ thePrsObject, int theMode)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Update(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), theMode);
}

void Macad::Occt::PrsMgr_PresentationManager::Update(Macad::Occt::PrsMgr_PresentableObject^ thePrsObject)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Update(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), 0);
}

void Macad::Occt::PrsMgr_PresentationManager::BeginImmediateDraw()
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->BeginImmediateDraw();
}

void Macad::Occt::PrsMgr_PresentationManager::ClearImmediateDraw()
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->ClearImmediateDraw();
}

void Macad::Occt::PrsMgr_PresentationManager::AddToImmediateList(Macad::Occt::Graphic3d_Structure^ thePrs)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->AddToImmediateList(Handle(::Graphic3d_Structure)(thePrs->NativeInstance));
}

void Macad::Occt::PrsMgr_PresentationManager::EndImmediateDraw(Macad::Occt::V3d_Viewer^ theViewer)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->EndImmediateDraw(Handle(::V3d_Viewer)(theViewer->NativeInstance));
}

void Macad::Occt::PrsMgr_PresentationManager::RedrawImmediate(Macad::Occt::V3d_Viewer^ theViewer)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->RedrawImmediate(Handle(::V3d_Viewer)(theViewer->NativeInstance));
}

bool Macad::Occt::PrsMgr_PresentationManager::IsImmediateModeOn()
{
    bool _result = ((::PrsMgr_PresentationManager*)_NativeInstance)->IsImmediateModeOn();
    return _result;
}

void Macad::Occt::PrsMgr_PresentationManager::Color(Macad::Occt::PrsMgr_PresentableObject^ thePrsObject, Macad::Occt::Prs3d_Drawer^ theStyle, int theMode, Macad::Occt::PrsMgr_PresentableObject^ theSelObj, int theImmediateStructLayerId)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Color(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), Handle(::Prs3d_Drawer)(theStyle->NativeInstance), theMode, Handle(::PrsMgr_PresentableObject)(theSelObj->NativeInstance), theImmediateStructLayerId);
}

void Macad::Occt::PrsMgr_PresentationManager::Color(Macad::Occt::PrsMgr_PresentableObject^ thePrsObject, Macad::Occt::Prs3d_Drawer^ theStyle, int theMode, Macad::Occt::PrsMgr_PresentableObject^ theSelObj)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Color(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), Handle(::Prs3d_Drawer)(theStyle->NativeInstance), theMode, Handle(::PrsMgr_PresentableObject)(theSelObj->NativeInstance), Graphic3d_ZLayerId_Topmost);
}

void Macad::Occt::PrsMgr_PresentationManager::Color(Macad::Occt::PrsMgr_PresentableObject^ thePrsObject, Macad::Occt::Prs3d_Drawer^ theStyle, int theMode)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Color(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), Handle(::Prs3d_Drawer)(theStyle->NativeInstance), theMode, nullptr, Graphic3d_ZLayerId_Topmost);
}

void Macad::Occt::PrsMgr_PresentationManager::Color(Macad::Occt::PrsMgr_PresentableObject^ thePrsObject, Macad::Occt::Prs3d_Drawer^ theStyle)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Color(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), Handle(::Prs3d_Drawer)(theStyle->NativeInstance), 0, nullptr, Graphic3d_ZLayerId_Topmost);
}

void Macad::Occt::PrsMgr_PresentationManager::Connect(Macad::Occt::PrsMgr_PresentableObject^ thePrsObject, Macad::Occt::PrsMgr_PresentableObject^ theOtherObject, int theMode, int theOtherMode)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Connect(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), Handle(::PrsMgr_PresentableObject)(theOtherObject->NativeInstance), theMode, theOtherMode);
}

void Macad::Occt::PrsMgr_PresentationManager::Connect(Macad::Occt::PrsMgr_PresentableObject^ thePrsObject, Macad::Occt::PrsMgr_PresentableObject^ theOtherObject, int theMode)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Connect(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), Handle(::PrsMgr_PresentableObject)(theOtherObject->NativeInstance), theMode, 0);
}

void Macad::Occt::PrsMgr_PresentationManager::Connect(Macad::Occt::PrsMgr_PresentableObject^ thePrsObject, Macad::Occt::PrsMgr_PresentableObject^ theOtherObject)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Connect(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), Handle(::PrsMgr_PresentableObject)(theOtherObject->NativeInstance), 0, 0);
}

void Macad::Occt::PrsMgr_PresentationManager::Transform(Macad::Occt::PrsMgr_PresentableObject^ thePrsObject, Macad::Occt::TopLoc_Datum3D^ theTransformation, int theMode)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Transform(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), Handle(::TopLoc_Datum3D)(theTransformation->NativeInstance), theMode);
}

void Macad::Occt::PrsMgr_PresentationManager::Transform(Macad::Occt::PrsMgr_PresentableObject^ thePrsObject, Macad::Occt::TopLoc_Datum3D^ theTransformation)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->Transform(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), Handle(::TopLoc_Datum3D)(theTransformation->NativeInstance), 0);
}

Macad::Occt::Graphic3d_StructureManager^ Macad::Occt::PrsMgr_PresentationManager::StructureManager()
{
    Handle(::Graphic3d_StructureManager) _result = ((::PrsMgr_PresentationManager*)_NativeInstance)->StructureManager();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_StructureManager::CreateDowncasted(_result.get());
}

bool Macad::Occt::PrsMgr_PresentationManager::HasPresentation(Macad::Occt::PrsMgr_PresentableObject^ thePrsObject, int theMode)
{
    bool _result = ((::PrsMgr_PresentationManager*)_NativeInstance)->HasPresentation(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), theMode);
    return _result;
}

bool Macad::Occt::PrsMgr_PresentationManager::HasPresentation(Macad::Occt::PrsMgr_PresentableObject^ thePrsObject)
{
    bool _result = ((::PrsMgr_PresentationManager*)_NativeInstance)->HasPresentation(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), 0);
    return _result;
}

Macad::Occt::PrsMgr_Presentation^ Macad::Occt::PrsMgr_PresentationManager::Presentation(Macad::Occt::PrsMgr_PresentableObject^ thePrsObject, int theMode, bool theToCreate, Macad::Occt::PrsMgr_PresentableObject^ theSelObj)
{
    Handle(::PrsMgr_Presentation) _result = ((::PrsMgr_PresentationManager*)_NativeInstance)->Presentation(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), theMode, theToCreate, Handle(::PrsMgr_PresentableObject)(theSelObj->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::PrsMgr_Presentation::CreateDowncasted(_result.get());
}

Macad::Occt::PrsMgr_Presentation^ Macad::Occt::PrsMgr_PresentationManager::Presentation(Macad::Occt::PrsMgr_PresentableObject^ thePrsObject, int theMode, bool theToCreate)
{
    Handle(::PrsMgr_Presentation) _result = ((::PrsMgr_PresentationManager*)_NativeInstance)->Presentation(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), theMode, theToCreate, nullptr);
    return _result.IsNull() ? nullptr : Macad::Occt::PrsMgr_Presentation::CreateDowncasted(_result.get());
}

Macad::Occt::PrsMgr_Presentation^ Macad::Occt::PrsMgr_PresentationManager::Presentation(Macad::Occt::PrsMgr_PresentableObject^ thePrsObject, int theMode)
{
    Handle(::PrsMgr_Presentation) _result = ((::PrsMgr_PresentationManager*)_NativeInstance)->Presentation(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), theMode, false, nullptr);
    return _result.IsNull() ? nullptr : Macad::Occt::PrsMgr_Presentation::CreateDowncasted(_result.get());
}

Macad::Occt::PrsMgr_Presentation^ Macad::Occt::PrsMgr_PresentationManager::Presentation(Macad::Occt::PrsMgr_PresentableObject^ thePrsObject)
{
    Handle(::PrsMgr_Presentation) _result = ((::PrsMgr_PresentationManager*)_NativeInstance)->Presentation(Handle(::PrsMgr_PresentableObject)(thePrsObject->NativeInstance), 0, false, nullptr);
    return _result.IsNull() ? nullptr : Macad::Occt::PrsMgr_Presentation::CreateDowncasted(_result.get());
}

void Macad::Occt::PrsMgr_PresentationManager::UpdateHighlightTrsf(Macad::Occt::V3d_Viewer^ theViewer, Macad::Occt::PrsMgr_PresentableObject^ theObj, int theMode, Macad::Occt::PrsMgr_PresentableObject^ theSelObj)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->UpdateHighlightTrsf(Handle(::V3d_Viewer)(theViewer->NativeInstance), Handle(::PrsMgr_PresentableObject)(theObj->NativeInstance), theMode, Handle(::PrsMgr_PresentableObject)(theSelObj->NativeInstance));
}

void Macad::Occt::PrsMgr_PresentationManager::UpdateHighlightTrsf(Macad::Occt::V3d_Viewer^ theViewer, Macad::Occt::PrsMgr_PresentableObject^ theObj, int theMode)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->UpdateHighlightTrsf(Handle(::V3d_Viewer)(theViewer->NativeInstance), Handle(::PrsMgr_PresentableObject)(theObj->NativeInstance), theMode, nullptr);
}

void Macad::Occt::PrsMgr_PresentationManager::UpdateHighlightTrsf(Macad::Occt::V3d_Viewer^ theViewer, Macad::Occt::PrsMgr_PresentableObject^ theObj)
{
    ((::PrsMgr_PresentationManager*)_NativeInstance)->UpdateHighlightTrsf(Handle(::V3d_Viewer)(theViewer->NativeInstance), Handle(::PrsMgr_PresentableObject)(theObj->NativeInstance), 0, nullptr);
}

Macad::Occt::PrsMgr_PresentationManager^ Macad::Occt::PrsMgr_PresentationManager::CreateDowncasted(::PrsMgr_PresentationManager* instance)
{
    return gcnew Macad::Occt::PrsMgr_PresentationManager( instance );
}



//---------------------------------------------------------------------
//  Class  PrsMgr_Presentation
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Structure^ Macad::Occt::PrsMgr_Presentation::Presentation()
{
    ::Graphic3d_Structure* _result = ((::PrsMgr_Presentation*)_NativeInstance)->Presentation();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Structure(_result);
}

Macad::Occt::PrsMgr_PresentationManager^ Macad::Occt::PrsMgr_Presentation::PresentationManager()
{
    Handle(::PrsMgr_PresentationManager) _result = ((::PrsMgr_Presentation*)_NativeInstance)->PresentationManager();
    return _result.IsNull() ? nullptr : Macad::Occt::PrsMgr_PresentationManager::CreateDowncasted(_result.get());
}

void Macad::Occt::PrsMgr_Presentation::SetUpdateStatus(bool theUpdateStatus)
{
    ((::PrsMgr_Presentation*)_NativeInstance)->SetUpdateStatus(theUpdateStatus);
}

bool Macad::Occt::PrsMgr_Presentation::MustBeUpdated()
{
    bool _result = ((::PrsMgr_Presentation*)_NativeInstance)->MustBeUpdated();
    return _result;
}

int Macad::Occt::PrsMgr_Presentation::Mode()
{
    int _result = ((::PrsMgr_Presentation*)_NativeInstance)->Mode();
    return _result;
}

void Macad::Occt::PrsMgr_Presentation::Display()
{
    ((::PrsMgr_Presentation*)_NativeInstance)->Display();
}

void Macad::Occt::PrsMgr_Presentation::Erase()
{
    ((::PrsMgr_Presentation*)_NativeInstance)->Erase();
}

void Macad::Occt::PrsMgr_Presentation::Highlight(Macad::Occt::Prs3d_Drawer^ theStyle)
{
    ((::PrsMgr_Presentation*)_NativeInstance)->Highlight(Handle(::Prs3d_Drawer)(theStyle->NativeInstance));
}

void Macad::Occt::PrsMgr_Presentation::Unhighlight()
{
    ((::PrsMgr_Presentation*)_NativeInstance)->Unhighlight();
}

bool Macad::Occt::PrsMgr_Presentation::IsDisplayed()
{
    bool _result = ((::PrsMgr_Presentation*)_NativeInstance)->IsDisplayed();
    return _result;
}

void Macad::Occt::PrsMgr_Presentation::Clear(bool theWithDestruction)
{
    ((::PrsMgr_Presentation*)_NativeInstance)->Clear(theWithDestruction);
}

void Macad::Occt::PrsMgr_Presentation::Clear()
{
    ((::PrsMgr_Presentation*)_NativeInstance)->Clear(true);
}

void Macad::Occt::PrsMgr_Presentation::Compute()
{
    ((::PrsMgr_Presentation*)_NativeInstance)->Compute();
}

void Macad::Occt::PrsMgr_Presentation::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::PrsMgr_Presentation*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::PrsMgr_Presentation::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::PrsMgr_Presentation*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::PrsMgr_Presentation^ Macad::Occt::PrsMgr_Presentation::CreateDowncasted(::PrsMgr_Presentation* instance)
{
    return gcnew Macad::Occt::PrsMgr_Presentation( instance );
}


