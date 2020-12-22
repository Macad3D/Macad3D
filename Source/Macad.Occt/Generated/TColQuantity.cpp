// Generated wrapper code for package TColQuantity

#include "OcctPCH.h"
#include "TColQuantity.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Standard.h"
#include "TColQuantity.h"
#include "NCollection.h"


//---------------------------------------------------------------------
//  Class  TColQuantity_Array1OfLength
//---------------------------------------------------------------------

Macad::Occt::TColQuantity_Array1OfLength::TColQuantity_Array1OfLength()
	: BaseClass<::TColQuantity_Array1OfLength>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColQuantity_Array1OfLength();
}

Macad::Occt::TColQuantity_Array1OfLength::TColQuantity_Array1OfLength(int theLower, int theUpper)
	: BaseClass<::TColQuantity_Array1OfLength>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColQuantity_Array1OfLength(theLower, theUpper);
}

Macad::Occt::TColQuantity_Array1OfLength::TColQuantity_Array1OfLength(Macad::Occt::TColQuantity_Array1OfLength^ theOther)
	: BaseClass<::TColQuantity_Array1OfLength>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColQuantity_Array1OfLength(*(::TColQuantity_Array1OfLength*)theOther->NativeInstance);
}

Macad::Occt::TColQuantity_Array1OfLength::TColQuantity_Array1OfLength(double theBegin, int theLower, int theUpper)
	: BaseClass<::TColQuantity_Array1OfLength>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<double> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColQuantity_Array1OfLength(*(double*)pp_theBegin, theLower, theUpper);
}

void Macad::Occt::TColQuantity_Array1OfLength::Init(double theValue)
{
	pin_ptr<double> pp_theValue = &theValue;
	((::TColQuantity_Array1OfLength*)_NativeInstance)->Init(*(double*)pp_theValue);
}

int Macad::Occt::TColQuantity_Array1OfLength::Size()
{
	return ((::TColQuantity_Array1OfLength*)_NativeInstance)->Size();
}

int Macad::Occt::TColQuantity_Array1OfLength::Length()
{
	return ((::TColQuantity_Array1OfLength*)_NativeInstance)->Length();
}

