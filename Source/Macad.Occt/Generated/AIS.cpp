// Generated wrapper code for package AIS

#include "OcctPCH.h"
#include "AIS.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Standard.h"
#include "NCollection.h"
#include "AIS.h"
#include "SelectMgr.h"
#include "TopoDS.h"
#include "Graphic3d.h"
#include "V3d.h"
#include "TCollection.h"
#include "Prs3d.h"
#include "TopLoc.h"
#include "gp.h"
#include "TColgp.h"
#include "Bnd.h"
#include "TColStd.h"
#include "PrsMgr.h"
#include "Aspect.h"
#include "Quantity.h"
#include "Geom.h"
#include "TopAbs.h"
#include "StdSelect.h"
#include "Image.h"
#include "WNT.h"


//---------------------------------------------------------------------
//  Class  AIS_DataMapOfIOStatus
//---------------------------------------------------------------------

Macad::Occt::AIS_DataMapOfIOStatus::AIS_DataMapOfIOStatus()
	: BaseClass<::AIS_DataMapOfIOStatus>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::AIS_DataMapOfIOStatus();
}

Macad::Occt::AIS_DataMapOfIOStatus::AIS_DataMapOfIOStatus(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::AIS_DataMapOfIOStatus>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::AIS_DataMapOfIOStatus(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::AIS_DataMapOfIOStatus::AIS_DataMapOfIOStatus(int theNbBuckets)
	: BaseClass<::AIS_DataMapOfIOStatus>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::AIS_DataMapOfIOStatus(theNbBuckets, 0L);
}

Macad::Occt::AIS_DataMapOfIOStatus::AIS_DataMapOfIOStatus(Macad::Occt::AIS_DataMapOfIOStatus^ theOther)
	: BaseClass<::AIS_DataMapOfIOStatus>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::AIS_DataMapOfIOStatus(*(::AIS_DataMapOfIOStatus*)theOther->NativeInstance);
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

Macad::Occt::AIS_GlobalStatus^ Macad::Occt::AIS_DataMapOfIOStatus::Bound(Macad::Occt::AIS_InteractiveObject^ theKey, Macad::Occt::AIS_GlobalStatus^ theItem)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

bool Macad::Occt::AIS_DataMapOfIOStatus::IsBound(Macad::Occt::AIS_InteractiveObject^ theKey)
{
	Handle(::AIS_InteractiveObject) h_theKey = theKey->NativeInstance;
	return ((::AIS_DataMapOfIOStatus*)_NativeInstance)->IsBound(h_theKey);
	theKey->NativeInstance = h_theKey.get();
}

bool Macad::Occt::AIS_DataMapOfIOStatus::UnBind(Macad::Occt::AIS_InteractiveObject^ theKey)
{
	Handle(::AIS_InteractiveObject) h_theKey = theKey->NativeInstance;
	return ((::AIS_DataMapOfIOStatus*)_NativeInstance)->UnBind(h_theKey);
	theKey->NativeInstance = h_theKey.get();
}

Macad::Occt::AIS_GlobalStatus^ Macad::Occt::AIS_DataMapOfIOStatus::Seek(Macad::Occt::AIS_InteractiveObject^ theKey)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

Macad::Occt::AIS_GlobalStatus^ Macad::Occt::AIS_DataMapOfIOStatus::Find(Macad::Occt::AIS_InteractiveObject^ theKey)
{
	Handle(::AIS_InteractiveObject) h_theKey = theKey->NativeInstance;
	Handle(::AIS_GlobalStatus) _result;
	_result = ((::AIS_DataMapOfIOStatus*)_NativeInstance)->Find(h_theKey);
	theKey->NativeInstance = h_theKey.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_GlobalStatus::CreateDowncasted( _result.get());
}

bool Macad::Occt::AIS_DataMapOfIOStatus::Find(Macad::Occt::AIS_InteractiveObject^ theKey, Macad::Occt::AIS_GlobalStatus^ theValue)
{
	Handle(::AIS_InteractiveObject) h_theKey = theKey->NativeInstance;
	Handle(::AIS_GlobalStatus) h_theValue = theValue->NativeInstance;
	return ((::AIS_DataMapOfIOStatus*)_NativeInstance)->Find(h_theKey, h_theValue);
	theKey->NativeInstance = h_theKey.get();
	theValue->NativeInstance = h_theValue.get();
}

Macad::Occt::AIS_GlobalStatus^ Macad::Occt::AIS_DataMapOfIOStatus::ChangeSeek(Macad::Occt::AIS_InteractiveObject^ theKey)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

Macad::Occt::AIS_GlobalStatus^ Macad::Occt::AIS_DataMapOfIOStatus::ChangeFind(Macad::Occt::AIS_InteractiveObject^ theKey)
{
	Handle(::AIS_InteractiveObject) h_theKey = theKey->NativeInstance;
	Handle(::AIS_GlobalStatus) _result;
	_result = ((::AIS_DataMapOfIOStatus*)_NativeInstance)->ChangeFind(h_theKey);
	theKey->NativeInstance = h_theKey.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_GlobalStatus::CreateDowncasted( _result.get());
}

void Macad::Occt::AIS_DataMapOfIOStatus::Clear(bool doReleaseMemory)
{
	((::AIS_DataMapOfIOStatus*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::AIS_DataMapOfIOStatus::Clear()
{
	((::AIS_DataMapOfIOStatus*)_NativeInstance)->Clear(true);
}

void Macad::Occt::AIS_DataMapOfIOStatus::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::AIS_DataMapOfIOStatus*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::AIS_DataMapOfIOStatus::Size()
{
	return ((::AIS_DataMapOfIOStatus*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  AIS_ListOfInteractive
//---------------------------------------------------------------------

Macad::Occt::AIS_ListOfInteractive::AIS_ListOfInteractive()
	: BaseClass<::AIS_ListOfInteractive>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::AIS_ListOfInteractive();
}

Macad::Occt::AIS_ListOfInteractive::AIS_ListOfInteractive(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::AIS_ListOfInteractive>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::AIS_ListOfInteractive(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::AIS_ListOfInteractive::AIS_ListOfInteractive(Macad::Occt::AIS_ListOfInteractive^ theOther)
	: BaseClass<::AIS_ListOfInteractive>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::AIS_ListOfInteractive(*(::AIS_ListOfInteractive*)theOther->NativeInstance);
}

int Macad::Occt::AIS_ListOfInteractive::Size()
{
	return ((::AIS_ListOfInteractive*)_NativeInstance)->Size();
}

Macad::Occt::AIS_ListOfInteractive^ Macad::Occt::AIS_ListOfInteractive::Assign(Macad::Occt::AIS_ListOfInteractive^ theOther)
{
	::AIS_ListOfInteractive* _result = new ::AIS_ListOfInteractive();
	*_result = ((::AIS_ListOfInteractive*)_NativeInstance)->Assign(*(::AIS_ListOfInteractive*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::AIS_ListOfInteractive(_result);
}

void Macad::Occt::AIS_ListOfInteractive::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::AIS_ListOfInteractive*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::AIS_ListOfInteractive::Clear()
{
	((::AIS_ListOfInteractive*)_NativeInstance)->Clear(0L);
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_ListOfInteractive::First()
{
	Handle(::AIS_InteractiveObject) _result;
	_result = ((::AIS_ListOfInteractive*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted( _result.get());
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_ListOfInteractive::Last()
{
	Handle(::AIS_InteractiveObject) _result;
	_result = ((::AIS_ListOfInteractive*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted( _result.get());
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_ListOfInteractive::Append(Macad::Occt::AIS_InteractiveObject^ theItem)
{
	Handle(::AIS_InteractiveObject) h_theItem = theItem->NativeInstance;
	Handle(::AIS_InteractiveObject) _result;
	_result = ((::AIS_ListOfInteractive*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted( _result.get());
}

void Macad::Occt::AIS_ListOfInteractive::Append(Macad::Occt::AIS_ListOfInteractive^ theOther)
{
	((::AIS_ListOfInteractive*)_NativeInstance)->Append(*(::AIS_ListOfInteractive*)theOther->NativeInstance);
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_ListOfInteractive::Prepend(Macad::Occt::AIS_InteractiveObject^ theItem)
{
	Handle(::AIS_InteractiveObject) h_theItem = theItem->NativeInstance;
	Handle(::AIS_InteractiveObject) _result;
	_result = ((::AIS_ListOfInteractive*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted( _result.get());
}

void Macad::Occt::AIS_ListOfInteractive::Prepend(Macad::Occt::AIS_ListOfInteractive^ theOther)
{
	((::AIS_ListOfInteractive*)_NativeInstance)->Prepend(*(::AIS_ListOfInteractive*)theOther->NativeInstance);
}

void Macad::Occt::AIS_ListOfInteractive::RemoveFirst()
{
	((::AIS_ListOfInteractive*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::AIS_ListOfInteractive::Reverse()
{
	((::AIS_ListOfInteractive*)_NativeInstance)->Reverse();
}




//---------------------------------------------------------------------
//  Class  AIS_NListOfEntityOwner
//---------------------------------------------------------------------

Macad::Occt::AIS_NListOfEntityOwner::AIS_NListOfEntityOwner()
	: BaseClass<::AIS_NListOfEntityOwner>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::AIS_NListOfEntityOwner();
}

Macad::Occt::AIS_NListOfEntityOwner::AIS_NListOfEntityOwner(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::AIS_NListOfEntityOwner>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::AIS_NListOfEntityOwner(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::AIS_NListOfEntityOwner::AIS_NListOfEntityOwner(Macad::Occt::AIS_NListOfEntityOwner^ theOther)
	: BaseClass<::AIS_NListOfEntityOwner>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::AIS_NListOfEntityOwner(*(::AIS_NListOfEntityOwner*)theOther->NativeInstance);
}

int Macad::Occt::AIS_NListOfEntityOwner::Size()
{
	return ((::AIS_NListOfEntityOwner*)_NativeInstance)->Size();
}

Macad::Occt::AIS_NListOfEntityOwner^ Macad::Occt::AIS_NListOfEntityOwner::Assign(Macad::Occt::AIS_NListOfEntityOwner^ theOther)
{
	::AIS_NListOfEntityOwner* _result = new ::AIS_NListOfEntityOwner();
	*_result = ((::AIS_NListOfEntityOwner*)_NativeInstance)->Assign(*(::AIS_NListOfEntityOwner*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::AIS_NListOfEntityOwner(_result);
}

void Macad::Occt::AIS_NListOfEntityOwner::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::AIS_NListOfEntityOwner*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::AIS_NListOfEntityOwner::Clear()
{
	((::AIS_NListOfEntityOwner*)_NativeInstance)->Clear(0L);
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_NListOfEntityOwner::First()
{
	Handle(::SelectMgr_EntityOwner) _result;
	_result = ((::AIS_NListOfEntityOwner*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_NListOfEntityOwner::Last()
{
	Handle(::SelectMgr_EntityOwner) _result;
	_result = ((::AIS_NListOfEntityOwner*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_NListOfEntityOwner::Append(Macad::Occt::SelectMgr_EntityOwner^ theItem)
{
	Handle(::SelectMgr_EntityOwner) h_theItem = theItem->NativeInstance;
	Handle(::SelectMgr_EntityOwner) _result;
	_result = ((::AIS_NListOfEntityOwner*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted( _result.get());
}

void Macad::Occt::AIS_NListOfEntityOwner::Append(Macad::Occt::AIS_NListOfEntityOwner^ theOther)
{
	((::AIS_NListOfEntityOwner*)_NativeInstance)->Append(*(::AIS_NListOfEntityOwner*)theOther->NativeInstance);
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_NListOfEntityOwner::Prepend(Macad::Occt::SelectMgr_EntityOwner^ theItem)
{
	Handle(::SelectMgr_EntityOwner) h_theItem = theItem->NativeInstance;
	Handle(::SelectMgr_EntityOwner) _result;
	_result = ((::AIS_NListOfEntityOwner*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted( _result.get());
}

void Macad::Occt::AIS_NListOfEntityOwner::Prepend(Macad::Occt::AIS_NListOfEntityOwner^ theOther)
{
	((::AIS_NListOfEntityOwner*)_NativeInstance)->Prepend(*(::AIS_NListOfEntityOwner*)theOther->NativeInstance);
}

void Macad::Occt::AIS_NListOfEntityOwner::RemoveFirst()
{
	((::AIS_NListOfEntityOwner*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::AIS_NListOfEntityOwner::Reverse()
{
	((::AIS_NListOfEntityOwner*)_NativeInstance)->Reverse();
}




//---------------------------------------------------------------------
//  Class  AIS_DataMapOfShapeDrawer
//---------------------------------------------------------------------

Macad::Occt::AIS_DataMapOfShapeDrawer::AIS_DataMapOfShapeDrawer()
	: BaseClass<::AIS_DataMapOfShapeDrawer>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::AIS_DataMapOfShapeDrawer();
}

Macad::Occt::AIS_DataMapOfShapeDrawer::AIS_DataMapOfShapeDrawer(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::AIS_DataMapOfShapeDrawer>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::AIS_DataMapOfShapeDrawer(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::AIS_DataMapOfShapeDrawer::AIS_DataMapOfShapeDrawer(int theNbBuckets)
	: BaseClass<::AIS_DataMapOfShapeDrawer>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::AIS_DataMapOfShapeDrawer(theNbBuckets, 0L);
}

Macad::Occt::AIS_DataMapOfShapeDrawer::AIS_DataMapOfShapeDrawer(Macad::Occt::AIS_DataMapOfShapeDrawer^ theOther)
	: BaseClass<::AIS_DataMapOfShapeDrawer>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::AIS_DataMapOfShapeDrawer(*(::AIS_DataMapOfShapeDrawer*)theOther->NativeInstance);
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

Macad::Occt::AIS_ColoredDrawer^ Macad::Occt::AIS_DataMapOfShapeDrawer::Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::AIS_ColoredDrawer^ theItem)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

bool Macad::Occt::AIS_DataMapOfShapeDrawer::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::AIS_DataMapOfShapeDrawer*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
}

bool Macad::Occt::AIS_DataMapOfShapeDrawer::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::AIS_DataMapOfShapeDrawer*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
}

Macad::Occt::AIS_ColoredDrawer^ Macad::Occt::AIS_DataMapOfShapeDrawer::Seek(Macad::Occt::TopoDS_Shape^ theKey)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

Macad::Occt::AIS_ColoredDrawer^ Macad::Occt::AIS_DataMapOfShapeDrawer::Find(Macad::Occt::TopoDS_Shape^ theKey)
{
	Handle(::AIS_ColoredDrawer) _result;
	_result = ((::AIS_DataMapOfShapeDrawer*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance);
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_ColoredDrawer::CreateDowncasted( _result.get());
}

bool Macad::Occt::AIS_DataMapOfShapeDrawer::Find(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::AIS_ColoredDrawer^ theValue)
{
	Handle(::AIS_ColoredDrawer) h_theValue = theValue->NativeInstance;
	return ((::AIS_DataMapOfShapeDrawer*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance, h_theValue);
	theValue->NativeInstance = h_theValue.get();
}

Macad::Occt::AIS_ColoredDrawer^ Macad::Occt::AIS_DataMapOfShapeDrawer::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

Macad::Occt::AIS_ColoredDrawer^ Macad::Occt::AIS_DataMapOfShapeDrawer::ChangeFind(Macad::Occt::TopoDS_Shape^ theKey)
{
	Handle(::AIS_ColoredDrawer) _result;
	_result = ((::AIS_DataMapOfShapeDrawer*)_NativeInstance)->ChangeFind(*(::TopoDS_Shape*)theKey->NativeInstance);
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_ColoredDrawer::CreateDowncasted( _result.get());
}

void Macad::Occt::AIS_DataMapOfShapeDrawer::Clear(bool doReleaseMemory)
{
	((::AIS_DataMapOfShapeDrawer*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::AIS_DataMapOfShapeDrawer::Clear()
{
	((::AIS_DataMapOfShapeDrawer*)_NativeInstance)->Clear(true);
}

void Macad::Occt::AIS_DataMapOfShapeDrawer::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::AIS_DataMapOfShapeDrawer*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::AIS_DataMapOfShapeDrawer::Size()
{
	return ((::AIS_DataMapOfShapeDrawer*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  AIS_DataMapofIntegerListOfinteractive
//---------------------------------------------------------------------

Macad::Occt::AIS_DataMapofIntegerListOfinteractive::AIS_DataMapofIntegerListOfinteractive()
	: BaseClass<::AIS_DataMapofIntegerListOfinteractive>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::AIS_DataMapofIntegerListOfinteractive();
}

Macad::Occt::AIS_DataMapofIntegerListOfinteractive::AIS_DataMapofIntegerListOfinteractive(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::AIS_DataMapofIntegerListOfinteractive>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::AIS_DataMapofIntegerListOfinteractive(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::AIS_DataMapofIntegerListOfinteractive::AIS_DataMapofIntegerListOfinteractive(int theNbBuckets)
	: BaseClass<::AIS_DataMapofIntegerListOfinteractive>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::AIS_DataMapofIntegerListOfinteractive(theNbBuckets, 0L);
}

Macad::Occt::AIS_DataMapofIntegerListOfinteractive::AIS_DataMapofIntegerListOfinteractive(Macad::Occt::AIS_DataMapofIntegerListOfinteractive^ theOther)
	: BaseClass<::AIS_DataMapofIntegerListOfinteractive>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::AIS_DataMapofIntegerListOfinteractive(*(::AIS_DataMapofIntegerListOfinteractive*)theOther->NativeInstance);
}

void Macad::Occt::AIS_DataMapofIntegerListOfinteractive::Exchange(Macad::Occt::AIS_DataMapofIntegerListOfinteractive^ theOther)
{
	((::AIS_DataMapofIntegerListOfinteractive*)_NativeInstance)->Exchange(*(::AIS_DataMapofIntegerListOfinteractive*)theOther->NativeInstance);
}

Macad::Occt::AIS_DataMapofIntegerListOfinteractive^ Macad::Occt::AIS_DataMapofIntegerListOfinteractive::Assign(Macad::Occt::AIS_DataMapofIntegerListOfinteractive^ theOther)
{
	::AIS_DataMapofIntegerListOfinteractive* _result = new ::AIS_DataMapofIntegerListOfinteractive();
	*_result = ((::AIS_DataMapofIntegerListOfinteractive*)_NativeInstance)->Assign(*(::AIS_DataMapofIntegerListOfinteractive*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::AIS_DataMapofIntegerListOfinteractive(_result);
}

bool Macad::Occt::AIS_DataMapofIntegerListOfinteractive::IsBound(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	return ((::AIS_DataMapofIntegerListOfinteractive*)_NativeInstance)->IsBound(*(int*)pp_theKey);
}

bool Macad::Occt::AIS_DataMapofIntegerListOfinteractive::UnBind(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	return ((::AIS_DataMapofIntegerListOfinteractive*)_NativeInstance)->UnBind(*(int*)pp_theKey);
}

void Macad::Occt::AIS_DataMapofIntegerListOfinteractive::Clear(bool doReleaseMemory)
{
	((::AIS_DataMapofIntegerListOfinteractive*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::AIS_DataMapofIntegerListOfinteractive::Clear()
{
	((::AIS_DataMapofIntegerListOfinteractive*)_NativeInstance)->Clear(true);
}

void Macad::Occt::AIS_DataMapofIntegerListOfinteractive::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::AIS_DataMapofIntegerListOfinteractive*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::AIS_DataMapofIntegerListOfinteractive::Size()
{
	return ((::AIS_DataMapofIntegerListOfinteractive*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  AIS_IndexedDataMapOfOwnerPrs
//---------------------------------------------------------------------

Macad::Occt::AIS_IndexedDataMapOfOwnerPrs::AIS_IndexedDataMapOfOwnerPrs()
	: BaseClass<::AIS_IndexedDataMapOfOwnerPrs>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::AIS_IndexedDataMapOfOwnerPrs();
}

Macad::Occt::AIS_IndexedDataMapOfOwnerPrs::AIS_IndexedDataMapOfOwnerPrs(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::AIS_IndexedDataMapOfOwnerPrs>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::AIS_IndexedDataMapOfOwnerPrs(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::AIS_IndexedDataMapOfOwnerPrs::AIS_IndexedDataMapOfOwnerPrs(int theNbBuckets)
	: BaseClass<::AIS_IndexedDataMapOfOwnerPrs>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::AIS_IndexedDataMapOfOwnerPrs(theNbBuckets, 0L);
}

Macad::Occt::AIS_IndexedDataMapOfOwnerPrs::AIS_IndexedDataMapOfOwnerPrs(Macad::Occt::AIS_IndexedDataMapOfOwnerPrs^ theOther)
	: BaseClass<::AIS_IndexedDataMapOfOwnerPrs>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::AIS_IndexedDataMapOfOwnerPrs(*(::AIS_IndexedDataMapOfOwnerPrs*)theOther->NativeInstance);
}

void Macad::Occt::AIS_IndexedDataMapOfOwnerPrs::Exchange(Macad::Occt::AIS_IndexedDataMapOfOwnerPrs^ theOther)
{
	((::AIS_IndexedDataMapOfOwnerPrs*)_NativeInstance)->Exchange(*(::AIS_IndexedDataMapOfOwnerPrs*)theOther->NativeInstance);
}

int Macad::Occt::AIS_IndexedDataMapOfOwnerPrs::Add(Macad::Occt::SelectMgr_EntityOwner^ theKey1, Macad::Occt::Graphic3d_Structure^ theItem)
{
	Handle(::SelectMgr_EntityOwner) h_theKey1 = theKey1->NativeInstance;
	Handle(::Graphic3d_Structure) h_theItem = theItem->NativeInstance;
	return ((::AIS_IndexedDataMapOfOwnerPrs*)_NativeInstance)->Add(h_theKey1, h_theItem);
	theKey1->NativeInstance = h_theKey1.get();
	theItem->NativeInstance = h_theItem.get();
}

bool Macad::Occt::AIS_IndexedDataMapOfOwnerPrs::Contains(Macad::Occt::SelectMgr_EntityOwner^ theKey1)
{
	Handle(::SelectMgr_EntityOwner) h_theKey1 = theKey1->NativeInstance;
	return ((::AIS_IndexedDataMapOfOwnerPrs*)_NativeInstance)->Contains(h_theKey1);
	theKey1->NativeInstance = h_theKey1.get();
}

void Macad::Occt::AIS_IndexedDataMapOfOwnerPrs::Substitute(int theIndex, Macad::Occt::SelectMgr_EntityOwner^ theKey1, Macad::Occt::Graphic3d_Structure^ theItem)
{
	Handle(::SelectMgr_EntityOwner) h_theKey1 = theKey1->NativeInstance;
	Handle(::Graphic3d_Structure) h_theItem = theItem->NativeInstance;
	((::AIS_IndexedDataMapOfOwnerPrs*)_NativeInstance)->Substitute(theIndex, h_theKey1, h_theItem);
	theKey1->NativeInstance = h_theKey1.get();
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::AIS_IndexedDataMapOfOwnerPrs::Swap(int theIndex1, int theIndex2)
{
	((::AIS_IndexedDataMapOfOwnerPrs*)_NativeInstance)->Swap(theIndex1, theIndex2);
}

void Macad::Occt::AIS_IndexedDataMapOfOwnerPrs::RemoveLast()
{
	((::AIS_IndexedDataMapOfOwnerPrs*)_NativeInstance)->RemoveLast();
}

void Macad::Occt::AIS_IndexedDataMapOfOwnerPrs::RemoveFromIndex(int theIndex)
{
	((::AIS_IndexedDataMapOfOwnerPrs*)_NativeInstance)->RemoveFromIndex(theIndex);
}

void Macad::Occt::AIS_IndexedDataMapOfOwnerPrs::RemoveKey(Macad::Occt::SelectMgr_EntityOwner^ theKey1)
{
	Handle(::SelectMgr_EntityOwner) h_theKey1 = theKey1->NativeInstance;
	((::AIS_IndexedDataMapOfOwnerPrs*)_NativeInstance)->RemoveKey(h_theKey1);
	theKey1->NativeInstance = h_theKey1.get();
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_IndexedDataMapOfOwnerPrs::FindKey(int theIndex)
{
	Handle(::SelectMgr_EntityOwner) _result;
	_result = ((::AIS_IndexedDataMapOfOwnerPrs*)_NativeInstance)->FindKey(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::AIS_IndexedDataMapOfOwnerPrs::FindFromIndex(int theIndex)
{
	Handle(::Graphic3d_Structure) _result;
	_result = ((::AIS_IndexedDataMapOfOwnerPrs*)_NativeInstance)->FindFromIndex(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::AIS_IndexedDataMapOfOwnerPrs::ChangeFromIndex(int theIndex)
{
	Handle(::Graphic3d_Structure) _result;
	_result = ((::AIS_IndexedDataMapOfOwnerPrs*)_NativeInstance)->ChangeFromIndex(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted( _result.get());
}

int Macad::Occt::AIS_IndexedDataMapOfOwnerPrs::FindIndex(Macad::Occt::SelectMgr_EntityOwner^ theKey1)
{
	Handle(::SelectMgr_EntityOwner) h_theKey1 = theKey1->NativeInstance;
	return ((::AIS_IndexedDataMapOfOwnerPrs*)_NativeInstance)->FindIndex(h_theKey1);
	theKey1->NativeInstance = h_theKey1.get();
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::AIS_IndexedDataMapOfOwnerPrs::FindFromKey(Macad::Occt::SelectMgr_EntityOwner^ theKey1)
{
	Handle(::SelectMgr_EntityOwner) h_theKey1 = theKey1->NativeInstance;
	Handle(::Graphic3d_Structure) _result;
	_result = ((::AIS_IndexedDataMapOfOwnerPrs*)_NativeInstance)->FindFromKey(h_theKey1);
	theKey1->NativeInstance = h_theKey1.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::AIS_IndexedDataMapOfOwnerPrs::ChangeFromKey(Macad::Occt::SelectMgr_EntityOwner^ theKey1)
{
	Handle(::SelectMgr_EntityOwner) h_theKey1 = theKey1->NativeInstance;
	Handle(::Graphic3d_Structure) _result;
	_result = ((::AIS_IndexedDataMapOfOwnerPrs*)_NativeInstance)->ChangeFromKey(h_theKey1);
	theKey1->NativeInstance = h_theKey1.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted( _result.get());
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::AIS_IndexedDataMapOfOwnerPrs::Seek(Macad::Occt::SelectMgr_EntityOwner^ theKey1)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::AIS_IndexedDataMapOfOwnerPrs::ChangeSeek(Macad::Occt::SelectMgr_EntityOwner^ theKey1)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

bool Macad::Occt::AIS_IndexedDataMapOfOwnerPrs::FindFromKey(Macad::Occt::SelectMgr_EntityOwner^ theKey1, Macad::Occt::Graphic3d_Structure^ theValue)
{
	Handle(::SelectMgr_EntityOwner) h_theKey1 = theKey1->NativeInstance;
	Handle(::Graphic3d_Structure) h_theValue = theValue->NativeInstance;
	return ((::AIS_IndexedDataMapOfOwnerPrs*)_NativeInstance)->FindFromKey(h_theKey1, h_theValue);
	theKey1->NativeInstance = h_theKey1.get();
	theValue->NativeInstance = h_theValue.get();
}

void Macad::Occt::AIS_IndexedDataMapOfOwnerPrs::Clear(bool doReleaseMemory)
{
	((::AIS_IndexedDataMapOfOwnerPrs*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::AIS_IndexedDataMapOfOwnerPrs::Clear()
{
	((::AIS_IndexedDataMapOfOwnerPrs*)_NativeInstance)->Clear(true);
}

void Macad::Occt::AIS_IndexedDataMapOfOwnerPrs::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::AIS_IndexedDataMapOfOwnerPrs*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::AIS_IndexedDataMapOfOwnerPrs::Size()
{
	return ((::AIS_IndexedDataMapOfOwnerPrs*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  AIS_MapOfInteractive
//---------------------------------------------------------------------

Macad::Occt::AIS_MapOfInteractive::AIS_MapOfInteractive()
	: BaseClass<::AIS_MapOfInteractive>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::AIS_MapOfInteractive();
}

Macad::Occt::AIS_MapOfInteractive::AIS_MapOfInteractive(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::AIS_MapOfInteractive>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::AIS_MapOfInteractive(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::AIS_MapOfInteractive::AIS_MapOfInteractive(int theNbBuckets)
	: BaseClass<::AIS_MapOfInteractive>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::AIS_MapOfInteractive(theNbBuckets, 0L);
}

Macad::Occt::AIS_MapOfInteractive::AIS_MapOfInteractive(Macad::Occt::AIS_MapOfInteractive^ theOther)
	: BaseClass<::AIS_MapOfInteractive>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::AIS_MapOfInteractive(*(::AIS_MapOfInteractive*)theOther->NativeInstance);
}

void Macad::Occt::AIS_MapOfInteractive::Exchange(Macad::Occt::AIS_MapOfInteractive^ theOther)
{
	((::AIS_MapOfInteractive*)_NativeInstance)->Exchange(*(::AIS_MapOfInteractive*)theOther->NativeInstance);
}

Macad::Occt::AIS_MapOfInteractive^ Macad::Occt::AIS_MapOfInteractive::Assign(Macad::Occt::AIS_MapOfInteractive^ theOther)
{
	::AIS_MapOfInteractive* _result = new ::AIS_MapOfInteractive();
	*_result = ((::AIS_MapOfInteractive*)_NativeInstance)->Assign(*(::AIS_MapOfInteractive*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::AIS_MapOfInteractive(_result);
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_MapOfInteractive::Added(Macad::Occt::AIS_InteractiveObject^ K)
{
	Handle(::AIS_InteractiveObject) h_K = K->NativeInstance;
	Handle(::AIS_InteractiveObject) _result;
	_result = ((::AIS_MapOfInteractive*)_NativeInstance)->Added(h_K);
	K->NativeInstance = h_K.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted( _result.get());
}

bool Macad::Occt::AIS_MapOfInteractive::Contains(Macad::Occt::AIS_InteractiveObject^ K)
{
	Handle(::AIS_InteractiveObject) h_K = K->NativeInstance;
	return ((::AIS_MapOfInteractive*)_NativeInstance)->Contains(h_K);
	K->NativeInstance = h_K.get();
}

bool Macad::Occt::AIS_MapOfInteractive::Remove(Macad::Occt::AIS_InteractiveObject^ K)
{
	Handle(::AIS_InteractiveObject) h_K = K->NativeInstance;
	return ((::AIS_MapOfInteractive*)_NativeInstance)->Remove(h_K);
	K->NativeInstance = h_K.get();
}

void Macad::Occt::AIS_MapOfInteractive::Clear(bool doReleaseMemory)
{
	((::AIS_MapOfInteractive*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::AIS_MapOfInteractive::Clear()
{
	((::AIS_MapOfInteractive*)_NativeInstance)->Clear(true);
}

void Macad::Occt::AIS_MapOfInteractive::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::AIS_MapOfInteractive*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::AIS_MapOfInteractive::Size()
{
	return ((::AIS_MapOfInteractive*)_NativeInstance)->Size();
}

bool Macad::Occt::AIS_MapOfInteractive::IsEqual(Macad::Occt::AIS_MapOfInteractive^ theOther)
{
	return ((::AIS_MapOfInteractive*)_NativeInstance)->IsEqual(*(::AIS_MapOfInteractive*)theOther->NativeInstance);
}

bool Macad::Occt::AIS_MapOfInteractive::Contains(Macad::Occt::AIS_MapOfInteractive^ theOther)
{
	return ((::AIS_MapOfInteractive*)_NativeInstance)->Contains(*(::AIS_MapOfInteractive*)theOther->NativeInstance);
}

void Macad::Occt::AIS_MapOfInteractive::Union(Macad::Occt::AIS_MapOfInteractive^ theLeft, Macad::Occt::AIS_MapOfInteractive^ theRight)
{
	((::AIS_MapOfInteractive*)_NativeInstance)->Union(*(::AIS_MapOfInteractive*)theLeft->NativeInstance, *(::AIS_MapOfInteractive*)theRight->NativeInstance);
}

bool Macad::Occt::AIS_MapOfInteractive::Unite(Macad::Occt::AIS_MapOfInteractive^ theOther)
{
	return ((::AIS_MapOfInteractive*)_NativeInstance)->Unite(*(::AIS_MapOfInteractive*)theOther->NativeInstance);
}

bool Macad::Occt::AIS_MapOfInteractive::HasIntersection(Macad::Occt::AIS_MapOfInteractive^ theMap)
{
	return ((::AIS_MapOfInteractive*)_NativeInstance)->HasIntersection(*(::AIS_MapOfInteractive*)theMap->NativeInstance);
}

void Macad::Occt::AIS_MapOfInteractive::Intersection(Macad::Occt::AIS_MapOfInteractive^ theLeft, Macad::Occt::AIS_MapOfInteractive^ theRight)
{
	((::AIS_MapOfInteractive*)_NativeInstance)->Intersection(*(::AIS_MapOfInteractive*)theLeft->NativeInstance, *(::AIS_MapOfInteractive*)theRight->NativeInstance);
}

bool Macad::Occt::AIS_MapOfInteractive::Intersect(Macad::Occt::AIS_MapOfInteractive^ theOther)
{
	return ((::AIS_MapOfInteractive*)_NativeInstance)->Intersect(*(::AIS_MapOfInteractive*)theOther->NativeInstance);
}

void Macad::Occt::AIS_MapOfInteractive::Subtraction(Macad::Occt::AIS_MapOfInteractive^ theLeft, Macad::Occt::AIS_MapOfInteractive^ theRight)
{
	((::AIS_MapOfInteractive*)_NativeInstance)->Subtraction(*(::AIS_MapOfInteractive*)theLeft->NativeInstance, *(::AIS_MapOfInteractive*)theRight->NativeInstance);
}

bool Macad::Occt::AIS_MapOfInteractive::Subtract(Macad::Occt::AIS_MapOfInteractive^ theOther)
{
	return ((::AIS_MapOfInteractive*)_NativeInstance)->Subtract(*(::AIS_MapOfInteractive*)theOther->NativeInstance);
}

void Macad::Occt::AIS_MapOfInteractive::Difference(Macad::Occt::AIS_MapOfInteractive^ theLeft, Macad::Occt::AIS_MapOfInteractive^ theRight)
{
	((::AIS_MapOfInteractive*)_NativeInstance)->Difference(*(::AIS_MapOfInteractive*)theLeft->NativeInstance, *(::AIS_MapOfInteractive*)theRight->NativeInstance);
}

bool Macad::Occt::AIS_MapOfInteractive::Differ(Macad::Occt::AIS_MapOfInteractive^ theOther)
{
	return ((::AIS_MapOfInteractive*)_NativeInstance)->Differ(*(::AIS_MapOfInteractive*)theOther->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  AIS_SequenceOfInteractive
//---------------------------------------------------------------------

Macad::Occt::AIS_SequenceOfInteractive::AIS_SequenceOfInteractive()
	: BaseClass<::AIS_SequenceOfInteractive>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::AIS_SequenceOfInteractive();
}

Macad::Occt::AIS_SequenceOfInteractive::AIS_SequenceOfInteractive(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::AIS_SequenceOfInteractive>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::AIS_SequenceOfInteractive(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::AIS_SequenceOfInteractive::AIS_SequenceOfInteractive(Macad::Occt::AIS_SequenceOfInteractive^ theOther)
	: BaseClass<::AIS_SequenceOfInteractive>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::AIS_SequenceOfInteractive(*(::AIS_SequenceOfInteractive*)theOther->NativeInstance);
}

int Macad::Occt::AIS_SequenceOfInteractive::Size()
{
	return ((::AIS_SequenceOfInteractive*)_NativeInstance)->Size();
}

int Macad::Occt::AIS_SequenceOfInteractive::Length()
{
	return ((::AIS_SequenceOfInteractive*)_NativeInstance)->Length();
}

int Macad::Occt::AIS_SequenceOfInteractive::Lower()
{
	return ((::AIS_SequenceOfInteractive*)_NativeInstance)->Lower();
}

int Macad::Occt::AIS_SequenceOfInteractive::Upper()
{
	return ((::AIS_SequenceOfInteractive*)_NativeInstance)->Upper();
}

bool Macad::Occt::AIS_SequenceOfInteractive::IsEmpty()
{
	return ((::AIS_SequenceOfInteractive*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::AIS_SequenceOfInteractive::Reverse()
{
	((::AIS_SequenceOfInteractive*)_NativeInstance)->Reverse();
}

void Macad::Occt::AIS_SequenceOfInteractive::Exchange(int I, int J)
{
	((::AIS_SequenceOfInteractive*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::AIS_SequenceOfInteractive::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::AIS_SequenceOfInteractive*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::AIS_SequenceOfInteractive::Clear()
{
	((::AIS_SequenceOfInteractive*)_NativeInstance)->Clear(0L);
}

Macad::Occt::AIS_SequenceOfInteractive^ Macad::Occt::AIS_SequenceOfInteractive::Assign(Macad::Occt::AIS_SequenceOfInteractive^ theOther)
{
	::AIS_SequenceOfInteractive* _result = new ::AIS_SequenceOfInteractive();
	*_result = ((::AIS_SequenceOfInteractive*)_NativeInstance)->Assign(*(::AIS_SequenceOfInteractive*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::AIS_SequenceOfInteractive(_result);
}

void Macad::Occt::AIS_SequenceOfInteractive::Remove(int theIndex)
{
	((::AIS_SequenceOfInteractive*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::AIS_SequenceOfInteractive::Remove(int theFromIndex, int theToIndex)
{
	((::AIS_SequenceOfInteractive*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::AIS_SequenceOfInteractive::Append(Macad::Occt::AIS_InteractiveObject^ theItem)
{
	Handle(::AIS_InteractiveObject) h_theItem = theItem->NativeInstance;
	((::AIS_SequenceOfInteractive*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::AIS_SequenceOfInteractive::Append(Macad::Occt::AIS_SequenceOfInteractive^ theSeq)
{
	((::AIS_SequenceOfInteractive*)_NativeInstance)->Append(*(::AIS_SequenceOfInteractive*)theSeq->NativeInstance);
}

void Macad::Occt::AIS_SequenceOfInteractive::Prepend(Macad::Occt::AIS_InteractiveObject^ theItem)
{
	Handle(::AIS_InteractiveObject) h_theItem = theItem->NativeInstance;
	((::AIS_SequenceOfInteractive*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::AIS_SequenceOfInteractive::Prepend(Macad::Occt::AIS_SequenceOfInteractive^ theSeq)
{
	((::AIS_SequenceOfInteractive*)_NativeInstance)->Prepend(*(::AIS_SequenceOfInteractive*)theSeq->NativeInstance);
}

void Macad::Occt::AIS_SequenceOfInteractive::InsertBefore(int theIndex, Macad::Occt::AIS_InteractiveObject^ theItem)
{
	Handle(::AIS_InteractiveObject) h_theItem = theItem->NativeInstance;
	((::AIS_SequenceOfInteractive*)_NativeInstance)->InsertBefore(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::AIS_SequenceOfInteractive::InsertBefore(int theIndex, Macad::Occt::AIS_SequenceOfInteractive^ theSeq)
{
	((::AIS_SequenceOfInteractive*)_NativeInstance)->InsertBefore(theIndex, *(::AIS_SequenceOfInteractive*)theSeq->NativeInstance);
}

void Macad::Occt::AIS_SequenceOfInteractive::InsertAfter(int theIndex, Macad::Occt::AIS_SequenceOfInteractive^ theSeq)
{
	((::AIS_SequenceOfInteractive*)_NativeInstance)->InsertAfter(theIndex, *(::AIS_SequenceOfInteractive*)theSeq->NativeInstance);
}

void Macad::Occt::AIS_SequenceOfInteractive::InsertAfter(int theIndex, Macad::Occt::AIS_InteractiveObject^ theItem)
{
	Handle(::AIS_InteractiveObject) h_theItem = theItem->NativeInstance;
	((::AIS_SequenceOfInteractive*)_NativeInstance)->InsertAfter(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::AIS_SequenceOfInteractive::Split(int theIndex, Macad::Occt::AIS_SequenceOfInteractive^ theSeq)
{
	((::AIS_SequenceOfInteractive*)_NativeInstance)->Split(theIndex, *(::AIS_SequenceOfInteractive*)theSeq->NativeInstance);
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_SequenceOfInteractive::First()
{
	Handle(::AIS_InteractiveObject) _result;
	_result = ((::AIS_SequenceOfInteractive*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted( _result.get());
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_SequenceOfInteractive::ChangeFirst()
{
	Handle(::AIS_InteractiveObject) _result;
	_result = ((::AIS_SequenceOfInteractive*)_NativeInstance)->ChangeFirst();
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted( _result.get());
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_SequenceOfInteractive::Last()
{
	Handle(::AIS_InteractiveObject) _result;
	_result = ((::AIS_SequenceOfInteractive*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted( _result.get());
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_SequenceOfInteractive::ChangeLast()
{
	Handle(::AIS_InteractiveObject) _result;
	_result = ((::AIS_SequenceOfInteractive*)_NativeInstance)->ChangeLast();
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted( _result.get());
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_SequenceOfInteractive::Value(int theIndex)
{
	Handle(::AIS_InteractiveObject) _result;
	_result = ((::AIS_SequenceOfInteractive*)_NativeInstance)->Value(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted( _result.get());
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_SequenceOfInteractive::ChangeValue(int theIndex)
{
	Handle(::AIS_InteractiveObject) _result;
	_result = ((::AIS_SequenceOfInteractive*)_NativeInstance)->ChangeValue(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted( _result.get());
}

void Macad::Occt::AIS_SequenceOfInteractive::SetValue(int theIndex, Macad::Occt::AIS_InteractiveObject^ theItem)
{
	Handle(::AIS_InteractiveObject) h_theItem = theItem->NativeInstance;
	((::AIS_SequenceOfInteractive*)_NativeInstance)->SetValue(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}




//---------------------------------------------------------------------
//  Class  AIS_AnimationProgress
//---------------------------------------------------------------------

Macad::Occt::AIS_AnimationProgress::AIS_AnimationProgress()
	: BaseClass<::AIS_AnimationProgress>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::AIS_AnimationProgress();
}

Macad::Occt::AIS_AnimationProgress::AIS_AnimationProgress(Macad::Occt::AIS_AnimationProgress^ parameter1)
	: BaseClass<::AIS_AnimationProgress>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::AIS_AnimationProgress(*(::AIS_AnimationProgress*)parameter1->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  AIS_WalkPart
//---------------------------------------------------------------------

Macad::Occt::AIS_WalkPart::AIS_WalkPart()
	: BaseClass<::AIS_WalkPart>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::AIS_WalkPart();
}

Macad::Occt::AIS_WalkPart::AIS_WalkPart(Macad::Occt::AIS_WalkPart^ parameter1)
	: BaseClass<::AIS_WalkPart>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::AIS_WalkPart(*(::AIS_WalkPart*)parameter1->NativeInstance);
}

bool Macad::Occt::AIS_WalkPart::IsEmpty()
{
	return ((::AIS_WalkPart*)_NativeInstance)->IsEmpty();
}




//---------------------------------------------------------------------
//  Class  AIS_WalkDelta
//---------------------------------------------------------------------

Macad::Occt::AIS_WalkDelta::AIS_WalkDelta()
	: BaseClass<::AIS_WalkDelta>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::AIS_WalkDelta();
}

Macad::Occt::AIS_WalkDelta::AIS_WalkDelta(Macad::Occt::AIS_WalkDelta^ parameter1)
	: BaseClass<::AIS_WalkDelta>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::AIS_WalkDelta(*(::AIS_WalkDelta*)parameter1->NativeInstance);
}

bool Macad::Occt::AIS_WalkDelta::IsJumping()
{
	return ((::AIS_WalkDelta*)_NativeInstance)->IsJumping();
}

void Macad::Occt::AIS_WalkDelta::SetJumping(bool theIsJumping)
{
	((::AIS_WalkDelta*)_NativeInstance)->SetJumping(theIsJumping);
}

bool Macad::Occt::AIS_WalkDelta::IsCrouching()
{
	return ((::AIS_WalkDelta*)_NativeInstance)->IsCrouching();
}

void Macad::Occt::AIS_WalkDelta::SetCrouching(bool theIsCrouching)
{
	((::AIS_WalkDelta*)_NativeInstance)->SetCrouching(theIsCrouching);
}

bool Macad::Occt::AIS_WalkDelta::IsRunning()
{
	return ((::AIS_WalkDelta*)_NativeInstance)->IsRunning();
}

void Macad::Occt::AIS_WalkDelta::SetRunning(bool theIsRunning)
{
	((::AIS_WalkDelta*)_NativeInstance)->SetRunning(theIsRunning);
}

bool Macad::Occt::AIS_WalkDelta::IsEmpty()
{
	return ((::AIS_WalkDelta*)_NativeInstance)->IsEmpty();
}

bool Macad::Occt::AIS_WalkDelta::ToMove()
{
	return ((::AIS_WalkDelta*)_NativeInstance)->ToMove();
}

bool Macad::Occt::AIS_WalkDelta::ToRotate()
{
	return ((::AIS_WalkDelta*)_NativeInstance)->ToRotate();
}




//---------------------------------------------------------------------
//  Class  AIS
//---------------------------------------------------------------------

Macad::Occt::AIS::AIS()
	: BaseClass<::AIS>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::AIS();
}

Macad::Occt::AIS::AIS(Macad::Occt::AIS^ parameter1)
	: BaseClass<::AIS>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::AIS(*(::AIS*)parameter1->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  AIS_InteractiveContext
//---------------------------------------------------------------------

Macad::Occt::AIS_InteractiveContext::AIS_InteractiveContext(Macad::Occt::V3d_Viewer^ MainViewer)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	Handle(::V3d_Viewer) h_MainViewer = MainViewer->NativeInstance;
	NativeInstance = new ::AIS_InteractiveContext(h_MainViewer);
	MainViewer->NativeInstance = h_MainViewer.get();
}

Macad::Occt::AIS_InteractiveContext::AIS_InteractiveContext(Macad::Occt::AIS_InteractiveContext^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_InteractiveContext(*(::AIS_InteractiveContext*)parameter1->NativeInstance);
}

Macad::Occt::AIS_DisplayStatus Macad::Occt::AIS_InteractiveContext::DisplayStatus(Macad::Occt::AIS_InteractiveObject^ anIobj)
{
	Handle(::AIS_InteractiveObject) h_anIobj = anIobj->NativeInstance;
	return (Macad::Occt::AIS_DisplayStatus)((::AIS_InteractiveContext*)_NativeInstance)->DisplayStatus(h_anIobj);
	anIobj->NativeInstance = h_anIobj.get();
}

void Macad::Occt::AIS_InteractiveContext::Status(Macad::Occt::AIS_InteractiveObject^ anObj, Macad::Occt::TCollection_ExtendedString^ astatus)
{
	Handle(::AIS_InteractiveObject) h_anObj = anObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->Status(h_anObj, *(::TCollection_ExtendedString*)astatus->NativeInstance);
	anObj->NativeInstance = h_anObj.get();
}

bool Macad::Occt::AIS_InteractiveContext::IsDisplayed(Macad::Occt::AIS_InteractiveObject^ anIobj)
{
	Handle(::AIS_InteractiveObject) h_anIobj = anIobj->NativeInstance;
	return ((::AIS_InteractiveContext*)_NativeInstance)->IsDisplayed(h_anIobj);
	anIobj->NativeInstance = h_anIobj.get();
}

bool Macad::Occt::AIS_InteractiveContext::IsDisplayed(Macad::Occt::AIS_InteractiveObject^ aniobj, int aMode)
{
	Handle(::AIS_InteractiveObject) h_aniobj = aniobj->NativeInstance;
	return ((::AIS_InteractiveContext*)_NativeInstance)->IsDisplayed(h_aniobj, aMode);
	aniobj->NativeInstance = h_aniobj.get();
}

void Macad::Occt::AIS_InteractiveContext::SetAutoActivateSelection(bool theIsAuto)
{
	((::AIS_InteractiveContext*)_NativeInstance)->SetAutoActivateSelection(theIsAuto);
}

bool Macad::Occt::AIS_InteractiveContext::GetAutoActivateSelection()
{
	return ((::AIS_InteractiveContext*)_NativeInstance)->GetAutoActivateSelection();
}

void Macad::Occt::AIS_InteractiveContext::Display(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->Display(h_theIObj, theToUpdateViewer);
	theIObj->NativeInstance = h_theIObj.get();
}

void Macad::Occt::AIS_InteractiveContext::Display(Macad::Occt::AIS_InteractiveObject^ theIObj, int theDispMode, int theSelectionMode, bool theToUpdateViewer, Macad::Occt::AIS_DisplayStatus theDispStatus)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->Display(h_theIObj, theDispMode, theSelectionMode, theToUpdateViewer, (::AIS_DisplayStatus)theDispStatus);
	theIObj->NativeInstance = h_theIObj.get();
}

void Macad::Occt::AIS_InteractiveContext::Display(Macad::Occt::AIS_InteractiveObject^ theIObj, int theDispMode, int theSelectionMode, bool theToUpdateViewer)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->Display(h_theIObj, theDispMode, theSelectionMode, theToUpdateViewer, AIS_DS_None);
	theIObj->NativeInstance = h_theIObj.get();
}

void Macad::Occt::AIS_InteractiveContext::Load(Macad::Occt::AIS_InteractiveObject^ theObj, int theSelectionMode)
{
	Handle(::AIS_InteractiveObject) h_theObj = theObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->Load(h_theObj, theSelectionMode);
	theObj->NativeInstance = h_theObj.get();
}

void Macad::Occt::AIS_InteractiveContext::Load(Macad::Occt::AIS_InteractiveObject^ theObj)
{
	Handle(::AIS_InteractiveObject) h_theObj = theObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->Load(h_theObj, -1);
	theObj->NativeInstance = h_theObj.get();
}

void Macad::Occt::AIS_InteractiveContext::Display(Macad::Occt::AIS_InteractiveObject^ theIObj, int theDispMode, int theSelectionMode, bool theToUpdateViewer, bool theToAllowDecomposition, Macad::Occt::AIS_DisplayStatus theDispStatus)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->Display(h_theIObj, theDispMode, theSelectionMode, theToUpdateViewer, theToAllowDecomposition, (::AIS_DisplayStatus)theDispStatus);
	theIObj->NativeInstance = h_theIObj.get();
}

void Macad::Occt::AIS_InteractiveContext::Display(Macad::Occt::AIS_InteractiveObject^ theIObj, int theDispMode, int theSelectionMode, bool theToUpdateViewer, bool theToAllowDecomposition)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->Display(h_theIObj, theDispMode, theSelectionMode, theToUpdateViewer, theToAllowDecomposition, AIS_DS_None);
	theIObj->NativeInstance = h_theIObj.get();
}

void Macad::Occt::AIS_InteractiveContext::Load(Macad::Occt::AIS_InteractiveObject^ theObj, int theSelectionMode, bool parameter1)
{
	Handle(::AIS_InteractiveObject) h_theObj = theObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->Load(h_theObj, theSelectionMode, parameter1);
	theObj->NativeInstance = h_theObj.get();
}

void Macad::Occt::AIS_InteractiveContext::Erase(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->Erase(h_theIObj, theToUpdateViewer);
	theIObj->NativeInstance = h_theIObj.get();
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
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->ClearPrs(h_theIObj, theMode, theToUpdateViewer);
	theIObj->NativeInstance = h_theIObj.get();
}

void Macad::Occt::AIS_InteractiveContext::Remove(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->Remove(h_theIObj, theToUpdateViewer);
	theIObj->NativeInstance = h_theIObj.get();
}

void Macad::Occt::AIS_InteractiveContext::RemoveAll(bool theToUpdateViewer)
{
	((::AIS_InteractiveContext*)_NativeInstance)->RemoveAll(theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::Redisplay(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer, bool theAllModes)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->Redisplay(h_theIObj, theToUpdateViewer, theAllModes);
	theIObj->NativeInstance = h_theIObj.get();
}

void Macad::Occt::AIS_InteractiveContext::Redisplay(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->Redisplay(h_theIObj, theToUpdateViewer, false);
	theIObj->NativeInstance = h_theIObj.get();
}

void Macad::Occt::AIS_InteractiveContext::Redisplay(Macad::Occt::AIS_KindOfInteractive theTypeOfObject, int theSignature, bool theToUpdateViewer)
{
	((::AIS_InteractiveContext*)_NativeInstance)->Redisplay((::AIS_KindOfInteractive)theTypeOfObject, theSignature, theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::RecomputePrsOnly(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer, bool theAllModes)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->RecomputePrsOnly(h_theIObj, theToUpdateViewer, theAllModes);
	theIObj->NativeInstance = h_theIObj.get();
}

void Macad::Occt::AIS_InteractiveContext::RecomputePrsOnly(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->RecomputePrsOnly(h_theIObj, theToUpdateViewer, false);
	theIObj->NativeInstance = h_theIObj.get();
}

void Macad::Occt::AIS_InteractiveContext::RecomputeSelectionOnly(Macad::Occt::AIS_InteractiveObject^ anIObj)
{
	Handle(::AIS_InteractiveObject) h_anIObj = anIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->RecomputeSelectionOnly(h_anIObj);
	anIObj->NativeInstance = h_anIObj.get();
}

void Macad::Occt::AIS_InteractiveContext::Update(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theUpdateViewer)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->Update(h_theIObj, theUpdateViewer);
	theIObj->NativeInstance = h_theIObj.get();
}

Macad::Occt::Prs3d_Drawer^ Macad::Occt::AIS_InteractiveContext::HighlightStyle(Macad::Occt::Prs3d_TypeOfHighlight theStyleType)
{
	Handle(::Prs3d_Drawer) _result;
	_result = ((::AIS_InteractiveContext*)_NativeInstance)->HighlightStyle((::Prs3d_TypeOfHighlight)theStyleType);
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_Drawer::CreateDowncasted( _result.get());
}

void Macad::Occt::AIS_InteractiveContext::SetHighlightStyle(Macad::Occt::Prs3d_TypeOfHighlight theStyleType, Macad::Occt::Prs3d_Drawer^ theStyle)
{
	Handle(::Prs3d_Drawer) h_theStyle = theStyle->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->SetHighlightStyle((::Prs3d_TypeOfHighlight)theStyleType, h_theStyle);
	theStyle->NativeInstance = h_theStyle.get();
}

Macad::Occt::Prs3d_Drawer^ Macad::Occt::AIS_InteractiveContext::HighlightStyle()
{
	Handle(::Prs3d_Drawer) _result;
	_result = ((::AIS_InteractiveContext*)_NativeInstance)->HighlightStyle();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_Drawer::CreateDowncasted( _result.get());
}

void Macad::Occt::AIS_InteractiveContext::SetHighlightStyle(Macad::Occt::Prs3d_Drawer^ theStyle)
{
	Handle(::Prs3d_Drawer) h_theStyle = theStyle->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->SetHighlightStyle(h_theStyle);
	theStyle->NativeInstance = h_theStyle.get();
}

Macad::Occt::Prs3d_Drawer^ Macad::Occt::AIS_InteractiveContext::SelectionStyle()
{
	Handle(::Prs3d_Drawer) _result;
	_result = ((::AIS_InteractiveContext*)_NativeInstance)->SelectionStyle();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_Drawer::CreateDowncasted( _result.get());
}

void Macad::Occt::AIS_InteractiveContext::SetSelectionStyle(Macad::Occt::Prs3d_Drawer^ theStyle)
{
	Handle(::Prs3d_Drawer) h_theStyle = theStyle->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->SetSelectionStyle(h_theStyle);
	theStyle->NativeInstance = h_theStyle.get();
}

bool Macad::Occt::AIS_InteractiveContext::HighlightStyle(Macad::Occt::AIS_InteractiveObject^ theObj, Macad::Occt::Prs3d_Drawer^ theStyle)
{
	Handle(::AIS_InteractiveObject) h_theObj = theObj->NativeInstance;
	Handle(::Prs3d_Drawer) h_theStyle = theStyle->NativeInstance;
	return ((::AIS_InteractiveContext*)_NativeInstance)->HighlightStyle(h_theObj, h_theStyle);
	theObj->NativeInstance = h_theObj.get();
	theStyle->NativeInstance = h_theStyle.get();
}

bool Macad::Occt::AIS_InteractiveContext::HighlightStyle(Macad::Occt::SelectMgr_EntityOwner^ theOwner, Macad::Occt::Prs3d_Drawer^ theStyle)
{
	Handle(::SelectMgr_EntityOwner) h_theOwner = theOwner->NativeInstance;
	Handle(::Prs3d_Drawer) h_theStyle = theStyle->NativeInstance;
	return ((::AIS_InteractiveContext*)_NativeInstance)->HighlightStyle(h_theOwner, h_theStyle);
	theOwner->NativeInstance = h_theOwner.get();
	theStyle->NativeInstance = h_theStyle.get();
}

bool Macad::Occt::AIS_InteractiveContext::IsHilighted(Macad::Occt::AIS_InteractiveObject^ theObj)
{
	Handle(::AIS_InteractiveObject) h_theObj = theObj->NativeInstance;
	return ((::AIS_InteractiveContext*)_NativeInstance)->IsHilighted(h_theObj);
	theObj->NativeInstance = h_theObj.get();
}

bool Macad::Occt::AIS_InteractiveContext::IsHilighted(Macad::Occt::SelectMgr_EntityOwner^ theOwner)
{
	Handle(::SelectMgr_EntityOwner) h_theOwner = theOwner->NativeInstance;
	return ((::AIS_InteractiveContext*)_NativeInstance)->IsHilighted(h_theOwner);
	theOwner->NativeInstance = h_theOwner.get();
}

void Macad::Occt::AIS_InteractiveContext::HilightWithColor(Macad::Occt::AIS_InteractiveObject^ theObj, Macad::Occt::Prs3d_Drawer^ theStyle, bool theToUpdateViewer)
{
	Handle(::AIS_InteractiveObject) h_theObj = theObj->NativeInstance;
	Handle(::Prs3d_Drawer) h_theStyle = theStyle->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->HilightWithColor(h_theObj, h_theStyle, theToUpdateViewer);
	theObj->NativeInstance = h_theObj.get();
	theStyle->NativeInstance = h_theStyle.get();
}

void Macad::Occt::AIS_InteractiveContext::Unhilight(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->Unhilight(h_theIObj, theToUpdateViewer);
	theIObj->NativeInstance = h_theIObj.get();
}

int Macad::Occt::AIS_InteractiveContext::DisplayPriority(Macad::Occt::AIS_InteractiveObject^ theIObj)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	return ((::AIS_InteractiveContext*)_NativeInstance)->DisplayPriority(h_theIObj);
	theIObj->NativeInstance = h_theIObj.get();
}

void Macad::Occt::AIS_InteractiveContext::SetDisplayPriority(Macad::Occt::AIS_InteractiveObject^ theIObj, int thePriority)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->SetDisplayPriority(h_theIObj, thePriority);
	theIObj->NativeInstance = h_theIObj.get();
}

int Macad::Occt::AIS_InteractiveContext::GetZLayer(Macad::Occt::AIS_InteractiveObject^ theIObj)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	return ((::AIS_InteractiveContext*)_NativeInstance)->GetZLayer(h_theIObj);
	theIObj->NativeInstance = h_theIObj.get();
}

void Macad::Occt::AIS_InteractiveContext::SetZLayer(Macad::Occt::AIS_InteractiveObject^ theIObj, int theLayerId)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->SetZLayer(h_theIObj, theLayerId);
	theIObj->NativeInstance = h_theIObj.get();
}

void Macad::Occt::AIS_InteractiveContext::SetViewAffinity(Macad::Occt::AIS_InteractiveObject^ theIObj, Macad::Occt::V3d_View^ theView, bool theIsVisible)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->SetViewAffinity(h_theIObj, h_theView, theIsVisible);
	theIObj->NativeInstance = h_theIObj.get();
	theView->NativeInstance = h_theView.get();
}

int Macad::Occt::AIS_InteractiveContext::DisplayMode()
{
	return ((::AIS_InteractiveContext*)_NativeInstance)->DisplayMode();
}

void Macad::Occt::AIS_InteractiveContext::SetDisplayMode(int theMode, bool theToUpdateViewer)
{
	((::AIS_InteractiveContext*)_NativeInstance)->SetDisplayMode(theMode, theToUpdateViewer);
}

void Macad::Occt::AIS_InteractiveContext::SetDisplayMode(Macad::Occt::AIS_InteractiveObject^ theIObj, int theMode, bool theToUpdateViewer)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->SetDisplayMode(h_theIObj, theMode, theToUpdateViewer);
	theIObj->NativeInstance = h_theIObj.get();
}

void Macad::Occt::AIS_InteractiveContext::UnsetDisplayMode(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->UnsetDisplayMode(h_theIObj, theToUpdateViewer);
	theIObj->NativeInstance = h_theIObj.get();
}

void Macad::Occt::AIS_InteractiveContext::SetLocation(Macad::Occt::AIS_InteractiveObject^ theObject, Macad::Occt::TopLoc_Location^ theLocation)
{
	Handle(::AIS_InteractiveObject) h_theObject = theObject->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->SetLocation(h_theObject, *(::TopLoc_Location*)theLocation->NativeInstance);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::AIS_InteractiveContext::ResetLocation(Macad::Occt::AIS_InteractiveObject^ theObject)
{
	Handle(::AIS_InteractiveObject) h_theObject = theObject->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->ResetLocation(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

bool Macad::Occt::AIS_InteractiveContext::HasLocation(Macad::Occt::AIS_InteractiveObject^ theObject)
{
	Handle(::AIS_InteractiveObject) h_theObject = theObject->NativeInstance;
	return ((::AIS_InteractiveContext*)_NativeInstance)->HasLocation(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

Macad::Occt::TopLoc_Location^ Macad::Occt::AIS_InteractiveContext::Location(Macad::Occt::AIS_InteractiveObject^ theObject)
{
	Handle(::AIS_InteractiveObject) h_theObject = theObject->NativeInstance;
	::TopLoc_Location* _result = new ::TopLoc_Location();
	*_result = ((::AIS_InteractiveContext*)_NativeInstance)->Location(h_theObject);
	theObject->NativeInstance = h_theObject.get();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

void Macad::Occt::AIS_InteractiveContext::SetTransformPersistence(Macad::Occt::AIS_InteractiveObject^ theObject, Macad::Occt::Graphic3d_TransformPers^ theTrsfPers)
{
	Handle(::AIS_InteractiveObject) h_theObject = theObject->NativeInstance;
	Handle(::Graphic3d_TransformPers) h_theTrsfPers = theTrsfPers->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->SetTransformPersistence(h_theObject, h_theTrsfPers);
	theObject->NativeInstance = h_theObject.get();
	theTrsfPers->NativeInstance = h_theTrsfPers.get();
}

void Macad::Occt::AIS_InteractiveContext::SetTransformPersistence(Macad::Occt::AIS_InteractiveObject^ theObj, Macad::Occt::Graphic3d_TransModeFlags% theFlag, Macad::Occt::Pnt thePoint)
{
	Handle(::AIS_InteractiveObject) h_theObj = theObj->NativeInstance;
	pin_ptr<Macad::Occt::Graphic3d_TransModeFlags> pp_theFlag = &theFlag;
	pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
	((::AIS_InteractiveContext*)_NativeInstance)->SetTransformPersistence(h_theObj, *(::Graphic3d_TransModeFlags*)pp_theFlag, *(gp_Pnt*)pp_thePoint);
	theObj->NativeInstance = h_theObj.get();
}

void Macad::Occt::AIS_InteractiveContext::SetTransformPersistence(Macad::Occt::AIS_InteractiveObject^ theObj, Macad::Occt::Graphic3d_TransModeFlags% theFlag)
{
	Handle(::AIS_InteractiveObject) h_theObj = theObj->NativeInstance;
	pin_ptr<Macad::Occt::Graphic3d_TransModeFlags> pp_theFlag = &theFlag;
	((::AIS_InteractiveContext*)_NativeInstance)->SetTransformPersistence(h_theObj, *(::Graphic3d_TransModeFlags*)pp_theFlag, ::gp_Pnt(0., 0., 0.));
	theObj->NativeInstance = h_theObj.get();
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
	return ((::AIS_InteractiveContext*)_NativeInstance)->PixelTolerance();
}

void Macad::Occt::AIS_InteractiveContext::SetSelectionSensitivity(Macad::Occt::AIS_InteractiveObject^ theObject, int theMode, int theNewSensitivity)
{
	Handle(::AIS_InteractiveObject) h_theObject = theObject->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->SetSelectionSensitivity(h_theObject, theMode, theNewSensitivity);
	theObject->NativeInstance = h_theObject.get();
}

Macad::Occt::V3d_View^ Macad::Occt::AIS_InteractiveContext::LastActiveView()
{
	Handle(::V3d_View) _result;
	_result = ((::AIS_InteractiveContext*)_NativeInstance)->LastActiveView();
	 return _result.IsNull() ? nullptr : Macad::Occt::V3d_View::CreateDowncasted( _result.get());
}

Macad::Occt::AIS_StatusOfDetection Macad::Occt::AIS_InteractiveContext::MoveTo(int theXPix, int theYPix, Macad::Occt::V3d_View^ theView, bool theToRedrawOnUpdate)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	return (Macad::Occt::AIS_StatusOfDetection)((::AIS_InteractiveContext*)_NativeInstance)->MoveTo(theXPix, theYPix, h_theView, theToRedrawOnUpdate);
	theView->NativeInstance = h_theView.get();
}

bool Macad::Occt::AIS_InteractiveContext::ClearDetected(bool theToRedrawImmediate)
{
	return ((::AIS_InteractiveContext*)_NativeInstance)->ClearDetected(theToRedrawImmediate);
}

bool Macad::Occt::AIS_InteractiveContext::ClearDetected()
{
	return ((::AIS_InteractiveContext*)_NativeInstance)->ClearDetected(false);
}

bool Macad::Occt::AIS_InteractiveContext::HasDetected()
{
	return ((::AIS_InteractiveContext*)_NativeInstance)->HasDetected();
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_InteractiveContext::DetectedOwner()
{
	Handle(::SelectMgr_EntityOwner) _result;
	_result = ((::AIS_InteractiveContext*)_NativeInstance)->DetectedOwner();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted( _result.get());
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_InteractiveContext::DetectedInteractive()
{
	Handle(::AIS_InteractiveObject) _result;
	_result = ((::AIS_InteractiveContext*)_NativeInstance)->DetectedInteractive();
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted( _result.get());
}

bool Macad::Occt::AIS_InteractiveContext::HasDetectedShape()
{
	return ((::AIS_InteractiveContext*)_NativeInstance)->HasDetectedShape();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::AIS_InteractiveContext::DetectedShape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::AIS_InteractiveContext*)_NativeInstance)->DetectedShape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::AIS_InteractiveContext::HasNextDetected()
{
	return ((::AIS_InteractiveContext*)_NativeInstance)->HasNextDetected();
}

int Macad::Occt::AIS_InteractiveContext::HilightNextDetected(Macad::Occt::V3d_View^ theView, bool theToRedrawImmediate)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	return ((::AIS_InteractiveContext*)_NativeInstance)->HilightNextDetected(h_theView, theToRedrawImmediate);
	theView->NativeInstance = h_theView.get();
}

int Macad::Occt::AIS_InteractiveContext::HilightNextDetected(Macad::Occt::V3d_View^ theView)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	return ((::AIS_InteractiveContext*)_NativeInstance)->HilightNextDetected(h_theView, true);
	theView->NativeInstance = h_theView.get();
}

int Macad::Occt::AIS_InteractiveContext::HilightPreviousDetected(Macad::Occt::V3d_View^ theView, bool theToRedrawImmediate)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	return ((::AIS_InteractiveContext*)_NativeInstance)->HilightPreviousDetected(h_theView, theToRedrawImmediate);
	theView->NativeInstance = h_theView.get();
}

int Macad::Occt::AIS_InteractiveContext::HilightPreviousDetected(Macad::Occt::V3d_View^ theView)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	return ((::AIS_InteractiveContext*)_NativeInstance)->HilightPreviousDetected(h_theView, true);
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::AIS_InteractiveContext::InitDetected()
{
	((::AIS_InteractiveContext*)_NativeInstance)->InitDetected();
}

bool Macad::Occt::AIS_InteractiveContext::MoreDetected()
{
	return ((::AIS_InteractiveContext*)_NativeInstance)->MoreDetected();
}

void Macad::Occt::AIS_InteractiveContext::NextDetected()
{
	((::AIS_InteractiveContext*)_NativeInstance)->NextDetected();
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_InteractiveContext::DetectedCurrentOwner()
{
	Handle(::SelectMgr_EntityOwner) _result;
	_result = ((::AIS_InteractiveContext*)_NativeInstance)->DetectedCurrentOwner();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted( _result.get());
}

void Macad::Occt::AIS_InteractiveContext::SetSelectedAspect(Macad::Occt::Prs3d_BasicAspect^ theAspect, bool theToUpdateViewer)
{
	Handle(::Prs3d_BasicAspect) h_theAspect = theAspect->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->SetSelectedAspect(h_theAspect, theToUpdateViewer);
	theAspect->NativeInstance = h_theAspect.get();
}

Macad::Occt::AIS_StatusOfPick Macad::Occt::AIS_InteractiveContext::AddSelect(Macad::Occt::SelectMgr_EntityOwner^ theObject)
{
	Handle(::SelectMgr_EntityOwner) h_theObject = theObject->NativeInstance;
	return (Macad::Occt::AIS_StatusOfPick)((::AIS_InteractiveContext*)_NativeInstance)->AddSelect(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

Macad::Occt::AIS_StatusOfPick Macad::Occt::AIS_InteractiveContext::AddSelect(Macad::Occt::AIS_InteractiveObject^ theObject)
{
	Handle(::AIS_InteractiveObject) h_theObject = theObject->NativeInstance;
	return (Macad::Occt::AIS_StatusOfPick)((::AIS_InteractiveContext*)_NativeInstance)->AddSelect(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

Macad::Occt::AIS_StatusOfPick Macad::Occt::AIS_InteractiveContext::Select(int theXPMin, int theYPMin, int theXPMax, int theYPMax, Macad::Occt::V3d_View^ theView, bool theToUpdateViewer)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	return (Macad::Occt::AIS_StatusOfPick)((::AIS_InteractiveContext*)_NativeInstance)->Select(theXPMin, theYPMin, theXPMax, theYPMax, h_theView, theToUpdateViewer);
	theView->NativeInstance = h_theView.get();
}

Macad::Occt::AIS_StatusOfPick Macad::Occt::AIS_InteractiveContext::Select(Macad::Occt::TColgp_Array1OfPnt2d^ thePolyline, Macad::Occt::V3d_View^ theView, bool theToUpdateViewer)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	return (Macad::Occt::AIS_StatusOfPick)((::AIS_InteractiveContext*)_NativeInstance)->Select(*(::TColgp_Array1OfPnt2d*)thePolyline->NativeInstance, h_theView, theToUpdateViewer);
	theView->NativeInstance = h_theView.get();
}

Macad::Occt::AIS_StatusOfPick Macad::Occt::AIS_InteractiveContext::Select(bool theToUpdateViewer)
{
	return (Macad::Occt::AIS_StatusOfPick)((::AIS_InteractiveContext*)_NativeInstance)->Select(theToUpdateViewer);
}

Macad::Occt::AIS_StatusOfPick Macad::Occt::AIS_InteractiveContext::ShiftSelect(bool theToUpdateViewer)
{
	return (Macad::Occt::AIS_StatusOfPick)((::AIS_InteractiveContext*)_NativeInstance)->ShiftSelect(theToUpdateViewer);
}

Macad::Occt::AIS_StatusOfPick Macad::Occt::AIS_InteractiveContext::ShiftSelect(Macad::Occt::TColgp_Array1OfPnt2d^ thePolyline, Macad::Occt::V3d_View^ theView, bool theToUpdateViewer)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	return (Macad::Occt::AIS_StatusOfPick)((::AIS_InteractiveContext*)_NativeInstance)->ShiftSelect(*(::TColgp_Array1OfPnt2d*)thePolyline->NativeInstance, h_theView, theToUpdateViewer);
	theView->NativeInstance = h_theView.get();
}

Macad::Occt::AIS_StatusOfPick Macad::Occt::AIS_InteractiveContext::ShiftSelect(int theXPMin, int theYPMin, int theXPMax, int theYPMax, Macad::Occt::V3d_View^ theView, bool theToUpdateViewer)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	return (Macad::Occt::AIS_StatusOfPick)((::AIS_InteractiveContext*)_NativeInstance)->ShiftSelect(theXPMin, theYPMin, theXPMax, theYPMax, h_theView, theToUpdateViewer);
	theView->NativeInstance = h_theView.get();
}

Macad::Occt::Bnd_Box^ Macad::Occt::AIS_InteractiveContext::BoundingBoxOfSelection()
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result = ((::AIS_InteractiveContext*)_NativeInstance)->BoundingBoxOfSelection();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

void Macad::Occt::AIS_InteractiveContext::FitSelected(Macad::Occt::V3d_View^ theView, double theMargin, bool theToUpdate)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->FitSelected(h_theView, theMargin, theToUpdate);
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::AIS_InteractiveContext::FitSelected(Macad::Occt::V3d_View^ theView)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->FitSelected(h_theView);
	theView->NativeInstance = h_theView.get();
}

bool Macad::Occt::AIS_InteractiveContext::ToHilightSelected()
{
	return ((::AIS_InteractiveContext*)_NativeInstance)->ToHilightSelected();
}

void Macad::Occt::AIS_InteractiveContext::SetToHilightSelected(bool toHilight)
{
	((::AIS_InteractiveContext*)_NativeInstance)->SetToHilightSelected(toHilight);
}

bool Macad::Occt::AIS_InteractiveContext::AutomaticHilight()
{
	return ((::AIS_InteractiveContext*)_NativeInstance)->AutomaticHilight();
}

void Macad::Occt::AIS_InteractiveContext::SetAutomaticHilight(bool theStatus)
{
	((::AIS_InteractiveContext*)_NativeInstance)->SetAutomaticHilight(theStatus);
}

void Macad::Occt::AIS_InteractiveContext::SetSelected(Macad::Occt::SelectMgr_EntityOwner^ theOwners, bool theToUpdateViewer)
{
	Handle(::SelectMgr_EntityOwner) h_theOwners = theOwners->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->SetSelected(h_theOwners, theToUpdateViewer);
	theOwners->NativeInstance = h_theOwners.get();
}

void Macad::Occt::AIS_InteractiveContext::SetSelected(Macad::Occt::AIS_InteractiveObject^ theObject, bool theToUpdateViewer)
{
	Handle(::AIS_InteractiveObject) h_theObject = theObject->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->SetSelected(h_theObject, theToUpdateViewer);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::AIS_InteractiveContext::AddOrRemoveSelected(Macad::Occt::AIS_InteractiveObject^ theObject, bool theToUpdateViewer)
{
	Handle(::AIS_InteractiveObject) h_theObject = theObject->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->AddOrRemoveSelected(h_theObject, theToUpdateViewer);
	theObject->NativeInstance = h_theObject.get();
}

bool Macad::Occt::AIS_InteractiveContext::SetSelectedState(Macad::Occt::SelectMgr_EntityOwner^ theOwner, bool theIsSelected)
{
	Handle(::SelectMgr_EntityOwner) h_theOwner = theOwner->NativeInstance;
	return ((::AIS_InteractiveContext*)_NativeInstance)->SetSelectedState(h_theOwner, theIsSelected);
	theOwner->NativeInstance = h_theOwner.get();
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
	Handle(::SelectMgr_EntityOwner) h_theOwner = theOwner->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->AddOrRemoveSelected(h_theOwner, theToUpdateViewer);
	theOwner->NativeInstance = h_theOwner.get();
}

bool Macad::Occt::AIS_InteractiveContext::IsSelected(Macad::Occt::SelectMgr_EntityOwner^ theOwner)
{
	Handle(::SelectMgr_EntityOwner) h_theOwner = theOwner->NativeInstance;
	return ((::AIS_InteractiveContext*)_NativeInstance)->IsSelected(h_theOwner);
	theOwner->NativeInstance = h_theOwner.get();
}

bool Macad::Occt::AIS_InteractiveContext::IsSelected(Macad::Occt::AIS_InteractiveObject^ theObj)
{
	Handle(::AIS_InteractiveObject) h_theObj = theObj->NativeInstance;
	return ((::AIS_InteractiveContext*)_NativeInstance)->IsSelected(h_theObj);
	theObj->NativeInstance = h_theObj.get();
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_InteractiveContext::FirstSelectedObject()
{
	Handle(::AIS_InteractiveObject) _result;
	_result = ((::AIS_InteractiveContext*)_NativeInstance)->FirstSelectedObject();
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted( _result.get());
}

int Macad::Occt::AIS_InteractiveContext::NbSelected()
{
	return ((::AIS_InteractiveContext*)_NativeInstance)->NbSelected();
}

void Macad::Occt::AIS_InteractiveContext::InitSelected()
{
	((::AIS_InteractiveContext*)_NativeInstance)->InitSelected();
}

bool Macad::Occt::AIS_InteractiveContext::MoreSelected()
{
	return ((::AIS_InteractiveContext*)_NativeInstance)->MoreSelected();
}

void Macad::Occt::AIS_InteractiveContext::NextSelected()
{
	((::AIS_InteractiveContext*)_NativeInstance)->NextSelected();
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_InteractiveContext::SelectedOwner()
{
	Handle(::SelectMgr_EntityOwner) _result;
	_result = ((::AIS_InteractiveContext*)_NativeInstance)->SelectedOwner();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted( _result.get());
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_InteractiveContext::SelectedInteractive()
{
	Handle(::AIS_InteractiveObject) _result;
	_result = ((::AIS_InteractiveContext*)_NativeInstance)->SelectedInteractive();
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted( _result.get());
}

bool Macad::Occt::AIS_InteractiveContext::HasSelectedShape()
{
	return ((::AIS_InteractiveContext*)_NativeInstance)->HasSelectedShape();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::AIS_InteractiveContext::SelectedShape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::AIS_InteractiveContext*)_NativeInstance)->SelectedShape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::AIS_InteractiveContext::HasApplicative()
{
	return ((::AIS_InteractiveContext*)_NativeInstance)->HasApplicative();
}

Macad::Occt::Standard_Transient^ Macad::Occt::AIS_InteractiveContext::Applicative()
{
	throw gcnew System::NotImplementedException();
}

bool Macad::Occt::AIS_InteractiveContext::BeginImmediateDraw()
{
	return ((::AIS_InteractiveContext*)_NativeInstance)->BeginImmediateDraw();
}

bool Macad::Occt::AIS_InteractiveContext::ImmediateAdd(Macad::Occt::AIS_InteractiveObject^ theObj, int theMode)
{
	Handle(::AIS_InteractiveObject) h_theObj = theObj->NativeInstance;
	return ((::AIS_InteractiveContext*)_NativeInstance)->ImmediateAdd(h_theObj, theMode);
	theObj->NativeInstance = h_theObj.get();
}

bool Macad::Occt::AIS_InteractiveContext::ImmediateAdd(Macad::Occt::AIS_InteractiveObject^ theObj)
{
	Handle(::AIS_InteractiveObject) h_theObj = theObj->NativeInstance;
	return ((::AIS_InteractiveContext*)_NativeInstance)->ImmediateAdd(h_theObj, 0);
	theObj->NativeInstance = h_theObj.get();
}

bool Macad::Occt::AIS_InteractiveContext::EndImmediateDraw(Macad::Occt::V3d_View^ theView)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	return ((::AIS_InteractiveContext*)_NativeInstance)->EndImmediateDraw(h_theView);
	theView->NativeInstance = h_theView.get();
}

bool Macad::Occt::AIS_InteractiveContext::EndImmediateDraw()
{
	return ((::AIS_InteractiveContext*)_NativeInstance)->EndImmediateDraw();
}

bool Macad::Occt::AIS_InteractiveContext::IsImmediateModeOn()
{
	return ((::AIS_InteractiveContext*)_NativeInstance)->IsImmediateModeOn();
}

void Macad::Occt::AIS_InteractiveContext::RedrawImmediate(Macad::Occt::V3d_Viewer^ theViewer)
{
	Handle(::V3d_Viewer) h_theViewer = theViewer->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->RedrawImmediate(h_theViewer);
	theViewer->NativeInstance = h_theViewer.get();
}

void Macad::Occt::AIS_InteractiveContext::SetSelectionModeActive(Macad::Occt::AIS_InteractiveObject^ theObj, int theMode, bool theToActivate, Macad::Occt::AIS_SelectionModesConcurrency theConcurrency, bool theIsForce)
{
	Handle(::AIS_InteractiveObject) h_theObj = theObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->SetSelectionModeActive(h_theObj, theMode, theToActivate, (::AIS_SelectionModesConcurrency)theConcurrency, theIsForce);
	theObj->NativeInstance = h_theObj.get();
}

void Macad::Occt::AIS_InteractiveContext::SetSelectionModeActive(Macad::Occt::AIS_InteractiveObject^ theObj, int theMode, bool theToActivate, Macad::Occt::AIS_SelectionModesConcurrency theConcurrency)
{
	Handle(::AIS_InteractiveObject) h_theObj = theObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->SetSelectionModeActive(h_theObj, theMode, theToActivate, (::AIS_SelectionModesConcurrency)theConcurrency, false);
	theObj->NativeInstance = h_theObj.get();
}

void Macad::Occt::AIS_InteractiveContext::SetSelectionModeActive(Macad::Occt::AIS_InteractiveObject^ theObj, int theMode, bool theToActivate)
{
	Handle(::AIS_InteractiveObject) h_theObj = theObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->SetSelectionModeActive(h_theObj, theMode, theToActivate, AIS_SelectionModesConcurrency_Multiple, false);
	theObj->NativeInstance = h_theObj.get();
}

void Macad::Occt::AIS_InteractiveContext::Activate(Macad::Occt::AIS_InteractiveObject^ theObj, int theMode, bool theIsForce)
{
	Handle(::AIS_InteractiveObject) h_theObj = theObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->Activate(h_theObj, theMode, theIsForce);
	theObj->NativeInstance = h_theObj.get();
}

void Macad::Occt::AIS_InteractiveContext::Activate(Macad::Occt::AIS_InteractiveObject^ theObj, int theMode)
{
	Handle(::AIS_InteractiveObject) h_theObj = theObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->Activate(h_theObj, theMode, false);
	theObj->NativeInstance = h_theObj.get();
}

void Macad::Occt::AIS_InteractiveContext::Activate(Macad::Occt::AIS_InteractiveObject^ theObj)
{
	Handle(::AIS_InteractiveObject) h_theObj = theObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->Activate(h_theObj, 0, false);
	theObj->NativeInstance = h_theObj.get();
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
	Handle(::AIS_InteractiveObject) h_theObj = theObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->Deactivate(h_theObj);
	theObj->NativeInstance = h_theObj.get();
}

void Macad::Occt::AIS_InteractiveContext::Deactivate(Macad::Occt::AIS_InteractiveObject^ theObj, int theMode)
{
	Handle(::AIS_InteractiveObject) h_theObj = theObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->Deactivate(h_theObj, theMode);
	theObj->NativeInstance = h_theObj.get();
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
	Handle(::AIS_InteractiveObject) h_anIobj = anIobj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->ActivatedModes(h_anIobj, *(::TColStd_ListOfInteger*)theList->NativeInstance);
	anIobj->NativeInstance = h_anIobj.get();
}

Macad::Occt::SelectMgr_FilterType Macad::Occt::AIS_InteractiveContext::FilterType()
{
	return (Macad::Occt::SelectMgr_FilterType)((::AIS_InteractiveContext*)_NativeInstance)->FilterType();
}

void Macad::Occt::AIS_InteractiveContext::SetFilterType(Macad::Occt::SelectMgr_FilterType theFilterType)
{
	((::AIS_InteractiveContext*)_NativeInstance)->SetFilterType((::SelectMgr_FilterType)theFilterType);
}

Macad::Occt::SelectMgr_ListOfFilter^ Macad::Occt::AIS_InteractiveContext::Filters()
{
	::SelectMgr_ListOfFilter* _result = new ::SelectMgr_ListOfFilter();
	*_result =  (::SelectMgr_ListOfFilter)((::AIS_InteractiveContext*)_NativeInstance)->Filters();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_ListOfFilter(_result);
}

void Macad::Occt::AIS_InteractiveContext::AddFilter(Macad::Occt::SelectMgr_Filter^ theFilter)
{
	Handle(::SelectMgr_Filter) h_theFilter = theFilter->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->AddFilter(h_theFilter);
	theFilter->NativeInstance = h_theFilter.get();
}

void Macad::Occt::AIS_InteractiveContext::RemoveFilter(Macad::Occt::SelectMgr_Filter^ theFilter)
{
	Handle(::SelectMgr_Filter) h_theFilter = theFilter->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->RemoveFilter(h_theFilter);
	theFilter->NativeInstance = h_theFilter.get();
}

void Macad::Occt::AIS_InteractiveContext::RemoveFilters()
{
	((::AIS_InteractiveContext*)_NativeInstance)->RemoveFilters();
}

Macad::Occt::SelectMgr_PickingStrategy Macad::Occt::AIS_InteractiveContext::PickingStrategy()
{
	return (Macad::Occt::SelectMgr_PickingStrategy)((::AIS_InteractiveContext*)_NativeInstance)->PickingStrategy();
}

void Macad::Occt::AIS_InteractiveContext::SetPickingStrategy(Macad::Occt::SelectMgr_PickingStrategy theStrategy)
{
	((::AIS_InteractiveContext*)_NativeInstance)->SetPickingStrategy((::SelectMgr_PickingStrategy)theStrategy);
}

Macad::Occt::Prs3d_Drawer^ Macad::Occt::AIS_InteractiveContext::DefaultDrawer()
{
	Handle(::Prs3d_Drawer) _result;
	_result = ((::AIS_InteractiveContext*)_NativeInstance)->DefaultDrawer();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_Drawer::CreateDowncasted( _result.get());
}

Macad::Occt::V3d_Viewer^ Macad::Occt::AIS_InteractiveContext::CurrentViewer()
{
	Handle(::V3d_Viewer) _result;
	_result = ((::AIS_InteractiveContext*)_NativeInstance)->CurrentViewer();
	 return _result.IsNull() ? nullptr : Macad::Occt::V3d_Viewer::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_SelectionManager^ Macad::Occt::AIS_InteractiveContext::SelectionManager()
{
	Handle(::SelectMgr_SelectionManager) _result;
	_result = ((::AIS_InteractiveContext*)_NativeInstance)->SelectionManager();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_SelectionManager::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_ViewerSelector3d^ Macad::Occt::AIS_InteractiveContext::MainSelector()
{
	Handle(::SelectMgr_ViewerSelector3d) _result;
	_result = ((::AIS_InteractiveContext*)_NativeInstance)->MainSelector();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_ViewerSelector3d::CreateDowncasted( _result.get());
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

void Macad::Occt::AIS_InteractiveContext::ObjectsByDisplayStatus(Macad::Occt::AIS_DisplayStatus theStatus, Macad::Occt::AIS_ListOfInteractive^ theListOfIO)
{
	((::AIS_InteractiveContext*)_NativeInstance)->ObjectsByDisplayStatus((::AIS_DisplayStatus)theStatus, *(::AIS_ListOfInteractive*)theListOfIO->NativeInstance);
}

void Macad::Occt::AIS_InteractiveContext::ObjectsByDisplayStatus(Macad::Occt::AIS_KindOfInteractive WhichKind, int WhichSignature, Macad::Occt::AIS_DisplayStatus theStatus, Macad::Occt::AIS_ListOfInteractive^ theListOfIO)
{
	((::AIS_InteractiveContext*)_NativeInstance)->ObjectsByDisplayStatus((::AIS_KindOfInteractive)WhichKind, WhichSignature, (::AIS_DisplayStatus)theStatus, *(::AIS_ListOfInteractive*)theListOfIO->NativeInstance);
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
	((::AIS_InteractiveContext*)_NativeInstance)->ObjectsInside(*(::AIS_ListOfInteractive*)aListOfIO->NativeInstance, AIS_KOI_None, -1);
}

void Macad::Occt::AIS_InteractiveContext::RebuildSelectionStructs()
{
	((::AIS_InteractiveContext*)_NativeInstance)->RebuildSelectionStructs();
}

void Macad::Occt::AIS_InteractiveContext::Disconnect(Macad::Occt::AIS_InteractiveObject^ theAssembly, Macad::Occt::AIS_InteractiveObject^ theObjToDisconnect)
{
	Handle(::AIS_InteractiveObject) h_theAssembly = theAssembly->NativeInstance;
	Handle(::AIS_InteractiveObject) h_theObjToDisconnect = theObjToDisconnect->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->Disconnect(h_theAssembly, h_theObjToDisconnect);
	theAssembly->NativeInstance = h_theAssembly.get();
	theObjToDisconnect->NativeInstance = h_theObjToDisconnect.get();
}

void Macad::Occt::AIS_InteractiveContext::Disconnect(Macad::Occt::AIS_InteractiveObject^ theAssembly)
{
	Handle(::AIS_InteractiveObject) h_theAssembly = theAssembly->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->Disconnect(h_theAssembly, 0);
	theAssembly->NativeInstance = h_theAssembly.get();
}

void Macad::Occt::AIS_InteractiveContext::ObjectsForView(Macad::Occt::AIS_ListOfInteractive^ theListOfIO, Macad::Occt::V3d_View^ theView, bool theIsVisibleInView, Macad::Occt::AIS_DisplayStatus theStatus)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->ObjectsForView(*(::AIS_ListOfInteractive*)theListOfIO->NativeInstance, h_theView, theIsVisibleInView, (::AIS_DisplayStatus)theStatus);
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::AIS_InteractiveContext::ObjectsForView(Macad::Occt::AIS_ListOfInteractive^ theListOfIO, Macad::Occt::V3d_View^ theView, bool theIsVisibleInView)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->ObjectsForView(*(::AIS_ListOfInteractive*)theListOfIO->NativeInstance, h_theView, theIsVisibleInView, AIS_DS_None);
	theView->NativeInstance = h_theView.get();
}

int Macad::Occt::AIS_InteractiveContext::PurgeDisplay()
{
	return ((::AIS_InteractiveContext*)_NativeInstance)->PurgeDisplay();
}

Macad::Occt::Pnt Macad::Occt::AIS_InteractiveContext::GravityPoint(Macad::Occt::V3d_View^ theView)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	return Macad::Occt::Pnt(((::AIS_InteractiveContext*)_NativeInstance)->GravityPoint(h_theView));
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::AIS_InteractiveContext::DisplayActiveSensitive(Macad::Occt::V3d_View^ aView)
{
	Handle(::V3d_View) h_aView = aView->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->DisplayActiveSensitive(h_aView);
	aView->NativeInstance = h_aView.get();
}

void Macad::Occt::AIS_InteractiveContext::ClearActiveSensitive(Macad::Occt::V3d_View^ aView)
{
	Handle(::V3d_View) h_aView = aView->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->ClearActiveSensitive(h_aView);
	aView->NativeInstance = h_aView.get();
}

void Macad::Occt::AIS_InteractiveContext::DisplayActiveSensitive(Macad::Occt::AIS_InteractiveObject^ anObject, Macad::Occt::V3d_View^ aView)
{
	Handle(::AIS_InteractiveObject) h_anObject = anObject->NativeInstance;
	Handle(::V3d_View) h_aView = aView->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->DisplayActiveSensitive(h_anObject, h_aView);
	anObject->NativeInstance = h_anObject.get();
	aView->NativeInstance = h_aView.get();
}

void Macad::Occt::AIS_InteractiveContext::SetLocalAttributes(Macad::Occt::AIS_InteractiveObject^ theIObj, Macad::Occt::Prs3d_Drawer^ theDrawer, bool theToUpdateViewer)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	Handle(::Prs3d_Drawer) h_theDrawer = theDrawer->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->SetLocalAttributes(h_theIObj, h_theDrawer, theToUpdateViewer);
	theIObj->NativeInstance = h_theIObj.get();
	theDrawer->NativeInstance = h_theDrawer.get();
}

void Macad::Occt::AIS_InteractiveContext::UnsetLocalAttributes(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->UnsetLocalAttributes(h_theIObj, theToUpdateViewer);
	theIObj->NativeInstance = h_theIObj.get();
}

void Macad::Occt::AIS_InteractiveContext::SetCurrentFacingModel(Macad::Occt::AIS_InteractiveObject^ aniobj, Macad::Occt::Aspect_TypeOfFacingModel aModel)
{
	Handle(::AIS_InteractiveObject) h_aniobj = aniobj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->SetCurrentFacingModel(h_aniobj, (::Aspect_TypeOfFacingModel)aModel);
	aniobj->NativeInstance = h_aniobj.get();
}

void Macad::Occt::AIS_InteractiveContext::SetCurrentFacingModel(Macad::Occt::AIS_InteractiveObject^ aniobj)
{
	Handle(::AIS_InteractiveObject) h_aniobj = aniobj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->SetCurrentFacingModel(h_aniobj, Aspect_TOFM_BOTH_SIDE);
	aniobj->NativeInstance = h_aniobj.get();
}

bool Macad::Occt::AIS_InteractiveContext::HasColor(Macad::Occt::AIS_InteractiveObject^ aniobj)
{
	Handle(::AIS_InteractiveObject) h_aniobj = aniobj->NativeInstance;
	return ((::AIS_InteractiveContext*)_NativeInstance)->HasColor(h_aniobj);
	aniobj->NativeInstance = h_aniobj.get();
}

void Macad::Occt::AIS_InteractiveContext::Color(Macad::Occt::AIS_InteractiveObject^ aniobj, Macad::Occt::Quantity_Color^ acolor)
{
	Handle(::AIS_InteractiveObject) h_aniobj = aniobj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->Color(h_aniobj, *(::Quantity_Color*)acolor->NativeInstance);
	aniobj->NativeInstance = h_aniobj.get();
}

void Macad::Occt::AIS_InteractiveContext::SetColor(Macad::Occt::AIS_InteractiveObject^ theIObj, Macad::Occt::Quantity_Color^ theColor, bool theToUpdateViewer)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->SetColor(h_theIObj, *(::Quantity_Color*)theColor->NativeInstance, theToUpdateViewer);
	theIObj->NativeInstance = h_theIObj.get();
}

void Macad::Occt::AIS_InteractiveContext::UnsetColor(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->UnsetColor(h_theIObj, theToUpdateViewer);
	theIObj->NativeInstance = h_theIObj.get();
}

double Macad::Occt::AIS_InteractiveContext::Width(Macad::Occt::AIS_InteractiveObject^ aniobj)
{
	Handle(::AIS_InteractiveObject) h_aniobj = aniobj->NativeInstance;
	return ((::AIS_InteractiveContext*)_NativeInstance)->Width(h_aniobj);
	aniobj->NativeInstance = h_aniobj.get();
}

void Macad::Occt::AIS_InteractiveContext::SetWidth(Macad::Occt::AIS_InteractiveObject^ theIObj, double theValue, bool theToUpdateViewer)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->SetWidth(h_theIObj, theValue, theToUpdateViewer);
	theIObj->NativeInstance = h_theIObj.get();
}

void Macad::Occt::AIS_InteractiveContext::UnsetWidth(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->UnsetWidth(h_theIObj, theToUpdateViewer);
	theIObj->NativeInstance = h_theIObj.get();
}

void Macad::Occt::AIS_InteractiveContext::SetMaterial(Macad::Occt::AIS_InteractiveObject^ theIObj, Macad::Occt::Graphic3d_MaterialAspect^ theMaterial, bool theToUpdateViewer)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->SetMaterial(h_theIObj, *(::Graphic3d_MaterialAspect*)theMaterial->NativeInstance, theToUpdateViewer);
	theIObj->NativeInstance = h_theIObj.get();
}

void Macad::Occt::AIS_InteractiveContext::UnsetMaterial(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->UnsetMaterial(h_theIObj, theToUpdateViewer);
	theIObj->NativeInstance = h_theIObj.get();
}

void Macad::Occt::AIS_InteractiveContext::SetTransparency(Macad::Occt::AIS_InteractiveObject^ theIObj, double theValue, bool theToUpdateViewer)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->SetTransparency(h_theIObj, theValue, theToUpdateViewer);
	theIObj->NativeInstance = h_theIObj.get();
}

void Macad::Occt::AIS_InteractiveContext::UnsetTransparency(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->UnsetTransparency(h_theIObj, theToUpdateViewer);
	theIObj->NativeInstance = h_theIObj.get();
}

void Macad::Occt::AIS_InteractiveContext::SetPolygonOffsets(Macad::Occt::AIS_InteractiveObject^ theIObj, int theMode, float theFactor, float theUnits, bool theToUpdateViewer)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->SetPolygonOffsets(h_theIObj, theMode, theFactor, theUnits, theToUpdateViewer);
	theIObj->NativeInstance = h_theIObj.get();
}

bool Macad::Occt::AIS_InteractiveContext::HasPolygonOffsets(Macad::Occt::AIS_InteractiveObject^ anObj)
{
	Handle(::AIS_InteractiveObject) h_anObj = anObj->NativeInstance;
	return ((::AIS_InteractiveContext*)_NativeInstance)->HasPolygonOffsets(h_anObj);
	anObj->NativeInstance = h_anObj.get();
}

void Macad::Occt::AIS_InteractiveContext::PolygonOffsets(Macad::Occt::AIS_InteractiveObject^ anObj, int% aMode, float% aFactor, float% aUnits)
{
	Handle(::AIS_InteractiveObject) h_anObj = anObj->NativeInstance;
	pin_ptr<int> pp_aMode = &aMode;
	pin_ptr<float> pp_aFactor = &aFactor;
	pin_ptr<float> pp_aUnits = &aUnits;
	((::AIS_InteractiveContext*)_NativeInstance)->PolygonOffsets(h_anObj, *(Standard_Integer*)pp_aMode, *(Standard_ShortReal*)pp_aFactor, *(Standard_ShortReal*)pp_aUnits);
	anObj->NativeInstance = h_anObj.get();
}

void Macad::Occt::AIS_InteractiveContext::SetTrihedronSize(double theSize, bool theToUpdateViewer)
{
	((::AIS_InteractiveContext*)_NativeInstance)->SetTrihedronSize(theSize, theToUpdateViewer);
}

double Macad::Occt::AIS_InteractiveContext::TrihedronSize()
{
	return ((::AIS_InteractiveContext*)_NativeInstance)->TrihedronSize();
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
	return ((::AIS_InteractiveContext*)_NativeInstance)->PlaneSize(*(Standard_Real*)pp_XSize, *(Standard_Real*)pp_YSize);
}

void Macad::Occt::AIS_InteractiveContext::SetDeviationCoefficient(Macad::Occt::AIS_InteractiveObject^ theIObj, double theCoefficient, bool theToUpdateViewer)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->SetDeviationCoefficient(h_theIObj, theCoefficient, theToUpdateViewer);
	theIObj->NativeInstance = h_theIObj.get();
}

void Macad::Occt::AIS_InteractiveContext::SetDeviationAngle(Macad::Occt::AIS_InteractiveObject^ theIObj, double theAngle, bool theToUpdateViewer)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->SetDeviationAngle(h_theIObj, theAngle, theToUpdateViewer);
	theIObj->NativeInstance = h_theIObj.get();
}

void Macad::Occt::AIS_InteractiveContext::SetAngleAndDeviation(Macad::Occt::AIS_InteractiveObject^ theIObj, double theAngle, bool theToUpdateViewer)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->SetAngleAndDeviation(h_theIObj, theAngle, theToUpdateViewer);
	theIObj->NativeInstance = h_theIObj.get();
}

void Macad::Occt::AIS_InteractiveContext::SetDeviationCoefficient(double theCoefficient)
{
	((::AIS_InteractiveContext*)_NativeInstance)->SetDeviationCoefficient(theCoefficient);
}

double Macad::Occt::AIS_InteractiveContext::DeviationCoefficient()
{
	return ((::AIS_InteractiveContext*)_NativeInstance)->DeviationCoefficient();
}

void Macad::Occt::AIS_InteractiveContext::SetDeviationAngle(double anAngle)
{
	((::AIS_InteractiveContext*)_NativeInstance)->SetDeviationAngle(anAngle);
}

double Macad::Occt::AIS_InteractiveContext::DeviationAngle()
{
	return ((::AIS_InteractiveContext*)_NativeInstance)->DeviationAngle();
}

Macad::Occt::Prs3d_LineAspect^ Macad::Occt::AIS_InteractiveContext::HiddenLineAspect()
{
	Handle(::Prs3d_LineAspect) _result;
	_result = ((::AIS_InteractiveContext*)_NativeInstance)->HiddenLineAspect();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_LineAspect::CreateDowncasted( _result.get());
}

void Macad::Occt::AIS_InteractiveContext::SetHiddenLineAspect(Macad::Occt::Prs3d_LineAspect^ anAspect)
{
	Handle(::Prs3d_LineAspect) h_anAspect = anAspect->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->SetHiddenLineAspect(h_anAspect);
	anAspect->NativeInstance = h_anAspect.get();
}

bool Macad::Occt::AIS_InteractiveContext::DrawHiddenLine()
{
	return ((::AIS_InteractiveContext*)_NativeInstance)->DrawHiddenLine();
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
	return ((::AIS_InteractiveContext*)_NativeInstance)->IsoNumber((::AIS_TypeOfIso)WhichIsos);
}

int Macad::Occt::AIS_InteractiveContext::IsoNumber()
{
	return ((::AIS_InteractiveContext*)_NativeInstance)->IsoNumber(AIS_TOI_Both);
}

void Macad::Occt::AIS_InteractiveContext::IsoOnPlane(bool SwitchOn)
{
	((::AIS_InteractiveContext*)_NativeInstance)->IsoOnPlane(SwitchOn);
}

bool Macad::Occt::AIS_InteractiveContext::IsoOnPlane()
{
	return ((::AIS_InteractiveContext*)_NativeInstance)->IsoOnPlane();
}

void Macad::Occt::AIS_InteractiveContext::IsoOnTriangulation(bool theIsEnabled, Macad::Occt::AIS_InteractiveObject^ theObject)
{
	Handle(::AIS_InteractiveObject) h_theObject = theObject->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->IsoOnTriangulation(theIsEnabled, h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::AIS_InteractiveContext::IsoOnTriangulation(bool theToSwitchOn)
{
	((::AIS_InteractiveContext*)_NativeInstance)->IsoOnTriangulation(theToSwitchOn);
}

bool Macad::Occt::AIS_InteractiveContext::IsoOnTriangulation()
{
	return ((::AIS_InteractiveContext*)_NativeInstance)->IsoOnTriangulation();
}

void Macad::Occt::AIS_InteractiveContext::SetCurrentObject(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->SetCurrentObject(h_theIObj, theToUpdateViewer);
	theIObj->NativeInstance = h_theIObj.get();
}

void Macad::Occt::AIS_InteractiveContext::AddOrRemoveCurrentObject(Macad::Occt::AIS_InteractiveObject^ theObj, bool theIsToUpdateViewer)
{
	Handle(::AIS_InteractiveObject) h_theObj = theObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->AddOrRemoveCurrentObject(h_theObj, theIsToUpdateViewer);
	theObj->NativeInstance = h_theObj.get();
}

void Macad::Occt::AIS_InteractiveContext::UpdateCurrent()
{
	((::AIS_InteractiveContext*)_NativeInstance)->UpdateCurrent();
}

bool Macad::Occt::AIS_InteractiveContext::IsCurrent(Macad::Occt::AIS_InteractiveObject^ theObject)
{
	Handle(::AIS_InteractiveObject) h_theObject = theObject->NativeInstance;
	return ((::AIS_InteractiveContext*)_NativeInstance)->IsCurrent(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::AIS_InteractiveContext::InitCurrent()
{
	((::AIS_InteractiveContext*)_NativeInstance)->InitCurrent();
}

bool Macad::Occt::AIS_InteractiveContext::MoreCurrent()
{
	return ((::AIS_InteractiveContext*)_NativeInstance)->MoreCurrent();
}

void Macad::Occt::AIS_InteractiveContext::NextCurrent()
{
	((::AIS_InteractiveContext*)_NativeInstance)->NextCurrent();
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_InteractiveContext::Current()
{
	Handle(::AIS_InteractiveObject) _result;
	_result = ((::AIS_InteractiveContext*)_NativeInstance)->Current();
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted( _result.get());
}

int Macad::Occt::AIS_InteractiveContext::NbCurrents()
{
	return ((::AIS_InteractiveContext*)_NativeInstance)->NbCurrents();
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
	*_result =  (::TopoDS_Shape)((::AIS_InteractiveContext*)_NativeInstance)->DetectedCurrentShape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_InteractiveContext::DetectedCurrentObject()
{
	Handle(::AIS_InteractiveObject) _result;
	_result = ((::AIS_InteractiveContext*)_NativeInstance)->DetectedCurrentObject();
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted( _result.get());
}

Macad::Occt::Quantity_Color^ Macad::Occt::AIS_InteractiveContext::SubIntensityColor()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::AIS_InteractiveContext*)_NativeInstance)->SubIntensityColor();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::AIS_InteractiveContext::SetSubIntensityColor(Macad::Occt::Quantity_Color^ theColor)
{
	((::AIS_InteractiveContext*)_NativeInstance)->SetSubIntensityColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::AIS_InteractiveContext::SubIntensityOn(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->SubIntensityOn(h_theIObj, theToUpdateViewer);
	theIObj->NativeInstance = h_theIObj.get();
}

void Macad::Occt::AIS_InteractiveContext::SubIntensityOff(Macad::Occt::AIS_InteractiveObject^ theIObj, bool theToUpdateViewer)
{
	Handle(::AIS_InteractiveObject) h_theIObj = theIObj->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->SubIntensityOff(h_theIObj, theToUpdateViewer);
	theIObj->NativeInstance = h_theIObj.get();
}

Macad::Occt::AIS_Selection^ Macad::Occt::AIS_InteractiveContext::Selection()
{
	Handle(::AIS_Selection) _result;
	_result = ((::AIS_InteractiveContext*)_NativeInstance)->Selection();
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_Selection::CreateDowncasted( _result.get());
}

void Macad::Occt::AIS_InteractiveContext::SetSelection(Macad::Occt::AIS_Selection^ theSelection)
{
	Handle(::AIS_Selection) h_theSelection = theSelection->NativeInstance;
	((::AIS_InteractiveContext*)_NativeInstance)->SetSelection(h_theSelection);
	theSelection->NativeInstance = h_theSelection.get();
}


Macad::Occt::AIS_InteractiveContext^ Macad::Occt::AIS_InteractiveContext::CreateDowncasted(::AIS_InteractiveContext* instance)
{
	return gcnew Macad::Occt::AIS_InteractiveContext( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_InteractiveObject
//---------------------------------------------------------------------

Macad::Occt::AIS_InteractiveObject::AIS_InteractiveObject(Macad::Occt::AIS_InteractiveObject^ parameter1)
	: Macad::Occt::SelectMgr_SelectableObject(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::AIS_KindOfInteractive Macad::Occt::AIS_InteractiveObject::Type()
{
	return (Macad::Occt::AIS_KindOfInteractive)((::AIS_InteractiveObject*)_NativeInstance)->Type();
}

int Macad::Occt::AIS_InteractiveObject::Signature()
{
	return ((::AIS_InteractiveObject*)_NativeInstance)->Signature();
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
	return ((::AIS_InteractiveObject*)_NativeInstance)->HasInteractiveContext();
}

Macad::Occt::AIS_InteractiveContext^ Macad::Occt::AIS_InteractiveObject::InteractiveContext()
{
	::AIS_InteractiveContext* _result;
	_result = (::AIS_InteractiveContext*)((::AIS_InteractiveObject*)_NativeInstance)->InteractiveContext();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::AIS_InteractiveContext(_result);
}

void Macad::Occt::AIS_InteractiveObject::SetContext(Macad::Occt::AIS_InteractiveContext^ aCtx)
{
	Handle(::AIS_InteractiveContext) h_aCtx = aCtx->NativeInstance;
	((::AIS_InteractiveObject*)_NativeInstance)->SetContext(h_aCtx);
	aCtx->NativeInstance = h_aCtx.get();
}

bool Macad::Occt::AIS_InteractiveObject::HasOwner()
{
	return ((::AIS_InteractiveObject*)_NativeInstance)->HasOwner();
}

Macad::Occt::Standard_Transient^ Macad::Occt::AIS_InteractiveObject::GetOwner()
{
	throw gcnew System::NotImplementedException();
}

void Macad::Occt::AIS_InteractiveObject::SetOwner(Macad::Occt::Standard_Transient^ theApplicativeEntity)
{
	throw gcnew System::NotImplementedException();
}

void Macad::Occt::AIS_InteractiveObject::ClearOwner()
{
	((::AIS_InteractiveObject*)_NativeInstance)->ClearOwner();
}

bool Macad::Occt::AIS_InteractiveObject::ProcessDragging(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView, Macad::Occt::SelectMgr_EntityOwner^ theOwner, Macad::Occt::Graphic3d_Vec2i^ theDragFrom, Macad::Occt::Graphic3d_Vec2i^ theDragTo, Macad::Occt::AIS_DragAction theAction)
{
	Handle(::AIS_InteractiveContext) h_theCtx = theCtx->NativeInstance;
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	Handle(::SelectMgr_EntityOwner) h_theOwner = theOwner->NativeInstance;
	return ((::AIS_InteractiveObject*)_NativeInstance)->ProcessDragging(h_theCtx, h_theView, h_theOwner, *(::Graphic3d_Vec2i*)theDragFrom->NativeInstance, *(::Graphic3d_Vec2i*)theDragTo->NativeInstance, (::AIS_DragAction)theAction);
	theCtx->NativeInstance = h_theCtx.get();
	theView->NativeInstance = h_theView.get();
	theOwner->NativeInstance = h_theOwner.get();
}

Macad::Occt::AIS_InteractiveContext^ Macad::Occt::AIS_InteractiveObject::GetContext()
{
	Handle(::AIS_InteractiveContext) _result;
	_result = ((::AIS_InteractiveObject*)_NativeInstance)->GetContext();
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveContext::CreateDowncasted( _result.get());
}

bool Macad::Occt::AIS_InteractiveObject::HasPresentation()
{
	return ((::AIS_InteractiveObject*)_NativeInstance)->HasPresentation();
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::AIS_InteractiveObject::Presentation()
{
	Handle(::Graphic3d_Structure) _result;
	_result = ((::AIS_InteractiveObject*)_NativeInstance)->Presentation();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted( _result.get());
}

void Macad::Occt::AIS_InteractiveObject::SetAspect(Macad::Occt::Prs3d_BasicAspect^ anAspect)
{
	Handle(::Prs3d_BasicAspect) h_anAspect = anAspect->NativeInstance;
	((::AIS_InteractiveObject*)_NativeInstance)->SetAspect(h_anAspect);
	anAspect->NativeInstance = h_anAspect.get();
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
	if (instance->IsKind(STANDARD_TYPE(::AIS_ConnectedInteractive)))
		return Macad::Occt::AIS_ConnectedInteractive::CreateDowncasted((::AIS_ConnectedInteractive*)instance);
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

Macad::Occt::AIS_Animation::AIS_Animation(Macad::Occt::AIS_Animation^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_Animation(*(::AIS_Animation*)parameter1->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::AIS_Animation::Name()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::AIS_Animation*)_NativeInstance)->Name();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

double Macad::Occt::AIS_Animation::StartPts()
{
	return ((::AIS_Animation*)_NativeInstance)->StartPts();
}

void Macad::Occt::AIS_Animation::SetStartPts(double thePtsStart)
{
	((::AIS_Animation*)_NativeInstance)->SetStartPts(thePtsStart);
}

double Macad::Occt::AIS_Animation::Duration()
{
	return ((::AIS_Animation*)_NativeInstance)->Duration();
}

void Macad::Occt::AIS_Animation::UpdateTotalDuration()
{
	((::AIS_Animation*)_NativeInstance)->UpdateTotalDuration();
}

bool Macad::Occt::AIS_Animation::HasOwnDuration()
{
	return ((::AIS_Animation*)_NativeInstance)->HasOwnDuration();
}

double Macad::Occt::AIS_Animation::OwnDuration()
{
	return ((::AIS_Animation*)_NativeInstance)->OwnDuration();
}

void Macad::Occt::AIS_Animation::SetOwnDuration(double theDuration)
{
	((::AIS_Animation*)_NativeInstance)->SetOwnDuration(theDuration);
}

void Macad::Occt::AIS_Animation::Add(Macad::Occt::AIS_Animation^ theAnimation)
{
	Handle(::AIS_Animation) h_theAnimation = theAnimation->NativeInstance;
	((::AIS_Animation*)_NativeInstance)->Add(h_theAnimation);
	theAnimation->NativeInstance = h_theAnimation.get();
}

void Macad::Occt::AIS_Animation::Clear()
{
	((::AIS_Animation*)_NativeInstance)->Clear();
}

Macad::Occt::AIS_Animation^ Macad::Occt::AIS_Animation::Find(Macad::Occt::TCollection_AsciiString^ theAnimationName)
{
	Handle(::AIS_Animation) _result;
	_result = ((::AIS_Animation*)_NativeInstance)->Find(*(::TCollection_AsciiString*)theAnimationName->NativeInstance);
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_Animation::CreateDowncasted( _result.get());
}

bool Macad::Occt::AIS_Animation::Remove(Macad::Occt::AIS_Animation^ theAnimation)
{
	Handle(::AIS_Animation) h_theAnimation = theAnimation->NativeInstance;
	return ((::AIS_Animation*)_NativeInstance)->Remove(h_theAnimation);
	theAnimation->NativeInstance = h_theAnimation.get();
}

bool Macad::Occt::AIS_Animation::Replace(Macad::Occt::AIS_Animation^ theAnimationOld, Macad::Occt::AIS_Animation^ theAnimationNew)
{
	Handle(::AIS_Animation) h_theAnimationOld = theAnimationOld->NativeInstance;
	Handle(::AIS_Animation) h_theAnimationNew = theAnimationNew->NativeInstance;
	return ((::AIS_Animation*)_NativeInstance)->Replace(h_theAnimationOld, h_theAnimationNew);
	theAnimationOld->NativeInstance = h_theAnimationOld.get();
	theAnimationNew->NativeInstance = h_theAnimationNew.get();
}

void Macad::Occt::AIS_Animation::CopyFrom(Macad::Occt::AIS_Animation^ theOther)
{
	Handle(::AIS_Animation) h_theOther = theOther->NativeInstance;
	((::AIS_Animation*)_NativeInstance)->CopyFrom(h_theOther);
	theOther->NativeInstance = h_theOther.get();
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
	return ((::AIS_Animation*)_NativeInstance)->UpdateTimer();
}

double Macad::Occt::AIS_Animation::ElapsedTime()
{
	return ((::AIS_Animation*)_NativeInstance)->ElapsedTime();
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
	return ((::AIS_Animation*)_NativeInstance)->IsStopped();
}

bool Macad::Occt::AIS_Animation::Update(double thePts)
{
	return ((::AIS_Animation*)_NativeInstance)->Update(thePts);
}


Macad::Occt::AIS_Animation^ Macad::Occt::AIS_Animation::CreateDowncasted(::AIS_Animation* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::AIS_AnimationCamera)))
		return Macad::Occt::AIS_AnimationCamera::CreateDowncasted((::AIS_AnimationCamera*)instance);
	if (instance->IsKind(STANDARD_TYPE(::AIS_AnimationObject)))
		return Macad::Occt::AIS_AnimationObject::CreateDowncasted((::AIS_AnimationObject*)instance);

	return gcnew Macad::Occt::AIS_Animation( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_AnimationCamera
//---------------------------------------------------------------------

Macad::Occt::AIS_AnimationCamera::AIS_AnimationCamera(Macad::Occt::TCollection_AsciiString^ theAnimationName, Macad::Occt::V3d_View^ theView)
	: Macad::Occt::AIS_Animation(BaseClass::InitMode::Uninitialized)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	NativeInstance = new ::AIS_AnimationCamera(*(::TCollection_AsciiString*)theAnimationName->NativeInstance, h_theView);
	theView->NativeInstance = h_theView.get();
}

Macad::Occt::AIS_AnimationCamera::AIS_AnimationCamera(Macad::Occt::AIS_AnimationCamera^ parameter1)
	: Macad::Occt::AIS_Animation(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_AnimationCamera(*(::AIS_AnimationCamera*)parameter1->NativeInstance);
}

Macad::Occt::V3d_View^ Macad::Occt::AIS_AnimationCamera::View()
{
	Handle(::V3d_View) _result;
	_result = ((::AIS_AnimationCamera*)_NativeInstance)->View();
	 return _result.IsNull() ? nullptr : Macad::Occt::V3d_View::CreateDowncasted( _result.get());
}

void Macad::Occt::AIS_AnimationCamera::SetView(Macad::Occt::V3d_View^ theView)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::AIS_AnimationCamera*)_NativeInstance)->SetView(h_theView);
	theView->NativeInstance = h_theView.get();
}

Macad::Occt::Graphic3d_Camera^ Macad::Occt::AIS_AnimationCamera::CameraStart()
{
	Handle(::Graphic3d_Camera) _result;
	_result = ((::AIS_AnimationCamera*)_NativeInstance)->CameraStart();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Camera::CreateDowncasted( _result.get());
}

void Macad::Occt::AIS_AnimationCamera::SetCameraStart(Macad::Occt::Graphic3d_Camera^ theCameraStart)
{
	Handle(::Graphic3d_Camera) h_theCameraStart = theCameraStart->NativeInstance;
	((::AIS_AnimationCamera*)_NativeInstance)->SetCameraStart(h_theCameraStart);
	theCameraStart->NativeInstance = h_theCameraStart.get();
}

Macad::Occt::Graphic3d_Camera^ Macad::Occt::AIS_AnimationCamera::CameraEnd()
{
	Handle(::Graphic3d_Camera) _result;
	_result = ((::AIS_AnimationCamera*)_NativeInstance)->CameraEnd();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Camera::CreateDowncasted( _result.get());
}

void Macad::Occt::AIS_AnimationCamera::SetCameraEnd(Macad::Occt::Graphic3d_Camera^ theCameraEnd)
{
	Handle(::Graphic3d_Camera) h_theCameraEnd = theCameraEnd->NativeInstance;
	((::AIS_AnimationCamera*)_NativeInstance)->SetCameraEnd(h_theCameraEnd);
	theCameraEnd->NativeInstance = h_theCameraEnd.get();
}


Macad::Occt::AIS_AnimationCamera^ Macad::Occt::AIS_AnimationCamera::CreateDowncasted(::AIS_AnimationCamera* instance)
{
	return gcnew Macad::Occt::AIS_AnimationCamera( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_GlobalStatus
//---------------------------------------------------------------------

Macad::Occt::AIS_GlobalStatus::AIS_GlobalStatus()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_GlobalStatus();
}

Macad::Occt::AIS_GlobalStatus::AIS_GlobalStatus(Macad::Occt::AIS_DisplayStatus aStat, int aDispMode, int aSelMode, bool ishilighted, int aLayerIndex)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_GlobalStatus((::AIS_DisplayStatus)aStat, aDispMode, aSelMode, ishilighted, aLayerIndex);
}

Macad::Occt::AIS_GlobalStatus::AIS_GlobalStatus(Macad::Occt::AIS_DisplayStatus aStat, int aDispMode, int aSelMode, bool ishilighted)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_GlobalStatus((::AIS_DisplayStatus)aStat, aDispMode, aSelMode, ishilighted, 0);
}

Macad::Occt::AIS_GlobalStatus::AIS_GlobalStatus(Macad::Occt::AIS_DisplayStatus aStat, int aDispMode, int aSelMode)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_GlobalStatus((::AIS_DisplayStatus)aStat, aDispMode, aSelMode, false, 0);
}

Macad::Occt::AIS_GlobalStatus::AIS_GlobalStatus(Macad::Occt::AIS_GlobalStatus^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_GlobalStatus(*(::AIS_GlobalStatus*)parameter1->NativeInstance);
}

void Macad::Occt::AIS_GlobalStatus::SetGraphicStatus(Macad::Occt::AIS_DisplayStatus theStatus)
{
	((::AIS_GlobalStatus*)_NativeInstance)->SetGraphicStatus((::AIS_DisplayStatus)theStatus);
}

void Macad::Occt::AIS_GlobalStatus::AddSelectionMode(int theMode)
{
	((::AIS_GlobalStatus*)_NativeInstance)->AddSelectionMode(theMode);
}

void Macad::Occt::AIS_GlobalStatus::SetDisplayMode(int theMode)
{
	((::AIS_GlobalStatus*)_NativeInstance)->SetDisplayMode(theMode);
}

int Macad::Occt::AIS_GlobalStatus::DisplayMode()
{
	return ((::AIS_GlobalStatus*)_NativeInstance)->DisplayMode();
}

void Macad::Occt::AIS_GlobalStatus::SetLayerIndex(int theIndex)
{
	((::AIS_GlobalStatus*)_NativeInstance)->SetLayerIndex(theIndex);
}

void Macad::Occt::AIS_GlobalStatus::SetHilightStatus(bool theStatus)
{
	((::AIS_GlobalStatus*)_NativeInstance)->SetHilightStatus(theStatus);
}

void Macad::Occt::AIS_GlobalStatus::SetHilightStyle(Macad::Occt::Prs3d_Drawer^ theStyle)
{
	Handle(::Prs3d_Drawer) h_theStyle = theStyle->NativeInstance;
	((::AIS_GlobalStatus*)_NativeInstance)->SetHilightStyle(h_theStyle);
	theStyle->NativeInstance = h_theStyle.get();
}

Macad::Occt::Prs3d_Drawer^ Macad::Occt::AIS_GlobalStatus::HilightStyle()
{
	Handle(::Prs3d_Drawer) _result;
	_result = ((::AIS_GlobalStatus*)_NativeInstance)->HilightStyle();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_Drawer::CreateDowncasted( _result.get());
}

bool Macad::Occt::AIS_GlobalStatus::IsSubIntensityOn()
{
	return ((::AIS_GlobalStatus*)_NativeInstance)->IsSubIntensityOn();
}

void Macad::Occt::AIS_GlobalStatus::SubIntensityOn()
{
	((::AIS_GlobalStatus*)_NativeInstance)->SubIntensityOn();
}

void Macad::Occt::AIS_GlobalStatus::SubIntensityOff()
{
	((::AIS_GlobalStatus*)_NativeInstance)->SubIntensityOff();
}

void Macad::Occt::AIS_GlobalStatus::RemoveSelectionMode(int aMode)
{
	((::AIS_GlobalStatus*)_NativeInstance)->RemoveSelectionMode(aMode);
}

void Macad::Occt::AIS_GlobalStatus::ClearSelectionModes()
{
	((::AIS_GlobalStatus*)_NativeInstance)->ClearSelectionModes();
}

Macad::Occt::AIS_DisplayStatus Macad::Occt::AIS_GlobalStatus::GraphicStatus()
{
	return (Macad::Occt::AIS_DisplayStatus)((::AIS_GlobalStatus*)_NativeInstance)->GraphicStatus();
}

Macad::Occt::TColStd_ListOfInteger^ Macad::Occt::AIS_GlobalStatus::SelectionModes()
{
	::TColStd_ListOfInteger* _result = new ::TColStd_ListOfInteger();
	*_result =  (::TColStd_ListOfInteger)((::AIS_GlobalStatus*)_NativeInstance)->SelectionModes();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfInteger(_result);
}

bool Macad::Occt::AIS_GlobalStatus::IsHilighted()
{
	return ((::AIS_GlobalStatus*)_NativeInstance)->IsHilighted();
}

bool Macad::Occt::AIS_GlobalStatus::IsSModeIn(int aMode)
{
	return ((::AIS_GlobalStatus*)_NativeInstance)->IsSModeIn(aMode);
}

int Macad::Occt::AIS_GlobalStatus::GetLayerIndex()
{
	return ((::AIS_GlobalStatus*)_NativeInstance)->GetLayerIndex();
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

Macad::Occt::AIS_Selection::AIS_Selection(Macad::Occt::AIS_Selection^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_Selection(*(::AIS_Selection*)parameter1->NativeInstance);
}

void Macad::Occt::AIS_Selection::Clear()
{
	((::AIS_Selection*)_NativeInstance)->Clear();
}

Macad::Occt::AIS_SelectStatus Macad::Occt::AIS_Selection::Select(Macad::Occt::SelectMgr_EntityOwner^ theObject)
{
	Handle(::SelectMgr_EntityOwner) h_theObject = theObject->NativeInstance;
	return (Macad::Occt::AIS_SelectStatus)((::AIS_Selection*)_NativeInstance)->Select(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

Macad::Occt::AIS_SelectStatus Macad::Occt::AIS_Selection::AddSelect(Macad::Occt::SelectMgr_EntityOwner^ theObject)
{
	Handle(::SelectMgr_EntityOwner) h_theObject = theObject->NativeInstance;
	return (Macad::Occt::AIS_SelectStatus)((::AIS_Selection*)_NativeInstance)->AddSelect(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::AIS_Selection::ClearAndSelect(Macad::Occt::SelectMgr_EntityOwner^ theObject)
{
	Handle(::SelectMgr_EntityOwner) h_theObject = theObject->NativeInstance;
	((::AIS_Selection*)_NativeInstance)->ClearAndSelect(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

bool Macad::Occt::AIS_Selection::IsSelected(Macad::Occt::SelectMgr_EntityOwner^ theObject)
{
	Handle(::SelectMgr_EntityOwner) h_theObject = theObject->NativeInstance;
	return ((::AIS_Selection*)_NativeInstance)->IsSelected(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

Macad::Occt::AIS_NListOfEntityOwner^ Macad::Occt::AIS_Selection::Objects()
{
	::AIS_NListOfEntityOwner* _result = new ::AIS_NListOfEntityOwner();
	*_result =  (::AIS_NListOfEntityOwner)((::AIS_Selection*)_NativeInstance)->Objects();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::AIS_NListOfEntityOwner(_result);
}

int Macad::Occt::AIS_Selection::Extent()
{
	return ((::AIS_Selection*)_NativeInstance)->Extent();
}

bool Macad::Occt::AIS_Selection::IsEmpty()
{
	return ((::AIS_Selection*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::AIS_Selection::Init()
{
	((::AIS_Selection*)_NativeInstance)->Init();
}

bool Macad::Occt::AIS_Selection::More()
{
	return ((::AIS_Selection*)_NativeInstance)->More();
}

void Macad::Occt::AIS_Selection::Next()
{
	((::AIS_Selection*)_NativeInstance)->Next();
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_Selection::Value()
{
	Handle(::SelectMgr_EntityOwner) _result;
	_result = ((::AIS_Selection*)_NativeInstance)->Value();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted( _result.get());
}


Macad::Occt::AIS_Selection^ Macad::Occt::AIS_Selection::CreateDowncasted(::AIS_Selection* instance)
{
	return gcnew Macad::Occt::AIS_Selection( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_AnimationObject
//---------------------------------------------------------------------

Macad::Occt::AIS_AnimationObject::AIS_AnimationObject(Macad::Occt::TCollection_AsciiString^ theAnimationName, Macad::Occt::AIS_InteractiveContext^ theContext, Macad::Occt::AIS_InteractiveObject^ theObject, Macad::Occt::Trsf theTrsfStart, Macad::Occt::Trsf theTrsfEnd)
	: Macad::Occt::AIS_Animation(BaseClass::InitMode::Uninitialized)
{
	Handle(::AIS_InteractiveContext) h_theContext = theContext->NativeInstance;
	Handle(::AIS_InteractiveObject) h_theObject = theObject->NativeInstance;
	pin_ptr<Macad::Occt::Trsf> pp_theTrsfStart = &theTrsfStart;
	pin_ptr<Macad::Occt::Trsf> pp_theTrsfEnd = &theTrsfEnd;
	NativeInstance = new ::AIS_AnimationObject(*(::TCollection_AsciiString*)theAnimationName->NativeInstance, h_theContext, h_theObject, *(gp_Trsf*)pp_theTrsfStart, *(gp_Trsf*)pp_theTrsfEnd);
	theContext->NativeInstance = h_theContext.get();
	theObject->NativeInstance = h_theObject.get();
}

Macad::Occt::AIS_AnimationObject::AIS_AnimationObject(Macad::Occt::AIS_AnimationObject^ parameter1)
	: Macad::Occt::AIS_Animation(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_AnimationObject(*(::AIS_AnimationObject*)parameter1->NativeInstance);
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

Macad::Occt::AIS_AttributeFilter::AIS_AttributeFilter(Macad::Occt::AIS_AttributeFilter^ parameter1)
	: Macad::Occt::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_AttributeFilter(*(::AIS_AttributeFilter*)parameter1->NativeInstance);
}

bool Macad::Occt::AIS_AttributeFilter::HasColor()
{
	return ((::AIS_AttributeFilter*)_NativeInstance)->HasColor();
}

bool Macad::Occt::AIS_AttributeFilter::HasWidth()
{
	return ((::AIS_AttributeFilter*)_NativeInstance)->HasWidth();
}

void Macad::Occt::AIS_AttributeFilter::SetColor(Macad::Occt::Quantity_NameOfColor aCol)
{
	((::AIS_AttributeFilter*)_NativeInstance)->SetColor((::Quantity_NameOfColor)aCol);
}

void Macad::Occt::AIS_AttributeFilter::SetWidth(double aWidth)
{
	((::AIS_AttributeFilter*)_NativeInstance)->SetWidth(aWidth);
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
	Handle(::SelectMgr_EntityOwner) h_anObj = anObj->NativeInstance;
	return ((::AIS_AttributeFilter*)_NativeInstance)->IsOk(h_anObj);
	anObj->NativeInstance = h_anObj.get();
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
	Handle(::Geom_Line) h_aComponent = aComponent->NativeInstance;
	NativeInstance = new ::AIS_Axis(h_aComponent);
	aComponent->NativeInstance = h_aComponent.get();
}

Macad::Occt::AIS_Axis::AIS_Axis(Macad::Occt::Geom_Axis2Placement^ aComponent, Macad::Occt::AIS_TypeOfAxis anAxisType)
	: Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Axis2Placement) h_aComponent = aComponent->NativeInstance;
	NativeInstance = new ::AIS_Axis(h_aComponent, (::AIS_TypeOfAxis)anAxisType);
	aComponent->NativeInstance = h_aComponent.get();
}

Macad::Occt::AIS_Axis::AIS_Axis(Macad::Occt::Geom_Axis1Placement^ anAxis)
	: Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Axis1Placement) h_anAxis = anAxis->NativeInstance;
	NativeInstance = new ::AIS_Axis(h_anAxis);
	anAxis->NativeInstance = h_anAxis.get();
}

Macad::Occt::AIS_Axis::AIS_Axis(Macad::Occt::AIS_Axis^ parameter1)
	: Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_Axis(*(::AIS_Axis*)parameter1->NativeInstance);
}

Macad::Occt::Geom_Line^ Macad::Occt::AIS_Axis::Component()
{
	Handle(::Geom_Line) _result;
	_result = ((::AIS_Axis*)_NativeInstance)->Component();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Line::CreateDowncasted( _result.get());
}

void Macad::Occt::AIS_Axis::SetComponent(Macad::Occt::Geom_Line^ aComponent)
{
	Handle(::Geom_Line) h_aComponent = aComponent->NativeInstance;
	((::AIS_Axis*)_NativeInstance)->SetComponent(h_aComponent);
	aComponent->NativeInstance = h_aComponent.get();
}

Macad::Occt::Geom_Axis2Placement^ Macad::Occt::AIS_Axis::Axis2Placement()
{
	Handle(::Geom_Axis2Placement) _result;
	_result = ((::AIS_Axis*)_NativeInstance)->Axis2Placement();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Axis2Placement::CreateDowncasted( _result.get());
}

void Macad::Occt::AIS_Axis::SetAxis2Placement(Macad::Occt::Geom_Axis2Placement^ aComponent, Macad::Occt::AIS_TypeOfAxis anAxisType)
{
	Handle(::Geom_Axis2Placement) h_aComponent = aComponent->NativeInstance;
	((::AIS_Axis*)_NativeInstance)->SetAxis2Placement(h_aComponent, (::AIS_TypeOfAxis)anAxisType);
	aComponent->NativeInstance = h_aComponent.get();
}

void Macad::Occt::AIS_Axis::SetAxis1Placement(Macad::Occt::Geom_Axis1Placement^ anAxis)
{
	Handle(::Geom_Axis1Placement) h_anAxis = anAxis->NativeInstance;
	((::AIS_Axis*)_NativeInstance)->SetAxis1Placement(h_anAxis);
	anAxis->NativeInstance = h_anAxis.get();
}

Macad::Occt::AIS_TypeOfAxis Macad::Occt::AIS_Axis::TypeOfAxis()
{
	return (Macad::Occt::AIS_TypeOfAxis)((::AIS_Axis*)_NativeInstance)->TypeOfAxis();
}

void Macad::Occt::AIS_Axis::SetTypeOfAxis(Macad::Occt::AIS_TypeOfAxis theTypeAxis)
{
	((::AIS_Axis*)_NativeInstance)->SetTypeOfAxis((::AIS_TypeOfAxis)theTypeAxis);
}

bool Macad::Occt::AIS_Axis::IsXYZAxis()
{
	return ((::AIS_Axis*)_NativeInstance)->IsXYZAxis();
}

bool Macad::Occt::AIS_Axis::AcceptDisplayMode(int aMode)
{
	return ((::AIS_Axis*)_NativeInstance)->AcceptDisplayMode(aMode);
}

int Macad::Occt::AIS_Axis::Signature()
{
	return ((::AIS_Axis*)_NativeInstance)->Signature();
}

Macad::Occt::AIS_KindOfInteractive Macad::Occt::AIS_Axis::Type()
{
	return (Macad::Occt::AIS_KindOfInteractive)((::AIS_Axis*)_NativeInstance)->Type();
}

void Macad::Occt::AIS_Axis::SetColor(Macad::Occt::Quantity_Color^ aColor)
{
	((::AIS_Axis*)_NativeInstance)->SetColor(*(::Quantity_Color*)aColor->NativeInstance);
}

void Macad::Occt::AIS_Axis::SetWidth(double aValue)
{
	((::AIS_Axis*)_NativeInstance)->SetWidth(aValue);
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

Macad::Occt::AIS_BadEdgeFilter::AIS_BadEdgeFilter(Macad::Occt::AIS_BadEdgeFilter^ parameter1)
	: Macad::Occt::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_BadEdgeFilter(*(::AIS_BadEdgeFilter*)parameter1->NativeInstance);
}

bool Macad::Occt::AIS_BadEdgeFilter::ActsOn(Macad::Occt::TopAbs_ShapeEnum aType)
{
	return ((::AIS_BadEdgeFilter*)_NativeInstance)->ActsOn((::TopAbs_ShapeEnum)aType);
}

bool Macad::Occt::AIS_BadEdgeFilter::IsOk(Macad::Occt::SelectMgr_EntityOwner^ EO)
{
	Handle(::SelectMgr_EntityOwner) h_EO = EO->NativeInstance;
	return ((::AIS_BadEdgeFilter*)_NativeInstance)->IsOk(h_EO);
	EO->NativeInstance = h_EO.get();
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

Macad::Occt::AIS_C0RegularityFilter::AIS_C0RegularityFilter(Macad::Occt::AIS_C0RegularityFilter^ parameter1)
	: Macad::Occt::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_C0RegularityFilter(*(::AIS_C0RegularityFilter*)parameter1->NativeInstance);
}

bool Macad::Occt::AIS_C0RegularityFilter::ActsOn(Macad::Occt::TopAbs_ShapeEnum aType)
{
	return ((::AIS_C0RegularityFilter*)_NativeInstance)->ActsOn((::TopAbs_ShapeEnum)aType);
}

bool Macad::Occt::AIS_C0RegularityFilter::IsOk(Macad::Occt::SelectMgr_EntityOwner^ EO)
{
	Handle(::SelectMgr_EntityOwner) h_EO = EO->NativeInstance;
	return ((::AIS_C0RegularityFilter*)_NativeInstance)->IsOk(h_EO);
	EO->NativeInstance = h_EO.get();
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

Macad::Occt::AIS_CameraFrustum::AIS_CameraFrustum(Macad::Occt::AIS_CameraFrustum^ parameter1)
	: Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_CameraFrustum(*(::AIS_CameraFrustum*)parameter1->NativeInstance);
}

void Macad::Occt::AIS_CameraFrustum::SetCameraFrustum(Macad::Occt::Graphic3d_Camera^ theCamera)
{
	Handle(::Graphic3d_Camera) h_theCamera = theCamera->NativeInstance;
	((::AIS_CameraFrustum*)_NativeInstance)->SetCameraFrustum(h_theCamera);
	theCamera->NativeInstance = h_theCamera.get();
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
	return ((::AIS_CameraFrustum*)_NativeInstance)->AcceptDisplayMode(theMode);
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
	Handle(::Geom_Circle) h_aCircle = aCircle->NativeInstance;
	NativeInstance = new ::AIS_Circle(h_aCircle);
	aCircle->NativeInstance = h_aCircle.get();
}

Macad::Occt::AIS_Circle::AIS_Circle(Macad::Occt::Geom_Circle^ theCircle, double theUStart, double theUEnd, bool theIsFilledCircleSens)
	: Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Circle) h_theCircle = theCircle->NativeInstance;
	NativeInstance = new ::AIS_Circle(h_theCircle, theUStart, theUEnd, theIsFilledCircleSens);
	theCircle->NativeInstance = h_theCircle.get();
}

Macad::Occt::AIS_Circle::AIS_Circle(Macad::Occt::Geom_Circle^ theCircle, double theUStart, double theUEnd)
	: Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Circle) h_theCircle = theCircle->NativeInstance;
	NativeInstance = new ::AIS_Circle(h_theCircle, theUStart, theUEnd, false);
	theCircle->NativeInstance = h_theCircle.get();
}

Macad::Occt::AIS_Circle::AIS_Circle(Macad::Occt::AIS_Circle^ parameter1)
	: Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_Circle(*(::AIS_Circle*)parameter1->NativeInstance);
}

int Macad::Occt::AIS_Circle::Signature()
{
	return ((::AIS_Circle*)_NativeInstance)->Signature();
}

Macad::Occt::AIS_KindOfInteractive Macad::Occt::AIS_Circle::Type()
{
	return (Macad::Occt::AIS_KindOfInteractive)((::AIS_Circle*)_NativeInstance)->Type();
}

Macad::Occt::Geom_Circle^ Macad::Occt::AIS_Circle::Circle()
{
	Handle(::Geom_Circle) _result;
	_result = ((::AIS_Circle*)_NativeInstance)->Circle();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Circle::CreateDowncasted( _result.get());
}

void Macad::Occt::AIS_Circle::Parameters(double% theU1, double% theU2)
{
	pin_ptr<double> pp_theU1 = &theU1;
	pin_ptr<double> pp_theU2 = &theU2;
	((::AIS_Circle*)_NativeInstance)->Parameters(*(Standard_Real*)pp_theU1, *(Standard_Real*)pp_theU2);
}

void Macad::Occt::AIS_Circle::SetCircle(Macad::Occt::Geom_Circle^ theCircle)
{
	Handle(::Geom_Circle) h_theCircle = theCircle->NativeInstance;
	((::AIS_Circle*)_NativeInstance)->SetCircle(h_theCircle);
	theCircle->NativeInstance = h_theCircle.get();
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
	return ((::AIS_Circle*)_NativeInstance)->IsFilledCircleSens();
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
	Handle(::Prs3d_Drawer) h_theLink = theLink->NativeInstance;
	NativeInstance = new ::AIS_ColoredDrawer(h_theLink);
	theLink->NativeInstance = h_theLink.get();
}

Macad::Occt::AIS_ColoredDrawer::AIS_ColoredDrawer(Macad::Occt::AIS_ColoredDrawer^ parameter1)
	: Macad::Occt::Prs3d_Drawer(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_ColoredDrawer(*(::AIS_ColoredDrawer*)parameter1->NativeInstance);
}

bool Macad::Occt::AIS_ColoredDrawer::IsHidden()
{
	return ((::AIS_ColoredDrawer*)_NativeInstance)->IsHidden();
}

void Macad::Occt::AIS_ColoredDrawer::SetHidden(bool theToHide)
{
	((::AIS_ColoredDrawer*)_NativeInstance)->SetHidden(theToHide);
}

bool Macad::Occt::AIS_ColoredDrawer::HasOwnMaterial()
{
	return ((::AIS_ColoredDrawer*)_NativeInstance)->HasOwnMaterial();
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
	return ((::AIS_ColoredDrawer*)_NativeInstance)->HasOwnColor();
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
	return ((::AIS_ColoredDrawer*)_NativeInstance)->HasOwnTransparency();
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
	return ((::AIS_ColoredDrawer*)_NativeInstance)->HasOwnWidth();
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

Macad::Occt::AIS_Shape::AIS_Shape(Macad::Occt::AIS_Shape^ parameter1)
	: Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_Shape(*(::AIS_Shape*)parameter1->NativeInstance);
}

int Macad::Occt::AIS_Shape::Signature()
{
	return ((::AIS_Shape*)_NativeInstance)->Signature();
}

Macad::Occt::AIS_KindOfInteractive Macad::Occt::AIS_Shape::Type()
{
	return (Macad::Occt::AIS_KindOfInteractive)((::AIS_Shape*)_NativeInstance)->Type();
}

bool Macad::Occt::AIS_Shape::AcceptShapeDecomposition()
{
	return ((::AIS_Shape*)_NativeInstance)->AcceptShapeDecomposition();
}

bool Macad::Occt::AIS_Shape::AcceptDisplayMode(int theMode)
{
	return ((::AIS_Shape*)_NativeInstance)->AcceptDisplayMode(theMode);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::AIS_Shape::Shape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::AIS_Shape*)_NativeInstance)->Shape();
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
	return ((::AIS_Shape*)_NativeInstance)->SetOwnDeviationCoefficient();
}

bool Macad::Occt::AIS_Shape::SetOwnDeviationAngle()
{
	return ((::AIS_Shape*)_NativeInstance)->SetOwnDeviationAngle();
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
	return ((::AIS_Shape*)_NativeInstance)->UserAngle();
}

void Macad::Occt::AIS_Shape::SetOwnDeviationAngle(double anAngle)
{
	((::AIS_Shape*)_NativeInstance)->SetOwnDeviationAngle(anAngle);
}

bool Macad::Occt::AIS_Shape::OwnDeviationCoefficient(double% aCoefficient, double% aPreviousCoefficient)
{
	pin_ptr<double> pp_aCoefficient = &aCoefficient;
	pin_ptr<double> pp_aPreviousCoefficient = &aPreviousCoefficient;
	return ((::AIS_Shape*)_NativeInstance)->OwnDeviationCoefficient(*(Standard_Real*)pp_aCoefficient, *(Standard_Real*)pp_aPreviousCoefficient);
}

bool Macad::Occt::AIS_Shape::OwnDeviationAngle(double% anAngle, double% aPreviousAngle)
{
	pin_ptr<double> pp_anAngle = &anAngle;
	pin_ptr<double> pp_aPreviousAngle = &aPreviousAngle;
	return ((::AIS_Shape*)_NativeInstance)->OwnDeviationAngle(*(Standard_Real*)pp_anAngle, *(Standard_Real*)pp_aPreviousAngle);
}

void Macad::Occt::AIS_Shape::SetTypeOfHLR(Macad::Occt::Prs3d_TypeOfHLR theTypeOfHLR)
{
	((::AIS_Shape*)_NativeInstance)->SetTypeOfHLR((::Prs3d_TypeOfHLR)theTypeOfHLR);
}

Macad::Occt::Prs3d_TypeOfHLR Macad::Occt::AIS_Shape::TypeOfHLR()
{
	return (Macad::Occt::Prs3d_TypeOfHLR)((::AIS_Shape*)_NativeInstance)->TypeOfHLR();
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
	*_result =  (::Bnd_Box)((::AIS_Shape*)_NativeInstance)->BoundingBox();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

void Macad::Occt::AIS_Shape::Color(Macad::Occt::Quantity_Color^ aColor)
{
	((::AIS_Shape*)_NativeInstance)->Color(*(::Quantity_Color*)aColor->NativeInstance);
}

Macad::Occt::Graphic3d_NameOfMaterial Macad::Occt::AIS_Shape::Material()
{
	return (Macad::Occt::Graphic3d_NameOfMaterial)((::AIS_Shape*)_NativeInstance)->Material();
}

double Macad::Occt::AIS_Shape::Transparency()
{
	return ((::AIS_Shape*)_NativeInstance)->Transparency();
}

Macad::Occt::TopAbs_ShapeEnum Macad::Occt::AIS_Shape::SelectionType(int theSelMode)
{
	return (Macad::Occt::TopAbs_ShapeEnum)::AIS_Shape::SelectionType(theSelMode);
}

int Macad::Occt::AIS_Shape::SelectionMode(Macad::Occt::TopAbs_ShapeEnum theShapeType)
{
	return ::AIS_Shape::SelectionMode((::TopAbs_ShapeEnum)theShapeType);
}

Macad::Occt::Pnt2d Macad::Occt::AIS_Shape::TextureRepeatUV()
{
	return Macad::Occt::Pnt2d(((::AIS_Shape*)_NativeInstance)->TextureRepeatUV());
}

void Macad::Occt::AIS_Shape::SetTextureRepeatUV(Macad::Occt::Pnt2d theRepeatUV)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_theRepeatUV = &theRepeatUV;
	((::AIS_Shape*)_NativeInstance)->SetTextureRepeatUV(*(gp_Pnt2d*)pp_theRepeatUV);
}

Macad::Occt::Pnt2d Macad::Occt::AIS_Shape::TextureOriginUV()
{
	return Macad::Occt::Pnt2d(((::AIS_Shape*)_NativeInstance)->TextureOriginUV());
}

void Macad::Occt::AIS_Shape::SetTextureOriginUV(Macad::Occt::Pnt2d theOriginUV)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_theOriginUV = &theOriginUV;
	((::AIS_Shape*)_NativeInstance)->SetTextureOriginUV(*(gp_Pnt2d*)pp_theOriginUV);
}

Macad::Occt::Pnt2d Macad::Occt::AIS_Shape::TextureScaleUV()
{
	return Macad::Occt::Pnt2d(((::AIS_Shape*)_NativeInstance)->TextureScaleUV());
}

void Macad::Occt::AIS_Shape::SetTextureScaleUV(Macad::Occt::Pnt2d theScaleUV)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_theScaleUV = &theScaleUV;
	((::AIS_Shape*)_NativeInstance)->SetTextureScaleUV(*(gp_Pnt2d*)pp_theScaleUV);
}

void Macad::Occt::AIS_Shape::computeHlrPresentation(Macad::Occt::Graphic3d_Camera^ theProjector, Macad::Occt::Graphic3d_Structure^ thePrs, Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::Prs3d_Drawer^ theDrawer)
{
	Handle(::Graphic3d_Camera) h_theProjector = theProjector->NativeInstance;
	Handle(::Graphic3d_Structure) h_thePrs = thePrs->NativeInstance;
	Handle(::Prs3d_Drawer) h_theDrawer = theDrawer->NativeInstance;
	::AIS_Shape::computeHlrPresentation(h_theProjector, h_thePrs, *(::TopoDS_Shape*)theShape->NativeInstance, h_theDrawer);
	theProjector->NativeInstance = h_theProjector.get();
	thePrs->NativeInstance = h_thePrs.get();
	theDrawer->NativeInstance = h_theDrawer.get();
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
	Handle(::AIS_Shape) h_theShape = theShape->NativeInstance;
	NativeInstance = new ::AIS_ColoredShape(h_theShape);
	theShape->NativeInstance = h_theShape.get();
}

Macad::Occt::AIS_ColoredShape::AIS_ColoredShape(Macad::Occt::AIS_ColoredShape^ parameter1)
	: Macad::Occt::AIS_Shape(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_ColoredShape(*(::AIS_ColoredShape*)parameter1->NativeInstance);
}

Macad::Occt::AIS_ColoredDrawer^ Macad::Occt::AIS_ColoredShape::CustomAspects(Macad::Occt::TopoDS_Shape^ theShape)
{
	Handle(::AIS_ColoredDrawer) _result;
	_result = ((::AIS_ColoredShape*)_NativeInstance)->CustomAspects(*(::TopoDS_Shape*)theShape->NativeInstance);
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_ColoredDrawer::CreateDowncasted( _result.get());
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
	*_result =  (::AIS_DataMapOfShapeDrawer)((::AIS_ColoredShape*)_NativeInstance)->CustomAspectsMap();
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
//  Class  AIS_ConnectedInteractive
//---------------------------------------------------------------------

Macad::Occt::AIS_ConnectedInteractive::AIS_ConnectedInteractive(Macad::Occt::AIS_ConnectedInteractive^ parameter1)
	: Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_ConnectedInteractive(*(::AIS_ConnectedInteractive*)parameter1->NativeInstance);
}

Macad::Occt::AIS_KindOfInteractive Macad::Occt::AIS_ConnectedInteractive::Type()
{
	return (Macad::Occt::AIS_KindOfInteractive)((::AIS_ConnectedInteractive*)_NativeInstance)->Type();
}

int Macad::Occt::AIS_ConnectedInteractive::Signature()
{
	return ((::AIS_ConnectedInteractive*)_NativeInstance)->Signature();
}

void Macad::Occt::AIS_ConnectedInteractive::Connect(Macad::Occt::AIS_InteractiveObject^ theAnotherObj)
{
	Handle(::AIS_InteractiveObject) h_theAnotherObj = theAnotherObj->NativeInstance;
	((::AIS_ConnectedInteractive*)_NativeInstance)->Connect(h_theAnotherObj);
	theAnotherObj->NativeInstance = h_theAnotherObj.get();
}

void Macad::Occt::AIS_ConnectedInteractive::Connect(Macad::Occt::AIS_InteractiveObject^ theAnotherObj, Macad::Occt::Trsf theLocation)
{
	Handle(::AIS_InteractiveObject) h_theAnotherObj = theAnotherObj->NativeInstance;
	pin_ptr<Macad::Occt::Trsf> pp_theLocation = &theLocation;
	((::AIS_ConnectedInteractive*)_NativeInstance)->Connect(h_theAnotherObj, *(gp_Trsf*)pp_theLocation);
	theAnotherObj->NativeInstance = h_theAnotherObj.get();
}

void Macad::Occt::AIS_ConnectedInteractive::Connect(Macad::Occt::AIS_InteractiveObject^ theAnotherObj, Macad::Occt::TopLoc_Datum3D^ theLocation)
{
	Handle(::AIS_InteractiveObject) h_theAnotherObj = theAnotherObj->NativeInstance;
	Handle(::TopLoc_Datum3D) h_theLocation = theLocation->NativeInstance;
	((::AIS_ConnectedInteractive*)_NativeInstance)->Connect(h_theAnotherObj, h_theLocation);
	theAnotherObj->NativeInstance = h_theAnotherObj.get();
	theLocation->NativeInstance = h_theLocation.get();
}

bool Macad::Occt::AIS_ConnectedInteractive::HasConnection()
{
	return ((::AIS_ConnectedInteractive*)_NativeInstance)->HasConnection();
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_ConnectedInteractive::ConnectedTo()
{
	Handle(::AIS_InteractiveObject) _result;
	_result = ((::AIS_ConnectedInteractive*)_NativeInstance)->ConnectedTo();
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted( _result.get());
}

void Macad::Occt::AIS_ConnectedInteractive::Disconnect()
{
	((::AIS_ConnectedInteractive*)_NativeInstance)->Disconnect();
}

bool Macad::Occt::AIS_ConnectedInteractive::AcceptShapeDecomposition()
{
	return ((::AIS_ConnectedInteractive*)_NativeInstance)->AcceptShapeDecomposition();
}

bool Macad::Occt::AIS_ConnectedInteractive::AcceptDisplayMode(int theMode)
{
	return ((::AIS_ConnectedInteractive*)_NativeInstance)->AcceptDisplayMode(theMode);
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

Macad::Occt::AIS_ExclusionFilter::AIS_ExclusionFilter(Macad::Occt::AIS_ExclusionFilter^ parameter1)
	: Macad::Occt::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_ExclusionFilter(*(::AIS_ExclusionFilter*)parameter1->NativeInstance);
}

bool Macad::Occt::AIS_ExclusionFilter::IsOk(Macad::Occt::SelectMgr_EntityOwner^ anObj)
{
	Handle(::SelectMgr_EntityOwner) h_anObj = anObj->NativeInstance;
	return ((::AIS_ExclusionFilter*)_NativeInstance)->IsOk(h_anObj);
	anObj->NativeInstance = h_anObj.get();
}

bool Macad::Occt::AIS_ExclusionFilter::Add(Macad::Occt::AIS_KindOfInteractive TypeToExclude)
{
	return ((::AIS_ExclusionFilter*)_NativeInstance)->Add((::AIS_KindOfInteractive)TypeToExclude);
}

bool Macad::Occt::AIS_ExclusionFilter::Add(Macad::Occt::AIS_KindOfInteractive TypeToExclude, int SignatureInType)
{
	return ((::AIS_ExclusionFilter*)_NativeInstance)->Add((::AIS_KindOfInteractive)TypeToExclude, SignatureInType);
}

bool Macad::Occt::AIS_ExclusionFilter::Remove(Macad::Occt::AIS_KindOfInteractive TypeToExclude)
{
	return ((::AIS_ExclusionFilter*)_NativeInstance)->Remove((::AIS_KindOfInteractive)TypeToExclude);
}

bool Macad::Occt::AIS_ExclusionFilter::Remove(Macad::Occt::AIS_KindOfInteractive TypeToExclude, int SignatureInType)
{
	return ((::AIS_ExclusionFilter*)_NativeInstance)->Remove((::AIS_KindOfInteractive)TypeToExclude, SignatureInType);
}

void Macad::Occt::AIS_ExclusionFilter::Clear()
{
	((::AIS_ExclusionFilter*)_NativeInstance)->Clear();
}

bool Macad::Occt::AIS_ExclusionFilter::IsExclusionFlagOn()
{
	return ((::AIS_ExclusionFilter*)_NativeInstance)->IsExclusionFlagOn();
}

void Macad::Occt::AIS_ExclusionFilter::SetExclusionFlag(bool Status)
{
	((::AIS_ExclusionFilter*)_NativeInstance)->SetExclusionFlag(Status);
}

bool Macad::Occt::AIS_ExclusionFilter::IsStored(Macad::Occt::AIS_KindOfInteractive aType)
{
	return ((::AIS_ExclusionFilter*)_NativeInstance)->IsStored((::AIS_KindOfInteractive)aType);
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
	: BaseClass<::AIS_GraphicTool>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::AIS_GraphicTool();
}

Macad::Occt::AIS_GraphicTool::AIS_GraphicTool(Macad::Occt::AIS_GraphicTool^ parameter1)
	: BaseClass<::AIS_GraphicTool>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::AIS_GraphicTool(*(::AIS_GraphicTool*)parameter1->NativeInstance);
}

Macad::Occt::Quantity_NameOfColor Macad::Occt::AIS_GraphicTool::GetLineColor(Macad::Occt::Prs3d_Drawer^ aDrawer, Macad::Occt::AIS_TypeOfAttribute TheTypeOfAttributes)
{
	Handle(::Prs3d_Drawer) h_aDrawer = aDrawer->NativeInstance;
	return (Macad::Occt::Quantity_NameOfColor)::AIS_GraphicTool::GetLineColor(h_aDrawer, (::AIS_TypeOfAttribute)TheTypeOfAttributes);
	aDrawer->NativeInstance = h_aDrawer.get();
}

void Macad::Occt::AIS_GraphicTool::GetLineColor(Macad::Occt::Prs3d_Drawer^ aDrawer, Macad::Occt::AIS_TypeOfAttribute TheTypeOfAttributes, Macad::Occt::Quantity_Color^ TheLineColor)
{
	Handle(::Prs3d_Drawer) h_aDrawer = aDrawer->NativeInstance;
	::AIS_GraphicTool::GetLineColor(h_aDrawer, (::AIS_TypeOfAttribute)TheTypeOfAttributes, *(::Quantity_Color*)TheLineColor->NativeInstance);
	aDrawer->NativeInstance = h_aDrawer.get();
}

double Macad::Occt::AIS_GraphicTool::GetLineWidth(Macad::Occt::Prs3d_Drawer^ aDrawer, Macad::Occt::AIS_TypeOfAttribute TheTypeOfAttributes)
{
	Handle(::Prs3d_Drawer) h_aDrawer = aDrawer->NativeInstance;
	return ::AIS_GraphicTool::GetLineWidth(h_aDrawer, (::AIS_TypeOfAttribute)TheTypeOfAttributes);
	aDrawer->NativeInstance = h_aDrawer.get();
}

Macad::Occt::Aspect_TypeOfLine Macad::Occt::AIS_GraphicTool::GetLineType(Macad::Occt::Prs3d_Drawer^ aDrawer, Macad::Occt::AIS_TypeOfAttribute TheTypeOfAttributes)
{
	Handle(::Prs3d_Drawer) h_aDrawer = aDrawer->NativeInstance;
	return (Macad::Occt::Aspect_TypeOfLine)::AIS_GraphicTool::GetLineType(h_aDrawer, (::AIS_TypeOfAttribute)TheTypeOfAttributes);
	aDrawer->NativeInstance = h_aDrawer.get();
}

void Macad::Occt::AIS_GraphicTool::GetLineAtt(Macad::Occt::Prs3d_Drawer^ aDrawer, Macad::Occt::AIS_TypeOfAttribute TheTypeOfAttributes, Macad::Occt::Quantity_NameOfColor% aCol, double% aWidth, Macad::Occt::Aspect_TypeOfLine% aTyp)
{
	Handle(::Prs3d_Drawer) h_aDrawer = aDrawer->NativeInstance;
	pin_ptr<Macad::Occt::Quantity_NameOfColor> pp_aCol = &aCol;
	pin_ptr<double> pp_aWidth = &aWidth;
	pin_ptr<Macad::Occt::Aspect_TypeOfLine> pp_aTyp = &aTyp;
	::AIS_GraphicTool::GetLineAtt(h_aDrawer, (::AIS_TypeOfAttribute)TheTypeOfAttributes, *(::Quantity_NameOfColor*)pp_aCol, *(Standard_Real*)pp_aWidth, *(::Aspect_TypeOfLine*)pp_aTyp);
	aDrawer->NativeInstance = h_aDrawer.get();
}

Macad::Occt::Quantity_NameOfColor Macad::Occt::AIS_GraphicTool::GetInteriorColor(Macad::Occt::Prs3d_Drawer^ aDrawer)
{
	Handle(::Prs3d_Drawer) h_aDrawer = aDrawer->NativeInstance;
	return (Macad::Occt::Quantity_NameOfColor)::AIS_GraphicTool::GetInteriorColor(h_aDrawer);
	aDrawer->NativeInstance = h_aDrawer.get();
}

void Macad::Occt::AIS_GraphicTool::GetInteriorColor(Macad::Occt::Prs3d_Drawer^ aDrawer, Macad::Occt::Quantity_Color^ aColor)
{
	Handle(::Prs3d_Drawer) h_aDrawer = aDrawer->NativeInstance;
	::AIS_GraphicTool::GetInteriorColor(h_aDrawer, *(::Quantity_Color*)aColor->NativeInstance);
	aDrawer->NativeInstance = h_aDrawer.get();
}

Macad::Occt::Graphic3d_MaterialAspect^ Macad::Occt::AIS_GraphicTool::GetMaterial(Macad::Occt::Prs3d_Drawer^ aDrawer)
{
	Handle(::Prs3d_Drawer) h_aDrawer = aDrawer->NativeInstance;
	::Graphic3d_MaterialAspect* _result = new ::Graphic3d_MaterialAspect();
	*_result = ::AIS_GraphicTool::GetMaterial(h_aDrawer);
	aDrawer->NativeInstance = h_aDrawer.get();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_MaterialAspect(_result);
}




//---------------------------------------------------------------------
//  Class  AIS_Line
//---------------------------------------------------------------------

Macad::Occt::AIS_Line::AIS_Line(Macad::Occt::Geom_Line^ aLine)
	: Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Line) h_aLine = aLine->NativeInstance;
	NativeInstance = new ::AIS_Line(h_aLine);
	aLine->NativeInstance = h_aLine.get();
}

Macad::Occt::AIS_Line::AIS_Line(Macad::Occt::Geom_Point^ aStartPoint, Macad::Occt::Geom_Point^ aEndPoint)
	: Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Point) h_aStartPoint = aStartPoint->NativeInstance;
	Handle(::Geom_Point) h_aEndPoint = aEndPoint->NativeInstance;
	NativeInstance = new ::AIS_Line(h_aStartPoint, h_aEndPoint);
	aStartPoint->NativeInstance = h_aStartPoint.get();
	aEndPoint->NativeInstance = h_aEndPoint.get();
}

Macad::Occt::AIS_Line::AIS_Line(Macad::Occt::AIS_Line^ parameter1)
	: Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_Line(*(::AIS_Line*)parameter1->NativeInstance);
}

int Macad::Occt::AIS_Line::Signature()
{
	return ((::AIS_Line*)_NativeInstance)->Signature();
}

Macad::Occt::AIS_KindOfInteractive Macad::Occt::AIS_Line::Type()
{
	return (Macad::Occt::AIS_KindOfInteractive)((::AIS_Line*)_NativeInstance)->Type();
}

Macad::Occt::Geom_Line^ Macad::Occt::AIS_Line::Line()
{
	Handle(::Geom_Line) _result;
	_result = ((::AIS_Line*)_NativeInstance)->Line();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Line::CreateDowncasted( _result.get());
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
	Handle(::Geom_Line) h_theLine = theLine->NativeInstance;
	((::AIS_Line*)_NativeInstance)->SetLine(h_theLine);
	theLine->NativeInstance = h_theLine.get();
}

void Macad::Occt::AIS_Line::SetPoints(Macad::Occt::Geom_Point^ thePStart, Macad::Occt::Geom_Point^ thePEnd)
{
	Handle(::Geom_Point) h_thePStart = thePStart->NativeInstance;
	Handle(::Geom_Point) h_thePEnd = thePEnd->NativeInstance;
	((::AIS_Line*)_NativeInstance)->SetPoints(h_thePStart, h_thePEnd);
	thePStart->NativeInstance = h_thePStart.get();
	thePEnd->NativeInstance = h_thePEnd.get();
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

Macad::Occt::AIS_ManipulatorObjectSequence::AIS_ManipulatorObjectSequence(Macad::Occt::AIS_ManipulatorObjectSequence^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_ManipulatorObjectSequence(*(::AIS_ManipulatorObjectSequence*)parameter1->NativeInstance);
}

void Macad::Occt::AIS_ManipulatorObjectSequence::Append(Macad::Occt::AIS_InteractiveObject^ theItem)
{
	Handle(::AIS_InteractiveObject) h_theItem = theItem->NativeInstance;
	((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

int Macad::Occt::AIS_ManipulatorObjectSequence::Size()
{
	return ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Size();
}

int Macad::Occt::AIS_ManipulatorObjectSequence::Length()
{
	return ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Length();
}

int Macad::Occt::AIS_ManipulatorObjectSequence::Lower()
{
	return ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Lower();
}

int Macad::Occt::AIS_ManipulatorObjectSequence::Upper()
{
	return ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Upper();
}

bool Macad::Occt::AIS_ManipulatorObjectSequence::IsEmpty()
{
	return ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->IsEmpty();
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
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::AIS_ManipulatorObjectSequence::Clear()
{
	((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Clear(0L);
}

void Macad::Occt::AIS_ManipulatorObjectSequence::Remove(int theIndex)
{
	((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::AIS_ManipulatorObjectSequence::Remove(int theFromIndex, int theToIndex)
{
	((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::AIS_ManipulatorObjectSequence::Prepend(Macad::Occt::AIS_InteractiveObject^ theItem)
{
	Handle(::AIS_InteractiveObject) h_theItem = theItem->NativeInstance;
	((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::AIS_ManipulatorObjectSequence::InsertBefore(int theIndex, Macad::Occt::AIS_InteractiveObject^ theItem)
{
	Handle(::AIS_InteractiveObject) h_theItem = theItem->NativeInstance;
	((::AIS_ManipulatorObjectSequence*)_NativeInstance)->InsertBefore(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::AIS_ManipulatorObjectSequence::InsertAfter(int theIndex, Macad::Occt::AIS_InteractiveObject^ theItem)
{
	Handle(::AIS_InteractiveObject) h_theItem = theItem->NativeInstance;
	((::AIS_ManipulatorObjectSequence*)_NativeInstance)->InsertAfter(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_ManipulatorObjectSequence::First()
{
	Handle(::AIS_InteractiveObject) _result;
	_result = ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted( _result.get());
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_ManipulatorObjectSequence::ChangeFirst()
{
	Handle(::AIS_InteractiveObject) _result;
	_result = ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->ChangeFirst();
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted( _result.get());
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_ManipulatorObjectSequence::Last()
{
	Handle(::AIS_InteractiveObject) _result;
	_result = ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted( _result.get());
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_ManipulatorObjectSequence::ChangeLast()
{
	Handle(::AIS_InteractiveObject) _result;
	_result = ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->ChangeLast();
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted( _result.get());
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_ManipulatorObjectSequence::Value(int theIndex)
{
	Handle(::AIS_InteractiveObject) _result;
	_result = ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->Value(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted( _result.get());
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_ManipulatorObjectSequence::ChangeValue(int theIndex)
{
	Handle(::AIS_InteractiveObject) _result;
	_result = ((::AIS_ManipulatorObjectSequence*)_NativeInstance)->ChangeValue(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted( _result.get());
}

void Macad::Occt::AIS_ManipulatorObjectSequence::SetValue(int theIndex, Macad::Occt::AIS_InteractiveObject^ theItem)
{
	Handle(::AIS_InteractiveObject) h_theItem = theItem->NativeInstance;
	((::AIS_ManipulatorObjectSequence*)_NativeInstance)->SetValue(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}


Macad::Occt::AIS_ManipulatorObjectSequence^ Macad::Occt::AIS_ManipulatorObjectSequence::CreateDowncasted(::AIS_ManipulatorObjectSequence* instance)
{
	return gcnew Macad::Occt::AIS_ManipulatorObjectSequence( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_ManipulatorOwner
//---------------------------------------------------------------------

Macad::Occt::AIS_ManipulatorOwner::AIS_ManipulatorOwner(Macad::Occt::SelectMgr_SelectableObject^ theSelObject, int theIndex, Macad::Occt::AIS_ManipulatorMode theMode, int thePriority)
	: Macad::Occt::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
	Handle(::SelectMgr_SelectableObject) h_theSelObject = theSelObject->NativeInstance;
	NativeInstance = new ::AIS_ManipulatorOwner(h_theSelObject, theIndex, (::AIS_ManipulatorMode)theMode, thePriority);
	theSelObject->NativeInstance = h_theSelObject.get();
}

Macad::Occt::AIS_ManipulatorOwner::AIS_ManipulatorOwner(Macad::Occt::SelectMgr_SelectableObject^ theSelObject, int theIndex, Macad::Occt::AIS_ManipulatorMode theMode)
	: Macad::Occt::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
	Handle(::SelectMgr_SelectableObject) h_theSelObject = theSelObject->NativeInstance;
	NativeInstance = new ::AIS_ManipulatorOwner(h_theSelObject, theIndex, (::AIS_ManipulatorMode)theMode, 0);
	theSelObject->NativeInstance = h_theSelObject.get();
}

Macad::Occt::AIS_ManipulatorOwner::AIS_ManipulatorOwner(Macad::Occt::AIS_ManipulatorOwner^ parameter1)
	: Macad::Occt::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_ManipulatorOwner(*(::AIS_ManipulatorOwner*)parameter1->NativeInstance);
}

Macad::Occt::AIS_ManipulatorMode Macad::Occt::AIS_ManipulatorOwner::Mode()
{
	return (Macad::Occt::AIS_ManipulatorMode)((::AIS_ManipulatorOwner*)_NativeInstance)->Mode();
}

int Macad::Occt::AIS_ManipulatorOwner::Index()
{
	return ((::AIS_ManipulatorOwner*)_NativeInstance)->Index();
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

Macad::Occt::AIS_MediaPlayer::AIS_MediaPlayer(Macad::Occt::AIS_MediaPlayer^ parameter1)
	: Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_MediaPlayer(*(::AIS_MediaPlayer*)parameter1->NativeInstance);
}

void Macad::Occt::AIS_MediaPlayer::OpenInput(Macad::Occt::TCollection_AsciiString^ thePath, bool theToWait)
{
	((::AIS_MediaPlayer*)_NativeInstance)->OpenInput(*(::TCollection_AsciiString*)thePath->NativeInstance, theToWait);
}

bool Macad::Occt::AIS_MediaPlayer::PresentFrame(Macad::Occt::Graphic3d_Vec2i^ theLeftCorner, Macad::Occt::Graphic3d_Vec2i^ theMaxSize)
{
	return ((::AIS_MediaPlayer*)_NativeInstance)->PresentFrame(*(::Graphic3d_Vec2i*)theLeftCorner->NativeInstance, *(::Graphic3d_Vec2i*)theMaxSize->NativeInstance);
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
	return ((::AIS_MediaPlayer*)_NativeInstance)->Duration();
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

Macad::Occt::AIS_MultipleConnectedInteractive::AIS_MultipleConnectedInteractive(Macad::Occt::AIS_MultipleConnectedInteractive^ parameter1)
	: Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_MultipleConnectedInteractive(*(::AIS_MultipleConnectedInteractive*)parameter1->NativeInstance);
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_MultipleConnectedInteractive::Connect(Macad::Occt::AIS_InteractiveObject^ theAnotherObj, Macad::Occt::TopLoc_Datum3D^ theLocation, Macad::Occt::Graphic3d_TransformPers^ theTrsfPers)
{
	Handle(::AIS_InteractiveObject) h_theAnotherObj = theAnotherObj->NativeInstance;
	Handle(::TopLoc_Datum3D) h_theLocation = theLocation->NativeInstance;
	Handle(::Graphic3d_TransformPers) h_theTrsfPers = theTrsfPers->NativeInstance;
	Handle(::AIS_InteractiveObject) _result;
	_result = ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->Connect(h_theAnotherObj, h_theLocation, h_theTrsfPers);
	theAnotherObj->NativeInstance = h_theAnotherObj.get();
	theLocation->NativeInstance = h_theLocation.get();
	theTrsfPers->NativeInstance = h_theTrsfPers.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted( _result.get());
}

Macad::Occt::AIS_KindOfInteractive Macad::Occt::AIS_MultipleConnectedInteractive::Type()
{
	return (Macad::Occt::AIS_KindOfInteractive)((::AIS_MultipleConnectedInteractive*)_NativeInstance)->Type();
}

int Macad::Occt::AIS_MultipleConnectedInteractive::Signature()
{
	return ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->Signature();
}

bool Macad::Occt::AIS_MultipleConnectedInteractive::HasConnection()
{
	return ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->HasConnection();
}

void Macad::Occt::AIS_MultipleConnectedInteractive::Disconnect(Macad::Occt::AIS_InteractiveObject^ theInteractive)
{
	Handle(::AIS_InteractiveObject) h_theInteractive = theInteractive->NativeInstance;
	((::AIS_MultipleConnectedInteractive*)_NativeInstance)->Disconnect(h_theInteractive);
	theInteractive->NativeInstance = h_theInteractive.get();
}

void Macad::Occt::AIS_MultipleConnectedInteractive::DisconnectAll()
{
	((::AIS_MultipleConnectedInteractive*)_NativeInstance)->DisconnectAll();
}

bool Macad::Occt::AIS_MultipleConnectedInteractive::AcceptShapeDecomposition()
{
	return ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->AcceptShapeDecomposition();
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_MultipleConnectedInteractive::GetAssemblyOwner()
{
	Handle(::SelectMgr_EntityOwner) _result;
	_result = ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->GetAssemblyOwner();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_MultipleConnectedInteractive::GlobalSelOwner()
{
	Handle(::SelectMgr_EntityOwner) _result;
	_result = ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->GlobalSelOwner();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted( _result.get());
}

void Macad::Occt::AIS_MultipleConnectedInteractive::SetContext(Macad::Occt::AIS_InteractiveContext^ theCtx)
{
	Handle(::AIS_InteractiveContext) h_theCtx = theCtx->NativeInstance;
	((::AIS_MultipleConnectedInteractive*)_NativeInstance)->SetContext(h_theCtx);
	theCtx->NativeInstance = h_theCtx.get();
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_MultipleConnectedInteractive::Connect(Macad::Occt::AIS_InteractiveObject^ theAnotherObj)
{
	Handle(::AIS_InteractiveObject) h_theAnotherObj = theAnotherObj->NativeInstance;
	Handle(::AIS_InteractiveObject) _result;
	_result = ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->Connect(h_theAnotherObj);
	theAnotherObj->NativeInstance = h_theAnotherObj.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted( _result.get());
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_MultipleConnectedInteractive::Connect(Macad::Occt::AIS_InteractiveObject^ theAnotherObj, Macad::Occt::Trsf theLocation)
{
	Handle(::AIS_InteractiveObject) h_theAnotherObj = theAnotherObj->NativeInstance;
	pin_ptr<Macad::Occt::Trsf> pp_theLocation = &theLocation;
	Handle(::AIS_InteractiveObject) _result;
	_result = ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->Connect(h_theAnotherObj, *(gp_Trsf*)pp_theLocation);
	theAnotherObj->NativeInstance = h_theAnotherObj.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted( _result.get());
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_MultipleConnectedInteractive::Connect(Macad::Occt::AIS_InteractiveObject^ theAnotherObj, Macad::Occt::Trsf theLocation, Macad::Occt::Graphic3d_TransformPers^ theTrsfPers)
{
	Handle(::AIS_InteractiveObject) h_theAnotherObj = theAnotherObj->NativeInstance;
	pin_ptr<Macad::Occt::Trsf> pp_theLocation = &theLocation;
	Handle(::Graphic3d_TransformPers) h_theTrsfPers = theTrsfPers->NativeInstance;
	Handle(::AIS_InteractiveObject) _result;
	_result = ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->Connect(h_theAnotherObj, *(gp_Trsf*)pp_theLocation, h_theTrsfPers);
	theAnotherObj->NativeInstance = h_theAnotherObj.get();
	theTrsfPers->NativeInstance = h_theTrsfPers.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted( _result.get());
}

Macad::Occt::AIS_InteractiveObject^ Macad::Occt::AIS_MultipleConnectedInteractive::Connect(Macad::Occt::AIS_InteractiveObject^ theInteractive, Macad::Occt::Trsf theLocation, Macad::Occt::Graphic3d_TransModeFlags% theTrsfPersFlag, Macad::Occt::Pnt theTrsfPersPoint)
{
	Handle(::AIS_InteractiveObject) h_theInteractive = theInteractive->NativeInstance;
	pin_ptr<Macad::Occt::Trsf> pp_theLocation = &theLocation;
	pin_ptr<Macad::Occt::Graphic3d_TransModeFlags> pp_theTrsfPersFlag = &theTrsfPersFlag;
	pin_ptr<Macad::Occt::Pnt> pp_theTrsfPersPoint = &theTrsfPersPoint;
	Handle(::AIS_InteractiveObject) _result;
	_result = ((::AIS_MultipleConnectedInteractive*)_NativeInstance)->Connect(h_theInteractive, *(gp_Trsf*)pp_theLocation, *(::Graphic3d_TransModeFlags*)pp_theTrsfPersFlag, *(gp_Pnt*)pp_theTrsfPersPoint);
	theInteractive->NativeInstance = h_theInteractive.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_InteractiveObject::CreateDowncasted( _result.get());
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
	Handle(::Geom_Plane) h_aComponent = aComponent->NativeInstance;
	NativeInstance = new ::AIS_Plane(h_aComponent, aCurrentMode);
	aComponent->NativeInstance = h_aComponent.get();
}

Macad::Occt::AIS_Plane::AIS_Plane(Macad::Occt::Geom_Plane^ aComponent)
	: Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Plane) h_aComponent = aComponent->NativeInstance;
	NativeInstance = new ::AIS_Plane(h_aComponent, false);
	aComponent->NativeInstance = h_aComponent.get();
}

Macad::Occt::AIS_Plane::AIS_Plane(Macad::Occt::Geom_Plane^ aComponent, Macad::Occt::Pnt aCenter, bool aCurrentMode)
	: Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Plane) h_aComponent = aComponent->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_aCenter = &aCenter;
	NativeInstance = new ::AIS_Plane(h_aComponent, *(gp_Pnt*)pp_aCenter, aCurrentMode);
	aComponent->NativeInstance = h_aComponent.get();
}

Macad::Occt::AIS_Plane::AIS_Plane(Macad::Occt::Geom_Plane^ aComponent, Macad::Occt::Pnt aCenter)
	: Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Plane) h_aComponent = aComponent->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_aCenter = &aCenter;
	NativeInstance = new ::AIS_Plane(h_aComponent, *(gp_Pnt*)pp_aCenter, false);
	aComponent->NativeInstance = h_aComponent.get();
}

Macad::Occt::AIS_Plane::AIS_Plane(Macad::Occt::Geom_Plane^ aComponent, Macad::Occt::Pnt aCenter, Macad::Occt::Pnt aPmin, Macad::Occt::Pnt aPmax, bool aCurrentMode)
	: Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Plane) h_aComponent = aComponent->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_aCenter = &aCenter;
	pin_ptr<Macad::Occt::Pnt> pp_aPmin = &aPmin;
	pin_ptr<Macad::Occt::Pnt> pp_aPmax = &aPmax;
	NativeInstance = new ::AIS_Plane(h_aComponent, *(gp_Pnt*)pp_aCenter, *(gp_Pnt*)pp_aPmin, *(gp_Pnt*)pp_aPmax, aCurrentMode);
	aComponent->NativeInstance = h_aComponent.get();
}

Macad::Occt::AIS_Plane::AIS_Plane(Macad::Occt::Geom_Plane^ aComponent, Macad::Occt::Pnt aCenter, Macad::Occt::Pnt aPmin, Macad::Occt::Pnt aPmax)
	: Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Plane) h_aComponent = aComponent->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_aCenter = &aCenter;
	pin_ptr<Macad::Occt::Pnt> pp_aPmin = &aPmin;
	pin_ptr<Macad::Occt::Pnt> pp_aPmax = &aPmax;
	NativeInstance = new ::AIS_Plane(h_aComponent, *(gp_Pnt*)pp_aCenter, *(gp_Pnt*)pp_aPmin, *(gp_Pnt*)pp_aPmax, false);
	aComponent->NativeInstance = h_aComponent.get();
}

Macad::Occt::AIS_Plane::AIS_Plane(Macad::Occt::Geom_Axis2Placement^ aComponent, Macad::Occt::AIS_TypeOfPlane aPlaneType, bool aCurrentMode)
	: Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Axis2Placement) h_aComponent = aComponent->NativeInstance;
	NativeInstance = new ::AIS_Plane(h_aComponent, (::AIS_TypeOfPlane)aPlaneType, aCurrentMode);
	aComponent->NativeInstance = h_aComponent.get();
}

Macad::Occt::AIS_Plane::AIS_Plane(Macad::Occt::Geom_Axis2Placement^ aComponent, Macad::Occt::AIS_TypeOfPlane aPlaneType)
	: Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Axis2Placement) h_aComponent = aComponent->NativeInstance;
	NativeInstance = new ::AIS_Plane(h_aComponent, (::AIS_TypeOfPlane)aPlaneType, false);
	aComponent->NativeInstance = h_aComponent.get();
}

Macad::Occt::AIS_Plane::AIS_Plane(Macad::Occt::AIS_Plane^ parameter1)
	: Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_Plane(*(::AIS_Plane*)parameter1->NativeInstance);
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
	return ((::AIS_Plane*)_NativeInstance)->Size(*(Standard_Real*)pp_X, *(Standard_Real*)pp_Y);
}

bool Macad::Occt::AIS_Plane::HasOwnSize()
{
	return ((::AIS_Plane*)_NativeInstance)->HasOwnSize();
}

int Macad::Occt::AIS_Plane::Signature()
{
	return ((::AIS_Plane*)_NativeInstance)->Signature();
}

Macad::Occt::AIS_KindOfInteractive Macad::Occt::AIS_Plane::Type()
{
	return (Macad::Occt::AIS_KindOfInteractive)((::AIS_Plane*)_NativeInstance)->Type();
}

Macad::Occt::Geom_Plane^ Macad::Occt::AIS_Plane::Component()
{
	Handle(::Geom_Plane) _result;
	_result = ((::AIS_Plane*)_NativeInstance)->Component();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Plane::CreateDowncasted( _result.get());
}

void Macad::Occt::AIS_Plane::SetComponent(Macad::Occt::Geom_Plane^ aComponent)
{
	Handle(::Geom_Plane) h_aComponent = aComponent->NativeInstance;
	((::AIS_Plane*)_NativeInstance)->SetComponent(h_aComponent);
	aComponent->NativeInstance = h_aComponent.get();
}

bool Macad::Occt::AIS_Plane::PlaneAttributes(Macad::Occt::Geom_Plane^ aComponent, Macad::Occt::Pnt% aCenter, Macad::Occt::Pnt% aPmin, Macad::Occt::Pnt% aPmax)
{
	Handle(::Geom_Plane) h_aComponent = aComponent->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_aCenter = &aCenter;
	pin_ptr<Macad::Occt::Pnt> pp_aPmin = &aPmin;
	pin_ptr<Macad::Occt::Pnt> pp_aPmax = &aPmax;
	return ((::AIS_Plane*)_NativeInstance)->PlaneAttributes(h_aComponent, *(gp_Pnt*)pp_aCenter, *(gp_Pnt*)pp_aPmin, *(gp_Pnt*)pp_aPmax);
	aComponent->NativeInstance = h_aComponent.get();
}

void Macad::Occt::AIS_Plane::SetPlaneAttributes(Macad::Occt::Geom_Plane^ aComponent, Macad::Occt::Pnt aCenter, Macad::Occt::Pnt aPmin, Macad::Occt::Pnt aPmax)
{
	Handle(::Geom_Plane) h_aComponent = aComponent->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_aCenter = &aCenter;
	pin_ptr<Macad::Occt::Pnt> pp_aPmin = &aPmin;
	pin_ptr<Macad::Occt::Pnt> pp_aPmax = &aPmax;
	((::AIS_Plane*)_NativeInstance)->SetPlaneAttributes(h_aComponent, *(gp_Pnt*)pp_aCenter, *(gp_Pnt*)pp_aPmin, *(gp_Pnt*)pp_aPmax);
	aComponent->NativeInstance = h_aComponent.get();
}

Macad::Occt::Pnt Macad::Occt::AIS_Plane::Center()
{
	return Macad::Occt::Pnt(((::AIS_Plane*)_NativeInstance)->Center());
}

void Macad::Occt::AIS_Plane::SetCenter(Macad::Occt::Pnt theCenter)
{
	pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
	((::AIS_Plane*)_NativeInstance)->SetCenter(*(gp_Pnt*)pp_theCenter);
}

void Macad::Occt::AIS_Plane::SetAxis2Placement(Macad::Occt::Geom_Axis2Placement^ aComponent, Macad::Occt::AIS_TypeOfPlane aPlaneType)
{
	Handle(::Geom_Axis2Placement) h_aComponent = aComponent->NativeInstance;
	((::AIS_Plane*)_NativeInstance)->SetAxis2Placement(h_aComponent, (::AIS_TypeOfPlane)aPlaneType);
	aComponent->NativeInstance = h_aComponent.get();
}

Macad::Occt::Geom_Axis2Placement^ Macad::Occt::AIS_Plane::Axis2Placement()
{
	Handle(::Geom_Axis2Placement) _result;
	_result = ((::AIS_Plane*)_NativeInstance)->Axis2Placement();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Axis2Placement::CreateDowncasted( _result.get());
}

Macad::Occt::AIS_TypeOfPlane Macad::Occt::AIS_Plane::TypeOfPlane()
{
	return (Macad::Occt::AIS_TypeOfPlane)((::AIS_Plane*)_NativeInstance)->TypeOfPlane();
}

bool Macad::Occt::AIS_Plane::IsXYZPlane()
{
	return ((::AIS_Plane*)_NativeInstance)->IsXYZPlane();
}

bool Macad::Occt::AIS_Plane::CurrentMode()
{
	return ((::AIS_Plane*)_NativeInstance)->CurrentMode();
}

void Macad::Occt::AIS_Plane::SetCurrentMode(bool theCurrentMode)
{
	((::AIS_Plane*)_NativeInstance)->SetCurrentMode(theCurrentMode);
}

bool Macad::Occt::AIS_Plane::AcceptDisplayMode(int aMode)
{
	return ((::AIS_Plane*)_NativeInstance)->AcceptDisplayMode(aMode);
}

void Macad::Occt::AIS_Plane::SetContext(Macad::Occt::AIS_InteractiveContext^ aCtx)
{
	Handle(::AIS_InteractiveContext) h_aCtx = aCtx->NativeInstance;
	((::AIS_Plane*)_NativeInstance)->SetContext(h_aCtx);
	aCtx->NativeInstance = h_aCtx.get();
}

void Macad::Occt::AIS_Plane::ComputeSelection(Macad::Occt::SelectMgr_Selection^ theSelection, int theMode)
{
	Handle(::SelectMgr_Selection) h_theSelection = theSelection->NativeInstance;
	((::AIS_Plane*)_NativeInstance)->ComputeSelection(h_theSelection, theMode);
	theSelection->NativeInstance = h_theSelection.get();
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
	Handle(::Geom_Point) h_aComponent = aComponent->NativeInstance;
	NativeInstance = new ::AIS_Point(h_aComponent);
	aComponent->NativeInstance = h_aComponent.get();
}

Macad::Occt::AIS_Point::AIS_Point(Macad::Occt::AIS_Point^ parameter1)
	: Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_Point(*(::AIS_Point*)parameter1->NativeInstance);
}

int Macad::Occt::AIS_Point::Signature()
{
	return ((::AIS_Point*)_NativeInstance)->Signature();
}

Macad::Occt::AIS_KindOfInteractive Macad::Occt::AIS_Point::Type()
{
	return (Macad::Occt::AIS_KindOfInteractive)((::AIS_Point*)_NativeInstance)->Type();
}

Macad::Occt::Geom_Point^ Macad::Occt::AIS_Point::Component()
{
	Handle(::Geom_Point) _result;
	_result = ((::AIS_Point*)_NativeInstance)->Component();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Point::CreateDowncasted( _result.get());
}

void Macad::Occt::AIS_Point::SetComponent(Macad::Occt::Geom_Point^ aComponent)
{
	Handle(::Geom_Point) h_aComponent = aComponent->NativeInstance;
	((::AIS_Point*)_NativeInstance)->SetComponent(h_aComponent);
	aComponent->NativeInstance = h_aComponent.get();
}

bool Macad::Occt::AIS_Point::AcceptDisplayMode(int aMode)
{
	return ((::AIS_Point*)_NativeInstance)->AcceptDisplayMode(aMode);
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
	return ((::AIS_Point*)_NativeInstance)->HasMarker();
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::AIS_Point::Vertex()
{
	::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
	*_result = ((::AIS_Point*)_NativeInstance)->Vertex();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}


Macad::Occt::AIS_Point^ Macad::Occt::AIS_Point::CreateDowncasted(::AIS_Point* instance)
{
	return gcnew Macad::Occt::AIS_Point( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_PlaneTrihedron
//---------------------------------------------------------------------

Macad::Occt::AIS_PlaneTrihedron::AIS_PlaneTrihedron(Macad::Occt::Geom_Plane^ aPlane)
	: Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
	Handle(::Geom_Plane) h_aPlane = aPlane->NativeInstance;
	NativeInstance = new ::AIS_PlaneTrihedron(h_aPlane);
	aPlane->NativeInstance = h_aPlane.get();
}

Macad::Occt::AIS_PlaneTrihedron::AIS_PlaneTrihedron(Macad::Occt::AIS_PlaneTrihedron^ parameter1)
	: Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_PlaneTrihedron(*(::AIS_PlaneTrihedron*)parameter1->NativeInstance);
}

Macad::Occt::Geom_Plane^ Macad::Occt::AIS_PlaneTrihedron::Component()
{
	Handle(::Geom_Plane) _result;
	_result = ((::AIS_PlaneTrihedron*)_NativeInstance)->Component();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Plane::CreateDowncasted( _result.get());
}

void Macad::Occt::AIS_PlaneTrihedron::SetComponent(Macad::Occt::Geom_Plane^ aPlane)
{
	Handle(::Geom_Plane) h_aPlane = aPlane->NativeInstance;
	((::AIS_PlaneTrihedron*)_NativeInstance)->SetComponent(h_aPlane);
	aPlane->NativeInstance = h_aPlane.get();
}

Macad::Occt::AIS_Line^ Macad::Occt::AIS_PlaneTrihedron::XAxis()
{
	Handle(::AIS_Line) _result;
	_result = ((::AIS_PlaneTrihedron*)_NativeInstance)->XAxis();
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_Line::CreateDowncasted( _result.get());
}

Macad::Occt::AIS_Line^ Macad::Occt::AIS_PlaneTrihedron::YAxis()
{
	Handle(::AIS_Line) _result;
	_result = ((::AIS_PlaneTrihedron*)_NativeInstance)->YAxis();
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_Line::CreateDowncasted( _result.get());
}

Macad::Occt::AIS_Point^ Macad::Occt::AIS_PlaneTrihedron::Position()
{
	Handle(::AIS_Point) _result;
	_result = ((::AIS_PlaneTrihedron*)_NativeInstance)->Position();
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_Point::CreateDowncasted( _result.get());
}

void Macad::Occt::AIS_PlaneTrihedron::SetLength(double theLength)
{
	((::AIS_PlaneTrihedron*)_NativeInstance)->SetLength(theLength);
}

double Macad::Occt::AIS_PlaneTrihedron::GetLength()
{
	return ((::AIS_PlaneTrihedron*)_NativeInstance)->GetLength();
}

bool Macad::Occt::AIS_PlaneTrihedron::AcceptDisplayMode(int aMode)
{
	return ((::AIS_PlaneTrihedron*)_NativeInstance)->AcceptDisplayMode(aMode);
}

int Macad::Occt::AIS_PlaneTrihedron::Signature()
{
	return ((::AIS_PlaneTrihedron*)_NativeInstance)->Signature();
}

Macad::Occt::AIS_KindOfInteractive Macad::Occt::AIS_PlaneTrihedron::Type()
{
	return (Macad::Occt::AIS_KindOfInteractive)((::AIS_PlaneTrihedron*)_NativeInstance)->Type();
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

Macad::Occt::AIS_PointCloud::AIS_PointCloud(Macad::Occt::AIS_PointCloud^ parameter1)
	: Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_PointCloud(*(::AIS_PointCloud*)parameter1->NativeInstance);
}

void Macad::Occt::AIS_PointCloud::SetPoints(Macad::Occt::Graphic3d_ArrayOfPoints^ thePoints)
{
	Handle(::Graphic3d_ArrayOfPoints) h_thePoints = thePoints->NativeInstance;
	((::AIS_PointCloud*)_NativeInstance)->SetPoints(h_thePoints);
	thePoints->NativeInstance = h_thePoints.get();
}

void Macad::Occt::AIS_PointCloud::SetPoints(Macad::Occt::TColgp_HArray1OfPnt^ theCoords, Macad::Occt::Quantity_HArray1OfColor^ theColors, Macad::Occt::TColgp_HArray1OfDir^ theNormals)
{
	Handle(::TColgp_HArray1OfPnt) h_theCoords = theCoords->NativeInstance;
	Handle(::Quantity_HArray1OfColor) h_theColors = theColors->NativeInstance;
	Handle(::TColgp_HArray1OfDir) h_theNormals = theNormals->NativeInstance;
	((::AIS_PointCloud*)_NativeInstance)->SetPoints(h_theCoords, h_theColors, h_theNormals);
	theCoords->NativeInstance = h_theCoords.get();
	theColors->NativeInstance = h_theColors.get();
	theNormals->NativeInstance = h_theNormals.get();
}

void Macad::Occt::AIS_PointCloud::SetPoints(Macad::Occt::TColgp_HArray1OfPnt^ theCoords, Macad::Occt::Quantity_HArray1OfColor^ theColors)
{
	Handle(::TColgp_HArray1OfPnt) h_theCoords = theCoords->NativeInstance;
	Handle(::Quantity_HArray1OfColor) h_theColors = theColors->NativeInstance;
	((::AIS_PointCloud*)_NativeInstance)->SetPoints(h_theCoords, h_theColors, 0);
	theCoords->NativeInstance = h_theCoords.get();
	theColors->NativeInstance = h_theColors.get();
}

void Macad::Occt::AIS_PointCloud::SetPoints(Macad::Occt::TColgp_HArray1OfPnt^ theCoords)
{
	Handle(::TColgp_HArray1OfPnt) h_theCoords = theCoords->NativeInstance;
	((::AIS_PointCloud*)_NativeInstance)->SetPoints(h_theCoords, 0, 0);
	theCoords->NativeInstance = h_theCoords.get();
}

Macad::Occt::Graphic3d_ArrayOfPoints^ Macad::Occt::AIS_PointCloud::GetPoints()
{
	Handle(::Graphic3d_ArrayOfPoints) _result;
	_result = ((::AIS_PointCloud*)_NativeInstance)->GetPoints();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfPoints::CreateDowncasted( _result.get());
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
	Handle(::AIS_PointCloud) h_theOrigin = theOrigin->NativeInstance;
	NativeInstance = new ::AIS_PointCloudOwner(h_theOrigin);
	theOrigin->NativeInstance = h_theOrigin.get();
}

Macad::Occt::AIS_PointCloudOwner::AIS_PointCloudOwner(Macad::Occt::AIS_PointCloudOwner^ parameter1)
	: Macad::Occt::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_PointCloudOwner(*(::AIS_PointCloudOwner*)parameter1->NativeInstance);
}

Macad::Occt::TColStd_HPackedMapOfInteger^ Macad::Occt::AIS_PointCloudOwner::SelectedPoints()
{
	Handle(::TColStd_HPackedMapOfInteger) _result;
	_result = ((::AIS_PointCloudOwner*)_NativeInstance)->SelectedPoints();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HPackedMapOfInteger::CreateDowncasted( _result.get());
}

Macad::Occt::TColStd_HPackedMapOfInteger^ Macad::Occt::AIS_PointCloudOwner::DetectedPoints()
{
	Handle(::TColStd_HPackedMapOfInteger) _result;
	_result = ((::AIS_PointCloudOwner*)_NativeInstance)->DetectedPoints();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HPackedMapOfInteger::CreateDowncasted( _result.get());
}

bool Macad::Occt::AIS_PointCloudOwner::IsForcedHilight()
{
	return ((::AIS_PointCloudOwner*)_NativeInstance)->IsForcedHilight();
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

Macad::Occt::AIS_RubberBand::AIS_RubberBand(Macad::Occt::AIS_RubberBand^ parameter1)
	: Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_RubberBand(*(::AIS_RubberBand*)parameter1->NativeInstance);
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
	return ((::AIS_RubberBand*)_NativeInstance)->LineWidth();
}

void Macad::Occt::AIS_RubberBand::SetLineType(Macad::Occt::Aspect_TypeOfLine theType)
{
	((::AIS_RubberBand*)_NativeInstance)->SetLineType((::Aspect_TypeOfLine)theType);
}

Macad::Occt::Aspect_TypeOfLine Macad::Occt::AIS_RubberBand::LineType()
{
	return (Macad::Occt::Aspect_TypeOfLine)((::AIS_RubberBand*)_NativeInstance)->LineType();
}

void Macad::Occt::AIS_RubberBand::SetFillTransparency(double theValue)
{
	((::AIS_RubberBand*)_NativeInstance)->SetFillTransparency(theValue);
}

double Macad::Occt::AIS_RubberBand::FillTransparency()
{
	return ((::AIS_RubberBand*)_NativeInstance)->FillTransparency();
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
	return ((::AIS_RubberBand*)_NativeInstance)->IsFilling();
}

bool Macad::Occt::AIS_RubberBand::IsPolygonClosed()
{
	return ((::AIS_RubberBand*)_NativeInstance)->IsPolygonClosed();
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

Macad::Occt::AIS_TypeFilter::AIS_TypeFilter(Macad::Occt::AIS_TypeFilter^ parameter1)
	: Macad::Occt::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_TypeFilter(*(::AIS_TypeFilter*)parameter1->NativeInstance);
}

bool Macad::Occt::AIS_TypeFilter::IsOk(Macad::Occt::SelectMgr_EntityOwner^ anobj)
{
	Handle(::SelectMgr_EntityOwner) h_anobj = anobj->NativeInstance;
	return ((::AIS_TypeFilter*)_NativeInstance)->IsOk(h_anobj);
	anobj->NativeInstance = h_anobj.get();
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

Macad::Occt::AIS_SignatureFilter::AIS_SignatureFilter(Macad::Occt::AIS_SignatureFilter^ parameter1)
	: Macad::Occt::AIS_TypeFilter(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_SignatureFilter(*(::AIS_SignatureFilter*)parameter1->NativeInstance);
}

bool Macad::Occt::AIS_SignatureFilter::IsOk(Macad::Occt::SelectMgr_EntityOwner^ anobj)
{
	Handle(::SelectMgr_EntityOwner) h_anobj = anobj->NativeInstance;
	return ((::AIS_SignatureFilter*)_NativeInstance)->IsOk(h_anobj);
	anobj->NativeInstance = h_anobj.get();
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

Macad::Occt::AIS_TextLabel::AIS_TextLabel(Macad::Occt::AIS_TextLabel^ parameter1)
	: Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_TextLabel(*(::AIS_TextLabel*)parameter1->NativeInstance);
}

bool Macad::Occt::AIS_TextLabel::AcceptDisplayMode(int theMode)
{
	return ((::AIS_TextLabel*)_NativeInstance)->AcceptDisplayMode(theMode);
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
	return Macad::Occt::Pnt(((::AIS_TextLabel*)_NativeInstance)->Position());
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::AIS_TextLabel::Text()
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result =  (::TCollection_ExtendedString)((::AIS_TextLabel*)_NativeInstance)->Text();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::AIS_TextLabel::FontName()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::AIS_TextLabel*)_NativeInstance)->FontName();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::Ax2 Macad::Occt::AIS_TextLabel::Orientation3D()
{
	return Macad::Occt::Ax2(((::AIS_TextLabel*)_NativeInstance)->Orientation3D());
}

bool Macad::Occt::AIS_TextLabel::HasOrientation3D()
{
	return ((::AIS_TextLabel*)_NativeInstance)->HasOrientation3D();
}

void Macad::Occt::AIS_TextLabel::SetFlipping(bool theIsFlipping)
{
	((::AIS_TextLabel*)_NativeInstance)->SetFlipping(theIsFlipping);
}

bool Macad::Occt::AIS_TextLabel::HasFlipping()
{
	return ((::AIS_TextLabel*)_NativeInstance)->HasFlipping();
}

bool Macad::Occt::AIS_TextLabel::HasOwnAnchorPoint()
{
	return ((::AIS_TextLabel*)_NativeInstance)->HasOwnAnchorPoint();
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

Macad::Occt::AIS_TexturedShape::AIS_TexturedShape(Macad::Occt::AIS_TexturedShape^ parameter1)
	: Macad::Occt::AIS_Shape(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_TexturedShape(*(::AIS_TexturedShape*)parameter1->NativeInstance);
}

void Macad::Occt::AIS_TexturedShape::SetTextureFileName(Macad::Occt::TCollection_AsciiString^ theTextureFileName)
{
	((::AIS_TexturedShape*)_NativeInstance)->SetTextureFileName(*(::TCollection_AsciiString*)theTextureFileName->NativeInstance);
}

void Macad::Occt::AIS_TexturedShape::SetTexturePixMap(Macad::Occt::Image_PixMap^ theTexturePixMap)
{
	Handle(::Image_PixMap) h_theTexturePixMap = theTexturePixMap->NativeInstance;
	((::AIS_TexturedShape*)_NativeInstance)->SetTexturePixMap(h_theTexturePixMap);
	theTexturePixMap->NativeInstance = h_theTexturePixMap.get();
}

bool Macad::Occt::AIS_TexturedShape::TextureMapState()
{
	return ((::AIS_TexturedShape*)_NativeInstance)->TextureMapState();
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
	Standard_CString _result;
	_result = ((::AIS_TexturedShape*)_NativeInstance)->TextureFile();
	return gcnew System::String(_result);
}

Macad::Occt::Image_PixMap^ Macad::Occt::AIS_TexturedShape::TexturePixMap()
{
	Handle(::Image_PixMap) _result;
	_result = ((::AIS_TexturedShape*)_NativeInstance)->TexturePixMap();
	 return _result.IsNull() ? nullptr : Macad::Occt::Image_PixMap::CreateDowncasted( _result.get());
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
	return ((::AIS_TexturedShape*)_NativeInstance)->TextureRepeat();
}

double Macad::Occt::AIS_TexturedShape::URepeat()
{
	return ((::AIS_TexturedShape*)_NativeInstance)->URepeat();
}

double Macad::Occt::AIS_TexturedShape::VRepeat()
{
	return ((::AIS_TexturedShape*)_NativeInstance)->VRepeat();
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
	return ((::AIS_TexturedShape*)_NativeInstance)->TextureOrigin();
}

double Macad::Occt::AIS_TexturedShape::TextureUOrigin()
{
	return ((::AIS_TexturedShape*)_NativeInstance)->TextureUOrigin();
}

double Macad::Occt::AIS_TexturedShape::TextureVOrigin()
{
	return ((::AIS_TexturedShape*)_NativeInstance)->TextureVOrigin();
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
	return ((::AIS_TexturedShape*)_NativeInstance)->TextureScale();
}

double Macad::Occt::AIS_TexturedShape::TextureScaleU()
{
	return ((::AIS_TexturedShape*)_NativeInstance)->TextureScaleU();
}

double Macad::Occt::AIS_TexturedShape::TextureScaleV()
{
	return ((::AIS_TexturedShape*)_NativeInstance)->TextureScaleV();
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
	return ((::AIS_TexturedShape*)_NativeInstance)->ShowTriangles();
}

void Macad::Occt::AIS_TexturedShape::ShowTriangles(bool theToShowTriangles)
{
	((::AIS_TexturedShape*)_NativeInstance)->ShowTriangles(theToShowTriangles);
}

bool Macad::Occt::AIS_TexturedShape::TextureModulate()
{
	return ((::AIS_TexturedShape*)_NativeInstance)->TextureModulate();
}

bool Macad::Occt::AIS_TexturedShape::AcceptDisplayMode(int theMode)
{
	return ((::AIS_TexturedShape*)_NativeInstance)->AcceptDisplayMode(theMode);
}


Macad::Occt::AIS_TexturedShape^ Macad::Occt::AIS_TexturedShape::CreateDowncasted(::AIS_TexturedShape* instance)
{
	return gcnew Macad::Occt::AIS_TexturedShape( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_Triangulation
//---------------------------------------------------------------------

Macad::Occt::AIS_Triangulation::AIS_Triangulation(Macad::Occt::AIS_Triangulation^ parameter1)
	: Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_Triangulation(*(::AIS_Triangulation*)parameter1->NativeInstance);
}

void Macad::Occt::AIS_Triangulation::SetColors(Macad::Occt::TColStd_HArray1OfInteger^ aColor)
{
	Handle(::TColStd_HArray1OfInteger) h_aColor = aColor->NativeInstance;
	((::AIS_Triangulation*)_NativeInstance)->SetColors(h_aColor);
	aColor->NativeInstance = h_aColor.get();
}

Macad::Occt::TColStd_HArray1OfInteger^ Macad::Occt::AIS_Triangulation::GetColors()
{
	Handle(::TColStd_HArray1OfInteger) _result;
	_result = ((::AIS_Triangulation*)_NativeInstance)->GetColors();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HArray1OfInteger::CreateDowncasted( _result.get());
}

bool Macad::Occt::AIS_Triangulation::HasVertexColors()
{
	return ((::AIS_Triangulation*)_NativeInstance)->HasVertexColors();
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
	Handle(::Geom_Axis2Placement) h_theComponent = theComponent->NativeInstance;
	NativeInstance = new ::AIS_Trihedron(h_theComponent);
	theComponent->NativeInstance = h_theComponent.get();
}

Macad::Occt::AIS_Trihedron::AIS_Trihedron(Macad::Occt::AIS_Trihedron^ parameter1)
	: Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_Trihedron(*(::AIS_Trihedron*)parameter1->NativeInstance);
}

void Macad::Occt::AIS_Trihedron::SetDatumDisplayMode(Macad::Occt::Prs3d_DatumMode theMode)
{
	((::AIS_Trihedron*)_NativeInstance)->SetDatumDisplayMode((::Prs3d_DatumMode)theMode);
}

Macad::Occt::Prs3d_DatumMode Macad::Occt::AIS_Trihedron::DatumDisplayMode()
{
	return (Macad::Occt::Prs3d_DatumMode)((::AIS_Trihedron*)_NativeInstance)->DatumDisplayMode();
}

Macad::Occt::Geom_Axis2Placement^ Macad::Occt::AIS_Trihedron::Component()
{
	Handle(::Geom_Axis2Placement) _result;
	_result = ((::AIS_Trihedron*)_NativeInstance)->Component();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Axis2Placement::CreateDowncasted( _result.get());
}

void Macad::Occt::AIS_Trihedron::SetComponent(Macad::Occt::Geom_Axis2Placement^ theComponent)
{
	Handle(::Geom_Axis2Placement) h_theComponent = theComponent->NativeInstance;
	((::AIS_Trihedron*)_NativeInstance)->SetComponent(h_theComponent);
	theComponent->NativeInstance = h_theComponent.get();
}

bool Macad::Occt::AIS_Trihedron::HasOwnSize()
{
	return ((::AIS_Trihedron*)_NativeInstance)->HasOwnSize();
}

void Macad::Occt::AIS_Trihedron::SetSize(double theValue)
{
	((::AIS_Trihedron*)_NativeInstance)->SetSize(theValue);
}

void Macad::Occt::AIS_Trihedron::UnsetSize()
{
	((::AIS_Trihedron*)_NativeInstance)->UnsetSize();
}

double Macad::Occt::AIS_Trihedron::Size()
{
	return ((::AIS_Trihedron*)_NativeInstance)->Size();
}

bool Macad::Occt::AIS_Trihedron::AcceptDisplayMode(int theMode)
{
	return ((::AIS_Trihedron*)_NativeInstance)->AcceptDisplayMode(theMode);
}

int Macad::Occt::AIS_Trihedron::Signature()
{
	return ((::AIS_Trihedron*)_NativeInstance)->Signature();
}

Macad::Occt::AIS_KindOfInteractive Macad::Occt::AIS_Trihedron::Type()
{
	return (Macad::Occt::AIS_KindOfInteractive)((::AIS_Trihedron*)_NativeInstance)->Type();
}

void Macad::Occt::AIS_Trihedron::SetColor(Macad::Occt::Quantity_Color^ theColor)
{
	((::AIS_Trihedron*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::AIS_Trihedron::SetTextColor(Macad::Occt::Quantity_Color^ theColor)
{
	((::AIS_Trihedron*)_NativeInstance)->SetTextColor(*(::Quantity_Color*)theColor->NativeInstance);
}

bool Macad::Occt::AIS_Trihedron::HasTextColor()
{
	return ((::AIS_Trihedron*)_NativeInstance)->HasTextColor();
}

Macad::Occt::Quantity_Color^ Macad::Occt::AIS_Trihedron::TextColor()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = ((::AIS_Trihedron*)_NativeInstance)->TextColor();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::AIS_Trihedron::SetArrowColor(Macad::Occt::Quantity_Color^ theColor)
{
	((::AIS_Trihedron*)_NativeInstance)->SetArrowColor(*(::Quantity_Color*)theColor->NativeInstance);
}

bool Macad::Occt::AIS_Trihedron::HasArrowColor()
{
	return ((::AIS_Trihedron*)_NativeInstance)->HasArrowColor();
}

Macad::Occt::Quantity_Color^ Macad::Occt::AIS_Trihedron::ArrowColor()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = ((::AIS_Trihedron*)_NativeInstance)->ArrowColor();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::AIS_Trihedron::UnsetColor()
{
	((::AIS_Trihedron*)_NativeInstance)->UnsetColor();
}

void Macad::Occt::AIS_Trihedron::SetDatumPartColor(Macad::Occt::Prs3d_DatumParts thePart, Macad::Occt::Quantity_Color^ theColor)
{
	((::AIS_Trihedron*)_NativeInstance)->SetDatumPartColor((::Prs3d_DatumParts)thePart, *(::Quantity_Color*)theColor->NativeInstance);
}

Macad::Occt::Quantity_Color^ Macad::Occt::AIS_Trihedron::DatumPartColor(Macad::Occt::Prs3d_DatumParts thePart)
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result = ((::AIS_Trihedron*)_NativeInstance)->DatumPartColor((::Prs3d_DatumParts)thePart);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
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
	return ((::AIS_Trihedron*)_NativeInstance)->ToDrawArrows();
}

void Macad::Occt::AIS_Trihedron::SetDrawArrows(bool theToDraw)
{
	((::AIS_Trihedron*)_NativeInstance)->SetDrawArrows(theToDraw);
}

void Macad::Occt::AIS_Trihedron::SetSelectionPriority(Macad::Occt::Prs3d_DatumParts thePart, int thePriority)
{
	((::AIS_Trihedron*)_NativeInstance)->SetSelectionPriority((::Prs3d_DatumParts)thePart, thePriority);
}

int Macad::Occt::AIS_Trihedron::SelectionPriority(Macad::Occt::Prs3d_DatumParts thePart)
{
	return ((::AIS_Trihedron*)_NativeInstance)->SelectionPriority((::Prs3d_DatumParts)thePart);
}

void Macad::Occt::AIS_Trihedron::SetLabel(Macad::Occt::Prs3d_DatumParts thePart, Macad::Occt::TCollection_ExtendedString^ thePriority)
{
	((::AIS_Trihedron*)_NativeInstance)->SetLabel((::Prs3d_DatumParts)thePart, *(::TCollection_ExtendedString*)thePriority->NativeInstance);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::AIS_Trihedron::Label(Macad::Occt::Prs3d_DatumParts thePart)
{
	::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
	*_result =  (::TCollection_ExtendedString)((::AIS_Trihedron*)_NativeInstance)->Label((::Prs3d_DatumParts)thePart);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

void Macad::Occt::AIS_Trihedron::ClearSelected()
{
	((::AIS_Trihedron*)_NativeInstance)->ClearSelected();
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
	Handle(::SelectMgr_SelectableObject) h_theSelObject = theSelObject->NativeInstance;
	NativeInstance = new ::AIS_TrihedronOwner(h_theSelObject, (::Prs3d_DatumParts)theDatumPart, thePriority);
	theSelObject->NativeInstance = h_theSelObject.get();
}

Macad::Occt::AIS_TrihedronOwner::AIS_TrihedronOwner(Macad::Occt::AIS_TrihedronOwner^ parameter1)
	: Macad::Occt::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_TrihedronOwner(*(::AIS_TrihedronOwner*)parameter1->NativeInstance);
}

Macad::Occt::Prs3d_DatumParts Macad::Occt::AIS_TrihedronOwner::DatumPart()
{
	return (Macad::Occt::Prs3d_DatumParts)((::AIS_TrihedronOwner*)_NativeInstance)->DatumPart();
}


Macad::Occt::AIS_TrihedronOwner^ Macad::Occt::AIS_TrihedronOwner::CreateDowncasted(::AIS_TrihedronOwner* instance)
{
	return gcnew Macad::Occt::AIS_TrihedronOwner( instance );
}



//---------------------------------------------------------------------
//  Class  AIS_ViewInputBuffer
//---------------------------------------------------------------------

Macad::Occt::AIS_ViewInputBuffer::AIS_ViewInputBuffer()
	: BaseClass<::AIS_ViewInputBuffer>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::AIS_ViewInputBuffer();
}

Macad::Occt::AIS_ViewInputBuffer::AIS_ViewInputBuffer(Macad::Occt::AIS_ViewInputBuffer^ parameter1)
	: BaseClass<::AIS_ViewInputBuffer>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::AIS_ViewInputBuffer(*(::AIS_ViewInputBuffer*)parameter1->NativeInstance);
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
	Handle(::Graphic3d_ArrayOfTriangles) h_theTris = theTris->NativeInstance;
	Handle(::Image_Texture) h_theTexture = theTexture->NativeInstance;
	NativeInstance = new ::AIS_XRTrackedDevice(h_theTris, h_theTexture);
	theTris->NativeInstance = h_theTris.get();
	theTexture->NativeInstance = h_theTexture.get();
}

Macad::Occt::AIS_XRTrackedDevice::AIS_XRTrackedDevice()
	: Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_XRTrackedDevice();
}

Macad::Occt::AIS_XRTrackedDevice::AIS_XRTrackedDevice(Macad::Occt::AIS_XRTrackedDevice^ parameter1)
	: Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_XRTrackedDevice(*(::AIS_XRTrackedDevice*)parameter1->NativeInstance);
}

Macad::Occt::Aspect_XRTrackedDeviceRole Macad::Occt::AIS_XRTrackedDevice::Role()
{
	return (Macad::Occt::Aspect_XRTrackedDeviceRole)((::AIS_XRTrackedDevice*)_NativeInstance)->Role();
}

void Macad::Occt::AIS_XRTrackedDevice::SetRole(Macad::Occt::Aspect_XRTrackedDeviceRole theRole)
{
	((::AIS_XRTrackedDevice*)_NativeInstance)->SetRole((::Aspect_XRTrackedDeviceRole)theRole);
}

Macad::Occt::Quantity_Color^ Macad::Occt::AIS_XRTrackedDevice::LaserColor()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::AIS_XRTrackedDevice*)_NativeInstance)->LaserColor();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::AIS_XRTrackedDevice::SetLaserColor(Macad::Occt::Quantity_Color^ theColor)
{
	((::AIS_XRTrackedDevice*)_NativeInstance)->SetLaserColor(*(::Quantity_Color*)theColor->NativeInstance);
}

float Macad::Occt::AIS_XRTrackedDevice::LaserLength()
{
	return ((::AIS_XRTrackedDevice*)_NativeInstance)->LaserLength();
}

void Macad::Occt::AIS_XRTrackedDevice::SetLaserLength(float theLength)
{
	((::AIS_XRTrackedDevice*)_NativeInstance)->SetLaserLength(theLength);
}

float Macad::Occt::AIS_XRTrackedDevice::UnitFactor()
{
	return ((::AIS_XRTrackedDevice*)_NativeInstance)->UnitFactor();
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
	: BaseClass<::AIS_ViewController>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::AIS_ViewController();
}

Macad::Occt::AIS_ViewInputBuffer^ Macad::Occt::AIS_ViewController::InputBuffer(Macad::Occt::AIS_ViewInputBufferType theType)
{
	::AIS_ViewInputBuffer* _result = new ::AIS_ViewInputBuffer();
	*_result =  (::AIS_ViewInputBuffer)((::AIS_ViewController*)_NativeInstance)->InputBuffer((::AIS_ViewInputBufferType)theType);
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
	Handle(::AIS_AnimationCamera) _result;
	_result = ((::AIS_ViewController*)_NativeInstance)->ViewAnimation();
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_AnimationCamera::CreateDowncasted( _result.get());
}

void Macad::Occt::AIS_ViewController::SetViewAnimation(Macad::Occt::AIS_AnimationCamera^ theAnimation)
{
	Handle(::AIS_AnimationCamera) h_theAnimation = theAnimation->NativeInstance;
	((::AIS_ViewController*)_NativeInstance)->SetViewAnimation(h_theAnimation);
	theAnimation->NativeInstance = h_theAnimation.get();
}

void Macad::Occt::AIS_ViewController::AbortViewAnimation()
{
	((::AIS_ViewController*)_NativeInstance)->AbortViewAnimation();
}

Macad::Occt::AIS_RotationMode Macad::Occt::AIS_ViewController::RotationMode()
{
	return (Macad::Occt::AIS_RotationMode)((::AIS_ViewController*)_NativeInstance)->RotationMode();
}

void Macad::Occt::AIS_ViewController::SetRotationMode(Macad::Occt::AIS_RotationMode theMode)
{
	((::AIS_ViewController*)_NativeInstance)->SetRotationMode((::AIS_RotationMode)theMode);
}

Macad::Occt::AIS_NavigationMode Macad::Occt::AIS_ViewController::NavigationMode()
{
	return (Macad::Occt::AIS_NavigationMode)((::AIS_ViewController*)_NativeInstance)->NavigationMode();
}

void Macad::Occt::AIS_ViewController::SetNavigationMode(Macad::Occt::AIS_NavigationMode theMode)
{
	((::AIS_ViewController*)_NativeInstance)->SetNavigationMode((::AIS_NavigationMode)theMode);
}

float Macad::Occt::AIS_ViewController::MouseAcceleration()
{
	return ((::AIS_ViewController*)_NativeInstance)->MouseAcceleration();
}

void Macad::Occt::AIS_ViewController::SetMouseAcceleration(float theRatio)
{
	((::AIS_ViewController*)_NativeInstance)->SetMouseAcceleration(theRatio);
}

float Macad::Occt::AIS_ViewController::OrbitAcceleration()
{
	return ((::AIS_ViewController*)_NativeInstance)->OrbitAcceleration();
}

void Macad::Occt::AIS_ViewController::SetOrbitAcceleration(float theRatio)
{
	((::AIS_ViewController*)_NativeInstance)->SetOrbitAcceleration(theRatio);
}

bool Macad::Occt::AIS_ViewController::ToShowPanAnchorPoint()
{
	return ((::AIS_ViewController*)_NativeInstance)->ToShowPanAnchorPoint();
}

void Macad::Occt::AIS_ViewController::SetShowPanAnchorPoint(bool theToShow)
{
	((::AIS_ViewController*)_NativeInstance)->SetShowPanAnchorPoint(theToShow);
}

bool Macad::Occt::AIS_ViewController::ToShowRotateCenter()
{
	return ((::AIS_ViewController*)_NativeInstance)->ToShowRotateCenter();
}

void Macad::Occt::AIS_ViewController::SetShowRotateCenter(bool theToShow)
{
	((::AIS_ViewController*)_NativeInstance)->SetShowRotateCenter(theToShow);
}

bool Macad::Occt::AIS_ViewController::ToLockOrbitZUp()
{
	return ((::AIS_ViewController*)_NativeInstance)->ToLockOrbitZUp();
}

void Macad::Occt::AIS_ViewController::SetLockOrbitZUp(bool theToForceUp)
{
	((::AIS_ViewController*)_NativeInstance)->SetLockOrbitZUp(theToForceUp);
}

bool Macad::Occt::AIS_ViewController::ToAllowTouchZRotation()
{
	return ((::AIS_ViewController*)_NativeInstance)->ToAllowTouchZRotation();
}

void Macad::Occt::AIS_ViewController::SetAllowTouchZRotation(bool theToEnable)
{
	((::AIS_ViewController*)_NativeInstance)->SetAllowTouchZRotation(theToEnable);
}

bool Macad::Occt::AIS_ViewController::ToAllowRotation()
{
	return ((::AIS_ViewController*)_NativeInstance)->ToAllowRotation();
}

void Macad::Occt::AIS_ViewController::SetAllowRotation(bool theToEnable)
{
	((::AIS_ViewController*)_NativeInstance)->SetAllowRotation(theToEnable);
}

bool Macad::Occt::AIS_ViewController::ToAllowPanning()
{
	return ((::AIS_ViewController*)_NativeInstance)->ToAllowPanning();
}

void Macad::Occt::AIS_ViewController::SetAllowPanning(bool theToEnable)
{
	((::AIS_ViewController*)_NativeInstance)->SetAllowPanning(theToEnable);
}

bool Macad::Occt::AIS_ViewController::ToAllowZooming()
{
	return ((::AIS_ViewController*)_NativeInstance)->ToAllowZooming();
}

void Macad::Occt::AIS_ViewController::SetAllowZooming(bool theToEnable)
{
	((::AIS_ViewController*)_NativeInstance)->SetAllowZooming(theToEnable);
}

bool Macad::Occt::AIS_ViewController::ToAllowZFocus()
{
	return ((::AIS_ViewController*)_NativeInstance)->ToAllowZFocus();
}

void Macad::Occt::AIS_ViewController::SetAllowZFocus(bool theToEnable)
{
	((::AIS_ViewController*)_NativeInstance)->SetAllowZFocus(theToEnable);
}

bool Macad::Occt::AIS_ViewController::ToAllowHighlight()
{
	return ((::AIS_ViewController*)_NativeInstance)->ToAllowHighlight();
}

void Macad::Occt::AIS_ViewController::SetAllowHighlight(bool theToEnable)
{
	((::AIS_ViewController*)_NativeInstance)->SetAllowHighlight(theToEnable);
}

bool Macad::Occt::AIS_ViewController::ToAllowDragging()
{
	return ((::AIS_ViewController*)_NativeInstance)->ToAllowDragging();
}

void Macad::Occt::AIS_ViewController::SetAllowDragging(bool theToEnable)
{
	((::AIS_ViewController*)_NativeInstance)->SetAllowDragging(theToEnable);
}

bool Macad::Occt::AIS_ViewController::ToStickToRayOnZoom()
{
	return ((::AIS_ViewController*)_NativeInstance)->ToStickToRayOnZoom();
}

void Macad::Occt::AIS_ViewController::SetStickToRayOnZoom(bool theToEnable)
{
	((::AIS_ViewController*)_NativeInstance)->SetStickToRayOnZoom(theToEnable);
}

bool Macad::Occt::AIS_ViewController::ToStickToRayOnRotation()
{
	return ((::AIS_ViewController*)_NativeInstance)->ToStickToRayOnRotation();
}

void Macad::Occt::AIS_ViewController::SetStickToRayOnRotation(bool theToEnable)
{
	((::AIS_ViewController*)_NativeInstance)->SetStickToRayOnRotation(theToEnable);
}

bool Macad::Occt::AIS_ViewController::ToInvertPitch()
{
	return ((::AIS_ViewController*)_NativeInstance)->ToInvertPitch();
}

void Macad::Occt::AIS_ViewController::SetInvertPitch(bool theToInvert)
{
	((::AIS_ViewController*)_NativeInstance)->SetInvertPitch(theToInvert);
}

float Macad::Occt::AIS_ViewController::WalkSpeedAbsolute()
{
	return ((::AIS_ViewController*)_NativeInstance)->WalkSpeedAbsolute();
}

void Macad::Occt::AIS_ViewController::SetWalkSpeedAbsolute(float theSpeed)
{
	((::AIS_ViewController*)_NativeInstance)->SetWalkSpeedAbsolute(theSpeed);
}

float Macad::Occt::AIS_ViewController::WalkSpeedRelative()
{
	return ((::AIS_ViewController*)_NativeInstance)->WalkSpeedRelative();
}

void Macad::Occt::AIS_ViewController::SetWalkSpeedRelative(float theFactor)
{
	((::AIS_ViewController*)_NativeInstance)->SetWalkSpeedRelative(theFactor);
}

float Macad::Occt::AIS_ViewController::ThrustSpeed()
{
	return ((::AIS_ViewController*)_NativeInstance)->ThrustSpeed();
}

void Macad::Occt::AIS_ViewController::SetThrustSpeed(float theSpeed)
{
	((::AIS_ViewController*)_NativeInstance)->SetThrustSpeed(theSpeed);
}

bool Macad::Occt::AIS_ViewController::HasPreviousMoveTo()
{
	return ((::AIS_ViewController*)_NativeInstance)->HasPreviousMoveTo();
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::AIS_ViewController::PreviousMoveTo()
{
	::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i(0);
	*_result =  (::Graphic3d_Vec2i)((::AIS_ViewController*)_NativeInstance)->PreviousMoveTo();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

void Macad::Occt::AIS_ViewController::ResetPreviousMoveTo()
{
	((::AIS_ViewController*)_NativeInstance)->ResetPreviousMoveTo();
}

bool Macad::Occt::AIS_ViewController::ToDisplayXRAuxDevices()
{
	return ((::AIS_ViewController*)_NativeInstance)->ToDisplayXRAuxDevices();
}

void Macad::Occt::AIS_ViewController::SetDisplayXRAuxDevices(bool theToDisplay)
{
	((::AIS_ViewController*)_NativeInstance)->SetDisplayXRAuxDevices(theToDisplay);
}

bool Macad::Occt::AIS_ViewController::ToDisplayXRHands()
{
	return ((::AIS_ViewController*)_NativeInstance)->ToDisplayXRHands();
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

double Macad::Occt::AIS_ViewController::MouseDoubleClickInterval()
{
	return ((::AIS_ViewController*)_NativeInstance)->MouseDoubleClickInterval();
}

void Macad::Occt::AIS_ViewController::SetMouseDoubleClickInterval(double theSeconds)
{
	((::AIS_ViewController*)_NativeInstance)->SetMouseDoubleClickInterval(theSeconds);
}

void Macad::Occt::AIS_ViewController::SelectInViewer(Macad::Occt::Graphic3d_Vec2i^ thePnt, bool theIsXOR)
{
	((::AIS_ViewController*)_NativeInstance)->SelectInViewer(*(::Graphic3d_Vec2i*)thePnt->NativeInstance, theIsXOR);
}

void Macad::Occt::AIS_ViewController::SelectInViewer(Macad::Occt::Graphic3d_Vec2i^ thePnt)
{
	((::AIS_ViewController*)_NativeInstance)->SelectInViewer(*(::Graphic3d_Vec2i*)thePnt->NativeInstance, false);
}

void Macad::Occt::AIS_ViewController::UpdateRubberBand(Macad::Occt::Graphic3d_Vec2i^ thePntFrom, Macad::Occt::Graphic3d_Vec2i^ thePntTo, bool theIsXOR)
{
	((::AIS_ViewController*)_NativeInstance)->UpdateRubberBand(*(::Graphic3d_Vec2i*)thePntFrom->NativeInstance, *(::Graphic3d_Vec2i*)thePntTo->NativeInstance, theIsXOR);
}

void Macad::Occt::AIS_ViewController::UpdateRubberBand(Macad::Occt::Graphic3d_Vec2i^ thePntFrom, Macad::Occt::Graphic3d_Vec2i^ thePntTo)
{
	((::AIS_ViewController*)_NativeInstance)->UpdateRubberBand(*(::Graphic3d_Vec2i*)thePntFrom->NativeInstance, *(::Graphic3d_Vec2i*)thePntTo->NativeInstance, false);
}

void Macad::Occt::AIS_ViewController::UpdatePolySelection(Macad::Occt::Graphic3d_Vec2i^ thePnt, bool theToAppend)
{
	((::AIS_ViewController*)_NativeInstance)->UpdatePolySelection(*(::Graphic3d_Vec2i*)thePnt->NativeInstance, theToAppend);
}

bool Macad::Occt::AIS_ViewController::UpdateZoom(Macad::Occt::Aspect_ScrollDelta^ theDelta)
{
	return ((::AIS_ViewController*)_NativeInstance)->UpdateZoom(*(::Aspect_ScrollDelta*)theDelta->NativeInstance);
}

bool Macad::Occt::AIS_ViewController::UpdateZRotation(double theAngle)
{
	return ((::AIS_ViewController*)_NativeInstance)->UpdateZRotation(theAngle);
}

bool Macad::Occt::AIS_ViewController::UpdateMouseScroll(Macad::Occt::Aspect_ScrollDelta^ theDelta)
{
	return ((::AIS_ViewController*)_NativeInstance)->UpdateMouseScroll(*(::Aspect_ScrollDelta*)theDelta->NativeInstance);
}

bool Macad::Occt::AIS_ViewController::UpdateMouseButtons(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButtons, unsigned int theModifiers, bool theIsEmulated)
{
	return ((::AIS_ViewController*)_NativeInstance)->UpdateMouseButtons(*(::Graphic3d_Vec2i*)thePoint->NativeInstance, theButtons, theModifiers, theIsEmulated);
}

bool Macad::Occt::AIS_ViewController::UpdateMousePosition(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButtons, unsigned int theModifiers, bool theIsEmulated)
{
	return ((::AIS_ViewController*)_NativeInstance)->UpdateMousePosition(*(::Graphic3d_Vec2i*)thePoint->NativeInstance, theButtons, theModifiers, theIsEmulated);
}

bool Macad::Occt::AIS_ViewController::PressMouseButton(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButton, unsigned int theModifiers, bool theIsEmulated)
{
	return ((::AIS_ViewController*)_NativeInstance)->PressMouseButton(*(::Graphic3d_Vec2i*)thePoint->NativeInstance, theButton, theModifiers, theIsEmulated);
}

bool Macad::Occt::AIS_ViewController::ReleaseMouseButton(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButton, unsigned int theModifiers, bool theIsEmulated)
{
	return ((::AIS_ViewController*)_NativeInstance)->ReleaseMouseButton(*(::Graphic3d_Vec2i*)thePoint->NativeInstance, theButton, theModifiers, theIsEmulated);
}

bool Macad::Occt::AIS_ViewController::UpdateMouseClick(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButton, unsigned int theModifiers, bool theIsDoubleClick)
{
	return ((::AIS_ViewController*)_NativeInstance)->UpdateMouseClick(*(::Graphic3d_Vec2i*)thePoint->NativeInstance, theButton, theModifiers, theIsDoubleClick);
}

unsigned int Macad::Occt::AIS_ViewController::PressedMouseButtons()
{
	return ((::AIS_ViewController*)_NativeInstance)->PressedMouseButtons();
}

unsigned int Macad::Occt::AIS_ViewController::LastMouseFlags()
{
	return ((::AIS_ViewController*)_NativeInstance)->LastMouseFlags();
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::AIS_ViewController::LastMousePosition()
{
	::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i(0);
	*_result =  (::Graphic3d_Vec2i)((::AIS_ViewController*)_NativeInstance)->LastMousePosition();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

float Macad::Occt::AIS_ViewController::TouchToleranceScale()
{
	return ((::AIS_ViewController*)_NativeInstance)->TouchToleranceScale();
}

void Macad::Occt::AIS_ViewController::SetTouchToleranceScale(float theTolerance)
{
	((::AIS_ViewController*)_NativeInstance)->SetTouchToleranceScale(theTolerance);
}

bool Macad::Occt::AIS_ViewController::HasTouchPoints()
{
	return ((::AIS_ViewController*)_NativeInstance)->HasTouchPoints();
}

void Macad::Occt::AIS_ViewController::AddTouchPoint(size_t theId, Macad::Occt::Graphic3d_Vec2d^ thePnt, bool theClearBefore)
{
	((::AIS_ViewController*)_NativeInstance)->AddTouchPoint(theId, *(::Graphic3d_Vec2d*)thePnt->NativeInstance, theClearBefore);
}

void Macad::Occt::AIS_ViewController::AddTouchPoint(size_t theId, Macad::Occt::Graphic3d_Vec2d^ thePnt)
{
	((::AIS_ViewController*)_NativeInstance)->AddTouchPoint(theId, *(::Graphic3d_Vec2d*)thePnt->NativeInstance, false);
}

bool Macad::Occt::AIS_ViewController::RemoveTouchPoint(size_t theId, bool theClearSelectPnts)
{
	return ((::AIS_ViewController*)_NativeInstance)->RemoveTouchPoint(theId, theClearSelectPnts);
}

bool Macad::Occt::AIS_ViewController::RemoveTouchPoint(size_t theId)
{
	return ((::AIS_ViewController*)_NativeInstance)->RemoveTouchPoint(theId, false);
}

void Macad::Occt::AIS_ViewController::UpdateTouchPoint(size_t theId, Macad::Occt::Graphic3d_Vec2d^ thePnt)
{
	((::AIS_ViewController*)_NativeInstance)->UpdateTouchPoint(theId, *(::Graphic3d_Vec2d*)thePnt->NativeInstance);
}

float Macad::Occt::AIS_ViewController::Get3dMouseTranslationScale()
{
	return ((::AIS_ViewController*)_NativeInstance)->Get3dMouseTranslationScale();
}

void Macad::Occt::AIS_ViewController::Set3dMouseTranslationScale(float theScale)
{
	((::AIS_ViewController*)_NativeInstance)->Set3dMouseTranslationScale(theScale);
}

float Macad::Occt::AIS_ViewController::Get3dMouseRotationScale()
{
	return ((::AIS_ViewController*)_NativeInstance)->Get3dMouseRotationScale();
}

void Macad::Occt::AIS_ViewController::Set3dMouseRotationScale(float theScale)
{
	((::AIS_ViewController*)_NativeInstance)->Set3dMouseRotationScale(theScale);
}

bool Macad::Occt::AIS_ViewController::To3dMousePreciseInput()
{
	return ((::AIS_ViewController*)_NativeInstance)->To3dMousePreciseInput();
}

void Macad::Occt::AIS_ViewController::Set3dMousePreciseInput(bool theIsQuadric)
{
	((::AIS_ViewController*)_NativeInstance)->Set3dMousePreciseInput(theIsQuadric);
}

bool Macad::Occt::AIS_ViewController::Update3dMouse(Macad::Occt::WNT_HIDSpaceMouse^ theEvent)
{
	return ((::AIS_ViewController*)_NativeInstance)->Update3dMouse(*(::WNT_HIDSpaceMouse*)theEvent->NativeInstance);
}

bool Macad::Occt::AIS_ViewController::update3dMouseTranslation(Macad::Occt::WNT_HIDSpaceMouse^ theEvent)
{
	return ((::AIS_ViewController*)_NativeInstance)->update3dMouseTranslation(*(::WNT_HIDSpaceMouse*)theEvent->NativeInstance);
}

bool Macad::Occt::AIS_ViewController::update3dMouseRotation(Macad::Occt::WNT_HIDSpaceMouse^ theEvent)
{
	return ((::AIS_ViewController*)_NativeInstance)->update3dMouseRotation(*(::WNT_HIDSpaceMouse*)theEvent->NativeInstance);
}

bool Macad::Occt::AIS_ViewController::update3dMouseKeys(Macad::Occt::WNT_HIDSpaceMouse^ theEvent)
{
	return ((::AIS_ViewController*)_NativeInstance)->update3dMouseKeys(*(::WNT_HIDSpaceMouse*)theEvent->NativeInstance);
}

double Macad::Occt::AIS_ViewController::EventTime()
{
	return ((::AIS_ViewController*)_NativeInstance)->EventTime();
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
	Handle(::AIS_InteractiveContext) h_theCtx = theCtx->NativeInstance;
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::AIS_ViewController*)_NativeInstance)->FlushViewEvents(h_theCtx, h_theView, theToHandle);
	theCtx->NativeInstance = h_theCtx.get();
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::AIS_ViewController::FlushViewEvents(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView)
{
	Handle(::AIS_InteractiveContext) h_theCtx = theCtx->NativeInstance;
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::AIS_ViewController*)_NativeInstance)->FlushViewEvents(h_theCtx, h_theView, false);
	theCtx->NativeInstance = h_theCtx.get();
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::AIS_ViewController::HandleViewEvents(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView)
{
	Handle(::AIS_InteractiveContext) h_theCtx = theCtx->NativeInstance;
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::AIS_ViewController*)_NativeInstance)->HandleViewEvents(h_theCtx, h_theView);
	theCtx->NativeInstance = h_theCtx.get();
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::AIS_ViewController::OnSelectionChanged(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView)
{
	Handle(::AIS_InteractiveContext) h_theCtx = theCtx->NativeInstance;
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::AIS_ViewController*)_NativeInstance)->OnSelectionChanged(h_theCtx, h_theView);
	theCtx->NativeInstance = h_theCtx.get();
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::AIS_ViewController::OnObjectDragged(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView, Macad::Occt::AIS_DragAction theAction)
{
	Handle(::AIS_InteractiveContext) h_theCtx = theCtx->NativeInstance;
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::AIS_ViewController*)_NativeInstance)->OnObjectDragged(h_theCtx, h_theView, (::AIS_DragAction)theAction);
	theCtx->NativeInstance = h_theCtx.get();
	theView->NativeInstance = h_theView.get();
}

bool Macad::Occt::AIS_ViewController::PickPoint(Macad::Occt::Pnt% thePnt, Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView, Macad::Occt::Graphic3d_Vec2i^ theCursor, bool theToStickToPickRay)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
	Handle(::AIS_InteractiveContext) h_theCtx = theCtx->NativeInstance;
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	return ((::AIS_ViewController*)_NativeInstance)->PickPoint(*(gp_Pnt*)pp_thePnt, h_theCtx, h_theView, *(::Graphic3d_Vec2i*)theCursor->NativeInstance, theToStickToPickRay);
	theCtx->NativeInstance = h_theCtx.get();
	theView->NativeInstance = h_theView.get();
}

Macad::Occt::Pnt Macad::Occt::AIS_ViewController::GravityPoint(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView)
{
	Handle(::AIS_InteractiveContext) h_theCtx = theCtx->NativeInstance;
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	return Macad::Occt::Pnt(((::AIS_ViewController*)_NativeInstance)->GravityPoint(h_theCtx, h_theView));
	theCtx->NativeInstance = h_theCtx.get();
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::AIS_ViewController::FitAllAuto(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView)
{
	Handle(::AIS_InteractiveContext) h_theCtx = theCtx->NativeInstance;
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::AIS_ViewController*)_NativeInstance)->FitAllAuto(h_theCtx, h_theView);
	theCtx->NativeInstance = h_theCtx.get();
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::AIS_ViewController::handleViewOrientationKeys(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView)
{
	Handle(::AIS_InteractiveContext) h_theCtx = theCtx->NativeInstance;
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::AIS_ViewController*)_NativeInstance)->handleViewOrientationKeys(h_theCtx, h_theView);
	theCtx->NativeInstance = h_theCtx.get();
	theView->NativeInstance = h_theView.get();
}

Macad::Occt::AIS_WalkDelta^ Macad::Occt::AIS_ViewController::handleNavigationKeys(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView)
{
	Handle(::AIS_InteractiveContext) h_theCtx = theCtx->NativeInstance;
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	::AIS_WalkDelta* _result = new ::AIS_WalkDelta();
	*_result = ((::AIS_ViewController*)_NativeInstance)->handleNavigationKeys(h_theCtx, h_theView);
	theCtx->NativeInstance = h_theCtx.get();
	theView->NativeInstance = h_theView.get();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::AIS_WalkDelta(_result);
}

void Macad::Occt::AIS_ViewController::handleCameraActions(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView, Macad::Occt::AIS_WalkDelta^ theWalk)
{
	Handle(::AIS_InteractiveContext) h_theCtx = theCtx->NativeInstance;
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::AIS_ViewController*)_NativeInstance)->handleCameraActions(h_theCtx, h_theView, *(::AIS_WalkDelta*)theWalk->NativeInstance);
	theCtx->NativeInstance = h_theCtx.get();
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::AIS_ViewController::handleMoveTo(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView)
{
	Handle(::AIS_InteractiveContext) h_theCtx = theCtx->NativeInstance;
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::AIS_ViewController*)_NativeInstance)->handleMoveTo(h_theCtx, h_theView);
	theCtx->NativeInstance = h_theCtx.get();
	theView->NativeInstance = h_theView.get();
}

bool Macad::Occt::AIS_ViewController::toAskNextFrame()
{
	return ((::AIS_ViewController*)_NativeInstance)->toAskNextFrame();
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
	return ((::AIS_ViewController*)_NativeInstance)->hasPanningAnchorPoint();
}

Macad::Occt::Pnt Macad::Occt::AIS_ViewController::panningAnchorPoint()
{
	return Macad::Occt::Pnt(((::AIS_ViewController*)_NativeInstance)->panningAnchorPoint());
}

void Macad::Occt::AIS_ViewController::setPanningAnchorPoint(Macad::Occt::Pnt thePnt)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
	((::AIS_ViewController*)_NativeInstance)->setPanningAnchorPoint(*(gp_Pnt*)pp_thePnt);
}

void Macad::Occt::AIS_ViewController::handlePanning(Macad::Occt::V3d_View^ theView)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::AIS_ViewController*)_NativeInstance)->handlePanning(h_theView);
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::AIS_ViewController::handleZRotate(Macad::Occt::V3d_View^ theView)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::AIS_ViewController*)_NativeInstance)->handleZRotate(h_theView);
	theView->NativeInstance = h_theView.get();
}

double Macad::Occt::AIS_ViewController::MinZoomDistance()
{
	return ((::AIS_ViewController*)_NativeInstance)->MinZoomDistance();
}

void Macad::Occt::AIS_ViewController::SetMinZoomDistance(double theDist)
{
	((::AIS_ViewController*)_NativeInstance)->SetMinZoomDistance(theDist);
}

void Macad::Occt::AIS_ViewController::handleZoom(Macad::Occt::V3d_View^ theView, Macad::Occt::Aspect_ScrollDelta^ theParams, Macad::Occt::Pnt thePnt)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
	((::AIS_ViewController*)_NativeInstance)->handleZoom(h_theView, *(::Aspect_ScrollDelta*)theParams->NativeInstance, (gp_Pnt*)pp_thePnt);
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::AIS_ViewController::handleZFocusScroll(Macad::Occt::V3d_View^ theView, Macad::Occt::Aspect_ScrollDelta^ theParams)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::AIS_ViewController*)_NativeInstance)->handleZFocusScroll(h_theView, *(::Aspect_ScrollDelta*)theParams->NativeInstance);
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::AIS_ViewController::handleOrbitRotation(Macad::Occt::V3d_View^ theView, Macad::Occt::Pnt thePnt, bool theToLockZUp)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
	((::AIS_ViewController*)_NativeInstance)->handleOrbitRotation(h_theView, *(gp_Pnt*)pp_thePnt, theToLockZUp);
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::AIS_ViewController::handleViewRotation(Macad::Occt::V3d_View^ theView, double theYawExtra, double thePitchExtra, double theRoll, bool theToRestartOnIncrement)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::AIS_ViewController*)_NativeInstance)->handleViewRotation(h_theView, theYawExtra, thePitchExtra, theRoll, theToRestartOnIncrement);
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::AIS_ViewController::handleViewRedraw(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView)
{
	Handle(::AIS_InteractiveContext) h_theCtx = theCtx->NativeInstance;
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::AIS_ViewController*)_NativeInstance)->handleViewRedraw(h_theCtx, h_theView);
	theCtx->NativeInstance = h_theCtx.get();
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::AIS_ViewController::handleXRInput(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView, Macad::Occt::AIS_WalkDelta^ theWalk)
{
	Handle(::AIS_InteractiveContext) h_theCtx = theCtx->NativeInstance;
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::AIS_ViewController*)_NativeInstance)->handleXRInput(h_theCtx, h_theView, *(::AIS_WalkDelta*)theWalk->NativeInstance);
	theCtx->NativeInstance = h_theCtx.get();
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::AIS_ViewController::handleXRTurnPad(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView)
{
	Handle(::AIS_InteractiveContext) h_theCtx = theCtx->NativeInstance;
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::AIS_ViewController*)_NativeInstance)->handleXRTurnPad(h_theCtx, h_theView);
	theCtx->NativeInstance = h_theCtx.get();
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::AIS_ViewController::handleXRTeleport(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView)
{
	Handle(::AIS_InteractiveContext) h_theCtx = theCtx->NativeInstance;
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::AIS_ViewController*)_NativeInstance)->handleXRTeleport(h_theCtx, h_theView);
	theCtx->NativeInstance = h_theCtx.get();
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::AIS_ViewController::handleXRPicking(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView)
{
	Handle(::AIS_InteractiveContext) h_theCtx = theCtx->NativeInstance;
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::AIS_ViewController*)_NativeInstance)->handleXRPicking(h_theCtx, h_theView);
	theCtx->NativeInstance = h_theCtx.get();
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::AIS_ViewController::handleXRHighlight(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView)
{
	Handle(::AIS_InteractiveContext) h_theCtx = theCtx->NativeInstance;
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::AIS_ViewController*)_NativeInstance)->handleXRHighlight(h_theCtx, h_theView);
	theCtx->NativeInstance = h_theCtx.get();
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::AIS_ViewController::handleXRPresentations(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView)
{
	Handle(::AIS_InteractiveContext) h_theCtx = theCtx->NativeInstance;
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::AIS_ViewController*)_NativeInstance)->handleXRPresentations(h_theCtx, h_theView);
	theCtx->NativeInstance = h_theCtx.get();
	theView->NativeInstance = h_theView.get();
}

int Macad::Occt::AIS_ViewController::handleXRMoveTo(Macad::Occt::AIS_InteractiveContext^ theCtx, Macad::Occt::V3d_View^ theView, Macad::Occt::Trsf thePose, bool theToHighlight)
{
	Handle(::AIS_InteractiveContext) h_theCtx = theCtx->NativeInstance;
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	pin_ptr<Macad::Occt::Trsf> pp_thePose = &thePose;
	return ((::AIS_ViewController*)_NativeInstance)->handleXRMoveTo(h_theCtx, h_theView, *(gp_Trsf*)pp_thePose, theToHighlight);
	theCtx->NativeInstance = h_theCtx.get();
	theView->NativeInstance = h_theView.get();
}




//---------------------------------------------------------------------
//  Class  AIS_ViewCubeOwner
//---------------------------------------------------------------------

Macad::Occt::AIS_ViewCubeOwner::AIS_ViewCubeOwner(Macad::Occt::AIS_ViewCube^ theObject, Macad::Occt::V3d_TypeOfOrientation theOrient, int thePriority)
	: Macad::Occt::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
	Handle(::AIS_ViewCube) h_theObject = theObject->NativeInstance;
	NativeInstance = new ::AIS_ViewCubeOwner(h_theObject, (::V3d_TypeOfOrientation)theOrient, thePriority);
	theObject->NativeInstance = h_theObject.get();
}

Macad::Occt::AIS_ViewCubeOwner::AIS_ViewCubeOwner(Macad::Occt::AIS_ViewCube^ theObject, Macad::Occt::V3d_TypeOfOrientation theOrient)
	: Macad::Occt::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
	Handle(::AIS_ViewCube) h_theObject = theObject->NativeInstance;
	NativeInstance = new ::AIS_ViewCubeOwner(h_theObject, (::V3d_TypeOfOrientation)theOrient, 5);
	theObject->NativeInstance = h_theObject.get();
}

Macad::Occt::AIS_ViewCubeOwner::AIS_ViewCubeOwner(Macad::Occt::AIS_ViewCubeOwner^ parameter1)
	: Macad::Occt::SelectMgr_EntityOwner(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_ViewCubeOwner(*(::AIS_ViewCubeOwner*)parameter1->NativeInstance);
}

bool Macad::Occt::AIS_ViewCubeOwner::IsForcedHilight()
{
	return ((::AIS_ViewCubeOwner*)_NativeInstance)->IsForcedHilight();
}

Macad::Occt::V3d_TypeOfOrientation Macad::Occt::AIS_ViewCubeOwner::MainOrientation()
{
	return (Macad::Occt::V3d_TypeOfOrientation)((::AIS_ViewCubeOwner*)_NativeInstance)->MainOrientation();
}

bool Macad::Occt::AIS_ViewCubeOwner::HandleMouseClick(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButton, unsigned int theModifiers, bool theIsDoubleClick)
{
	return ((::AIS_ViewCubeOwner*)_NativeInstance)->HandleMouseClick(*(::Graphic3d_Vec2i*)thePoint->NativeInstance, theButton, theModifiers, theIsDoubleClick);
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

Macad::Occt::AIS_ViewCube::AIS_ViewCube(Macad::Occt::AIS_ViewCube^ parameter1)
	: Macad::Occt::AIS_InteractiveObject(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_ViewCube(*(::AIS_ViewCube*)parameter1->NativeInstance);
}

bool Macad::Occt::AIS_ViewCube::IsBoxSide(Macad::Occt::V3d_TypeOfOrientation theOrient)
{
	return ::AIS_ViewCube::IsBoxSide((::V3d_TypeOfOrientation)theOrient);
}

bool Macad::Occt::AIS_ViewCube::IsBoxEdge(Macad::Occt::V3d_TypeOfOrientation theOrient)
{
	return ::AIS_ViewCube::IsBoxEdge((::V3d_TypeOfOrientation)theOrient);
}

bool Macad::Occt::AIS_ViewCube::IsBoxCorner(Macad::Occt::V3d_TypeOfOrientation theOrient)
{
	return ::AIS_ViewCube::IsBoxCorner((::V3d_TypeOfOrientation)theOrient);
}

Macad::Occt::AIS_AnimationCamera^ Macad::Occt::AIS_ViewCube::ViewAnimation()
{
	Handle(::AIS_AnimationCamera) _result;
	_result = ((::AIS_ViewCube*)_NativeInstance)->ViewAnimation();
	 return _result.IsNull() ? nullptr : Macad::Occt::AIS_AnimationCamera::CreateDowncasted( _result.get());
}

void Macad::Occt::AIS_ViewCube::SetViewAnimation(Macad::Occt::AIS_AnimationCamera^ theAnimation)
{
	Handle(::AIS_AnimationCamera) h_theAnimation = theAnimation->NativeInstance;
	((::AIS_ViewCube*)_NativeInstance)->SetViewAnimation(h_theAnimation);
	theAnimation->NativeInstance = h_theAnimation.get();
}

bool Macad::Occt::AIS_ViewCube::ToAutoStartAnimation()
{
	return ((::AIS_ViewCube*)_NativeInstance)->ToAutoStartAnimation();
}

void Macad::Occt::AIS_ViewCube::SetAutoStartAnimation(bool theToEnable)
{
	((::AIS_ViewCube*)_NativeInstance)->SetAutoStartAnimation(theToEnable);
}

bool Macad::Occt::AIS_ViewCube::IsFixedAnimationLoop()
{
	return ((::AIS_ViewCube*)_NativeInstance)->IsFixedAnimationLoop();
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
	return ((::AIS_ViewCube*)_NativeInstance)->Size();
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
	return ((::AIS_ViewCube*)_NativeInstance)->BoxFacetExtension();
}

void Macad::Occt::AIS_ViewCube::SetBoxFacetExtension(double theValue)
{
	((::AIS_ViewCube*)_NativeInstance)->SetBoxFacetExtension(theValue);
}

double Macad::Occt::AIS_ViewCube::AxesPadding()
{
	return ((::AIS_ViewCube*)_NativeInstance)->AxesPadding();
}

void Macad::Occt::AIS_ViewCube::SetAxesPadding(double theValue)
{
	((::AIS_ViewCube*)_NativeInstance)->SetAxesPadding(theValue);
}

double Macad::Occt::AIS_ViewCube::BoxEdgeGap()
{
	return ((::AIS_ViewCube*)_NativeInstance)->BoxEdgeGap();
}

void Macad::Occt::AIS_ViewCube::SetBoxEdgeGap(double theValue)
{
	((::AIS_ViewCube*)_NativeInstance)->SetBoxEdgeGap(theValue);
}

double Macad::Occt::AIS_ViewCube::BoxEdgeMinSize()
{
	return ((::AIS_ViewCube*)_NativeInstance)->BoxEdgeMinSize();
}

void Macad::Occt::AIS_ViewCube::SetBoxEdgeMinSize(double theValue)
{
	((::AIS_ViewCube*)_NativeInstance)->SetBoxEdgeMinSize(theValue);
}

double Macad::Occt::AIS_ViewCube::BoxCornerMinSize()
{
	return ((::AIS_ViewCube*)_NativeInstance)->BoxCornerMinSize();
}

void Macad::Occt::AIS_ViewCube::SetBoxCornerMinSize(double theValue)
{
	((::AIS_ViewCube*)_NativeInstance)->SetBoxCornerMinSize(theValue);
}

double Macad::Occt::AIS_ViewCube::RoundRadius()
{
	return ((::AIS_ViewCube*)_NativeInstance)->RoundRadius();
}

void Macad::Occt::AIS_ViewCube::SetRoundRadius(double theValue)
{
	((::AIS_ViewCube*)_NativeInstance)->SetRoundRadius(theValue);
}

double Macad::Occt::AIS_ViewCube::AxesRadius()
{
	return ((::AIS_ViewCube*)_NativeInstance)->AxesRadius();
}

void Macad::Occt::AIS_ViewCube::SetAxesRadius(double theRadius)
{
	((::AIS_ViewCube*)_NativeInstance)->SetAxesRadius(theRadius);
}

double Macad::Occt::AIS_ViewCube::AxesConeRadius()
{
	return ((::AIS_ViewCube*)_NativeInstance)->AxesConeRadius();
}

void Macad::Occt::AIS_ViewCube::SetAxesConeRadius(double theRadius)
{
	((::AIS_ViewCube*)_NativeInstance)->SetAxesConeRadius(theRadius);
}

double Macad::Occt::AIS_ViewCube::AxesSphereRadius()
{
	return ((::AIS_ViewCube*)_NativeInstance)->AxesSphereRadius();
}

void Macad::Occt::AIS_ViewCube::SetAxesSphereRadius(double theRadius)
{
	((::AIS_ViewCube*)_NativeInstance)->SetAxesSphereRadius(theRadius);
}

bool Macad::Occt::AIS_ViewCube::ToDrawAxes()
{
	return ((::AIS_ViewCube*)_NativeInstance)->ToDrawAxes();
}

void Macad::Occt::AIS_ViewCube::SetDrawAxes(bool theValue)
{
	((::AIS_ViewCube*)_NativeInstance)->SetDrawAxes(theValue);
}

bool Macad::Occt::AIS_ViewCube::ToDrawEdges()
{
	return ((::AIS_ViewCube*)_NativeInstance)->ToDrawEdges();
}

void Macad::Occt::AIS_ViewCube::SetDrawEdges(bool theValue)
{
	((::AIS_ViewCube*)_NativeInstance)->SetDrawEdges(theValue);
}

bool Macad::Occt::AIS_ViewCube::ToDrawVertices()
{
	return ((::AIS_ViewCube*)_NativeInstance)->ToDrawVertices();
}

void Macad::Occt::AIS_ViewCube::SetDrawVertices(bool theValue)
{
	((::AIS_ViewCube*)_NativeInstance)->SetDrawVertices(theValue);
}

bool Macad::Occt::AIS_ViewCube::IsYup()
{
	return ((::AIS_ViewCube*)_NativeInstance)->IsYup();
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
	Handle(::Prs3d_ShadingAspect) _result;
	_result = ((::AIS_ViewCube*)_NativeInstance)->BoxSideStyle();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_ShadingAspect::CreateDowncasted( _result.get());
}

Macad::Occt::Prs3d_ShadingAspect^ Macad::Occt::AIS_ViewCube::BoxEdgeStyle()
{
	Handle(::Prs3d_ShadingAspect) _result;
	_result = ((::AIS_ViewCube*)_NativeInstance)->BoxEdgeStyle();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_ShadingAspect::CreateDowncasted( _result.get());
}

Macad::Occt::Prs3d_ShadingAspect^ Macad::Occt::AIS_ViewCube::BoxCornerStyle()
{
	Handle(::Prs3d_ShadingAspect) _result;
	_result = ((::AIS_ViewCube*)_NativeInstance)->BoxCornerStyle();
	 return _result.IsNull() ? nullptr : Macad::Occt::Prs3d_ShadingAspect::CreateDowncasted( _result.get());
}

Macad::Occt::Quantity_Color^ Macad::Occt::AIS_ViewCube::BoxColor()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::AIS_ViewCube*)_NativeInstance)->BoxColor();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::AIS_ViewCube::SetBoxColor(Macad::Occt::Quantity_Color^ theColor)
{
	((::AIS_ViewCube*)_NativeInstance)->SetBoxColor(*(::Quantity_Color*)theColor->NativeInstance);
}

double Macad::Occt::AIS_ViewCube::BoxTransparency()
{
	return ((::AIS_ViewCube*)_NativeInstance)->BoxTransparency();
}

void Macad::Occt::AIS_ViewCube::SetBoxTransparency(double theValue)
{
	((::AIS_ViewCube*)_NativeInstance)->SetBoxTransparency(theValue);
}

Macad::Occt::Quantity_Color^ Macad::Occt::AIS_ViewCube::InnerColor()
{
	::Quantity_Color* _result = new ::Quantity_Color();
	*_result =  (::Quantity_Color)((::AIS_ViewCube*)_NativeInstance)->InnerColor();
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
	*_result =  (::Quantity_Color)((::AIS_ViewCube*)_NativeInstance)->TextColor();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::AIS_ViewCube::SetTextColor(Macad::Occt::Quantity_Color^ theColor)
{
	((::AIS_ViewCube*)_NativeInstance)->SetTextColor(*(::Quantity_Color*)theColor->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::AIS_ViewCube::Font()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::AIS_ViewCube*)_NativeInstance)->Font();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::AIS_ViewCube::SetFont(Macad::Occt::TCollection_AsciiString^ theFont)
{
	((::AIS_ViewCube*)_NativeInstance)->SetFont(*(::TCollection_AsciiString*)theFont->NativeInstance);
}

double Macad::Occt::AIS_ViewCube::FontHeight()
{
	return ((::AIS_ViewCube*)_NativeInstance)->FontHeight();
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
	return ((::AIS_ViewCube*)_NativeInstance)->Duration();
}

void Macad::Occt::AIS_ViewCube::SetDuration(double theValue)
{
	((::AIS_ViewCube*)_NativeInstance)->SetDuration(theValue);
}

bool Macad::Occt::AIS_ViewCube::ToResetCameraUp()
{
	return ((::AIS_ViewCube*)_NativeInstance)->ToResetCameraUp();
}

void Macad::Occt::AIS_ViewCube::SetResetCamera(bool theToReset)
{
	((::AIS_ViewCube*)_NativeInstance)->SetResetCamera(theToReset);
}

bool Macad::Occt::AIS_ViewCube::ToFitSelected()
{
	return ((::AIS_ViewCube*)_NativeInstance)->ToFitSelected();
}

void Macad::Occt::AIS_ViewCube::SetFitSelected(bool theToFitSelected)
{
	((::AIS_ViewCube*)_NativeInstance)->SetFitSelected(theToFitSelected);
}

bool Macad::Occt::AIS_ViewCube::HasAnimation()
{
	return ((::AIS_ViewCube*)_NativeInstance)->HasAnimation();
}

void Macad::Occt::AIS_ViewCube::StartAnimation(Macad::Occt::AIS_ViewCubeOwner^ theOwner)
{
	Handle(::AIS_ViewCubeOwner) h_theOwner = theOwner->NativeInstance;
	((::AIS_ViewCube*)_NativeInstance)->StartAnimation(h_theOwner);
	theOwner->NativeInstance = h_theOwner.get();
}

bool Macad::Occt::AIS_ViewCube::UpdateAnimation(bool theToUpdate)
{
	return ((::AIS_ViewCube*)_NativeInstance)->UpdateAnimation(theToUpdate);
}

void Macad::Occt::AIS_ViewCube::HandleClick(Macad::Occt::AIS_ViewCubeOwner^ theOwner)
{
	Handle(::AIS_ViewCubeOwner) h_theOwner = theOwner->NativeInstance;
	((::AIS_ViewCube*)_NativeInstance)->HandleClick(h_theOwner);
	theOwner->NativeInstance = h_theOwner.get();
}

bool Macad::Occt::AIS_ViewCube::AcceptDisplayMode(int theMode)
{
	return ((::AIS_ViewCube*)_NativeInstance)->AcceptDisplayMode(theMode);
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::AIS_ViewCube::GlobalSelOwner()
{
	Handle(::SelectMgr_EntityOwner) _result;
	_result = ((::AIS_ViewCube*)_NativeInstance)->GlobalSelOwner();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted( _result.get());
}

void Macad::Occt::AIS_ViewCube::ComputeSelection(Macad::Occt::SelectMgr_Selection^ theSelection, int theMode)
{
	Handle(::SelectMgr_Selection) h_theSelection = theSelection->NativeInstance;
	((::AIS_ViewCube*)_NativeInstance)->ComputeSelection(h_theSelection, theMode);
	theSelection->NativeInstance = h_theSelection.get();
}

bool Macad::Occt::AIS_ViewCube::IsAutoHilight()
{
	return ((::AIS_ViewCube*)_NativeInstance)->IsAutoHilight();
}

void Macad::Occt::AIS_ViewCube::ClearSelected()
{
	((::AIS_ViewCube*)_NativeInstance)->ClearSelected();
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
	return gcnew Macad::Occt::AIS_ViewCube( instance );
}


