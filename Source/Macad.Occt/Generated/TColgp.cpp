// Generated wrapper code for package TColgp

#include "OcctPCH.h"
#include "TColgp.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Standard.h"
#include "TColgp.h"
#include "gp.h"
#include "NCollection.h"


//---------------------------------------------------------------------
//  Class  TColgp_Array1OfCirc2d
//---------------------------------------------------------------------

Macad::Occt::TColgp_Array1OfCirc2d::TColgp_Array1OfCirc2d()
	: BaseClass<::TColgp_Array1OfCirc2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array1OfCirc2d();
}

Macad::Occt::TColgp_Array1OfCirc2d::TColgp_Array1OfCirc2d(int theLower, int theUpper)
	: BaseClass<::TColgp_Array1OfCirc2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array1OfCirc2d(theLower, theUpper);
}

Macad::Occt::TColgp_Array1OfCirc2d::TColgp_Array1OfCirc2d(Macad::Occt::TColgp_Array1OfCirc2d^ theOther)
	: BaseClass<::TColgp_Array1OfCirc2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array1OfCirc2d(*(::TColgp_Array1OfCirc2d*)theOther->NativeInstance);
}

Macad::Occt::TColgp_Array1OfCirc2d::TColgp_Array1OfCirc2d(Macad::Occt::gp_Circ2d^ theBegin, int theLower, int theUpper)
	: BaseClass<::TColgp_Array1OfCirc2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array1OfCirc2d(*(::gp_Circ2d*)theBegin->NativeInstance, theLower, theUpper);
}

void Macad::Occt::TColgp_Array1OfCirc2d::Init(Macad::Occt::gp_Circ2d^ theValue)
{
	((::TColgp_Array1OfCirc2d*)_NativeInstance)->Init(*(::gp_Circ2d*)theValue->NativeInstance);
}

