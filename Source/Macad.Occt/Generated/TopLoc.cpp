// Generated wrapper code for package TopLoc

#include "OcctPCH.h"
#include "TopLoc.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TopLoc.h"
#include "Standard.h"
#include "NCollection.h"
#include "gp.h"


//---------------------------------------------------------------------
//  Class  TopLoc_MapLocationHasher
//---------------------------------------------------------------------

Macad::Occt::TopLoc_MapLocationHasher::TopLoc_MapLocationHasher()
	: BaseClass<::TopLoc_MapLocationHasher>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopLoc_MapLocationHasher();
}

Macad::Occt::TopLoc_MapLocationHasher::TopLoc_MapLocationHasher(Macad::Occt::TopLoc_MapLocationHasher^ parameter1)
	: BaseClass<::TopLoc_MapLocationHasher>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopLoc_MapLocationHasher(*(::TopLoc_MapLocationHasher*)parameter1->NativeInstance);
}

int Macad::Occt::TopLoc_MapLocationHasher::HashCode(Macad::Occt::TopLoc_Location^ theKey, int theUpperBound)
{
	return ::TopLoc_MapLocationHasher::HashCode(*(::TopLoc_Location*)theKey->NativeInstance, theUpperBound);
}

bool Macad::Occt::TopLoc_MapLocationHasher::IsEqual(Macad::Occt::TopLoc_Location^ theKey1, Macad::Occt::TopLoc_Location^ theKey2)
{
	return ::TopLoc_MapLocationHasher::IsEqual(*(::TopLoc_Location*)theKey1->NativeInstance, *(::TopLoc_Location*)theKey2->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  TopLoc_IndexedMapOfLocation
//---------------------------------------------------------------------

Macad::Occt::TopLoc_IndexedMapOfLocation::TopLoc_IndexedMapOfLocation()
	: BaseClass<::TopLoc_IndexedMapOfLocation>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopLoc_IndexedMapOfLocation();
}

Macad::Occt::TopLoc_IndexedMapOfLocation::TopLoc_IndexedMapOfLocation(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TopLoc_IndexedMapOfLocation>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TopLoc_IndexedMapOfLocation(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TopLoc_IndexedMapOfLocation::TopLoc_IndexedMapOfLocation(int theNbBuckets)
	: BaseClass<::TopLoc_IndexedMapOfLocation>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopLoc_IndexedMapOfLocation(theNbBuckets, 0L);
}

Macad::Occt::TopLoc_IndexedMapOfLocation::TopLoc_IndexedMapOfLocation(Macad::Occt::TopLoc_IndexedMapOfLocation^ theOther)
	: BaseClass<::TopLoc_IndexedMapOfLocation>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopLoc_IndexedMapOfLocation(*(::TopLoc_IndexedMapOfLocation*)theOther->NativeInstance);
}

void Macad::Occt::TopLoc_IndexedMapOfLocation::Exchange(Macad::Occt::TopLoc_IndexedMapOfLocation^ theOther)
{
	((::TopLoc_IndexedMapOfLocation*)_NativeInstance)->Exchange(*(::TopLoc_IndexedMapOfLocation*)theOther->NativeInstance);
}

int Macad::Occt::TopLoc_IndexedMapOfLocation::Add(Macad::Occt::TopLoc_Location^ theKey1)
{
	return ((::TopLoc_IndexedMapOfLocation*)_NativeInstance)->Add(*(::TopLoc_Location*)theKey1->NativeInstance);
}

bool Macad::Occt::TopLoc_IndexedMapOfLocation::Contains(Macad::Occt::TopLoc_Location^ theKey1)
{
	return ((::TopLoc_IndexedMapOfLocation*)_NativeInstance)->Contains(*(::TopLoc_Location*)theKey1->NativeInstance);
}

void Macad::Occt::TopLoc_IndexedMapOfLocation::Substitute(int theIndex, Macad::Occt::TopLoc_Location^ theKey1)
{
	((::TopLoc_IndexedMapOfLocation*)_NativeInstance)->Substitute(theIndex, *(::TopLoc_Location*)theKey1->NativeInstance);
}

void Macad::Occt::TopLoc_IndexedMapOfLocation::Swap(int theIndex1, int theIndex2)
{
	((::TopLoc_IndexedMapOfLocation*)_NativeInstance)->Swap(theIndex1, theIndex2);
}

void Macad::Occt::TopLoc_IndexedMapOfLocation::RemoveLast()
{
	((::TopLoc_IndexedMapOfLocation*)_NativeInstance)->RemoveLast();
}

void Macad::Occt::TopLoc_IndexedMapOfLocation::RemoveFromIndex(int theIndex)
{
	((::TopLoc_IndexedMapOfLocation*)_NativeInstance)->RemoveFromIndex(theIndex);
}

bool Macad::Occt::TopLoc_IndexedMapOfLocation::RemoveKey(Macad::Occt::TopLoc_Location^ theKey1)
{
	return ((::TopLoc_IndexedMapOfLocation*)_NativeInstance)->RemoveKey(*(::TopLoc_Location*)theKey1->NativeInstance);
}

Macad::Occt::TopLoc_Location^ Macad::Occt::TopLoc_IndexedMapOfLocation::FindKey(int theIndex)
{
	::TopLoc_Location* _result = new ::TopLoc_Location();
	*_result =  (::TopLoc_Location)((::TopLoc_IndexedMapOfLocation*)_NativeInstance)->FindKey(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

int Macad::Occt::TopLoc_IndexedMapOfLocation::FindIndex(Macad::Occt::TopLoc_Location^ theKey1)
{
	return ((::TopLoc_IndexedMapOfLocation*)_NativeInstance)->FindIndex(*(::TopLoc_Location*)theKey1->NativeInstance);
}

void Macad::Occt::TopLoc_IndexedMapOfLocation::Clear(bool doReleaseMemory)
{
	((::TopLoc_IndexedMapOfLocation*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopLoc_IndexedMapOfLocation::Clear()
{
	((::TopLoc_IndexedMapOfLocation*)_NativeInstance)->Clear(true);
}

void Macad::Occt::TopLoc_IndexedMapOfLocation::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TopLoc_IndexedMapOfLocation*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::TopLoc_IndexedMapOfLocation::Size()
{
	return ((::TopLoc_IndexedMapOfLocation*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  TopLoc_MapOfLocation
//---------------------------------------------------------------------

Macad::Occt::TopLoc_MapOfLocation::TopLoc_MapOfLocation()
	: BaseClass<::TopLoc_MapOfLocation>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopLoc_MapOfLocation();
}

Macad::Occt::TopLoc_MapOfLocation::TopLoc_MapOfLocation(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TopLoc_MapOfLocation>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TopLoc_MapOfLocation(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TopLoc_MapOfLocation::TopLoc_MapOfLocation(int theNbBuckets)
	: BaseClass<::TopLoc_MapOfLocation>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopLoc_MapOfLocation(theNbBuckets, 0L);
}

Macad::Occt::TopLoc_MapOfLocation::TopLoc_MapOfLocation(Macad::Occt::TopLoc_MapOfLocation^ theOther)
	: BaseClass<::TopLoc_MapOfLocation>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopLoc_MapOfLocation(*(::TopLoc_MapOfLocation*)theOther->NativeInstance);
}

void Macad::Occt::TopLoc_MapOfLocation::Exchange(Macad::Occt::TopLoc_MapOfLocation^ theOther)
{
	((::TopLoc_MapOfLocation*)_NativeInstance)->Exchange(*(::TopLoc_MapOfLocation*)theOther->NativeInstance);
}

Macad::Occt::TopLoc_MapOfLocation^ Macad::Occt::TopLoc_MapOfLocation::Assign(Macad::Occt::TopLoc_MapOfLocation^ theOther)
{
	::TopLoc_MapOfLocation* _result = new ::TopLoc_MapOfLocation();
	*_result = ((::TopLoc_MapOfLocation*)_NativeInstance)->Assign(*(::TopLoc_MapOfLocation*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_MapOfLocation(_result);
}

Macad::Occt::TopLoc_Location^ Macad::Occt::TopLoc_MapOfLocation::Added(Macad::Occt::TopLoc_Location^ K)
{
	::TopLoc_Location* _result = new ::TopLoc_Location();
	*_result =  (::TopLoc_Location)((::TopLoc_MapOfLocation*)_NativeInstance)->Added(*(::TopLoc_Location*)K->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

bool Macad::Occt::TopLoc_MapOfLocation::Contains(Macad::Occt::TopLoc_Location^ K)
{
	return ((::TopLoc_MapOfLocation*)_NativeInstance)->Contains(*(::TopLoc_Location*)K->NativeInstance);
}

bool Macad::Occt::TopLoc_MapOfLocation::Remove(Macad::Occt::TopLoc_Location^ K)
{
	return ((::TopLoc_MapOfLocation*)_NativeInstance)->Remove(*(::TopLoc_Location*)K->NativeInstance);
}

void Macad::Occt::TopLoc_MapOfLocation::Clear(bool doReleaseMemory)
{
	((::TopLoc_MapOfLocation*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopLoc_MapOfLocation::Clear()
{
	((::TopLoc_MapOfLocation*)_NativeInstance)->Clear(true);
}

void Macad::Occt::TopLoc_MapOfLocation::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TopLoc_MapOfLocation*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::TopLoc_MapOfLocation::Size()
{
	return ((::TopLoc_MapOfLocation*)_NativeInstance)->Size();
}

bool Macad::Occt::TopLoc_MapOfLocation::IsEqual(Macad::Occt::TopLoc_MapOfLocation^ theOther)
{
	return ((::TopLoc_MapOfLocation*)_NativeInstance)->IsEqual(*(::TopLoc_MapOfLocation*)theOther->NativeInstance);
}

bool Macad::Occt::TopLoc_MapOfLocation::Contains(Macad::Occt::TopLoc_MapOfLocation^ theOther)
{
	return ((::TopLoc_MapOfLocation*)_NativeInstance)->Contains(*(::TopLoc_MapOfLocation*)theOther->NativeInstance);
}

void Macad::Occt::TopLoc_MapOfLocation::Union(Macad::Occt::TopLoc_MapOfLocation^ theLeft, Macad::Occt::TopLoc_MapOfLocation^ theRight)
{
	((::TopLoc_MapOfLocation*)_NativeInstance)->Union(*(::TopLoc_MapOfLocation*)theLeft->NativeInstance, *(::TopLoc_MapOfLocation*)theRight->NativeInstance);
}

bool Macad::Occt::TopLoc_MapOfLocation::Unite(Macad::Occt::TopLoc_MapOfLocation^ theOther)
{
	return ((::TopLoc_MapOfLocation*)_NativeInstance)->Unite(*(::TopLoc_MapOfLocation*)theOther->NativeInstance);
}

bool Macad::Occt::TopLoc_MapOfLocation::HasIntersection(Macad::Occt::TopLoc_MapOfLocation^ theMap)
{
	return ((::TopLoc_MapOfLocation*)_NativeInstance)->HasIntersection(*(::TopLoc_MapOfLocation*)theMap->NativeInstance);
}

void Macad::Occt::TopLoc_MapOfLocation::Intersection(Macad::Occt::TopLoc_MapOfLocation^ theLeft, Macad::Occt::TopLoc_MapOfLocation^ theRight)
{
	((::TopLoc_MapOfLocation*)_NativeInstance)->Intersection(*(::TopLoc_MapOfLocation*)theLeft->NativeInstance, *(::TopLoc_MapOfLocation*)theRight->NativeInstance);
}

bool Macad::Occt::TopLoc_MapOfLocation::Intersect(Macad::Occt::TopLoc_MapOfLocation^ theOther)
{
	return ((::TopLoc_MapOfLocation*)_NativeInstance)->Intersect(*(::TopLoc_MapOfLocation*)theOther->NativeInstance);
}

void Macad::Occt::TopLoc_MapOfLocation::Subtraction(Macad::Occt::TopLoc_MapOfLocation^ theLeft, Macad::Occt::TopLoc_MapOfLocation^ theRight)
{
	((::TopLoc_MapOfLocation*)_NativeInstance)->Subtraction(*(::TopLoc_MapOfLocation*)theLeft->NativeInstance, *(::TopLoc_MapOfLocation*)theRight->NativeInstance);
}

bool Macad::Occt::TopLoc_MapOfLocation::Subtract(Macad::Occt::TopLoc_MapOfLocation^ theOther)
{
	return ((::TopLoc_MapOfLocation*)_NativeInstance)->Subtract(*(::TopLoc_MapOfLocation*)theOther->NativeInstance);
}

void Macad::Occt::TopLoc_MapOfLocation::Difference(Macad::Occt::TopLoc_MapOfLocation^ theLeft, Macad::Occt::TopLoc_MapOfLocation^ theRight)
{
	((::TopLoc_MapOfLocation*)_NativeInstance)->Difference(*(::TopLoc_MapOfLocation*)theLeft->NativeInstance, *(::TopLoc_MapOfLocation*)theRight->NativeInstance);
}

bool Macad::Occt::TopLoc_MapOfLocation::Differ(Macad::Occt::TopLoc_MapOfLocation^ theOther)
{
	return ((::TopLoc_MapOfLocation*)_NativeInstance)->Differ(*(::TopLoc_MapOfLocation*)theOther->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  TopLoc_Datum3D
//---------------------------------------------------------------------

Macad::Occt::TopLoc_Datum3D::TopLoc_Datum3D()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TopLoc_Datum3D();
}

Macad::Occt::TopLoc_Datum3D::TopLoc_Datum3D(Macad::Occt::Trsf T)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Trsf> pp_T = &T;
	NativeInstance = new ::TopLoc_Datum3D(*(gp_Trsf*)pp_T);
}

Macad::Occt::TopLoc_Datum3D::TopLoc_Datum3D(Macad::Occt::TopLoc_Datum3D^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TopLoc_Datum3D(*(::TopLoc_Datum3D*)parameter1->NativeInstance);
}

Macad::Occt::Trsf Macad::Occt::TopLoc_Datum3D::Transformation()
{
	return Macad::Occt::Trsf(((::TopLoc_Datum3D*)_NativeInstance)->Transformation());
}

Macad::Occt::Trsf Macad::Occt::TopLoc_Datum3D::Trsf()
{
	return Macad::Occt::Trsf(((::TopLoc_Datum3D*)_NativeInstance)->Trsf());
}

Macad::Occt::TrsfForm Macad::Occt::TopLoc_Datum3D::Form()
{
	return (Macad::Occt::TrsfForm)((::TopLoc_Datum3D*)_NativeInstance)->Form();
}


Macad::Occt::TopLoc_Datum3D^ Macad::Occt::TopLoc_Datum3D::CreateDowncasted(::TopLoc_Datum3D* instance)
{
	return gcnew Macad::Occt::TopLoc_Datum3D( instance );
}



//---------------------------------------------------------------------
//  Class  TopLoc_SListNodeOfItemLocation
//---------------------------------------------------------------------

Macad::Occt::TopLoc_SListNodeOfItemLocation::TopLoc_SListNodeOfItemLocation(Macad::Occt::TopLoc_ItemLocation^ I, Macad::Occt::TopLoc_SListOfItemLocation^ aTail)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TopLoc_SListNodeOfItemLocation(*(::TopLoc_ItemLocation*)I->NativeInstance, *(::TopLoc_SListOfItemLocation*)aTail->NativeInstance);
}

Macad::Occt::TopLoc_SListNodeOfItemLocation::TopLoc_SListNodeOfItemLocation(Macad::Occt::TopLoc_SListNodeOfItemLocation^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TopLoc_SListNodeOfItemLocation(*(::TopLoc_SListNodeOfItemLocation*)parameter1->NativeInstance);
}

Macad::Occt::TopLoc_SListOfItemLocation^ Macad::Occt::TopLoc_SListNodeOfItemLocation::Tail()
{
	::TopLoc_SListOfItemLocation* _result = new ::TopLoc_SListOfItemLocation();
	*_result = ((::TopLoc_SListNodeOfItemLocation*)_NativeInstance)->Tail();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_SListOfItemLocation(_result);
}

Macad::Occt::TopLoc_ItemLocation^ Macad::Occt::TopLoc_SListNodeOfItemLocation::Value()
{
	throw gcnew System::NotImplementedException();
}


Macad::Occt::TopLoc_SListNodeOfItemLocation^ Macad::Occt::TopLoc_SListNodeOfItemLocation::CreateDowncasted(::TopLoc_SListNodeOfItemLocation* instance)
{
	return gcnew Macad::Occt::TopLoc_SListNodeOfItemLocation( instance );
}



//---------------------------------------------------------------------
//  Class  TopLoc_ItemLocation
//---------------------------------------------------------------------

Macad::Occt::TopLoc_ItemLocation::TopLoc_ItemLocation(Macad::Occt::TopLoc_Datum3D^ D, int P)
	: BaseClass<::TopLoc_ItemLocation>(BaseClass::InitMode::Uninitialized)
{
	Handle(::TopLoc_Datum3D) h_D = D->NativeInstance;
	_NativeInstance = new ::TopLoc_ItemLocation(h_D, P);
	D->NativeInstance = h_D.get();
}

Macad::Occt::TopLoc_ItemLocation::TopLoc_ItemLocation(Macad::Occt::TopLoc_ItemLocation^ parameter1)
	: BaseClass<::TopLoc_ItemLocation>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopLoc_ItemLocation(*(::TopLoc_ItemLocation*)parameter1->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  TopLoc_SListOfItemLocation
//---------------------------------------------------------------------

Macad::Occt::TopLoc_SListOfItemLocation::TopLoc_SListOfItemLocation()
	: BaseClass<::TopLoc_SListOfItemLocation>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopLoc_SListOfItemLocation();
}

Macad::Occt::TopLoc_SListOfItemLocation::TopLoc_SListOfItemLocation(Macad::Occt::TopLoc_ItemLocation^ anItem, Macad::Occt::TopLoc_SListOfItemLocation^ aTail)
	: BaseClass<::TopLoc_SListOfItemLocation>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopLoc_SListOfItemLocation(*(::TopLoc_ItemLocation*)anItem->NativeInstance, *(::TopLoc_SListOfItemLocation*)aTail->NativeInstance);
}

Macad::Occt::TopLoc_SListOfItemLocation::TopLoc_SListOfItemLocation(Macad::Occt::TopLoc_SListOfItemLocation^ Other)
	: BaseClass<::TopLoc_SListOfItemLocation>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopLoc_SListOfItemLocation(*(::TopLoc_SListOfItemLocation*)Other->NativeInstance);
}

Macad::Occt::TopLoc_SListOfItemLocation^ Macad::Occt::TopLoc_SListOfItemLocation::Assign(Macad::Occt::TopLoc_SListOfItemLocation^ Other)
{
	::TopLoc_SListOfItemLocation* _result = new ::TopLoc_SListOfItemLocation();
	*_result = ((::TopLoc_SListOfItemLocation*)_NativeInstance)->Assign(*(::TopLoc_SListOfItemLocation*)Other->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_SListOfItemLocation(_result);
}

bool Macad::Occt::TopLoc_SListOfItemLocation::IsEmpty()
{
	return ((::TopLoc_SListOfItemLocation*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TopLoc_SListOfItemLocation::Clear()
{
	((::TopLoc_SListOfItemLocation*)_NativeInstance)->Clear();
}

Macad::Occt::TopLoc_ItemLocation^ Macad::Occt::TopLoc_SListOfItemLocation::Value()
{
	throw gcnew System::NotImplementedException();
}

Macad::Occt::TopLoc_SListOfItemLocation^ Macad::Occt::TopLoc_SListOfItemLocation::Tail()
{
	::TopLoc_SListOfItemLocation* _result = new ::TopLoc_SListOfItemLocation();
	*_result =  (::TopLoc_SListOfItemLocation)((::TopLoc_SListOfItemLocation*)_NativeInstance)->Tail();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_SListOfItemLocation(_result);
}

void Macad::Occt::TopLoc_SListOfItemLocation::Construct(Macad::Occt::TopLoc_ItemLocation^ anItem)
{
	((::TopLoc_SListOfItemLocation*)_NativeInstance)->Construct(*(::TopLoc_ItemLocation*)anItem->NativeInstance);
}

void Macad::Occt::TopLoc_SListOfItemLocation::ToTail()
{
	((::TopLoc_SListOfItemLocation*)_NativeInstance)->ToTail();
}

bool Macad::Occt::TopLoc_SListOfItemLocation::More()
{
	return ((::TopLoc_SListOfItemLocation*)_NativeInstance)->More();
}

void Macad::Occt::TopLoc_SListOfItemLocation::Next()
{
	((::TopLoc_SListOfItemLocation*)_NativeInstance)->Next();
}




//---------------------------------------------------------------------
//  Class  TopLoc_Location
//---------------------------------------------------------------------

Macad::Occt::TopLoc_Location::TopLoc_Location()
	: BaseClass<::TopLoc_Location>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopLoc_Location();
}

Macad::Occt::TopLoc_Location::TopLoc_Location(Macad::Occt::Trsf T)
	: BaseClass<::TopLoc_Location>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Trsf> pp_T = &T;
	_NativeInstance = new ::TopLoc_Location(*(gp_Trsf*)pp_T);
}

Macad::Occt::TopLoc_Location::TopLoc_Location(Macad::Occt::TopLoc_Datum3D^ D)
	: BaseClass<::TopLoc_Location>(BaseClass::InitMode::Uninitialized)
{
	Handle(::TopLoc_Datum3D) h_D = D->NativeInstance;
	_NativeInstance = new ::TopLoc_Location(h_D);
	D->NativeInstance = h_D.get();
}

Macad::Occt::TopLoc_Location::TopLoc_Location(Macad::Occt::TopLoc_Location^ parameter1)
	: BaseClass<::TopLoc_Location>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopLoc_Location(*(::TopLoc_Location*)parameter1->NativeInstance);
}

bool Macad::Occt::TopLoc_Location::IsIdentity()
{
	return ((::TopLoc_Location*)_NativeInstance)->IsIdentity();
}

void Macad::Occt::TopLoc_Location::Identity()
{
	((::TopLoc_Location*)_NativeInstance)->Identity();
}

Macad::Occt::TopLoc_Datum3D^ Macad::Occt::TopLoc_Location::FirstDatum()
{
	Handle(::TopLoc_Datum3D) _result;
	_result = ((::TopLoc_Location*)_NativeInstance)->FirstDatum();
	 return _result.IsNull() ? nullptr : Macad::Occt::TopLoc_Datum3D::CreateDowncasted( _result.get());
}

int Macad::Occt::TopLoc_Location::FirstPower()
{
	return ((::TopLoc_Location*)_NativeInstance)->FirstPower();
}

Macad::Occt::TopLoc_Location^ Macad::Occt::TopLoc_Location::NextLocation()
{
	::TopLoc_Location* _result = new ::TopLoc_Location();
	*_result =  (::TopLoc_Location)((::TopLoc_Location*)_NativeInstance)->NextLocation();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

Macad::Occt::Trsf Macad::Occt::TopLoc_Location::Transformation()
{
	return Macad::Occt::Trsf(((::TopLoc_Location*)_NativeInstance)->Transformation());
}

Macad::Occt::TopLoc_Location^ Macad::Occt::TopLoc_Location::Inverted()
{
	::TopLoc_Location* _result = new ::TopLoc_Location();
	*_result = ((::TopLoc_Location*)_NativeInstance)->Inverted();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

Macad::Occt::TopLoc_Location^ Macad::Occt::TopLoc_Location::Multiplied(Macad::Occt::TopLoc_Location^ Other)
{
	::TopLoc_Location* _result = new ::TopLoc_Location();
	*_result = ((::TopLoc_Location*)_NativeInstance)->Multiplied(*(::TopLoc_Location*)Other->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

Macad::Occt::TopLoc_Location^ Macad::Occt::TopLoc_Location::Divided(Macad::Occt::TopLoc_Location^ Other)
{
	::TopLoc_Location* _result = new ::TopLoc_Location();
	*_result = ((::TopLoc_Location*)_NativeInstance)->Divided(*(::TopLoc_Location*)Other->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

Macad::Occt::TopLoc_Location^ Macad::Occt::TopLoc_Location::Predivided(Macad::Occt::TopLoc_Location^ Other)
{
	::TopLoc_Location* _result = new ::TopLoc_Location();
	*_result = ((::TopLoc_Location*)_NativeInstance)->Predivided(*(::TopLoc_Location*)Other->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

Macad::Occt::TopLoc_Location^ Macad::Occt::TopLoc_Location::Powered(int pwr)
{
	::TopLoc_Location* _result = new ::TopLoc_Location();
	*_result = ((::TopLoc_Location*)_NativeInstance)->Powered(pwr);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

int Macad::Occt::TopLoc_Location::HashCode(int theUpperBound)
{
	return ((::TopLoc_Location*)_NativeInstance)->HashCode(theUpperBound);
}

bool Macad::Occt::TopLoc_Location::IsEqual(Macad::Occt::TopLoc_Location^ Other)
{
	return ((::TopLoc_Location*)_NativeInstance)->IsEqual(*(::TopLoc_Location*)Other->NativeInstance);
}

bool Macad::Occt::TopLoc_Location::IsDifferent(Macad::Occt::TopLoc_Location^ Other)
{
	return ((::TopLoc_Location*)_NativeInstance)->IsDifferent(*(::TopLoc_Location*)Other->NativeInstance);
}



