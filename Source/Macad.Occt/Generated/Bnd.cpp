// Generated wrapper code for package Bnd

#include "OcctPCH.h"
#include "Bnd.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Standard.h"
#include "Bnd.h"
#include "NCollection.h"
#include "gp.h"
#include "TColStd.h"
#include "TColgp.h"


//---------------------------------------------------------------------
//  Class  Bnd_Array1OfBox
//---------------------------------------------------------------------

Macad::Occt::Bnd_Array1OfBox::Bnd_Array1OfBox()
	: BaseClass<::Bnd_Array1OfBox>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Array1OfBox();
}

Macad::Occt::Bnd_Array1OfBox::Bnd_Array1OfBox(int theLower, int theUpper)
	: BaseClass<::Bnd_Array1OfBox>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Array1OfBox(theLower, theUpper);
}

Macad::Occt::Bnd_Array1OfBox::Bnd_Array1OfBox(Macad::Occt::Bnd_Array1OfBox^ theOther)
	: BaseClass<::Bnd_Array1OfBox>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Array1OfBox(*(::Bnd_Array1OfBox*)theOther->NativeInstance);
}

Macad::Occt::Bnd_Array1OfBox::Bnd_Array1OfBox(Macad::Occt::Bnd_Box^ theBegin, int theLower, int theUpper)
	: BaseClass<::Bnd_Array1OfBox>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Array1OfBox(*(::Bnd_Box*)theBegin->NativeInstance, theLower, theUpper);
}

void Macad::Occt::Bnd_Array1OfBox::Init(Macad::Occt::Bnd_Box^ theValue)
{
	((::Bnd_Array1OfBox*)_NativeInstance)->Init(*(::Bnd_Box*)theValue->NativeInstance);
}

int Macad::Occt::Bnd_Array1OfBox::Size()
{
	return ((::Bnd_Array1OfBox*)_NativeInstance)->Size();
}

int Macad::Occt::Bnd_Array1OfBox::Length()
{
	return ((::Bnd_Array1OfBox*)_NativeInstance)->Length();
}