bool Macad::Occt::TColQuantity_Array1OfLength::IsEmpty()
{
	return ((::TColQuantity_Array1OfLength*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColQuantity_Array1OfLength::Lower()
{
	return ((::TColQuantity_Array1OfLength*)_NativeInstance)->Lower();
}

int Macad::Occt::TColQuantity_Array1OfLength::Upper()
{
	return ((::TColQuantity_Array1OfLength*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColQuantity_Array1OfLength::IsDeletable()
{
	return ((::TColQuantity_Array1OfLength*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColQuantity_Array1OfLength::IsAllocated()
{
	return ((::TColQuantity_Array1OfLength*)_NativeInstance)->IsAllocated();
}

Macad::Occt::TColQuantity_Array1OfLength^ Macad::Occt::TColQuantity_Array1OfLength::Assign(Macad::Occt::TColQuantity_Array1OfLength^ theOther)
{
	::TColQuantity_Array1OfLength* _result = new ::TColQuantity_Array1OfLength();
	*_result = ((::TColQuantity_Array1OfLength*)_NativeInstance)->Assign(*(::TColQuantity_Array1OfLength*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColQuantity_Array1OfLength(_result);
}

Macad::Occt::TColQuantity_Array1OfLength^ Macad::Occt::TColQuantity_Array1OfLength::Move(Macad::Occt::TColQuantity_Array1OfLength^ theOther)
{
	::TColQuantity_Array1OfLength* _result = new ::TColQuantity_Array1OfLength();
	*_result = ((::TColQuantity_Array1OfLength*)_NativeInstance)->Move(*(::TColQuantity_Array1OfLength*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColQuantity_Array1OfLength(_result);
}

double Macad::Occt::TColQuantity_Array1OfLength::First()
{
	return ((::TColQuantity_Array1OfLength*)_NativeInstance)->First();
}

double Macad::Occt::TColQuantity_Array1OfLength::ChangeFirst()
{
	return ((::TColQuantity_Array1OfLength*)_NativeInstance)->ChangeFirst();
}

double Macad::Occt::TColQuantity_Array1OfLength::Last()
{
	return ((::TColQuantity_Array1OfLength*)_NativeInstance)->Last();
}

double Macad::Occt::TColQuantity_Array1OfLength::ChangeLast()
{
	return ((::TColQuantity_Array1OfLength*)_NativeInstance)->ChangeLast();
}

double Macad::Occt::TColQuantity_Array1OfLength::Value(int theIndex)
{
	return ((::TColQuantity_Array1OfLength*)_NativeInstance)->Value(theIndex);
}

double Macad::Occt::TColQuantity_Array1OfLength::ChangeValue(int theIndex)
{
	return ((::TColQuantity_Array1OfLength*)_NativeInstance)->ChangeValue(theIndex);
}

void Macad::Occt::TColQuantity_Array1OfLength::SetValue(int theIndex, double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	((::TColQuantity_Array1OfLength*)_NativeInstance)->SetValue(theIndex, *(double*)pp_theItem);
}

void Macad::Occt::TColQuantity_Array1OfLength::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColQuantity_Array1OfLength*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColQuantity_Array2OfLength
//---------------------------------------------------------------------

Macad::Occt::TColQuantity_Array2OfLength::TColQuantity_Array2OfLength()
	: BaseClass<::TColQuantity_Array2OfLength>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColQuantity_Array2OfLength();
}

Macad::Occt::TColQuantity_Array2OfLength::TColQuantity_Array2OfLength(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TColQuantity_Array2OfLength>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColQuantity_Array2OfLength(theRowLower, theRowUpper, theColLower, theColUpper);
}

Macad::Occt::TColQuantity_Array2OfLength::TColQuantity_Array2OfLength(Macad::Occt::TColQuantity_Array2OfLength^ theOther)
	: BaseClass<::TColQuantity_Array2OfLength>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TColQuantity_Array2OfLength(*(::TColQuantity_Array2OfLength*)theOther->NativeInstance);
}

Macad::Occt::TColQuantity_Array2OfLength::TColQuantity_Array2OfLength(double theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TColQuantity_Array2OfLength>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<double> pp_theBegin = &theBegin;
	_NativeInstance = new ::TColQuantity_Array2OfLength(*(double*)pp_theBegin, theRowLower, theRowUpper, theColLower, theColUpper);
}

void Macad::Occt::TColQuantity_Array2OfLength::Init(double theValue)
{
	pin_ptr<double> pp_theValue = &theValue;
	((::TColQuantity_Array2OfLength*)_NativeInstance)->Init(*(double*)pp_theValue);
}

int Macad::Occt::TColQuantity_Array2OfLength::Size()
{
	return ((::TColQuantity_Array2OfLength*)_NativeInstance)->Size();
}

int Macad::Occt::TColQuantity_Array2OfLength::Length()
{
	return ((::TColQuantity_Array2OfLength*)_NativeInstance)->Length();
}

int Macad::Occt::TColQuantity_Array2OfLength::NbRows()
{
	return ((::TColQuantity_Array2OfLength*)_NativeInstance)->NbRows();
}

int Macad::Occt::TColQuantity_Array2OfLength::NbColumns()
{
	return ((::TColQuantity_Array2OfLength*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TColQuantity_Array2OfLength::RowLength()
{
	return ((::TColQuantity_Array2OfLength*)_NativeInstance)->RowLength();
}

int Macad::Occt::TColQuantity_Array2OfLength::ColLength()
{
	return ((::TColQuantity_Array2OfLength*)_NativeInstance)->ColLength();
}

int Macad::Occt::TColQuantity_Array2OfLength::LowerRow()
{
	return ((::TColQuantity_Array2OfLength*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TColQuantity_Array2OfLength::UpperRow()
{
	return ((::TColQuantity_Array2OfLength*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TColQuantity_Array2OfLength::LowerCol()
{
	return ((::TColQuantity_Array2OfLength*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TColQuantity_Array2OfLength::UpperCol()
{
	return ((::TColQuantity_Array2OfLength*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TColQuantity_Array2OfLength::IsDeletable()
{
	return ((::TColQuantity_Array2OfLength*)_NativeInstance)->IsDeletable();
}

Macad::Occt::TColQuantity_Array2OfLength^ Macad::Occt::TColQuantity_Array2OfLength::Assign(Macad::Occt::TColQuantity_Array2OfLength^ theOther)
{
	::TColQuantity_Array2OfLength* _result = new ::TColQuantity_Array2OfLength();
	*_result = ((::TColQuantity_Array2OfLength*)_NativeInstance)->Assign(*(::TColQuantity_Array2OfLength*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColQuantity_Array2OfLength(_result);
}

Macad::Occt::TColQuantity_Array2OfLength^ Macad::Occt::TColQuantity_Array2OfLength::Move(Macad::Occt::TColQuantity_Array2OfLength^ theOther)
{
	::TColQuantity_Array2OfLength* _result = new ::TColQuantity_Array2OfLength();
	*_result = ((::TColQuantity_Array2OfLength*)_NativeInstance)->Move(*(::TColQuantity_Array2OfLength*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColQuantity_Array2OfLength(_result);
}

double Macad::Occt::TColQuantity_Array2OfLength::Value(int theRow, int theCol)
{
	return ((::TColQuantity_Array2OfLength*)_NativeInstance)->Value(theRow, theCol);
}

double Macad::Occt::TColQuantity_Array2OfLength::ChangeValue(int theRow, int theCol)
{
	return ((::TColQuantity_Array2OfLength*)_NativeInstance)->ChangeValue(theRow, theCol);
}

void Macad::Occt::TColQuantity_Array2OfLength::SetValue(int theRow, int theCol, double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	((::TColQuantity_Array2OfLength*)_NativeInstance)->SetValue(theRow, theCol, *(double*)pp_theItem);
}

void Macad::Occt::TColQuantity_Array2OfLength::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColQuantity_Array2OfLength*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TColQuantity_HArray1OfLength
//---------------------------------------------------------------------

Macad::Occt::TColQuantity_HArray1OfLength::TColQuantity_HArray1OfLength()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColQuantity_HArray1OfLength();
}

Macad::Occt::TColQuantity_HArray1OfLength::TColQuantity_HArray1OfLength(int theLower, int theUpper)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColQuantity_HArray1OfLength(theLower, theUpper);
}

Macad::Occt::TColQuantity_HArray1OfLength::TColQuantity_HArray1OfLength(int theLower, int theUpper, double theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<double> pp_theValue = &theValue;
	NativeInstance = new ::TColQuantity_HArray1OfLength(theLower, theUpper, *(double*)pp_theValue);
}

Macad::Occt::TColQuantity_HArray1OfLength::TColQuantity_HArray1OfLength(Macad::Occt::TColQuantity_Array1OfLength^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColQuantity_HArray1OfLength(*(::TColQuantity_Array1OfLength*)theOther->NativeInstance);
}

Macad::Occt::TColQuantity_HArray1OfLength::TColQuantity_HArray1OfLength(Macad::Occt::TColQuantity_HArray1OfLength^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColQuantity_HArray1OfLength(*(::TColQuantity_HArray1OfLength*)parameter1->NativeInstance);
}

Macad::Occt::TColQuantity_Array1OfLength^ Macad::Occt::TColQuantity_HArray1OfLength::Array1()
{
	::TColQuantity_Array1OfLength* _result = new ::TColQuantity_Array1OfLength();
	*_result =  (::TColQuantity_Array1OfLength)((::TColQuantity_HArray1OfLength*)_NativeInstance)->Array1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColQuantity_Array1OfLength(_result);
}

Macad::Occt::TColQuantity_Array1OfLength^ Macad::Occt::TColQuantity_HArray1OfLength::ChangeArray1()
{
	::TColQuantity_Array1OfLength* _result = new ::TColQuantity_Array1OfLength();
	*_result = ((::TColQuantity_HArray1OfLength*)_NativeInstance)->ChangeArray1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColQuantity_Array1OfLength(_result);
}

void Macad::Occt::TColQuantity_HArray1OfLength::Init(double theValue)
{
	pin_ptr<double> pp_theValue = &theValue;
	((::TColQuantity_HArray1OfLength*)_NativeInstance)->Init(*(double*)pp_theValue);
}

int Macad::Occt::TColQuantity_HArray1OfLength::Size()
{
	return ((::TColQuantity_HArray1OfLength*)_NativeInstance)->Size();
}

int Macad::Occt::TColQuantity_HArray1OfLength::Length()
{
	return ((::TColQuantity_HArray1OfLength*)_NativeInstance)->Length();
}

bool Macad::Occt::TColQuantity_HArray1OfLength::IsEmpty()
{
	return ((::TColQuantity_HArray1OfLength*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TColQuantity_HArray1OfLength::Lower()
{
	return ((::TColQuantity_HArray1OfLength*)_NativeInstance)->Lower();
}

int Macad::Occt::TColQuantity_HArray1OfLength::Upper()
{
	return ((::TColQuantity_HArray1OfLength*)_NativeInstance)->Upper();
}

bool Macad::Occt::TColQuantity_HArray1OfLength::IsDeletable()
{
	return ((::TColQuantity_HArray1OfLength*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TColQuantity_HArray1OfLength::IsAllocated()
{
	return ((::TColQuantity_HArray1OfLength*)_NativeInstance)->IsAllocated();
}

double Macad::Occt::TColQuantity_HArray1OfLength::First()
{
	return ((::TColQuantity_HArray1OfLength*)_NativeInstance)->First();
}

double Macad::Occt::TColQuantity_HArray1OfLength::ChangeFirst()
{
	return ((::TColQuantity_HArray1OfLength*)_NativeInstance)->ChangeFirst();
}

double Macad::Occt::TColQuantity_HArray1OfLength::Last()
{
	return ((::TColQuantity_HArray1OfLength*)_NativeInstance)->Last();
}

double Macad::Occt::TColQuantity_HArray1OfLength::ChangeLast()
{
	return ((::TColQuantity_HArray1OfLength*)_NativeInstance)->ChangeLast();
}

double Macad::Occt::TColQuantity_HArray1OfLength::Value(int theIndex)
{
	return ((::TColQuantity_HArray1OfLength*)_NativeInstance)->Value(theIndex);
}

double Macad::Occt::TColQuantity_HArray1OfLength::ChangeValue(int theIndex)
{
	return ((::TColQuantity_HArray1OfLength*)_NativeInstance)->ChangeValue(theIndex);
}

void Macad::Occt::TColQuantity_HArray1OfLength::SetValue(int theIndex, double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	((::TColQuantity_HArray1OfLength*)_NativeInstance)->SetValue(theIndex, *(double*)pp_theItem);
}

void Macad::Occt::TColQuantity_HArray1OfLength::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TColQuantity_HArray1OfLength*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}


Macad::Occt::TColQuantity_HArray1OfLength^ Macad::Occt::TColQuantity_HArray1OfLength::CreateDowncasted(::TColQuantity_HArray1OfLength* instance)
{
	return gcnew Macad::Occt::TColQuantity_HArray1OfLength( instance );
}



//---------------------------------------------------------------------
//  Class  TColQuantity_HArray2OfLength
//---------------------------------------------------------------------

Macad::Occt::TColQuantity_HArray2OfLength::TColQuantity_HArray2OfLength(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColQuantity_HArray2OfLength(theRowLow, theRowUpp, theColLow, theColUpp);
}

Macad::Occt::TColQuantity_HArray2OfLength::TColQuantity_HArray2OfLength(int theRowLow, int theRowUpp, int theColLow, int theColUpp, double theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<double> pp_theValue = &theValue;
	NativeInstance = new ::TColQuantity_HArray2OfLength(theRowLow, theRowUpp, theColLow, theColUpp, *(double*)pp_theValue);
}

Macad::Occt::TColQuantity_HArray2OfLength::TColQuantity_HArray2OfLength(Macad::Occt::TColQuantity_Array2OfLength^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColQuantity_HArray2OfLength(*(::TColQuantity_Array2OfLength*)theOther->NativeInstance);
}

Macad::Occt::TColQuantity_HArray2OfLength::TColQuantity_HArray2OfLength(Macad::Occt::TColQuantity_HArray2OfLength^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TColQuantity_HArray2OfLength(*(::TColQuantity_HArray2OfLength*)parameter1->NativeInstance);
}

Macad::Occt::TColQuantity_Array2OfLength^ Macad::Occt::TColQuantity_HArray2OfLength::Array2()
{
	::TColQuantity_Array2OfLength* _result = new ::TColQuantity_Array2OfLength();
	*_result =  (::TColQuantity_Array2OfLength)((::TColQuantity_HArray2OfLength*)_NativeInstance)->Array2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColQuantity_Array2OfLength(_result);
}

Macad::Occt::TColQuantity_Array2OfLength^ Macad::Occt::TColQuantity_HArray2OfLength::ChangeArray2()
{
	::TColQuantity_Array2OfLength* _result = new ::TColQuantity_Array2OfLength();
	*_result = ((::TColQuantity_HArray2OfLength*)_NativeInstance)->ChangeArray2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TColQuantity_Array2OfLength(_result);
}

void Macad::Occt::TColQuantity_HArray2OfLength::Init(double theValue)
{
	pin_ptr<double> pp_theValue = &theValue;
	((::TColQuantity_HArray2OfLength*)_NativeInstance)->Init(*(double*)pp_theValue);
}

int Macad::Occt::TColQuantity_HArray2OfLength::Size()
{
	return ((::TColQuantity_HArray2OfLength*)_NativeInstance)->Size();
}

int Macad::Occt::TColQuantity_HArray2OfLength::Length()
{
	return ((::TColQuantity_HArray2OfLength*)_NativeInstance)->Length();
}

int Macad::Occt::TColQuantity_HArray2OfLength::NbRows()
{
	return ((::TColQuantity_HArray2OfLength*)_NativeInstance)->NbRows();
}

int Macad::Occt::TColQuantity_HArray2OfLength::NbColumns()
{
	return ((::TColQuantity_HArray2OfLength*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TColQuantity_HArray2OfLength::RowLength()
{
	return ((::TColQuantity_HArray2OfLength*)_NativeInstance)->RowLength();
}

int Macad::Occt::TColQuantity_HArray2OfLength::ColLength()
{
	return ((::TColQuantity_HArray2OfLength*)_NativeInstance)->ColLength();
}

int Macad::Occt::TColQuantity_HArray2OfLength::LowerRow()
{
	return ((::TColQuantity_HArray2OfLength*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TColQuantity_HArray2OfLength::UpperRow()
{
	return ((::TColQuantity_HArray2OfLength*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TColQuantity_HArray2OfLength::LowerCol()
{
	return ((::TColQuantity_HArray2OfLength*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TColQuantity_HArray2OfLength::UpperCol()
{
	return ((::TColQuantity_HArray2OfLength*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TColQuantity_HArray2OfLength::IsDeletable()
{
	return ((::TColQuantity_HArray2OfLength*)_NativeInstance)->IsDeletable();
}

double Macad::Occt::TColQuantity_HArray2OfLength::Value(int theRow, int theCol)
{
	return ((::TColQuantity_HArray2OfLength*)_NativeInstance)->Value(theRow, theCol);
}

double Macad::Occt::TColQuantity_HArray2OfLength::ChangeValue(int theRow, int theCol)
{
	return ((::TColQuantity_HArray2OfLength*)_NativeInstance)->ChangeValue(theRow, theCol);
}

void Macad::Occt::TColQuantity_HArray2OfLength::SetValue(int theRow, int theCol, double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	((::TColQuantity_HArray2OfLength*)_NativeInstance)->SetValue(theRow, theCol, *(double*)pp_theItem);
}

void Macad::Occt::TColQuantity_HArray2OfLength::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TColQuantity_HArray2OfLength*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}


Macad::Occt::TColQuantity_HArray2OfLength^ Macad::Occt::TColQuantity_HArray2OfLength::CreateDowncasted(::TColQuantity_HArray2OfLength* instance)
{
	return gcnew Macad::Occt::TColQuantity_HArray2OfLength( instance );
}