int Macad::Occt::TColgp_Array1OfCirc2d::Size()
{
	return ((::TColgp_Array1OfCirc2d*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_Array1OfCirc2d::Length()
{
	return ((::TColgp_Array1OfCirc2d*)_NativeInstance)->Length();
}

bool Macad::Occt::TColgp_Array1OfCirc2d::IsEmpty()
{
	return ((::TColgp_Array1OfCirc2d*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColgp_Array1OfCirc2d::Lower()
{
	return ((::TColgp_Array1OfCirc2d*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_Array1OfCirc2d::Upper()
{
	return ((::TColgp_Array1OfCirc2d*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_Array1OfCirc2d::IsDeletable()
{
	return ((::TColgp_Array1OfCirc2d*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColgp_Array1OfCirc2d::IsAllocated()
{
	return ((::TColgp_Array1OfCirc2d*)_NativeInstance)->IsAllocated();
}

Macad::Occt::TColgp_Array1OfCirc2d^ Macad::Occt::TColgp_Array1OfCirc2d::Assign(Macad::Occt::TColgp_Array1OfCirc2d^ theOther)
{
	::TColgp_Array1OfCirc2d* _result = new ::TColgp_Array1OfCirc2d();
	*_result = ((::TColgp_Array1OfCirc2d*)_NativeInstance)->Assign(*(::TColgp_Array1OfCirc2d*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfCirc2d(_result);
}

Macad::Occt::TColgp_Array1OfCirc2d^ Macad::Occt::TColgp_Array1OfCirc2d::Move(Macad::Occt::TColgp_Array1OfCirc2d^ theOther)
{
	::TColgp_Array1OfCirc2d* _result = new ::TColgp_Array1OfCirc2d();
	*_result = ((::TColgp_Array1OfCirc2d*)_NativeInstance)->Move(*(::TColgp_Array1OfCirc2d*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfCirc2d(_result);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::TColgp_Array1OfCirc2d::First()
{
	::gp_Circ2d* _result = new ::gp_Circ2d();
	*_result =  (::gp_Circ2d)((::TColgp_Array1OfCirc2d*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::TColgp_Array1OfCirc2d::ChangeFirst()
{
	::gp_Circ2d* _result = new ::gp_Circ2d();
	*_result = ((::TColgp_Array1OfCirc2d*)_NativeInstance)->ChangeFirst();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::TColgp_Array1OfCirc2d::Last()
{
	::gp_Circ2d* _result = new ::gp_Circ2d();
	*_result =  (::gp_Circ2d)((::TColgp_Array1OfCirc2d*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::TColgp_Array1OfCirc2d::ChangeLast()
{
	::gp_Circ2d* _result = new ::gp_Circ2d();
	*_result = ((::TColgp_Array1OfCirc2d*)_NativeInstance)->ChangeLast();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::TColgp_Array1OfCirc2d::Value(int theIndex)
{
	::gp_Circ2d* _result = new ::gp_Circ2d();
	*_result =  (::gp_Circ2d)((::TColgp_Array1OfCirc2d*)_NativeInstance)->Value(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::TColgp_Array1OfCirc2d::ChangeValue(int theIndex)
{
	::gp_Circ2d* _result = new ::gp_Circ2d();
	*_result = ((::TColgp_Array1OfCirc2d*)_NativeInstance)->ChangeValue(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

void Macad::Occt::TColgp_Array1OfCirc2d::SetValue(int theIndex, Macad::Occt::gp_Circ2d^ theItem)
{
	((::TColgp_Array1OfCirc2d*)_NativeInstance)->SetValue(theIndex, *(::gp_Circ2d*)theItem->NativeInstance);
}

void Macad::Occt::TColgp_Array1OfCirc2d::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColgp_Array1OfCirc2d*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColgp_Array1OfDir
//---------------------------------------------------------------------

Macad::Occt::TColgp_Array1OfDir::TColgp_Array1OfDir()
	: BaseClass<::TColgp_Array1OfDir>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array1OfDir();
}

Macad::Occt::TColgp_Array1OfDir::TColgp_Array1OfDir(int theLower, int theUpper)
	: BaseClass<::TColgp_Array1OfDir>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array1OfDir(theLower, theUpper);
}

Macad::Occt::TColgp_Array1OfDir::TColgp_Array1OfDir(Macad::Occt::TColgp_Array1OfDir^ theOther)
	: BaseClass<::TColgp_Array1OfDir>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array1OfDir(*(::TColgp_Array1OfDir*)theOther->NativeInstance);
}

Macad::Occt::TColgp_Array1OfDir::TColgp_Array1OfDir(Macad::Occt::Dir theBegin, int theLower, int theUpper)
	: BaseClass<::TColgp_Array1OfDir>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Dir> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColgp_Array1OfDir(*(gp_Dir*)pp_theBegin, theLower, theUpper);
}

void Macad::Occt::TColgp_Array1OfDir::Init(Macad::Occt::Dir theValue)
{
	pin_ptr<Macad::Occt::Dir> pp_theValue = &theValue;
	((::TColgp_Array1OfDir*)_NativeInstance)->Init(*(gp_Dir*)pp_theValue);
}

int Macad::Occt::TColgp_Array1OfDir::Size()
{
	return ((::TColgp_Array1OfDir*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_Array1OfDir::Length()
{
	return ((::TColgp_Array1OfDir*)_NativeInstance)->Length();
}

bool Macad::Occt::TColgp_Array1OfDir::IsEmpty()
{
	return ((::TColgp_Array1OfDir*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColgp_Array1OfDir::Lower()
{
	return ((::TColgp_Array1OfDir*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_Array1OfDir::Upper()
{
	return ((::TColgp_Array1OfDir*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_Array1OfDir::IsDeletable()
{
	return ((::TColgp_Array1OfDir*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColgp_Array1OfDir::IsAllocated()
{
	return ((::TColgp_Array1OfDir*)_NativeInstance)->IsAllocated();
}

Macad::Occt::TColgp_Array1OfDir^ Macad::Occt::TColgp_Array1OfDir::Assign(Macad::Occt::TColgp_Array1OfDir^ theOther)
{
	::TColgp_Array1OfDir* _result = new ::TColgp_Array1OfDir();
	*_result = ((::TColgp_Array1OfDir*)_NativeInstance)->Assign(*(::TColgp_Array1OfDir*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfDir(_result);
}

Macad::Occt::TColgp_Array1OfDir^ Macad::Occt::TColgp_Array1OfDir::Move(Macad::Occt::TColgp_Array1OfDir^ theOther)
{
	::TColgp_Array1OfDir* _result = new ::TColgp_Array1OfDir();
	*_result = ((::TColgp_Array1OfDir*)_NativeInstance)->Move(*(::TColgp_Array1OfDir*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfDir(_result);
}

Macad::Occt::Dir Macad::Occt::TColgp_Array1OfDir::First()
{
	return Macad::Occt::Dir(((::TColgp_Array1OfDir*)_NativeInstance)->First());
}

Macad::Occt::Dir Macad::Occt::TColgp_Array1OfDir::ChangeFirst()
{
	return Macad::Occt::Dir(((::TColgp_Array1OfDir*)_NativeInstance)->ChangeFirst());
}

Macad::Occt::Dir Macad::Occt::TColgp_Array1OfDir::Last()
{
	return Macad::Occt::Dir(((::TColgp_Array1OfDir*)_NativeInstance)->Last());
}

Macad::Occt::Dir Macad::Occt::TColgp_Array1OfDir::ChangeLast()
{
	return Macad::Occt::Dir(((::TColgp_Array1OfDir*)_NativeInstance)->ChangeLast());
}

Macad::Occt::Dir Macad::Occt::TColgp_Array1OfDir::Value(int theIndex)
{
	return Macad::Occt::Dir(((::TColgp_Array1OfDir*)_NativeInstance)->Value(theIndex));
}

Macad::Occt::Dir Macad::Occt::TColgp_Array1OfDir::ChangeValue(int theIndex)
{
	return Macad::Occt::Dir(((::TColgp_Array1OfDir*)_NativeInstance)->ChangeValue(theIndex));
}

void Macad::Occt::TColgp_Array1OfDir::SetValue(int theIndex, Macad::Occt::Dir theItem)
{
	pin_ptr<Macad::Occt::Dir> pp_theItem = &theItem;
	((::TColgp_Array1OfDir*)_NativeInstance)->SetValue(theIndex, *(gp_Dir*)pp_theItem);
}

void Macad::Occt::TColgp_Array1OfDir::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColgp_Array1OfDir*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColgp_Array1OfDir2d
//---------------------------------------------------------------------

Macad::Occt::TColgp_Array1OfDir2d::TColgp_Array1OfDir2d()
	: BaseClass<::TColgp_Array1OfDir2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array1OfDir2d();
}

Macad::Occt::TColgp_Array1OfDir2d::TColgp_Array1OfDir2d(int theLower, int theUpper)
	: BaseClass<::TColgp_Array1OfDir2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array1OfDir2d(theLower, theUpper);
}

Macad::Occt::TColgp_Array1OfDir2d::TColgp_Array1OfDir2d(Macad::Occt::TColgp_Array1OfDir2d^ theOther)
	: BaseClass<::TColgp_Array1OfDir2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array1OfDir2d(*(::TColgp_Array1OfDir2d*)theOther->NativeInstance);
}

Macad::Occt::TColgp_Array1OfDir2d::TColgp_Array1OfDir2d(Macad::Occt::Dir2d theBegin, int theLower, int theUpper)
	: BaseClass<::TColgp_Array1OfDir2d>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Dir2d> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColgp_Array1OfDir2d(*(gp_Dir2d*)pp_theBegin, theLower, theUpper);
}

void Macad::Occt::TColgp_Array1OfDir2d::Init(Macad::Occt::Dir2d theValue)
{
	pin_ptr<Macad::Occt::Dir2d> pp_theValue = &theValue;
	((::TColgp_Array1OfDir2d*)_NativeInstance)->Init(*(gp_Dir2d*)pp_theValue);
}

int Macad::Occt::TColgp_Array1OfDir2d::Size()
{
	return ((::TColgp_Array1OfDir2d*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_Array1OfDir2d::Length()
{
	return ((::TColgp_Array1OfDir2d*)_NativeInstance)->Length();
}

bool Macad::Occt::TColgp_Array1OfDir2d::IsEmpty()
{
	return ((::TColgp_Array1OfDir2d*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColgp_Array1OfDir2d::Lower()
{
	return ((::TColgp_Array1OfDir2d*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_Array1OfDir2d::Upper()
{
	return ((::TColgp_Array1OfDir2d*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_Array1OfDir2d::IsDeletable()
{
	return ((::TColgp_Array1OfDir2d*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColgp_Array1OfDir2d::IsAllocated()
{
	return ((::TColgp_Array1OfDir2d*)_NativeInstance)->IsAllocated();
}

Macad::Occt::TColgp_Array1OfDir2d^ Macad::Occt::TColgp_Array1OfDir2d::Assign(Macad::Occt::TColgp_Array1OfDir2d^ theOther)
{
	::TColgp_Array1OfDir2d* _result = new ::TColgp_Array1OfDir2d();
	*_result = ((::TColgp_Array1OfDir2d*)_NativeInstance)->Assign(*(::TColgp_Array1OfDir2d*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfDir2d(_result);
}

Macad::Occt::TColgp_Array1OfDir2d^ Macad::Occt::TColgp_Array1OfDir2d::Move(Macad::Occt::TColgp_Array1OfDir2d^ theOther)
{
	::TColgp_Array1OfDir2d* _result = new ::TColgp_Array1OfDir2d();
	*_result = ((::TColgp_Array1OfDir2d*)_NativeInstance)->Move(*(::TColgp_Array1OfDir2d*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfDir2d(_result);
}

Macad::Occt::Dir2d Macad::Occt::TColgp_Array1OfDir2d::First()
{
	return Macad::Occt::Dir2d(((::TColgp_Array1OfDir2d*)_NativeInstance)->First());
}

Macad::Occt::Dir2d Macad::Occt::TColgp_Array1OfDir2d::ChangeFirst()
{
	return Macad::Occt::Dir2d(((::TColgp_Array1OfDir2d*)_NativeInstance)->ChangeFirst());
}

Macad::Occt::Dir2d Macad::Occt::TColgp_Array1OfDir2d::Last()
{
	return Macad::Occt::Dir2d(((::TColgp_Array1OfDir2d*)_NativeInstance)->Last());
}

Macad::Occt::Dir2d Macad::Occt::TColgp_Array1OfDir2d::ChangeLast()
{
	return Macad::Occt::Dir2d(((::TColgp_Array1OfDir2d*)_NativeInstance)->ChangeLast());
}

Macad::Occt::Dir2d Macad::Occt::TColgp_Array1OfDir2d::Value(int theIndex)
{
	return Macad::Occt::Dir2d(((::TColgp_Array1OfDir2d*)_NativeInstance)->Value(theIndex));
}

Macad::Occt::Dir2d Macad::Occt::TColgp_Array1OfDir2d::ChangeValue(int theIndex)
{
	return Macad::Occt::Dir2d(((::TColgp_Array1OfDir2d*)_NativeInstance)->ChangeValue(theIndex));
}

void Macad::Occt::TColgp_Array1OfDir2d::SetValue(int theIndex, Macad::Occt::Dir2d theItem)
{
	pin_ptr<Macad::Occt::Dir2d> pp_theItem = &theItem;
	((::TColgp_Array1OfDir2d*)_NativeInstance)->SetValue(theIndex, *(gp_Dir2d*)pp_theItem);
}

void Macad::Occt::TColgp_Array1OfDir2d::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColgp_Array1OfDir2d*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColgp_Array1OfLin2d
//---------------------------------------------------------------------

Macad::Occt::TColgp_Array1OfLin2d::TColgp_Array1OfLin2d()
	: BaseClass<::TColgp_Array1OfLin2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array1OfLin2d();
}

Macad::Occt::TColgp_Array1OfLin2d::TColgp_Array1OfLin2d(int theLower, int theUpper)
	: BaseClass<::TColgp_Array1OfLin2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array1OfLin2d(theLower, theUpper);
}

Macad::Occt::TColgp_Array1OfLin2d::TColgp_Array1OfLin2d(Macad::Occt::TColgp_Array1OfLin2d^ theOther)
	: BaseClass<::TColgp_Array1OfLin2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array1OfLin2d(*(::TColgp_Array1OfLin2d*)theOther->NativeInstance);
}

Macad::Occt::TColgp_Array1OfLin2d::TColgp_Array1OfLin2d(Macad::Occt::gp_Lin2d^ theBegin, int theLower, int theUpper)
	: BaseClass<::TColgp_Array1OfLin2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array1OfLin2d(*(::gp_Lin2d*)theBegin->NativeInstance, theLower, theUpper);
}

void Macad::Occt::TColgp_Array1OfLin2d::Init(Macad::Occt::gp_Lin2d^ theValue)
{
	((::TColgp_Array1OfLin2d*)_NativeInstance)->Init(*(::gp_Lin2d*)theValue->NativeInstance);
}

int Macad::Occt::TColgp_Array1OfLin2d::Size()
{
	return ((::TColgp_Array1OfLin2d*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_Array1OfLin2d::Length()
{
	return ((::TColgp_Array1OfLin2d*)_NativeInstance)->Length();
}

bool Macad::Occt::TColgp_Array1OfLin2d::IsEmpty()
{
	return ((::TColgp_Array1OfLin2d*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColgp_Array1OfLin2d::Lower()
{
	return ((::TColgp_Array1OfLin2d*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_Array1OfLin2d::Upper()
{
	return ((::TColgp_Array1OfLin2d*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_Array1OfLin2d::IsDeletable()
{
	return ((::TColgp_Array1OfLin2d*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColgp_Array1OfLin2d::IsAllocated()
{
	return ((::TColgp_Array1OfLin2d*)_NativeInstance)->IsAllocated();
}

Macad::Occt::TColgp_Array1OfLin2d^ Macad::Occt::TColgp_Array1OfLin2d::Assign(Macad::Occt::TColgp_Array1OfLin2d^ theOther)
{
	::TColgp_Array1OfLin2d* _result = new ::TColgp_Array1OfLin2d();
	*_result = ((::TColgp_Array1OfLin2d*)_NativeInstance)->Assign(*(::TColgp_Array1OfLin2d*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfLin2d(_result);
}

Macad::Occt::TColgp_Array1OfLin2d^ Macad::Occt::TColgp_Array1OfLin2d::Move(Macad::Occt::TColgp_Array1OfLin2d^ theOther)
{
	::TColgp_Array1OfLin2d* _result = new ::TColgp_Array1OfLin2d();
	*_result = ((::TColgp_Array1OfLin2d*)_NativeInstance)->Move(*(::TColgp_Array1OfLin2d*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfLin2d(_result);
}

Macad::Occt::gp_Lin2d^ Macad::Occt::TColgp_Array1OfLin2d::First()
{
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result =  (::gp_Lin2d)((::TColgp_Array1OfLin2d*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

Macad::Occt::gp_Lin2d^ Macad::Occt::TColgp_Array1OfLin2d::ChangeFirst()
{
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result = ((::TColgp_Array1OfLin2d*)_NativeInstance)->ChangeFirst();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

Macad::Occt::gp_Lin2d^ Macad::Occt::TColgp_Array1OfLin2d::Last()
{
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result =  (::gp_Lin2d)((::TColgp_Array1OfLin2d*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

Macad::Occt::gp_Lin2d^ Macad::Occt::TColgp_Array1OfLin2d::ChangeLast()
{
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result = ((::TColgp_Array1OfLin2d*)_NativeInstance)->ChangeLast();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

Macad::Occt::gp_Lin2d^ Macad::Occt::TColgp_Array1OfLin2d::Value(int theIndex)
{
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result =  (::gp_Lin2d)((::TColgp_Array1OfLin2d*)_NativeInstance)->Value(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

Macad::Occt::gp_Lin2d^ Macad::Occt::TColgp_Array1OfLin2d::ChangeValue(int theIndex)
{
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result = ((::TColgp_Array1OfLin2d*)_NativeInstance)->ChangeValue(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

void Macad::Occt::TColgp_Array1OfLin2d::SetValue(int theIndex, Macad::Occt::gp_Lin2d^ theItem)
{
	((::TColgp_Array1OfLin2d*)_NativeInstance)->SetValue(theIndex, *(::gp_Lin2d*)theItem->NativeInstance);
}

void Macad::Occt::TColgp_Array1OfLin2d::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColgp_Array1OfLin2d*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColgp_Array1OfPnt
//---------------------------------------------------------------------

Macad::Occt::TColgp_Array1OfPnt::TColgp_Array1OfPnt()
	: BaseClass<::TColgp_Array1OfPnt>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array1OfPnt();
}

Macad::Occt::TColgp_Array1OfPnt::TColgp_Array1OfPnt(int theLower, int theUpper)
	: BaseClass<::TColgp_Array1OfPnt>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array1OfPnt(theLower, theUpper);
}

Macad::Occt::TColgp_Array1OfPnt::TColgp_Array1OfPnt(Macad::Occt::TColgp_Array1OfPnt^ theOther)
	: BaseClass<::TColgp_Array1OfPnt>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array1OfPnt(*(::TColgp_Array1OfPnt*)theOther->NativeInstance);
}

Macad::Occt::TColgp_Array1OfPnt::TColgp_Array1OfPnt(Macad::Occt::Pnt theBegin, int theLower, int theUpper)
	: BaseClass<::TColgp_Array1OfPnt>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColgp_Array1OfPnt(*(gp_Pnt*)pp_theBegin, theLower, theUpper);
}

void Macad::Occt::TColgp_Array1OfPnt::Init(Macad::Occt::Pnt theValue)
{
	pin_ptr<Macad::Occt::Pnt> pp_theValue = &theValue;
	((::TColgp_Array1OfPnt*)_NativeInstance)->Init(*(gp_Pnt*)pp_theValue);
}

int Macad::Occt::TColgp_Array1OfPnt::Size()
{
	return ((::TColgp_Array1OfPnt*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_Array1OfPnt::Length()
{
	return ((::TColgp_Array1OfPnt*)_NativeInstance)->Length();
}

bool Macad::Occt::TColgp_Array1OfPnt::IsEmpty()
{
	return ((::TColgp_Array1OfPnt*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColgp_Array1OfPnt::Lower()
{
	return ((::TColgp_Array1OfPnt*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_Array1OfPnt::Upper()
{
	return ((::TColgp_Array1OfPnt*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_Array1OfPnt::IsDeletable()
{
	return ((::TColgp_Array1OfPnt*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColgp_Array1OfPnt::IsAllocated()
{
	return ((::TColgp_Array1OfPnt*)_NativeInstance)->IsAllocated();
}

Macad::Occt::TColgp_Array1OfPnt^ Macad::Occt::TColgp_Array1OfPnt::Assign(Macad::Occt::TColgp_Array1OfPnt^ theOther)
{
	::TColgp_Array1OfPnt* _result = new ::TColgp_Array1OfPnt();
	*_result = ((::TColgp_Array1OfPnt*)_NativeInstance)->Assign(*(::TColgp_Array1OfPnt*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfPnt(_result);
}

Macad::Occt::TColgp_Array1OfPnt^ Macad::Occt::TColgp_Array1OfPnt::Move(Macad::Occt::TColgp_Array1OfPnt^ theOther)
{
	::TColgp_Array1OfPnt* _result = new ::TColgp_Array1OfPnt();
	*_result = ((::TColgp_Array1OfPnt*)_NativeInstance)->Move(*(::TColgp_Array1OfPnt*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfPnt(_result);
}

Macad::Occt::Pnt Macad::Occt::TColgp_Array1OfPnt::First()
{
	return Macad::Occt::Pnt(((::TColgp_Array1OfPnt*)_NativeInstance)->First());
}

Macad::Occt::Pnt Macad::Occt::TColgp_Array1OfPnt::ChangeFirst()
{
	return Macad::Occt::Pnt(((::TColgp_Array1OfPnt*)_NativeInstance)->ChangeFirst());
}

Macad::Occt::Pnt Macad::Occt::TColgp_Array1OfPnt::Last()
{
	return Macad::Occt::Pnt(((::TColgp_Array1OfPnt*)_NativeInstance)->Last());
}

Macad::Occt::Pnt Macad::Occt::TColgp_Array1OfPnt::ChangeLast()
{
	return Macad::Occt::Pnt(((::TColgp_Array1OfPnt*)_NativeInstance)->ChangeLast());
}

Macad::Occt::Pnt Macad::Occt::TColgp_Array1OfPnt::Value(int theIndex)
{
	return Macad::Occt::Pnt(((::TColgp_Array1OfPnt*)_NativeInstance)->Value(theIndex));
}

Macad::Occt::Pnt Macad::Occt::TColgp_Array1OfPnt::ChangeValue(int theIndex)
{
	return Macad::Occt::Pnt(((::TColgp_Array1OfPnt*)_NativeInstance)->ChangeValue(theIndex));
}

void Macad::Occt::TColgp_Array1OfPnt::SetValue(int theIndex, Macad::Occt::Pnt theItem)
{
	pin_ptr<Macad::Occt::Pnt> pp_theItem = &theItem;
	((::TColgp_Array1OfPnt*)_NativeInstance)->SetValue(theIndex, *(gp_Pnt*)pp_theItem);
}

void Macad::Occt::TColgp_Array1OfPnt::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColgp_Array1OfPnt*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColgp_Array1OfPnt2d
//---------------------------------------------------------------------

Macad::Occt::TColgp_Array1OfPnt2d::TColgp_Array1OfPnt2d()
	: BaseClass<::TColgp_Array1OfPnt2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array1OfPnt2d();
}

Macad::Occt::TColgp_Array1OfPnt2d::TColgp_Array1OfPnt2d(int theLower, int theUpper)
	: BaseClass<::TColgp_Array1OfPnt2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array1OfPnt2d(theLower, theUpper);
}

Macad::Occt::TColgp_Array1OfPnt2d::TColgp_Array1OfPnt2d(Macad::Occt::TColgp_Array1OfPnt2d^ theOther)
	: BaseClass<::TColgp_Array1OfPnt2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array1OfPnt2d(*(::TColgp_Array1OfPnt2d*)theOther->NativeInstance);
}

Macad::Occt::TColgp_Array1OfPnt2d::TColgp_Array1OfPnt2d(Macad::Occt::Pnt2d theBegin, int theLower, int theUpper)
	: BaseClass<::TColgp_Array1OfPnt2d>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColgp_Array1OfPnt2d(*(gp_Pnt2d*)pp_theBegin, theLower, theUpper);
}

void Macad::Occt::TColgp_Array1OfPnt2d::Init(Macad::Occt::Pnt2d theValue)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_theValue = &theValue;
	((::TColgp_Array1OfPnt2d*)_NativeInstance)->Init(*(gp_Pnt2d*)pp_theValue);
}

int Macad::Occt::TColgp_Array1OfPnt2d::Size()
{
	return ((::TColgp_Array1OfPnt2d*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_Array1OfPnt2d::Length()
{
	return ((::TColgp_Array1OfPnt2d*)_NativeInstance)->Length();
}

bool Macad::Occt::TColgp_Array1OfPnt2d::IsEmpty()
{
	return ((::TColgp_Array1OfPnt2d*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColgp_Array1OfPnt2d::Lower()
{
	return ((::TColgp_Array1OfPnt2d*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_Array1OfPnt2d::Upper()
{
	return ((::TColgp_Array1OfPnt2d*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_Array1OfPnt2d::IsDeletable()
{
	return ((::TColgp_Array1OfPnt2d*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColgp_Array1OfPnt2d::IsAllocated()
{
	return ((::TColgp_Array1OfPnt2d*)_NativeInstance)->IsAllocated();
}

Macad::Occt::TColgp_Array1OfPnt2d^ Macad::Occt::TColgp_Array1OfPnt2d::Assign(Macad::Occt::TColgp_Array1OfPnt2d^ theOther)
{
	::TColgp_Array1OfPnt2d* _result = new ::TColgp_Array1OfPnt2d();
	*_result = ((::TColgp_Array1OfPnt2d*)_NativeInstance)->Assign(*(::TColgp_Array1OfPnt2d*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfPnt2d(_result);
}

Macad::Occt::TColgp_Array1OfPnt2d^ Macad::Occt::TColgp_Array1OfPnt2d::Move(Macad::Occt::TColgp_Array1OfPnt2d^ theOther)
{
	::TColgp_Array1OfPnt2d* _result = new ::TColgp_Array1OfPnt2d();
	*_result = ((::TColgp_Array1OfPnt2d*)_NativeInstance)->Move(*(::TColgp_Array1OfPnt2d*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfPnt2d(_result);
}

Macad::Occt::Pnt2d Macad::Occt::TColgp_Array1OfPnt2d::First()
{
	return Macad::Occt::Pnt2d(((::TColgp_Array1OfPnt2d*)_NativeInstance)->First());
}

Macad::Occt::Pnt2d Macad::Occt::TColgp_Array1OfPnt2d::ChangeFirst()
{
	return Macad::Occt::Pnt2d(((::TColgp_Array1OfPnt2d*)_NativeInstance)->ChangeFirst());
}

Macad::Occt::Pnt2d Macad::Occt::TColgp_Array1OfPnt2d::Last()
{
	return Macad::Occt::Pnt2d(((::TColgp_Array1OfPnt2d*)_NativeInstance)->Last());
}

Macad::Occt::Pnt2d Macad::Occt::TColgp_Array1OfPnt2d::ChangeLast()
{
	return Macad::Occt::Pnt2d(((::TColgp_Array1OfPnt2d*)_NativeInstance)->ChangeLast());
}

Macad::Occt::Pnt2d Macad::Occt::TColgp_Array1OfPnt2d::Value(int theIndex)
{
	return Macad::Occt::Pnt2d(((::TColgp_Array1OfPnt2d*)_NativeInstance)->Value(theIndex));
}

Macad::Occt::Pnt2d Macad::Occt::TColgp_Array1OfPnt2d::ChangeValue(int theIndex)
{
	return Macad::Occt::Pnt2d(((::TColgp_Array1OfPnt2d*)_NativeInstance)->ChangeValue(theIndex));
}

void Macad::Occt::TColgp_Array1OfPnt2d::SetValue(int theIndex, Macad::Occt::Pnt2d theItem)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_theItem = &theItem;
	((::TColgp_Array1OfPnt2d*)_NativeInstance)->SetValue(theIndex, *(gp_Pnt2d*)pp_theItem);
}

void Macad::Occt::TColgp_Array1OfPnt2d::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColgp_Array1OfPnt2d*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColgp_Array1OfVec
//---------------------------------------------------------------------

Macad::Occt::TColgp_Array1OfVec::TColgp_Array1OfVec()
	: BaseClass<::TColgp_Array1OfVec>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array1OfVec();
}

Macad::Occt::TColgp_Array1OfVec::TColgp_Array1OfVec(int theLower, int theUpper)
	: BaseClass<::TColgp_Array1OfVec>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array1OfVec(theLower, theUpper);
}

Macad::Occt::TColgp_Array1OfVec::TColgp_Array1OfVec(Macad::Occt::TColgp_Array1OfVec^ theOther)
	: BaseClass<::TColgp_Array1OfVec>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array1OfVec(*(::TColgp_Array1OfVec*)theOther->NativeInstance);
}

Macad::Occt::TColgp_Array1OfVec::TColgp_Array1OfVec(Macad::Occt::Vec theBegin, int theLower, int theUpper)
	: BaseClass<::TColgp_Array1OfVec>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Vec> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColgp_Array1OfVec(*(gp_Vec*)pp_theBegin, theLower, theUpper);
}

void Macad::Occt::TColgp_Array1OfVec::Init(Macad::Occt::Vec theValue)
{
	pin_ptr<Macad::Occt::Vec> pp_theValue = &theValue;
	((::TColgp_Array1OfVec*)_NativeInstance)->Init(*(gp_Vec*)pp_theValue);
}

int Macad::Occt::TColgp_Array1OfVec::Size()
{
	return ((::TColgp_Array1OfVec*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_Array1OfVec::Length()
{
	return ((::TColgp_Array1OfVec*)_NativeInstance)->Length();
}

bool Macad::Occt::TColgp_Array1OfVec::IsEmpty()
{
	return ((::TColgp_Array1OfVec*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColgp_Array1OfVec::Lower()
{
	return ((::TColgp_Array1OfVec*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_Array1OfVec::Upper()
{
	return ((::TColgp_Array1OfVec*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_Array1OfVec::IsDeletable()
{
	return ((::TColgp_Array1OfVec*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColgp_Array1OfVec::IsAllocated()
{
	return ((::TColgp_Array1OfVec*)_NativeInstance)->IsAllocated();
}

Macad::Occt::TColgp_Array1OfVec^ Macad::Occt::TColgp_Array1OfVec::Assign(Macad::Occt::TColgp_Array1OfVec^ theOther)
{
	::TColgp_Array1OfVec* _result = new ::TColgp_Array1OfVec();
	*_result = ((::TColgp_Array1OfVec*)_NativeInstance)->Assign(*(::TColgp_Array1OfVec*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfVec(_result);
}

Macad::Occt::TColgp_Array1OfVec^ Macad::Occt::TColgp_Array1OfVec::Move(Macad::Occt::TColgp_Array1OfVec^ theOther)
{
	::TColgp_Array1OfVec* _result = new ::TColgp_Array1OfVec();
	*_result = ((::TColgp_Array1OfVec*)_NativeInstance)->Move(*(::TColgp_Array1OfVec*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfVec(_result);
}

Macad::Occt::Vec Macad::Occt::TColgp_Array1OfVec::First()
{
	return Macad::Occt::Vec(((::TColgp_Array1OfVec*)_NativeInstance)->First());
}

Macad::Occt::Vec Macad::Occt::TColgp_Array1OfVec::ChangeFirst()
{
	return Macad::Occt::Vec(((::TColgp_Array1OfVec*)_NativeInstance)->ChangeFirst());
}

Macad::Occt::Vec Macad::Occt::TColgp_Array1OfVec::Last()
{
	return Macad::Occt::Vec(((::TColgp_Array1OfVec*)_NativeInstance)->Last());
}

Macad::Occt::Vec Macad::Occt::TColgp_Array1OfVec::ChangeLast()
{
	return Macad::Occt::Vec(((::TColgp_Array1OfVec*)_NativeInstance)->ChangeLast());
}

Macad::Occt::Vec Macad::Occt::TColgp_Array1OfVec::Value(int theIndex)
{
	return Macad::Occt::Vec(((::TColgp_Array1OfVec*)_NativeInstance)->Value(theIndex));
}

Macad::Occt::Vec Macad::Occt::TColgp_Array1OfVec::ChangeValue(int theIndex)
{
	return Macad::Occt::Vec(((::TColgp_Array1OfVec*)_NativeInstance)->ChangeValue(theIndex));
}

void Macad::Occt::TColgp_Array1OfVec::SetValue(int theIndex, Macad::Occt::Vec theItem)
{
	pin_ptr<Macad::Occt::Vec> pp_theItem = &theItem;
	((::TColgp_Array1OfVec*)_NativeInstance)->SetValue(theIndex, *(gp_Vec*)pp_theItem);
}

void Macad::Occt::TColgp_Array1OfVec::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColgp_Array1OfVec*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColgp_Array1OfVec2d
//---------------------------------------------------------------------

Macad::Occt::TColgp_Array1OfVec2d::TColgp_Array1OfVec2d()
	: BaseClass<::TColgp_Array1OfVec2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array1OfVec2d();
}

Macad::Occt::TColgp_Array1OfVec2d::TColgp_Array1OfVec2d(int theLower, int theUpper)
	: BaseClass<::TColgp_Array1OfVec2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array1OfVec2d(theLower, theUpper);
}

Macad::Occt::TColgp_Array1OfVec2d::TColgp_Array1OfVec2d(Macad::Occt::TColgp_Array1OfVec2d^ theOther)
	: BaseClass<::TColgp_Array1OfVec2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array1OfVec2d(*(::TColgp_Array1OfVec2d*)theOther->NativeInstance);
}

Macad::Occt::TColgp_Array1OfVec2d::TColgp_Array1OfVec2d(Macad::Occt::Vec2d theBegin, int theLower, int theUpper)
	: BaseClass<::TColgp_Array1OfVec2d>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Vec2d> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColgp_Array1OfVec2d(*(gp_Vec2d*)pp_theBegin, theLower, theUpper);
}

void Macad::Occt::TColgp_Array1OfVec2d::Init(Macad::Occt::Vec2d theValue)
{
	pin_ptr<Macad::Occt::Vec2d> pp_theValue = &theValue;
	((::TColgp_Array1OfVec2d*)_NativeInstance)->Init(*(gp_Vec2d*)pp_theValue);
}

int Macad::Occt::TColgp_Array1OfVec2d::Size()
{
	return ((::TColgp_Array1OfVec2d*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_Array1OfVec2d::Length()
{
	return ((::TColgp_Array1OfVec2d*)_NativeInstance)->Length();
}

bool Macad::Occt::TColgp_Array1OfVec2d::IsEmpty()
{
	return ((::TColgp_Array1OfVec2d*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColgp_Array1OfVec2d::Lower()
{
	return ((::TColgp_Array1OfVec2d*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_Array1OfVec2d::Upper()
{
	return ((::TColgp_Array1OfVec2d*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_Array1OfVec2d::IsDeletable()
{
	return ((::TColgp_Array1OfVec2d*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColgp_Array1OfVec2d::IsAllocated()
{
	return ((::TColgp_Array1OfVec2d*)_NativeInstance)->IsAllocated();
}

Macad::Occt::TColgp_Array1OfVec2d^ Macad::Occt::TColgp_Array1OfVec2d::Assign(Macad::Occt::TColgp_Array1OfVec2d^ theOther)
{
	::TColgp_Array1OfVec2d* _result = new ::TColgp_Array1OfVec2d();
	*_result = ((::TColgp_Array1OfVec2d*)_NativeInstance)->Assign(*(::TColgp_Array1OfVec2d*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfVec2d(_result);
}

Macad::Occt::TColgp_Array1OfVec2d^ Macad::Occt::TColgp_Array1OfVec2d::Move(Macad::Occt::TColgp_Array1OfVec2d^ theOther)
{
	::TColgp_Array1OfVec2d* _result = new ::TColgp_Array1OfVec2d();
	*_result = ((::TColgp_Array1OfVec2d*)_NativeInstance)->Move(*(::TColgp_Array1OfVec2d*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfVec2d(_result);
}

Macad::Occt::Vec2d Macad::Occt::TColgp_Array1OfVec2d::First()
{
	return Macad::Occt::Vec2d(((::TColgp_Array1OfVec2d*)_NativeInstance)->First());
}

Macad::Occt::Vec2d Macad::Occt::TColgp_Array1OfVec2d::ChangeFirst()
{
	return Macad::Occt::Vec2d(((::TColgp_Array1OfVec2d*)_NativeInstance)->ChangeFirst());
}

Macad::Occt::Vec2d Macad::Occt::TColgp_Array1OfVec2d::Last()
{
	return Macad::Occt::Vec2d(((::TColgp_Array1OfVec2d*)_NativeInstance)->Last());
}

Macad::Occt::Vec2d Macad::Occt::TColgp_Array1OfVec2d::ChangeLast()
{
	return Macad::Occt::Vec2d(((::TColgp_Array1OfVec2d*)_NativeInstance)->ChangeLast());
}

Macad::Occt::Vec2d Macad::Occt::TColgp_Array1OfVec2d::Value(int theIndex)
{
	return Macad::Occt::Vec2d(((::TColgp_Array1OfVec2d*)_NativeInstance)->Value(theIndex));
}

Macad::Occt::Vec2d Macad::Occt::TColgp_Array1OfVec2d::ChangeValue(int theIndex)
{
	return Macad::Occt::Vec2d(((::TColgp_Array1OfVec2d*)_NativeInstance)->ChangeValue(theIndex));
}

void Macad::Occt::TColgp_Array1OfVec2d::SetValue(int theIndex, Macad::Occt::Vec2d theItem)
{
	pin_ptr<Macad::Occt::Vec2d> pp_theItem = &theItem;
	((::TColgp_Array1OfVec2d*)_NativeInstance)->SetValue(theIndex, *(gp_Vec2d*)pp_theItem);
}

void Macad::Occt::TColgp_Array1OfVec2d::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColgp_Array1OfVec2d*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColgp_Array1OfXY
//---------------------------------------------------------------------

Macad::Occt::TColgp_Array1OfXY::TColgp_Array1OfXY()
	: BaseClass<::TColgp_Array1OfXY>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array1OfXY();
}

Macad::Occt::TColgp_Array1OfXY::TColgp_Array1OfXY(int theLower, int theUpper)
	: BaseClass<::TColgp_Array1OfXY>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array1OfXY(theLower, theUpper);
}

Macad::Occt::TColgp_Array1OfXY::TColgp_Array1OfXY(Macad::Occt::TColgp_Array1OfXY^ theOther)
	: BaseClass<::TColgp_Array1OfXY>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array1OfXY(*(::TColgp_Array1OfXY*)theOther->NativeInstance);
}

Macad::Occt::TColgp_Array1OfXY::TColgp_Array1OfXY(Macad::Occt::XY theBegin, int theLower, int theUpper)
	: BaseClass<::TColgp_Array1OfXY>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::XY> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColgp_Array1OfXY(*(gp_XY*)pp_theBegin, theLower, theUpper);
}

void Macad::Occt::TColgp_Array1OfXY::Init(Macad::Occt::XY theValue)
{
	pin_ptr<Macad::Occt::XY> pp_theValue = &theValue;
	((::TColgp_Array1OfXY*)_NativeInstance)->Init(*(gp_XY*)pp_theValue);
}

int Macad::Occt::TColgp_Array1OfXY::Size()
{
	return ((::TColgp_Array1OfXY*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_Array1OfXY::Length()
{
	return ((::TColgp_Array1OfXY*)_NativeInstance)->Length();
}

bool Macad::Occt::TColgp_Array1OfXY::IsEmpty()
{
	return ((::TColgp_Array1OfXY*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColgp_Array1OfXY::Lower()
{
	return ((::TColgp_Array1OfXY*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_Array1OfXY::Upper()
{
	return ((::TColgp_Array1OfXY*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_Array1OfXY::IsDeletable()
{
	return ((::TColgp_Array1OfXY*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColgp_Array1OfXY::IsAllocated()
{
	return ((::TColgp_Array1OfXY*)_NativeInstance)->IsAllocated();
}

Macad::Occt::TColgp_Array1OfXY^ Macad::Occt::TColgp_Array1OfXY::Assign(Macad::Occt::TColgp_Array1OfXY^ theOther)
{
	::TColgp_Array1OfXY* _result = new ::TColgp_Array1OfXY();
	*_result = ((::TColgp_Array1OfXY*)_NativeInstance)->Assign(*(::TColgp_Array1OfXY*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfXY(_result);
}

Macad::Occt::TColgp_Array1OfXY^ Macad::Occt::TColgp_Array1OfXY::Move(Macad::Occt::TColgp_Array1OfXY^ theOther)
{
	::TColgp_Array1OfXY* _result = new ::TColgp_Array1OfXY();
	*_result = ((::TColgp_Array1OfXY*)_NativeInstance)->Move(*(::TColgp_Array1OfXY*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfXY(_result);
}

Macad::Occt::XY Macad::Occt::TColgp_Array1OfXY::First()
{
	return Macad::Occt::XY(((::TColgp_Array1OfXY*)_NativeInstance)->First());
}

Macad::Occt::XY Macad::Occt::TColgp_Array1OfXY::ChangeFirst()
{
	return Macad::Occt::XY(((::TColgp_Array1OfXY*)_NativeInstance)->ChangeFirst());
}

Macad::Occt::XY Macad::Occt::TColgp_Array1OfXY::Last()
{
	return Macad::Occt::XY(((::TColgp_Array1OfXY*)_NativeInstance)->Last());
}

Macad::Occt::XY Macad::Occt::TColgp_Array1OfXY::ChangeLast()
{
	return Macad::Occt::XY(((::TColgp_Array1OfXY*)_NativeInstance)->ChangeLast());
}

Macad::Occt::XY Macad::Occt::TColgp_Array1OfXY::Value(int theIndex)
{
	return Macad::Occt::XY(((::TColgp_Array1OfXY*)_NativeInstance)->Value(theIndex));
}

Macad::Occt::XY Macad::Occt::TColgp_Array1OfXY::ChangeValue(int theIndex)
{
	return Macad::Occt::XY(((::TColgp_Array1OfXY*)_NativeInstance)->ChangeValue(theIndex));
}

void Macad::Occt::TColgp_Array1OfXY::SetValue(int theIndex, Macad::Occt::XY theItem)
{
	pin_ptr<Macad::Occt::XY> pp_theItem = &theItem;
	((::TColgp_Array1OfXY*)_NativeInstance)->SetValue(theIndex, *(gp_XY*)pp_theItem);
}

void Macad::Occt::TColgp_Array1OfXY::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColgp_Array1OfXY*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColgp_Array1OfXYZ
//---------------------------------------------------------------------

Macad::Occt::TColgp_Array1OfXYZ::TColgp_Array1OfXYZ()
	: BaseClass<::TColgp_Array1OfXYZ>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array1OfXYZ();
}

Macad::Occt::TColgp_Array1OfXYZ::TColgp_Array1OfXYZ(int theLower, int theUpper)
	: BaseClass<::TColgp_Array1OfXYZ>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array1OfXYZ(theLower, theUpper);
}

Macad::Occt::TColgp_Array1OfXYZ::TColgp_Array1OfXYZ(Macad::Occt::TColgp_Array1OfXYZ^ theOther)
	: BaseClass<::TColgp_Array1OfXYZ>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array1OfXYZ(*(::TColgp_Array1OfXYZ*)theOther->NativeInstance);
}

Macad::Occt::TColgp_Array1OfXYZ::TColgp_Array1OfXYZ(Macad::Occt::XYZ theBegin, int theLower, int theUpper)
	: BaseClass<::TColgp_Array1OfXYZ>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::XYZ> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColgp_Array1OfXYZ(*(gp_XYZ*)pp_theBegin, theLower, theUpper);
}

void Macad::Occt::TColgp_Array1OfXYZ::Init(Macad::Occt::XYZ theValue)
{
	pin_ptr<Macad::Occt::XYZ> pp_theValue = &theValue;
	((::TColgp_Array1OfXYZ*)_NativeInstance)->Init(*(gp_XYZ*)pp_theValue);
}

int Macad::Occt::TColgp_Array1OfXYZ::Size()
{
	return ((::TColgp_Array1OfXYZ*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_Array1OfXYZ::Length()
{
	return ((::TColgp_Array1OfXYZ*)_NativeInstance)->Length();
}

bool Macad::Occt::TColgp_Array1OfXYZ::IsEmpty()
{
	return ((::TColgp_Array1OfXYZ*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColgp_Array1OfXYZ::Lower()
{
	return ((::TColgp_Array1OfXYZ*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_Array1OfXYZ::Upper()
{
	return ((::TColgp_Array1OfXYZ*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_Array1OfXYZ::IsDeletable()
{
	return ((::TColgp_Array1OfXYZ*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColgp_Array1OfXYZ::IsAllocated()
{
	return ((::TColgp_Array1OfXYZ*)_NativeInstance)->IsAllocated();
}

Macad::Occt::TColgp_Array1OfXYZ^ Macad::Occt::TColgp_Array1OfXYZ::Assign(Macad::Occt::TColgp_Array1OfXYZ^ theOther)
{
	::TColgp_Array1OfXYZ* _result = new ::TColgp_Array1OfXYZ();
	*_result = ((::TColgp_Array1OfXYZ*)_NativeInstance)->Assign(*(::TColgp_Array1OfXYZ*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfXYZ(_result);
}

Macad::Occt::TColgp_Array1OfXYZ^ Macad::Occt::TColgp_Array1OfXYZ::Move(Macad::Occt::TColgp_Array1OfXYZ^ theOther)
{
	::TColgp_Array1OfXYZ* _result = new ::TColgp_Array1OfXYZ();
	*_result = ((::TColgp_Array1OfXYZ*)_NativeInstance)->Move(*(::TColgp_Array1OfXYZ*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfXYZ(_result);
}

Macad::Occt::XYZ Macad::Occt::TColgp_Array1OfXYZ::First()
{
	return Macad::Occt::XYZ(((::TColgp_Array1OfXYZ*)_NativeInstance)->First());
}

Macad::Occt::XYZ Macad::Occt::TColgp_Array1OfXYZ::ChangeFirst()
{
	return Macad::Occt::XYZ(((::TColgp_Array1OfXYZ*)_NativeInstance)->ChangeFirst());
}

Macad::Occt::XYZ Macad::Occt::TColgp_Array1OfXYZ::Last()
{
	return Macad::Occt::XYZ(((::TColgp_Array1OfXYZ*)_NativeInstance)->Last());
}

Macad::Occt::XYZ Macad::Occt::TColgp_Array1OfXYZ::ChangeLast()
{
	return Macad::Occt::XYZ(((::TColgp_Array1OfXYZ*)_NativeInstance)->ChangeLast());
}

Macad::Occt::XYZ Macad::Occt::TColgp_Array1OfXYZ::Value(int theIndex)
{
	return Macad::Occt::XYZ(((::TColgp_Array1OfXYZ*)_NativeInstance)->Value(theIndex));
}

Macad::Occt::XYZ Macad::Occt::TColgp_Array1OfXYZ::ChangeValue(int theIndex)
{
	return Macad::Occt::XYZ(((::TColgp_Array1OfXYZ*)_NativeInstance)->ChangeValue(theIndex));
}

void Macad::Occt::TColgp_Array1OfXYZ::SetValue(int theIndex, Macad::Occt::XYZ theItem)
{
	pin_ptr<Macad::Occt::XYZ> pp_theItem = &theItem;
	((::TColgp_Array1OfXYZ*)_NativeInstance)->SetValue(theIndex, *(gp_XYZ*)pp_theItem);
}

void Macad::Occt::TColgp_Array1OfXYZ::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColgp_Array1OfXYZ*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColgp_Array2OfCirc2d
//---------------------------------------------------------------------

Macad::Occt::TColgp_Array2OfCirc2d::TColgp_Array2OfCirc2d()
	: BaseClass<::TColgp_Array2OfCirc2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array2OfCirc2d();
}

Macad::Occt::TColgp_Array2OfCirc2d::TColgp_Array2OfCirc2d(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TColgp_Array2OfCirc2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array2OfCirc2d(theRowLower, theRowUpper, theColLower, theColUpper);
}

Macad::Occt::TColgp_Array2OfCirc2d::TColgp_Array2OfCirc2d(Macad::Occt::TColgp_Array2OfCirc2d^ theOther)
	: BaseClass<::TColgp_Array2OfCirc2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array2OfCirc2d(*(::TColgp_Array2OfCirc2d*)theOther->NativeInstance);
}

Macad::Occt::TColgp_Array2OfCirc2d::TColgp_Array2OfCirc2d(Macad::Occt::gp_Circ2d^ theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TColgp_Array2OfCirc2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array2OfCirc2d(*(::gp_Circ2d*)theBegin->NativeInstance, theRowLower, theRowUpper, theColLower, theColUpper);
}

void Macad::Occt::TColgp_Array2OfCirc2d::Init(Macad::Occt::gp_Circ2d^ theValue)
{
	((::TColgp_Array2OfCirc2d*)_NativeInstance)->Init(*(::gp_Circ2d*)theValue->NativeInstance);
}

int Macad::Occt::TColgp_Array2OfCirc2d::Size()
{
	return ((::TColgp_Array2OfCirc2d*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_Array2OfCirc2d::Length()
{
	return ((::TColgp_Array2OfCirc2d*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_Array2OfCirc2d::NbRows()
{
	return ((::TColgp_Array2OfCirc2d*)_NativeInstance)->NbRows();
}

int Macad::Occt::TColgp_Array2OfCirc2d::NbColumns()
{
	return ((::TColgp_Array2OfCirc2d*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TColgp_Array2OfCirc2d::RowLength()
{
	return ((::TColgp_Array2OfCirc2d*)_NativeInstance)->RowLength();
}

int Macad::Occt::TColgp_Array2OfCirc2d::ColLength()
{
	return ((::TColgp_Array2OfCirc2d*)_NativeInstance)->ColLength();
}

int Macad::Occt::TColgp_Array2OfCirc2d::LowerRow()
{
	return ((::TColgp_Array2OfCirc2d*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TColgp_Array2OfCirc2d::UpperRow()
{
	return ((::TColgp_Array2OfCirc2d*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TColgp_Array2OfCirc2d::LowerCol()
{
	return ((::TColgp_Array2OfCirc2d*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TColgp_Array2OfCirc2d::UpperCol()
{
	return ((::TColgp_Array2OfCirc2d*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TColgp_Array2OfCirc2d::IsDeletable()
{
	return ((::TColgp_Array2OfCirc2d*)_NativeInstance)->IsDeletable();
}

Macad::Occt::TColgp_Array2OfCirc2d^ Macad::Occt::TColgp_Array2OfCirc2d::Assign(Macad::Occt::TColgp_Array2OfCirc2d^ theOther)
{
	::TColgp_Array2OfCirc2d* _result = new ::TColgp_Array2OfCirc2d();
	*_result = ((::TColgp_Array2OfCirc2d*)_NativeInstance)->Assign(*(::TColgp_Array2OfCirc2d*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfCirc2d(_result);
}

Macad::Occt::TColgp_Array2OfCirc2d^ Macad::Occt::TColgp_Array2OfCirc2d::Move(Macad::Occt::TColgp_Array2OfCirc2d^ theOther)
{
	::TColgp_Array2OfCirc2d* _result = new ::TColgp_Array2OfCirc2d();
	*_result = ((::TColgp_Array2OfCirc2d*)_NativeInstance)->Move(*(::TColgp_Array2OfCirc2d*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfCirc2d(_result);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::TColgp_Array2OfCirc2d::Value(int theRow, int theCol)
{
	::gp_Circ2d* _result = new ::gp_Circ2d();
	*_result =  (::gp_Circ2d)((::TColgp_Array2OfCirc2d*)_NativeInstance)->Value(theRow, theCol);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::TColgp_Array2OfCirc2d::ChangeValue(int theRow, int theCol)
{
	::gp_Circ2d* _result = new ::gp_Circ2d();
	*_result = ((::TColgp_Array2OfCirc2d*)_NativeInstance)->ChangeValue(theRow, theCol);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

void Macad::Occt::TColgp_Array2OfCirc2d::SetValue(int theRow, int theCol, Macad::Occt::gp_Circ2d^ theItem)
{
	((::TColgp_Array2OfCirc2d*)_NativeInstance)->SetValue(theRow, theCol, *(::gp_Circ2d*)theItem->NativeInstance);
}

void Macad::Occt::TColgp_Array2OfCirc2d::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColgp_Array2OfCirc2d*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColgp_Array2OfDir
//---------------------------------------------------------------------

Macad::Occt::TColgp_Array2OfDir::TColgp_Array2OfDir()
	: BaseClass<::TColgp_Array2OfDir>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array2OfDir();
}

Macad::Occt::TColgp_Array2OfDir::TColgp_Array2OfDir(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TColgp_Array2OfDir>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array2OfDir(theRowLower, theRowUpper, theColLower, theColUpper);
}

Macad::Occt::TColgp_Array2OfDir::TColgp_Array2OfDir(Macad::Occt::TColgp_Array2OfDir^ theOther)
	: BaseClass<::TColgp_Array2OfDir>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array2OfDir(*(::TColgp_Array2OfDir*)theOther->NativeInstance);
}

Macad::Occt::TColgp_Array2OfDir::TColgp_Array2OfDir(Macad::Occt::Dir theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TColgp_Array2OfDir>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Dir> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColgp_Array2OfDir(*(gp_Dir*)pp_theBegin, theRowLower, theRowUpper, theColLower, theColUpper);
}

void Macad::Occt::TColgp_Array2OfDir::Init(Macad::Occt::Dir theValue)
{
	pin_ptr<Macad::Occt::Dir> pp_theValue = &theValue;
	((::TColgp_Array2OfDir*)_NativeInstance)->Init(*(gp_Dir*)pp_theValue);
}

int Macad::Occt::TColgp_Array2OfDir::Size()
{
	return ((::TColgp_Array2OfDir*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_Array2OfDir::Length()
{
	return ((::TColgp_Array2OfDir*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_Array2OfDir::NbRows()
{
	return ((::TColgp_Array2OfDir*)_NativeInstance)->NbRows();
}

int Macad::Occt::TColgp_Array2OfDir::NbColumns()
{
	return ((::TColgp_Array2OfDir*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TColgp_Array2OfDir::RowLength()
{
	return ((::TColgp_Array2OfDir*)_NativeInstance)->RowLength();
}

int Macad::Occt::TColgp_Array2OfDir::ColLength()
{
	return ((::TColgp_Array2OfDir*)_NativeInstance)->ColLength();
}

int Macad::Occt::TColgp_Array2OfDir::LowerRow()
{
	return ((::TColgp_Array2OfDir*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TColgp_Array2OfDir::UpperRow()
{
	return ((::TColgp_Array2OfDir*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TColgp_Array2OfDir::LowerCol()
{
	return ((::TColgp_Array2OfDir*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TColgp_Array2OfDir::UpperCol()
{
	return ((::TColgp_Array2OfDir*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TColgp_Array2OfDir::IsDeletable()
{
	return ((::TColgp_Array2OfDir*)_NativeInstance)->IsDeletable();
}

Macad::Occt::TColgp_Array2OfDir^ Macad::Occt::TColgp_Array2OfDir::Assign(Macad::Occt::TColgp_Array2OfDir^ theOther)
{
	::TColgp_Array2OfDir* _result = new ::TColgp_Array2OfDir();
	*_result = ((::TColgp_Array2OfDir*)_NativeInstance)->Assign(*(::TColgp_Array2OfDir*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfDir(_result);
}

Macad::Occt::TColgp_Array2OfDir^ Macad::Occt::TColgp_Array2OfDir::Move(Macad::Occt::TColgp_Array2OfDir^ theOther)
{
	::TColgp_Array2OfDir* _result = new ::TColgp_Array2OfDir();
	*_result = ((::TColgp_Array2OfDir*)_NativeInstance)->Move(*(::TColgp_Array2OfDir*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfDir(_result);
}

Macad::Occt::Dir Macad::Occt::TColgp_Array2OfDir::Value(int theRow, int theCol)
{
	return Macad::Occt::Dir(((::TColgp_Array2OfDir*)_NativeInstance)->Value(theRow, theCol));
}

Macad::Occt::Dir Macad::Occt::TColgp_Array2OfDir::ChangeValue(int theRow, int theCol)
{
	return Macad::Occt::Dir(((::TColgp_Array2OfDir*)_NativeInstance)->ChangeValue(theRow, theCol));
}

void Macad::Occt::TColgp_Array2OfDir::SetValue(int theRow, int theCol, Macad::Occt::Dir theItem)
{
	pin_ptr<Macad::Occt::Dir> pp_theItem = &theItem;
	((::TColgp_Array2OfDir*)_NativeInstance)->SetValue(theRow, theCol, *(gp_Dir*)pp_theItem);
}

void Macad::Occt::TColgp_Array2OfDir::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColgp_Array2OfDir*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColgp_Array2OfDir2d
//---------------------------------------------------------------------

Macad::Occt::TColgp_Array2OfDir2d::TColgp_Array2OfDir2d()
	: BaseClass<::TColgp_Array2OfDir2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array2OfDir2d();
}

Macad::Occt::TColgp_Array2OfDir2d::TColgp_Array2OfDir2d(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TColgp_Array2OfDir2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array2OfDir2d(theRowLower, theRowUpper, theColLower, theColUpper);
}

Macad::Occt::TColgp_Array2OfDir2d::TColgp_Array2OfDir2d(Macad::Occt::TColgp_Array2OfDir2d^ theOther)
	: BaseClass<::TColgp_Array2OfDir2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array2OfDir2d(*(::TColgp_Array2OfDir2d*)theOther->NativeInstance);
}

Macad::Occt::TColgp_Array2OfDir2d::TColgp_Array2OfDir2d(Macad::Occt::Dir2d theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TColgp_Array2OfDir2d>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Dir2d> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColgp_Array2OfDir2d(*(gp_Dir2d*)pp_theBegin, theRowLower, theRowUpper, theColLower, theColUpper);
}

void Macad::Occt::TColgp_Array2OfDir2d::Init(Macad::Occt::Dir2d theValue)
{
	pin_ptr<Macad::Occt::Dir2d> pp_theValue = &theValue;
	((::TColgp_Array2OfDir2d*)_NativeInstance)->Init(*(gp_Dir2d*)pp_theValue);
}

int Macad::Occt::TColgp_Array2OfDir2d::Size()
{
	return ((::TColgp_Array2OfDir2d*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_Array2OfDir2d::Length()
{
	return ((::TColgp_Array2OfDir2d*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_Array2OfDir2d::NbRows()
{
	return ((::TColgp_Array2OfDir2d*)_NativeInstance)->NbRows();
}

int Macad::Occt::TColgp_Array2OfDir2d::NbColumns()
{
	return ((::TColgp_Array2OfDir2d*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TColgp_Array2OfDir2d::RowLength()
{
	return ((::TColgp_Array2OfDir2d*)_NativeInstance)->RowLength();
}

int Macad::Occt::TColgp_Array2OfDir2d::ColLength()
{
	return ((::TColgp_Array2OfDir2d*)_NativeInstance)->ColLength();
}

int Macad::Occt::TColgp_Array2OfDir2d::LowerRow()
{
	return ((::TColgp_Array2OfDir2d*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TColgp_Array2OfDir2d::UpperRow()
{
	return ((::TColgp_Array2OfDir2d*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TColgp_Array2OfDir2d::LowerCol()
{
	return ((::TColgp_Array2OfDir2d*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TColgp_Array2OfDir2d::UpperCol()
{
	return ((::TColgp_Array2OfDir2d*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TColgp_Array2OfDir2d::IsDeletable()
{
	return ((::TColgp_Array2OfDir2d*)_NativeInstance)->IsDeletable();
}

Macad::Occt::TColgp_Array2OfDir2d^ Macad::Occt::TColgp_Array2OfDir2d::Assign(Macad::Occt::TColgp_Array2OfDir2d^ theOther)
{
	::TColgp_Array2OfDir2d* _result = new ::TColgp_Array2OfDir2d();
	*_result = ((::TColgp_Array2OfDir2d*)_NativeInstance)->Assign(*(::TColgp_Array2OfDir2d*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfDir2d(_result);
}

Macad::Occt::TColgp_Array2OfDir2d^ Macad::Occt::TColgp_Array2OfDir2d::Move(Macad::Occt::TColgp_Array2OfDir2d^ theOther)
{
	::TColgp_Array2OfDir2d* _result = new ::TColgp_Array2OfDir2d();
	*_result = ((::TColgp_Array2OfDir2d*)_NativeInstance)->Move(*(::TColgp_Array2OfDir2d*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfDir2d(_result);
}

Macad::Occt::Dir2d Macad::Occt::TColgp_Array2OfDir2d::Value(int theRow, int theCol)
{
	return Macad::Occt::Dir2d(((::TColgp_Array2OfDir2d*)_NativeInstance)->Value(theRow, theCol));
}

Macad::Occt::Dir2d Macad::Occt::TColgp_Array2OfDir2d::ChangeValue(int theRow, int theCol)
{
	return Macad::Occt::Dir2d(((::TColgp_Array2OfDir2d*)_NativeInstance)->ChangeValue(theRow, theCol));
}

void Macad::Occt::TColgp_Array2OfDir2d::SetValue(int theRow, int theCol, Macad::Occt::Dir2d theItem)
{
	pin_ptr<Macad::Occt::Dir2d> pp_theItem = &theItem;
	((::TColgp_Array2OfDir2d*)_NativeInstance)->SetValue(theRow, theCol, *(gp_Dir2d*)pp_theItem);
}

void Macad::Occt::TColgp_Array2OfDir2d::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColgp_Array2OfDir2d*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColgp_Array2OfLin2d
//---------------------------------------------------------------------

Macad::Occt::TColgp_Array2OfLin2d::TColgp_Array2OfLin2d()
	: BaseClass<::TColgp_Array2OfLin2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array2OfLin2d();
}

Macad::Occt::TColgp_Array2OfLin2d::TColgp_Array2OfLin2d(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TColgp_Array2OfLin2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array2OfLin2d(theRowLower, theRowUpper, theColLower, theColUpper);
}

Macad::Occt::TColgp_Array2OfLin2d::TColgp_Array2OfLin2d(Macad::Occt::TColgp_Array2OfLin2d^ theOther)
	: BaseClass<::TColgp_Array2OfLin2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array2OfLin2d(*(::TColgp_Array2OfLin2d*)theOther->NativeInstance);
}

Macad::Occt::TColgp_Array2OfLin2d::TColgp_Array2OfLin2d(Macad::Occt::gp_Lin2d^ theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TColgp_Array2OfLin2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array2OfLin2d(*(::gp_Lin2d*)theBegin->NativeInstance, theRowLower, theRowUpper, theColLower, theColUpper);
}

void Macad::Occt::TColgp_Array2OfLin2d::Init(Macad::Occt::gp_Lin2d^ theValue)
{
	((::TColgp_Array2OfLin2d*)_NativeInstance)->Init(*(::gp_Lin2d*)theValue->NativeInstance);
}

int Macad::Occt::TColgp_Array2OfLin2d::Size()
{
	return ((::TColgp_Array2OfLin2d*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_Array2OfLin2d::Length()
{
	return ((::TColgp_Array2OfLin2d*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_Array2OfLin2d::NbRows()
{
	return ((::TColgp_Array2OfLin2d*)_NativeInstance)->NbRows();
}

int Macad::Occt::TColgp_Array2OfLin2d::NbColumns()
{
	return ((::TColgp_Array2OfLin2d*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TColgp_Array2OfLin2d::RowLength()
{
	return ((::TColgp_Array2OfLin2d*)_NativeInstance)->RowLength();
}

int Macad::Occt::TColgp_Array2OfLin2d::ColLength()
{
	return ((::TColgp_Array2OfLin2d*)_NativeInstance)->ColLength();
}

int Macad::Occt::TColgp_Array2OfLin2d::LowerRow()
{
	return ((::TColgp_Array2OfLin2d*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TColgp_Array2OfLin2d::UpperRow()
{
	return ((::TColgp_Array2OfLin2d*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TColgp_Array2OfLin2d::LowerCol()
{
	return ((::TColgp_Array2OfLin2d*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TColgp_Array2OfLin2d::UpperCol()
{
	return ((::TColgp_Array2OfLin2d*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TColgp_Array2OfLin2d::IsDeletable()
{
	return ((::TColgp_Array2OfLin2d*)_NativeInstance)->IsDeletable();
}

Macad::Occt::TColgp_Array2OfLin2d^ Macad::Occt::TColgp_Array2OfLin2d::Assign(Macad::Occt::TColgp_Array2OfLin2d^ theOther)
{
	::TColgp_Array2OfLin2d* _result = new ::TColgp_Array2OfLin2d();
	*_result = ((::TColgp_Array2OfLin2d*)_NativeInstance)->Assign(*(::TColgp_Array2OfLin2d*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfLin2d(_result);
}

Macad::Occt::TColgp_Array2OfLin2d^ Macad::Occt::TColgp_Array2OfLin2d::Move(Macad::Occt::TColgp_Array2OfLin2d^ theOther)
{
	::TColgp_Array2OfLin2d* _result = new ::TColgp_Array2OfLin2d();
	*_result = ((::TColgp_Array2OfLin2d*)_NativeInstance)->Move(*(::TColgp_Array2OfLin2d*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfLin2d(_result);
}

Macad::Occt::gp_Lin2d^ Macad::Occt::TColgp_Array2OfLin2d::Value(int theRow, int theCol)
{
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result =  (::gp_Lin2d)((::TColgp_Array2OfLin2d*)_NativeInstance)->Value(theRow, theCol);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

Macad::Occt::gp_Lin2d^ Macad::Occt::TColgp_Array2OfLin2d::ChangeValue(int theRow, int theCol)
{
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result = ((::TColgp_Array2OfLin2d*)_NativeInstance)->ChangeValue(theRow, theCol);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

void Macad::Occt::TColgp_Array2OfLin2d::SetValue(int theRow, int theCol, Macad::Occt::gp_Lin2d^ theItem)
{
	((::TColgp_Array2OfLin2d*)_NativeInstance)->SetValue(theRow, theCol, *(::gp_Lin2d*)theItem->NativeInstance);
}

void Macad::Occt::TColgp_Array2OfLin2d::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColgp_Array2OfLin2d*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColgp_Array2OfPnt
//---------------------------------------------------------------------

Macad::Occt::TColgp_Array2OfPnt::TColgp_Array2OfPnt()
	: BaseClass<::TColgp_Array2OfPnt>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array2OfPnt();
}

Macad::Occt::TColgp_Array2OfPnt::TColgp_Array2OfPnt(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TColgp_Array2OfPnt>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array2OfPnt(theRowLower, theRowUpper, theColLower, theColUpper);
}

Macad::Occt::TColgp_Array2OfPnt::TColgp_Array2OfPnt(Macad::Occt::TColgp_Array2OfPnt^ theOther)
	: BaseClass<::TColgp_Array2OfPnt>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array2OfPnt(*(::TColgp_Array2OfPnt*)theOther->NativeInstance);
}

Macad::Occt::TColgp_Array2OfPnt::TColgp_Array2OfPnt(Macad::Occt::Pnt theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TColgp_Array2OfPnt>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColgp_Array2OfPnt(*(gp_Pnt*)pp_theBegin, theRowLower, theRowUpper, theColLower, theColUpper);
}

void Macad::Occt::TColgp_Array2OfPnt::Init(Macad::Occt::Pnt theValue)
{
	pin_ptr<Macad::Occt::Pnt> pp_theValue = &theValue;
	((::TColgp_Array2OfPnt*)_NativeInstance)->Init(*(gp_Pnt*)pp_theValue);
}

int Macad::Occt::TColgp_Array2OfPnt::Size()
{
	return ((::TColgp_Array2OfPnt*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_Array2OfPnt::Length()
{
	return ((::TColgp_Array2OfPnt*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_Array2OfPnt::NbRows()
{
	return ((::TColgp_Array2OfPnt*)_NativeInstance)->NbRows();
}

int Macad::Occt::TColgp_Array2OfPnt::NbColumns()
{
	return ((::TColgp_Array2OfPnt*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TColgp_Array2OfPnt::RowLength()
{
	return ((::TColgp_Array2OfPnt*)_NativeInstance)->RowLength();
}

int Macad::Occt::TColgp_Array2OfPnt::ColLength()
{
	return ((::TColgp_Array2OfPnt*)_NativeInstance)->ColLength();
}

int Macad::Occt::TColgp_Array2OfPnt::LowerRow()
{
	return ((::TColgp_Array2OfPnt*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TColgp_Array2OfPnt::UpperRow()
{
	return ((::TColgp_Array2OfPnt*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TColgp_Array2OfPnt::LowerCol()
{
	return ((::TColgp_Array2OfPnt*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TColgp_Array2OfPnt::UpperCol()
{
	return ((::TColgp_Array2OfPnt*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TColgp_Array2OfPnt::IsDeletable()
{
	return ((::TColgp_Array2OfPnt*)_NativeInstance)->IsDeletable();
}

Macad::Occt::TColgp_Array2OfPnt^ Macad::Occt::TColgp_Array2OfPnt::Assign(Macad::Occt::TColgp_Array2OfPnt^ theOther)
{
	::TColgp_Array2OfPnt* _result = new ::TColgp_Array2OfPnt();
	*_result = ((::TColgp_Array2OfPnt*)_NativeInstance)->Assign(*(::TColgp_Array2OfPnt*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfPnt(_result);
}

Macad::Occt::TColgp_Array2OfPnt^ Macad::Occt::TColgp_Array2OfPnt::Move(Macad::Occt::TColgp_Array2OfPnt^ theOther)
{
	::TColgp_Array2OfPnt* _result = new ::TColgp_Array2OfPnt();
	*_result = ((::TColgp_Array2OfPnt*)_NativeInstance)->Move(*(::TColgp_Array2OfPnt*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfPnt(_result);
}

Macad::Occt::Pnt Macad::Occt::TColgp_Array2OfPnt::Value(int theRow, int theCol)
{
	return Macad::Occt::Pnt(((::TColgp_Array2OfPnt*)_NativeInstance)->Value(theRow, theCol));
}

Macad::Occt::Pnt Macad::Occt::TColgp_Array2OfPnt::ChangeValue(int theRow, int theCol)
{
	return Macad::Occt::Pnt(((::TColgp_Array2OfPnt*)_NativeInstance)->ChangeValue(theRow, theCol));
}

void Macad::Occt::TColgp_Array2OfPnt::SetValue(int theRow, int theCol, Macad::Occt::Pnt theItem)
{
	pin_ptr<Macad::Occt::Pnt> pp_theItem = &theItem;
	((::TColgp_Array2OfPnt*)_NativeInstance)->SetValue(theRow, theCol, *(gp_Pnt*)pp_theItem);
}

void Macad::Occt::TColgp_Array2OfPnt::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColgp_Array2OfPnt*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColgp_Array2OfPnt2d
//---------------------------------------------------------------------

Macad::Occt::TColgp_Array2OfPnt2d::TColgp_Array2OfPnt2d()
	: BaseClass<::TColgp_Array2OfPnt2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array2OfPnt2d();
}

Macad::Occt::TColgp_Array2OfPnt2d::TColgp_Array2OfPnt2d(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TColgp_Array2OfPnt2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array2OfPnt2d(theRowLower, theRowUpper, theColLower, theColUpper);
}

Macad::Occt::TColgp_Array2OfPnt2d::TColgp_Array2OfPnt2d(Macad::Occt::TColgp_Array2OfPnt2d^ theOther)
	: BaseClass<::TColgp_Array2OfPnt2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array2OfPnt2d(*(::TColgp_Array2OfPnt2d*)theOther->NativeInstance);
}

Macad::Occt::TColgp_Array2OfPnt2d::TColgp_Array2OfPnt2d(Macad::Occt::Pnt2d theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TColgp_Array2OfPnt2d>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColgp_Array2OfPnt2d(*(gp_Pnt2d*)pp_theBegin, theRowLower, theRowUpper, theColLower, theColUpper);
}

void Macad::Occt::TColgp_Array2OfPnt2d::Init(Macad::Occt::Pnt2d theValue)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_theValue = &theValue;
	((::TColgp_Array2OfPnt2d*)_NativeInstance)->Init(*(gp_Pnt2d*)pp_theValue);
}

int Macad::Occt::TColgp_Array2OfPnt2d::Size()
{
	return ((::TColgp_Array2OfPnt2d*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_Array2OfPnt2d::Length()
{
	return ((::TColgp_Array2OfPnt2d*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_Array2OfPnt2d::NbRows()
{
	return ((::TColgp_Array2OfPnt2d*)_NativeInstance)->NbRows();
}

int Macad::Occt::TColgp_Array2OfPnt2d::NbColumns()
{
	return ((::TColgp_Array2OfPnt2d*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TColgp_Array2OfPnt2d::RowLength()
{
	return ((::TColgp_Array2OfPnt2d*)_NativeInstance)->RowLength();
}

int Macad::Occt::TColgp_Array2OfPnt2d::ColLength()
{
	return ((::TColgp_Array2OfPnt2d*)_NativeInstance)->ColLength();
}

int Macad::Occt::TColgp_Array2OfPnt2d::LowerRow()
{
	return ((::TColgp_Array2OfPnt2d*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TColgp_Array2OfPnt2d::UpperRow()
{
	return ((::TColgp_Array2OfPnt2d*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TColgp_Array2OfPnt2d::LowerCol()
{
	return ((::TColgp_Array2OfPnt2d*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TColgp_Array2OfPnt2d::UpperCol()
{
	return ((::TColgp_Array2OfPnt2d*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TColgp_Array2OfPnt2d::IsDeletable()
{
	return ((::TColgp_Array2OfPnt2d*)_NativeInstance)->IsDeletable();
}

Macad::Occt::TColgp_Array2OfPnt2d^ Macad::Occt::TColgp_Array2OfPnt2d::Assign(Macad::Occt::TColgp_Array2OfPnt2d^ theOther)
{
	::TColgp_Array2OfPnt2d* _result = new ::TColgp_Array2OfPnt2d();
	*_result = ((::TColgp_Array2OfPnt2d*)_NativeInstance)->Assign(*(::TColgp_Array2OfPnt2d*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfPnt2d(_result);
}

Macad::Occt::TColgp_Array2OfPnt2d^ Macad::Occt::TColgp_Array2OfPnt2d::Move(Macad::Occt::TColgp_Array2OfPnt2d^ theOther)
{
	::TColgp_Array2OfPnt2d* _result = new ::TColgp_Array2OfPnt2d();
	*_result = ((::TColgp_Array2OfPnt2d*)_NativeInstance)->Move(*(::TColgp_Array2OfPnt2d*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfPnt2d(_result);
}

Macad::Occt::Pnt2d Macad::Occt::TColgp_Array2OfPnt2d::Value(int theRow, int theCol)
{
	return Macad::Occt::Pnt2d(((::TColgp_Array2OfPnt2d*)_NativeInstance)->Value(theRow, theCol));
}

Macad::Occt::Pnt2d Macad::Occt::TColgp_Array2OfPnt2d::ChangeValue(int theRow, int theCol)
{
	return Macad::Occt::Pnt2d(((::TColgp_Array2OfPnt2d*)_NativeInstance)->ChangeValue(theRow, theCol));
}

void Macad::Occt::TColgp_Array2OfPnt2d::SetValue(int theRow, int theCol, Macad::Occt::Pnt2d theItem)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_theItem = &theItem;
	((::TColgp_Array2OfPnt2d*)_NativeInstance)->SetValue(theRow, theCol, *(gp_Pnt2d*)pp_theItem);
}

void Macad::Occt::TColgp_Array2OfPnt2d::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColgp_Array2OfPnt2d*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColgp_Array2OfVec
//---------------------------------------------------------------------

Macad::Occt::TColgp_Array2OfVec::TColgp_Array2OfVec()
	: BaseClass<::TColgp_Array2OfVec>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array2OfVec();
}

Macad::Occt::TColgp_Array2OfVec::TColgp_Array2OfVec(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TColgp_Array2OfVec>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array2OfVec(theRowLower, theRowUpper, theColLower, theColUpper);
}

Macad::Occt::TColgp_Array2OfVec::TColgp_Array2OfVec(Macad::Occt::TColgp_Array2OfVec^ theOther)
	: BaseClass<::TColgp_Array2OfVec>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array2OfVec(*(::TColgp_Array2OfVec*)theOther->NativeInstance);
}

Macad::Occt::TColgp_Array2OfVec::TColgp_Array2OfVec(Macad::Occt::Vec theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TColgp_Array2OfVec>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Vec> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColgp_Array2OfVec(*(gp_Vec*)pp_theBegin, theRowLower, theRowUpper, theColLower, theColUpper);
}

void Macad::Occt::TColgp_Array2OfVec::Init(Macad::Occt::Vec theValue)
{
	pin_ptr<Macad::Occt::Vec> pp_theValue = &theValue;
	((::TColgp_Array2OfVec*)_NativeInstance)->Init(*(gp_Vec*)pp_theValue);
}

int Macad::Occt::TColgp_Array2OfVec::Size()
{
	return ((::TColgp_Array2OfVec*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_Array2OfVec::Length()
{
	return ((::TColgp_Array2OfVec*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_Array2OfVec::NbRows()
{
	return ((::TColgp_Array2OfVec*)_NativeInstance)->NbRows();
}

int Macad::Occt::TColgp_Array2OfVec::NbColumns()
{
	return ((::TColgp_Array2OfVec*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TColgp_Array2OfVec::RowLength()
{
	return ((::TColgp_Array2OfVec*)_NativeInstance)->RowLength();
}

int Macad::Occt::TColgp_Array2OfVec::ColLength()
{
	return ((::TColgp_Array2OfVec*)_NativeInstance)->ColLength();
}

int Macad::Occt::TColgp_Array2OfVec::LowerRow()
{
	return ((::TColgp_Array2OfVec*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TColgp_Array2OfVec::UpperRow()
{
	return ((::TColgp_Array2OfVec*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TColgp_Array2OfVec::LowerCol()
{
	return ((::TColgp_Array2OfVec*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TColgp_Array2OfVec::UpperCol()
{
	return ((::TColgp_Array2OfVec*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TColgp_Array2OfVec::IsDeletable()
{
	return ((::TColgp_Array2OfVec*)_NativeInstance)->IsDeletable();
}

Macad::Occt::TColgp_Array2OfVec^ Macad::Occt::TColgp_Array2OfVec::Assign(Macad::Occt::TColgp_Array2OfVec^ theOther)
{
	::TColgp_Array2OfVec* _result = new ::TColgp_Array2OfVec();
	*_result = ((::TColgp_Array2OfVec*)_NativeInstance)->Assign(*(::TColgp_Array2OfVec*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfVec(_result);
}

Macad::Occt::TColgp_Array2OfVec^ Macad::Occt::TColgp_Array2OfVec::Move(Macad::Occt::TColgp_Array2OfVec^ theOther)
{
	::TColgp_Array2OfVec* _result = new ::TColgp_Array2OfVec();
	*_result = ((::TColgp_Array2OfVec*)_NativeInstance)->Move(*(::TColgp_Array2OfVec*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfVec(_result);
}

Macad::Occt::Vec Macad::Occt::TColgp_Array2OfVec::Value(int theRow, int theCol)
{
	return Macad::Occt::Vec(((::TColgp_Array2OfVec*)_NativeInstance)->Value(theRow, theCol));
}

Macad::Occt::Vec Macad::Occt::TColgp_Array2OfVec::ChangeValue(int theRow, int theCol)
{
	return Macad::Occt::Vec(((::TColgp_Array2OfVec*)_NativeInstance)->ChangeValue(theRow, theCol));
}

void Macad::Occt::TColgp_Array2OfVec::SetValue(int theRow, int theCol, Macad::Occt::Vec theItem)
{
	pin_ptr<Macad::Occt::Vec> pp_theItem = &theItem;
	((::TColgp_Array2OfVec*)_NativeInstance)->SetValue(theRow, theCol, *(gp_Vec*)pp_theItem);
}

void Macad::Occt::TColgp_Array2OfVec::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColgp_Array2OfVec*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColgp_Array2OfVec2d
//---------------------------------------------------------------------

Macad::Occt::TColgp_Array2OfVec2d::TColgp_Array2OfVec2d()
	: BaseClass<::TColgp_Array2OfVec2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array2OfVec2d();
}

Macad::Occt::TColgp_Array2OfVec2d::TColgp_Array2OfVec2d(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TColgp_Array2OfVec2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array2OfVec2d(theRowLower, theRowUpper, theColLower, theColUpper);
}

Macad::Occt::TColgp_Array2OfVec2d::TColgp_Array2OfVec2d(Macad::Occt::TColgp_Array2OfVec2d^ theOther)
	: BaseClass<::TColgp_Array2OfVec2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array2OfVec2d(*(::TColgp_Array2OfVec2d*)theOther->NativeInstance);
}

Macad::Occt::TColgp_Array2OfVec2d::TColgp_Array2OfVec2d(Macad::Occt::Vec2d theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TColgp_Array2OfVec2d>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Vec2d> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColgp_Array2OfVec2d(*(gp_Vec2d*)pp_theBegin, theRowLower, theRowUpper, theColLower, theColUpper);
}

void Macad::Occt::TColgp_Array2OfVec2d::Init(Macad::Occt::Vec2d theValue)
{
	pin_ptr<Macad::Occt::Vec2d> pp_theValue = &theValue;
	((::TColgp_Array2OfVec2d*)_NativeInstance)->Init(*(gp_Vec2d*)pp_theValue);
}

int Macad::Occt::TColgp_Array2OfVec2d::Size()
{
	return ((::TColgp_Array2OfVec2d*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_Array2OfVec2d::Length()
{
	return ((::TColgp_Array2OfVec2d*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_Array2OfVec2d::NbRows()
{
	return ((::TColgp_Array2OfVec2d*)_NativeInstance)->NbRows();
}

int Macad::Occt::TColgp_Array2OfVec2d::NbColumns()
{
	return ((::TColgp_Array2OfVec2d*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TColgp_Array2OfVec2d::RowLength()
{
	return ((::TColgp_Array2OfVec2d*)_NativeInstance)->RowLength();
}

int Macad::Occt::TColgp_Array2OfVec2d::ColLength()
{
	return ((::TColgp_Array2OfVec2d*)_NativeInstance)->ColLength();
}

int Macad::Occt::TColgp_Array2OfVec2d::LowerRow()
{
	return ((::TColgp_Array2OfVec2d*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TColgp_Array2OfVec2d::UpperRow()
{
	return ((::TColgp_Array2OfVec2d*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TColgp_Array2OfVec2d::LowerCol()
{
	return ((::TColgp_Array2OfVec2d*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TColgp_Array2OfVec2d::UpperCol()
{
	return ((::TColgp_Array2OfVec2d*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TColgp_Array2OfVec2d::IsDeletable()
{
	return ((::TColgp_Array2OfVec2d*)_NativeInstance)->IsDeletable();
}

Macad::Occt::TColgp_Array2OfVec2d^ Macad::Occt::TColgp_Array2OfVec2d::Assign(Macad::Occt::TColgp_Array2OfVec2d^ theOther)
{
	::TColgp_Array2OfVec2d* _result = new ::TColgp_Array2OfVec2d();
	*_result = ((::TColgp_Array2OfVec2d*)_NativeInstance)->Assign(*(::TColgp_Array2OfVec2d*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfVec2d(_result);
}

Macad::Occt::TColgp_Array2OfVec2d^ Macad::Occt::TColgp_Array2OfVec2d::Move(Macad::Occt::TColgp_Array2OfVec2d^ theOther)
{
	::TColgp_Array2OfVec2d* _result = new ::TColgp_Array2OfVec2d();
	*_result = ((::TColgp_Array2OfVec2d*)_NativeInstance)->Move(*(::TColgp_Array2OfVec2d*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfVec2d(_result);
}

Macad::Occt::Vec2d Macad::Occt::TColgp_Array2OfVec2d::Value(int theRow, int theCol)
{
	return Macad::Occt::Vec2d(((::TColgp_Array2OfVec2d*)_NativeInstance)->Value(theRow, theCol));
}

Macad::Occt::Vec2d Macad::Occt::TColgp_Array2OfVec2d::ChangeValue(int theRow, int theCol)
{
	return Macad::Occt::Vec2d(((::TColgp_Array2OfVec2d*)_NativeInstance)->ChangeValue(theRow, theCol));
}

void Macad::Occt::TColgp_Array2OfVec2d::SetValue(int theRow, int theCol, Macad::Occt::Vec2d theItem)
{
	pin_ptr<Macad::Occt::Vec2d> pp_theItem = &theItem;
	((::TColgp_Array2OfVec2d*)_NativeInstance)->SetValue(theRow, theCol, *(gp_Vec2d*)pp_theItem);
}

void Macad::Occt::TColgp_Array2OfVec2d::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColgp_Array2OfVec2d*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColgp_Array2OfXY
//---------------------------------------------------------------------

Macad::Occt::TColgp_Array2OfXY::TColgp_Array2OfXY()
	: BaseClass<::TColgp_Array2OfXY>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array2OfXY();
}

Macad::Occt::TColgp_Array2OfXY::TColgp_Array2OfXY(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TColgp_Array2OfXY>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array2OfXY(theRowLower, theRowUpper, theColLower, theColUpper);
}

Macad::Occt::TColgp_Array2OfXY::TColgp_Array2OfXY(Macad::Occt::TColgp_Array2OfXY^ theOther)
	: BaseClass<::TColgp_Array2OfXY>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array2OfXY(*(::TColgp_Array2OfXY*)theOther->NativeInstance);
}

Macad::Occt::TColgp_Array2OfXY::TColgp_Array2OfXY(Macad::Occt::XY theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TColgp_Array2OfXY>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::XY> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColgp_Array2OfXY(*(gp_XY*)pp_theBegin, theRowLower, theRowUpper, theColLower, theColUpper);
}

void Macad::Occt::TColgp_Array2OfXY::Init(Macad::Occt::XY theValue)
{
	pin_ptr<Macad::Occt::XY> pp_theValue = &theValue;
	((::TColgp_Array2OfXY*)_NativeInstance)->Init(*(gp_XY*)pp_theValue);
}

int Macad::Occt::TColgp_Array2OfXY::Size()
{
	return ((::TColgp_Array2OfXY*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_Array2OfXY::Length()
{
	return ((::TColgp_Array2OfXY*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_Array2OfXY::NbRows()
{
	return ((::TColgp_Array2OfXY*)_NativeInstance)->NbRows();
}

int Macad::Occt::TColgp_Array2OfXY::NbColumns()
{
	return ((::TColgp_Array2OfXY*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TColgp_Array2OfXY::RowLength()
{
	return ((::TColgp_Array2OfXY*)_NativeInstance)->RowLength();
}

int Macad::Occt::TColgp_Array2OfXY::ColLength()
{
	return ((::TColgp_Array2OfXY*)_NativeInstance)->ColLength();
}

int Macad::Occt::TColgp_Array2OfXY::LowerRow()
{
	return ((::TColgp_Array2OfXY*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TColgp_Array2OfXY::UpperRow()
{
	return ((::TColgp_Array2OfXY*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TColgp_Array2OfXY::LowerCol()
{
	return ((::TColgp_Array2OfXY*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TColgp_Array2OfXY::UpperCol()
{
	return ((::TColgp_Array2OfXY*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TColgp_Array2OfXY::IsDeletable()
{
	return ((::TColgp_Array2OfXY*)_NativeInstance)->IsDeletable();
}

Macad::Occt::TColgp_Array2OfXY^ Macad::Occt::TColgp_Array2OfXY::Assign(Macad::Occt::TColgp_Array2OfXY^ theOther)
{
	::TColgp_Array2OfXY* _result = new ::TColgp_Array2OfXY();
	*_result = ((::TColgp_Array2OfXY*)_NativeInstance)->Assign(*(::TColgp_Array2OfXY*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfXY(_result);
}

Macad::Occt::TColgp_Array2OfXY^ Macad::Occt::TColgp_Array2OfXY::Move(Macad::Occt::TColgp_Array2OfXY^ theOther)
{
	::TColgp_Array2OfXY* _result = new ::TColgp_Array2OfXY();
	*_result = ((::TColgp_Array2OfXY*)_NativeInstance)->Move(*(::TColgp_Array2OfXY*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfXY(_result);
}

Macad::Occt::XY Macad::Occt::TColgp_Array2OfXY::Value(int theRow, int theCol)
{
	return Macad::Occt::XY(((::TColgp_Array2OfXY*)_NativeInstance)->Value(theRow, theCol));
}

Macad::Occt::XY Macad::Occt::TColgp_Array2OfXY::ChangeValue(int theRow, int theCol)
{
	return Macad::Occt::XY(((::TColgp_Array2OfXY*)_NativeInstance)->ChangeValue(theRow, theCol));
}

void Macad::Occt::TColgp_Array2OfXY::SetValue(int theRow, int theCol, Macad::Occt::XY theItem)
{
	pin_ptr<Macad::Occt::XY> pp_theItem = &theItem;
	((::TColgp_Array2OfXY*)_NativeInstance)->SetValue(theRow, theCol, *(gp_XY*)pp_theItem);
}

void Macad::Occt::TColgp_Array2OfXY::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColgp_Array2OfXY*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColgp_Array2OfXYZ
//---------------------------------------------------------------------

Macad::Occt::TColgp_Array2OfXYZ::TColgp_Array2OfXYZ()
	: BaseClass<::TColgp_Array2OfXYZ>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array2OfXYZ();
}

Macad::Occt::TColgp_Array2OfXYZ::TColgp_Array2OfXYZ(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TColgp_Array2OfXYZ>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array2OfXYZ(theRowLower, theRowUpper, theColLower, theColUpper);
}

Macad::Occt::TColgp_Array2OfXYZ::TColgp_Array2OfXYZ(Macad::Occt::TColgp_Array2OfXYZ^ theOther)
	: BaseClass<::TColgp_Array2OfXYZ>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_Array2OfXYZ(*(::TColgp_Array2OfXYZ*)theOther->NativeInstance);
}

Macad::Occt::TColgp_Array2OfXYZ::TColgp_Array2OfXYZ(Macad::Occt::XYZ theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TColgp_Array2OfXYZ>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::XYZ> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColgp_Array2OfXYZ(*(gp_XYZ*)pp_theBegin, theRowLower, theRowUpper, theColLower, theColUpper);
}

void Macad::Occt::TColgp_Array2OfXYZ::Init(Macad::Occt::XYZ theValue)
{
	pin_ptr<Macad::Occt::XYZ> pp_theValue = &theValue;
	((::TColgp_Array2OfXYZ*)_NativeInstance)->Init(*(gp_XYZ*)pp_theValue);
}

int Macad::Occt::TColgp_Array2OfXYZ::Size()
{
	return ((::TColgp_Array2OfXYZ*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_Array2OfXYZ::Length()
{
	return ((::TColgp_Array2OfXYZ*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_Array2OfXYZ::NbRows()
{
	return ((::TColgp_Array2OfXYZ*)_NativeInstance)->NbRows();
}

int Macad::Occt::TColgp_Array2OfXYZ::NbColumns()
{
	return ((::TColgp_Array2OfXYZ*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TColgp_Array2OfXYZ::RowLength()
{
	return ((::TColgp_Array2OfXYZ*)_NativeInstance)->RowLength();
}

int Macad::Occt::TColgp_Array2OfXYZ::ColLength()
{
	return ((::TColgp_Array2OfXYZ*)_NativeInstance)->ColLength();
}

int Macad::Occt::TColgp_Array2OfXYZ::LowerRow()
{
	return ((::TColgp_Array2OfXYZ*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TColgp_Array2OfXYZ::UpperRow()
{
	return ((::TColgp_Array2OfXYZ*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TColgp_Array2OfXYZ::LowerCol()
{
	return ((::TColgp_Array2OfXYZ*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TColgp_Array2OfXYZ::UpperCol()
{
	return ((::TColgp_Array2OfXYZ*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TColgp_Array2OfXYZ::IsDeletable()
{
	return ((::TColgp_Array2OfXYZ*)_NativeInstance)->IsDeletable();
}

Macad::Occt::TColgp_Array2OfXYZ^ Macad::Occt::TColgp_Array2OfXYZ::Assign(Macad::Occt::TColgp_Array2OfXYZ^ theOther)
{
	::TColgp_Array2OfXYZ* _result = new ::TColgp_Array2OfXYZ();
	*_result = ((::TColgp_Array2OfXYZ*)_NativeInstance)->Assign(*(::TColgp_Array2OfXYZ*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfXYZ(_result);
}

Macad::Occt::TColgp_Array2OfXYZ^ Macad::Occt::TColgp_Array2OfXYZ::Move(Macad::Occt::TColgp_Array2OfXYZ^ theOther)
{
	::TColgp_Array2OfXYZ* _result = new ::TColgp_Array2OfXYZ();
	*_result = ((::TColgp_Array2OfXYZ*)_NativeInstance)->Move(*(::TColgp_Array2OfXYZ*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfXYZ(_result);
}

Macad::Occt::XYZ Macad::Occt::TColgp_Array2OfXYZ::Value(int theRow, int theCol)
{
	return Macad::Occt::XYZ(((::TColgp_Array2OfXYZ*)_NativeInstance)->Value(theRow, theCol));
}

Macad::Occt::XYZ Macad::Occt::TColgp_Array2OfXYZ::ChangeValue(int theRow, int theCol)
{
	return Macad::Occt::XYZ(((::TColgp_Array2OfXYZ*)_NativeInstance)->ChangeValue(theRow, theCol));
}

void Macad::Occt::TColgp_Array2OfXYZ::SetValue(int theRow, int theCol, Macad::Occt::XYZ theItem)
{
	pin_ptr<Macad::Occt::XYZ> pp_theItem = &theItem;
	((::TColgp_Array2OfXYZ*)_NativeInstance)->SetValue(theRow, theCol, *(gp_XYZ*)pp_theItem);
}

void Macad::Occt::TColgp_Array2OfXYZ::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColgp_Array2OfXYZ*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfDir
//---------------------------------------------------------------------

Macad::Occt::TColgp_SequenceOfDir::TColgp_SequenceOfDir()
	: BaseClass<::TColgp_SequenceOfDir>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_SequenceOfDir();
}

Macad::Occt::TColgp_SequenceOfDir::TColgp_SequenceOfDir(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TColgp_SequenceOfDir>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TColgp_SequenceOfDir(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TColgp_SequenceOfDir::TColgp_SequenceOfDir(Macad::Occt::TColgp_SequenceOfDir^ theOther)
	: BaseClass<::TColgp_SequenceOfDir>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_SequenceOfDir(*(::TColgp_SequenceOfDir*)theOther->NativeInstance);
}

int Macad::Occt::TColgp_SequenceOfDir::Size()
{
	return ((::TColgp_SequenceOfDir*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_SequenceOfDir::Length()
{
	return ((::TColgp_SequenceOfDir*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_SequenceOfDir::Lower()
{
	return ((::TColgp_SequenceOfDir*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_SequenceOfDir::Upper()
{
	return ((::TColgp_SequenceOfDir*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_SequenceOfDir::IsEmpty()
{
	return ((::TColgp_SequenceOfDir*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TColgp_SequenceOfDir::Reverse()
{
	((::TColgp_SequenceOfDir*)_NativeInstance)->Reverse();
}

void Macad::Occt::TColgp_SequenceOfDir::Exchange(int I, int J)
{
	((::TColgp_SequenceOfDir*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TColgp_SequenceOfDir::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColgp_SequenceOfDir*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColgp_SequenceOfDir::Clear()
{
	((::TColgp_SequenceOfDir*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TColgp_SequenceOfDir^ Macad::Occt::TColgp_SequenceOfDir::Assign(Macad::Occt::TColgp_SequenceOfDir^ theOther)
{
	::TColgp_SequenceOfDir* _result = new ::TColgp_SequenceOfDir();
	*_result = ((::TColgp_SequenceOfDir*)_NativeInstance)->Assign(*(::TColgp_SequenceOfDir*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfDir(_result);
}

void Macad::Occt::TColgp_SequenceOfDir::Remove(int theIndex)
{
	((::TColgp_SequenceOfDir*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TColgp_SequenceOfDir::Remove(int theFromIndex, int theToIndex)
{
	((::TColgp_SequenceOfDir*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TColgp_SequenceOfDir::Append(Macad::Occt::Dir theItem)
{
	pin_ptr<Macad::Occt::Dir> pp_theItem = &theItem;
	((::TColgp_SequenceOfDir*)_NativeInstance)->Append(*(gp_Dir*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfDir::Append(Macad::Occt::TColgp_SequenceOfDir^ theSeq)
{
	((::TColgp_SequenceOfDir*)_NativeInstance)->Append(*(::TColgp_SequenceOfDir*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfDir::Prepend(Macad::Occt::Dir theItem)
{
	pin_ptr<Macad::Occt::Dir> pp_theItem = &theItem;
	((::TColgp_SequenceOfDir*)_NativeInstance)->Prepend(*(gp_Dir*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfDir::Prepend(Macad::Occt::TColgp_SequenceOfDir^ theSeq)
{
	((::TColgp_SequenceOfDir*)_NativeInstance)->Prepend(*(::TColgp_SequenceOfDir*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfDir::InsertBefore(int theIndex, Macad::Occt::Dir theItem)
{
	pin_ptr<Macad::Occt::Dir> pp_theItem = &theItem;
	((::TColgp_SequenceOfDir*)_NativeInstance)->InsertBefore(theIndex, *(gp_Dir*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfDir::InsertBefore(int theIndex, Macad::Occt::TColgp_SequenceOfDir^ theSeq)
{
	((::TColgp_SequenceOfDir*)_NativeInstance)->InsertBefore(theIndex, *(::TColgp_SequenceOfDir*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfDir::InsertAfter(int theIndex, Macad::Occt::TColgp_SequenceOfDir^ theSeq)
{
	((::TColgp_SequenceOfDir*)_NativeInstance)->InsertAfter(theIndex, *(::TColgp_SequenceOfDir*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfDir::InsertAfter(int theIndex, Macad::Occt::Dir theItem)
{
	pin_ptr<Macad::Occt::Dir> pp_theItem = &theItem;
	((::TColgp_SequenceOfDir*)_NativeInstance)->InsertAfter(theIndex, *(gp_Dir*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfDir::Split(int theIndex, Macad::Occt::TColgp_SequenceOfDir^ theSeq)
{
	((::TColgp_SequenceOfDir*)_NativeInstance)->Split(theIndex, *(::TColgp_SequenceOfDir*)theSeq->NativeInstance);
}

Macad::Occt::Dir Macad::Occt::TColgp_SequenceOfDir::First()
{
	return Macad::Occt::Dir(((::TColgp_SequenceOfDir*)_NativeInstance)->First());
}

Macad::Occt::Dir Macad::Occt::TColgp_SequenceOfDir::ChangeFirst()
{
	return Macad::Occt::Dir(((::TColgp_SequenceOfDir*)_NativeInstance)->ChangeFirst());
}

Macad::Occt::Dir Macad::Occt::TColgp_SequenceOfDir::Last()
{
	return Macad::Occt::Dir(((::TColgp_SequenceOfDir*)_NativeInstance)->Last());
}

Macad::Occt::Dir Macad::Occt::TColgp_SequenceOfDir::ChangeLast()
{
	return Macad::Occt::Dir(((::TColgp_SequenceOfDir*)_NativeInstance)->ChangeLast());
}

Macad::Occt::Dir Macad::Occt::TColgp_SequenceOfDir::Value(int theIndex)
{
	return Macad::Occt::Dir(((::TColgp_SequenceOfDir*)_NativeInstance)->Value(theIndex));
}

Macad::Occt::Dir Macad::Occt::TColgp_SequenceOfDir::ChangeValue(int theIndex)
{
	return Macad::Occt::Dir(((::TColgp_SequenceOfDir*)_NativeInstance)->ChangeValue(theIndex));
}

void Macad::Occt::TColgp_SequenceOfDir::SetValue(int theIndex, Macad::Occt::Dir theItem)
{
	pin_ptr<Macad::Occt::Dir> pp_theItem = &theItem;
	((::TColgp_SequenceOfDir*)_NativeInstance)->SetValue(theIndex, *(gp_Dir*)pp_theItem);
}




//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfDir2d
//---------------------------------------------------------------------

Macad::Occt::TColgp_SequenceOfDir2d::TColgp_SequenceOfDir2d()
	: BaseClass<::TColgp_SequenceOfDir2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_SequenceOfDir2d();
}

Macad::Occt::TColgp_SequenceOfDir2d::TColgp_SequenceOfDir2d(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TColgp_SequenceOfDir2d>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TColgp_SequenceOfDir2d(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TColgp_SequenceOfDir2d::TColgp_SequenceOfDir2d(Macad::Occt::TColgp_SequenceOfDir2d^ theOther)
	: BaseClass<::TColgp_SequenceOfDir2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_SequenceOfDir2d(*(::TColgp_SequenceOfDir2d*)theOther->NativeInstance);
}

int Macad::Occt::TColgp_SequenceOfDir2d::Size()
{
	return ((::TColgp_SequenceOfDir2d*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_SequenceOfDir2d::Length()
{
	return ((::TColgp_SequenceOfDir2d*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_SequenceOfDir2d::Lower()
{
	return ((::TColgp_SequenceOfDir2d*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_SequenceOfDir2d::Upper()
{
	return ((::TColgp_SequenceOfDir2d*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_SequenceOfDir2d::IsEmpty()
{
	return ((::TColgp_SequenceOfDir2d*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TColgp_SequenceOfDir2d::Reverse()
{
	((::TColgp_SequenceOfDir2d*)_NativeInstance)->Reverse();
}

void Macad::Occt::TColgp_SequenceOfDir2d::Exchange(int I, int J)
{
	((::TColgp_SequenceOfDir2d*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TColgp_SequenceOfDir2d::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColgp_SequenceOfDir2d*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColgp_SequenceOfDir2d::Clear()
{
	((::TColgp_SequenceOfDir2d*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TColgp_SequenceOfDir2d^ Macad::Occt::TColgp_SequenceOfDir2d::Assign(Macad::Occt::TColgp_SequenceOfDir2d^ theOther)
{
	::TColgp_SequenceOfDir2d* _result = new ::TColgp_SequenceOfDir2d();
	*_result = ((::TColgp_SequenceOfDir2d*)_NativeInstance)->Assign(*(::TColgp_SequenceOfDir2d*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfDir2d(_result);
}

void Macad::Occt::TColgp_SequenceOfDir2d::Remove(int theIndex)
{
	((::TColgp_SequenceOfDir2d*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TColgp_SequenceOfDir2d::Remove(int theFromIndex, int theToIndex)
{
	((::TColgp_SequenceOfDir2d*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TColgp_SequenceOfDir2d::Append(Macad::Occt::Dir2d theItem)
{
	pin_ptr<Macad::Occt::Dir2d> pp_theItem = &theItem;
	((::TColgp_SequenceOfDir2d*)_NativeInstance)->Append(*(gp_Dir2d*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfDir2d::Append(Macad::Occt::TColgp_SequenceOfDir2d^ theSeq)
{
	((::TColgp_SequenceOfDir2d*)_NativeInstance)->Append(*(::TColgp_SequenceOfDir2d*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfDir2d::Prepend(Macad::Occt::Dir2d theItem)
{
	pin_ptr<Macad::Occt::Dir2d> pp_theItem = &theItem;
	((::TColgp_SequenceOfDir2d*)_NativeInstance)->Prepend(*(gp_Dir2d*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfDir2d::Prepend(Macad::Occt::TColgp_SequenceOfDir2d^ theSeq)
{
	((::TColgp_SequenceOfDir2d*)_NativeInstance)->Prepend(*(::TColgp_SequenceOfDir2d*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfDir2d::InsertBefore(int theIndex, Macad::Occt::Dir2d theItem)
{
	pin_ptr<Macad::Occt::Dir2d> pp_theItem = &theItem;
	((::TColgp_SequenceOfDir2d*)_NativeInstance)->InsertBefore(theIndex, *(gp_Dir2d*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfDir2d::InsertBefore(int theIndex, Macad::Occt::TColgp_SequenceOfDir2d^ theSeq)
{
	((::TColgp_SequenceOfDir2d*)_NativeInstance)->InsertBefore(theIndex, *(::TColgp_SequenceOfDir2d*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfDir2d::InsertAfter(int theIndex, Macad::Occt::TColgp_SequenceOfDir2d^ theSeq)
{
	((::TColgp_SequenceOfDir2d*)_NativeInstance)->InsertAfter(theIndex, *(::TColgp_SequenceOfDir2d*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfDir2d::InsertAfter(int theIndex, Macad::Occt::Dir2d theItem)
{
	pin_ptr<Macad::Occt::Dir2d> pp_theItem = &theItem;
	((::TColgp_SequenceOfDir2d*)_NativeInstance)->InsertAfter(theIndex, *(gp_Dir2d*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfDir2d::Split(int theIndex, Macad::Occt::TColgp_SequenceOfDir2d^ theSeq)
{
	((::TColgp_SequenceOfDir2d*)_NativeInstance)->Split(theIndex, *(::TColgp_SequenceOfDir2d*)theSeq->NativeInstance);
}

Macad::Occt::Dir2d Macad::Occt::TColgp_SequenceOfDir2d::First()
{
	return Macad::Occt::Dir2d(((::TColgp_SequenceOfDir2d*)_NativeInstance)->First());
}

Macad::Occt::Dir2d Macad::Occt::TColgp_SequenceOfDir2d::ChangeFirst()
{
	return Macad::Occt::Dir2d(((::TColgp_SequenceOfDir2d*)_NativeInstance)->ChangeFirst());
}

Macad::Occt::Dir2d Macad::Occt::TColgp_SequenceOfDir2d::Last()
{
	return Macad::Occt::Dir2d(((::TColgp_SequenceOfDir2d*)_NativeInstance)->Last());
}

Macad::Occt::Dir2d Macad::Occt::TColgp_SequenceOfDir2d::ChangeLast()
{
	return Macad::Occt::Dir2d(((::TColgp_SequenceOfDir2d*)_NativeInstance)->ChangeLast());
}

Macad::Occt::Dir2d Macad::Occt::TColgp_SequenceOfDir2d::Value(int theIndex)
{
	return Macad::Occt::Dir2d(((::TColgp_SequenceOfDir2d*)_NativeInstance)->Value(theIndex));
}

Macad::Occt::Dir2d Macad::Occt::TColgp_SequenceOfDir2d::ChangeValue(int theIndex)
{
	return Macad::Occt::Dir2d(((::TColgp_SequenceOfDir2d*)_NativeInstance)->ChangeValue(theIndex));
}

void Macad::Occt::TColgp_SequenceOfDir2d::SetValue(int theIndex, Macad::Occt::Dir2d theItem)
{
	pin_ptr<Macad::Occt::Dir2d> pp_theItem = &theItem;
	((::TColgp_SequenceOfDir2d*)_NativeInstance)->SetValue(theIndex, *(gp_Dir2d*)pp_theItem);
}




//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfPnt
//---------------------------------------------------------------------

Macad::Occt::TColgp_SequenceOfPnt::TColgp_SequenceOfPnt()
	: BaseClass<::TColgp_SequenceOfPnt>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_SequenceOfPnt();
}

Macad::Occt::TColgp_SequenceOfPnt::TColgp_SequenceOfPnt(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TColgp_SequenceOfPnt>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TColgp_SequenceOfPnt(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TColgp_SequenceOfPnt::TColgp_SequenceOfPnt(Macad::Occt::TColgp_SequenceOfPnt^ theOther)
	: BaseClass<::TColgp_SequenceOfPnt>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_SequenceOfPnt(*(::TColgp_SequenceOfPnt*)theOther->NativeInstance);
}

int Macad::Occt::TColgp_SequenceOfPnt::Size()
{
	return ((::TColgp_SequenceOfPnt*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_SequenceOfPnt::Length()
{
	return ((::TColgp_SequenceOfPnt*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_SequenceOfPnt::Lower()
{
	return ((::TColgp_SequenceOfPnt*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_SequenceOfPnt::Upper()
{
	return ((::TColgp_SequenceOfPnt*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_SequenceOfPnt::IsEmpty()
{
	return ((::TColgp_SequenceOfPnt*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TColgp_SequenceOfPnt::Reverse()
{
	((::TColgp_SequenceOfPnt*)_NativeInstance)->Reverse();
}

void Macad::Occt::TColgp_SequenceOfPnt::Exchange(int I, int J)
{
	((::TColgp_SequenceOfPnt*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TColgp_SequenceOfPnt::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColgp_SequenceOfPnt*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColgp_SequenceOfPnt::Clear()
{
	((::TColgp_SequenceOfPnt*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TColgp_SequenceOfPnt^ Macad::Occt::TColgp_SequenceOfPnt::Assign(Macad::Occt::TColgp_SequenceOfPnt^ theOther)
{
	::TColgp_SequenceOfPnt* _result = new ::TColgp_SequenceOfPnt();
	*_result = ((::TColgp_SequenceOfPnt*)_NativeInstance)->Assign(*(::TColgp_SequenceOfPnt*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfPnt(_result);
}

void Macad::Occt::TColgp_SequenceOfPnt::Remove(int theIndex)
{
	((::TColgp_SequenceOfPnt*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TColgp_SequenceOfPnt::Remove(int theFromIndex, int theToIndex)
{
	((::TColgp_SequenceOfPnt*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TColgp_SequenceOfPnt::Append(Macad::Occt::Pnt theItem)
{
	pin_ptr<Macad::Occt::Pnt> pp_theItem = &theItem;
	((::TColgp_SequenceOfPnt*)_NativeInstance)->Append(*(gp_Pnt*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfPnt::Append(Macad::Occt::TColgp_SequenceOfPnt^ theSeq)
{
	((::TColgp_SequenceOfPnt*)_NativeInstance)->Append(*(::TColgp_SequenceOfPnt*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfPnt::Prepend(Macad::Occt::Pnt theItem)
{
	pin_ptr<Macad::Occt::Pnt> pp_theItem = &theItem;
	((::TColgp_SequenceOfPnt*)_NativeInstance)->Prepend(*(gp_Pnt*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfPnt::Prepend(Macad::Occt::TColgp_SequenceOfPnt^ theSeq)
{
	((::TColgp_SequenceOfPnt*)_NativeInstance)->Prepend(*(::TColgp_SequenceOfPnt*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfPnt::InsertBefore(int theIndex, Macad::Occt::Pnt theItem)
{
	pin_ptr<Macad::Occt::Pnt> pp_theItem = &theItem;
	((::TColgp_SequenceOfPnt*)_NativeInstance)->InsertBefore(theIndex, *(gp_Pnt*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfPnt::InsertBefore(int theIndex, Macad::Occt::TColgp_SequenceOfPnt^ theSeq)
{
	((::TColgp_SequenceOfPnt*)_NativeInstance)->InsertBefore(theIndex, *(::TColgp_SequenceOfPnt*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfPnt::InsertAfter(int theIndex, Macad::Occt::TColgp_SequenceOfPnt^ theSeq)
{
	((::TColgp_SequenceOfPnt*)_NativeInstance)->InsertAfter(theIndex, *(::TColgp_SequenceOfPnt*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfPnt::InsertAfter(int theIndex, Macad::Occt::Pnt theItem)
{
	pin_ptr<Macad::Occt::Pnt> pp_theItem = &theItem;
	((::TColgp_SequenceOfPnt*)_NativeInstance)->InsertAfter(theIndex, *(gp_Pnt*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfPnt::Split(int theIndex, Macad::Occt::TColgp_SequenceOfPnt^ theSeq)
{
	((::TColgp_SequenceOfPnt*)_NativeInstance)->Split(theIndex, *(::TColgp_SequenceOfPnt*)theSeq->NativeInstance);
}

Macad::Occt::Pnt Macad::Occt::TColgp_SequenceOfPnt::First()
{
	return Macad::Occt::Pnt(((::TColgp_SequenceOfPnt*)_NativeInstance)->First());
}

Macad::Occt::Pnt Macad::Occt::TColgp_SequenceOfPnt::ChangeFirst()
{
	return Macad::Occt::Pnt(((::TColgp_SequenceOfPnt*)_NativeInstance)->ChangeFirst());
}

Macad::Occt::Pnt Macad::Occt::TColgp_SequenceOfPnt::Last()
{
	return Macad::Occt::Pnt(((::TColgp_SequenceOfPnt*)_NativeInstance)->Last());
}

Macad::Occt::Pnt Macad::Occt::TColgp_SequenceOfPnt::ChangeLast()
{
	return Macad::Occt::Pnt(((::TColgp_SequenceOfPnt*)_NativeInstance)->ChangeLast());
}

Macad::Occt::Pnt Macad::Occt::TColgp_SequenceOfPnt::Value(int theIndex)
{
	return Macad::Occt::Pnt(((::TColgp_SequenceOfPnt*)_NativeInstance)->Value(theIndex));
}

Macad::Occt::Pnt Macad::Occt::TColgp_SequenceOfPnt::ChangeValue(int theIndex)
{
	return Macad::Occt::Pnt(((::TColgp_SequenceOfPnt*)_NativeInstance)->ChangeValue(theIndex));
}

void Macad::Occt::TColgp_SequenceOfPnt::SetValue(int theIndex, Macad::Occt::Pnt theItem)
{
	pin_ptr<Macad::Occt::Pnt> pp_theItem = &theItem;
	((::TColgp_SequenceOfPnt*)_NativeInstance)->SetValue(theIndex, *(gp_Pnt*)pp_theItem);
}




//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfPnt2d
//---------------------------------------------------------------------

Macad::Occt::TColgp_SequenceOfPnt2d::TColgp_SequenceOfPnt2d()
	: BaseClass<::TColgp_SequenceOfPnt2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_SequenceOfPnt2d();
}

Macad::Occt::TColgp_SequenceOfPnt2d::TColgp_SequenceOfPnt2d(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TColgp_SequenceOfPnt2d>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TColgp_SequenceOfPnt2d(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TColgp_SequenceOfPnt2d::TColgp_SequenceOfPnt2d(Macad::Occt::TColgp_SequenceOfPnt2d^ theOther)
	: BaseClass<::TColgp_SequenceOfPnt2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_SequenceOfPnt2d(*(::TColgp_SequenceOfPnt2d*)theOther->NativeInstance);
}

int Macad::Occt::TColgp_SequenceOfPnt2d::Size()
{
	return ((::TColgp_SequenceOfPnt2d*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_SequenceOfPnt2d::Length()
{
	return ((::TColgp_SequenceOfPnt2d*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_SequenceOfPnt2d::Lower()
{
	return ((::TColgp_SequenceOfPnt2d*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_SequenceOfPnt2d::Upper()
{
	return ((::TColgp_SequenceOfPnt2d*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_SequenceOfPnt2d::IsEmpty()
{
	return ((::TColgp_SequenceOfPnt2d*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TColgp_SequenceOfPnt2d::Reverse()
{
	((::TColgp_SequenceOfPnt2d*)_NativeInstance)->Reverse();
}

void Macad::Occt::TColgp_SequenceOfPnt2d::Exchange(int I, int J)
{
	((::TColgp_SequenceOfPnt2d*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TColgp_SequenceOfPnt2d::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColgp_SequenceOfPnt2d*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColgp_SequenceOfPnt2d::Clear()
{
	((::TColgp_SequenceOfPnt2d*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TColgp_SequenceOfPnt2d^ Macad::Occt::TColgp_SequenceOfPnt2d::Assign(Macad::Occt::TColgp_SequenceOfPnt2d^ theOther)
{
	::TColgp_SequenceOfPnt2d* _result = new ::TColgp_SequenceOfPnt2d();
	*_result = ((::TColgp_SequenceOfPnt2d*)_NativeInstance)->Assign(*(::TColgp_SequenceOfPnt2d*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfPnt2d(_result);
}

void Macad::Occt::TColgp_SequenceOfPnt2d::Remove(int theIndex)
{
	((::TColgp_SequenceOfPnt2d*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TColgp_SequenceOfPnt2d::Remove(int theFromIndex, int theToIndex)
{
	((::TColgp_SequenceOfPnt2d*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TColgp_SequenceOfPnt2d::Append(Macad::Occt::Pnt2d theItem)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_theItem = &theItem;
	((::TColgp_SequenceOfPnt2d*)_NativeInstance)->Append(*(gp_Pnt2d*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfPnt2d::Append(Macad::Occt::TColgp_SequenceOfPnt2d^ theSeq)
{
	((::TColgp_SequenceOfPnt2d*)_NativeInstance)->Append(*(::TColgp_SequenceOfPnt2d*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfPnt2d::Prepend(Macad::Occt::Pnt2d theItem)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_theItem = &theItem;
	((::TColgp_SequenceOfPnt2d*)_NativeInstance)->Prepend(*(gp_Pnt2d*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfPnt2d::Prepend(Macad::Occt::TColgp_SequenceOfPnt2d^ theSeq)
{
	((::TColgp_SequenceOfPnt2d*)_NativeInstance)->Prepend(*(::TColgp_SequenceOfPnt2d*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfPnt2d::InsertBefore(int theIndex, Macad::Occt::Pnt2d theItem)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_theItem = &theItem;
	((::TColgp_SequenceOfPnt2d*)_NativeInstance)->InsertBefore(theIndex, *(gp_Pnt2d*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfPnt2d::InsertBefore(int theIndex, Macad::Occt::TColgp_SequenceOfPnt2d^ theSeq)
{
	((::TColgp_SequenceOfPnt2d*)_NativeInstance)->InsertBefore(theIndex, *(::TColgp_SequenceOfPnt2d*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfPnt2d::InsertAfter(int theIndex, Macad::Occt::TColgp_SequenceOfPnt2d^ theSeq)
{
	((::TColgp_SequenceOfPnt2d*)_NativeInstance)->InsertAfter(theIndex, *(::TColgp_SequenceOfPnt2d*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfPnt2d::InsertAfter(int theIndex, Macad::Occt::Pnt2d theItem)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_theItem = &theItem;
	((::TColgp_SequenceOfPnt2d*)_NativeInstance)->InsertAfter(theIndex, *(gp_Pnt2d*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfPnt2d::Split(int theIndex, Macad::Occt::TColgp_SequenceOfPnt2d^ theSeq)
{
	((::TColgp_SequenceOfPnt2d*)_NativeInstance)->Split(theIndex, *(::TColgp_SequenceOfPnt2d*)theSeq->NativeInstance);
}

Macad::Occt::Pnt2d Macad::Occt::TColgp_SequenceOfPnt2d::First()
{
	return Macad::Occt::Pnt2d(((::TColgp_SequenceOfPnt2d*)_NativeInstance)->First());
}

Macad::Occt::Pnt2d Macad::Occt::TColgp_SequenceOfPnt2d::ChangeFirst()
{
	return Macad::Occt::Pnt2d(((::TColgp_SequenceOfPnt2d*)_NativeInstance)->ChangeFirst());
}

Macad::Occt::Pnt2d Macad::Occt::TColgp_SequenceOfPnt2d::Last()
{
	return Macad::Occt::Pnt2d(((::TColgp_SequenceOfPnt2d*)_NativeInstance)->Last());
}

Macad::Occt::Pnt2d Macad::Occt::TColgp_SequenceOfPnt2d::ChangeLast()
{
	return Macad::Occt::Pnt2d(((::TColgp_SequenceOfPnt2d*)_NativeInstance)->ChangeLast());
}

Macad::Occt::Pnt2d Macad::Occt::TColgp_SequenceOfPnt2d::Value(int theIndex)
{
	return Macad::Occt::Pnt2d(((::TColgp_SequenceOfPnt2d*)_NativeInstance)->Value(theIndex));
}

Macad::Occt::Pnt2d Macad::Occt::TColgp_SequenceOfPnt2d::ChangeValue(int theIndex)
{
	return Macad::Occt::Pnt2d(((::TColgp_SequenceOfPnt2d*)_NativeInstance)->ChangeValue(theIndex));
}

void Macad::Occt::TColgp_SequenceOfPnt2d::SetValue(int theIndex, Macad::Occt::Pnt2d theItem)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_theItem = &theItem;
	((::TColgp_SequenceOfPnt2d*)_NativeInstance)->SetValue(theIndex, *(gp_Pnt2d*)pp_theItem);
}




//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfVec
//---------------------------------------------------------------------

Macad::Occt::TColgp_SequenceOfVec::TColgp_SequenceOfVec()
	: BaseClass<::TColgp_SequenceOfVec>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_SequenceOfVec();
}

Macad::Occt::TColgp_SequenceOfVec::TColgp_SequenceOfVec(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TColgp_SequenceOfVec>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TColgp_SequenceOfVec(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TColgp_SequenceOfVec::TColgp_SequenceOfVec(Macad::Occt::TColgp_SequenceOfVec^ theOther)
	: BaseClass<::TColgp_SequenceOfVec>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_SequenceOfVec(*(::TColgp_SequenceOfVec*)theOther->NativeInstance);
}

int Macad::Occt::TColgp_SequenceOfVec::Size()
{
	return ((::TColgp_SequenceOfVec*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_SequenceOfVec::Length()
{
	return ((::TColgp_SequenceOfVec*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_SequenceOfVec::Lower()
{
	return ((::TColgp_SequenceOfVec*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_SequenceOfVec::Upper()
{
	return ((::TColgp_SequenceOfVec*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_SequenceOfVec::IsEmpty()
{
	return ((::TColgp_SequenceOfVec*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TColgp_SequenceOfVec::Reverse()
{
	((::TColgp_SequenceOfVec*)_NativeInstance)->Reverse();
}

void Macad::Occt::TColgp_SequenceOfVec::Exchange(int I, int J)
{
	((::TColgp_SequenceOfVec*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TColgp_SequenceOfVec::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColgp_SequenceOfVec*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColgp_SequenceOfVec::Clear()
{
	((::TColgp_SequenceOfVec*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TColgp_SequenceOfVec^ Macad::Occt::TColgp_SequenceOfVec::Assign(Macad::Occt::TColgp_SequenceOfVec^ theOther)
{
	::TColgp_SequenceOfVec* _result = new ::TColgp_SequenceOfVec();
	*_result = ((::TColgp_SequenceOfVec*)_NativeInstance)->Assign(*(::TColgp_SequenceOfVec*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfVec(_result);
}

void Macad::Occt::TColgp_SequenceOfVec::Remove(int theIndex)
{
	((::TColgp_SequenceOfVec*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TColgp_SequenceOfVec::Remove(int theFromIndex, int theToIndex)
{
	((::TColgp_SequenceOfVec*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TColgp_SequenceOfVec::Append(Macad::Occt::Vec theItem)
{
	pin_ptr<Macad::Occt::Vec> pp_theItem = &theItem;
	((::TColgp_SequenceOfVec*)_NativeInstance)->Append(*(gp_Vec*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfVec::Append(Macad::Occt::TColgp_SequenceOfVec^ theSeq)
{
	((::TColgp_SequenceOfVec*)_NativeInstance)->Append(*(::TColgp_SequenceOfVec*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfVec::Prepend(Macad::Occt::Vec theItem)
{
	pin_ptr<Macad::Occt::Vec> pp_theItem = &theItem;
	((::TColgp_SequenceOfVec*)_NativeInstance)->Prepend(*(gp_Vec*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfVec::Prepend(Macad::Occt::TColgp_SequenceOfVec^ theSeq)
{
	((::TColgp_SequenceOfVec*)_NativeInstance)->Prepend(*(::TColgp_SequenceOfVec*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfVec::InsertBefore(int theIndex, Macad::Occt::Vec theItem)
{
	pin_ptr<Macad::Occt::Vec> pp_theItem = &theItem;
	((::TColgp_SequenceOfVec*)_NativeInstance)->InsertBefore(theIndex, *(gp_Vec*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfVec::InsertBefore(int theIndex, Macad::Occt::TColgp_SequenceOfVec^ theSeq)
{
	((::TColgp_SequenceOfVec*)_NativeInstance)->InsertBefore(theIndex, *(::TColgp_SequenceOfVec*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfVec::InsertAfter(int theIndex, Macad::Occt::TColgp_SequenceOfVec^ theSeq)
{
	((::TColgp_SequenceOfVec*)_NativeInstance)->InsertAfter(theIndex, *(::TColgp_SequenceOfVec*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfVec::InsertAfter(int theIndex, Macad::Occt::Vec theItem)
{
	pin_ptr<Macad::Occt::Vec> pp_theItem = &theItem;
	((::TColgp_SequenceOfVec*)_NativeInstance)->InsertAfter(theIndex, *(gp_Vec*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfVec::Split(int theIndex, Macad::Occt::TColgp_SequenceOfVec^ theSeq)
{
	((::TColgp_SequenceOfVec*)_NativeInstance)->Split(theIndex, *(::TColgp_SequenceOfVec*)theSeq->NativeInstance);
}

Macad::Occt::Vec Macad::Occt::TColgp_SequenceOfVec::First()
{
	return Macad::Occt::Vec(((::TColgp_SequenceOfVec*)_NativeInstance)->First());
}

Macad::Occt::Vec Macad::Occt::TColgp_SequenceOfVec::ChangeFirst()
{
	return Macad::Occt::Vec(((::TColgp_SequenceOfVec*)_NativeInstance)->ChangeFirst());
}

Macad::Occt::Vec Macad::Occt::TColgp_SequenceOfVec::Last()
{
	return Macad::Occt::Vec(((::TColgp_SequenceOfVec*)_NativeInstance)->Last());
}

Macad::Occt::Vec Macad::Occt::TColgp_SequenceOfVec::ChangeLast()
{
	return Macad::Occt::Vec(((::TColgp_SequenceOfVec*)_NativeInstance)->ChangeLast());
}

Macad::Occt::Vec Macad::Occt::TColgp_SequenceOfVec::Value(int theIndex)
{
	return Macad::Occt::Vec(((::TColgp_SequenceOfVec*)_NativeInstance)->Value(theIndex));
}

Macad::Occt::Vec Macad::Occt::TColgp_SequenceOfVec::ChangeValue(int theIndex)
{
	return Macad::Occt::Vec(((::TColgp_SequenceOfVec*)_NativeInstance)->ChangeValue(theIndex));
}

void Macad::Occt::TColgp_SequenceOfVec::SetValue(int theIndex, Macad::Occt::Vec theItem)
{
	pin_ptr<Macad::Occt::Vec> pp_theItem = &theItem;
	((::TColgp_SequenceOfVec*)_NativeInstance)->SetValue(theIndex, *(gp_Vec*)pp_theItem);
}




//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfVec2d
//---------------------------------------------------------------------

Macad::Occt::TColgp_SequenceOfVec2d::TColgp_SequenceOfVec2d()
	: BaseClass<::TColgp_SequenceOfVec2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_SequenceOfVec2d();
}

Macad::Occt::TColgp_SequenceOfVec2d::TColgp_SequenceOfVec2d(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TColgp_SequenceOfVec2d>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TColgp_SequenceOfVec2d(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TColgp_SequenceOfVec2d::TColgp_SequenceOfVec2d(Macad::Occt::TColgp_SequenceOfVec2d^ theOther)
	: BaseClass<::TColgp_SequenceOfVec2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_SequenceOfVec2d(*(::TColgp_SequenceOfVec2d*)theOther->NativeInstance);
}

int Macad::Occt::TColgp_SequenceOfVec2d::Size()
{
	return ((::TColgp_SequenceOfVec2d*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_SequenceOfVec2d::Length()
{
	return ((::TColgp_SequenceOfVec2d*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_SequenceOfVec2d::Lower()
{
	return ((::TColgp_SequenceOfVec2d*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_SequenceOfVec2d::Upper()
{
	return ((::TColgp_SequenceOfVec2d*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_SequenceOfVec2d::IsEmpty()
{
	return ((::TColgp_SequenceOfVec2d*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TColgp_SequenceOfVec2d::Reverse()
{
	((::TColgp_SequenceOfVec2d*)_NativeInstance)->Reverse();
}

void Macad::Occt::TColgp_SequenceOfVec2d::Exchange(int I, int J)
{
	((::TColgp_SequenceOfVec2d*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TColgp_SequenceOfVec2d::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColgp_SequenceOfVec2d*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColgp_SequenceOfVec2d::Clear()
{
	((::TColgp_SequenceOfVec2d*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TColgp_SequenceOfVec2d^ Macad::Occt::TColgp_SequenceOfVec2d::Assign(Macad::Occt::TColgp_SequenceOfVec2d^ theOther)
{
	::TColgp_SequenceOfVec2d* _result = new ::TColgp_SequenceOfVec2d();
	*_result = ((::TColgp_SequenceOfVec2d*)_NativeInstance)->Assign(*(::TColgp_SequenceOfVec2d*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfVec2d(_result);
}

void Macad::Occt::TColgp_SequenceOfVec2d::Remove(int theIndex)
{
	((::TColgp_SequenceOfVec2d*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TColgp_SequenceOfVec2d::Remove(int theFromIndex, int theToIndex)
{
	((::TColgp_SequenceOfVec2d*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TColgp_SequenceOfVec2d::Append(Macad::Occt::Vec2d theItem)
{
	pin_ptr<Macad::Occt::Vec2d> pp_theItem = &theItem;
	((::TColgp_SequenceOfVec2d*)_NativeInstance)->Append(*(gp_Vec2d*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfVec2d::Append(Macad::Occt::TColgp_SequenceOfVec2d^ theSeq)
{
	((::TColgp_SequenceOfVec2d*)_NativeInstance)->Append(*(::TColgp_SequenceOfVec2d*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfVec2d::Prepend(Macad::Occt::Vec2d theItem)
{
	pin_ptr<Macad::Occt::Vec2d> pp_theItem = &theItem;
	((::TColgp_SequenceOfVec2d*)_NativeInstance)->Prepend(*(gp_Vec2d*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfVec2d::Prepend(Macad::Occt::TColgp_SequenceOfVec2d^ theSeq)
{
	((::TColgp_SequenceOfVec2d*)_NativeInstance)->Prepend(*(::TColgp_SequenceOfVec2d*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfVec2d::InsertBefore(int theIndex, Macad::Occt::Vec2d theItem)
{
	pin_ptr<Macad::Occt::Vec2d> pp_theItem = &theItem;
	((::TColgp_SequenceOfVec2d*)_NativeInstance)->InsertBefore(theIndex, *(gp_Vec2d*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfVec2d::InsertBefore(int theIndex, Macad::Occt::TColgp_SequenceOfVec2d^ theSeq)
{
	((::TColgp_SequenceOfVec2d*)_NativeInstance)->InsertBefore(theIndex, *(::TColgp_SequenceOfVec2d*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfVec2d::InsertAfter(int theIndex, Macad::Occt::TColgp_SequenceOfVec2d^ theSeq)
{
	((::TColgp_SequenceOfVec2d*)_NativeInstance)->InsertAfter(theIndex, *(::TColgp_SequenceOfVec2d*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfVec2d::InsertAfter(int theIndex, Macad::Occt::Vec2d theItem)
{
	pin_ptr<Macad::Occt::Vec2d> pp_theItem = &theItem;
	((::TColgp_SequenceOfVec2d*)_NativeInstance)->InsertAfter(theIndex, *(gp_Vec2d*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfVec2d::Split(int theIndex, Macad::Occt::TColgp_SequenceOfVec2d^ theSeq)
{
	((::TColgp_SequenceOfVec2d*)_NativeInstance)->Split(theIndex, *(::TColgp_SequenceOfVec2d*)theSeq->NativeInstance);
}

Macad::Occt::Vec2d Macad::Occt::TColgp_SequenceOfVec2d::First()
{
	return Macad::Occt::Vec2d(((::TColgp_SequenceOfVec2d*)_NativeInstance)->First());
}

Macad::Occt::Vec2d Macad::Occt::TColgp_SequenceOfVec2d::ChangeFirst()
{
	return Macad::Occt::Vec2d(((::TColgp_SequenceOfVec2d*)_NativeInstance)->ChangeFirst());
}

Macad::Occt::Vec2d Macad::Occt::TColgp_SequenceOfVec2d::Last()
{
	return Macad::Occt::Vec2d(((::TColgp_SequenceOfVec2d*)_NativeInstance)->Last());
}

Macad::Occt::Vec2d Macad::Occt::TColgp_SequenceOfVec2d::ChangeLast()
{
	return Macad::Occt::Vec2d(((::TColgp_SequenceOfVec2d*)_NativeInstance)->ChangeLast());
}

Macad::Occt::Vec2d Macad::Occt::TColgp_SequenceOfVec2d::Value(int theIndex)
{
	return Macad::Occt::Vec2d(((::TColgp_SequenceOfVec2d*)_NativeInstance)->Value(theIndex));
}

Macad::Occt::Vec2d Macad::Occt::TColgp_SequenceOfVec2d::ChangeValue(int theIndex)
{
	return Macad::Occt::Vec2d(((::TColgp_SequenceOfVec2d*)_NativeInstance)->ChangeValue(theIndex));
}

void Macad::Occt::TColgp_SequenceOfVec2d::SetValue(int theIndex, Macad::Occt::Vec2d theItem)
{
	pin_ptr<Macad::Occt::Vec2d> pp_theItem = &theItem;
	((::TColgp_SequenceOfVec2d*)_NativeInstance)->SetValue(theIndex, *(gp_Vec2d*)pp_theItem);
}




//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfXY
//---------------------------------------------------------------------

Macad::Occt::TColgp_SequenceOfXY::TColgp_SequenceOfXY()
	: BaseClass<::TColgp_SequenceOfXY>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_SequenceOfXY();
}

Macad::Occt::TColgp_SequenceOfXY::TColgp_SequenceOfXY(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TColgp_SequenceOfXY>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TColgp_SequenceOfXY(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TColgp_SequenceOfXY::TColgp_SequenceOfXY(Macad::Occt::TColgp_SequenceOfXY^ theOther)
	: BaseClass<::TColgp_SequenceOfXY>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_SequenceOfXY(*(::TColgp_SequenceOfXY*)theOther->NativeInstance);
}

int Macad::Occt::TColgp_SequenceOfXY::Size()
{
	return ((::TColgp_SequenceOfXY*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_SequenceOfXY::Length()
{
	return ((::TColgp_SequenceOfXY*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_SequenceOfXY::Lower()
{
	return ((::TColgp_SequenceOfXY*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_SequenceOfXY::Upper()
{
	return ((::TColgp_SequenceOfXY*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_SequenceOfXY::IsEmpty()
{
	return ((::TColgp_SequenceOfXY*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TColgp_SequenceOfXY::Reverse()
{
	((::TColgp_SequenceOfXY*)_NativeInstance)->Reverse();
}

void Macad::Occt::TColgp_SequenceOfXY::Exchange(int I, int J)
{
	((::TColgp_SequenceOfXY*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TColgp_SequenceOfXY::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColgp_SequenceOfXY*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColgp_SequenceOfXY::Clear()
{
	((::TColgp_SequenceOfXY*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TColgp_SequenceOfXY^ Macad::Occt::TColgp_SequenceOfXY::Assign(Macad::Occt::TColgp_SequenceOfXY^ theOther)
{
	::TColgp_SequenceOfXY* _result = new ::TColgp_SequenceOfXY();
	*_result = ((::TColgp_SequenceOfXY*)_NativeInstance)->Assign(*(::TColgp_SequenceOfXY*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfXY(_result);
}

void Macad::Occt::TColgp_SequenceOfXY::Remove(int theIndex)
{
	((::TColgp_SequenceOfXY*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TColgp_SequenceOfXY::Remove(int theFromIndex, int theToIndex)
{
	((::TColgp_SequenceOfXY*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TColgp_SequenceOfXY::Append(Macad::Occt::XY theItem)
{
	pin_ptr<Macad::Occt::XY> pp_theItem = &theItem;
	((::TColgp_SequenceOfXY*)_NativeInstance)->Append(*(gp_XY*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfXY::Append(Macad::Occt::TColgp_SequenceOfXY^ theSeq)
{
	((::TColgp_SequenceOfXY*)_NativeInstance)->Append(*(::TColgp_SequenceOfXY*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfXY::Prepend(Macad::Occt::XY theItem)
{
	pin_ptr<Macad::Occt::XY> pp_theItem = &theItem;
	((::TColgp_SequenceOfXY*)_NativeInstance)->Prepend(*(gp_XY*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfXY::Prepend(Macad::Occt::TColgp_SequenceOfXY^ theSeq)
{
	((::TColgp_SequenceOfXY*)_NativeInstance)->Prepend(*(::TColgp_SequenceOfXY*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfXY::InsertBefore(int theIndex, Macad::Occt::XY theItem)
{
	pin_ptr<Macad::Occt::XY> pp_theItem = &theItem;
	((::TColgp_SequenceOfXY*)_NativeInstance)->InsertBefore(theIndex, *(gp_XY*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfXY::InsertBefore(int theIndex, Macad::Occt::TColgp_SequenceOfXY^ theSeq)
{
	((::TColgp_SequenceOfXY*)_NativeInstance)->InsertBefore(theIndex, *(::TColgp_SequenceOfXY*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfXY::InsertAfter(int theIndex, Macad::Occt::TColgp_SequenceOfXY^ theSeq)
{
	((::TColgp_SequenceOfXY*)_NativeInstance)->InsertAfter(theIndex, *(::TColgp_SequenceOfXY*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfXY::InsertAfter(int theIndex, Macad::Occt::XY theItem)
{
	pin_ptr<Macad::Occt::XY> pp_theItem = &theItem;
	((::TColgp_SequenceOfXY*)_NativeInstance)->InsertAfter(theIndex, *(gp_XY*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfXY::Split(int theIndex, Macad::Occt::TColgp_SequenceOfXY^ theSeq)
{
	((::TColgp_SequenceOfXY*)_NativeInstance)->Split(theIndex, *(::TColgp_SequenceOfXY*)theSeq->NativeInstance);
}

Macad::Occt::XY Macad::Occt::TColgp_SequenceOfXY::First()
{
	return Macad::Occt::XY(((::TColgp_SequenceOfXY*)_NativeInstance)->First());
}

Macad::Occt::XY Macad::Occt::TColgp_SequenceOfXY::ChangeFirst()
{
	return Macad::Occt::XY(((::TColgp_SequenceOfXY*)_NativeInstance)->ChangeFirst());
}

Macad::Occt::XY Macad::Occt::TColgp_SequenceOfXY::Last()
{
	return Macad::Occt::XY(((::TColgp_SequenceOfXY*)_NativeInstance)->Last());
}

Macad::Occt::XY Macad::Occt::TColgp_SequenceOfXY::ChangeLast()
{
	return Macad::Occt::XY(((::TColgp_SequenceOfXY*)_NativeInstance)->ChangeLast());
}

Macad::Occt::XY Macad::Occt::TColgp_SequenceOfXY::Value(int theIndex)
{
	return Macad::Occt::XY(((::TColgp_SequenceOfXY*)_NativeInstance)->Value(theIndex));
}

Macad::Occt::XY Macad::Occt::TColgp_SequenceOfXY::ChangeValue(int theIndex)
{
	return Macad::Occt::XY(((::TColgp_SequenceOfXY*)_NativeInstance)->ChangeValue(theIndex));
}

void Macad::Occt::TColgp_SequenceOfXY::SetValue(int theIndex, Macad::Occt::XY theItem)
{
	pin_ptr<Macad::Occt::XY> pp_theItem = &theItem;
	((::TColgp_SequenceOfXY*)_NativeInstance)->SetValue(theIndex, *(gp_XY*)pp_theItem);
}




//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfXYZ
//---------------------------------------------------------------------

Macad::Occt::TColgp_SequenceOfXYZ::TColgp_SequenceOfXYZ()
	: BaseClass<::TColgp_SequenceOfXYZ>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_SequenceOfXYZ();
}

Macad::Occt::TColgp_SequenceOfXYZ::TColgp_SequenceOfXYZ(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TColgp_SequenceOfXYZ>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TColgp_SequenceOfXYZ(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TColgp_SequenceOfXYZ::TColgp_SequenceOfXYZ(Macad::Occt::TColgp_SequenceOfXYZ^ theOther)
	: BaseClass<::TColgp_SequenceOfXYZ>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_SequenceOfXYZ(*(::TColgp_SequenceOfXYZ*)theOther->NativeInstance);
}

int Macad::Occt::TColgp_SequenceOfXYZ::Size()
{
	return ((::TColgp_SequenceOfXYZ*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_SequenceOfXYZ::Length()
{
	return ((::TColgp_SequenceOfXYZ*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_SequenceOfXYZ::Lower()
{
	return ((::TColgp_SequenceOfXYZ*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_SequenceOfXYZ::Upper()
{
	return ((::TColgp_SequenceOfXYZ*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_SequenceOfXYZ::IsEmpty()
{
	return ((::TColgp_SequenceOfXYZ*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TColgp_SequenceOfXYZ::Reverse()
{
	((::TColgp_SequenceOfXYZ*)_NativeInstance)->Reverse();
}

void Macad::Occt::TColgp_SequenceOfXYZ::Exchange(int I, int J)
{
	((::TColgp_SequenceOfXYZ*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TColgp_SequenceOfXYZ::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColgp_SequenceOfXYZ*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColgp_SequenceOfXYZ::Clear()
{
	((::TColgp_SequenceOfXYZ*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TColgp_SequenceOfXYZ^ Macad::Occt::TColgp_SequenceOfXYZ::Assign(Macad::Occt::TColgp_SequenceOfXYZ^ theOther)
{
	::TColgp_SequenceOfXYZ* _result = new ::TColgp_SequenceOfXYZ();
	*_result = ((::TColgp_SequenceOfXYZ*)_NativeInstance)->Assign(*(::TColgp_SequenceOfXYZ*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfXYZ(_result);
}

void Macad::Occt::TColgp_SequenceOfXYZ::Remove(int theIndex)
{
	((::TColgp_SequenceOfXYZ*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TColgp_SequenceOfXYZ::Remove(int theFromIndex, int theToIndex)
{
	((::TColgp_SequenceOfXYZ*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TColgp_SequenceOfXYZ::Append(Macad::Occt::XYZ theItem)
{
	pin_ptr<Macad::Occt::XYZ> pp_theItem = &theItem;
	((::TColgp_SequenceOfXYZ*)_NativeInstance)->Append(*(gp_XYZ*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfXYZ::Append(Macad::Occt::TColgp_SequenceOfXYZ^ theSeq)
{
	((::TColgp_SequenceOfXYZ*)_NativeInstance)->Append(*(::TColgp_SequenceOfXYZ*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfXYZ::Prepend(Macad::Occt::XYZ theItem)
{
	pin_ptr<Macad::Occt::XYZ> pp_theItem = &theItem;
	((::TColgp_SequenceOfXYZ*)_NativeInstance)->Prepend(*(gp_XYZ*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfXYZ::Prepend(Macad::Occt::TColgp_SequenceOfXYZ^ theSeq)
{
	((::TColgp_SequenceOfXYZ*)_NativeInstance)->Prepend(*(::TColgp_SequenceOfXYZ*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfXYZ::InsertBefore(int theIndex, Macad::Occt::XYZ theItem)
{
	pin_ptr<Macad::Occt::XYZ> pp_theItem = &theItem;
	((::TColgp_SequenceOfXYZ*)_NativeInstance)->InsertBefore(theIndex, *(gp_XYZ*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfXYZ::InsertBefore(int theIndex, Macad::Occt::TColgp_SequenceOfXYZ^ theSeq)
{
	((::TColgp_SequenceOfXYZ*)_NativeInstance)->InsertBefore(theIndex, *(::TColgp_SequenceOfXYZ*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfXYZ::InsertAfter(int theIndex, Macad::Occt::TColgp_SequenceOfXYZ^ theSeq)
{
	((::TColgp_SequenceOfXYZ*)_NativeInstance)->InsertAfter(theIndex, *(::TColgp_SequenceOfXYZ*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfXYZ::InsertAfter(int theIndex, Macad::Occt::XYZ theItem)
{
	pin_ptr<Macad::Occt::XYZ> pp_theItem = &theItem;
	((::TColgp_SequenceOfXYZ*)_NativeInstance)->InsertAfter(theIndex, *(gp_XYZ*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfXYZ::Split(int theIndex, Macad::Occt::TColgp_SequenceOfXYZ^ theSeq)
{
	((::TColgp_SequenceOfXYZ*)_NativeInstance)->Split(theIndex, *(::TColgp_SequenceOfXYZ*)theSeq->NativeInstance);
}

Macad::Occt::XYZ Macad::Occt::TColgp_SequenceOfXYZ::First()
{
	return Macad::Occt::XYZ(((::TColgp_SequenceOfXYZ*)_NativeInstance)->First());
}

Macad::Occt::XYZ Macad::Occt::TColgp_SequenceOfXYZ::ChangeFirst()
{
	return Macad::Occt::XYZ(((::TColgp_SequenceOfXYZ*)_NativeInstance)->ChangeFirst());
}

Macad::Occt::XYZ Macad::Occt::TColgp_SequenceOfXYZ::Last()
{
	return Macad::Occt::XYZ(((::TColgp_SequenceOfXYZ*)_NativeInstance)->Last());
}

Macad::Occt::XYZ Macad::Occt::TColgp_SequenceOfXYZ::ChangeLast()
{
	return Macad::Occt::XYZ(((::TColgp_SequenceOfXYZ*)_NativeInstance)->ChangeLast());
}

Macad::Occt::XYZ Macad::Occt::TColgp_SequenceOfXYZ::Value(int theIndex)
{
	return Macad::Occt::XYZ(((::TColgp_SequenceOfXYZ*)_NativeInstance)->Value(theIndex));
}

Macad::Occt::XYZ Macad::Occt::TColgp_SequenceOfXYZ::ChangeValue(int theIndex)
{
	return Macad::Occt::XYZ(((::TColgp_SequenceOfXYZ*)_NativeInstance)->ChangeValue(theIndex));
}

void Macad::Occt::TColgp_SequenceOfXYZ::SetValue(int theIndex, Macad::Occt::XYZ theItem)
{
	pin_ptr<Macad::Occt::XYZ> pp_theItem = &theItem;
	((::TColgp_SequenceOfXYZ*)_NativeInstance)->SetValue(theIndex, *(gp_XYZ*)pp_theItem);
}




//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfArray1OfPnt2d
//---------------------------------------------------------------------

Macad::Occt::TColgp_SequenceOfArray1OfPnt2d::TColgp_SequenceOfArray1OfPnt2d()
	: BaseClass<::TColgp_SequenceOfArray1OfPnt2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_SequenceOfArray1OfPnt2d();
}

Macad::Occt::TColgp_SequenceOfArray1OfPnt2d::TColgp_SequenceOfArray1OfPnt2d(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TColgp_SequenceOfArray1OfPnt2d>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TColgp_SequenceOfArray1OfPnt2d(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TColgp_SequenceOfArray1OfPnt2d::TColgp_SequenceOfArray1OfPnt2d(Macad::Occt::TColgp_SequenceOfArray1OfPnt2d^ theOther)
	: BaseClass<::TColgp_SequenceOfArray1OfPnt2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_SequenceOfArray1OfPnt2d(*(::TColgp_SequenceOfArray1OfPnt2d*)theOther->NativeInstance);
}

int Macad::Occt::TColgp_SequenceOfArray1OfPnt2d::Size()
{
	return ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_SequenceOfArray1OfPnt2d::Length()
{
	return ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_SequenceOfArray1OfPnt2d::Lower()
{
	return ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_SequenceOfArray1OfPnt2d::Upper()
{
	return ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_SequenceOfArray1OfPnt2d::IsEmpty()
{
	return ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TColgp_SequenceOfArray1OfPnt2d::Reverse()
{
	((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->Reverse();
}

void Macad::Occt::TColgp_SequenceOfArray1OfPnt2d::Exchange(int I, int J)
{
	((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TColgp_SequenceOfArray1OfPnt2d::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColgp_SequenceOfArray1OfPnt2d::Clear()
{
	((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TColgp_SequenceOfArray1OfPnt2d^ Macad::Occt::TColgp_SequenceOfArray1OfPnt2d::Assign(Macad::Occt::TColgp_SequenceOfArray1OfPnt2d^ theOther)
{
	::TColgp_SequenceOfArray1OfPnt2d* _result = new ::TColgp_SequenceOfArray1OfPnt2d();
	*_result = ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->Assign(*(::TColgp_SequenceOfArray1OfPnt2d*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfArray1OfPnt2d(_result);
}

void Macad::Occt::TColgp_SequenceOfArray1OfPnt2d::Remove(int theIndex)
{
	((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TColgp_SequenceOfArray1OfPnt2d::Remove(int theFromIndex, int theToIndex)
{
	((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TColgp_SequenceOfArray1OfPnt2d::Append(Macad::Occt::TColgp_HArray1OfPnt2d^ theItem)
{
	Handle(::TColgp_HArray1OfPnt2d) h_theItem = theItem->NativeInstance;
	((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::TColgp_SequenceOfArray1OfPnt2d::Append(Macad::Occt::TColgp_SequenceOfArray1OfPnt2d^ theSeq)
{
	((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->Append(*(::TColgp_SequenceOfArray1OfPnt2d*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfArray1OfPnt2d::Prepend(Macad::Occt::TColgp_HArray1OfPnt2d^ theItem)
{
	Handle(::TColgp_HArray1OfPnt2d) h_theItem = theItem->NativeInstance;
	((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::TColgp_SequenceOfArray1OfPnt2d::Prepend(Macad::Occt::TColgp_SequenceOfArray1OfPnt2d^ theSeq)
{
	((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->Prepend(*(::TColgp_SequenceOfArray1OfPnt2d*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfArray1OfPnt2d::InsertBefore(int theIndex, Macad::Occt::TColgp_HArray1OfPnt2d^ theItem)
{
	Handle(::TColgp_HArray1OfPnt2d) h_theItem = theItem->NativeInstance;
	((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->InsertBefore(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::TColgp_SequenceOfArray1OfPnt2d::InsertBefore(int theIndex, Macad::Occt::TColgp_SequenceOfArray1OfPnt2d^ theSeq)
{
	((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->InsertBefore(theIndex, *(::TColgp_SequenceOfArray1OfPnt2d*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfArray1OfPnt2d::InsertAfter(int theIndex, Macad::Occt::TColgp_SequenceOfArray1OfPnt2d^ theSeq)
{
	((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->InsertAfter(theIndex, *(::TColgp_SequenceOfArray1OfPnt2d*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfArray1OfPnt2d::InsertAfter(int theIndex, Macad::Occt::TColgp_HArray1OfPnt2d^ theItem)
{
	Handle(::TColgp_HArray1OfPnt2d) h_theItem = theItem->NativeInstance;
	((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->InsertAfter(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::TColgp_SequenceOfArray1OfPnt2d::Split(int theIndex, Macad::Occt::TColgp_SequenceOfArray1OfPnt2d^ theSeq)
{
	((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->Split(theIndex, *(::TColgp_SequenceOfArray1OfPnt2d*)theSeq->NativeInstance);
}

Macad::Occt::TColgp_HArray1OfPnt2d^ Macad::Occt::TColgp_SequenceOfArray1OfPnt2d::First()
{
	Handle(::TColgp_HArray1OfPnt2d) _result;
	_result = ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HArray1OfPnt2d::CreateDowncasted( _result.get());
}

Macad::Occt::TColgp_HArray1OfPnt2d^ Macad::Occt::TColgp_SequenceOfArray1OfPnt2d::ChangeFirst()
{
	Handle(::TColgp_HArray1OfPnt2d) _result;
	_result = ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->ChangeFirst();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HArray1OfPnt2d::CreateDowncasted( _result.get());
}

Macad::Occt::TColgp_HArray1OfPnt2d^ Macad::Occt::TColgp_SequenceOfArray1OfPnt2d::Last()
{
	Handle(::TColgp_HArray1OfPnt2d) _result;
	_result = ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HArray1OfPnt2d::CreateDowncasted( _result.get());
}

Macad::Occt::TColgp_HArray1OfPnt2d^ Macad::Occt::TColgp_SequenceOfArray1OfPnt2d::ChangeLast()
{
	Handle(::TColgp_HArray1OfPnt2d) _result;
	_result = ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->ChangeLast();
	 return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HArray1OfPnt2d::CreateDowncasted( _result.get());
}

Macad::Occt::TColgp_HArray1OfPnt2d^ Macad::Occt::TColgp_SequenceOfArray1OfPnt2d::Value(int theIndex)
{
	Handle(::TColgp_HArray1OfPnt2d) _result;
	_result = ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->Value(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HArray1OfPnt2d::CreateDowncasted( _result.get());
}

Macad::Occt::TColgp_HArray1OfPnt2d^ Macad::Occt::TColgp_SequenceOfArray1OfPnt2d::ChangeValue(int theIndex)
{
	Handle(::TColgp_HArray1OfPnt2d) _result;
	_result = ((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->ChangeValue(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::TColgp_HArray1OfPnt2d::CreateDowncasted( _result.get());
}

void Macad::Occt::TColgp_SequenceOfArray1OfPnt2d::SetValue(int theIndex, Macad::Occt::TColgp_HArray1OfPnt2d^ theItem)
{
	Handle(::TColgp_HArray1OfPnt2d) h_theItem = theItem->NativeInstance;
	((::TColgp_SequenceOfArray1OfPnt2d*)_NativeInstance)->SetValue(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}




//---------------------------------------------------------------------
//  Class  TColgp_SequenceOfAx1
//---------------------------------------------------------------------

Macad::Occt::TColgp_SequenceOfAx1::TColgp_SequenceOfAx1()
	: BaseClass<::TColgp_SequenceOfAx1>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_SequenceOfAx1();
}

Macad::Occt::TColgp_SequenceOfAx1::TColgp_SequenceOfAx1(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TColgp_SequenceOfAx1>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TColgp_SequenceOfAx1(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TColgp_SequenceOfAx1::TColgp_SequenceOfAx1(Macad::Occt::TColgp_SequenceOfAx1^ theOther)
	: BaseClass<::TColgp_SequenceOfAx1>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColgp_SequenceOfAx1(*(::TColgp_SequenceOfAx1*)theOther->NativeInstance);
}

int Macad::Occt::TColgp_SequenceOfAx1::Size()
{
	return ((::TColgp_SequenceOfAx1*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_SequenceOfAx1::Length()
{
	return ((::TColgp_SequenceOfAx1*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_SequenceOfAx1::Lower()
{
	return ((::TColgp_SequenceOfAx1*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_SequenceOfAx1::Upper()
{
	return ((::TColgp_SequenceOfAx1*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_SequenceOfAx1::IsEmpty()
{
	return ((::TColgp_SequenceOfAx1*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TColgp_SequenceOfAx1::Reverse()
{
	((::TColgp_SequenceOfAx1*)_NativeInstance)->Reverse();
}

void Macad::Occt::TColgp_SequenceOfAx1::Exchange(int I, int J)
{
	((::TColgp_SequenceOfAx1*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TColgp_SequenceOfAx1::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColgp_SequenceOfAx1*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColgp_SequenceOfAx1::Clear()
{
	((::TColgp_SequenceOfAx1*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TColgp_SequenceOfAx1^ Macad::Occt::TColgp_SequenceOfAx1::Assign(Macad::Occt::TColgp_SequenceOfAx1^ theOther)
{
	::TColgp_SequenceOfAx1* _result = new ::TColgp_SequenceOfAx1();
	*_result = ((::TColgp_SequenceOfAx1*)_NativeInstance)->Assign(*(::TColgp_SequenceOfAx1*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfAx1(_result);
}

void Macad::Occt::TColgp_SequenceOfAx1::Remove(int theIndex)
{
	((::TColgp_SequenceOfAx1*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TColgp_SequenceOfAx1::Remove(int theFromIndex, int theToIndex)
{
	((::TColgp_SequenceOfAx1*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TColgp_SequenceOfAx1::Append(Macad::Occt::Ax1 theItem)
{
	pin_ptr<Macad::Occt::Ax1> pp_theItem = &theItem;
	((::TColgp_SequenceOfAx1*)_NativeInstance)->Append(*(gp_Ax1*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfAx1::Append(Macad::Occt::TColgp_SequenceOfAx1^ theSeq)
{
	((::TColgp_SequenceOfAx1*)_NativeInstance)->Append(*(::TColgp_SequenceOfAx1*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfAx1::Prepend(Macad::Occt::Ax1 theItem)
{
	pin_ptr<Macad::Occt::Ax1> pp_theItem = &theItem;
	((::TColgp_SequenceOfAx1*)_NativeInstance)->Prepend(*(gp_Ax1*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfAx1::Prepend(Macad::Occt::TColgp_SequenceOfAx1^ theSeq)
{
	((::TColgp_SequenceOfAx1*)_NativeInstance)->Prepend(*(::TColgp_SequenceOfAx1*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfAx1::InsertBefore(int theIndex, Macad::Occt::Ax1 theItem)
{
	pin_ptr<Macad::Occt::Ax1> pp_theItem = &theItem;
	((::TColgp_SequenceOfAx1*)_NativeInstance)->InsertBefore(theIndex, *(gp_Ax1*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfAx1::InsertBefore(int theIndex, Macad::Occt::TColgp_SequenceOfAx1^ theSeq)
{
	((::TColgp_SequenceOfAx1*)_NativeInstance)->InsertBefore(theIndex, *(::TColgp_SequenceOfAx1*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfAx1::InsertAfter(int theIndex, Macad::Occt::TColgp_SequenceOfAx1^ theSeq)
{
	((::TColgp_SequenceOfAx1*)_NativeInstance)->InsertAfter(theIndex, *(::TColgp_SequenceOfAx1*)theSeq->NativeInstance);
}

void Macad::Occt::TColgp_SequenceOfAx1::InsertAfter(int theIndex, Macad::Occt::Ax1 theItem)
{
	pin_ptr<Macad::Occt::Ax1> pp_theItem = &theItem;
	((::TColgp_SequenceOfAx1*)_NativeInstance)->InsertAfter(theIndex, *(gp_Ax1*)pp_theItem);
}

void Macad::Occt::TColgp_SequenceOfAx1::Split(int theIndex, Macad::Occt::TColgp_SequenceOfAx1^ theSeq)
{
	((::TColgp_SequenceOfAx1*)_NativeInstance)->Split(theIndex, *(::TColgp_SequenceOfAx1*)theSeq->NativeInstance);
}

Macad::Occt::Ax1 Macad::Occt::TColgp_SequenceOfAx1::First()
{
	return Macad::Occt::Ax1(((::TColgp_SequenceOfAx1*)_NativeInstance)->First());
}

Macad::Occt::Ax1 Macad::Occt::TColgp_SequenceOfAx1::ChangeFirst()
{
	return Macad::Occt::Ax1(((::TColgp_SequenceOfAx1*)_NativeInstance)->ChangeFirst());
}

Macad::Occt::Ax1 Macad::Occt::TColgp_SequenceOfAx1::Last()
{
	return Macad::Occt::Ax1(((::TColgp_SequenceOfAx1*)_NativeInstance)->Last());
}

Macad::Occt::Ax1 Macad::Occt::TColgp_SequenceOfAx1::ChangeLast()
{
	return Macad::Occt::Ax1(((::TColgp_SequenceOfAx1*)_NativeInstance)->ChangeLast());
}

Macad::Occt::Ax1 Macad::Occt::TColgp_SequenceOfAx1::Value(int theIndex)
{
	return Macad::Occt::Ax1(((::TColgp_SequenceOfAx1*)_NativeInstance)->Value(theIndex));
}

Macad::Occt::Ax1 Macad::Occt::TColgp_SequenceOfAx1::ChangeValue(int theIndex)
{
	return Macad::Occt::Ax1(((::TColgp_SequenceOfAx1*)_NativeInstance)->ChangeValue(theIndex));
}

void Macad::Occt::TColgp_SequenceOfAx1::SetValue(int theIndex, Macad::Occt::Ax1 theItem)
{
	pin_ptr<Macad::Occt::Ax1> pp_theItem = &theItem;
	((::TColgp_SequenceOfAx1*)_NativeInstance)->SetValue(theIndex, *(gp_Ax1*)pp_theItem);
}




//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfCirc2d
//---------------------------------------------------------------------

Macad::Occt::TColgp_HArray1OfCirc2d::TColgp_HArray1OfCirc2d()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfCirc2d();
}

Macad::Occt::TColgp_HArray1OfCirc2d::TColgp_HArray1OfCirc2d(int theLower, int theUpper)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfCirc2d(theLower, theUpper);
}

Macad::Occt::TColgp_HArray1OfCirc2d::TColgp_HArray1OfCirc2d(int theLower, int theUpper, Macad::Occt::gp_Circ2d^ theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfCirc2d(theLower, theUpper, *(::gp_Circ2d*)theValue->NativeInstance);
}

Macad::Occt::TColgp_HArray1OfCirc2d::TColgp_HArray1OfCirc2d(Macad::Occt::TColgp_Array1OfCirc2d^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfCirc2d(*(::TColgp_Array1OfCirc2d*)theOther->NativeInstance);
}

Macad::Occt::TColgp_HArray1OfCirc2d::TColgp_HArray1OfCirc2d(Macad::Occt::TColgp_HArray1OfCirc2d^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfCirc2d(*(::TColgp_HArray1OfCirc2d*)parameter1->NativeInstance);
}

Macad::Occt::TColgp_Array1OfCirc2d^ Macad::Occt::TColgp_HArray1OfCirc2d::Array1()
{
	::TColgp_Array1OfCirc2d* _result = new ::TColgp_Array1OfCirc2d();
	*_result =  (::TColgp_Array1OfCirc2d)((::TColgp_HArray1OfCirc2d*)_NativeInstance)->Array1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfCirc2d(_result);
}

Macad::Occt::TColgp_Array1OfCirc2d^ Macad::Occt::TColgp_HArray1OfCirc2d::ChangeArray1()
{
	::TColgp_Array1OfCirc2d* _result = new ::TColgp_Array1OfCirc2d();
	*_result = ((::TColgp_HArray1OfCirc2d*)_NativeInstance)->ChangeArray1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfCirc2d(_result);
}

void Macad::Occt::TColgp_HArray1OfCirc2d::Init(Macad::Occt::gp_Circ2d^ theValue)
{
	((::TColgp_HArray1OfCirc2d*)_NativeInstance)->Init(*(::gp_Circ2d*)theValue->NativeInstance);
}

int Macad::Occt::TColgp_HArray1OfCirc2d::Size()
{
	return ((::TColgp_HArray1OfCirc2d*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_HArray1OfCirc2d::Length()
{
	return ((::TColgp_HArray1OfCirc2d*)_NativeInstance)->Length();
}

bool Macad::Occt::TColgp_HArray1OfCirc2d::IsEmpty()
{
	return ((::TColgp_HArray1OfCirc2d*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColgp_HArray1OfCirc2d::Lower()
{
	return ((::TColgp_HArray1OfCirc2d*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_HArray1OfCirc2d::Upper()
{
	return ((::TColgp_HArray1OfCirc2d*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_HArray1OfCirc2d::IsDeletable()
{
	return ((::TColgp_HArray1OfCirc2d*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColgp_HArray1OfCirc2d::IsAllocated()
{
	return ((::TColgp_HArray1OfCirc2d*)_NativeInstance)->IsAllocated();
}

Macad::Occt::gp_Circ2d^ Macad::Occt::TColgp_HArray1OfCirc2d::First()
{
	::gp_Circ2d* _result = new ::gp_Circ2d();
	*_result =  (::gp_Circ2d)((::TColgp_HArray1OfCirc2d*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::TColgp_HArray1OfCirc2d::ChangeFirst()
{
	::gp_Circ2d* _result = new ::gp_Circ2d();
	*_result = ((::TColgp_HArray1OfCirc2d*)_NativeInstance)->ChangeFirst();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::TColgp_HArray1OfCirc2d::Last()
{
	::gp_Circ2d* _result = new ::gp_Circ2d();
	*_result =  (::gp_Circ2d)((::TColgp_HArray1OfCirc2d*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::TColgp_HArray1OfCirc2d::ChangeLast()
{
	::gp_Circ2d* _result = new ::gp_Circ2d();
	*_result = ((::TColgp_HArray1OfCirc2d*)_NativeInstance)->ChangeLast();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::TColgp_HArray1OfCirc2d::Value(int theIndex)
{
	::gp_Circ2d* _result = new ::gp_Circ2d();
	*_result =  (::gp_Circ2d)((::TColgp_HArray1OfCirc2d*)_NativeInstance)->Value(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::TColgp_HArray1OfCirc2d::ChangeValue(int theIndex)
{
	::gp_Circ2d* _result = new ::gp_Circ2d();
	*_result = ((::TColgp_HArray1OfCirc2d*)_NativeInstance)->ChangeValue(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

void Macad::Occt::TColgp_HArray1OfCirc2d::SetValue(int theIndex, Macad::Occt::gp_Circ2d^ theItem)
{
	((::TColgp_HArray1OfCirc2d*)_NativeInstance)->SetValue(theIndex, *(::gp_Circ2d*)theItem->NativeInstance);
}

void Macad::Occt::TColgp_HArray1OfCirc2d::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColgp_HArray1OfCirc2d*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}


Macad::Occt::TColgp_HArray1OfCirc2d^ Macad::Occt::TColgp_HArray1OfCirc2d::CreateDowncasted(::TColgp_HArray1OfCirc2d* instance)
{
	return gcnew Macad::Occt::TColgp_HArray1OfCirc2d( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfDir
//---------------------------------------------------------------------

Macad::Occt::TColgp_HArray1OfDir::TColgp_HArray1OfDir()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfDir();
}

Macad::Occt::TColgp_HArray1OfDir::TColgp_HArray1OfDir(int theLower, int theUpper)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfDir(theLower, theUpper);
}

Macad::Occt::TColgp_HArray1OfDir::TColgp_HArray1OfDir(int theLower, int theUpper, Macad::Occt::Dir theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Dir> pp_theValue = &theValue;
	NativeInstance = new ::TColgp_HArray1OfDir(theLower, theUpper, *(gp_Dir*)pp_theValue);
}

Macad::Occt::TColgp_HArray1OfDir::TColgp_HArray1OfDir(Macad::Occt::TColgp_Array1OfDir^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfDir(*(::TColgp_Array1OfDir*)theOther->NativeInstance);
}

Macad::Occt::TColgp_HArray1OfDir::TColgp_HArray1OfDir(Macad::Occt::TColgp_HArray1OfDir^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfDir(*(::TColgp_HArray1OfDir*)parameter1->NativeInstance);
}

Macad::Occt::TColgp_Array1OfDir^ Macad::Occt::TColgp_HArray1OfDir::Array1()
{
	::TColgp_Array1OfDir* _result = new ::TColgp_Array1OfDir();
	*_result =  (::TColgp_Array1OfDir)((::TColgp_HArray1OfDir*)_NativeInstance)->Array1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfDir(_result);
}

Macad::Occt::TColgp_Array1OfDir^ Macad::Occt::TColgp_HArray1OfDir::ChangeArray1()
{
	::TColgp_Array1OfDir* _result = new ::TColgp_Array1OfDir();
	*_result = ((::TColgp_HArray1OfDir*)_NativeInstance)->ChangeArray1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfDir(_result);
}

void Macad::Occt::TColgp_HArray1OfDir::Init(Macad::Occt::Dir theValue)
{
	pin_ptr<Macad::Occt::Dir> pp_theValue = &theValue;
	((::TColgp_HArray1OfDir*)_NativeInstance)->Init(*(gp_Dir*)pp_theValue);
}

int Macad::Occt::TColgp_HArray1OfDir::Size()
{
	return ((::TColgp_HArray1OfDir*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_HArray1OfDir::Length()
{
	return ((::TColgp_HArray1OfDir*)_NativeInstance)->Length();
}

bool Macad::Occt::TColgp_HArray1OfDir::IsEmpty()
{
	return ((::TColgp_HArray1OfDir*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColgp_HArray1OfDir::Lower()
{
	return ((::TColgp_HArray1OfDir*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_HArray1OfDir::Upper()
{
	return ((::TColgp_HArray1OfDir*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_HArray1OfDir::IsDeletable()
{
	return ((::TColgp_HArray1OfDir*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColgp_HArray1OfDir::IsAllocated()
{
	return ((::TColgp_HArray1OfDir*)_NativeInstance)->IsAllocated();
}

Macad::Occt::Dir Macad::Occt::TColgp_HArray1OfDir::First()
{
	return Macad::Occt::Dir(((::TColgp_HArray1OfDir*)_NativeInstance)->First());
}

Macad::Occt::Dir Macad::Occt::TColgp_HArray1OfDir::ChangeFirst()
{
	return Macad::Occt::Dir(((::TColgp_HArray1OfDir*)_NativeInstance)->ChangeFirst());
}

Macad::Occt::Dir Macad::Occt::TColgp_HArray1OfDir::Last()
{
	return Macad::Occt::Dir(((::TColgp_HArray1OfDir*)_NativeInstance)->Last());
}

Macad::Occt::Dir Macad::Occt::TColgp_HArray1OfDir::ChangeLast()
{
	return Macad::Occt::Dir(((::TColgp_HArray1OfDir*)_NativeInstance)->ChangeLast());
}

Macad::Occt::Dir Macad::Occt::TColgp_HArray1OfDir::Value(int theIndex)
{
	return Macad::Occt::Dir(((::TColgp_HArray1OfDir*)_NativeInstance)->Value(theIndex));
}

Macad::Occt::Dir Macad::Occt::TColgp_HArray1OfDir::ChangeValue(int theIndex)
{
	return Macad::Occt::Dir(((::TColgp_HArray1OfDir*)_NativeInstance)->ChangeValue(theIndex));
}

void Macad::Occt::TColgp_HArray1OfDir::SetValue(int theIndex, Macad::Occt::Dir theItem)
{
	pin_ptr<Macad::Occt::Dir> pp_theItem = &theItem;
	((::TColgp_HArray1OfDir*)_NativeInstance)->SetValue(theIndex, *(gp_Dir*)pp_theItem);
}

void Macad::Occt::TColgp_HArray1OfDir::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColgp_HArray1OfDir*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}


Macad::Occt::TColgp_HArray1OfDir^ Macad::Occt::TColgp_HArray1OfDir::CreateDowncasted(::TColgp_HArray1OfDir* instance)
{
	return gcnew Macad::Occt::TColgp_HArray1OfDir( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfDir2d
//---------------------------------------------------------------------

Macad::Occt::TColgp_HArray1OfDir2d::TColgp_HArray1OfDir2d()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfDir2d();
}

Macad::Occt::TColgp_HArray1OfDir2d::TColgp_HArray1OfDir2d(int theLower, int theUpper)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfDir2d(theLower, theUpper);
}

Macad::Occt::TColgp_HArray1OfDir2d::TColgp_HArray1OfDir2d(int theLower, int theUpper, Macad::Occt::Dir2d theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Dir2d> pp_theValue = &theValue;
	NativeInstance = new ::TColgp_HArray1OfDir2d(theLower, theUpper, *(gp_Dir2d*)pp_theValue);
}

Macad::Occt::TColgp_HArray1OfDir2d::TColgp_HArray1OfDir2d(Macad::Occt::TColgp_Array1OfDir2d^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfDir2d(*(::TColgp_Array1OfDir2d*)theOther->NativeInstance);
}

Macad::Occt::TColgp_HArray1OfDir2d::TColgp_HArray1OfDir2d(Macad::Occt::TColgp_HArray1OfDir2d^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfDir2d(*(::TColgp_HArray1OfDir2d*)parameter1->NativeInstance);
}

Macad::Occt::TColgp_Array1OfDir2d^ Macad::Occt::TColgp_HArray1OfDir2d::Array1()
{
	::TColgp_Array1OfDir2d* _result = new ::TColgp_Array1OfDir2d();
	*_result =  (::TColgp_Array1OfDir2d)((::TColgp_HArray1OfDir2d*)_NativeInstance)->Array1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfDir2d(_result);
}

Macad::Occt::TColgp_Array1OfDir2d^ Macad::Occt::TColgp_HArray1OfDir2d::ChangeArray1()
{
	::TColgp_Array1OfDir2d* _result = new ::TColgp_Array1OfDir2d();
	*_result = ((::TColgp_HArray1OfDir2d*)_NativeInstance)->ChangeArray1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfDir2d(_result);
}

void Macad::Occt::TColgp_HArray1OfDir2d::Init(Macad::Occt::Dir2d theValue)
{
	pin_ptr<Macad::Occt::Dir2d> pp_theValue = &theValue;
	((::TColgp_HArray1OfDir2d*)_NativeInstance)->Init(*(gp_Dir2d*)pp_theValue);
}

int Macad::Occt::TColgp_HArray1OfDir2d::Size()
{
	return ((::TColgp_HArray1OfDir2d*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_HArray1OfDir2d::Length()
{
	return ((::TColgp_HArray1OfDir2d*)_NativeInstance)->Length();
}

bool Macad::Occt::TColgp_HArray1OfDir2d::IsEmpty()
{
	return ((::TColgp_HArray1OfDir2d*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColgp_HArray1OfDir2d::Lower()
{
	return ((::TColgp_HArray1OfDir2d*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_HArray1OfDir2d::Upper()
{
	return ((::TColgp_HArray1OfDir2d*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_HArray1OfDir2d::IsDeletable()
{
	return ((::TColgp_HArray1OfDir2d*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColgp_HArray1OfDir2d::IsAllocated()
{
	return ((::TColgp_HArray1OfDir2d*)_NativeInstance)->IsAllocated();
}

Macad::Occt::Dir2d Macad::Occt::TColgp_HArray1OfDir2d::First()
{
	return Macad::Occt::Dir2d(((::TColgp_HArray1OfDir2d*)_NativeInstance)->First());
}

Macad::Occt::Dir2d Macad::Occt::TColgp_HArray1OfDir2d::ChangeFirst()
{
	return Macad::Occt::Dir2d(((::TColgp_HArray1OfDir2d*)_NativeInstance)->ChangeFirst());
}

Macad::Occt::Dir2d Macad::Occt::TColgp_HArray1OfDir2d::Last()
{
	return Macad::Occt::Dir2d(((::TColgp_HArray1OfDir2d*)_NativeInstance)->Last());
}

Macad::Occt::Dir2d Macad::Occt::TColgp_HArray1OfDir2d::ChangeLast()
{
	return Macad::Occt::Dir2d(((::TColgp_HArray1OfDir2d*)_NativeInstance)->ChangeLast());
}

Macad::Occt::Dir2d Macad::Occt::TColgp_HArray1OfDir2d::Value(int theIndex)
{
	return Macad::Occt::Dir2d(((::TColgp_HArray1OfDir2d*)_NativeInstance)->Value(theIndex));
}

Macad::Occt::Dir2d Macad::Occt::TColgp_HArray1OfDir2d::ChangeValue(int theIndex)
{
	return Macad::Occt::Dir2d(((::TColgp_HArray1OfDir2d*)_NativeInstance)->ChangeValue(theIndex));
}

void Macad::Occt::TColgp_HArray1OfDir2d::SetValue(int theIndex, Macad::Occt::Dir2d theItem)
{
	pin_ptr<Macad::Occt::Dir2d> pp_theItem = &theItem;
	((::TColgp_HArray1OfDir2d*)_NativeInstance)->SetValue(theIndex, *(gp_Dir2d*)pp_theItem);
}

void Macad::Occt::TColgp_HArray1OfDir2d::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColgp_HArray1OfDir2d*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}


Macad::Occt::TColgp_HArray1OfDir2d^ Macad::Occt::TColgp_HArray1OfDir2d::CreateDowncasted(::TColgp_HArray1OfDir2d* instance)
{
	return gcnew Macad::Occt::TColgp_HArray1OfDir2d( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfLin2d
//---------------------------------------------------------------------

Macad::Occt::TColgp_HArray1OfLin2d::TColgp_HArray1OfLin2d()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfLin2d();
}

Macad::Occt::TColgp_HArray1OfLin2d::TColgp_HArray1OfLin2d(int theLower, int theUpper)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfLin2d(theLower, theUpper);
}

Macad::Occt::TColgp_HArray1OfLin2d::TColgp_HArray1OfLin2d(int theLower, int theUpper, Macad::Occt::gp_Lin2d^ theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfLin2d(theLower, theUpper, *(::gp_Lin2d*)theValue->NativeInstance);
}

Macad::Occt::TColgp_HArray1OfLin2d::TColgp_HArray1OfLin2d(Macad::Occt::TColgp_Array1OfLin2d^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfLin2d(*(::TColgp_Array1OfLin2d*)theOther->NativeInstance);
}

Macad::Occt::TColgp_HArray1OfLin2d::TColgp_HArray1OfLin2d(Macad::Occt::TColgp_HArray1OfLin2d^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfLin2d(*(::TColgp_HArray1OfLin2d*)parameter1->NativeInstance);
}

Macad::Occt::TColgp_Array1OfLin2d^ Macad::Occt::TColgp_HArray1OfLin2d::Array1()
{
	::TColgp_Array1OfLin2d* _result = new ::TColgp_Array1OfLin2d();
	*_result =  (::TColgp_Array1OfLin2d)((::TColgp_HArray1OfLin2d*)_NativeInstance)->Array1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfLin2d(_result);
}

Macad::Occt::TColgp_Array1OfLin2d^ Macad::Occt::TColgp_HArray1OfLin2d::ChangeArray1()
{
	::TColgp_Array1OfLin2d* _result = new ::TColgp_Array1OfLin2d();
	*_result = ((::TColgp_HArray1OfLin2d*)_NativeInstance)->ChangeArray1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfLin2d(_result);
}

void Macad::Occt::TColgp_HArray1OfLin2d::Init(Macad::Occt::gp_Lin2d^ theValue)
{
	((::TColgp_HArray1OfLin2d*)_NativeInstance)->Init(*(::gp_Lin2d*)theValue->NativeInstance);
}

int Macad::Occt::TColgp_HArray1OfLin2d::Size()
{
	return ((::TColgp_HArray1OfLin2d*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_HArray1OfLin2d::Length()
{
	return ((::TColgp_HArray1OfLin2d*)_NativeInstance)->Length();
}

bool Macad::Occt::TColgp_HArray1OfLin2d::IsEmpty()
{
	return ((::TColgp_HArray1OfLin2d*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColgp_HArray1OfLin2d::Lower()
{
	return ((::TColgp_HArray1OfLin2d*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_HArray1OfLin2d::Upper()
{
	return ((::TColgp_HArray1OfLin2d*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_HArray1OfLin2d::IsDeletable()
{
	return ((::TColgp_HArray1OfLin2d*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColgp_HArray1OfLin2d::IsAllocated()
{
	return ((::TColgp_HArray1OfLin2d*)_NativeInstance)->IsAllocated();
}

Macad::Occt::gp_Lin2d^ Macad::Occt::TColgp_HArray1OfLin2d::First()
{
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result =  (::gp_Lin2d)((::TColgp_HArray1OfLin2d*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

Macad::Occt::gp_Lin2d^ Macad::Occt::TColgp_HArray1OfLin2d::ChangeFirst()
{
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result = ((::TColgp_HArray1OfLin2d*)_NativeInstance)->ChangeFirst();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

Macad::Occt::gp_Lin2d^ Macad::Occt::TColgp_HArray1OfLin2d::Last()
{
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result =  (::gp_Lin2d)((::TColgp_HArray1OfLin2d*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

Macad::Occt::gp_Lin2d^ Macad::Occt::TColgp_HArray1OfLin2d::ChangeLast()
{
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result = ((::TColgp_HArray1OfLin2d*)_NativeInstance)->ChangeLast();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

Macad::Occt::gp_Lin2d^ Macad::Occt::TColgp_HArray1OfLin2d::Value(int theIndex)
{
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result =  (::gp_Lin2d)((::TColgp_HArray1OfLin2d*)_NativeInstance)->Value(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

Macad::Occt::gp_Lin2d^ Macad::Occt::TColgp_HArray1OfLin2d::ChangeValue(int theIndex)
{
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result = ((::TColgp_HArray1OfLin2d*)_NativeInstance)->ChangeValue(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

void Macad::Occt::TColgp_HArray1OfLin2d::SetValue(int theIndex, Macad::Occt::gp_Lin2d^ theItem)
{
	((::TColgp_HArray1OfLin2d*)_NativeInstance)->SetValue(theIndex, *(::gp_Lin2d*)theItem->NativeInstance);
}

void Macad::Occt::TColgp_HArray1OfLin2d::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColgp_HArray1OfLin2d*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}


Macad::Occt::TColgp_HArray1OfLin2d^ Macad::Occt::TColgp_HArray1OfLin2d::CreateDowncasted(::TColgp_HArray1OfLin2d* instance)
{
	return gcnew Macad::Occt::TColgp_HArray1OfLin2d( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfPnt
//---------------------------------------------------------------------

Macad::Occt::TColgp_HArray1OfPnt::TColgp_HArray1OfPnt()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfPnt();
}

Macad::Occt::TColgp_HArray1OfPnt::TColgp_HArray1OfPnt(int theLower, int theUpper)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfPnt(theLower, theUpper);
}

Macad::Occt::TColgp_HArray1OfPnt::TColgp_HArray1OfPnt(int theLower, int theUpper, Macad::Occt::Pnt theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_theValue = &theValue;
	NativeInstance = new ::TColgp_HArray1OfPnt(theLower, theUpper, *(gp_Pnt*)pp_theValue);
}

Macad::Occt::TColgp_HArray1OfPnt::TColgp_HArray1OfPnt(Macad::Occt::TColgp_Array1OfPnt^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfPnt(*(::TColgp_Array1OfPnt*)theOther->NativeInstance);
}

Macad::Occt::TColgp_HArray1OfPnt::TColgp_HArray1OfPnt(Macad::Occt::TColgp_HArray1OfPnt^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfPnt(*(::TColgp_HArray1OfPnt*)parameter1->NativeInstance);
}

Macad::Occt::TColgp_Array1OfPnt^ Macad::Occt::TColgp_HArray1OfPnt::Array1()
{
	::TColgp_Array1OfPnt* _result = new ::TColgp_Array1OfPnt();
	*_result =  (::TColgp_Array1OfPnt)((::TColgp_HArray1OfPnt*)_NativeInstance)->Array1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfPnt(_result);
}

Macad::Occt::TColgp_Array1OfPnt^ Macad::Occt::TColgp_HArray1OfPnt::ChangeArray1()
{
	::TColgp_Array1OfPnt* _result = new ::TColgp_Array1OfPnt();
	*_result = ((::TColgp_HArray1OfPnt*)_NativeInstance)->ChangeArray1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfPnt(_result);
}

void Macad::Occt::TColgp_HArray1OfPnt::Init(Macad::Occt::Pnt theValue)
{
	pin_ptr<Macad::Occt::Pnt> pp_theValue = &theValue;
	((::TColgp_HArray1OfPnt*)_NativeInstance)->Init(*(gp_Pnt*)pp_theValue);
}

int Macad::Occt::TColgp_HArray1OfPnt::Size()
{
	return ((::TColgp_HArray1OfPnt*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_HArray1OfPnt::Length()
{
	return ((::TColgp_HArray1OfPnt*)_NativeInstance)->Length();
}

bool Macad::Occt::TColgp_HArray1OfPnt::IsEmpty()
{
	return ((::TColgp_HArray1OfPnt*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColgp_HArray1OfPnt::Lower()
{
	return ((::TColgp_HArray1OfPnt*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_HArray1OfPnt::Upper()
{
	return ((::TColgp_HArray1OfPnt*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_HArray1OfPnt::IsDeletable()
{
	return ((::TColgp_HArray1OfPnt*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColgp_HArray1OfPnt::IsAllocated()
{
	return ((::TColgp_HArray1OfPnt*)_NativeInstance)->IsAllocated();
}

Macad::Occt::Pnt Macad::Occt::TColgp_HArray1OfPnt::First()
{
	return Macad::Occt::Pnt(((::TColgp_HArray1OfPnt*)_NativeInstance)->First());
}

Macad::Occt::Pnt Macad::Occt::TColgp_HArray1OfPnt::ChangeFirst()
{
	return Macad::Occt::Pnt(((::TColgp_HArray1OfPnt*)_NativeInstance)->ChangeFirst());
}

Macad::Occt::Pnt Macad::Occt::TColgp_HArray1OfPnt::Last()
{
	return Macad::Occt::Pnt(((::TColgp_HArray1OfPnt*)_NativeInstance)->Last());
}

Macad::Occt::Pnt Macad::Occt::TColgp_HArray1OfPnt::ChangeLast()
{
	return Macad::Occt::Pnt(((::TColgp_HArray1OfPnt*)_NativeInstance)->ChangeLast());
}

Macad::Occt::Pnt Macad::Occt::TColgp_HArray1OfPnt::Value(int theIndex)
{
	return Macad::Occt::Pnt(((::TColgp_HArray1OfPnt*)_NativeInstance)->Value(theIndex));
}

Macad::Occt::Pnt Macad::Occt::TColgp_HArray1OfPnt::ChangeValue(int theIndex)
{
	return Macad::Occt::Pnt(((::TColgp_HArray1OfPnt*)_NativeInstance)->ChangeValue(theIndex));
}

void Macad::Occt::TColgp_HArray1OfPnt::SetValue(int theIndex, Macad::Occt::Pnt theItem)
{
	pin_ptr<Macad::Occt::Pnt> pp_theItem = &theItem;
	((::TColgp_HArray1OfPnt*)_NativeInstance)->SetValue(theIndex, *(gp_Pnt*)pp_theItem);
}

void Macad::Occt::TColgp_HArray1OfPnt::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColgp_HArray1OfPnt*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}


Macad::Occt::TColgp_HArray1OfPnt^ Macad::Occt::TColgp_HArray1OfPnt::CreateDowncasted(::TColgp_HArray1OfPnt* instance)
{
	return gcnew Macad::Occt::TColgp_HArray1OfPnt( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfPnt2d
//---------------------------------------------------------------------

Macad::Occt::TColgp_HArray1OfPnt2d::TColgp_HArray1OfPnt2d()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfPnt2d();
}

Macad::Occt::TColgp_HArray1OfPnt2d::TColgp_HArray1OfPnt2d(int theLower, int theUpper)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfPnt2d(theLower, theUpper);
}

Macad::Occt::TColgp_HArray1OfPnt2d::TColgp_HArray1OfPnt2d(int theLower, int theUpper, Macad::Occt::Pnt2d theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_theValue = &theValue;
	NativeInstance = new ::TColgp_HArray1OfPnt2d(theLower, theUpper, *(gp_Pnt2d*)pp_theValue);
}

Macad::Occt::TColgp_HArray1OfPnt2d::TColgp_HArray1OfPnt2d(Macad::Occt::TColgp_Array1OfPnt2d^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfPnt2d(*(::TColgp_Array1OfPnt2d*)theOther->NativeInstance);
}

Macad::Occt::TColgp_HArray1OfPnt2d::TColgp_HArray1OfPnt2d(Macad::Occt::TColgp_HArray1OfPnt2d^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfPnt2d(*(::TColgp_HArray1OfPnt2d*)parameter1->NativeInstance);
}

Macad::Occt::TColgp_Array1OfPnt2d^ Macad::Occt::TColgp_HArray1OfPnt2d::Array1()
{
	::TColgp_Array1OfPnt2d* _result = new ::TColgp_Array1OfPnt2d();
	*_result =  (::TColgp_Array1OfPnt2d)((::TColgp_HArray1OfPnt2d*)_NativeInstance)->Array1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfPnt2d(_result);
}

Macad::Occt::TColgp_Array1OfPnt2d^ Macad::Occt::TColgp_HArray1OfPnt2d::ChangeArray1()
{
	::TColgp_Array1OfPnt2d* _result = new ::TColgp_Array1OfPnt2d();
	*_result = ((::TColgp_HArray1OfPnt2d*)_NativeInstance)->ChangeArray1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfPnt2d(_result);
}

void Macad::Occt::TColgp_HArray1OfPnt2d::Init(Macad::Occt::Pnt2d theValue)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_theValue = &theValue;
	((::TColgp_HArray1OfPnt2d*)_NativeInstance)->Init(*(gp_Pnt2d*)pp_theValue);
}

int Macad::Occt::TColgp_HArray1OfPnt2d::Size()
{
	return ((::TColgp_HArray1OfPnt2d*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_HArray1OfPnt2d::Length()
{
	return ((::TColgp_HArray1OfPnt2d*)_NativeInstance)->Length();
}

bool Macad::Occt::TColgp_HArray1OfPnt2d::IsEmpty()
{
	return ((::TColgp_HArray1OfPnt2d*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColgp_HArray1OfPnt2d::Lower()
{
	return ((::TColgp_HArray1OfPnt2d*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_HArray1OfPnt2d::Upper()
{
	return ((::TColgp_HArray1OfPnt2d*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_HArray1OfPnt2d::IsDeletable()
{
	return ((::TColgp_HArray1OfPnt2d*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColgp_HArray1OfPnt2d::IsAllocated()
{
	return ((::TColgp_HArray1OfPnt2d*)_NativeInstance)->IsAllocated();
}

Macad::Occt::Pnt2d Macad::Occt::TColgp_HArray1OfPnt2d::First()
{
	return Macad::Occt::Pnt2d(((::TColgp_HArray1OfPnt2d*)_NativeInstance)->First());
}

Macad::Occt::Pnt2d Macad::Occt::TColgp_HArray1OfPnt2d::ChangeFirst()
{
	return Macad::Occt::Pnt2d(((::TColgp_HArray1OfPnt2d*)_NativeInstance)->ChangeFirst());
}

Macad::Occt::Pnt2d Macad::Occt::TColgp_HArray1OfPnt2d::Last()
{
	return Macad::Occt::Pnt2d(((::TColgp_HArray1OfPnt2d*)_NativeInstance)->Last());
}

Macad::Occt::Pnt2d Macad::Occt::TColgp_HArray1OfPnt2d::ChangeLast()
{
	return Macad::Occt::Pnt2d(((::TColgp_HArray1OfPnt2d*)_NativeInstance)->ChangeLast());
}

Macad::Occt::Pnt2d Macad::Occt::TColgp_HArray1OfPnt2d::Value(int theIndex)
{
	return Macad::Occt::Pnt2d(((::TColgp_HArray1OfPnt2d*)_NativeInstance)->Value(theIndex));
}

Macad::Occt::Pnt2d Macad::Occt::TColgp_HArray1OfPnt2d::ChangeValue(int theIndex)
{
	return Macad::Occt::Pnt2d(((::TColgp_HArray1OfPnt2d*)_NativeInstance)->ChangeValue(theIndex));
}

void Macad::Occt::TColgp_HArray1OfPnt2d::SetValue(int theIndex, Macad::Occt::Pnt2d theItem)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_theItem = &theItem;
	((::TColgp_HArray1OfPnt2d*)_NativeInstance)->SetValue(theIndex, *(gp_Pnt2d*)pp_theItem);
}

void Macad::Occt::TColgp_HArray1OfPnt2d::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColgp_HArray1OfPnt2d*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}


Macad::Occt::TColgp_HArray1OfPnt2d^ Macad::Occt::TColgp_HArray1OfPnt2d::CreateDowncasted(::TColgp_HArray1OfPnt2d* instance)
{
	return gcnew Macad::Occt::TColgp_HArray1OfPnt2d( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfVec
//---------------------------------------------------------------------

Macad::Occt::TColgp_HArray1OfVec::TColgp_HArray1OfVec()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfVec();
}

Macad::Occt::TColgp_HArray1OfVec::TColgp_HArray1OfVec(int theLower, int theUpper)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfVec(theLower, theUpper);
}

Macad::Occt::TColgp_HArray1OfVec::TColgp_HArray1OfVec(int theLower, int theUpper, Macad::Occt::Vec theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Vec> pp_theValue = &theValue;
	NativeInstance = new ::TColgp_HArray1OfVec(theLower, theUpper, *(gp_Vec*)pp_theValue);
}

Macad::Occt::TColgp_HArray1OfVec::TColgp_HArray1OfVec(Macad::Occt::TColgp_Array1OfVec^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfVec(*(::TColgp_Array1OfVec*)theOther->NativeInstance);
}

Macad::Occt::TColgp_HArray1OfVec::TColgp_HArray1OfVec(Macad::Occt::TColgp_HArray1OfVec^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfVec(*(::TColgp_HArray1OfVec*)parameter1->NativeInstance);
}

Macad::Occt::TColgp_Array1OfVec^ Macad::Occt::TColgp_HArray1OfVec::Array1()
{
	::TColgp_Array1OfVec* _result = new ::TColgp_Array1OfVec();
	*_result =  (::TColgp_Array1OfVec)((::TColgp_HArray1OfVec*)_NativeInstance)->Array1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfVec(_result);
}

Macad::Occt::TColgp_Array1OfVec^ Macad::Occt::TColgp_HArray1OfVec::ChangeArray1()
{
	::TColgp_Array1OfVec* _result = new ::TColgp_Array1OfVec();
	*_result = ((::TColgp_HArray1OfVec*)_NativeInstance)->ChangeArray1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfVec(_result);
}

void Macad::Occt::TColgp_HArray1OfVec::Init(Macad::Occt::Vec theValue)
{
	pin_ptr<Macad::Occt::Vec> pp_theValue = &theValue;
	((::TColgp_HArray1OfVec*)_NativeInstance)->Init(*(gp_Vec*)pp_theValue);
}

int Macad::Occt::TColgp_HArray1OfVec::Size()
{
	return ((::TColgp_HArray1OfVec*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_HArray1OfVec::Length()
{
	return ((::TColgp_HArray1OfVec*)_NativeInstance)->Length();
}

bool Macad::Occt::TColgp_HArray1OfVec::IsEmpty()
{
	return ((::TColgp_HArray1OfVec*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColgp_HArray1OfVec::Lower()
{
	return ((::TColgp_HArray1OfVec*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_HArray1OfVec::Upper()
{
	return ((::TColgp_HArray1OfVec*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_HArray1OfVec::IsDeletable()
{
	return ((::TColgp_HArray1OfVec*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColgp_HArray1OfVec::IsAllocated()
{
	return ((::TColgp_HArray1OfVec*)_NativeInstance)->IsAllocated();
}

Macad::Occt::Vec Macad::Occt::TColgp_HArray1OfVec::First()
{
	return Macad::Occt::Vec(((::TColgp_HArray1OfVec*)_NativeInstance)->First());
}

Macad::Occt::Vec Macad::Occt::TColgp_HArray1OfVec::ChangeFirst()
{
	return Macad::Occt::Vec(((::TColgp_HArray1OfVec*)_NativeInstance)->ChangeFirst());
}

Macad::Occt::Vec Macad::Occt::TColgp_HArray1OfVec::Last()
{
	return Macad::Occt::Vec(((::TColgp_HArray1OfVec*)_NativeInstance)->Last());
}

Macad::Occt::Vec Macad::Occt::TColgp_HArray1OfVec::ChangeLast()
{
	return Macad::Occt::Vec(((::TColgp_HArray1OfVec*)_NativeInstance)->ChangeLast());
}

Macad::Occt::Vec Macad::Occt::TColgp_HArray1OfVec::Value(int theIndex)
{
	return Macad::Occt::Vec(((::TColgp_HArray1OfVec*)_NativeInstance)->Value(theIndex));
}

Macad::Occt::Vec Macad::Occt::TColgp_HArray1OfVec::ChangeValue(int theIndex)
{
	return Macad::Occt::Vec(((::TColgp_HArray1OfVec*)_NativeInstance)->ChangeValue(theIndex));
}

void Macad::Occt::TColgp_HArray1OfVec::SetValue(int theIndex, Macad::Occt::Vec theItem)
{
	pin_ptr<Macad::Occt::Vec> pp_theItem = &theItem;
	((::TColgp_HArray1OfVec*)_NativeInstance)->SetValue(theIndex, *(gp_Vec*)pp_theItem);
}

void Macad::Occt::TColgp_HArray1OfVec::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColgp_HArray1OfVec*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}


Macad::Occt::TColgp_HArray1OfVec^ Macad::Occt::TColgp_HArray1OfVec::CreateDowncasted(::TColgp_HArray1OfVec* instance)
{
	return gcnew Macad::Occt::TColgp_HArray1OfVec( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfVec2d
//---------------------------------------------------------------------

Macad::Occt::TColgp_HArray1OfVec2d::TColgp_HArray1OfVec2d()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfVec2d();
}

Macad::Occt::TColgp_HArray1OfVec2d::TColgp_HArray1OfVec2d(int theLower, int theUpper)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfVec2d(theLower, theUpper);
}

Macad::Occt::TColgp_HArray1OfVec2d::TColgp_HArray1OfVec2d(int theLower, int theUpper, Macad::Occt::Vec2d theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Vec2d> pp_theValue = &theValue;
	NativeInstance = new ::TColgp_HArray1OfVec2d(theLower, theUpper, *(gp_Vec2d*)pp_theValue);
}

Macad::Occt::TColgp_HArray1OfVec2d::TColgp_HArray1OfVec2d(Macad::Occt::TColgp_Array1OfVec2d^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfVec2d(*(::TColgp_Array1OfVec2d*)theOther->NativeInstance);
}

Macad::Occt::TColgp_HArray1OfVec2d::TColgp_HArray1OfVec2d(Macad::Occt::TColgp_HArray1OfVec2d^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfVec2d(*(::TColgp_HArray1OfVec2d*)parameter1->NativeInstance);
}

Macad::Occt::TColgp_Array1OfVec2d^ Macad::Occt::TColgp_HArray1OfVec2d::Array1()
{
	::TColgp_Array1OfVec2d* _result = new ::TColgp_Array1OfVec2d();
	*_result =  (::TColgp_Array1OfVec2d)((::TColgp_HArray1OfVec2d*)_NativeInstance)->Array1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfVec2d(_result);
}

Macad::Occt::TColgp_Array1OfVec2d^ Macad::Occt::TColgp_HArray1OfVec2d::ChangeArray1()
{
	::TColgp_Array1OfVec2d* _result = new ::TColgp_Array1OfVec2d();
	*_result = ((::TColgp_HArray1OfVec2d*)_NativeInstance)->ChangeArray1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfVec2d(_result);
}

void Macad::Occt::TColgp_HArray1OfVec2d::Init(Macad::Occt::Vec2d theValue)
{
	pin_ptr<Macad::Occt::Vec2d> pp_theValue = &theValue;
	((::TColgp_HArray1OfVec2d*)_NativeInstance)->Init(*(gp_Vec2d*)pp_theValue);
}

int Macad::Occt::TColgp_HArray1OfVec2d::Size()
{
	return ((::TColgp_HArray1OfVec2d*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_HArray1OfVec2d::Length()
{
	return ((::TColgp_HArray1OfVec2d*)_NativeInstance)->Length();
}

bool Macad::Occt::TColgp_HArray1OfVec2d::IsEmpty()
{
	return ((::TColgp_HArray1OfVec2d*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColgp_HArray1OfVec2d::Lower()
{
	return ((::TColgp_HArray1OfVec2d*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_HArray1OfVec2d::Upper()
{
	return ((::TColgp_HArray1OfVec2d*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_HArray1OfVec2d::IsDeletable()
{
	return ((::TColgp_HArray1OfVec2d*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColgp_HArray1OfVec2d::IsAllocated()
{
	return ((::TColgp_HArray1OfVec2d*)_NativeInstance)->IsAllocated();
}

Macad::Occt::Vec2d Macad::Occt::TColgp_HArray1OfVec2d::First()
{
	return Macad::Occt::Vec2d(((::TColgp_HArray1OfVec2d*)_NativeInstance)->First());
}

Macad::Occt::Vec2d Macad::Occt::TColgp_HArray1OfVec2d::ChangeFirst()
{
	return Macad::Occt::Vec2d(((::TColgp_HArray1OfVec2d*)_NativeInstance)->ChangeFirst());
}

Macad::Occt::Vec2d Macad::Occt::TColgp_HArray1OfVec2d::Last()
{
	return Macad::Occt::Vec2d(((::TColgp_HArray1OfVec2d*)_NativeInstance)->Last());
}

Macad::Occt::Vec2d Macad::Occt::TColgp_HArray1OfVec2d::ChangeLast()
{
	return Macad::Occt::Vec2d(((::TColgp_HArray1OfVec2d*)_NativeInstance)->ChangeLast());
}

Macad::Occt::Vec2d Macad::Occt::TColgp_HArray1OfVec2d::Value(int theIndex)
{
	return Macad::Occt::Vec2d(((::TColgp_HArray1OfVec2d*)_NativeInstance)->Value(theIndex));
}

Macad::Occt::Vec2d Macad::Occt::TColgp_HArray1OfVec2d::ChangeValue(int theIndex)
{
	return Macad::Occt::Vec2d(((::TColgp_HArray1OfVec2d*)_NativeInstance)->ChangeValue(theIndex));
}

void Macad::Occt::TColgp_HArray1OfVec2d::SetValue(int theIndex, Macad::Occt::Vec2d theItem)
{
	pin_ptr<Macad::Occt::Vec2d> pp_theItem = &theItem;
	((::TColgp_HArray1OfVec2d*)_NativeInstance)->SetValue(theIndex, *(gp_Vec2d*)pp_theItem);
}

void Macad::Occt::TColgp_HArray1OfVec2d::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColgp_HArray1OfVec2d*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}


Macad::Occt::TColgp_HArray1OfVec2d^ Macad::Occt::TColgp_HArray1OfVec2d::CreateDowncasted(::TColgp_HArray1OfVec2d* instance)
{
	return gcnew Macad::Occt::TColgp_HArray1OfVec2d( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfXY
//---------------------------------------------------------------------

Macad::Occt::TColgp_HArray1OfXY::TColgp_HArray1OfXY()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfXY();
}

Macad::Occt::TColgp_HArray1OfXY::TColgp_HArray1OfXY(int theLower, int theUpper)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfXY(theLower, theUpper);
}

Macad::Occt::TColgp_HArray1OfXY::TColgp_HArray1OfXY(int theLower, int theUpper, Macad::Occt::XY theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::XY> pp_theValue = &theValue;
	NativeInstance = new ::TColgp_HArray1OfXY(theLower, theUpper, *(gp_XY*)pp_theValue);
}

Macad::Occt::TColgp_HArray1OfXY::TColgp_HArray1OfXY(Macad::Occt::TColgp_Array1OfXY^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfXY(*(::TColgp_Array1OfXY*)theOther->NativeInstance);
}

Macad::Occt::TColgp_HArray1OfXY::TColgp_HArray1OfXY(Macad::Occt::TColgp_HArray1OfXY^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfXY(*(::TColgp_HArray1OfXY*)parameter1->NativeInstance);
}

Macad::Occt::TColgp_Array1OfXY^ Macad::Occt::TColgp_HArray1OfXY::Array1()
{
	::TColgp_Array1OfXY* _result = new ::TColgp_Array1OfXY();
	*_result =  (::TColgp_Array1OfXY)((::TColgp_HArray1OfXY*)_NativeInstance)->Array1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfXY(_result);
}

Macad::Occt::TColgp_Array1OfXY^ Macad::Occt::TColgp_HArray1OfXY::ChangeArray1()
{
	::TColgp_Array1OfXY* _result = new ::TColgp_Array1OfXY();
	*_result = ((::TColgp_HArray1OfXY*)_NativeInstance)->ChangeArray1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfXY(_result);
}

void Macad::Occt::TColgp_HArray1OfXY::Init(Macad::Occt::XY theValue)
{
	pin_ptr<Macad::Occt::XY> pp_theValue = &theValue;
	((::TColgp_HArray1OfXY*)_NativeInstance)->Init(*(gp_XY*)pp_theValue);
}

int Macad::Occt::TColgp_HArray1OfXY::Size()
{
	return ((::TColgp_HArray1OfXY*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_HArray1OfXY::Length()
{
	return ((::TColgp_HArray1OfXY*)_NativeInstance)->Length();
}

bool Macad::Occt::TColgp_HArray1OfXY::IsEmpty()
{
	return ((::TColgp_HArray1OfXY*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColgp_HArray1OfXY::Lower()
{
	return ((::TColgp_HArray1OfXY*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_HArray1OfXY::Upper()
{
	return ((::TColgp_HArray1OfXY*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_HArray1OfXY::IsDeletable()
{
	return ((::TColgp_HArray1OfXY*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColgp_HArray1OfXY::IsAllocated()
{
	return ((::TColgp_HArray1OfXY*)_NativeInstance)->IsAllocated();
}

Macad::Occt::XY Macad::Occt::TColgp_HArray1OfXY::First()
{
	return Macad::Occt::XY(((::TColgp_HArray1OfXY*)_NativeInstance)->First());
}

Macad::Occt::XY Macad::Occt::TColgp_HArray1OfXY::ChangeFirst()
{
	return Macad::Occt::XY(((::TColgp_HArray1OfXY*)_NativeInstance)->ChangeFirst());
}

Macad::Occt::XY Macad::Occt::TColgp_HArray1OfXY::Last()
{
	return Macad::Occt::XY(((::TColgp_HArray1OfXY*)_NativeInstance)->Last());
}

Macad::Occt::XY Macad::Occt::TColgp_HArray1OfXY::ChangeLast()
{
	return Macad::Occt::XY(((::TColgp_HArray1OfXY*)_NativeInstance)->ChangeLast());
}

Macad::Occt::XY Macad::Occt::TColgp_HArray1OfXY::Value(int theIndex)
{
	return Macad::Occt::XY(((::TColgp_HArray1OfXY*)_NativeInstance)->Value(theIndex));
}

Macad::Occt::XY Macad::Occt::TColgp_HArray1OfXY::ChangeValue(int theIndex)
{
	return Macad::Occt::XY(((::TColgp_HArray1OfXY*)_NativeInstance)->ChangeValue(theIndex));
}

void Macad::Occt::TColgp_HArray1OfXY::SetValue(int theIndex, Macad::Occt::XY theItem)
{
	pin_ptr<Macad::Occt::XY> pp_theItem = &theItem;
	((::TColgp_HArray1OfXY*)_NativeInstance)->SetValue(theIndex, *(gp_XY*)pp_theItem);
}

void Macad::Occt::TColgp_HArray1OfXY::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColgp_HArray1OfXY*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}


Macad::Occt::TColgp_HArray1OfXY^ Macad::Occt::TColgp_HArray1OfXY::CreateDowncasted(::TColgp_HArray1OfXY* instance)
{
	return gcnew Macad::Occt::TColgp_HArray1OfXY( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray1OfXYZ
//---------------------------------------------------------------------

Macad::Occt::TColgp_HArray1OfXYZ::TColgp_HArray1OfXYZ()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfXYZ();
}

Macad::Occt::TColgp_HArray1OfXYZ::TColgp_HArray1OfXYZ(int theLower, int theUpper)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfXYZ(theLower, theUpper);
}

Macad::Occt::TColgp_HArray1OfXYZ::TColgp_HArray1OfXYZ(int theLower, int theUpper, Macad::Occt::XYZ theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::XYZ> pp_theValue = &theValue;
	NativeInstance = new ::TColgp_HArray1OfXYZ(theLower, theUpper, *(gp_XYZ*)pp_theValue);
}

Macad::Occt::TColgp_HArray1OfXYZ::TColgp_HArray1OfXYZ(Macad::Occt::TColgp_Array1OfXYZ^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfXYZ(*(::TColgp_Array1OfXYZ*)theOther->NativeInstance);
}

Macad::Occt::TColgp_HArray1OfXYZ::TColgp_HArray1OfXYZ(Macad::Occt::TColgp_HArray1OfXYZ^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray1OfXYZ(*(::TColgp_HArray1OfXYZ*)parameter1->NativeInstance);
}

Macad::Occt::TColgp_Array1OfXYZ^ Macad::Occt::TColgp_HArray1OfXYZ::Array1()
{
	::TColgp_Array1OfXYZ* _result = new ::TColgp_Array1OfXYZ();
	*_result =  (::TColgp_Array1OfXYZ)((::TColgp_HArray1OfXYZ*)_NativeInstance)->Array1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfXYZ(_result);
}

Macad::Occt::TColgp_Array1OfXYZ^ Macad::Occt::TColgp_HArray1OfXYZ::ChangeArray1()
{
	::TColgp_Array1OfXYZ* _result = new ::TColgp_Array1OfXYZ();
	*_result = ((::TColgp_HArray1OfXYZ*)_NativeInstance)->ChangeArray1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array1OfXYZ(_result);
}

void Macad::Occt::TColgp_HArray1OfXYZ::Init(Macad::Occt::XYZ theValue)
{
	pin_ptr<Macad::Occt::XYZ> pp_theValue = &theValue;
	((::TColgp_HArray1OfXYZ*)_NativeInstance)->Init(*(gp_XYZ*)pp_theValue);
}

int Macad::Occt::TColgp_HArray1OfXYZ::Size()
{
	return ((::TColgp_HArray1OfXYZ*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_HArray1OfXYZ::Length()
{
	return ((::TColgp_HArray1OfXYZ*)_NativeInstance)->Length();
}

bool Macad::Occt::TColgp_HArray1OfXYZ::IsEmpty()
{
	return ((::TColgp_HArray1OfXYZ*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColgp_HArray1OfXYZ::Lower()
{
	return ((::TColgp_HArray1OfXYZ*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_HArray1OfXYZ::Upper()
{
	return ((::TColgp_HArray1OfXYZ*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_HArray1OfXYZ::IsDeletable()
{
	return ((::TColgp_HArray1OfXYZ*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColgp_HArray1OfXYZ::IsAllocated()
{
	return ((::TColgp_HArray1OfXYZ*)_NativeInstance)->IsAllocated();
}

Macad::Occt::XYZ Macad::Occt::TColgp_HArray1OfXYZ::First()
{
	return Macad::Occt::XYZ(((::TColgp_HArray1OfXYZ*)_NativeInstance)->First());
}

Macad::Occt::XYZ Macad::Occt::TColgp_HArray1OfXYZ::ChangeFirst()
{
	return Macad::Occt::XYZ(((::TColgp_HArray1OfXYZ*)_NativeInstance)->ChangeFirst());
}

Macad::Occt::XYZ Macad::Occt::TColgp_HArray1OfXYZ::Last()
{
	return Macad::Occt::XYZ(((::TColgp_HArray1OfXYZ*)_NativeInstance)->Last());
}

Macad::Occt::XYZ Macad::Occt::TColgp_HArray1OfXYZ::ChangeLast()
{
	return Macad::Occt::XYZ(((::TColgp_HArray1OfXYZ*)_NativeInstance)->ChangeLast());
}

Macad::Occt::XYZ Macad::Occt::TColgp_HArray1OfXYZ::Value(int theIndex)
{
	return Macad::Occt::XYZ(((::TColgp_HArray1OfXYZ*)_NativeInstance)->Value(theIndex));
}

Macad::Occt::XYZ Macad::Occt::TColgp_HArray1OfXYZ::ChangeValue(int theIndex)
{
	return Macad::Occt::XYZ(((::TColgp_HArray1OfXYZ*)_NativeInstance)->ChangeValue(theIndex));
}

void Macad::Occt::TColgp_HArray1OfXYZ::SetValue(int theIndex, Macad::Occt::XYZ theItem)
{
	pin_ptr<Macad::Occt::XYZ> pp_theItem = &theItem;
	((::TColgp_HArray1OfXYZ*)_NativeInstance)->SetValue(theIndex, *(gp_XYZ*)pp_theItem);
}

void Macad::Occt::TColgp_HArray1OfXYZ::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColgp_HArray1OfXYZ*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}


Macad::Occt::TColgp_HArray1OfXYZ^ Macad::Occt::TColgp_HArray1OfXYZ::CreateDowncasted(::TColgp_HArray1OfXYZ* instance)
{
	return gcnew Macad::Occt::TColgp_HArray1OfXYZ( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfCirc2d
//---------------------------------------------------------------------

Macad::Occt::TColgp_HArray2OfCirc2d::TColgp_HArray2OfCirc2d(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray2OfCirc2d(theRowLow, theRowUpp, theColLow, theColUpp);
}

Macad::Occt::TColgp_HArray2OfCirc2d::TColgp_HArray2OfCirc2d(int theRowLow, int theRowUpp, int theColLow, int theColUpp, Macad::Occt::gp_Circ2d^ theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray2OfCirc2d(theRowLow, theRowUpp, theColLow, theColUpp, *(::gp_Circ2d*)theValue->NativeInstance);
}

Macad::Occt::TColgp_HArray2OfCirc2d::TColgp_HArray2OfCirc2d(Macad::Occt::TColgp_Array2OfCirc2d^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray2OfCirc2d(*(::TColgp_Array2OfCirc2d*)theOther->NativeInstance);
}

Macad::Occt::TColgp_HArray2OfCirc2d::TColgp_HArray2OfCirc2d(Macad::Occt::TColgp_HArray2OfCirc2d^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray2OfCirc2d(*(::TColgp_HArray2OfCirc2d*)parameter1->NativeInstance);
}

Macad::Occt::TColgp_Array2OfCirc2d^ Macad::Occt::TColgp_HArray2OfCirc2d::Array2()
{
	::TColgp_Array2OfCirc2d* _result = new ::TColgp_Array2OfCirc2d();
	*_result =  (::TColgp_Array2OfCirc2d)((::TColgp_HArray2OfCirc2d*)_NativeInstance)->Array2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfCirc2d(_result);
}

Macad::Occt::TColgp_Array2OfCirc2d^ Macad::Occt::TColgp_HArray2OfCirc2d::ChangeArray2()
{
	::TColgp_Array2OfCirc2d* _result = new ::TColgp_Array2OfCirc2d();
	*_result = ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->ChangeArray2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfCirc2d(_result);
}

void Macad::Occt::TColgp_HArray2OfCirc2d::Init(Macad::Occt::gp_Circ2d^ theValue)
{
	((::TColgp_HArray2OfCirc2d*)_NativeInstance)->Init(*(::gp_Circ2d*)theValue->NativeInstance);
}

int Macad::Occt::TColgp_HArray2OfCirc2d::Size()
{
	return ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_HArray2OfCirc2d::Length()
{
	return ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_HArray2OfCirc2d::NbRows()
{
	return ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->NbRows();
}

int Macad::Occt::TColgp_HArray2OfCirc2d::NbColumns()
{
	return ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TColgp_HArray2OfCirc2d::RowLength()
{
	return ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->RowLength();
}

int Macad::Occt::TColgp_HArray2OfCirc2d::ColLength()
{
	return ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->ColLength();
}

int Macad::Occt::TColgp_HArray2OfCirc2d::LowerRow()
{
	return ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TColgp_HArray2OfCirc2d::UpperRow()
{
	return ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TColgp_HArray2OfCirc2d::LowerCol()
{
	return ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TColgp_HArray2OfCirc2d::UpperCol()
{
	return ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TColgp_HArray2OfCirc2d::IsDeletable()
{
	return ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->IsDeletable();
}

Macad::Occt::gp_Circ2d^ Macad::Occt::TColgp_HArray2OfCirc2d::Value(int theRow, int theCol)
{
	::gp_Circ2d* _result = new ::gp_Circ2d();
	*_result =  (::gp_Circ2d)((::TColgp_HArray2OfCirc2d*)_NativeInstance)->Value(theRow, theCol);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::TColgp_HArray2OfCirc2d::ChangeValue(int theRow, int theCol)
{
	::gp_Circ2d* _result = new ::gp_Circ2d();
	*_result = ((::TColgp_HArray2OfCirc2d*)_NativeInstance)->ChangeValue(theRow, theCol);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

void Macad::Occt::TColgp_HArray2OfCirc2d::SetValue(int theRow, int theCol, Macad::Occt::gp_Circ2d^ theItem)
{
	((::TColgp_HArray2OfCirc2d*)_NativeInstance)->SetValue(theRow, theCol, *(::gp_Circ2d*)theItem->NativeInstance);
}

void Macad::Occt::TColgp_HArray2OfCirc2d::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColgp_HArray2OfCirc2d*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}


Macad::Occt::TColgp_HArray2OfCirc2d^ Macad::Occt::TColgp_HArray2OfCirc2d::CreateDowncasted(::TColgp_HArray2OfCirc2d* instance)
{
	return gcnew Macad::Occt::TColgp_HArray2OfCirc2d( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfDir
//---------------------------------------------------------------------

Macad::Occt::TColgp_HArray2OfDir::TColgp_HArray2OfDir(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray2OfDir(theRowLow, theRowUpp, theColLow, theColUpp);
}

Macad::Occt::TColgp_HArray2OfDir::TColgp_HArray2OfDir(int theRowLow, int theRowUpp, int theColLow, int theColUpp, Macad::Occt::Dir theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Dir> pp_theValue = &theValue;
	NativeInstance = new ::TColgp_HArray2OfDir(theRowLow, theRowUpp, theColLow, theColUpp, *(gp_Dir*)pp_theValue);
}

Macad::Occt::TColgp_HArray2OfDir::TColgp_HArray2OfDir(Macad::Occt::TColgp_Array2OfDir^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray2OfDir(*(::TColgp_Array2OfDir*)theOther->NativeInstance);
}

Macad::Occt::TColgp_HArray2OfDir::TColgp_HArray2OfDir(Macad::Occt::TColgp_HArray2OfDir^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray2OfDir(*(::TColgp_HArray2OfDir*)parameter1->NativeInstance);
}

Macad::Occt::TColgp_Array2OfDir^ Macad::Occt::TColgp_HArray2OfDir::Array2()
{
	::TColgp_Array2OfDir* _result = new ::TColgp_Array2OfDir();
	*_result =  (::TColgp_Array2OfDir)((::TColgp_HArray2OfDir*)_NativeInstance)->Array2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfDir(_result);
}

Macad::Occt::TColgp_Array2OfDir^ Macad::Occt::TColgp_HArray2OfDir::ChangeArray2()
{
	::TColgp_Array2OfDir* _result = new ::TColgp_Array2OfDir();
	*_result = ((::TColgp_HArray2OfDir*)_NativeInstance)->ChangeArray2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfDir(_result);
}

void Macad::Occt::TColgp_HArray2OfDir::Init(Macad::Occt::Dir theValue)
{
	pin_ptr<Macad::Occt::Dir> pp_theValue = &theValue;
	((::TColgp_HArray2OfDir*)_NativeInstance)->Init(*(gp_Dir*)pp_theValue);
}

int Macad::Occt::TColgp_HArray2OfDir::Size()
{
	return ((::TColgp_HArray2OfDir*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_HArray2OfDir::Length()
{
	return ((::TColgp_HArray2OfDir*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_HArray2OfDir::NbRows()
{
	return ((::TColgp_HArray2OfDir*)_NativeInstance)->NbRows();
}

int Macad::Occt::TColgp_HArray2OfDir::NbColumns()
{
	return ((::TColgp_HArray2OfDir*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TColgp_HArray2OfDir::RowLength()
{
	return ((::TColgp_HArray2OfDir*)_NativeInstance)->RowLength();
}

int Macad::Occt::TColgp_HArray2OfDir::ColLength()
{
	return ((::TColgp_HArray2OfDir*)_NativeInstance)->ColLength();
}

int Macad::Occt::TColgp_HArray2OfDir::LowerRow()
{
	return ((::TColgp_HArray2OfDir*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TColgp_HArray2OfDir::UpperRow()
{
	return ((::TColgp_HArray2OfDir*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TColgp_HArray2OfDir::LowerCol()
{
	return ((::TColgp_HArray2OfDir*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TColgp_HArray2OfDir::UpperCol()
{
	return ((::TColgp_HArray2OfDir*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TColgp_HArray2OfDir::IsDeletable()
{
	return ((::TColgp_HArray2OfDir*)_NativeInstance)->IsDeletable();
}

Macad::Occt::Dir Macad::Occt::TColgp_HArray2OfDir::Value(int theRow, int theCol)
{
	return Macad::Occt::Dir(((::TColgp_HArray2OfDir*)_NativeInstance)->Value(theRow, theCol));
}

Macad::Occt::Dir Macad::Occt::TColgp_HArray2OfDir::ChangeValue(int theRow, int theCol)
{
	return Macad::Occt::Dir(((::TColgp_HArray2OfDir*)_NativeInstance)->ChangeValue(theRow, theCol));
}

void Macad::Occt::TColgp_HArray2OfDir::SetValue(int theRow, int theCol, Macad::Occt::Dir theItem)
{
	pin_ptr<Macad::Occt::Dir> pp_theItem = &theItem;
	((::TColgp_HArray2OfDir*)_NativeInstance)->SetValue(theRow, theCol, *(gp_Dir*)pp_theItem);
}

void Macad::Occt::TColgp_HArray2OfDir::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColgp_HArray2OfDir*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}


Macad::Occt::TColgp_HArray2OfDir^ Macad::Occt::TColgp_HArray2OfDir::CreateDowncasted(::TColgp_HArray2OfDir* instance)
{
	return gcnew Macad::Occt::TColgp_HArray2OfDir( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfDir2d
//---------------------------------------------------------------------

Macad::Occt::TColgp_HArray2OfDir2d::TColgp_HArray2OfDir2d(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray2OfDir2d(theRowLow, theRowUpp, theColLow, theColUpp);
}

Macad::Occt::TColgp_HArray2OfDir2d::TColgp_HArray2OfDir2d(int theRowLow, int theRowUpp, int theColLow, int theColUpp, Macad::Occt::Dir2d theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Dir2d> pp_theValue = &theValue;
	NativeInstance = new ::TColgp_HArray2OfDir2d(theRowLow, theRowUpp, theColLow, theColUpp, *(gp_Dir2d*)pp_theValue);
}

Macad::Occt::TColgp_HArray2OfDir2d::TColgp_HArray2OfDir2d(Macad::Occt::TColgp_Array2OfDir2d^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray2OfDir2d(*(::TColgp_Array2OfDir2d*)theOther->NativeInstance);
}

Macad::Occt::TColgp_HArray2OfDir2d::TColgp_HArray2OfDir2d(Macad::Occt::TColgp_HArray2OfDir2d^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray2OfDir2d(*(::TColgp_HArray2OfDir2d*)parameter1->NativeInstance);
}

Macad::Occt::TColgp_Array2OfDir2d^ Macad::Occt::TColgp_HArray2OfDir2d::Array2()
{
	::TColgp_Array2OfDir2d* _result = new ::TColgp_Array2OfDir2d();
	*_result =  (::TColgp_Array2OfDir2d)((::TColgp_HArray2OfDir2d*)_NativeInstance)->Array2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfDir2d(_result);
}

Macad::Occt::TColgp_Array2OfDir2d^ Macad::Occt::TColgp_HArray2OfDir2d::ChangeArray2()
{
	::TColgp_Array2OfDir2d* _result = new ::TColgp_Array2OfDir2d();
	*_result = ((::TColgp_HArray2OfDir2d*)_NativeInstance)->ChangeArray2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfDir2d(_result);
}

void Macad::Occt::TColgp_HArray2OfDir2d::Init(Macad::Occt::Dir2d theValue)
{
	pin_ptr<Macad::Occt::Dir2d> pp_theValue = &theValue;
	((::TColgp_HArray2OfDir2d*)_NativeInstance)->Init(*(gp_Dir2d*)pp_theValue);
}

int Macad::Occt::TColgp_HArray2OfDir2d::Size()
{
	return ((::TColgp_HArray2OfDir2d*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_HArray2OfDir2d::Length()
{
	return ((::TColgp_HArray2OfDir2d*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_HArray2OfDir2d::NbRows()
{
	return ((::TColgp_HArray2OfDir2d*)_NativeInstance)->NbRows();
}

int Macad::Occt::TColgp_HArray2OfDir2d::NbColumns()
{
	return ((::TColgp_HArray2OfDir2d*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TColgp_HArray2OfDir2d::RowLength()
{
	return ((::TColgp_HArray2OfDir2d*)_NativeInstance)->RowLength();
}

int Macad::Occt::TColgp_HArray2OfDir2d::ColLength()
{
	return ((::TColgp_HArray2OfDir2d*)_NativeInstance)->ColLength();
}

int Macad::Occt::TColgp_HArray2OfDir2d::LowerRow()
{
	return ((::TColgp_HArray2OfDir2d*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TColgp_HArray2OfDir2d::UpperRow()
{
	return ((::TColgp_HArray2OfDir2d*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TColgp_HArray2OfDir2d::LowerCol()
{
	return ((::TColgp_HArray2OfDir2d*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TColgp_HArray2OfDir2d::UpperCol()
{
	return ((::TColgp_HArray2OfDir2d*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TColgp_HArray2OfDir2d::IsDeletable()
{
	return ((::TColgp_HArray2OfDir2d*)_NativeInstance)->IsDeletable();
}

Macad::Occt::Dir2d Macad::Occt::TColgp_HArray2OfDir2d::Value(int theRow, int theCol)
{
	return Macad::Occt::Dir2d(((::TColgp_HArray2OfDir2d*)_NativeInstance)->Value(theRow, theCol));
}

Macad::Occt::Dir2d Macad::Occt::TColgp_HArray2OfDir2d::ChangeValue(int theRow, int theCol)
{
	return Macad::Occt::Dir2d(((::TColgp_HArray2OfDir2d*)_NativeInstance)->ChangeValue(theRow, theCol));
}

void Macad::Occt::TColgp_HArray2OfDir2d::SetValue(int theRow, int theCol, Macad::Occt::Dir2d theItem)
{
	pin_ptr<Macad::Occt::Dir2d> pp_theItem = &theItem;
	((::TColgp_HArray2OfDir2d*)_NativeInstance)->SetValue(theRow, theCol, *(gp_Dir2d*)pp_theItem);
}

void Macad::Occt::TColgp_HArray2OfDir2d::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColgp_HArray2OfDir2d*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}


Macad::Occt::TColgp_HArray2OfDir2d^ Macad::Occt::TColgp_HArray2OfDir2d::CreateDowncasted(::TColgp_HArray2OfDir2d* instance)
{
	return gcnew Macad::Occt::TColgp_HArray2OfDir2d( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfLin2d
//---------------------------------------------------------------------

Macad::Occt::TColgp_HArray2OfLin2d::TColgp_HArray2OfLin2d(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray2OfLin2d(theRowLow, theRowUpp, theColLow, theColUpp);
}

Macad::Occt::TColgp_HArray2OfLin2d::TColgp_HArray2OfLin2d(int theRowLow, int theRowUpp, int theColLow, int theColUpp, Macad::Occt::gp_Lin2d^ theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray2OfLin2d(theRowLow, theRowUpp, theColLow, theColUpp, *(::gp_Lin2d*)theValue->NativeInstance);
}

Macad::Occt::TColgp_HArray2OfLin2d::TColgp_HArray2OfLin2d(Macad::Occt::TColgp_Array2OfLin2d^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray2OfLin2d(*(::TColgp_Array2OfLin2d*)theOther->NativeInstance);
}

Macad::Occt::TColgp_HArray2OfLin2d::TColgp_HArray2OfLin2d(Macad::Occt::TColgp_HArray2OfLin2d^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray2OfLin2d(*(::TColgp_HArray2OfLin2d*)parameter1->NativeInstance);
}

Macad::Occt::TColgp_Array2OfLin2d^ Macad::Occt::TColgp_HArray2OfLin2d::Array2()
{
	::TColgp_Array2OfLin2d* _result = new ::TColgp_Array2OfLin2d();
	*_result =  (::TColgp_Array2OfLin2d)((::TColgp_HArray2OfLin2d*)_NativeInstance)->Array2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfLin2d(_result);
}

Macad::Occt::TColgp_Array2OfLin2d^ Macad::Occt::TColgp_HArray2OfLin2d::ChangeArray2()
{
	::TColgp_Array2OfLin2d* _result = new ::TColgp_Array2OfLin2d();
	*_result = ((::TColgp_HArray2OfLin2d*)_NativeInstance)->ChangeArray2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfLin2d(_result);
}

void Macad::Occt::TColgp_HArray2OfLin2d::Init(Macad::Occt::gp_Lin2d^ theValue)
{
	((::TColgp_HArray2OfLin2d*)_NativeInstance)->Init(*(::gp_Lin2d*)theValue->NativeInstance);
}

int Macad::Occt::TColgp_HArray2OfLin2d::Size()
{
	return ((::TColgp_HArray2OfLin2d*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_HArray2OfLin2d::Length()
{
	return ((::TColgp_HArray2OfLin2d*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_HArray2OfLin2d::NbRows()
{
	return ((::TColgp_HArray2OfLin2d*)_NativeInstance)->NbRows();
}

int Macad::Occt::TColgp_HArray2OfLin2d::NbColumns()
{
	return ((::TColgp_HArray2OfLin2d*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TColgp_HArray2OfLin2d::RowLength()
{
	return ((::TColgp_HArray2OfLin2d*)_NativeInstance)->RowLength();
}

int Macad::Occt::TColgp_HArray2OfLin2d::ColLength()
{
	return ((::TColgp_HArray2OfLin2d*)_NativeInstance)->ColLength();
}

int Macad::Occt::TColgp_HArray2OfLin2d::LowerRow()
{
	return ((::TColgp_HArray2OfLin2d*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TColgp_HArray2OfLin2d::UpperRow()
{
	return ((::TColgp_HArray2OfLin2d*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TColgp_HArray2OfLin2d::LowerCol()
{
	return ((::TColgp_HArray2OfLin2d*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TColgp_HArray2OfLin2d::UpperCol()
{
	return ((::TColgp_HArray2OfLin2d*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TColgp_HArray2OfLin2d::IsDeletable()
{
	return ((::TColgp_HArray2OfLin2d*)_NativeInstance)->IsDeletable();
}

Macad::Occt::gp_Lin2d^ Macad::Occt::TColgp_HArray2OfLin2d::Value(int theRow, int theCol)
{
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result =  (::gp_Lin2d)((::TColgp_HArray2OfLin2d*)_NativeInstance)->Value(theRow, theCol);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

Macad::Occt::gp_Lin2d^ Macad::Occt::TColgp_HArray2OfLin2d::ChangeValue(int theRow, int theCol)
{
	::gp_Lin2d* _result = new ::gp_Lin2d();
	*_result = ((::TColgp_HArray2OfLin2d*)_NativeInstance)->ChangeValue(theRow, theCol);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

void Macad::Occt::TColgp_HArray2OfLin2d::SetValue(int theRow, int theCol, Macad::Occt::gp_Lin2d^ theItem)
{
	((::TColgp_HArray2OfLin2d*)_NativeInstance)->SetValue(theRow, theCol, *(::gp_Lin2d*)theItem->NativeInstance);
}

void Macad::Occt::TColgp_HArray2OfLin2d::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColgp_HArray2OfLin2d*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}


Macad::Occt::TColgp_HArray2OfLin2d^ Macad::Occt::TColgp_HArray2OfLin2d::CreateDowncasted(::TColgp_HArray2OfLin2d* instance)
{
	return gcnew Macad::Occt::TColgp_HArray2OfLin2d( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfPnt
//---------------------------------------------------------------------

Macad::Occt::TColgp_HArray2OfPnt::TColgp_HArray2OfPnt(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray2OfPnt(theRowLow, theRowUpp, theColLow, theColUpp);
}

Macad::Occt::TColgp_HArray2OfPnt::TColgp_HArray2OfPnt(int theRowLow, int theRowUpp, int theColLow, int theColUpp, Macad::Occt::Pnt theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_theValue = &theValue;
	NativeInstance = new ::TColgp_HArray2OfPnt(theRowLow, theRowUpp, theColLow, theColUpp, *(gp_Pnt*)pp_theValue);
}

Macad::Occt::TColgp_HArray2OfPnt::TColgp_HArray2OfPnt(Macad::Occt::TColgp_Array2OfPnt^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray2OfPnt(*(::TColgp_Array2OfPnt*)theOther->NativeInstance);
}

Macad::Occt::TColgp_HArray2OfPnt::TColgp_HArray2OfPnt(Macad::Occt::TColgp_HArray2OfPnt^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray2OfPnt(*(::TColgp_HArray2OfPnt*)parameter1->NativeInstance);
}

Macad::Occt::TColgp_Array2OfPnt^ Macad::Occt::TColgp_HArray2OfPnt::Array2()
{
	::TColgp_Array2OfPnt* _result = new ::TColgp_Array2OfPnt();
	*_result =  (::TColgp_Array2OfPnt)((::TColgp_HArray2OfPnt*)_NativeInstance)->Array2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfPnt(_result);
}

Macad::Occt::TColgp_Array2OfPnt^ Macad::Occt::TColgp_HArray2OfPnt::ChangeArray2()
{
	::TColgp_Array2OfPnt* _result = new ::TColgp_Array2OfPnt();
	*_result = ((::TColgp_HArray2OfPnt*)_NativeInstance)->ChangeArray2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfPnt(_result);
}

void Macad::Occt::TColgp_HArray2OfPnt::Init(Macad::Occt::Pnt theValue)
{
	pin_ptr<Macad::Occt::Pnt> pp_theValue = &theValue;
	((::TColgp_HArray2OfPnt*)_NativeInstance)->Init(*(gp_Pnt*)pp_theValue);
}

int Macad::Occt::TColgp_HArray2OfPnt::Size()
{
	return ((::TColgp_HArray2OfPnt*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_HArray2OfPnt::Length()
{
	return ((::TColgp_HArray2OfPnt*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_HArray2OfPnt::NbRows()
{
	return ((::TColgp_HArray2OfPnt*)_NativeInstance)->NbRows();
}

int Macad::Occt::TColgp_HArray2OfPnt::NbColumns()
{
	return ((::TColgp_HArray2OfPnt*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TColgp_HArray2OfPnt::RowLength()
{
	return ((::TColgp_HArray2OfPnt*)_NativeInstance)->RowLength();
}

int Macad::Occt::TColgp_HArray2OfPnt::ColLength()
{
	return ((::TColgp_HArray2OfPnt*)_NativeInstance)->ColLength();
}

int Macad::Occt::TColgp_HArray2OfPnt::LowerRow()
{
	return ((::TColgp_HArray2OfPnt*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TColgp_HArray2OfPnt::UpperRow()
{
	return ((::TColgp_HArray2OfPnt*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TColgp_HArray2OfPnt::LowerCol()
{
	return ((::TColgp_HArray2OfPnt*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TColgp_HArray2OfPnt::UpperCol()
{
	return ((::TColgp_HArray2OfPnt*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TColgp_HArray2OfPnt::IsDeletable()
{
	return ((::TColgp_HArray2OfPnt*)_NativeInstance)->IsDeletable();
}

Macad::Occt::Pnt Macad::Occt::TColgp_HArray2OfPnt::Value(int theRow, int theCol)
{
	return Macad::Occt::Pnt(((::TColgp_HArray2OfPnt*)_NativeInstance)->Value(theRow, theCol));
}

Macad::Occt::Pnt Macad::Occt::TColgp_HArray2OfPnt::ChangeValue(int theRow, int theCol)
{
	return Macad::Occt::Pnt(((::TColgp_HArray2OfPnt*)_NativeInstance)->ChangeValue(theRow, theCol));
}

void Macad::Occt::TColgp_HArray2OfPnt::SetValue(int theRow, int theCol, Macad::Occt::Pnt theItem)
{
	pin_ptr<Macad::Occt::Pnt> pp_theItem = &theItem;
	((::TColgp_HArray2OfPnt*)_NativeInstance)->SetValue(theRow, theCol, *(gp_Pnt*)pp_theItem);
}

void Macad::Occt::TColgp_HArray2OfPnt::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColgp_HArray2OfPnt*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}


Macad::Occt::TColgp_HArray2OfPnt^ Macad::Occt::TColgp_HArray2OfPnt::CreateDowncasted(::TColgp_HArray2OfPnt* instance)
{
	return gcnew Macad::Occt::TColgp_HArray2OfPnt( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfPnt2d
//---------------------------------------------------------------------

Macad::Occt::TColgp_HArray2OfPnt2d::TColgp_HArray2OfPnt2d(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray2OfPnt2d(theRowLow, theRowUpp, theColLow, theColUpp);
}

Macad::Occt::TColgp_HArray2OfPnt2d::TColgp_HArray2OfPnt2d(int theRowLow, int theRowUpp, int theColLow, int theColUpp, Macad::Occt::Pnt2d theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_theValue = &theValue;
	NativeInstance = new ::TColgp_HArray2OfPnt2d(theRowLow, theRowUpp, theColLow, theColUpp, *(gp_Pnt2d*)pp_theValue);
}

Macad::Occt::TColgp_HArray2OfPnt2d::TColgp_HArray2OfPnt2d(Macad::Occt::TColgp_Array2OfPnt2d^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray2OfPnt2d(*(::TColgp_Array2OfPnt2d*)theOther->NativeInstance);
}

Macad::Occt::TColgp_HArray2OfPnt2d::TColgp_HArray2OfPnt2d(Macad::Occt::TColgp_HArray2OfPnt2d^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray2OfPnt2d(*(::TColgp_HArray2OfPnt2d*)parameter1->NativeInstance);
}

Macad::Occt::TColgp_Array2OfPnt2d^ Macad::Occt::TColgp_HArray2OfPnt2d::Array2()
{
	::TColgp_Array2OfPnt2d* _result = new ::TColgp_Array2OfPnt2d();
	*_result =  (::TColgp_Array2OfPnt2d)((::TColgp_HArray2OfPnt2d*)_NativeInstance)->Array2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfPnt2d(_result);
}

Macad::Occt::TColgp_Array2OfPnt2d^ Macad::Occt::TColgp_HArray2OfPnt2d::ChangeArray2()
{
	::TColgp_Array2OfPnt2d* _result = new ::TColgp_Array2OfPnt2d();
	*_result = ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->ChangeArray2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfPnt2d(_result);
}

void Macad::Occt::TColgp_HArray2OfPnt2d::Init(Macad::Occt::Pnt2d theValue)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_theValue = &theValue;
	((::TColgp_HArray2OfPnt2d*)_NativeInstance)->Init(*(gp_Pnt2d*)pp_theValue);
}

int Macad::Occt::TColgp_HArray2OfPnt2d::Size()
{
	return ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_HArray2OfPnt2d::Length()
{
	return ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_HArray2OfPnt2d::NbRows()
{
	return ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->NbRows();
}

int Macad::Occt::TColgp_HArray2OfPnt2d::NbColumns()
{
	return ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TColgp_HArray2OfPnt2d::RowLength()
{
	return ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->RowLength();
}

int Macad::Occt::TColgp_HArray2OfPnt2d::ColLength()
{
	return ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->ColLength();
}

int Macad::Occt::TColgp_HArray2OfPnt2d::LowerRow()
{
	return ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TColgp_HArray2OfPnt2d::UpperRow()
{
	return ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TColgp_HArray2OfPnt2d::LowerCol()
{
	return ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TColgp_HArray2OfPnt2d::UpperCol()
{
	return ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TColgp_HArray2OfPnt2d::IsDeletable()
{
	return ((::TColgp_HArray2OfPnt2d*)_NativeInstance)->IsDeletable();
}

Macad::Occt::Pnt2d Macad::Occt::TColgp_HArray2OfPnt2d::Value(int theRow, int theCol)
{
	return Macad::Occt::Pnt2d(((::TColgp_HArray2OfPnt2d*)_NativeInstance)->Value(theRow, theCol));
}

Macad::Occt::Pnt2d Macad::Occt::TColgp_HArray2OfPnt2d::ChangeValue(int theRow, int theCol)
{
	return Macad::Occt::Pnt2d(((::TColgp_HArray2OfPnt2d*)_NativeInstance)->ChangeValue(theRow, theCol));
}

void Macad::Occt::TColgp_HArray2OfPnt2d::SetValue(int theRow, int theCol, Macad::Occt::Pnt2d theItem)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_theItem = &theItem;
	((::TColgp_HArray2OfPnt2d*)_NativeInstance)->SetValue(theRow, theCol, *(gp_Pnt2d*)pp_theItem);
}

void Macad::Occt::TColgp_HArray2OfPnt2d::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColgp_HArray2OfPnt2d*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}


Macad::Occt::TColgp_HArray2OfPnt2d^ Macad::Occt::TColgp_HArray2OfPnt2d::CreateDowncasted(::TColgp_HArray2OfPnt2d* instance)
{
	return gcnew Macad::Occt::TColgp_HArray2OfPnt2d( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfVec
//---------------------------------------------------------------------

Macad::Occt::TColgp_HArray2OfVec::TColgp_HArray2OfVec(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray2OfVec(theRowLow, theRowUpp, theColLow, theColUpp);
}

Macad::Occt::TColgp_HArray2OfVec::TColgp_HArray2OfVec(int theRowLow, int theRowUpp, int theColLow, int theColUpp, Macad::Occt::Vec theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Vec> pp_theValue = &theValue;
	NativeInstance = new ::TColgp_HArray2OfVec(theRowLow, theRowUpp, theColLow, theColUpp, *(gp_Vec*)pp_theValue);
}

Macad::Occt::TColgp_HArray2OfVec::TColgp_HArray2OfVec(Macad::Occt::TColgp_Array2OfVec^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray2OfVec(*(::TColgp_Array2OfVec*)theOther->NativeInstance);
}

Macad::Occt::TColgp_HArray2OfVec::TColgp_HArray2OfVec(Macad::Occt::TColgp_HArray2OfVec^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray2OfVec(*(::TColgp_HArray2OfVec*)parameter1->NativeInstance);
}

Macad::Occt::TColgp_Array2OfVec^ Macad::Occt::TColgp_HArray2OfVec::Array2()
{
	::TColgp_Array2OfVec* _result = new ::TColgp_Array2OfVec();
	*_result =  (::TColgp_Array2OfVec)((::TColgp_HArray2OfVec*)_NativeInstance)->Array2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfVec(_result);
}

Macad::Occt::TColgp_Array2OfVec^ Macad::Occt::TColgp_HArray2OfVec::ChangeArray2()
{
	::TColgp_Array2OfVec* _result = new ::TColgp_Array2OfVec();
	*_result = ((::TColgp_HArray2OfVec*)_NativeInstance)->ChangeArray2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfVec(_result);
}

void Macad::Occt::TColgp_HArray2OfVec::Init(Macad::Occt::Vec theValue)
{
	pin_ptr<Macad::Occt::Vec> pp_theValue = &theValue;
	((::TColgp_HArray2OfVec*)_NativeInstance)->Init(*(gp_Vec*)pp_theValue);
}

int Macad::Occt::TColgp_HArray2OfVec::Size()
{
	return ((::TColgp_HArray2OfVec*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_HArray2OfVec::Length()
{
	return ((::TColgp_HArray2OfVec*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_HArray2OfVec::NbRows()
{
	return ((::TColgp_HArray2OfVec*)_NativeInstance)->NbRows();
}

int Macad::Occt::TColgp_HArray2OfVec::NbColumns()
{
	return ((::TColgp_HArray2OfVec*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TColgp_HArray2OfVec::RowLength()
{
	return ((::TColgp_HArray2OfVec*)_NativeInstance)->RowLength();
}

int Macad::Occt::TColgp_HArray2OfVec::ColLength()
{
	return ((::TColgp_HArray2OfVec*)_NativeInstance)->ColLength();
}

int Macad::Occt::TColgp_HArray2OfVec::LowerRow()
{
	return ((::TColgp_HArray2OfVec*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TColgp_HArray2OfVec::UpperRow()
{
	return ((::TColgp_HArray2OfVec*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TColgp_HArray2OfVec::LowerCol()
{
	return ((::TColgp_HArray2OfVec*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TColgp_HArray2OfVec::UpperCol()
{
	return ((::TColgp_HArray2OfVec*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TColgp_HArray2OfVec::IsDeletable()
{
	return ((::TColgp_HArray2OfVec*)_NativeInstance)->IsDeletable();
}

Macad::Occt::Vec Macad::Occt::TColgp_HArray2OfVec::Value(int theRow, int theCol)
{
	return Macad::Occt::Vec(((::TColgp_HArray2OfVec*)_NativeInstance)->Value(theRow, theCol));
}

Macad::Occt::Vec Macad::Occt::TColgp_HArray2OfVec::ChangeValue(int theRow, int theCol)
{
	return Macad::Occt::Vec(((::TColgp_HArray2OfVec*)_NativeInstance)->ChangeValue(theRow, theCol));
}

void Macad::Occt::TColgp_HArray2OfVec::SetValue(int theRow, int theCol, Macad::Occt::Vec theItem)
{
	pin_ptr<Macad::Occt::Vec> pp_theItem = &theItem;
	((::TColgp_HArray2OfVec*)_NativeInstance)->SetValue(theRow, theCol, *(gp_Vec*)pp_theItem);
}

void Macad::Occt::TColgp_HArray2OfVec::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColgp_HArray2OfVec*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}


Macad::Occt::TColgp_HArray2OfVec^ Macad::Occt::TColgp_HArray2OfVec::CreateDowncasted(::TColgp_HArray2OfVec* instance)
{
	return gcnew Macad::Occt::TColgp_HArray2OfVec( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfVec2d
//---------------------------------------------------------------------

Macad::Occt::TColgp_HArray2OfVec2d::TColgp_HArray2OfVec2d(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray2OfVec2d(theRowLow, theRowUpp, theColLow, theColUpp);
}

Macad::Occt::TColgp_HArray2OfVec2d::TColgp_HArray2OfVec2d(int theRowLow, int theRowUpp, int theColLow, int theColUpp, Macad::Occt::Vec2d theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Vec2d> pp_theValue = &theValue;
	NativeInstance = new ::TColgp_HArray2OfVec2d(theRowLow, theRowUpp, theColLow, theColUpp, *(gp_Vec2d*)pp_theValue);
}

Macad::Occt::TColgp_HArray2OfVec2d::TColgp_HArray2OfVec2d(Macad::Occt::TColgp_Array2OfVec2d^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray2OfVec2d(*(::TColgp_Array2OfVec2d*)theOther->NativeInstance);
}

Macad::Occt::TColgp_HArray2OfVec2d::TColgp_HArray2OfVec2d(Macad::Occt::TColgp_HArray2OfVec2d^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray2OfVec2d(*(::TColgp_HArray2OfVec2d*)parameter1->NativeInstance);
}

Macad::Occt::TColgp_Array2OfVec2d^ Macad::Occt::TColgp_HArray2OfVec2d::Array2()
{
	::TColgp_Array2OfVec2d* _result = new ::TColgp_Array2OfVec2d();
	*_result =  (::TColgp_Array2OfVec2d)((::TColgp_HArray2OfVec2d*)_NativeInstance)->Array2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfVec2d(_result);
}

Macad::Occt::TColgp_Array2OfVec2d^ Macad::Occt::TColgp_HArray2OfVec2d::ChangeArray2()
{
	::TColgp_Array2OfVec2d* _result = new ::TColgp_Array2OfVec2d();
	*_result = ((::TColgp_HArray2OfVec2d*)_NativeInstance)->ChangeArray2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfVec2d(_result);
}

void Macad::Occt::TColgp_HArray2OfVec2d::Init(Macad::Occt::Vec2d theValue)
{
	pin_ptr<Macad::Occt::Vec2d> pp_theValue = &theValue;
	((::TColgp_HArray2OfVec2d*)_NativeInstance)->Init(*(gp_Vec2d*)pp_theValue);
}

int Macad::Occt::TColgp_HArray2OfVec2d::Size()
{
	return ((::TColgp_HArray2OfVec2d*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_HArray2OfVec2d::Length()
{
	return ((::TColgp_HArray2OfVec2d*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_HArray2OfVec2d::NbRows()
{
	return ((::TColgp_HArray2OfVec2d*)_NativeInstance)->NbRows();
}

int Macad::Occt::TColgp_HArray2OfVec2d::NbColumns()
{
	return ((::TColgp_HArray2OfVec2d*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TColgp_HArray2OfVec2d::RowLength()
{
	return ((::TColgp_HArray2OfVec2d*)_NativeInstance)->RowLength();
}

int Macad::Occt::TColgp_HArray2OfVec2d::ColLength()
{
	return ((::TColgp_HArray2OfVec2d*)_NativeInstance)->ColLength();
}

int Macad::Occt::TColgp_HArray2OfVec2d::LowerRow()
{
	return ((::TColgp_HArray2OfVec2d*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TColgp_HArray2OfVec2d::UpperRow()
{
	return ((::TColgp_HArray2OfVec2d*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TColgp_HArray2OfVec2d::LowerCol()
{
	return ((::TColgp_HArray2OfVec2d*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TColgp_HArray2OfVec2d::UpperCol()
{
	return ((::TColgp_HArray2OfVec2d*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TColgp_HArray2OfVec2d::IsDeletable()
{
	return ((::TColgp_HArray2OfVec2d*)_NativeInstance)->IsDeletable();
}

Macad::Occt::Vec2d Macad::Occt::TColgp_HArray2OfVec2d::Value(int theRow, int theCol)
{
	return Macad::Occt::Vec2d(((::TColgp_HArray2OfVec2d*)_NativeInstance)->Value(theRow, theCol));
}

Macad::Occt::Vec2d Macad::Occt::TColgp_HArray2OfVec2d::ChangeValue(int theRow, int theCol)
{
	return Macad::Occt::Vec2d(((::TColgp_HArray2OfVec2d*)_NativeInstance)->ChangeValue(theRow, theCol));
}

void Macad::Occt::TColgp_HArray2OfVec2d::SetValue(int theRow, int theCol, Macad::Occt::Vec2d theItem)
{
	pin_ptr<Macad::Occt::Vec2d> pp_theItem = &theItem;
	((::TColgp_HArray2OfVec2d*)_NativeInstance)->SetValue(theRow, theCol, *(gp_Vec2d*)pp_theItem);
}

void Macad::Occt::TColgp_HArray2OfVec2d::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColgp_HArray2OfVec2d*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}


Macad::Occt::TColgp_HArray2OfVec2d^ Macad::Occt::TColgp_HArray2OfVec2d::CreateDowncasted(::TColgp_HArray2OfVec2d* instance)
{
	return gcnew Macad::Occt::TColgp_HArray2OfVec2d( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfXY
//---------------------------------------------------------------------

Macad::Occt::TColgp_HArray2OfXY::TColgp_HArray2OfXY(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray2OfXY(theRowLow, theRowUpp, theColLow, theColUpp);
}

Macad::Occt::TColgp_HArray2OfXY::TColgp_HArray2OfXY(int theRowLow, int theRowUpp, int theColLow, int theColUpp, Macad::Occt::XY theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::XY> pp_theValue = &theValue;
	NativeInstance = new ::TColgp_HArray2OfXY(theRowLow, theRowUpp, theColLow, theColUpp, *(gp_XY*)pp_theValue);
}

Macad::Occt::TColgp_HArray2OfXY::TColgp_HArray2OfXY(Macad::Occt::TColgp_Array2OfXY^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray2OfXY(*(::TColgp_Array2OfXY*)theOther->NativeInstance);
}

Macad::Occt::TColgp_HArray2OfXY::TColgp_HArray2OfXY(Macad::Occt::TColgp_HArray2OfXY^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray2OfXY(*(::TColgp_HArray2OfXY*)parameter1->NativeInstance);
}

Macad::Occt::TColgp_Array2OfXY^ Macad::Occt::TColgp_HArray2OfXY::Array2()
{
	::TColgp_Array2OfXY* _result = new ::TColgp_Array2OfXY();
	*_result =  (::TColgp_Array2OfXY)((::TColgp_HArray2OfXY*)_NativeInstance)->Array2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfXY(_result);
}

Macad::Occt::TColgp_Array2OfXY^ Macad::Occt::TColgp_HArray2OfXY::ChangeArray2()
{
	::TColgp_Array2OfXY* _result = new ::TColgp_Array2OfXY();
	*_result = ((::TColgp_HArray2OfXY*)_NativeInstance)->ChangeArray2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfXY(_result);
}

void Macad::Occt::TColgp_HArray2OfXY::Init(Macad::Occt::XY theValue)
{
	pin_ptr<Macad::Occt::XY> pp_theValue = &theValue;
	((::TColgp_HArray2OfXY*)_NativeInstance)->Init(*(gp_XY*)pp_theValue);
}

int Macad::Occt::TColgp_HArray2OfXY::Size()
{
	return ((::TColgp_HArray2OfXY*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_HArray2OfXY::Length()
{
	return ((::TColgp_HArray2OfXY*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_HArray2OfXY::NbRows()
{
	return ((::TColgp_HArray2OfXY*)_NativeInstance)->NbRows();
}

int Macad::Occt::TColgp_HArray2OfXY::NbColumns()
{
	return ((::TColgp_HArray2OfXY*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TColgp_HArray2OfXY::RowLength()
{
	return ((::TColgp_HArray2OfXY*)_NativeInstance)->RowLength();
}

int Macad::Occt::TColgp_HArray2OfXY::ColLength()
{
	return ((::TColgp_HArray2OfXY*)_NativeInstance)->ColLength();
}

int Macad::Occt::TColgp_HArray2OfXY::LowerRow()
{
	return ((::TColgp_HArray2OfXY*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TColgp_HArray2OfXY::UpperRow()
{
	return ((::TColgp_HArray2OfXY*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TColgp_HArray2OfXY::LowerCol()
{
	return ((::TColgp_HArray2OfXY*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TColgp_HArray2OfXY::UpperCol()
{
	return ((::TColgp_HArray2OfXY*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TColgp_HArray2OfXY::IsDeletable()
{
	return ((::TColgp_HArray2OfXY*)_NativeInstance)->IsDeletable();
}

Macad::Occt::XY Macad::Occt::TColgp_HArray2OfXY::Value(int theRow, int theCol)
{
	return Macad::Occt::XY(((::TColgp_HArray2OfXY*)_NativeInstance)->Value(theRow, theCol));
}

Macad::Occt::XY Macad::Occt::TColgp_HArray2OfXY::ChangeValue(int theRow, int theCol)
{
	return Macad::Occt::XY(((::TColgp_HArray2OfXY*)_NativeInstance)->ChangeValue(theRow, theCol));
}

void Macad::Occt::TColgp_HArray2OfXY::SetValue(int theRow, int theCol, Macad::Occt::XY theItem)
{
	pin_ptr<Macad::Occt::XY> pp_theItem = &theItem;
	((::TColgp_HArray2OfXY*)_NativeInstance)->SetValue(theRow, theCol, *(gp_XY*)pp_theItem);
}

void Macad::Occt::TColgp_HArray2OfXY::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColgp_HArray2OfXY*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}


Macad::Occt::TColgp_HArray2OfXY^ Macad::Occt::TColgp_HArray2OfXY::CreateDowncasted(::TColgp_HArray2OfXY* instance)
{
	return gcnew Macad::Occt::TColgp_HArray2OfXY( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HArray2OfXYZ
//---------------------------------------------------------------------

Macad::Occt::TColgp_HArray2OfXYZ::TColgp_HArray2OfXYZ(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray2OfXYZ(theRowLow, theRowUpp, theColLow, theColUpp);
}

Macad::Occt::TColgp_HArray2OfXYZ::TColgp_HArray2OfXYZ(int theRowLow, int theRowUpp, int theColLow, int theColUpp, Macad::Occt::XYZ theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::XYZ> pp_theValue = &theValue;
	NativeInstance = new ::TColgp_HArray2OfXYZ(theRowLow, theRowUpp, theColLow, theColUpp, *(gp_XYZ*)pp_theValue);
}

Macad::Occt::TColgp_HArray2OfXYZ::TColgp_HArray2OfXYZ(Macad::Occt::TColgp_Array2OfXYZ^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray2OfXYZ(*(::TColgp_Array2OfXYZ*)theOther->NativeInstance);
}

Macad::Occt::TColgp_HArray2OfXYZ::TColgp_HArray2OfXYZ(Macad::Occt::TColgp_HArray2OfXYZ^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HArray2OfXYZ(*(::TColgp_HArray2OfXYZ*)parameter1->NativeInstance);
}

Macad::Occt::TColgp_Array2OfXYZ^ Macad::Occt::TColgp_HArray2OfXYZ::Array2()
{
	::TColgp_Array2OfXYZ* _result = new ::TColgp_Array2OfXYZ();
	*_result =  (::TColgp_Array2OfXYZ)((::TColgp_HArray2OfXYZ*)_NativeInstance)->Array2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfXYZ(_result);
}

Macad::Occt::TColgp_Array2OfXYZ^ Macad::Occt::TColgp_HArray2OfXYZ::ChangeArray2()
{
	::TColgp_Array2OfXYZ* _result = new ::TColgp_Array2OfXYZ();
	*_result = ((::TColgp_HArray2OfXYZ*)_NativeInstance)->ChangeArray2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_Array2OfXYZ(_result);
}

void Macad::Occt::TColgp_HArray2OfXYZ::Init(Macad::Occt::XYZ theValue)
{
	pin_ptr<Macad::Occt::XYZ> pp_theValue = &theValue;
	((::TColgp_HArray2OfXYZ*)_NativeInstance)->Init(*(gp_XYZ*)pp_theValue);
}

int Macad::Occt::TColgp_HArray2OfXYZ::Size()
{
	return ((::TColgp_HArray2OfXYZ*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_HArray2OfXYZ::Length()
{
	return ((::TColgp_HArray2OfXYZ*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_HArray2OfXYZ::NbRows()
{
	return ((::TColgp_HArray2OfXYZ*)_NativeInstance)->NbRows();
}

int Macad::Occt::TColgp_HArray2OfXYZ::NbColumns()
{
	return ((::TColgp_HArray2OfXYZ*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TColgp_HArray2OfXYZ::RowLength()
{
	return ((::TColgp_HArray2OfXYZ*)_NativeInstance)->RowLength();
}

int Macad::Occt::TColgp_HArray2OfXYZ::ColLength()
{
	return ((::TColgp_HArray2OfXYZ*)_NativeInstance)->ColLength();
}

int Macad::Occt::TColgp_HArray2OfXYZ::LowerRow()
{
	return ((::TColgp_HArray2OfXYZ*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TColgp_HArray2OfXYZ::UpperRow()
{
	return ((::TColgp_HArray2OfXYZ*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TColgp_HArray2OfXYZ::LowerCol()
{
	return ((::TColgp_HArray2OfXYZ*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TColgp_HArray2OfXYZ::UpperCol()
{
	return ((::TColgp_HArray2OfXYZ*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TColgp_HArray2OfXYZ::IsDeletable()
{
	return ((::TColgp_HArray2OfXYZ*)_NativeInstance)->IsDeletable();
}

Macad::Occt::XYZ Macad::Occt::TColgp_HArray2OfXYZ::Value(int theRow, int theCol)
{
	return Macad::Occt::XYZ(((::TColgp_HArray2OfXYZ*)_NativeInstance)->Value(theRow, theCol));
}

Macad::Occt::XYZ Macad::Occt::TColgp_HArray2OfXYZ::ChangeValue(int theRow, int theCol)
{
	return Macad::Occt::XYZ(((::TColgp_HArray2OfXYZ*)_NativeInstance)->ChangeValue(theRow, theCol));
}

void Macad::Occt::TColgp_HArray2OfXYZ::SetValue(int theRow, int theCol, Macad::Occt::XYZ theItem)
{
	pin_ptr<Macad::Occt::XYZ> pp_theItem = &theItem;
	((::TColgp_HArray2OfXYZ*)_NativeInstance)->SetValue(theRow, theCol, *(gp_XYZ*)pp_theItem);
}

void Macad::Occt::TColgp_HArray2OfXYZ::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColgp_HArray2OfXYZ*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}


Macad::Occt::TColgp_HArray2OfXYZ^ Macad::Occt::TColgp_HArray2OfXYZ::CreateDowncasted(::TColgp_HArray2OfXYZ* instance)
{
	return gcnew Macad::Occt::TColgp_HArray2OfXYZ( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HSequenceOfDir
//---------------------------------------------------------------------

Macad::Occt::TColgp_HSequenceOfDir::TColgp_HSequenceOfDir()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HSequenceOfDir();
}

Macad::Occt::TColgp_HSequenceOfDir::TColgp_HSequenceOfDir(Macad::Occt::TColgp_SequenceOfDir^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HSequenceOfDir(*(::TColgp_SequenceOfDir*)theOther->NativeInstance);
}

Macad::Occt::TColgp_HSequenceOfDir::TColgp_HSequenceOfDir(Macad::Occt::TColgp_HSequenceOfDir^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HSequenceOfDir(*(::TColgp_HSequenceOfDir*)parameter1->NativeInstance);
}

Macad::Occt::TColgp_SequenceOfDir^ Macad::Occt::TColgp_HSequenceOfDir::Sequence()
{
	::TColgp_SequenceOfDir* _result = new ::TColgp_SequenceOfDir();
	*_result =  (::TColgp_SequenceOfDir)((::TColgp_HSequenceOfDir*)_NativeInstance)->Sequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfDir(_result);
}

void Macad::Occt::TColgp_HSequenceOfDir::Append(Macad::Occt::Dir theItem)
{
	pin_ptr<Macad::Occt::Dir> pp_theItem = &theItem;
	((::TColgp_HSequenceOfDir*)_NativeInstance)->Append(*(gp_Dir*)pp_theItem);
}

void Macad::Occt::TColgp_HSequenceOfDir::Append(Macad::Occt::TColgp_SequenceOfDir^ theSequence)
{
	((::TColgp_HSequenceOfDir*)_NativeInstance)->Append(*(::TColgp_SequenceOfDir*)theSequence->NativeInstance);
}

Macad::Occt::TColgp_SequenceOfDir^ Macad::Occt::TColgp_HSequenceOfDir::ChangeSequence()
{
	::TColgp_SequenceOfDir* _result = new ::TColgp_SequenceOfDir();
	*_result = ((::TColgp_HSequenceOfDir*)_NativeInstance)->ChangeSequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfDir(_result);
}

int Macad::Occt::TColgp_HSequenceOfDir::Size()
{
	return ((::TColgp_HSequenceOfDir*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_HSequenceOfDir::Length()
{
	return ((::TColgp_HSequenceOfDir*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_HSequenceOfDir::Lower()
{
	return ((::TColgp_HSequenceOfDir*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_HSequenceOfDir::Upper()
{
	return ((::TColgp_HSequenceOfDir*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_HSequenceOfDir::IsEmpty()
{
	return ((::TColgp_HSequenceOfDir*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TColgp_HSequenceOfDir::Reverse()
{
	((::TColgp_HSequenceOfDir*)_NativeInstance)->Reverse();
}

void Macad::Occt::TColgp_HSequenceOfDir::Exchange(int I, int J)
{
	((::TColgp_HSequenceOfDir*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TColgp_HSequenceOfDir::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColgp_HSequenceOfDir*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColgp_HSequenceOfDir::Clear()
{
	((::TColgp_HSequenceOfDir*)_NativeInstance)->Clear(0L);
}

void Macad::Occt::TColgp_HSequenceOfDir::Remove(int theIndex)
{
	((::TColgp_HSequenceOfDir*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TColgp_HSequenceOfDir::Remove(int theFromIndex, int theToIndex)
{
	((::TColgp_HSequenceOfDir*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TColgp_HSequenceOfDir::Prepend(Macad::Occt::Dir theItem)
{
	pin_ptr<Macad::Occt::Dir> pp_theItem = &theItem;
	((::TColgp_HSequenceOfDir*)_NativeInstance)->Prepend(*(gp_Dir*)pp_theItem);
}

void Macad::Occt::TColgp_HSequenceOfDir::InsertBefore(int theIndex, Macad::Occt::Dir theItem)
{
	pin_ptr<Macad::Occt::Dir> pp_theItem = &theItem;
	((::TColgp_HSequenceOfDir*)_NativeInstance)->InsertBefore(theIndex, *(gp_Dir*)pp_theItem);
}

void Macad::Occt::TColgp_HSequenceOfDir::InsertAfter(int theIndex, Macad::Occt::Dir theItem)
{
	pin_ptr<Macad::Occt::Dir> pp_theItem = &theItem;
	((::TColgp_HSequenceOfDir*)_NativeInstance)->InsertAfter(theIndex, *(gp_Dir*)pp_theItem);
}

Macad::Occt::Dir Macad::Occt::TColgp_HSequenceOfDir::First()
{
	return Macad::Occt::Dir(((::TColgp_HSequenceOfDir*)_NativeInstance)->First());
}

Macad::Occt::Dir Macad::Occt::TColgp_HSequenceOfDir::ChangeFirst()
{
	return Macad::Occt::Dir(((::TColgp_HSequenceOfDir*)_NativeInstance)->ChangeFirst());
}

Macad::Occt::Dir Macad::Occt::TColgp_HSequenceOfDir::Last()
{
	return Macad::Occt::Dir(((::TColgp_HSequenceOfDir*)_NativeInstance)->Last());
}

Macad::Occt::Dir Macad::Occt::TColgp_HSequenceOfDir::ChangeLast()
{
	return Macad::Occt::Dir(((::TColgp_HSequenceOfDir*)_NativeInstance)->ChangeLast());
}

Macad::Occt::Dir Macad::Occt::TColgp_HSequenceOfDir::Value(int theIndex)
{
	return Macad::Occt::Dir(((::TColgp_HSequenceOfDir*)_NativeInstance)->Value(theIndex));
}

Macad::Occt::Dir Macad::Occt::TColgp_HSequenceOfDir::ChangeValue(int theIndex)
{
	return Macad::Occt::Dir(((::TColgp_HSequenceOfDir*)_NativeInstance)->ChangeValue(theIndex));
}

void Macad::Occt::TColgp_HSequenceOfDir::SetValue(int theIndex, Macad::Occt::Dir theItem)
{
	pin_ptr<Macad::Occt::Dir> pp_theItem = &theItem;
	((::TColgp_HSequenceOfDir*)_NativeInstance)->SetValue(theIndex, *(gp_Dir*)pp_theItem);
}


Macad::Occt::TColgp_HSequenceOfDir^ Macad::Occt::TColgp_HSequenceOfDir::CreateDowncasted(::TColgp_HSequenceOfDir* instance)
{
	return gcnew Macad::Occt::TColgp_HSequenceOfDir( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HSequenceOfDir2d
//---------------------------------------------------------------------

Macad::Occt::TColgp_HSequenceOfDir2d::TColgp_HSequenceOfDir2d()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HSequenceOfDir2d();
}

Macad::Occt::TColgp_HSequenceOfDir2d::TColgp_HSequenceOfDir2d(Macad::Occt::TColgp_SequenceOfDir2d^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HSequenceOfDir2d(*(::TColgp_SequenceOfDir2d*)theOther->NativeInstance);
}

Macad::Occt::TColgp_HSequenceOfDir2d::TColgp_HSequenceOfDir2d(Macad::Occt::TColgp_HSequenceOfDir2d^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HSequenceOfDir2d(*(::TColgp_HSequenceOfDir2d*)parameter1->NativeInstance);
}

Macad::Occt::TColgp_SequenceOfDir2d^ Macad::Occt::TColgp_HSequenceOfDir2d::Sequence()
{
	::TColgp_SequenceOfDir2d* _result = new ::TColgp_SequenceOfDir2d();
	*_result =  (::TColgp_SequenceOfDir2d)((::TColgp_HSequenceOfDir2d*)_NativeInstance)->Sequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfDir2d(_result);
}

void Macad::Occt::TColgp_HSequenceOfDir2d::Append(Macad::Occt::Dir2d theItem)
{
	pin_ptr<Macad::Occt::Dir2d> pp_theItem = &theItem;
	((::TColgp_HSequenceOfDir2d*)_NativeInstance)->Append(*(gp_Dir2d*)pp_theItem);
}

void Macad::Occt::TColgp_HSequenceOfDir2d::Append(Macad::Occt::TColgp_SequenceOfDir2d^ theSequence)
{
	((::TColgp_HSequenceOfDir2d*)_NativeInstance)->Append(*(::TColgp_SequenceOfDir2d*)theSequence->NativeInstance);
}

Macad::Occt::TColgp_SequenceOfDir2d^ Macad::Occt::TColgp_HSequenceOfDir2d::ChangeSequence()
{
	::TColgp_SequenceOfDir2d* _result = new ::TColgp_SequenceOfDir2d();
	*_result = ((::TColgp_HSequenceOfDir2d*)_NativeInstance)->ChangeSequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfDir2d(_result);
}

int Macad::Occt::TColgp_HSequenceOfDir2d::Size()
{
	return ((::TColgp_HSequenceOfDir2d*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_HSequenceOfDir2d::Length()
{
	return ((::TColgp_HSequenceOfDir2d*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_HSequenceOfDir2d::Lower()
{
	return ((::TColgp_HSequenceOfDir2d*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_HSequenceOfDir2d::Upper()
{
	return ((::TColgp_HSequenceOfDir2d*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_HSequenceOfDir2d::IsEmpty()
{
	return ((::TColgp_HSequenceOfDir2d*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TColgp_HSequenceOfDir2d::Reverse()
{
	((::TColgp_HSequenceOfDir2d*)_NativeInstance)->Reverse();
}

void Macad::Occt::TColgp_HSequenceOfDir2d::Exchange(int I, int J)
{
	((::TColgp_HSequenceOfDir2d*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TColgp_HSequenceOfDir2d::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColgp_HSequenceOfDir2d*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColgp_HSequenceOfDir2d::Clear()
{
	((::TColgp_HSequenceOfDir2d*)_NativeInstance)->Clear(0L);
}

void Macad::Occt::TColgp_HSequenceOfDir2d::Remove(int theIndex)
{
	((::TColgp_HSequenceOfDir2d*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TColgp_HSequenceOfDir2d::Remove(int theFromIndex, int theToIndex)
{
	((::TColgp_HSequenceOfDir2d*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TColgp_HSequenceOfDir2d::Prepend(Macad::Occt::Dir2d theItem)
{
	pin_ptr<Macad::Occt::Dir2d> pp_theItem = &theItem;
	((::TColgp_HSequenceOfDir2d*)_NativeInstance)->Prepend(*(gp_Dir2d*)pp_theItem);
}

void Macad::Occt::TColgp_HSequenceOfDir2d::InsertBefore(int theIndex, Macad::Occt::Dir2d theItem)
{
	pin_ptr<Macad::Occt::Dir2d> pp_theItem = &theItem;
	((::TColgp_HSequenceOfDir2d*)_NativeInstance)->InsertBefore(theIndex, *(gp_Dir2d*)pp_theItem);
}

void Macad::Occt::TColgp_HSequenceOfDir2d::InsertAfter(int theIndex, Macad::Occt::Dir2d theItem)
{
	pin_ptr<Macad::Occt::Dir2d> pp_theItem = &theItem;
	((::TColgp_HSequenceOfDir2d*)_NativeInstance)->InsertAfter(theIndex, *(gp_Dir2d*)pp_theItem);
}

Macad::Occt::Dir2d Macad::Occt::TColgp_HSequenceOfDir2d::First()
{
	return Macad::Occt::Dir2d(((::TColgp_HSequenceOfDir2d*)_NativeInstance)->First());
}

Macad::Occt::Dir2d Macad::Occt::TColgp_HSequenceOfDir2d::ChangeFirst()
{
	return Macad::Occt::Dir2d(((::TColgp_HSequenceOfDir2d*)_NativeInstance)->ChangeFirst());
}

Macad::Occt::Dir2d Macad::Occt::TColgp_HSequenceOfDir2d::Last()
{
	return Macad::Occt::Dir2d(((::TColgp_HSequenceOfDir2d*)_NativeInstance)->Last());
}

Macad::Occt::Dir2d Macad::Occt::TColgp_HSequenceOfDir2d::ChangeLast()
{
	return Macad::Occt::Dir2d(((::TColgp_HSequenceOfDir2d*)_NativeInstance)->ChangeLast());
}

Macad::Occt::Dir2d Macad::Occt::TColgp_HSequenceOfDir2d::Value(int theIndex)
{
	return Macad::Occt::Dir2d(((::TColgp_HSequenceOfDir2d*)_NativeInstance)->Value(theIndex));
}

Macad::Occt::Dir2d Macad::Occt::TColgp_HSequenceOfDir2d::ChangeValue(int theIndex)
{
	return Macad::Occt::Dir2d(((::TColgp_HSequenceOfDir2d*)_NativeInstance)->ChangeValue(theIndex));
}

void Macad::Occt::TColgp_HSequenceOfDir2d::SetValue(int theIndex, Macad::Occt::Dir2d theItem)
{
	pin_ptr<Macad::Occt::Dir2d> pp_theItem = &theItem;
	((::TColgp_HSequenceOfDir2d*)_NativeInstance)->SetValue(theIndex, *(gp_Dir2d*)pp_theItem);
}


Macad::Occt::TColgp_HSequenceOfDir2d^ Macad::Occt::TColgp_HSequenceOfDir2d::CreateDowncasted(::TColgp_HSequenceOfDir2d* instance)
{
	return gcnew Macad::Occt::TColgp_HSequenceOfDir2d( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HSequenceOfPnt
//---------------------------------------------------------------------

Macad::Occt::TColgp_HSequenceOfPnt::TColgp_HSequenceOfPnt()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HSequenceOfPnt();
}

Macad::Occt::TColgp_HSequenceOfPnt::TColgp_HSequenceOfPnt(Macad::Occt::TColgp_SequenceOfPnt^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HSequenceOfPnt(*(::TColgp_SequenceOfPnt*)theOther->NativeInstance);
}

Macad::Occt::TColgp_HSequenceOfPnt::TColgp_HSequenceOfPnt(Macad::Occt::TColgp_HSequenceOfPnt^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HSequenceOfPnt(*(::TColgp_HSequenceOfPnt*)parameter1->NativeInstance);
}

Macad::Occt::TColgp_SequenceOfPnt^ Macad::Occt::TColgp_HSequenceOfPnt::Sequence()
{
	::TColgp_SequenceOfPnt* _result = new ::TColgp_SequenceOfPnt();
	*_result =  (::TColgp_SequenceOfPnt)((::TColgp_HSequenceOfPnt*)_NativeInstance)->Sequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfPnt(_result);
}

void Macad::Occt::TColgp_HSequenceOfPnt::Append(Macad::Occt::Pnt theItem)
{
	pin_ptr<Macad::Occt::Pnt> pp_theItem = &theItem;
	((::TColgp_HSequenceOfPnt*)_NativeInstance)->Append(*(gp_Pnt*)pp_theItem);
}

void Macad::Occt::TColgp_HSequenceOfPnt::Append(Macad::Occt::TColgp_SequenceOfPnt^ theSequence)
{
	((::TColgp_HSequenceOfPnt*)_NativeInstance)->Append(*(::TColgp_SequenceOfPnt*)theSequence->NativeInstance);
}

Macad::Occt::TColgp_SequenceOfPnt^ Macad::Occt::TColgp_HSequenceOfPnt::ChangeSequence()
{
	::TColgp_SequenceOfPnt* _result = new ::TColgp_SequenceOfPnt();
	*_result = ((::TColgp_HSequenceOfPnt*)_NativeInstance)->ChangeSequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfPnt(_result);
}

int Macad::Occt::TColgp_HSequenceOfPnt::Size()
{
	return ((::TColgp_HSequenceOfPnt*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_HSequenceOfPnt::Length()
{
	return ((::TColgp_HSequenceOfPnt*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_HSequenceOfPnt::Lower()
{
	return ((::TColgp_HSequenceOfPnt*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_HSequenceOfPnt::Upper()
{
	return ((::TColgp_HSequenceOfPnt*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_HSequenceOfPnt::IsEmpty()
{
	return ((::TColgp_HSequenceOfPnt*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TColgp_HSequenceOfPnt::Reverse()
{
	((::TColgp_HSequenceOfPnt*)_NativeInstance)->Reverse();
}

void Macad::Occt::TColgp_HSequenceOfPnt::Exchange(int I, int J)
{
	((::TColgp_HSequenceOfPnt*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TColgp_HSequenceOfPnt::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColgp_HSequenceOfPnt*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColgp_HSequenceOfPnt::Clear()
{
	((::TColgp_HSequenceOfPnt*)_NativeInstance)->Clear(0L);
}

void Macad::Occt::TColgp_HSequenceOfPnt::Remove(int theIndex)
{
	((::TColgp_HSequenceOfPnt*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TColgp_HSequenceOfPnt::Remove(int theFromIndex, int theToIndex)
{
	((::TColgp_HSequenceOfPnt*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TColgp_HSequenceOfPnt::Prepend(Macad::Occt::Pnt theItem)
{
	pin_ptr<Macad::Occt::Pnt> pp_theItem = &theItem;
	((::TColgp_HSequenceOfPnt*)_NativeInstance)->Prepend(*(gp_Pnt*)pp_theItem);
}

void Macad::Occt::TColgp_HSequenceOfPnt::InsertBefore(int theIndex, Macad::Occt::Pnt theItem)
{
	pin_ptr<Macad::Occt::Pnt> pp_theItem = &theItem;
	((::TColgp_HSequenceOfPnt*)_NativeInstance)->InsertBefore(theIndex, *(gp_Pnt*)pp_theItem);
}

void Macad::Occt::TColgp_HSequenceOfPnt::InsertAfter(int theIndex, Macad::Occt::Pnt theItem)
{
	pin_ptr<Macad::Occt::Pnt> pp_theItem = &theItem;
	((::TColgp_HSequenceOfPnt*)_NativeInstance)->InsertAfter(theIndex, *(gp_Pnt*)pp_theItem);
}

Macad::Occt::Pnt Macad::Occt::TColgp_HSequenceOfPnt::First()
{
	return Macad::Occt::Pnt(((::TColgp_HSequenceOfPnt*)_NativeInstance)->First());
}

Macad::Occt::Pnt Macad::Occt::TColgp_HSequenceOfPnt::ChangeFirst()
{
	return Macad::Occt::Pnt(((::TColgp_HSequenceOfPnt*)_NativeInstance)->ChangeFirst());
}

Macad::Occt::Pnt Macad::Occt::TColgp_HSequenceOfPnt::Last()
{
	return Macad::Occt::Pnt(((::TColgp_HSequenceOfPnt*)_NativeInstance)->Last());
}

Macad::Occt::Pnt Macad::Occt::TColgp_HSequenceOfPnt::ChangeLast()
{
	return Macad::Occt::Pnt(((::TColgp_HSequenceOfPnt*)_NativeInstance)->ChangeLast());
}

Macad::Occt::Pnt Macad::Occt::TColgp_HSequenceOfPnt::Value(int theIndex)
{
	return Macad::Occt::Pnt(((::TColgp_HSequenceOfPnt*)_NativeInstance)->Value(theIndex));
}

Macad::Occt::Pnt Macad::Occt::TColgp_HSequenceOfPnt::ChangeValue(int theIndex)
{
	return Macad::Occt::Pnt(((::TColgp_HSequenceOfPnt*)_NativeInstance)->ChangeValue(theIndex));
}

void Macad::Occt::TColgp_HSequenceOfPnt::SetValue(int theIndex, Macad::Occt::Pnt theItem)
{
	pin_ptr<Macad::Occt::Pnt> pp_theItem = &theItem;
	((::TColgp_HSequenceOfPnt*)_NativeInstance)->SetValue(theIndex, *(gp_Pnt*)pp_theItem);
}


Macad::Occt::TColgp_HSequenceOfPnt^ Macad::Occt::TColgp_HSequenceOfPnt::CreateDowncasted(::TColgp_HSequenceOfPnt* instance)
{
	return gcnew Macad::Occt::TColgp_HSequenceOfPnt( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HSequenceOfPnt2d
//---------------------------------------------------------------------

Macad::Occt::TColgp_HSequenceOfPnt2d::TColgp_HSequenceOfPnt2d()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HSequenceOfPnt2d();
}

Macad::Occt::TColgp_HSequenceOfPnt2d::TColgp_HSequenceOfPnt2d(Macad::Occt::TColgp_SequenceOfPnt2d^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HSequenceOfPnt2d(*(::TColgp_SequenceOfPnt2d*)theOther->NativeInstance);
}

Macad::Occt::TColgp_HSequenceOfPnt2d::TColgp_HSequenceOfPnt2d(Macad::Occt::TColgp_HSequenceOfPnt2d^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HSequenceOfPnt2d(*(::TColgp_HSequenceOfPnt2d*)parameter1->NativeInstance);
}

Macad::Occt::TColgp_SequenceOfPnt2d^ Macad::Occt::TColgp_HSequenceOfPnt2d::Sequence()
{
	::TColgp_SequenceOfPnt2d* _result = new ::TColgp_SequenceOfPnt2d();
	*_result =  (::TColgp_SequenceOfPnt2d)((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->Sequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfPnt2d(_result);
}

void Macad::Occt::TColgp_HSequenceOfPnt2d::Append(Macad::Occt::Pnt2d theItem)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_theItem = &theItem;
	((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->Append(*(gp_Pnt2d*)pp_theItem);
}

void Macad::Occt::TColgp_HSequenceOfPnt2d::Append(Macad::Occt::TColgp_SequenceOfPnt2d^ theSequence)
{
	((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->Append(*(::TColgp_SequenceOfPnt2d*)theSequence->NativeInstance);
}

Macad::Occt::TColgp_SequenceOfPnt2d^ Macad::Occt::TColgp_HSequenceOfPnt2d::ChangeSequence()
{
	::TColgp_SequenceOfPnt2d* _result = new ::TColgp_SequenceOfPnt2d();
	*_result = ((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->ChangeSequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfPnt2d(_result);
}

int Macad::Occt::TColgp_HSequenceOfPnt2d::Size()
{
	return ((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_HSequenceOfPnt2d::Length()
{
	return ((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_HSequenceOfPnt2d::Lower()
{
	return ((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_HSequenceOfPnt2d::Upper()
{
	return ((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_HSequenceOfPnt2d::IsEmpty()
{
	return ((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TColgp_HSequenceOfPnt2d::Reverse()
{
	((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->Reverse();
}

void Macad::Occt::TColgp_HSequenceOfPnt2d::Exchange(int I, int J)
{
	((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TColgp_HSequenceOfPnt2d::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColgp_HSequenceOfPnt2d::Clear()
{
	((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->Clear(0L);
}

void Macad::Occt::TColgp_HSequenceOfPnt2d::Remove(int theIndex)
{
	((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TColgp_HSequenceOfPnt2d::Remove(int theFromIndex, int theToIndex)
{
	((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TColgp_HSequenceOfPnt2d::Prepend(Macad::Occt::Pnt2d theItem)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_theItem = &theItem;
	((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->Prepend(*(gp_Pnt2d*)pp_theItem);
}

void Macad::Occt::TColgp_HSequenceOfPnt2d::InsertBefore(int theIndex, Macad::Occt::Pnt2d theItem)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_theItem = &theItem;
	((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->InsertBefore(theIndex, *(gp_Pnt2d*)pp_theItem);
}

void Macad::Occt::TColgp_HSequenceOfPnt2d::InsertAfter(int theIndex, Macad::Occt::Pnt2d theItem)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_theItem = &theItem;
	((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->InsertAfter(theIndex, *(gp_Pnt2d*)pp_theItem);
}

Macad::Occt::Pnt2d Macad::Occt::TColgp_HSequenceOfPnt2d::First()
{
	return Macad::Occt::Pnt2d(((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->First());
}

Macad::Occt::Pnt2d Macad::Occt::TColgp_HSequenceOfPnt2d::ChangeFirst()
{
	return Macad::Occt::Pnt2d(((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->ChangeFirst());
}

Macad::Occt::Pnt2d Macad::Occt::TColgp_HSequenceOfPnt2d::Last()
{
	return Macad::Occt::Pnt2d(((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->Last());
}

Macad::Occt::Pnt2d Macad::Occt::TColgp_HSequenceOfPnt2d::ChangeLast()
{
	return Macad::Occt::Pnt2d(((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->ChangeLast());
}

Macad::Occt::Pnt2d Macad::Occt::TColgp_HSequenceOfPnt2d::Value(int theIndex)
{
	return Macad::Occt::Pnt2d(((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->Value(theIndex));
}

Macad::Occt::Pnt2d Macad::Occt::TColgp_HSequenceOfPnt2d::ChangeValue(int theIndex)
{
	return Macad::Occt::Pnt2d(((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->ChangeValue(theIndex));
}

void Macad::Occt::TColgp_HSequenceOfPnt2d::SetValue(int theIndex, Macad::Occt::Pnt2d theItem)
{
	pin_ptr<Macad::Occt::Pnt2d> pp_theItem = &theItem;
	((::TColgp_HSequenceOfPnt2d*)_NativeInstance)->SetValue(theIndex, *(gp_Pnt2d*)pp_theItem);
}


Macad::Occt::TColgp_HSequenceOfPnt2d^ Macad::Occt::TColgp_HSequenceOfPnt2d::CreateDowncasted(::TColgp_HSequenceOfPnt2d* instance)
{
	return gcnew Macad::Occt::TColgp_HSequenceOfPnt2d( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HSequenceOfVec
//---------------------------------------------------------------------

Macad::Occt::TColgp_HSequenceOfVec::TColgp_HSequenceOfVec()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HSequenceOfVec();
}

Macad::Occt::TColgp_HSequenceOfVec::TColgp_HSequenceOfVec(Macad::Occt::TColgp_SequenceOfVec^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HSequenceOfVec(*(::TColgp_SequenceOfVec*)theOther->NativeInstance);
}

Macad::Occt::TColgp_HSequenceOfVec::TColgp_HSequenceOfVec(Macad::Occt::TColgp_HSequenceOfVec^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HSequenceOfVec(*(::TColgp_HSequenceOfVec*)parameter1->NativeInstance);
}

Macad::Occt::TColgp_SequenceOfVec^ Macad::Occt::TColgp_HSequenceOfVec::Sequence()
{
	::TColgp_SequenceOfVec* _result = new ::TColgp_SequenceOfVec();
	*_result =  (::TColgp_SequenceOfVec)((::TColgp_HSequenceOfVec*)_NativeInstance)->Sequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfVec(_result);
}

void Macad::Occt::TColgp_HSequenceOfVec::Append(Macad::Occt::Vec theItem)
{
	pin_ptr<Macad::Occt::Vec> pp_theItem = &theItem;
	((::TColgp_HSequenceOfVec*)_NativeInstance)->Append(*(gp_Vec*)pp_theItem);
}

void Macad::Occt::TColgp_HSequenceOfVec::Append(Macad::Occt::TColgp_SequenceOfVec^ theSequence)
{
	((::TColgp_HSequenceOfVec*)_NativeInstance)->Append(*(::TColgp_SequenceOfVec*)theSequence->NativeInstance);
}

Macad::Occt::TColgp_SequenceOfVec^ Macad::Occt::TColgp_HSequenceOfVec::ChangeSequence()
{
	::TColgp_SequenceOfVec* _result = new ::TColgp_SequenceOfVec();
	*_result = ((::TColgp_HSequenceOfVec*)_NativeInstance)->ChangeSequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfVec(_result);
}

int Macad::Occt::TColgp_HSequenceOfVec::Size()
{
	return ((::TColgp_HSequenceOfVec*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_HSequenceOfVec::Length()
{
	return ((::TColgp_HSequenceOfVec*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_HSequenceOfVec::Lower()
{
	return ((::TColgp_HSequenceOfVec*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_HSequenceOfVec::Upper()
{
	return ((::TColgp_HSequenceOfVec*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_HSequenceOfVec::IsEmpty()
{
	return ((::TColgp_HSequenceOfVec*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TColgp_HSequenceOfVec::Reverse()
{
	((::TColgp_HSequenceOfVec*)_NativeInstance)->Reverse();
}

void Macad::Occt::TColgp_HSequenceOfVec::Exchange(int I, int J)
{
	((::TColgp_HSequenceOfVec*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TColgp_HSequenceOfVec::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColgp_HSequenceOfVec*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColgp_HSequenceOfVec::Clear()
{
	((::TColgp_HSequenceOfVec*)_NativeInstance)->Clear(0L);
}

void Macad::Occt::TColgp_HSequenceOfVec::Remove(int theIndex)
{
	((::TColgp_HSequenceOfVec*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TColgp_HSequenceOfVec::Remove(int theFromIndex, int theToIndex)
{
	((::TColgp_HSequenceOfVec*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TColgp_HSequenceOfVec::Prepend(Macad::Occt::Vec theItem)
{
	pin_ptr<Macad::Occt::Vec> pp_theItem = &theItem;
	((::TColgp_HSequenceOfVec*)_NativeInstance)->Prepend(*(gp_Vec*)pp_theItem);
}

void Macad::Occt::TColgp_HSequenceOfVec::InsertBefore(int theIndex, Macad::Occt::Vec theItem)
{
	pin_ptr<Macad::Occt::Vec> pp_theItem = &theItem;
	((::TColgp_HSequenceOfVec*)_NativeInstance)->InsertBefore(theIndex, *(gp_Vec*)pp_theItem);
}

void Macad::Occt::TColgp_HSequenceOfVec::InsertAfter(int theIndex, Macad::Occt::Vec theItem)
{
	pin_ptr<Macad::Occt::Vec> pp_theItem = &theItem;
	((::TColgp_HSequenceOfVec*)_NativeInstance)->InsertAfter(theIndex, *(gp_Vec*)pp_theItem);
}

Macad::Occt::Vec Macad::Occt::TColgp_HSequenceOfVec::First()
{
	return Macad::Occt::Vec(((::TColgp_HSequenceOfVec*)_NativeInstance)->First());
}

Macad::Occt::Vec Macad::Occt::TColgp_HSequenceOfVec::ChangeFirst()
{
	return Macad::Occt::Vec(((::TColgp_HSequenceOfVec*)_NativeInstance)->ChangeFirst());
}

Macad::Occt::Vec Macad::Occt::TColgp_HSequenceOfVec::Last()
{
	return Macad::Occt::Vec(((::TColgp_HSequenceOfVec*)_NativeInstance)->Last());
}

Macad::Occt::Vec Macad::Occt::TColgp_HSequenceOfVec::ChangeLast()
{
	return Macad::Occt::Vec(((::TColgp_HSequenceOfVec*)_NativeInstance)->ChangeLast());
}

Macad::Occt::Vec Macad::Occt::TColgp_HSequenceOfVec::Value(int theIndex)
{
	return Macad::Occt::Vec(((::TColgp_HSequenceOfVec*)_NativeInstance)->Value(theIndex));
}

Macad::Occt::Vec Macad::Occt::TColgp_HSequenceOfVec::ChangeValue(int theIndex)
{
	return Macad::Occt::Vec(((::TColgp_HSequenceOfVec*)_NativeInstance)->ChangeValue(theIndex));
}

void Macad::Occt::TColgp_HSequenceOfVec::SetValue(int theIndex, Macad::Occt::Vec theItem)
{
	pin_ptr<Macad::Occt::Vec> pp_theItem = &theItem;
	((::TColgp_HSequenceOfVec*)_NativeInstance)->SetValue(theIndex, *(gp_Vec*)pp_theItem);
}


Macad::Occt::TColgp_HSequenceOfVec^ Macad::Occt::TColgp_HSequenceOfVec::CreateDowncasted(::TColgp_HSequenceOfVec* instance)
{
	return gcnew Macad::Occt::TColgp_HSequenceOfVec( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HSequenceOfVec2d
//---------------------------------------------------------------------

Macad::Occt::TColgp_HSequenceOfVec2d::TColgp_HSequenceOfVec2d()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HSequenceOfVec2d();
}

Macad::Occt::TColgp_HSequenceOfVec2d::TColgp_HSequenceOfVec2d(Macad::Occt::TColgp_SequenceOfVec2d^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HSequenceOfVec2d(*(::TColgp_SequenceOfVec2d*)theOther->NativeInstance);
}

Macad::Occt::TColgp_HSequenceOfVec2d::TColgp_HSequenceOfVec2d(Macad::Occt::TColgp_HSequenceOfVec2d^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HSequenceOfVec2d(*(::TColgp_HSequenceOfVec2d*)parameter1->NativeInstance);
}

Macad::Occt::TColgp_SequenceOfVec2d^ Macad::Occt::TColgp_HSequenceOfVec2d::Sequence()
{
	::TColgp_SequenceOfVec2d* _result = new ::TColgp_SequenceOfVec2d();
	*_result =  (::TColgp_SequenceOfVec2d)((::TColgp_HSequenceOfVec2d*)_NativeInstance)->Sequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfVec2d(_result);
}

void Macad::Occt::TColgp_HSequenceOfVec2d::Append(Macad::Occt::Vec2d theItem)
{
	pin_ptr<Macad::Occt::Vec2d> pp_theItem = &theItem;
	((::TColgp_HSequenceOfVec2d*)_NativeInstance)->Append(*(gp_Vec2d*)pp_theItem);
}

void Macad::Occt::TColgp_HSequenceOfVec2d::Append(Macad::Occt::TColgp_SequenceOfVec2d^ theSequence)
{
	((::TColgp_HSequenceOfVec2d*)_NativeInstance)->Append(*(::TColgp_SequenceOfVec2d*)theSequence->NativeInstance);
}

Macad::Occt::TColgp_SequenceOfVec2d^ Macad::Occt::TColgp_HSequenceOfVec2d::ChangeSequence()
{
	::TColgp_SequenceOfVec2d* _result = new ::TColgp_SequenceOfVec2d();
	*_result = ((::TColgp_HSequenceOfVec2d*)_NativeInstance)->ChangeSequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfVec2d(_result);
}

int Macad::Occt::TColgp_HSequenceOfVec2d::Size()
{
	return ((::TColgp_HSequenceOfVec2d*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_HSequenceOfVec2d::Length()
{
	return ((::TColgp_HSequenceOfVec2d*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_HSequenceOfVec2d::Lower()
{
	return ((::TColgp_HSequenceOfVec2d*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_HSequenceOfVec2d::Upper()
{
	return ((::TColgp_HSequenceOfVec2d*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_HSequenceOfVec2d::IsEmpty()
{
	return ((::TColgp_HSequenceOfVec2d*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TColgp_HSequenceOfVec2d::Reverse()
{
	((::TColgp_HSequenceOfVec2d*)_NativeInstance)->Reverse();
}

void Macad::Occt::TColgp_HSequenceOfVec2d::Exchange(int I, int J)
{
	((::TColgp_HSequenceOfVec2d*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TColgp_HSequenceOfVec2d::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColgp_HSequenceOfVec2d*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColgp_HSequenceOfVec2d::Clear()
{
	((::TColgp_HSequenceOfVec2d*)_NativeInstance)->Clear(0L);
}

void Macad::Occt::TColgp_HSequenceOfVec2d::Remove(int theIndex)
{
	((::TColgp_HSequenceOfVec2d*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TColgp_HSequenceOfVec2d::Remove(int theFromIndex, int theToIndex)
{
	((::TColgp_HSequenceOfVec2d*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TColgp_HSequenceOfVec2d::Prepend(Macad::Occt::Vec2d theItem)
{
	pin_ptr<Macad::Occt::Vec2d> pp_theItem = &theItem;
	((::TColgp_HSequenceOfVec2d*)_NativeInstance)->Prepend(*(gp_Vec2d*)pp_theItem);
}

void Macad::Occt::TColgp_HSequenceOfVec2d::InsertBefore(int theIndex, Macad::Occt::Vec2d theItem)
{
	pin_ptr<Macad::Occt::Vec2d> pp_theItem = &theItem;
	((::TColgp_HSequenceOfVec2d*)_NativeInstance)->InsertBefore(theIndex, *(gp_Vec2d*)pp_theItem);
}

void Macad::Occt::TColgp_HSequenceOfVec2d::InsertAfter(int theIndex, Macad::Occt::Vec2d theItem)
{
	pin_ptr<Macad::Occt::Vec2d> pp_theItem = &theItem;
	((::TColgp_HSequenceOfVec2d*)_NativeInstance)->InsertAfter(theIndex, *(gp_Vec2d*)pp_theItem);
}

Macad::Occt::Vec2d Macad::Occt::TColgp_HSequenceOfVec2d::First()
{
	return Macad::Occt::Vec2d(((::TColgp_HSequenceOfVec2d*)_NativeInstance)->First());
}

Macad::Occt::Vec2d Macad::Occt::TColgp_HSequenceOfVec2d::ChangeFirst()
{
	return Macad::Occt::Vec2d(((::TColgp_HSequenceOfVec2d*)_NativeInstance)->ChangeFirst());
}

Macad::Occt::Vec2d Macad::Occt::TColgp_HSequenceOfVec2d::Last()
{
	return Macad::Occt::Vec2d(((::TColgp_HSequenceOfVec2d*)_NativeInstance)->Last());
}

Macad::Occt::Vec2d Macad::Occt::TColgp_HSequenceOfVec2d::ChangeLast()
{
	return Macad::Occt::Vec2d(((::TColgp_HSequenceOfVec2d*)_NativeInstance)->ChangeLast());
}

Macad::Occt::Vec2d Macad::Occt::TColgp_HSequenceOfVec2d::Value(int theIndex)
{
	return Macad::Occt::Vec2d(((::TColgp_HSequenceOfVec2d*)_NativeInstance)->Value(theIndex));
}

Macad::Occt::Vec2d Macad::Occt::TColgp_HSequenceOfVec2d::ChangeValue(int theIndex)
{
	return Macad::Occt::Vec2d(((::TColgp_HSequenceOfVec2d*)_NativeInstance)->ChangeValue(theIndex));
}

void Macad::Occt::TColgp_HSequenceOfVec2d::SetValue(int theIndex, Macad::Occt::Vec2d theItem)
{
	pin_ptr<Macad::Occt::Vec2d> pp_theItem = &theItem;
	((::TColgp_HSequenceOfVec2d*)_NativeInstance)->SetValue(theIndex, *(gp_Vec2d*)pp_theItem);
}


Macad::Occt::TColgp_HSequenceOfVec2d^ Macad::Occt::TColgp_HSequenceOfVec2d::CreateDowncasted(::TColgp_HSequenceOfVec2d* instance)
{
	return gcnew Macad::Occt::TColgp_HSequenceOfVec2d( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HSequenceOfXY
//---------------------------------------------------------------------

Macad::Occt::TColgp_HSequenceOfXY::TColgp_HSequenceOfXY()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HSequenceOfXY();
}

Macad::Occt::TColgp_HSequenceOfXY::TColgp_HSequenceOfXY(Macad::Occt::TColgp_SequenceOfXY^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HSequenceOfXY(*(::TColgp_SequenceOfXY*)theOther->NativeInstance);
}

Macad::Occt::TColgp_HSequenceOfXY::TColgp_HSequenceOfXY(Macad::Occt::TColgp_HSequenceOfXY^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HSequenceOfXY(*(::TColgp_HSequenceOfXY*)parameter1->NativeInstance);
}

Macad::Occt::TColgp_SequenceOfXY^ Macad::Occt::TColgp_HSequenceOfXY::Sequence()
{
	::TColgp_SequenceOfXY* _result = new ::TColgp_SequenceOfXY();
	*_result =  (::TColgp_SequenceOfXY)((::TColgp_HSequenceOfXY*)_NativeInstance)->Sequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfXY(_result);
}

void Macad::Occt::TColgp_HSequenceOfXY::Append(Macad::Occt::XY theItem)
{
	pin_ptr<Macad::Occt::XY> pp_theItem = &theItem;
	((::TColgp_HSequenceOfXY*)_NativeInstance)->Append(*(gp_XY*)pp_theItem);
}

void Macad::Occt::TColgp_HSequenceOfXY::Append(Macad::Occt::TColgp_SequenceOfXY^ theSequence)
{
	((::TColgp_HSequenceOfXY*)_NativeInstance)->Append(*(::TColgp_SequenceOfXY*)theSequence->NativeInstance);
}

Macad::Occt::TColgp_SequenceOfXY^ Macad::Occt::TColgp_HSequenceOfXY::ChangeSequence()
{
	::TColgp_SequenceOfXY* _result = new ::TColgp_SequenceOfXY();
	*_result = ((::TColgp_HSequenceOfXY*)_NativeInstance)->ChangeSequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfXY(_result);
}

int Macad::Occt::TColgp_HSequenceOfXY::Size()
{
	return ((::TColgp_HSequenceOfXY*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_HSequenceOfXY::Length()
{
	return ((::TColgp_HSequenceOfXY*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_HSequenceOfXY::Lower()
{
	return ((::TColgp_HSequenceOfXY*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_HSequenceOfXY::Upper()
{
	return ((::TColgp_HSequenceOfXY*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_HSequenceOfXY::IsEmpty()
{
	return ((::TColgp_HSequenceOfXY*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TColgp_HSequenceOfXY::Reverse()
{
	((::TColgp_HSequenceOfXY*)_NativeInstance)->Reverse();
}

void Macad::Occt::TColgp_HSequenceOfXY::Exchange(int I, int J)
{
	((::TColgp_HSequenceOfXY*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TColgp_HSequenceOfXY::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColgp_HSequenceOfXY*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColgp_HSequenceOfXY::Clear()
{
	((::TColgp_HSequenceOfXY*)_NativeInstance)->Clear(0L);
}

void Macad::Occt::TColgp_HSequenceOfXY::Remove(int theIndex)
{
	((::TColgp_HSequenceOfXY*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TColgp_HSequenceOfXY::Remove(int theFromIndex, int theToIndex)
{
	((::TColgp_HSequenceOfXY*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TColgp_HSequenceOfXY::Prepend(Macad::Occt::XY theItem)
{
	pin_ptr<Macad::Occt::XY> pp_theItem = &theItem;
	((::TColgp_HSequenceOfXY*)_NativeInstance)->Prepend(*(gp_XY*)pp_theItem);
}

void Macad::Occt::TColgp_HSequenceOfXY::InsertBefore(int theIndex, Macad::Occt::XY theItem)
{
	pin_ptr<Macad::Occt::XY> pp_theItem = &theItem;
	((::TColgp_HSequenceOfXY*)_NativeInstance)->InsertBefore(theIndex, *(gp_XY*)pp_theItem);
}

void Macad::Occt::TColgp_HSequenceOfXY::InsertAfter(int theIndex, Macad::Occt::XY theItem)
{
	pin_ptr<Macad::Occt::XY> pp_theItem = &theItem;
	((::TColgp_HSequenceOfXY*)_NativeInstance)->InsertAfter(theIndex, *(gp_XY*)pp_theItem);
}

Macad::Occt::XY Macad::Occt::TColgp_HSequenceOfXY::First()
{
	return Macad::Occt::XY(((::TColgp_HSequenceOfXY*)_NativeInstance)->First());
}

Macad::Occt::XY Macad::Occt::TColgp_HSequenceOfXY::ChangeFirst()
{
	return Macad::Occt::XY(((::TColgp_HSequenceOfXY*)_NativeInstance)->ChangeFirst());
}

Macad::Occt::XY Macad::Occt::TColgp_HSequenceOfXY::Last()
{
	return Macad::Occt::XY(((::TColgp_HSequenceOfXY*)_NativeInstance)->Last());
}

Macad::Occt::XY Macad::Occt::TColgp_HSequenceOfXY::ChangeLast()
{
	return Macad::Occt::XY(((::TColgp_HSequenceOfXY*)_NativeInstance)->ChangeLast());
}

Macad::Occt::XY Macad::Occt::TColgp_HSequenceOfXY::Value(int theIndex)
{
	return Macad::Occt::XY(((::TColgp_HSequenceOfXY*)_NativeInstance)->Value(theIndex));
}

Macad::Occt::XY Macad::Occt::TColgp_HSequenceOfXY::ChangeValue(int theIndex)
{
	return Macad::Occt::XY(((::TColgp_HSequenceOfXY*)_NativeInstance)->ChangeValue(theIndex));
}

void Macad::Occt::TColgp_HSequenceOfXY::SetValue(int theIndex, Macad::Occt::XY theItem)
{
	pin_ptr<Macad::Occt::XY> pp_theItem = &theItem;
	((::TColgp_HSequenceOfXY*)_NativeInstance)->SetValue(theIndex, *(gp_XY*)pp_theItem);
}


Macad::Occt::TColgp_HSequenceOfXY^ Macad::Occt::TColgp_HSequenceOfXY::CreateDowncasted(::TColgp_HSequenceOfXY* instance)
{
	return gcnew Macad::Occt::TColgp_HSequenceOfXY( instance );
}



//---------------------------------------------------------------------
//  Class  TColgp_HSequenceOfXYZ
//---------------------------------------------------------------------

Macad::Occt::TColgp_HSequenceOfXYZ::TColgp_HSequenceOfXYZ()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HSequenceOfXYZ();
}

Macad::Occt::TColgp_HSequenceOfXYZ::TColgp_HSequenceOfXYZ(Macad::Occt::TColgp_SequenceOfXYZ^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HSequenceOfXYZ(*(::TColgp_SequenceOfXYZ*)theOther->NativeInstance);
}

Macad::Occt::TColgp_HSequenceOfXYZ::TColgp_HSequenceOfXYZ(Macad::Occt::TColgp_HSequenceOfXYZ^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColgp_HSequenceOfXYZ(*(::TColgp_HSequenceOfXYZ*)parameter1->NativeInstance);
}

Macad::Occt::TColgp_SequenceOfXYZ^ Macad::Occt::TColgp_HSequenceOfXYZ::Sequence()
{
	::TColgp_SequenceOfXYZ* _result = new ::TColgp_SequenceOfXYZ();
	*_result =  (::TColgp_SequenceOfXYZ)((::TColgp_HSequenceOfXYZ*)_NativeInstance)->Sequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfXYZ(_result);
}

void Macad::Occt::TColgp_HSequenceOfXYZ::Append(Macad::Occt::XYZ theItem)
{
	pin_ptr<Macad::Occt::XYZ> pp_theItem = &theItem;
	((::TColgp_HSequenceOfXYZ*)_NativeInstance)->Append(*(gp_XYZ*)pp_theItem);
}

void Macad::Occt::TColgp_HSequenceOfXYZ::Append(Macad::Occt::TColgp_SequenceOfXYZ^ theSequence)
{
	((::TColgp_HSequenceOfXYZ*)_NativeInstance)->Append(*(::TColgp_SequenceOfXYZ*)theSequence->NativeInstance);
}

Macad::Occt::TColgp_SequenceOfXYZ^ Macad::Occt::TColgp_HSequenceOfXYZ::ChangeSequence()
{
	::TColgp_SequenceOfXYZ* _result = new ::TColgp_SequenceOfXYZ();
	*_result = ((::TColgp_HSequenceOfXYZ*)_NativeInstance)->ChangeSequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfXYZ(_result);
}

int Macad::Occt::TColgp_HSequenceOfXYZ::Size()
{
	return ((::TColgp_HSequenceOfXYZ*)_NativeInstance)->Size();
}

int Macad::Occt::TColgp_HSequenceOfXYZ::Length()
{
	return ((::TColgp_HSequenceOfXYZ*)_NativeInstance)->Length();
}

int Macad::Occt::TColgp_HSequenceOfXYZ::Lower()
{
	return ((::TColgp_HSequenceOfXYZ*)_NativeInstance)->Lower();
}

int Macad::Occt::TColgp_HSequenceOfXYZ::Upper()
{
	return ((::TColgp_HSequenceOfXYZ*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColgp_HSequenceOfXYZ::IsEmpty()
{
	return ((::TColgp_HSequenceOfXYZ*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TColgp_HSequenceOfXYZ::Reverse()
{
	((::TColgp_HSequenceOfXYZ*)_NativeInstance)->Reverse();
}

void Macad::Occt::TColgp_HSequenceOfXYZ::Exchange(int I, int J)
{
	((::TColgp_HSequenceOfXYZ*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TColgp_HSequenceOfXYZ::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TColgp_HSequenceOfXYZ*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TColgp_HSequenceOfXYZ::Clear()
{
	((::TColgp_HSequenceOfXYZ*)_NativeInstance)->Clear(0L);
}

void Macad::Occt::TColgp_HSequenceOfXYZ::Remove(int theIndex)
{
	((::TColgp_HSequenceOfXYZ*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TColgp_HSequenceOfXYZ::Remove(int theFromIndex, int theToIndex)
{
	((::TColgp_HSequenceOfXYZ*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TColgp_HSequenceOfXYZ::Prepend(Macad::Occt::XYZ theItem)
{
	pin_ptr<Macad::Occt::XYZ> pp_theItem = &theItem;
	((::TColgp_HSequenceOfXYZ*)_NativeInstance)->Prepend(*(gp_XYZ*)pp_theItem);
}

void Macad::Occt::TColgp_HSequenceOfXYZ::InsertBefore(int theIndex, Macad::Occt::XYZ theItem)
{
	pin_ptr<Macad::Occt::XYZ> pp_theItem = &theItem;
	((::TColgp_HSequenceOfXYZ*)_NativeInstance)->InsertBefore(theIndex, *(gp_XYZ*)pp_theItem);
}

void Macad::Occt::TColgp_HSequenceOfXYZ::InsertAfter(int theIndex, Macad::Occt::XYZ theItem)
{
	pin_ptr<Macad::Occt::XYZ> pp_theItem = &theItem;
	((::TColgp_HSequenceOfXYZ*)_NativeInstance)->InsertAfter(theIndex, *(gp_XYZ*)pp_theItem);
}

Macad::Occt::XYZ Macad::Occt::TColgp_HSequenceOfXYZ::First()
{
	return Macad::Occt::XYZ(((::TColgp_HSequenceOfXYZ*)_NativeInstance)->First());
}

Macad::Occt::XYZ Macad::Occt::TColgp_HSequenceOfXYZ::ChangeFirst()
{
	return Macad::Occt::XYZ(((::TColgp_HSequenceOfXYZ*)_NativeInstance)->ChangeFirst());
}

Macad::Occt::XYZ Macad::Occt::TColgp_HSequenceOfXYZ::Last()
{
	return Macad::Occt::XYZ(((::TColgp_HSequenceOfXYZ*)_NativeInstance)->Last());
}

Macad::Occt::XYZ Macad::Occt::TColgp_HSequenceOfXYZ::ChangeLast()
{
	return Macad::Occt::XYZ(((::TColgp_HSequenceOfXYZ*)_NativeInstance)->ChangeLast());
}

Macad::Occt::XYZ Macad::Occt::TColgp_HSequenceOfXYZ::Value(int theIndex)
{
	return Macad::Occt::XYZ(((::TColgp_HSequenceOfXYZ*)_NativeInstance)->Value(theIndex));
}

Macad::Occt::XYZ Macad::Occt::TColgp_HSequenceOfXYZ::ChangeValue(int theIndex)
{
	return Macad::Occt::XYZ(((::TColgp_HSequenceOfXYZ*)_NativeInstance)->ChangeValue(theIndex));
}

void Macad::Occt::TColgp_HSequenceOfXYZ::SetValue(int theIndex, Macad::Occt::XYZ theItem)
{
	pin_ptr<Macad::Occt::XYZ> pp_theItem = &theItem;
	((::TColgp_HSequenceOfXYZ*)_NativeInstance)->SetValue(theIndex, *(gp_XYZ*)pp_theItem);
}


Macad::Occt::TColgp_HSequenceOfXYZ^ Macad::Occt::TColgp_HSequenceOfXYZ::CreateDowncasted(::TColgp_HSequenceOfXYZ* instance)
{
	return gcnew Macad::Occt::TColgp_HSequenceOfXYZ( instance );
}