bool Macad::Occt::Bnd_Array1OfBox::IsEmpty()
{
	return ((::Bnd_Array1OfBox*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::Bnd_Array1OfBox::Lower()
{
	return ((::Bnd_Array1OfBox*)_NativeInstance)->Lower();
}

int Macad::Occt::Bnd_Array1OfBox::Upper()
{
	return ((::Bnd_Array1OfBox*)_NativeInstance)->Upper();
}

bool Macad::Occt::Bnd_Array1OfBox::IsDeletable()
{
	return ((::Bnd_Array1OfBox*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::Bnd_Array1OfBox::IsAllocated()
{
	return ((::Bnd_Array1OfBox*)_NativeInstance)->IsAllocated();
}

Macad::Occt::Bnd_Array1OfBox^ Macad::Occt::Bnd_Array1OfBox::Assign(Macad::Occt::Bnd_Array1OfBox^ theOther)
{
	::Bnd_Array1OfBox* _result = new ::Bnd_Array1OfBox();
	*_result = ((::Bnd_Array1OfBox*)_NativeInstance)->Assign(*(::Bnd_Array1OfBox*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Array1OfBox(_result);
}

Macad::Occt::Bnd_Array1OfBox^ Macad::Occt::Bnd_Array1OfBox::Move(Macad::Occt::Bnd_Array1OfBox^ theOther)
{
	::Bnd_Array1OfBox* _result = new ::Bnd_Array1OfBox();
	*_result = ((::Bnd_Array1OfBox*)_NativeInstance)->Move(*(::Bnd_Array1OfBox*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Array1OfBox(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_Array1OfBox::First()
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result =  (::Bnd_Box)((::Bnd_Array1OfBox*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_Array1OfBox::ChangeFirst()
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result = ((::Bnd_Array1OfBox*)_NativeInstance)->ChangeFirst();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_Array1OfBox::Last()
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result =  (::Bnd_Box)((::Bnd_Array1OfBox*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_Array1OfBox::ChangeLast()
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result = ((::Bnd_Array1OfBox*)_NativeInstance)->ChangeLast();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_Array1OfBox::Value(int theIndex)
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result =  (::Bnd_Box)((::Bnd_Array1OfBox*)_NativeInstance)->Value(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_Array1OfBox::ChangeValue(int theIndex)
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result = ((::Bnd_Array1OfBox*)_NativeInstance)->ChangeValue(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

void Macad::Occt::Bnd_Array1OfBox::SetValue(int theIndex, Macad::Occt::Bnd_Box^ theItem)
{
	((::Bnd_Array1OfBox*)_NativeInstance)->SetValue(theIndex, *(::Bnd_Box*)theItem->NativeInstance);
}

void Macad::Occt::Bnd_Array1OfBox::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::Bnd_Array1OfBox*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  Bnd_Array1OfBox2d
//---------------------------------------------------------------------

Macad::Occt::Bnd_Array1OfBox2d::Bnd_Array1OfBox2d()
	: BaseClass<::Bnd_Array1OfBox2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Array1OfBox2d();
}

Macad::Occt::Bnd_Array1OfBox2d::Bnd_Array1OfBox2d(int theLower, int theUpper)
	: BaseClass<::Bnd_Array1OfBox2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Array1OfBox2d(theLower, theUpper);
}

Macad::Occt::Bnd_Array1OfBox2d::Bnd_Array1OfBox2d(Macad::Occt::Bnd_Array1OfBox2d^ theOther)
	: BaseClass<::Bnd_Array1OfBox2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Array1OfBox2d(*(::Bnd_Array1OfBox2d*)theOther->NativeInstance);
}

Macad::Occt::Bnd_Array1OfBox2d::Bnd_Array1OfBox2d(Macad::Occt::Bnd_Box2d^ theBegin, int theLower, int theUpper)
	: BaseClass<::Bnd_Array1OfBox2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Array1OfBox2d(*(::Bnd_Box2d*)theBegin->NativeInstance, theLower, theUpper);
}

void Macad::Occt::Bnd_Array1OfBox2d::Init(Macad::Occt::Bnd_Box2d^ theValue)
{
	((::Bnd_Array1OfBox2d*)_NativeInstance)->Init(*(::Bnd_Box2d*)theValue->NativeInstance);
}

int Macad::Occt::Bnd_Array1OfBox2d::Size()
{
	return ((::Bnd_Array1OfBox2d*)_NativeInstance)->Size();
}

int Macad::Occt::Bnd_Array1OfBox2d::Length()
{
	return ((::Bnd_Array1OfBox2d*)_NativeInstance)->Length();
}

bool Macad::Occt::Bnd_Array1OfBox2d::IsEmpty()
{
	return ((::Bnd_Array1OfBox2d*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::Bnd_Array1OfBox2d::Lower()
{
	return ((::Bnd_Array1OfBox2d*)_NativeInstance)->Lower();
}

int Macad::Occt::Bnd_Array1OfBox2d::Upper()
{
	return ((::Bnd_Array1OfBox2d*)_NativeInstance)->Upper();
}

bool Macad::Occt::Bnd_Array1OfBox2d::IsDeletable()
{
	return ((::Bnd_Array1OfBox2d*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::Bnd_Array1OfBox2d::IsAllocated()
{
	return ((::Bnd_Array1OfBox2d*)_NativeInstance)->IsAllocated();
}

Macad::Occt::Bnd_Array1OfBox2d^ Macad::Occt::Bnd_Array1OfBox2d::Assign(Macad::Occt::Bnd_Array1OfBox2d^ theOther)
{
	::Bnd_Array1OfBox2d* _result = new ::Bnd_Array1OfBox2d();
	*_result = ((::Bnd_Array1OfBox2d*)_NativeInstance)->Assign(*(::Bnd_Array1OfBox2d*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Array1OfBox2d(_result);
}

Macad::Occt::Bnd_Array1OfBox2d^ Macad::Occt::Bnd_Array1OfBox2d::Move(Macad::Occt::Bnd_Array1OfBox2d^ theOther)
{
	::Bnd_Array1OfBox2d* _result = new ::Bnd_Array1OfBox2d();
	*_result = ((::Bnd_Array1OfBox2d*)_NativeInstance)->Move(*(::Bnd_Array1OfBox2d*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Array1OfBox2d(_result);
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::Bnd_Array1OfBox2d::First()
{
	::Bnd_Box2d* _result = new ::Bnd_Box2d();
	*_result =  (::Bnd_Box2d)((::Bnd_Array1OfBox2d*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::Bnd_Array1OfBox2d::ChangeFirst()
{
	::Bnd_Box2d* _result = new ::Bnd_Box2d();
	*_result = ((::Bnd_Array1OfBox2d*)_NativeInstance)->ChangeFirst();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::Bnd_Array1OfBox2d::Last()
{
	::Bnd_Box2d* _result = new ::Bnd_Box2d();
	*_result =  (::Bnd_Box2d)((::Bnd_Array1OfBox2d*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::Bnd_Array1OfBox2d::ChangeLast()
{
	::Bnd_Box2d* _result = new ::Bnd_Box2d();
	*_result = ((::Bnd_Array1OfBox2d*)_NativeInstance)->ChangeLast();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::Bnd_Array1OfBox2d::Value(int theIndex)
{
	::Bnd_Box2d* _result = new ::Bnd_Box2d();
	*_result =  (::Bnd_Box2d)((::Bnd_Array1OfBox2d*)_NativeInstance)->Value(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::Bnd_Array1OfBox2d::ChangeValue(int theIndex)
{
	::Bnd_Box2d* _result = new ::Bnd_Box2d();
	*_result = ((::Bnd_Array1OfBox2d*)_NativeInstance)->ChangeValue(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

void Macad::Occt::Bnd_Array1OfBox2d::SetValue(int theIndex, Macad::Occt::Bnd_Box2d^ theItem)
{
	((::Bnd_Array1OfBox2d*)_NativeInstance)->SetValue(theIndex, *(::Bnd_Box2d*)theItem->NativeInstance);
}

void Macad::Occt::Bnd_Array1OfBox2d::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::Bnd_Array1OfBox2d*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  Bnd_Array1OfSphere
//---------------------------------------------------------------------

Macad::Occt::Bnd_Array1OfSphere::Bnd_Array1OfSphere()
	: BaseClass<::Bnd_Array1OfSphere>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Array1OfSphere();
}

Macad::Occt::Bnd_Array1OfSphere::Bnd_Array1OfSphere(int theLower, int theUpper)
	: BaseClass<::Bnd_Array1OfSphere>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Array1OfSphere(theLower, theUpper);
}

Macad::Occt::Bnd_Array1OfSphere::Bnd_Array1OfSphere(Macad::Occt::Bnd_Array1OfSphere^ theOther)
	: BaseClass<::Bnd_Array1OfSphere>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Array1OfSphere(*(::Bnd_Array1OfSphere*)theOther->NativeInstance);
}

Macad::Occt::Bnd_Array1OfSphere::Bnd_Array1OfSphere(Macad::Occt::Bnd_Sphere^ theBegin, int theLower, int theUpper)
	: BaseClass<::Bnd_Array1OfSphere>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Array1OfSphere(*(::Bnd_Sphere*)theBegin->NativeInstance, theLower, theUpper);
}

void Macad::Occt::Bnd_Array1OfSphere::Init(Macad::Occt::Bnd_Sphere^ theValue)
{
	((::Bnd_Array1OfSphere*)_NativeInstance)->Init(*(::Bnd_Sphere*)theValue->NativeInstance);
}

int Macad::Occt::Bnd_Array1OfSphere::Size()
{
	return ((::Bnd_Array1OfSphere*)_NativeInstance)->Size();
}

int Macad::Occt::Bnd_Array1OfSphere::Length()
{
	return ((::Bnd_Array1OfSphere*)_NativeInstance)->Length();
}

bool Macad::Occt::Bnd_Array1OfSphere::IsEmpty()
{
	return ((::Bnd_Array1OfSphere*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::Bnd_Array1OfSphere::Lower()
{
	return ((::Bnd_Array1OfSphere*)_NativeInstance)->Lower();
}

int Macad::Occt::Bnd_Array1OfSphere::Upper()
{
	return ((::Bnd_Array1OfSphere*)_NativeInstance)->Upper();
}

bool Macad::Occt::Bnd_Array1OfSphere::IsDeletable()
{
	return ((::Bnd_Array1OfSphere*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::Bnd_Array1OfSphere::IsAllocated()
{
	return ((::Bnd_Array1OfSphere*)_NativeInstance)->IsAllocated();
}

Macad::Occt::Bnd_Array1OfSphere^ Macad::Occt::Bnd_Array1OfSphere::Assign(Macad::Occt::Bnd_Array1OfSphere^ theOther)
{
	::Bnd_Array1OfSphere* _result = new ::Bnd_Array1OfSphere();
	*_result = ((::Bnd_Array1OfSphere*)_NativeInstance)->Assign(*(::Bnd_Array1OfSphere*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Array1OfSphere(_result);
}

Macad::Occt::Bnd_Array1OfSphere^ Macad::Occt::Bnd_Array1OfSphere::Move(Macad::Occt::Bnd_Array1OfSphere^ theOther)
{
	::Bnd_Array1OfSphere* _result = new ::Bnd_Array1OfSphere();
	*_result = ((::Bnd_Array1OfSphere*)_NativeInstance)->Move(*(::Bnd_Array1OfSphere*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Array1OfSphere(_result);
}

Macad::Occt::Bnd_Sphere^ Macad::Occt::Bnd_Array1OfSphere::First()
{
	::Bnd_Sphere* _result = new ::Bnd_Sphere();
	*_result =  (::Bnd_Sphere)((::Bnd_Array1OfSphere*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Sphere(_result);
}

Macad::Occt::Bnd_Sphere^ Macad::Occt::Bnd_Array1OfSphere::ChangeFirst()
{
	::Bnd_Sphere* _result = new ::Bnd_Sphere();
	*_result = ((::Bnd_Array1OfSphere*)_NativeInstance)->ChangeFirst();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Sphere(_result);
}

Macad::Occt::Bnd_Sphere^ Macad::Occt::Bnd_Array1OfSphere::Last()
{
	::Bnd_Sphere* _result = new ::Bnd_Sphere();
	*_result =  (::Bnd_Sphere)((::Bnd_Array1OfSphere*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Sphere(_result);
}

Macad::Occt::Bnd_Sphere^ Macad::Occt::Bnd_Array1OfSphere::ChangeLast()
{
	::Bnd_Sphere* _result = new ::Bnd_Sphere();
	*_result = ((::Bnd_Array1OfSphere*)_NativeInstance)->ChangeLast();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Sphere(_result);
}

Macad::Occt::Bnd_Sphere^ Macad::Occt::Bnd_Array1OfSphere::Value(int theIndex)
{
	::Bnd_Sphere* _result = new ::Bnd_Sphere();
	*_result =  (::Bnd_Sphere)((::Bnd_Array1OfSphere*)_NativeInstance)->Value(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Sphere(_result);
}

Macad::Occt::Bnd_Sphere^ Macad::Occt::Bnd_Array1OfSphere::ChangeValue(int theIndex)
{
	::Bnd_Sphere* _result = new ::Bnd_Sphere();
	*_result = ((::Bnd_Array1OfSphere*)_NativeInstance)->ChangeValue(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Sphere(_result);
}

void Macad::Occt::Bnd_Array1OfSphere::SetValue(int theIndex, Macad::Occt::Bnd_Sphere^ theItem)
{
	((::Bnd_Array1OfSphere*)_NativeInstance)->SetValue(theIndex, *(::Bnd_Sphere*)theItem->NativeInstance);
}

void Macad::Occt::Bnd_Array1OfSphere::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::Bnd_Array1OfSphere*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  Bnd_SeqOfBox
//---------------------------------------------------------------------

Macad::Occt::Bnd_SeqOfBox::Bnd_SeqOfBox()
	: BaseClass<::Bnd_SeqOfBox>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_SeqOfBox();
}

Macad::Occt::Bnd_SeqOfBox::Bnd_SeqOfBox(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::Bnd_SeqOfBox>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::Bnd_SeqOfBox(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::Bnd_SeqOfBox::Bnd_SeqOfBox(Macad::Occt::Bnd_SeqOfBox^ theOther)
	: BaseClass<::Bnd_SeqOfBox>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_SeqOfBox(*(::Bnd_SeqOfBox*)theOther->NativeInstance);
}

int Macad::Occt::Bnd_SeqOfBox::Size()
{
	return ((::Bnd_SeqOfBox*)_NativeInstance)->Size();
}

int Macad::Occt::Bnd_SeqOfBox::Length()
{
	return ((::Bnd_SeqOfBox*)_NativeInstance)->Length();
}

int Macad::Occt::Bnd_SeqOfBox::Lower()
{
	return ((::Bnd_SeqOfBox*)_NativeInstance)->Lower();
}

int Macad::Occt::Bnd_SeqOfBox::Upper()
{
	return ((::Bnd_SeqOfBox*)_NativeInstance)->Upper();
}

bool Macad::Occt::Bnd_SeqOfBox::IsEmpty()
{
	return ((::Bnd_SeqOfBox*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::Bnd_SeqOfBox::Reverse()
{
	((::Bnd_SeqOfBox*)_NativeInstance)->Reverse();
}

void Macad::Occt::Bnd_SeqOfBox::Exchange(int I, int J)
{
	((::Bnd_SeqOfBox*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::Bnd_SeqOfBox::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::Bnd_SeqOfBox*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::Bnd_SeqOfBox::Clear()
{
	((::Bnd_SeqOfBox*)_NativeInstance)->Clear(0L);
}

Macad::Occt::Bnd_SeqOfBox^ Macad::Occt::Bnd_SeqOfBox::Assign(Macad::Occt::Bnd_SeqOfBox^ theOther)
{
	::Bnd_SeqOfBox* _result = new ::Bnd_SeqOfBox();
	*_result = ((::Bnd_SeqOfBox*)_NativeInstance)->Assign(*(::Bnd_SeqOfBox*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_SeqOfBox(_result);
}

void Macad::Occt::Bnd_SeqOfBox::Remove(int theIndex)
{
	((::Bnd_SeqOfBox*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::Bnd_SeqOfBox::Remove(int theFromIndex, int theToIndex)
{
	((::Bnd_SeqOfBox*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::Bnd_SeqOfBox::Append(Macad::Occt::Bnd_Box^ theItem)
{
	((::Bnd_SeqOfBox*)_NativeInstance)->Append(*(::Bnd_Box*)theItem->NativeInstance);
}

void Macad::Occt::Bnd_SeqOfBox::Append(Macad::Occt::Bnd_SeqOfBox^ theSeq)
{
	((::Bnd_SeqOfBox*)_NativeInstance)->Append(*(::Bnd_SeqOfBox*)theSeq->NativeInstance);
}

void Macad::Occt::Bnd_SeqOfBox::Prepend(Macad::Occt::Bnd_Box^ theItem)
{
	((::Bnd_SeqOfBox*)_NativeInstance)->Prepend(*(::Bnd_Box*)theItem->NativeInstance);
}

void Macad::Occt::Bnd_SeqOfBox::Prepend(Macad::Occt::Bnd_SeqOfBox^ theSeq)
{
	((::Bnd_SeqOfBox*)_NativeInstance)->Prepend(*(::Bnd_SeqOfBox*)theSeq->NativeInstance);
}

void Macad::Occt::Bnd_SeqOfBox::InsertBefore(int theIndex, Macad::Occt::Bnd_Box^ theItem)
{
	((::Bnd_SeqOfBox*)_NativeInstance)->InsertBefore(theIndex, *(::Bnd_Box*)theItem->NativeInstance);
}

void Macad::Occt::Bnd_SeqOfBox::InsertBefore(int theIndex, Macad::Occt::Bnd_SeqOfBox^ theSeq)
{
	((::Bnd_SeqOfBox*)_NativeInstance)->InsertBefore(theIndex, *(::Bnd_SeqOfBox*)theSeq->NativeInstance);
}

void Macad::Occt::Bnd_SeqOfBox::InsertAfter(int theIndex, Macad::Occt::Bnd_SeqOfBox^ theSeq)
{
	((::Bnd_SeqOfBox*)_NativeInstance)->InsertAfter(theIndex, *(::Bnd_SeqOfBox*)theSeq->NativeInstance);
}

void Macad::Occt::Bnd_SeqOfBox::InsertAfter(int theIndex, Macad::Occt::Bnd_Box^ theItem)
{
	((::Bnd_SeqOfBox*)_NativeInstance)->InsertAfter(theIndex, *(::Bnd_Box*)theItem->NativeInstance);
}

void Macad::Occt::Bnd_SeqOfBox::Split(int theIndex, Macad::Occt::Bnd_SeqOfBox^ theSeq)
{
	((::Bnd_SeqOfBox*)_NativeInstance)->Split(theIndex, *(::Bnd_SeqOfBox*)theSeq->NativeInstance);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_SeqOfBox::First()
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result =  (::Bnd_Box)((::Bnd_SeqOfBox*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_SeqOfBox::ChangeFirst()
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result = ((::Bnd_SeqOfBox*)_NativeInstance)->ChangeFirst();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_SeqOfBox::Last()
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result =  (::Bnd_Box)((::Bnd_SeqOfBox*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_SeqOfBox::ChangeLast()
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result = ((::Bnd_SeqOfBox*)_NativeInstance)->ChangeLast();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_SeqOfBox::Value(int theIndex)
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result =  (::Bnd_Box)((::Bnd_SeqOfBox*)_NativeInstance)->Value(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_SeqOfBox::ChangeValue(int theIndex)
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result = ((::Bnd_SeqOfBox*)_NativeInstance)->ChangeValue(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

void Macad::Occt::Bnd_SeqOfBox::SetValue(int theIndex, Macad::Occt::Bnd_Box^ theItem)
{
	((::Bnd_SeqOfBox*)_NativeInstance)->SetValue(theIndex, *(::Bnd_Box*)theItem->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  Bnd_Box
//---------------------------------------------------------------------

Macad::Occt::Bnd_Box::Bnd_Box()
	: BaseClass<::Bnd_Box>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Box();
}

Macad::Occt::Bnd_Box::Bnd_Box(Macad::Occt::Pnt theMin, Macad::Occt::Pnt theMax)
	: BaseClass<::Bnd_Box>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_theMin = &theMin;
	pin_ptr<Macad::Occt::Pnt> pp_theMax = &theMax;
	_NativeInstance = new ::Bnd_Box(*(gp_Pnt*)pp_theMin, *(gp_Pnt*)pp_theMax);
}

Macad::Occt::Bnd_Box::Bnd_Box(Macad::Occt::Bnd_Box^ parameter1)
	: BaseClass<::Bnd_Box>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Box(*(::Bnd_Box*)parameter1->NativeInstance);
}

void Macad::Occt::Bnd_Box::SetWhole()
{
	((::Bnd_Box*)_NativeInstance)->SetWhole();
}

void Macad::Occt::Bnd_Box::SetVoid()
{
	((::Bnd_Box*)_NativeInstance)->SetVoid();
}

void Macad::Occt::Bnd_Box::Set(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::Bnd_Box*)_NativeInstance)->Set(*(gp_Pnt*)pp_P);
}

void Macad::Occt::Bnd_Box::Set(Macad::Occt::Pnt P, Macad::Occt::Dir D)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Dir> pp_D = &D;
	((::Bnd_Box*)_NativeInstance)->Set(*(gp_Pnt*)pp_P, *(gp_Dir*)pp_D);
}

void Macad::Occt::Bnd_Box::Update(double aXmin, double aYmin, double aZmin, double aXmax, double aYmax, double aZmax)
{
	((::Bnd_Box*)_NativeInstance)->Update(aXmin, aYmin, aZmin, aXmax, aYmax, aZmax);
}

void Macad::Occt::Bnd_Box::Update(double X, double Y, double Z)
{
	((::Bnd_Box*)_NativeInstance)->Update(X, Y, Z);
}

double Macad::Occt::Bnd_Box::GetGap()
{
	return ((::Bnd_Box*)_NativeInstance)->GetGap();
}

void Macad::Occt::Bnd_Box::SetGap(double Tol)
{
	((::Bnd_Box*)_NativeInstance)->SetGap(Tol);
}

void Macad::Occt::Bnd_Box::Enlarge(double Tol)
{
	((::Bnd_Box*)_NativeInstance)->Enlarge(Tol);
}

void Macad::Occt::Bnd_Box::Get(double% theXmin, double% theYmin, double% theZmin, double% theXmax, double% theYmax, double% theZmax)
{
	pin_ptr<double> pp_theXmin = &theXmin;
	pin_ptr<double> pp_theYmin = &theYmin;
	pin_ptr<double> pp_theZmin = &theZmin;
	pin_ptr<double> pp_theXmax = &theXmax;
	pin_ptr<double> pp_theYmax = &theYmax;
	pin_ptr<double> pp_theZmax = &theZmax;
	((::Bnd_Box*)_NativeInstance)->Get(*(Standard_Real*)pp_theXmin, *(Standard_Real*)pp_theYmin, *(Standard_Real*)pp_theZmin, *(Standard_Real*)pp_theXmax, *(Standard_Real*)pp_theYmax, *(Standard_Real*)pp_theZmax);
}

Macad::Occt::Pnt Macad::Occt::Bnd_Box::CornerMin()
{
	return Macad::Occt::Pnt(((::Bnd_Box*)_NativeInstance)->CornerMin());
}

Macad::Occt::Pnt Macad::Occt::Bnd_Box::CornerMax()
{
	return Macad::Occt::Pnt(((::Bnd_Box*)_NativeInstance)->CornerMax());
}

void Macad::Occt::Bnd_Box::OpenXmin()
{
	((::Bnd_Box*)_NativeInstance)->OpenXmin();
}

void Macad::Occt::Bnd_Box::OpenXmax()
{
	((::Bnd_Box*)_NativeInstance)->OpenXmax();
}

void Macad::Occt::Bnd_Box::OpenYmin()
{
	((::Bnd_Box*)_NativeInstance)->OpenYmin();
}

void Macad::Occt::Bnd_Box::OpenYmax()
{
	((::Bnd_Box*)_NativeInstance)->OpenYmax();
}

void Macad::Occt::Bnd_Box::OpenZmin()
{
	((::Bnd_Box*)_NativeInstance)->OpenZmin();
}

void Macad::Occt::Bnd_Box::OpenZmax()
{
	((::Bnd_Box*)_NativeInstance)->OpenZmax();
}

bool Macad::Occt::Bnd_Box::IsOpen()
{
	return ((::Bnd_Box*)_NativeInstance)->IsOpen();
}

bool Macad::Occt::Bnd_Box::IsOpenXmin()
{
	return ((::Bnd_Box*)_NativeInstance)->IsOpenXmin();
}

bool Macad::Occt::Bnd_Box::IsOpenXmax()
{
	return ((::Bnd_Box*)_NativeInstance)->IsOpenXmax();
}

bool Macad::Occt::Bnd_Box::IsOpenYmin()
{
	return ((::Bnd_Box*)_NativeInstance)->IsOpenYmin();
}

bool Macad::Occt::Bnd_Box::IsOpenYmax()
{
	return ((::Bnd_Box*)_NativeInstance)->IsOpenYmax();
}

bool Macad::Occt::Bnd_Box::IsOpenZmin()
{
	return ((::Bnd_Box*)_NativeInstance)->IsOpenZmin();
}

bool Macad::Occt::Bnd_Box::IsOpenZmax()
{
	return ((::Bnd_Box*)_NativeInstance)->IsOpenZmax();
}

bool Macad::Occt::Bnd_Box::IsWhole()
{
	return ((::Bnd_Box*)_NativeInstance)->IsWhole();
}

bool Macad::Occt::Bnd_Box::IsVoid()
{
	return ((::Bnd_Box*)_NativeInstance)->IsVoid();
}

bool Macad::Occt::Bnd_Box::IsXThin(double tol)
{
	return ((::Bnd_Box*)_NativeInstance)->IsXThin(tol);
}

bool Macad::Occt::Bnd_Box::IsYThin(double tol)
{
	return ((::Bnd_Box*)_NativeInstance)->IsYThin(tol);
}

bool Macad::Occt::Bnd_Box::IsZThin(double tol)
{
	return ((::Bnd_Box*)_NativeInstance)->IsZThin(tol);
}

bool Macad::Occt::Bnd_Box::IsThin(double tol)
{
	return ((::Bnd_Box*)_NativeInstance)->IsThin(tol);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_Box::Transformed(Macad::Occt::Trsf T)
{
	pin_ptr<Macad::Occt::Trsf> pp_T = &T;
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result = ((::Bnd_Box*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_T);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

void Macad::Occt::Bnd_Box::Add(Macad::Occt::Bnd_Box^ Other)
{
	((::Bnd_Box*)_NativeInstance)->Add(*(::Bnd_Box*)Other->NativeInstance);
}

void Macad::Occt::Bnd_Box::Add(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	((::Bnd_Box*)_NativeInstance)->Add(*(gp_Pnt*)pp_P);
}

void Macad::Occt::Bnd_Box::Add(Macad::Occt::Pnt P, Macad::Occt::Dir D)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<Macad::Occt::Dir> pp_D = &D;
	((::Bnd_Box*)_NativeInstance)->Add(*(gp_Pnt*)pp_P, *(gp_Dir*)pp_D);
}

void Macad::Occt::Bnd_Box::Add(Macad::Occt::Dir D)
{
	pin_ptr<Macad::Occt::Dir> pp_D = &D;
	((::Bnd_Box*)_NativeInstance)->Add(*(gp_Dir*)pp_D);
}

bool Macad::Occt::Bnd_Box::IsOut(Macad::Occt::Pnt P)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	return ((::Bnd_Box*)_NativeInstance)->IsOut(*(gp_Pnt*)pp_P);
}

bool Macad::Occt::Bnd_Box::IsOut(Macad::Occt::gp_Lin^ L)
{
	return ((::Bnd_Box*)_NativeInstance)->IsOut(*(::gp_Lin*)L->NativeInstance);
}

bool Macad::Occt::Bnd_Box::IsOut(Macad::Occt::Pln P)
{
	pin_ptr<Macad::Occt::Pln> pp_P = &P;
	return ((::Bnd_Box*)_NativeInstance)->IsOut(*(gp_Pln*)pp_P);
}

bool Macad::Occt::Bnd_Box::IsOut(Macad::Occt::Bnd_Box^ Other)
{
	return ((::Bnd_Box*)_NativeInstance)->IsOut(*(::Bnd_Box*)Other->NativeInstance);
}

bool Macad::Occt::Bnd_Box::IsOut(Macad::Occt::Bnd_Box^ Other, Macad::Occt::Trsf T)
{
	pin_ptr<Macad::Occt::Trsf> pp_T = &T;
	return ((::Bnd_Box*)_NativeInstance)->IsOut(*(::Bnd_Box*)Other->NativeInstance, *(gp_Trsf*)pp_T);
}

bool Macad::Occt::Bnd_Box::IsOut(Macad::Occt::Trsf T1, Macad::Occt::Bnd_Box^ Other, Macad::Occt::Trsf T2)
{
	pin_ptr<Macad::Occt::Trsf> pp_T1 = &T1;
	pin_ptr<Macad::Occt::Trsf> pp_T2 = &T2;
	return ((::Bnd_Box*)_NativeInstance)->IsOut(*(gp_Trsf*)pp_T1, *(::Bnd_Box*)Other->NativeInstance, *(gp_Trsf*)pp_T2);
}

bool Macad::Occt::Bnd_Box::IsOut(Macad::Occt::Pnt P1, Macad::Occt::Pnt P2, Macad::Occt::Dir D)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	pin_ptr<Macad::Occt::Dir> pp_D = &D;
	return ((::Bnd_Box*)_NativeInstance)->IsOut(*(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(gp_Dir*)pp_D);
}

double Macad::Occt::Bnd_Box::Distance(Macad::Occt::Bnd_Box^ Other)
{
	return ((::Bnd_Box*)_NativeInstance)->Distance(*(::Bnd_Box*)Other->NativeInstance);
}

void Macad::Occt::Bnd_Box::Dump()
{
	((::Bnd_Box*)_NativeInstance)->Dump();
}

double Macad::Occt::Bnd_Box::SquareExtent()
{
	return ((::Bnd_Box*)_NativeInstance)->SquareExtent();
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_Box::FinitePart()
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result = ((::Bnd_Box*)_NativeInstance)->FinitePart();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

bool Macad::Occt::Bnd_Box::HasFinitePart()
{
	return ((::Bnd_Box*)_NativeInstance)->HasFinitePart();
}




//---------------------------------------------------------------------
//  Class  Bnd_Box2d
//---------------------------------------------------------------------

Macad::Occt::Bnd_Box2d::Bnd_Box2d()
	: BaseClass<::Bnd_Box2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Box2d();
}

Macad::Occt::Bnd_Box2d::Bnd_Box2d(Macad::Occt::Bnd_Box2d^ parameter1)
	: BaseClass<::Bnd_Box2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Box2d(*(::Bnd_Box2d*)parameter1->NativeInstance);
}

void Macad::Occt::Bnd_Box2d::SetWhole()
{
	((::Bnd_Box2d*)_NativeInstance)->SetWhole();
}

void Macad::Occt::Bnd_Box2d::SetVoid()
{
	((::Bnd_Box2d*)_NativeInstance)->SetVoid();
}

void Macad::Occt::Bnd_Box2d::Set(Macad::Occt::Pnt2d thePnt)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_thePnt = &thePnt;
	((::Bnd_Box2d*)_NativeInstance)->Set(*(gp_Pnt2d*)pp_thePnt);
}

void Macad::Occt::Bnd_Box2d::Set(Macad::Occt::Pnt2d thePnt, Macad::Occt::Dir2d theDir)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_thePnt = &thePnt;
	pin_ptr<Macad::Occt::Dir2d> pp_theDir = &theDir;
	((::Bnd_Box2d*)_NativeInstance)->Set(*(gp_Pnt2d*)pp_thePnt, *(gp_Dir2d*)pp_theDir);
}

void Macad::Occt::Bnd_Box2d::Update(double aXmin, double aYmin, double aXmax, double aYmax)
{
	((::Bnd_Box2d*)_NativeInstance)->Update(aXmin, aYmin, aXmax, aYmax);
}

void Macad::Occt::Bnd_Box2d::Update(double X, double Y)
{
	((::Bnd_Box2d*)_NativeInstance)->Update(X, Y);
}

double Macad::Occt::Bnd_Box2d::GetGap()
{
	return ((::Bnd_Box2d*)_NativeInstance)->GetGap();
}

void Macad::Occt::Bnd_Box2d::SetGap(double Tol)
{
	((::Bnd_Box2d*)_NativeInstance)->SetGap(Tol);
}

void Macad::Occt::Bnd_Box2d::Enlarge(double theTol)
{
	((::Bnd_Box2d*)_NativeInstance)->Enlarge(theTol);
}

void Macad::Occt::Bnd_Box2d::Get(double% aXmin, double% aYmin, double% aXmax, double% aYmax)
{
	pin_ptr<double> pp_aXmin = &aXmin;
	pin_ptr<double> pp_aYmin = &aYmin;
	pin_ptr<double> pp_aXmax = &aXmax;
	pin_ptr<double> pp_aYmax = &aYmax;
	((::Bnd_Box2d*)_NativeInstance)->Get(*(Standard_Real*)pp_aXmin, *(Standard_Real*)pp_aYmin, *(Standard_Real*)pp_aXmax, *(Standard_Real*)pp_aYmax);
}

void Macad::Occt::Bnd_Box2d::OpenXmin()
{
	((::Bnd_Box2d*)_NativeInstance)->OpenXmin();
}

void Macad::Occt::Bnd_Box2d::OpenXmax()
{
	((::Bnd_Box2d*)_NativeInstance)->OpenXmax();
}

void Macad::Occt::Bnd_Box2d::OpenYmin()
{
	((::Bnd_Box2d*)_NativeInstance)->OpenYmin();
}

void Macad::Occt::Bnd_Box2d::OpenYmax()
{
	((::Bnd_Box2d*)_NativeInstance)->OpenYmax();
}

bool Macad::Occt::Bnd_Box2d::IsOpenXmin()
{
	return ((::Bnd_Box2d*)_NativeInstance)->IsOpenXmin();
}

bool Macad::Occt::Bnd_Box2d::IsOpenXmax()
{
	return ((::Bnd_Box2d*)_NativeInstance)->IsOpenXmax();
}

bool Macad::Occt::Bnd_Box2d::IsOpenYmin()
{
	return ((::Bnd_Box2d*)_NativeInstance)->IsOpenYmin();
}

bool Macad::Occt::Bnd_Box2d::IsOpenYmax()
{
	return ((::Bnd_Box2d*)_NativeInstance)->IsOpenYmax();
}

bool Macad::Occt::Bnd_Box2d::IsWhole()
{
	return ((::Bnd_Box2d*)_NativeInstance)->IsWhole();
}

bool Macad::Occt::Bnd_Box2d::IsVoid()
{
	return ((::Bnd_Box2d*)_NativeInstance)->IsVoid();
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::Bnd_Box2d::Transformed(Macad::Occt::Trsf2d T)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T = &T;
	::Bnd_Box2d* _result = new ::Bnd_Box2d();
	*_result = ((::Bnd_Box2d*)_NativeInstance)->Transformed(*(gp_Trsf2d*)pp_T);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

void Macad::Occt::Bnd_Box2d::Add(Macad::Occt::Bnd_Box2d^ Other)
{
	((::Bnd_Box2d*)_NativeInstance)->Add(*(::Bnd_Box2d*)Other->NativeInstance);
}

void Macad::Occt::Bnd_Box2d::Add(Macad::Occt::Pnt2d thePnt)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_thePnt = &thePnt;
	((::Bnd_Box2d*)_NativeInstance)->Add(*(gp_Pnt2d*)pp_thePnt);
}

void Macad::Occt::Bnd_Box2d::Add(Macad::Occt::Pnt2d thePnt, Macad::Occt::Dir2d theDir)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_thePnt = &thePnt;
	pin_ptr<Macad::Occt::Dir2d> pp_theDir = &theDir;
	((::Bnd_Box2d*)_NativeInstance)->Add(*(gp_Pnt2d*)pp_thePnt, *(gp_Dir2d*)pp_theDir);
}

void Macad::Occt::Bnd_Box2d::Add(Macad::Occt::Dir2d D)
{
	pin_ptr<Macad::Occt::Dir2d> pp_D = &D;
	((::Bnd_Box2d*)_NativeInstance)->Add(*(gp_Dir2d*)pp_D);
}

bool Macad::Occt::Bnd_Box2d::IsOut(Macad::Occt::Pnt2d P)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
	return ((::Bnd_Box2d*)_NativeInstance)->IsOut(*(gp_Pnt2d*)pp_P);
}

bool Macad::Occt::Bnd_Box2d::IsOut(Macad::Occt::Bnd_Box2d^ Other)
{
	return ((::Bnd_Box2d*)_NativeInstance)->IsOut(*(::Bnd_Box2d*)Other->NativeInstance);
}

bool Macad::Occt::Bnd_Box2d::IsOut(Macad::Occt::Bnd_Box2d^ theOther, Macad::Occt::Trsf2d theTrsf)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_theTrsf = &theTrsf;
	return ((::Bnd_Box2d*)_NativeInstance)->IsOut(*(::Bnd_Box2d*)theOther->NativeInstance, *(gp_Trsf2d*)pp_theTrsf);
}

bool Macad::Occt::Bnd_Box2d::IsOut(Macad::Occt::Trsf2d T1, Macad::Occt::Bnd_Box2d^ Other, Macad::Occt::Trsf2d T2)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_T1 = &T1;
	pin_ptr<Macad::Occt::Trsf2d> pp_T2 = &T2;
	return ((::Bnd_Box2d*)_NativeInstance)->IsOut(*(gp_Trsf2d*)pp_T1, *(::Bnd_Box2d*)Other->NativeInstance, *(gp_Trsf2d*)pp_T2);
}

void Macad::Occt::Bnd_Box2d::Dump()
{
	((::Bnd_Box2d*)_NativeInstance)->Dump();
}

double Macad::Occt::Bnd_Box2d::SquareExtent()
{
	return ((::Bnd_Box2d*)_NativeInstance)->SquareExtent();
}




//---------------------------------------------------------------------
//  Class  Bnd_Sphere
//---------------------------------------------------------------------

Macad::Occt::Bnd_Sphere::Bnd_Sphere()
	: BaseClass<::Bnd_Sphere>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Sphere();
}

Macad::Occt::Bnd_Sphere::Bnd_Sphere(Macad::Occt::XYZ theCntr, double theRad, int theU, int theV)
	: BaseClass<::Bnd_Sphere>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::XYZ> pp_theCntr = &theCntr;
	_NativeInstance = new ::Bnd_Sphere(*(gp_XYZ*)pp_theCntr, theRad, theU, theV);
}

Macad::Occt::Bnd_Sphere::Bnd_Sphere(Macad::Occt::Bnd_Sphere^ parameter1)
	: BaseClass<::Bnd_Sphere>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Sphere(*(::Bnd_Sphere*)parameter1->NativeInstance);
}

int Macad::Occt::Bnd_Sphere::U()
{
	return ((::Bnd_Sphere*)_NativeInstance)->U();
}

int Macad::Occt::Bnd_Sphere::V()
{
	return ((::Bnd_Sphere*)_NativeInstance)->V();
}

bool Macad::Occt::Bnd_Sphere::IsValid()
{
	return ((::Bnd_Sphere*)_NativeInstance)->IsValid();
}

void Macad::Occt::Bnd_Sphere::SetValid(bool isValid)
{
	((::Bnd_Sphere*)_NativeInstance)->SetValid(isValid);
}

Macad::Occt::XYZ Macad::Occt::Bnd_Sphere::Center()
{
	return Macad::Occt::XYZ(((::Bnd_Sphere*)_NativeInstance)->Center());
}

double Macad::Occt::Bnd_Sphere::Radius()
{
	return ((::Bnd_Sphere*)_NativeInstance)->Radius();
}

void Macad::Occt::Bnd_Sphere::Distances(Macad::Occt::XYZ theXYZ, double% theMin, double% theMax)
{
	pin_ptr<Macad::Occt::XYZ> pp_theXYZ = &theXYZ;
	pin_ptr<double> pp_theMin = &theMin;
	pin_ptr<double> pp_theMax = &theMax;
	((::Bnd_Sphere*)_NativeInstance)->Distances(*(gp_XYZ*)pp_theXYZ, *(Standard_Real*)pp_theMin, *(Standard_Real*)pp_theMax);
}

void Macad::Occt::Bnd_Sphere::SquareDistances(Macad::Occt::XYZ theXYZ, double% theMin, double% theMax)
{
	pin_ptr<Macad::Occt::XYZ> pp_theXYZ = &theXYZ;
	pin_ptr<double> pp_theMin = &theMin;
	pin_ptr<double> pp_theMax = &theMax;
	((::Bnd_Sphere*)_NativeInstance)->SquareDistances(*(gp_XYZ*)pp_theXYZ, *(Standard_Real*)pp_theMin, *(Standard_Real*)pp_theMax);
}

bool Macad::Occt::Bnd_Sphere::Project(Macad::Occt::XYZ theNode, Macad::Occt::XYZ% theProjNode, double% theDist, bool% theInside)
{
	pin_ptr<Macad::Occt::XYZ> pp_theNode = &theNode;
	pin_ptr<Macad::Occt::XYZ> pp_theProjNode = &theProjNode;
	pin_ptr<double> pp_theDist = &theDist;
	pin_ptr<bool> pp_theInside = &theInside;
	return ((::Bnd_Sphere*)_NativeInstance)->Project(*(gp_XYZ*)pp_theNode, *(gp_XYZ*)pp_theProjNode, *(Standard_Real*)pp_theDist, *(Standard_Boolean*)pp_theInside);
}

double Macad::Occt::Bnd_Sphere::Distance(Macad::Occt::XYZ theNode)
{
	pin_ptr<Macad::Occt::XYZ> pp_theNode = &theNode;
	return ((::Bnd_Sphere*)_NativeInstance)->Distance(*(gp_XYZ*)pp_theNode);
}

double Macad::Occt::Bnd_Sphere::SquareDistance(Macad::Occt::XYZ theNode)
{
	pin_ptr<Macad::Occt::XYZ> pp_theNode = &theNode;
	return ((::Bnd_Sphere*)_NativeInstance)->SquareDistance(*(gp_XYZ*)pp_theNode);
}

void Macad::Occt::Bnd_Sphere::Add(Macad::Occt::Bnd_Sphere^ theOther)
{
	((::Bnd_Sphere*)_NativeInstance)->Add(*(::Bnd_Sphere*)theOther->NativeInstance);
}

bool Macad::Occt::Bnd_Sphere::IsOut(Macad::Occt::Bnd_Sphere^ theOther)
{
	return ((::Bnd_Sphere*)_NativeInstance)->IsOut(*(::Bnd_Sphere*)theOther->NativeInstance);
}

bool Macad::Occt::Bnd_Sphere::IsOut(Macad::Occt::XYZ thePnt, double% theMaxDist)
{
	pin_ptr<Macad::Occt::XYZ> pp_thePnt = &thePnt;
	pin_ptr<double> pp_theMaxDist = &theMaxDist;
	return ((::Bnd_Sphere*)_NativeInstance)->IsOut(*(gp_XYZ*)pp_thePnt, *(Standard_Real*)pp_theMaxDist);
}

double Macad::Occt::Bnd_Sphere::SquareExtent()
{
	return ((::Bnd_Sphere*)_NativeInstance)->SquareExtent();
}




//---------------------------------------------------------------------
//  Class  Bnd_B2d
//---------------------------------------------------------------------

Macad::Occt::Bnd_B2d::Bnd_B2d()
	: BaseClass<::Bnd_B2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_B2d();
}

Macad::Occt::Bnd_B2d::Bnd_B2d(Macad::Occt::XY theCenter, Macad::Occt::XY theHSize)
	: BaseClass<::Bnd_B2d>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::XY> pp_theCenter = &theCenter;
	pin_ptr<Macad::Occt::XY> pp_theHSize = &theHSize;
	_NativeInstance = new ::Bnd_B2d(*(gp_XY*)pp_theCenter, *(gp_XY*)pp_theHSize);
}

Macad::Occt::Bnd_B2d::Bnd_B2d(Macad::Occt::Bnd_B2d^ parameter1)
	: BaseClass<::Bnd_B2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_B2d(*(::Bnd_B2d*)parameter1->NativeInstance);
}

bool Macad::Occt::Bnd_B2d::IsVoid()
{
	return ((::Bnd_B2d*)_NativeInstance)->IsVoid();
}

void Macad::Occt::Bnd_B2d::Clear()
{
	((::Bnd_B2d*)_NativeInstance)->Clear();
}

void Macad::Occt::Bnd_B2d::Add(Macad::Occt::XY thePnt)
{
	pin_ptr<Macad::Occt::XY> pp_thePnt = &thePnt;
	((::Bnd_B2d*)_NativeInstance)->Add(*(gp_XY*)pp_thePnt);
}

void Macad::Occt::Bnd_B2d::Add(Macad::Occt::Pnt2d thePnt)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_thePnt = &thePnt;
	((::Bnd_B2d*)_NativeInstance)->Add(*(gp_Pnt2d*)pp_thePnt);
}

void Macad::Occt::Bnd_B2d::Add(Macad::Occt::Bnd_B2d^ theBox)
{
	((::Bnd_B2d*)_NativeInstance)->Add(*(::Bnd_B2d*)theBox->NativeInstance);
}

Macad::Occt::XY Macad::Occt::Bnd_B2d::CornerMin()
{
	return Macad::Occt::XY(((::Bnd_B2d*)_NativeInstance)->CornerMin());
}

Macad::Occt::XY Macad::Occt::Bnd_B2d::CornerMax()
{
	return Macad::Occt::XY(((::Bnd_B2d*)_NativeInstance)->CornerMax());
}

double Macad::Occt::Bnd_B2d::SquareExtent()
{
	return ((::Bnd_B2d*)_NativeInstance)->SquareExtent();
}

void Macad::Occt::Bnd_B2d::Enlarge(double theDiff)
{
	((::Bnd_B2d*)_NativeInstance)->Enlarge(theDiff);
}

bool Macad::Occt::Bnd_B2d::Limit(Macad::Occt::Bnd_B2d^ theOtherBox)
{
	return ((::Bnd_B2d*)_NativeInstance)->Limit(*(::Bnd_B2d*)theOtherBox->NativeInstance);
}

Macad::Occt::Bnd_B2d^ Macad::Occt::Bnd_B2d::Transformed(Macad::Occt::Trsf2d theTrsf)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_theTrsf = &theTrsf;
	::Bnd_B2d* _result = new ::Bnd_B2d();
	*_result = ((::Bnd_B2d*)_NativeInstance)->Transformed(*(gp_Trsf2d*)pp_theTrsf);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_B2d(_result);
}

bool Macad::Occt::Bnd_B2d::IsOut(Macad::Occt::XY thePnt)
{
	pin_ptr<Macad::Occt::XY> pp_thePnt = &thePnt;
	return ((::Bnd_B2d*)_NativeInstance)->IsOut(*(gp_XY*)pp_thePnt);
}

bool Macad::Occt::Bnd_B2d::IsOut(Macad::Occt::XY theCenter, double theRadius, bool isCircleHollow)
{
	pin_ptr<Macad::Occt::XY> pp_theCenter = &theCenter;
	return ((::Bnd_B2d*)_NativeInstance)->IsOut(*(gp_XY*)pp_theCenter, theRadius, isCircleHollow);
}

bool Macad::Occt::Bnd_B2d::IsOut(Macad::Occt::XY theCenter, double theRadius)
{
	pin_ptr<Macad::Occt::XY> pp_theCenter = &theCenter;
	return ((::Bnd_B2d*)_NativeInstance)->IsOut(*(gp_XY*)pp_theCenter, theRadius, false);
}

bool Macad::Occt::Bnd_B2d::IsOut(Macad::Occt::Bnd_B2d^ theOtherBox)
{
	return ((::Bnd_B2d*)_NativeInstance)->IsOut(*(::Bnd_B2d*)theOtherBox->NativeInstance);
}

bool Macad::Occt::Bnd_B2d::IsOut(Macad::Occt::Bnd_B2d^ theOtherBox, Macad::Occt::Trsf2d theTrsf)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_theTrsf = &theTrsf;
	return ((::Bnd_B2d*)_NativeInstance)->IsOut(*(::Bnd_B2d*)theOtherBox->NativeInstance, *(gp_Trsf2d*)pp_theTrsf);
}

bool Macad::Occt::Bnd_B2d::IsOut(Macad::Occt::Ax2d theLine)
{
	pin_ptr<Macad::Occt::Ax2d> pp_theLine = &theLine;
	return ((::Bnd_B2d*)_NativeInstance)->IsOut(*(gp_Ax2d*)pp_theLine);
}

bool Macad::Occt::Bnd_B2d::IsOut(Macad::Occt::XY theP0, Macad::Occt::XY theP1)
{
	pin_ptr<Macad::Occt::XY> pp_theP0 = &theP0;
	pin_ptr<Macad::Occt::XY> pp_theP1 = &theP1;
	return ((::Bnd_B2d*)_NativeInstance)->IsOut(*(gp_XY*)pp_theP0, *(gp_XY*)pp_theP1);
}

bool Macad::Occt::Bnd_B2d::IsIn(Macad::Occt::Bnd_B2d^ theBox)
{
	return ((::Bnd_B2d*)_NativeInstance)->IsIn(*(::Bnd_B2d*)theBox->NativeInstance);
}

bool Macad::Occt::Bnd_B2d::IsIn(Macad::Occt::Bnd_B2d^ theBox, Macad::Occt::Trsf2d theTrsf)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_theTrsf = &theTrsf;
	return ((::Bnd_B2d*)_NativeInstance)->IsIn(*(::Bnd_B2d*)theBox->NativeInstance, *(gp_Trsf2d*)pp_theTrsf);
}

void Macad::Occt::Bnd_B2d::SetCenter(Macad::Occt::XY theCenter)
{
	pin_ptr<Macad::Occt::XY> pp_theCenter = &theCenter;
	((::Bnd_B2d*)_NativeInstance)->SetCenter(*(gp_XY*)pp_theCenter);
}

void Macad::Occt::Bnd_B2d::SetHSize(Macad::Occt::XY theHSize)
{
	pin_ptr<Macad::Occt::XY> pp_theHSize = &theHSize;
	((::Bnd_B2d*)_NativeInstance)->SetHSize(*(gp_XY*)pp_theHSize);
}




//---------------------------------------------------------------------
//  Class  Bnd_B2f
//---------------------------------------------------------------------

Macad::Occt::Bnd_B2f::Bnd_B2f()
	: BaseClass<::Bnd_B2f>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_B2f();
}

Macad::Occt::Bnd_B2f::Bnd_B2f(Macad::Occt::XY theCenter, Macad::Occt::XY theHSize)
	: BaseClass<::Bnd_B2f>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::XY> pp_theCenter = &theCenter;
	pin_ptr<Macad::Occt::XY> pp_theHSize = &theHSize;
	_NativeInstance = new ::Bnd_B2f(*(gp_XY*)pp_theCenter, *(gp_XY*)pp_theHSize);
}

Macad::Occt::Bnd_B2f::Bnd_B2f(Macad::Occt::Bnd_B2f^ parameter1)
	: BaseClass<::Bnd_B2f>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_B2f(*(::Bnd_B2f*)parameter1->NativeInstance);
}

bool Macad::Occt::Bnd_B2f::IsVoid()
{
	return ((::Bnd_B2f*)_NativeInstance)->IsVoid();
}

void Macad::Occt::Bnd_B2f::Clear()
{
	((::Bnd_B2f*)_NativeInstance)->Clear();
}

void Macad::Occt::Bnd_B2f::Add(Macad::Occt::XY thePnt)
{
	pin_ptr<Macad::Occt::XY> pp_thePnt = &thePnt;
	((::Bnd_B2f*)_NativeInstance)->Add(*(gp_XY*)pp_thePnt);
}

void Macad::Occt::Bnd_B2f::Add(Macad::Occt::Pnt2d thePnt)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_thePnt = &thePnt;
	((::Bnd_B2f*)_NativeInstance)->Add(*(gp_Pnt2d*)pp_thePnt);
}

void Macad::Occt::Bnd_B2f::Add(Macad::Occt::Bnd_B2f^ theBox)
{
	((::Bnd_B2f*)_NativeInstance)->Add(*(::Bnd_B2f*)theBox->NativeInstance);
}

Macad::Occt::XY Macad::Occt::Bnd_B2f::CornerMin()
{
	return Macad::Occt::XY(((::Bnd_B2f*)_NativeInstance)->CornerMin());
}

Macad::Occt::XY Macad::Occt::Bnd_B2f::CornerMax()
{
	return Macad::Occt::XY(((::Bnd_B2f*)_NativeInstance)->CornerMax());
}

double Macad::Occt::Bnd_B2f::SquareExtent()
{
	return ((::Bnd_B2f*)_NativeInstance)->SquareExtent();
}

void Macad::Occt::Bnd_B2f::Enlarge(double theDiff)
{
	((::Bnd_B2f*)_NativeInstance)->Enlarge(theDiff);
}

bool Macad::Occt::Bnd_B2f::Limit(Macad::Occt::Bnd_B2f^ theOtherBox)
{
	return ((::Bnd_B2f*)_NativeInstance)->Limit(*(::Bnd_B2f*)theOtherBox->NativeInstance);
}

Macad::Occt::Bnd_B2f^ Macad::Occt::Bnd_B2f::Transformed(Macad::Occt::Trsf2d theTrsf)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_theTrsf = &theTrsf;
	::Bnd_B2f* _result = new ::Bnd_B2f();
	*_result = ((::Bnd_B2f*)_NativeInstance)->Transformed(*(gp_Trsf2d*)pp_theTrsf);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_B2f(_result);
}

bool Macad::Occt::Bnd_B2f::IsOut(Macad::Occt::XY thePnt)
{
	pin_ptr<Macad::Occt::XY> pp_thePnt = &thePnt;
	return ((::Bnd_B2f*)_NativeInstance)->IsOut(*(gp_XY*)pp_thePnt);
}

bool Macad::Occt::Bnd_B2f::IsOut(Macad::Occt::XY theCenter, double theRadius, bool isCircleHollow)
{
	pin_ptr<Macad::Occt::XY> pp_theCenter = &theCenter;
	return ((::Bnd_B2f*)_NativeInstance)->IsOut(*(gp_XY*)pp_theCenter, theRadius, isCircleHollow);
}

bool Macad::Occt::Bnd_B2f::IsOut(Macad::Occt::XY theCenter, double theRadius)
{
	pin_ptr<Macad::Occt::XY> pp_theCenter = &theCenter;
	return ((::Bnd_B2f*)_NativeInstance)->IsOut(*(gp_XY*)pp_theCenter, theRadius, false);
}

bool Macad::Occt::Bnd_B2f::IsOut(Macad::Occt::Bnd_B2f^ theOtherBox)
{
	return ((::Bnd_B2f*)_NativeInstance)->IsOut(*(::Bnd_B2f*)theOtherBox->NativeInstance);
}

bool Macad::Occt::Bnd_B2f::IsOut(Macad::Occt::Bnd_B2f^ theOtherBox, Macad::Occt::Trsf2d theTrsf)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_theTrsf = &theTrsf;
	return ((::Bnd_B2f*)_NativeInstance)->IsOut(*(::Bnd_B2f*)theOtherBox->NativeInstance, *(gp_Trsf2d*)pp_theTrsf);
}

bool Macad::Occt::Bnd_B2f::IsOut(Macad::Occt::Ax2d theLine)
{
	pin_ptr<Macad::Occt::Ax2d> pp_theLine = &theLine;
	return ((::Bnd_B2f*)_NativeInstance)->IsOut(*(gp_Ax2d*)pp_theLine);
}

bool Macad::Occt::Bnd_B2f::IsOut(Macad::Occt::XY theP0, Macad::Occt::XY theP1)
{
	pin_ptr<Macad::Occt::XY> pp_theP0 = &theP0;
	pin_ptr<Macad::Occt::XY> pp_theP1 = &theP1;
	return ((::Bnd_B2f*)_NativeInstance)->IsOut(*(gp_XY*)pp_theP0, *(gp_XY*)pp_theP1);
}

bool Macad::Occt::Bnd_B2f::IsIn(Macad::Occt::Bnd_B2f^ theBox)
{
	return ((::Bnd_B2f*)_NativeInstance)->IsIn(*(::Bnd_B2f*)theBox->NativeInstance);
}

bool Macad::Occt::Bnd_B2f::IsIn(Macad::Occt::Bnd_B2f^ theBox, Macad::Occt::Trsf2d theTrsf)
{
	pin_ptr<Macad::Occt::Trsf2d> pp_theTrsf = &theTrsf;
	return ((::Bnd_B2f*)_NativeInstance)->IsIn(*(::Bnd_B2f*)theBox->NativeInstance, *(gp_Trsf2d*)pp_theTrsf);
}

void Macad::Occt::Bnd_B2f::SetCenter(Macad::Occt::XY theCenter)
{
	pin_ptr<Macad::Occt::XY> pp_theCenter = &theCenter;
	((::Bnd_B2f*)_NativeInstance)->SetCenter(*(gp_XY*)pp_theCenter);
}

void Macad::Occt::Bnd_B2f::SetHSize(Macad::Occt::XY theHSize)
{
	pin_ptr<Macad::Occt::XY> pp_theHSize = &theHSize;
	((::Bnd_B2f*)_NativeInstance)->SetHSize(*(gp_XY*)pp_theHSize);
}




//---------------------------------------------------------------------
//  Class  Bnd_B3d
//---------------------------------------------------------------------

Macad::Occt::Bnd_B3d::Bnd_B3d()
	: BaseClass<::Bnd_B3d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_B3d();
}

Macad::Occt::Bnd_B3d::Bnd_B3d(Macad::Occt::XYZ theCenter, Macad::Occt::XYZ theHSize)
	: BaseClass<::Bnd_B3d>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::XYZ> pp_theCenter = &theCenter;
	pin_ptr<Macad::Occt::XYZ> pp_theHSize = &theHSize;
	_NativeInstance = new ::Bnd_B3d(*(gp_XYZ*)pp_theCenter, *(gp_XYZ*)pp_theHSize);
}

Macad::Occt::Bnd_B3d::Bnd_B3d(Macad::Occt::Bnd_B3d^ parameter1)
	: BaseClass<::Bnd_B3d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_B3d(*(::Bnd_B3d*)parameter1->NativeInstance);
}

bool Macad::Occt::Bnd_B3d::IsVoid()
{
	return ((::Bnd_B3d*)_NativeInstance)->IsVoid();
}

void Macad::Occt::Bnd_B3d::Clear()
{
	((::Bnd_B3d*)_NativeInstance)->Clear();
}

void Macad::Occt::Bnd_B3d::Add(Macad::Occt::XYZ thePnt)
{
	pin_ptr<Macad::Occt::XYZ> pp_thePnt = &thePnt;
	((::Bnd_B3d*)_NativeInstance)->Add(*(gp_XYZ*)pp_thePnt);
}

void Macad::Occt::Bnd_B3d::Add(Macad::Occt::Pnt thePnt)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
	((::Bnd_B3d*)_NativeInstance)->Add(*(gp_Pnt*)pp_thePnt);
}

void Macad::Occt::Bnd_B3d::Add(Macad::Occt::Bnd_B3d^ theBox)
{
	((::Bnd_B3d*)_NativeInstance)->Add(*(::Bnd_B3d*)theBox->NativeInstance);
}

Macad::Occt::XYZ Macad::Occt::Bnd_B3d::CornerMin()
{
	return Macad::Occt::XYZ(((::Bnd_B3d*)_NativeInstance)->CornerMin());
}

Macad::Occt::XYZ Macad::Occt::Bnd_B3d::CornerMax()
{
	return Macad::Occt::XYZ(((::Bnd_B3d*)_NativeInstance)->CornerMax());
}

double Macad::Occt::Bnd_B3d::SquareExtent()
{
	return ((::Bnd_B3d*)_NativeInstance)->SquareExtent();
}

void Macad::Occt::Bnd_B3d::Enlarge(double theDiff)
{
	((::Bnd_B3d*)_NativeInstance)->Enlarge(theDiff);
}

bool Macad::Occt::Bnd_B3d::Limit(Macad::Occt::Bnd_B3d^ theOtherBox)
{
	return ((::Bnd_B3d*)_NativeInstance)->Limit(*(::Bnd_B3d*)theOtherBox->NativeInstance);
}

Macad::Occt::Bnd_B3d^ Macad::Occt::Bnd_B3d::Transformed(Macad::Occt::Trsf theTrsf)
{
	pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
	::Bnd_B3d* _result = new ::Bnd_B3d();
	*_result = ((::Bnd_B3d*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_theTrsf);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_B3d(_result);
}

bool Macad::Occt::Bnd_B3d::IsOut(Macad::Occt::XYZ thePnt)
{
	pin_ptr<Macad::Occt::XYZ> pp_thePnt = &thePnt;
	return ((::Bnd_B3d*)_NativeInstance)->IsOut(*(gp_XYZ*)pp_thePnt);
}

bool Macad::Occt::Bnd_B3d::IsOut(Macad::Occt::XYZ theCenter, double theRadius, bool isSphereHollow)
{
	pin_ptr<Macad::Occt::XYZ> pp_theCenter = &theCenter;
	return ((::Bnd_B3d*)_NativeInstance)->IsOut(*(gp_XYZ*)pp_theCenter, theRadius, isSphereHollow);
}

bool Macad::Occt::Bnd_B3d::IsOut(Macad::Occt::XYZ theCenter, double theRadius)
{
	pin_ptr<Macad::Occt::XYZ> pp_theCenter = &theCenter;
	return ((::Bnd_B3d*)_NativeInstance)->IsOut(*(gp_XYZ*)pp_theCenter, theRadius, false);
}

bool Macad::Occt::Bnd_B3d::IsOut(Macad::Occt::Bnd_B3d^ theOtherBox)
{
	return ((::Bnd_B3d*)_NativeInstance)->IsOut(*(::Bnd_B3d*)theOtherBox->NativeInstance);
}

bool Macad::Occt::Bnd_B3d::IsOut(Macad::Occt::Bnd_B3d^ theOtherBox, Macad::Occt::Trsf theTrsf)
{
	pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
	return ((::Bnd_B3d*)_NativeInstance)->IsOut(*(::Bnd_B3d*)theOtherBox->NativeInstance, *(gp_Trsf*)pp_theTrsf);
}

bool Macad::Occt::Bnd_B3d::IsOut(Macad::Occt::Ax1 theLine, bool isRay, double theOverthickness)
{
	pin_ptr<Macad::Occt::Ax1> pp_theLine = &theLine;
	return ((::Bnd_B3d*)_NativeInstance)->IsOut(*(gp_Ax1*)pp_theLine, isRay, theOverthickness);
}

bool Macad::Occt::Bnd_B3d::IsOut(Macad::Occt::Ax1 theLine, bool isRay)
{
	pin_ptr<Macad::Occt::Ax1> pp_theLine = &theLine;
	return ((::Bnd_B3d*)_NativeInstance)->IsOut(*(gp_Ax1*)pp_theLine, isRay, 0.);
}

bool Macad::Occt::Bnd_B3d::IsOut(Macad::Occt::Ax1 theLine)
{
	pin_ptr<Macad::Occt::Ax1> pp_theLine = &theLine;
	return ((::Bnd_B3d*)_NativeInstance)->IsOut(*(gp_Ax1*)pp_theLine, false, 0.);
}

bool Macad::Occt::Bnd_B3d::IsOut(Macad::Occt::Ax3 thePlane)
{
	pin_ptr<Macad::Occt::Ax3> pp_thePlane = &thePlane;
	return ((::Bnd_B3d*)_NativeInstance)->IsOut(*(gp_Ax3*)pp_thePlane);
}

bool Macad::Occt::Bnd_B3d::IsIn(Macad::Occt::Bnd_B3d^ theBox)
{
	return ((::Bnd_B3d*)_NativeInstance)->IsIn(*(::Bnd_B3d*)theBox->NativeInstance);
}

bool Macad::Occt::Bnd_B3d::IsIn(Macad::Occt::Bnd_B3d^ theBox, Macad::Occt::Trsf theTrsf)
{
	pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
	return ((::Bnd_B3d*)_NativeInstance)->IsIn(*(::Bnd_B3d*)theBox->NativeInstance, *(gp_Trsf*)pp_theTrsf);
}

void Macad::Occt::Bnd_B3d::SetCenter(Macad::Occt::XYZ theCenter)
{
	pin_ptr<Macad::Occt::XYZ> pp_theCenter = &theCenter;
	((::Bnd_B3d*)_NativeInstance)->SetCenter(*(gp_XYZ*)pp_theCenter);
}

void Macad::Occt::Bnd_B3d::SetHSize(Macad::Occt::XYZ theHSize)
{
	pin_ptr<Macad::Occt::XYZ> pp_theHSize = &theHSize;
	((::Bnd_B3d*)_NativeInstance)->SetHSize(*(gp_XYZ*)pp_theHSize);
}




//---------------------------------------------------------------------
//  Class  Bnd_B3f
//---------------------------------------------------------------------

Macad::Occt::Bnd_B3f::Bnd_B3f()
	: BaseClass<::Bnd_B3f>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_B3f();
}

Macad::Occt::Bnd_B3f::Bnd_B3f(Macad::Occt::XYZ theCenter, Macad::Occt::XYZ theHSize)
	: BaseClass<::Bnd_B3f>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::XYZ> pp_theCenter = &theCenter;
	pin_ptr<Macad::Occt::XYZ> pp_theHSize = &theHSize;
	_NativeInstance = new ::Bnd_B3f(*(gp_XYZ*)pp_theCenter, *(gp_XYZ*)pp_theHSize);
}

Macad::Occt::Bnd_B3f::Bnd_B3f(Macad::Occt::Bnd_B3f^ parameter1)
	: BaseClass<::Bnd_B3f>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_B3f(*(::Bnd_B3f*)parameter1->NativeInstance);
}

bool Macad::Occt::Bnd_B3f::IsVoid()
{
	return ((::Bnd_B3f*)_NativeInstance)->IsVoid();
}

void Macad::Occt::Bnd_B3f::Clear()
{
	((::Bnd_B3f*)_NativeInstance)->Clear();
}

void Macad::Occt::Bnd_B3f::Add(Macad::Occt::XYZ thePnt)
{
	pin_ptr<Macad::Occt::XYZ> pp_thePnt = &thePnt;
	((::Bnd_B3f*)_NativeInstance)->Add(*(gp_XYZ*)pp_thePnt);
}

void Macad::Occt::Bnd_B3f::Add(Macad::Occt::Pnt thePnt)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
	((::Bnd_B3f*)_NativeInstance)->Add(*(gp_Pnt*)pp_thePnt);
}

void Macad::Occt::Bnd_B3f::Add(Macad::Occt::Bnd_B3f^ theBox)
{
	((::Bnd_B3f*)_NativeInstance)->Add(*(::Bnd_B3f*)theBox->NativeInstance);
}

Macad::Occt::XYZ Macad::Occt::Bnd_B3f::CornerMin()
{
	return Macad::Occt::XYZ(((::Bnd_B3f*)_NativeInstance)->CornerMin());
}

Macad::Occt::XYZ Macad::Occt::Bnd_B3f::CornerMax()
{
	return Macad::Occt::XYZ(((::Bnd_B3f*)_NativeInstance)->CornerMax());
}

double Macad::Occt::Bnd_B3f::SquareExtent()
{
	return ((::Bnd_B3f*)_NativeInstance)->SquareExtent();
}

void Macad::Occt::Bnd_B3f::Enlarge(double theDiff)
{
	((::Bnd_B3f*)_NativeInstance)->Enlarge(theDiff);
}

bool Macad::Occt::Bnd_B3f::Limit(Macad::Occt::Bnd_B3f^ theOtherBox)
{
	return ((::Bnd_B3f*)_NativeInstance)->Limit(*(::Bnd_B3f*)theOtherBox->NativeInstance);
}

Macad::Occt::Bnd_B3f^ Macad::Occt::Bnd_B3f::Transformed(Macad::Occt::Trsf theTrsf)
{
	pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
	::Bnd_B3f* _result = new ::Bnd_B3f();
	*_result = ((::Bnd_B3f*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_theTrsf);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_B3f(_result);
}

bool Macad::Occt::Bnd_B3f::IsOut(Macad::Occt::XYZ thePnt)
{
	pin_ptr<Macad::Occt::XYZ> pp_thePnt = &thePnt;
	return ((::Bnd_B3f*)_NativeInstance)->IsOut(*(gp_XYZ*)pp_thePnt);
}

bool Macad::Occt::Bnd_B3f::IsOut(Macad::Occt::XYZ theCenter, double theRadius, bool isSphereHollow)
{
	pin_ptr<Macad::Occt::XYZ> pp_theCenter = &theCenter;
	return ((::Bnd_B3f*)_NativeInstance)->IsOut(*(gp_XYZ*)pp_theCenter, theRadius, isSphereHollow);
}

bool Macad::Occt::Bnd_B3f::IsOut(Macad::Occt::XYZ theCenter, double theRadius)
{
	pin_ptr<Macad::Occt::XYZ> pp_theCenter = &theCenter;
	return ((::Bnd_B3f*)_NativeInstance)->IsOut(*(gp_XYZ*)pp_theCenter, theRadius, false);
}

bool Macad::Occt::Bnd_B3f::IsOut(Macad::Occt::Bnd_B3f^ theOtherBox)
{
	return ((::Bnd_B3f*)_NativeInstance)->IsOut(*(::Bnd_B3f*)theOtherBox->NativeInstance);
}

bool Macad::Occt::Bnd_B3f::IsOut(Macad::Occt::Bnd_B3f^ theOtherBox, Macad::Occt::Trsf theTrsf)
{
	pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
	return ((::Bnd_B3f*)_NativeInstance)->IsOut(*(::Bnd_B3f*)theOtherBox->NativeInstance, *(gp_Trsf*)pp_theTrsf);
}

bool Macad::Occt::Bnd_B3f::IsOut(Macad::Occt::Ax1 theLine, bool isRay, double theOverthickness)
{
	pin_ptr<Macad::Occt::Ax1> pp_theLine = &theLine;
	return ((::Bnd_B3f*)_NativeInstance)->IsOut(*(gp_Ax1*)pp_theLine, isRay, theOverthickness);
}

bool Macad::Occt::Bnd_B3f::IsOut(Macad::Occt::Ax1 theLine, bool isRay)
{
	pin_ptr<Macad::Occt::Ax1> pp_theLine = &theLine;
	return ((::Bnd_B3f*)_NativeInstance)->IsOut(*(gp_Ax1*)pp_theLine, isRay, 0.);
}

bool Macad::Occt::Bnd_B3f::IsOut(Macad::Occt::Ax1 theLine)
{
	pin_ptr<Macad::Occt::Ax1> pp_theLine = &theLine;
	return ((::Bnd_B3f*)_NativeInstance)->IsOut(*(gp_Ax1*)pp_theLine, false, 0.);
}

bool Macad::Occt::Bnd_B3f::IsOut(Macad::Occt::Ax3 thePlane)
{
	pin_ptr<Macad::Occt::Ax3> pp_thePlane = &thePlane;
	return ((::Bnd_B3f*)_NativeInstance)->IsOut(*(gp_Ax3*)pp_thePlane);
}

bool Macad::Occt::Bnd_B3f::IsIn(Macad::Occt::Bnd_B3f^ theBox)
{
	return ((::Bnd_B3f*)_NativeInstance)->IsIn(*(::Bnd_B3f*)theBox->NativeInstance);
}

bool Macad::Occt::Bnd_B3f::IsIn(Macad::Occt::Bnd_B3f^ theBox, Macad::Occt::Trsf theTrsf)
{
	pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
	return ((::Bnd_B3f*)_NativeInstance)->IsIn(*(::Bnd_B3f*)theBox->NativeInstance, *(gp_Trsf*)pp_theTrsf);
}

void Macad::Occt::Bnd_B3f::SetCenter(Macad::Occt::XYZ theCenter)
{
	pin_ptr<Macad::Occt::XYZ> pp_theCenter = &theCenter;
	((::Bnd_B3f*)_NativeInstance)->SetCenter(*(gp_XYZ*)pp_theCenter);
}

void Macad::Occt::Bnd_B3f::SetHSize(Macad::Occt::XYZ theHSize)
{
	pin_ptr<Macad::Occt::XYZ> pp_theHSize = &theHSize;
	((::Bnd_B3f*)_NativeInstance)->SetHSize(*(gp_XYZ*)pp_theHSize);
}




//---------------------------------------------------------------------
//  Class  Bnd_HArray1OfBox
//---------------------------------------------------------------------

Macad::Occt::Bnd_HArray1OfBox::Bnd_HArray1OfBox()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Bnd_HArray1OfBox();
}

Macad::Occt::Bnd_HArray1OfBox::Bnd_HArray1OfBox(int theLower, int theUpper)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Bnd_HArray1OfBox(theLower, theUpper);
}

Macad::Occt::Bnd_HArray1OfBox::Bnd_HArray1OfBox(int theLower, int theUpper, Macad::Occt::Bnd_Box^ theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Bnd_HArray1OfBox(theLower, theUpper, *(::Bnd_Box*)theValue->NativeInstance);
}

Macad::Occt::Bnd_HArray1OfBox::Bnd_HArray1OfBox(Macad::Occt::Bnd_Array1OfBox^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Bnd_HArray1OfBox(*(::Bnd_Array1OfBox*)theOther->NativeInstance);
}

Macad::Occt::Bnd_HArray1OfBox::Bnd_HArray1OfBox(Macad::Occt::Bnd_HArray1OfBox^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Bnd_HArray1OfBox(*(::Bnd_HArray1OfBox*)parameter1->NativeInstance);
}

Macad::Occt::Bnd_Array1OfBox^ Macad::Occt::Bnd_HArray1OfBox::Array1()
{
	::Bnd_Array1OfBox* _result = new ::Bnd_Array1OfBox();
	*_result =  (::Bnd_Array1OfBox)((::Bnd_HArray1OfBox*)_NativeInstance)->Array1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Array1OfBox(_result);
}

Macad::Occt::Bnd_Array1OfBox^ Macad::Occt::Bnd_HArray1OfBox::ChangeArray1()
{
	::Bnd_Array1OfBox* _result = new ::Bnd_Array1OfBox();
	*_result = ((::Bnd_HArray1OfBox*)_NativeInstance)->ChangeArray1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Array1OfBox(_result);
}

void Macad::Occt::Bnd_HArray1OfBox::Init(Macad::Occt::Bnd_Box^ theValue)
{
	((::Bnd_HArray1OfBox*)_NativeInstance)->Init(*(::Bnd_Box*)theValue->NativeInstance);
}

int Macad::Occt::Bnd_HArray1OfBox::Size()
{
	return ((::Bnd_HArray1OfBox*)_NativeInstance)->Size();
}

int Macad::Occt::Bnd_HArray1OfBox::Length()
{
	return ((::Bnd_HArray1OfBox*)_NativeInstance)->Length();
}

bool Macad::Occt::Bnd_HArray1OfBox::IsEmpty()
{
	return ((::Bnd_HArray1OfBox*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::Bnd_HArray1OfBox::Lower()
{
	return ((::Bnd_HArray1OfBox*)_NativeInstance)->Lower();
}

int Macad::Occt::Bnd_HArray1OfBox::Upper()
{
	return ((::Bnd_HArray1OfBox*)_NativeInstance)->Upper();
}

bool Macad::Occt::Bnd_HArray1OfBox::IsDeletable()
{
	return ((::Bnd_HArray1OfBox*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::Bnd_HArray1OfBox::IsAllocated()
{
	return ((::Bnd_HArray1OfBox*)_NativeInstance)->IsAllocated();
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_HArray1OfBox::First()
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result =  (::Bnd_Box)((::Bnd_HArray1OfBox*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_HArray1OfBox::ChangeFirst()
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result = ((::Bnd_HArray1OfBox*)_NativeInstance)->ChangeFirst();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_HArray1OfBox::Last()
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result =  (::Bnd_Box)((::Bnd_HArray1OfBox*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_HArray1OfBox::ChangeLast()
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result = ((::Bnd_HArray1OfBox*)_NativeInstance)->ChangeLast();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_HArray1OfBox::Value(int theIndex)
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result =  (::Bnd_Box)((::Bnd_HArray1OfBox*)_NativeInstance)->Value(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Bnd_HArray1OfBox::ChangeValue(int theIndex)
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result = ((::Bnd_HArray1OfBox*)_NativeInstance)->ChangeValue(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

void Macad::Occt::Bnd_HArray1OfBox::SetValue(int theIndex, Macad::Occt::Bnd_Box^ theItem)
{
	((::Bnd_HArray1OfBox*)_NativeInstance)->SetValue(theIndex, *(::Bnd_Box*)theItem->NativeInstance);
}

void Macad::Occt::Bnd_HArray1OfBox::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::Bnd_HArray1OfBox*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}


Macad::Occt::Bnd_HArray1OfBox^ Macad::Occt::Bnd_HArray1OfBox::CreateDowncasted(::Bnd_HArray1OfBox* instance)
{
	return gcnew Macad::Occt::Bnd_HArray1OfBox( instance );
}



//---------------------------------------------------------------------
//  Class  Bnd_BoundSortBox
//---------------------------------------------------------------------

Macad::Occt::Bnd_BoundSortBox::Bnd_BoundSortBox()
	: BaseClass<::Bnd_BoundSortBox>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_BoundSortBox();
}

Macad::Occt::Bnd_BoundSortBox::Bnd_BoundSortBox(Macad::Occt::Bnd_BoundSortBox^ parameter1)
	: BaseClass<::Bnd_BoundSortBox>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_BoundSortBox(*(::Bnd_BoundSortBox*)parameter1->NativeInstance);
}

void Macad::Occt::Bnd_BoundSortBox::Initialize(Macad::Occt::Bnd_Box^ CompleteBox, Macad::Occt::Bnd_HArray1OfBox^ SetOfBox)
{
	Handle(::Bnd_HArray1OfBox) h_SetOfBox = SetOfBox->NativeInstance;
	((::Bnd_BoundSortBox*)_NativeInstance)->Initialize(*(::Bnd_Box*)CompleteBox->NativeInstance, h_SetOfBox);
	SetOfBox->NativeInstance = h_SetOfBox.get();
}

void Macad::Occt::Bnd_BoundSortBox::Initialize(Macad::Occt::Bnd_HArray1OfBox^ SetOfBox)
{
	Handle(::Bnd_HArray1OfBox) h_SetOfBox = SetOfBox->NativeInstance;
	((::Bnd_BoundSortBox*)_NativeInstance)->Initialize(h_SetOfBox);
	SetOfBox->NativeInstance = h_SetOfBox.get();
}

void Macad::Occt::Bnd_BoundSortBox::Initialize(Macad::Occt::Bnd_Box^ CompleteBox, int nbComponents)
{
	((::Bnd_BoundSortBox*)_NativeInstance)->Initialize(*(::Bnd_Box*)CompleteBox->NativeInstance, nbComponents);
}

void Macad::Occt::Bnd_BoundSortBox::Add(Macad::Occt::Bnd_Box^ theBox, int boxIndex)
{
	((::Bnd_BoundSortBox*)_NativeInstance)->Add(*(::Bnd_Box*)theBox->NativeInstance, boxIndex);
}

Macad::Occt::TColStd_ListOfInteger^ Macad::Occt::Bnd_BoundSortBox::Compare(Macad::Occt::Bnd_Box^ theBox)
{
	::TColStd_ListOfInteger* _result = new ::TColStd_ListOfInteger();
	*_result =  (::TColStd_ListOfInteger)((::Bnd_BoundSortBox*)_NativeInstance)->Compare(*(::Bnd_Box*)theBox->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfInteger(_result);
}

Macad::Occt::TColStd_ListOfInteger^ Macad::Occt::Bnd_BoundSortBox::Compare(Macad::Occt::Pln P)
{
	pin_ptr<Macad::Occt::Pln> pp_P = &P;
	::TColStd_ListOfInteger* _result = new ::TColStd_ListOfInteger();
	*_result =  (::TColStd_ListOfInteger)((::Bnd_BoundSortBox*)_NativeInstance)->Compare(*(gp_Pln*)pp_P);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfInteger(_result);
}

void Macad::Occt::Bnd_BoundSortBox::Dump()
{
	((::Bnd_BoundSortBox*)_NativeInstance)->Dump();
}

void Macad::Occt::Bnd_BoundSortBox::Destroy()
{
	((::Bnd_BoundSortBox*)_NativeInstance)->Destroy();
}




//---------------------------------------------------------------------
//  Class  Bnd_HArray1OfBox2d
//---------------------------------------------------------------------

Macad::Occt::Bnd_HArray1OfBox2d::Bnd_HArray1OfBox2d()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Bnd_HArray1OfBox2d();
}

Macad::Occt::Bnd_HArray1OfBox2d::Bnd_HArray1OfBox2d(int theLower, int theUpper)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Bnd_HArray1OfBox2d(theLower, theUpper);
}

Macad::Occt::Bnd_HArray1OfBox2d::Bnd_HArray1OfBox2d(int theLower, int theUpper, Macad::Occt::Bnd_Box2d^ theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Bnd_HArray1OfBox2d(theLower, theUpper, *(::Bnd_Box2d*)theValue->NativeInstance);
}

Macad::Occt::Bnd_HArray1OfBox2d::Bnd_HArray1OfBox2d(Macad::Occt::Bnd_Array1OfBox2d^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Bnd_HArray1OfBox2d(*(::Bnd_Array1OfBox2d*)theOther->NativeInstance);
}

Macad::Occt::Bnd_HArray1OfBox2d::Bnd_HArray1OfBox2d(Macad::Occt::Bnd_HArray1OfBox2d^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Bnd_HArray1OfBox2d(*(::Bnd_HArray1OfBox2d*)parameter1->NativeInstance);
}

Macad::Occt::Bnd_Array1OfBox2d^ Macad::Occt::Bnd_HArray1OfBox2d::Array1()
{
	::Bnd_Array1OfBox2d* _result = new ::Bnd_Array1OfBox2d();
	*_result =  (::Bnd_Array1OfBox2d)((::Bnd_HArray1OfBox2d*)_NativeInstance)->Array1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Array1OfBox2d(_result);
}

Macad::Occt::Bnd_Array1OfBox2d^ Macad::Occt::Bnd_HArray1OfBox2d::ChangeArray1()
{
	::Bnd_Array1OfBox2d* _result = new ::Bnd_Array1OfBox2d();
	*_result = ((::Bnd_HArray1OfBox2d*)_NativeInstance)->ChangeArray1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Array1OfBox2d(_result);
}

void Macad::Occt::Bnd_HArray1OfBox2d::Init(Macad::Occt::Bnd_Box2d^ theValue)
{
	((::Bnd_HArray1OfBox2d*)_NativeInstance)->Init(*(::Bnd_Box2d*)theValue->NativeInstance);
}

int Macad::Occt::Bnd_HArray1OfBox2d::Size()
{
	return ((::Bnd_HArray1OfBox2d*)_NativeInstance)->Size();
}

int Macad::Occt::Bnd_HArray1OfBox2d::Length()
{
	return ((::Bnd_HArray1OfBox2d*)_NativeInstance)->Length();
}

bool Macad::Occt::Bnd_HArray1OfBox2d::IsEmpty()
{
	return ((::Bnd_HArray1OfBox2d*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::Bnd_HArray1OfBox2d::Lower()
{
	return ((::Bnd_HArray1OfBox2d*)_NativeInstance)->Lower();
}

int Macad::Occt::Bnd_HArray1OfBox2d::Upper()
{
	return ((::Bnd_HArray1OfBox2d*)_NativeInstance)->Upper();
}

bool Macad::Occt::Bnd_HArray1OfBox2d::IsDeletable()
{
	return ((::Bnd_HArray1OfBox2d*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::Bnd_HArray1OfBox2d::IsAllocated()
{
	return ((::Bnd_HArray1OfBox2d*)_NativeInstance)->IsAllocated();
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::Bnd_HArray1OfBox2d::First()
{
	::Bnd_Box2d* _result = new ::Bnd_Box2d();
	*_result =  (::Bnd_Box2d)((::Bnd_HArray1OfBox2d*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::Bnd_HArray1OfBox2d::ChangeFirst()
{
	::Bnd_Box2d* _result = new ::Bnd_Box2d();
	*_result = ((::Bnd_HArray1OfBox2d*)_NativeInstance)->ChangeFirst();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::Bnd_HArray1OfBox2d::Last()
{
	::Bnd_Box2d* _result = new ::Bnd_Box2d();
	*_result =  (::Bnd_Box2d)((::Bnd_HArray1OfBox2d*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::Bnd_HArray1OfBox2d::ChangeLast()
{
	::Bnd_Box2d* _result = new ::Bnd_Box2d();
	*_result = ((::Bnd_HArray1OfBox2d*)_NativeInstance)->ChangeLast();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::Bnd_HArray1OfBox2d::Value(int theIndex)
{
	::Bnd_Box2d* _result = new ::Bnd_Box2d();
	*_result =  (::Bnd_Box2d)((::Bnd_HArray1OfBox2d*)_NativeInstance)->Value(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::Bnd_HArray1OfBox2d::ChangeValue(int theIndex)
{
	::Bnd_Box2d* _result = new ::Bnd_Box2d();
	*_result = ((::Bnd_HArray1OfBox2d*)_NativeInstance)->ChangeValue(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

void Macad::Occt::Bnd_HArray1OfBox2d::SetValue(int theIndex, Macad::Occt::Bnd_Box2d^ theItem)
{
	((::Bnd_HArray1OfBox2d*)_NativeInstance)->SetValue(theIndex, *(::Bnd_Box2d*)theItem->NativeInstance);
}

void Macad::Occt::Bnd_HArray1OfBox2d::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::Bnd_HArray1OfBox2d*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}


Macad::Occt::Bnd_HArray1OfBox2d^ Macad::Occt::Bnd_HArray1OfBox2d::CreateDowncasted(::Bnd_HArray1OfBox2d* instance)
{
	return gcnew Macad::Occt::Bnd_HArray1OfBox2d( instance );
}



//---------------------------------------------------------------------
//  Class  Bnd_BoundSortBox2d
//---------------------------------------------------------------------

Macad::Occt::Bnd_BoundSortBox2d::Bnd_BoundSortBox2d()
	: BaseClass<::Bnd_BoundSortBox2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_BoundSortBox2d();
}

Macad::Occt::Bnd_BoundSortBox2d::Bnd_BoundSortBox2d(Macad::Occt::Bnd_BoundSortBox2d^ parameter1)
	: BaseClass<::Bnd_BoundSortBox2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_BoundSortBox2d(*(::Bnd_BoundSortBox2d*)parameter1->NativeInstance);
}

void Macad::Occt::Bnd_BoundSortBox2d::Initialize(Macad::Occt::Bnd_Box2d^ CompleteBox, Macad::Occt::Bnd_HArray1OfBox2d^ SetOfBox)
{
	Handle(::Bnd_HArray1OfBox2d) h_SetOfBox = SetOfBox->NativeInstance;
	((::Bnd_BoundSortBox2d*)_NativeInstance)->Initialize(*(::Bnd_Box2d*)CompleteBox->NativeInstance, h_SetOfBox);
	SetOfBox->NativeInstance = h_SetOfBox.get();
}

void Macad::Occt::Bnd_BoundSortBox2d::Initialize(Macad::Occt::Bnd_HArray1OfBox2d^ SetOfBox)
{
	Handle(::Bnd_HArray1OfBox2d) h_SetOfBox = SetOfBox->NativeInstance;
	((::Bnd_BoundSortBox2d*)_NativeInstance)->Initialize(h_SetOfBox);
	SetOfBox->NativeInstance = h_SetOfBox.get();
}

void Macad::Occt::Bnd_BoundSortBox2d::Initialize(Macad::Occt::Bnd_Box2d^ CompleteBox, int nbComponents)
{
	((::Bnd_BoundSortBox2d*)_NativeInstance)->Initialize(*(::Bnd_Box2d*)CompleteBox->NativeInstance, nbComponents);
}

void Macad::Occt::Bnd_BoundSortBox2d::Add(Macad::Occt::Bnd_Box2d^ theBox, int boxIndex)
{
	((::Bnd_BoundSortBox2d*)_NativeInstance)->Add(*(::Bnd_Box2d*)theBox->NativeInstance, boxIndex);
}

Macad::Occt::TColStd_ListOfInteger^ Macad::Occt::Bnd_BoundSortBox2d::Compare(Macad::Occt::Bnd_Box2d^ theBox)
{
	::TColStd_ListOfInteger* _result = new ::TColStd_ListOfInteger();
	*_result =  (::TColStd_ListOfInteger)((::Bnd_BoundSortBox2d*)_NativeInstance)->Compare(*(::Bnd_Box2d*)theBox->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfInteger(_result);
}

void Macad::Occt::Bnd_BoundSortBox2d::Dump()
{
	((::Bnd_BoundSortBox2d*)_NativeInstance)->Dump();
}




//---------------------------------------------------------------------
//  Class  Bnd_HArray1OfSphere
//---------------------------------------------------------------------

Macad::Occt::Bnd_HArray1OfSphere::Bnd_HArray1OfSphere()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Bnd_HArray1OfSphere();
}

Macad::Occt::Bnd_HArray1OfSphere::Bnd_HArray1OfSphere(int theLower, int theUpper)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Bnd_HArray1OfSphere(theLower, theUpper);
}

Macad::Occt::Bnd_HArray1OfSphere::Bnd_HArray1OfSphere(int theLower, int theUpper, Macad::Occt::Bnd_Sphere^ theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Bnd_HArray1OfSphere(theLower, theUpper, *(::Bnd_Sphere*)theValue->NativeInstance);
}

Macad::Occt::Bnd_HArray1OfSphere::Bnd_HArray1OfSphere(Macad::Occt::Bnd_Array1OfSphere^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Bnd_HArray1OfSphere(*(::Bnd_Array1OfSphere*)theOther->NativeInstance);
}

Macad::Occt::Bnd_HArray1OfSphere::Bnd_HArray1OfSphere(Macad::Occt::Bnd_HArray1OfSphere^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Bnd_HArray1OfSphere(*(::Bnd_HArray1OfSphere*)parameter1->NativeInstance);
}

Macad::Occt::Bnd_Array1OfSphere^ Macad::Occt::Bnd_HArray1OfSphere::Array1()
{
	::Bnd_Array1OfSphere* _result = new ::Bnd_Array1OfSphere();
	*_result =  (::Bnd_Array1OfSphere)((::Bnd_HArray1OfSphere*)_NativeInstance)->Array1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Array1OfSphere(_result);
}

Macad::Occt::Bnd_Array1OfSphere^ Macad::Occt::Bnd_HArray1OfSphere::ChangeArray1()
{
	::Bnd_Array1OfSphere* _result = new ::Bnd_Array1OfSphere();
	*_result = ((::Bnd_HArray1OfSphere*)_NativeInstance)->ChangeArray1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Array1OfSphere(_result);
}

void Macad::Occt::Bnd_HArray1OfSphere::Init(Macad::Occt::Bnd_Sphere^ theValue)
{
	((::Bnd_HArray1OfSphere*)_NativeInstance)->Init(*(::Bnd_Sphere*)theValue->NativeInstance);
}

int Macad::Occt::Bnd_HArray1OfSphere::Size()
{
	return ((::Bnd_HArray1OfSphere*)_NativeInstance)->Size();
}

int Macad::Occt::Bnd_HArray1OfSphere::Length()
{
	return ((::Bnd_HArray1OfSphere*)_NativeInstance)->Length();
}

bool Macad::Occt::Bnd_HArray1OfSphere::IsEmpty()
{
	return ((::Bnd_HArray1OfSphere*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::Bnd_HArray1OfSphere::Lower()
{
	return ((::Bnd_HArray1OfSphere*)_NativeInstance)->Lower();
}

int Macad::Occt::Bnd_HArray1OfSphere::Upper()
{
	return ((::Bnd_HArray1OfSphere*)_NativeInstance)->Upper();
}

bool Macad::Occt::Bnd_HArray1OfSphere::IsDeletable()
{
	return ((::Bnd_HArray1OfSphere*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::Bnd_HArray1OfSphere::IsAllocated()
{
	return ((::Bnd_HArray1OfSphere*)_NativeInstance)->IsAllocated();
}

Macad::Occt::Bnd_Sphere^ Macad::Occt::Bnd_HArray1OfSphere::First()
{
	::Bnd_Sphere* _result = new ::Bnd_Sphere();
	*_result =  (::Bnd_Sphere)((::Bnd_HArray1OfSphere*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Sphere(_result);
}

Macad::Occt::Bnd_Sphere^ Macad::Occt::Bnd_HArray1OfSphere::ChangeFirst()
{
	::Bnd_Sphere* _result = new ::Bnd_Sphere();
	*_result = ((::Bnd_HArray1OfSphere*)_NativeInstance)->ChangeFirst();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Sphere(_result);
}

Macad::Occt::Bnd_Sphere^ Macad::Occt::Bnd_HArray1OfSphere::Last()
{
	::Bnd_Sphere* _result = new ::Bnd_Sphere();
	*_result =  (::Bnd_Sphere)((::Bnd_HArray1OfSphere*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Sphere(_result);
}

Macad::Occt::Bnd_Sphere^ Macad::Occt::Bnd_HArray1OfSphere::ChangeLast()
{
	::Bnd_Sphere* _result = new ::Bnd_Sphere();
	*_result = ((::Bnd_HArray1OfSphere*)_NativeInstance)->ChangeLast();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Sphere(_result);
}

Macad::Occt::Bnd_Sphere^ Macad::Occt::Bnd_HArray1OfSphere::Value(int theIndex)
{
	::Bnd_Sphere* _result = new ::Bnd_Sphere();
	*_result =  (::Bnd_Sphere)((::Bnd_HArray1OfSphere*)_NativeInstance)->Value(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Sphere(_result);
}

Macad::Occt::Bnd_Sphere^ Macad::Occt::Bnd_HArray1OfSphere::ChangeValue(int theIndex)
{
	::Bnd_Sphere* _result = new ::Bnd_Sphere();
	*_result = ((::Bnd_HArray1OfSphere*)_NativeInstance)->ChangeValue(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Sphere(_result);
}

void Macad::Occt::Bnd_HArray1OfSphere::SetValue(int theIndex, Macad::Occt::Bnd_Sphere^ theItem)
{
	((::Bnd_HArray1OfSphere*)_NativeInstance)->SetValue(theIndex, *(::Bnd_Sphere*)theItem->NativeInstance);
}

void Macad::Occt::Bnd_HArray1OfSphere::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::Bnd_HArray1OfSphere*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}


Macad::Occt::Bnd_HArray1OfSphere^ Macad::Occt::Bnd_HArray1OfSphere::CreateDowncasted(::Bnd_HArray1OfSphere* instance)
{
	return gcnew Macad::Occt::Bnd_HArray1OfSphere( instance );
}



//---------------------------------------------------------------------
//  Class  Bnd_OBB
//---------------------------------------------------------------------

Macad::Occt::Bnd_OBB::Bnd_OBB()
	: BaseClass<::Bnd_OBB>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_OBB();
}

Macad::Occt::Bnd_OBB::Bnd_OBB(Macad::Occt::Pnt theCenter, Macad::Occt::Dir theXDirection, Macad::Occt::Dir theYDirection, Macad::Occt::Dir theZDirection, double theHXSize, double theHYSize, double theHZSize)
	: BaseClass<::Bnd_OBB>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
	pin_ptr<Macad::Occt::Dir> pp_theXDirection = &theXDirection;
	pin_ptr<Macad::Occt::Dir> pp_theYDirection = &theYDirection;
	pin_ptr<Macad::Occt::Dir> pp_theZDirection = &theZDirection;
	_NativeInstance = new ::Bnd_OBB(*(gp_Pnt*)pp_theCenter, *(gp_Dir*)pp_theXDirection, *(gp_Dir*)pp_theYDirection, *(gp_Dir*)pp_theZDirection, theHXSize, theHYSize, theHZSize);
}

Macad::Occt::Bnd_OBB::Bnd_OBB(Macad::Occt::Bnd_Box^ theBox)
	: BaseClass<::Bnd_OBB>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_OBB(*(::Bnd_Box*)theBox->NativeInstance);
}

Macad::Occt::Bnd_OBB::Bnd_OBB(Macad::Occt::Bnd_OBB^ parameter1)
	: BaseClass<::Bnd_OBB>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_OBB(*(::Bnd_OBB*)parameter1->NativeInstance);
}

void Macad::Occt::Bnd_OBB::ReBuild(Macad::Occt::TColgp_Array1OfPnt^ theListOfPoints, Macad::Occt::TColStd_Array1OfReal^ theListOfTolerances, bool theIsOptimal)
{
	((::Bnd_OBB*)_NativeInstance)->ReBuild(*(::TColgp_Array1OfPnt*)theListOfPoints->NativeInstance, (::TColStd_Array1OfReal*)theListOfTolerances->NativeInstance, theIsOptimal);
}

void Macad::Occt::Bnd_OBB::ReBuild(Macad::Occt::TColgp_Array1OfPnt^ theListOfPoints, Macad::Occt::TColStd_Array1OfReal^ theListOfTolerances)
{
	((::Bnd_OBB*)_NativeInstance)->ReBuild(*(::TColgp_Array1OfPnt*)theListOfPoints->NativeInstance, (::TColStd_Array1OfReal*)theListOfTolerances->NativeInstance, false);
}

void Macad::Occt::Bnd_OBB::ReBuild(Macad::Occt::TColgp_Array1OfPnt^ theListOfPoints)
{
	((::Bnd_OBB*)_NativeInstance)->ReBuild(*(::TColgp_Array1OfPnt*)theListOfPoints->NativeInstance, 0, false);
}

void Macad::Occt::Bnd_OBB::SetCenter(Macad::Occt::Pnt theCenter)
{
	pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
	((::Bnd_OBB*)_NativeInstance)->SetCenter(*(gp_Pnt*)pp_theCenter);
}

void Macad::Occt::Bnd_OBB::SetXComponent(Macad::Occt::Dir theXDirection, double theHXSize)
{
	pin_ptr<Macad::Occt::Dir> pp_theXDirection = &theXDirection;
	((::Bnd_OBB*)_NativeInstance)->SetXComponent(*(gp_Dir*)pp_theXDirection, theHXSize);
}

void Macad::Occt::Bnd_OBB::SetYComponent(Macad::Occt::Dir theYDirection, double theHYSize)
{
	pin_ptr<Macad::Occt::Dir> pp_theYDirection = &theYDirection;
	((::Bnd_OBB*)_NativeInstance)->SetYComponent(*(gp_Dir*)pp_theYDirection, theHYSize);
}

void Macad::Occt::Bnd_OBB::SetZComponent(Macad::Occt::Dir theZDirection, double theHZSize)
{
	pin_ptr<Macad::Occt::Dir> pp_theZDirection = &theZDirection;
	((::Bnd_OBB*)_NativeInstance)->SetZComponent(*(gp_Dir*)pp_theZDirection, theHZSize);
}

Macad::Occt::Ax3 Macad::Occt::Bnd_OBB::Position()
{
	return Macad::Occt::Ax3(((::Bnd_OBB*)_NativeInstance)->Position());
}

Macad::Occt::XYZ Macad::Occt::Bnd_OBB::Center()
{
	return Macad::Occt::XYZ(((::Bnd_OBB*)_NativeInstance)->Center());
}

Macad::Occt::XYZ Macad::Occt::Bnd_OBB::XDirection()
{
	return Macad::Occt::XYZ(((::Bnd_OBB*)_NativeInstance)->XDirection());
}

Macad::Occt::XYZ Macad::Occt::Bnd_OBB::YDirection()
{
	return Macad::Occt::XYZ(((::Bnd_OBB*)_NativeInstance)->YDirection());
}

Macad::Occt::XYZ Macad::Occt::Bnd_OBB::ZDirection()
{
	return Macad::Occt::XYZ(((::Bnd_OBB*)_NativeInstance)->ZDirection());
}

double Macad::Occt::Bnd_OBB::XHSize()
{
	return ((::Bnd_OBB*)_NativeInstance)->XHSize();
}

double Macad::Occt::Bnd_OBB::YHSize()
{
	return ((::Bnd_OBB*)_NativeInstance)->YHSize();
}

double Macad::Occt::Bnd_OBB::ZHSize()
{
	return ((::Bnd_OBB*)_NativeInstance)->ZHSize();
}

bool Macad::Occt::Bnd_OBB::IsVoid()
{
	return ((::Bnd_OBB*)_NativeInstance)->IsVoid();
}

void Macad::Occt::Bnd_OBB::SetVoid()
{
	((::Bnd_OBB*)_NativeInstance)->SetVoid();
}

void Macad::Occt::Bnd_OBB::SetAABox(bool theFlag)
{
	pin_ptr<bool> pp_theFlag = &theFlag;
	((::Bnd_OBB*)_NativeInstance)->SetAABox(*(Standard_Boolean*)pp_theFlag);
}

bool Macad::Occt::Bnd_OBB::IsAABox()
{
	return ((::Bnd_OBB*)_NativeInstance)->IsAABox();
}

void Macad::Occt::Bnd_OBB::Enlarge(double theGapAdd)
{
	((::Bnd_OBB*)_NativeInstance)->Enlarge(theGapAdd);
}

bool Macad::Occt::Bnd_OBB::GetVertex(Macad::Occt::Pnt% theP)
{
	pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
	return ((::Bnd_OBB*)_NativeInstance)->GetVertex((gp_Pnt*)pp_theP);
}

double Macad::Occt::Bnd_OBB::SquareExtent()
{
	return ((::Bnd_OBB*)_NativeInstance)->SquareExtent();
}

bool Macad::Occt::Bnd_OBB::IsOut(Macad::Occt::Bnd_OBB^ theOther)
{
	return ((::Bnd_OBB*)_NativeInstance)->IsOut(*(::Bnd_OBB*)theOther->NativeInstance);
}

bool Macad::Occt::Bnd_OBB::IsOut(Macad::Occt::Pnt theP)
{
	pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
	return ((::Bnd_OBB*)_NativeInstance)->IsOut(*(gp_Pnt*)pp_theP);
}

bool Macad::Occt::Bnd_OBB::IsCompletelyInside(Macad::Occt::Bnd_OBB^ theOther)
{
	return ((::Bnd_OBB*)_NativeInstance)->IsCompletelyInside(*(::Bnd_OBB*)theOther->NativeInstance);
}

void Macad::Occt::Bnd_OBB::Add(Macad::Occt::Bnd_OBB^ theOther)
{
	((::Bnd_OBB*)_NativeInstance)->Add(*(::Bnd_OBB*)theOther->NativeInstance);
}

void Macad::Occt::Bnd_OBB::Add(Macad::Occt::Pnt theP)
{
	pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
	((::Bnd_OBB*)_NativeInstance)->Add(*(gp_Pnt*)pp_theP);
}




//---------------------------------------------------------------------
//  Class  Bnd_Range
//---------------------------------------------------------------------

Macad::Occt::Bnd_Range::Bnd_Range()
	: BaseClass<::Bnd_Range>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Range();
}

Macad::Occt::Bnd_Range::Bnd_Range(double theMin, double theMax)
	: BaseClass<::Bnd_Range>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Range(theMin, theMax);
}

Macad::Occt::Bnd_Range::Bnd_Range(Macad::Occt::Bnd_Range^ parameter1)
	: BaseClass<::Bnd_Range>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Range(*(::Bnd_Range*)parameter1->NativeInstance);
}

void Macad::Occt::Bnd_Range::Common(Macad::Occt::Bnd_Range^ theOther)
{
	((::Bnd_Range*)_NativeInstance)->Common(*(::Bnd_Range*)theOther->NativeInstance);
}

bool Macad::Occt::Bnd_Range::Union(Macad::Occt::Bnd_Range^ theOther)
{
	return ((::Bnd_Range*)_NativeInstance)->Union(*(::Bnd_Range*)theOther->NativeInstance);
}

int Macad::Occt::Bnd_Range::IsIntersected(double theVal, double thePeriod)
{
	return ((::Bnd_Range*)_NativeInstance)->IsIntersected(theVal, thePeriod);
}

int Macad::Occt::Bnd_Range::IsIntersected(double theVal)
{
	return ((::Bnd_Range*)_NativeInstance)->IsIntersected(theVal, 0.);
}

void Macad::Occt::Bnd_Range::Add(double theParameter)
{
	((::Bnd_Range*)_NativeInstance)->Add(theParameter);
}

void Macad::Occt::Bnd_Range::Add(Macad::Occt::Bnd_Range^ theRange)
{
	((::Bnd_Range*)_NativeInstance)->Add(*(::Bnd_Range*)theRange->NativeInstance);
}

bool Macad::Occt::Bnd_Range::GetMin(double% thePar)
{
	pin_ptr<double> pp_thePar = &thePar;
	return ((::Bnd_Range*)_NativeInstance)->GetMin(*(Standard_Real*)pp_thePar);
}

bool Macad::Occt::Bnd_Range::GetMax(double% thePar)
{
	pin_ptr<double> pp_thePar = &thePar;
	return ((::Bnd_Range*)_NativeInstance)->GetMax(*(Standard_Real*)pp_thePar);
}

bool Macad::Occt::Bnd_Range::GetBounds(double% theFirstPar, double% theLastPar)
{
	pin_ptr<double> pp_theFirstPar = &theFirstPar;
	pin_ptr<double> pp_theLastPar = &theLastPar;
	return ((::Bnd_Range*)_NativeInstance)->GetBounds(*(Standard_Real*)pp_theFirstPar, *(Standard_Real*)pp_theLastPar);
}

bool Macad::Occt::Bnd_Range::GetIntermediatePoint(double theLambda, double% theParameter)
{
	pin_ptr<double> pp_theParameter = &theParameter;
	return ((::Bnd_Range*)_NativeInstance)->GetIntermediatePoint(theLambda, *(Standard_Real*)pp_theParameter);
}

double Macad::Occt::Bnd_Range::Delta()
{
	return ((::Bnd_Range*)_NativeInstance)->Delta();
}

bool Macad::Occt::Bnd_Range::IsVoid()
{
	return ((::Bnd_Range*)_NativeInstance)->IsVoid();
}

void Macad::Occt::Bnd_Range::SetVoid()
{
	((::Bnd_Range*)_NativeInstance)->SetVoid();
}

void Macad::Occt::Bnd_Range::Enlarge(double theDelta)
{
	((::Bnd_Range*)_NativeInstance)->Enlarge(theDelta);
}

Macad::Occt::Bnd_Range^ Macad::Occt::Bnd_Range::Shifted(double theVal)
{
	::Bnd_Range* _result = new ::Bnd_Range();
	*_result = ((::Bnd_Range*)_NativeInstance)->Shifted(theVal);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Range(_result);
}

void Macad::Occt::Bnd_Range::Shift(double theVal)
{
	((::Bnd_Range*)_NativeInstance)->Shift(theVal);
}

void Macad::Occt::Bnd_Range::TrimFrom(double theValLower)
{
	((::Bnd_Range*)_NativeInstance)->TrimFrom(theValLower);
}

void Macad::Occt::Bnd_Range::TrimTo(double theValUpper)
{
	((::Bnd_Range*)_NativeInstance)->TrimTo(theValUpper);
}

bool Macad::Occt::Bnd_Range::IsOut(double theValue)
{
	return ((::Bnd_Range*)_NativeInstance)->IsOut(theValue);
}

bool Macad::Occt::Bnd_Range::IsOut(Macad::Occt::Bnd_Range^ theRange)
{
	return ((::Bnd_Range*)_NativeInstance)->IsOut(*(::Bnd_Range*)theRange->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  Bnd_Tools
//---------------------------------------------------------------------

Macad::Occt::Bnd_Tools::Bnd_Tools()
	: BaseClass<::Bnd_Tools>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Tools();
}

Macad::Occt::Bnd_Tools::Bnd_Tools(Macad::Occt::Bnd_Tools^ parameter1)
	: BaseClass<::Bnd_Tools>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Bnd_Tools(*(::Bnd_Tools*)parameter1->NativeInstance);
}



