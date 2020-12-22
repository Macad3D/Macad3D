// Generated wrapper code for package TopTools

#include "OcctPCH.h"
#include "TopTools.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "TopTools.h"
#include "Standard.h"
#include "TopoDS.h"
#include "Bnd.h"
#include "TopLoc.h"
#include "Message.h"
#include "BRepTools.h"
#include "TCollection.h"
#include "TopAbs.h"


//---------------------------------------------------------------------
//  Class  TopTools_ListOfShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_ListOfShape::TopTools_ListOfShape()
	: BaseClass<::TopTools_ListOfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_ListOfShape();
}

Macad::Occt::TopTools_ListOfShape::TopTools_ListOfShape(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TopTools_ListOfShape>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TopTools_ListOfShape(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TopTools_ListOfShape::TopTools_ListOfShape(Macad::Occt::TopTools_ListOfShape^ theOther)
	: BaseClass<::TopTools_ListOfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_ListOfShape(*(::TopTools_ListOfShape*)theOther->NativeInstance);
}

int Macad::Occt::TopTools_ListOfShape::Size()
{
	return ((::TopTools_ListOfShape*)_NativeInstance)->Size();
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::TopTools_ListOfShape::Assign(Macad::Occt::TopTools_ListOfShape^ theOther)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = ((::TopTools_ListOfShape*)_NativeInstance)->Assign(*(::TopTools_ListOfShape*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

void Macad::Occt::TopTools_ListOfShape::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TopTools_ListOfShape*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TopTools_ListOfShape::Clear()
{
	((::TopTools_ListOfShape*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_ListOfShape::First()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::TopTools_ListOfShape*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_ListOfShape::Last()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::TopTools_ListOfShape*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_ListOfShape::Append(Macad::Occt::TopoDS_Shape^ theItem)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::TopTools_ListOfShape*)_NativeInstance)->Append(*(::TopoDS_Shape*)theItem->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::TopTools_ListOfShape::Append(Macad::Occt::TopTools_ListOfShape^ theOther)
{
	((::TopTools_ListOfShape*)_NativeInstance)->Append(*(::TopTools_ListOfShape*)theOther->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_ListOfShape::Prepend(Macad::Occt::TopoDS_Shape^ theItem)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::TopTools_ListOfShape*)_NativeInstance)->Prepend(*(::TopoDS_Shape*)theItem->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::TopTools_ListOfShape::Prepend(Macad::Occt::TopTools_ListOfShape^ theOther)
{
	((::TopTools_ListOfShape*)_NativeInstance)->Prepend(*(::TopTools_ListOfShape*)theOther->NativeInstance);
}

void Macad::Occt::TopTools_ListOfShape::RemoveFirst()
{
	((::TopTools_ListOfShape*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::TopTools_ListOfShape::Reverse()
{
	((::TopTools_ListOfShape*)_NativeInstance)->Reverse();
}




//---------------------------------------------------------------------
//  Class  TopTools_Array1OfListOfShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_Array1OfListOfShape::TopTools_Array1OfListOfShape()
	: BaseClass<::TopTools_Array1OfListOfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_Array1OfListOfShape();
}

Macad::Occt::TopTools_Array1OfListOfShape::TopTools_Array1OfListOfShape(int theLower, int theUpper)
	: BaseClass<::TopTools_Array1OfListOfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_Array1OfListOfShape(theLower, theUpper);
}

Macad::Occt::TopTools_Array1OfListOfShape::TopTools_Array1OfListOfShape(Macad::Occt::TopTools_Array1OfListOfShape^ theOther)
	: BaseClass<::TopTools_Array1OfListOfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_Array1OfListOfShape(*(::TopTools_Array1OfListOfShape*)theOther->NativeInstance);
}

int Macad::Occt::TopTools_Array1OfListOfShape::Size()
{
	return ((::TopTools_Array1OfListOfShape*)_NativeInstance)->Size();
}

int Macad::Occt::TopTools_Array1OfListOfShape::Length()
{
	return ((::TopTools_Array1OfListOfShape*)_NativeInstance)->Length();
}

bool Macad::Occt::TopTools_Array1OfListOfShape::IsEmpty()
{
	return ((::TopTools_Array1OfListOfShape*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TopTools_Array1OfListOfShape::Lower()
{
	return ((::TopTools_Array1OfListOfShape*)_NativeInstance)->Lower();
}

int Macad::Occt::TopTools_Array1OfListOfShape::Upper()
{
	return ((::TopTools_Array1OfListOfShape*)_NativeInstance)->Upper();
}

bool Macad::Occt::TopTools_Array1OfListOfShape::IsDeletable()
{
	return ((::TopTools_Array1OfListOfShape*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TopTools_Array1OfListOfShape::IsAllocated()
{
	return ((::TopTools_Array1OfListOfShape*)_NativeInstance)->IsAllocated();
}

Macad::Occt::TopTools_Array1OfListOfShape^ Macad::Occt::TopTools_Array1OfListOfShape::Assign(Macad::Occt::TopTools_Array1OfListOfShape^ theOther)
{
	::TopTools_Array1OfListOfShape* _result = new ::TopTools_Array1OfListOfShape();
	*_result = ((::TopTools_Array1OfListOfShape*)_NativeInstance)->Assign(*(::TopTools_Array1OfListOfShape*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_Array1OfListOfShape(_result);
}

Macad::Occt::TopTools_Array1OfListOfShape^ Macad::Occt::TopTools_Array1OfListOfShape::Move(Macad::Occt::TopTools_Array1OfListOfShape^ theOther)
{
	::TopTools_Array1OfListOfShape* _result = new ::TopTools_Array1OfListOfShape();
	*_result = ((::TopTools_Array1OfListOfShape*)_NativeInstance)->Move(*(::TopTools_Array1OfListOfShape*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_Array1OfListOfShape(_result);
}

void Macad::Occt::TopTools_Array1OfListOfShape::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TopTools_Array1OfListOfShape*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TopTools_Array1OfShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_Array1OfShape::TopTools_Array1OfShape()
	: BaseClass<::TopTools_Array1OfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_Array1OfShape();
}

Macad::Occt::TopTools_Array1OfShape::TopTools_Array1OfShape(int theLower, int theUpper)
	: BaseClass<::TopTools_Array1OfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_Array1OfShape(theLower, theUpper);
}

Macad::Occt::TopTools_Array1OfShape::TopTools_Array1OfShape(Macad::Occt::TopTools_Array1OfShape^ theOther)
	: BaseClass<::TopTools_Array1OfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_Array1OfShape(*(::TopTools_Array1OfShape*)theOther->NativeInstance);
}

Macad::Occt::TopTools_Array1OfShape::TopTools_Array1OfShape(Macad::Occt::TopoDS_Shape^ theBegin, int theLower, int theUpper)
	: BaseClass<::TopTools_Array1OfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_Array1OfShape(*(::TopoDS_Shape*)theBegin->NativeInstance, theLower, theUpper);
}

void Macad::Occt::TopTools_Array1OfShape::Init(Macad::Occt::TopoDS_Shape^ theValue)
{
	((::TopTools_Array1OfShape*)_NativeInstance)->Init(*(::TopoDS_Shape*)theValue->NativeInstance);
}

int Macad::Occt::TopTools_Array1OfShape::Size()
{
	return ((::TopTools_Array1OfShape*)_NativeInstance)->Size();
}

int Macad::Occt::TopTools_Array1OfShape::Length()
{
	return ((::TopTools_Array1OfShape*)_NativeInstance)->Length();
}

bool Macad::Occt::TopTools_Array1OfShape::IsEmpty()
{
	return ((::TopTools_Array1OfShape*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TopTools_Array1OfShape::Lower()
{
	return ((::TopTools_Array1OfShape*)_NativeInstance)->Lower();
}

int Macad::Occt::TopTools_Array1OfShape::Upper()
{
	return ((::TopTools_Array1OfShape*)_NativeInstance)->Upper();
}

bool Macad::Occt::TopTools_Array1OfShape::IsDeletable()
{
	return ((::TopTools_Array1OfShape*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TopTools_Array1OfShape::IsAllocated()
{
	return ((::TopTools_Array1OfShape*)_NativeInstance)->IsAllocated();
}

Macad::Occt::TopTools_Array1OfShape^ Macad::Occt::TopTools_Array1OfShape::Assign(Macad::Occt::TopTools_Array1OfShape^ theOther)
{
	::TopTools_Array1OfShape* _result = new ::TopTools_Array1OfShape();
	*_result = ((::TopTools_Array1OfShape*)_NativeInstance)->Assign(*(::TopTools_Array1OfShape*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_Array1OfShape(_result);
}

Macad::Occt::TopTools_Array1OfShape^ Macad::Occt::TopTools_Array1OfShape::Move(Macad::Occt::TopTools_Array1OfShape^ theOther)
{
	::TopTools_Array1OfShape* _result = new ::TopTools_Array1OfShape();
	*_result = ((::TopTools_Array1OfShape*)_NativeInstance)->Move(*(::TopTools_Array1OfShape*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_Array1OfShape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_Array1OfShape::First()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::TopTools_Array1OfShape*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_Array1OfShape::ChangeFirst()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::TopTools_Array1OfShape*)_NativeInstance)->ChangeFirst();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_Array1OfShape::Last()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::TopTools_Array1OfShape*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_Array1OfShape::ChangeLast()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::TopTools_Array1OfShape*)_NativeInstance)->ChangeLast();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_Array1OfShape::Value(int theIndex)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::TopTools_Array1OfShape*)_NativeInstance)->Value(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_Array1OfShape::ChangeValue(int theIndex)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::TopTools_Array1OfShape*)_NativeInstance)->ChangeValue(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::TopTools_Array1OfShape::SetValue(int theIndex, Macad::Occt::TopoDS_Shape^ theItem)
{
	((::TopTools_Array1OfShape*)_NativeInstance)->SetValue(theIndex, *(::TopoDS_Shape*)theItem->NativeInstance);
}

void Macad::Occt::TopTools_Array1OfShape::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TopTools_Array1OfShape*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TopTools_Array2OfShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_Array2OfShape::TopTools_Array2OfShape()
	: BaseClass<::TopTools_Array2OfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_Array2OfShape();
}

Macad::Occt::TopTools_Array2OfShape::TopTools_Array2OfShape(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TopTools_Array2OfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_Array2OfShape(theRowLower, theRowUpper, theColLower, theColUpper);
}

Macad::Occt::TopTools_Array2OfShape::TopTools_Array2OfShape(Macad::Occt::TopTools_Array2OfShape^ theOther)
	: BaseClass<::TopTools_Array2OfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_Array2OfShape(*(::TopTools_Array2OfShape*)theOther->NativeInstance);
}

Macad::Occt::TopTools_Array2OfShape::TopTools_Array2OfShape(Macad::Occt::TopoDS_Shape^ theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
	: BaseClass<::TopTools_Array2OfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_Array2OfShape(*(::TopoDS_Shape*)theBegin->NativeInstance, theRowLower, theRowUpper, theColLower, theColUpper);
}

void Macad::Occt::TopTools_Array2OfShape::Init(Macad::Occt::TopoDS_Shape^ theValue)
{
	((::TopTools_Array2OfShape*)_NativeInstance)->Init(*(::TopoDS_Shape*)theValue->NativeInstance);
}

int Macad::Occt::TopTools_Array2OfShape::Size()
{
	return ((::TopTools_Array2OfShape*)_NativeInstance)->Size();
}

int Macad::Occt::TopTools_Array2OfShape::Length()
{
	return ((::TopTools_Array2OfShape*)_NativeInstance)->Length();
}

int Macad::Occt::TopTools_Array2OfShape::NbRows()
{
	return ((::TopTools_Array2OfShape*)_NativeInstance)->NbRows();
}

int Macad::Occt::TopTools_Array2OfShape::NbColumns()
{
	return ((::TopTools_Array2OfShape*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TopTools_Array2OfShape::RowLength()
{
	return ((::TopTools_Array2OfShape*)_NativeInstance)->RowLength();
}

int Macad::Occt::TopTools_Array2OfShape::ColLength()
{
	return ((::TopTools_Array2OfShape*)_NativeInstance)->ColLength();
}

int Macad::Occt::TopTools_Array2OfShape::LowerRow()
{
	return ((::TopTools_Array2OfShape*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TopTools_Array2OfShape::UpperRow()
{
	return ((::TopTools_Array2OfShape*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TopTools_Array2OfShape::LowerCol()
{
	return ((::TopTools_Array2OfShape*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TopTools_Array2OfShape::UpperCol()
{
	return ((::TopTools_Array2OfShape*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TopTools_Array2OfShape::IsDeletable()
{
	return ((::TopTools_Array2OfShape*)_NativeInstance)->IsDeletable();
}

Macad::Occt::TopTools_Array2OfShape^ Macad::Occt::TopTools_Array2OfShape::Assign(Macad::Occt::TopTools_Array2OfShape^ theOther)
{
	::TopTools_Array2OfShape* _result = new ::TopTools_Array2OfShape();
	*_result = ((::TopTools_Array2OfShape*)_NativeInstance)->Assign(*(::TopTools_Array2OfShape*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_Array2OfShape(_result);
}

Macad::Occt::TopTools_Array2OfShape^ Macad::Occt::TopTools_Array2OfShape::Move(Macad::Occt::TopTools_Array2OfShape^ theOther)
{
	::TopTools_Array2OfShape* _result = new ::TopTools_Array2OfShape();
	*_result = ((::TopTools_Array2OfShape*)_NativeInstance)->Move(*(::TopTools_Array2OfShape*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_Array2OfShape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_Array2OfShape::Value(int theRow, int theCol)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::TopTools_Array2OfShape*)_NativeInstance)->Value(theRow, theCol);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_Array2OfShape::ChangeValue(int theRow, int theCol)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::TopTools_Array2OfShape*)_NativeInstance)->ChangeValue(theRow, theCol);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::TopTools_Array2OfShape::SetValue(int theRow, int theCol, Macad::Occt::TopoDS_Shape^ theItem)
{
	((::TopTools_Array2OfShape*)_NativeInstance)->SetValue(theRow, theCol, *(::TopoDS_Shape*)theItem->NativeInstance);
}

void Macad::Occt::TopTools_Array2OfShape::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TopTools_Array2OfShape*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}




//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfIntegerListOfShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_DataMapOfIntegerListOfShape::TopTools_DataMapOfIntegerListOfShape()
	: BaseClass<::TopTools_DataMapOfIntegerListOfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_DataMapOfIntegerListOfShape();
}

Macad::Occt::TopTools_DataMapOfIntegerListOfShape::TopTools_DataMapOfIntegerListOfShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TopTools_DataMapOfIntegerListOfShape>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TopTools_DataMapOfIntegerListOfShape(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TopTools_DataMapOfIntegerListOfShape::TopTools_DataMapOfIntegerListOfShape(int theNbBuckets)
	: BaseClass<::TopTools_DataMapOfIntegerListOfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_DataMapOfIntegerListOfShape(theNbBuckets, 0L);
}

Macad::Occt::TopTools_DataMapOfIntegerListOfShape::TopTools_DataMapOfIntegerListOfShape(Macad::Occt::TopTools_DataMapOfIntegerListOfShape^ theOther)
	: BaseClass<::TopTools_DataMapOfIntegerListOfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_DataMapOfIntegerListOfShape(*(::TopTools_DataMapOfIntegerListOfShape*)theOther->NativeInstance);
}

void Macad::Occt::TopTools_DataMapOfIntegerListOfShape::Exchange(Macad::Occt::TopTools_DataMapOfIntegerListOfShape^ theOther)
{
	((::TopTools_DataMapOfIntegerListOfShape*)_NativeInstance)->Exchange(*(::TopTools_DataMapOfIntegerListOfShape*)theOther->NativeInstance);
}

Macad::Occt::TopTools_DataMapOfIntegerListOfShape^ Macad::Occt::TopTools_DataMapOfIntegerListOfShape::Assign(Macad::Occt::TopTools_DataMapOfIntegerListOfShape^ theOther)
{
	::TopTools_DataMapOfIntegerListOfShape* _result = new ::TopTools_DataMapOfIntegerListOfShape();
	*_result = ((::TopTools_DataMapOfIntegerListOfShape*)_NativeInstance)->Assign(*(::TopTools_DataMapOfIntegerListOfShape*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_DataMapOfIntegerListOfShape(_result);
}

bool Macad::Occt::TopTools_DataMapOfIntegerListOfShape::IsBound(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	return ((::TopTools_DataMapOfIntegerListOfShape*)_NativeInstance)->IsBound(*(int*)pp_theKey);
}

bool Macad::Occt::TopTools_DataMapOfIntegerListOfShape::UnBind(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	return ((::TopTools_DataMapOfIntegerListOfShape*)_NativeInstance)->UnBind(*(int*)pp_theKey);
}

void Macad::Occt::TopTools_DataMapOfIntegerListOfShape::Clear(bool doReleaseMemory)
{
	((::TopTools_DataMapOfIntegerListOfShape*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopTools_DataMapOfIntegerListOfShape::Clear()
{
	((::TopTools_DataMapOfIntegerListOfShape*)_NativeInstance)->Clear(true);
}

void Macad::Occt::TopTools_DataMapOfIntegerListOfShape::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TopTools_DataMapOfIntegerListOfShape*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::TopTools_DataMapOfIntegerListOfShape::Size()
{
	return ((::TopTools_DataMapOfIntegerListOfShape*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfIntegerShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_DataMapOfIntegerShape::TopTools_DataMapOfIntegerShape()
	: BaseClass<::TopTools_DataMapOfIntegerShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_DataMapOfIntegerShape();
}

Macad::Occt::TopTools_DataMapOfIntegerShape::TopTools_DataMapOfIntegerShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TopTools_DataMapOfIntegerShape>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TopTools_DataMapOfIntegerShape(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TopTools_DataMapOfIntegerShape::TopTools_DataMapOfIntegerShape(int theNbBuckets)
	: BaseClass<::TopTools_DataMapOfIntegerShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_DataMapOfIntegerShape(theNbBuckets, 0L);
}

Macad::Occt::TopTools_DataMapOfIntegerShape::TopTools_DataMapOfIntegerShape(Macad::Occt::TopTools_DataMapOfIntegerShape^ theOther)
	: BaseClass<::TopTools_DataMapOfIntegerShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_DataMapOfIntegerShape(*(::TopTools_DataMapOfIntegerShape*)theOther->NativeInstance);
}

void Macad::Occt::TopTools_DataMapOfIntegerShape::Exchange(Macad::Occt::TopTools_DataMapOfIntegerShape^ theOther)
{
	((::TopTools_DataMapOfIntegerShape*)_NativeInstance)->Exchange(*(::TopTools_DataMapOfIntegerShape*)theOther->NativeInstance);
}

Macad::Occt::TopTools_DataMapOfIntegerShape^ Macad::Occt::TopTools_DataMapOfIntegerShape::Assign(Macad::Occt::TopTools_DataMapOfIntegerShape^ theOther)
{
	::TopTools_DataMapOfIntegerShape* _result = new ::TopTools_DataMapOfIntegerShape();
	*_result = ((::TopTools_DataMapOfIntegerShape*)_NativeInstance)->Assign(*(::TopTools_DataMapOfIntegerShape*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_DataMapOfIntegerShape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfIntegerShape::Bound(int theKey, Macad::Occt::TopoDS_Shape^ theItem)
{
	pin_ptr<int> pp_theKey = &theKey;
	::TopoDS_Shape* _result;
	_result = (::TopoDS_Shape*)((::TopTools_DataMapOfIntegerShape*)_NativeInstance)->Bound(*(int*)pp_theKey, *(::TopoDS_Shape*)theItem->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::TopTools_DataMapOfIntegerShape::IsBound(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	return ((::TopTools_DataMapOfIntegerShape*)_NativeInstance)->IsBound(*(int*)pp_theKey);
}

bool Macad::Occt::TopTools_DataMapOfIntegerShape::UnBind(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	return ((::TopTools_DataMapOfIntegerShape*)_NativeInstance)->UnBind(*(int*)pp_theKey);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfIntegerShape::Seek(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	::TopoDS_Shape* _result;
	_result = (::TopoDS_Shape*)((::TopTools_DataMapOfIntegerShape*)_NativeInstance)->Seek(*(int*)pp_theKey);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfIntegerShape::Find(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::TopTools_DataMapOfIntegerShape*)_NativeInstance)->Find(*(int*)pp_theKey);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::TopTools_DataMapOfIntegerShape::Find(int theKey, Macad::Occt::TopoDS_Shape^ theValue)
{
	pin_ptr<int> pp_theKey = &theKey;
	return ((::TopTools_DataMapOfIntegerShape*)_NativeInstance)->Find(*(int*)pp_theKey, *(::TopoDS_Shape*)theValue->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfIntegerShape::ChangeSeek(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	::TopoDS_Shape* _result;
	_result = (::TopoDS_Shape*)((::TopTools_DataMapOfIntegerShape*)_NativeInstance)->ChangeSeek(*(int*)pp_theKey);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfIntegerShape::ChangeFind(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::TopTools_DataMapOfIntegerShape*)_NativeInstance)->ChangeFind(*(int*)pp_theKey);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::TopTools_DataMapOfIntegerShape::Clear(bool doReleaseMemory)
{
	((::TopTools_DataMapOfIntegerShape*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopTools_DataMapOfIntegerShape::Clear()
{
	((::TopTools_DataMapOfIntegerShape*)_NativeInstance)->Clear(true);
}

void Macad::Occt::TopTools_DataMapOfIntegerShape::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TopTools_DataMapOfIntegerShape*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::TopTools_DataMapOfIntegerShape::Size()
{
	return ((::TopTools_DataMapOfIntegerShape*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfOrientedShapeInteger
//---------------------------------------------------------------------

Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::TopTools_DataMapOfOrientedShapeInteger()
	: BaseClass<::TopTools_DataMapOfOrientedShapeInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_DataMapOfOrientedShapeInteger();
}

Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::TopTools_DataMapOfOrientedShapeInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TopTools_DataMapOfOrientedShapeInteger>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TopTools_DataMapOfOrientedShapeInteger(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::TopTools_DataMapOfOrientedShapeInteger(int theNbBuckets)
	: BaseClass<::TopTools_DataMapOfOrientedShapeInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_DataMapOfOrientedShapeInteger(theNbBuckets, 0L);
}

Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::TopTools_DataMapOfOrientedShapeInteger(Macad::Occt::TopTools_DataMapOfOrientedShapeInteger^ theOther)
	: BaseClass<::TopTools_DataMapOfOrientedShapeInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_DataMapOfOrientedShapeInteger(*(::TopTools_DataMapOfOrientedShapeInteger*)theOther->NativeInstance);
}

void Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::Exchange(Macad::Occt::TopTools_DataMapOfOrientedShapeInteger^ theOther)
{
	((::TopTools_DataMapOfOrientedShapeInteger*)_NativeInstance)->Exchange(*(::TopTools_DataMapOfOrientedShapeInteger*)theOther->NativeInstance);
}

Macad::Occt::TopTools_DataMapOfOrientedShapeInteger^ Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::Assign(Macad::Occt::TopTools_DataMapOfOrientedShapeInteger^ theOther)
{
	::TopTools_DataMapOfOrientedShapeInteger* _result = new ::TopTools_DataMapOfOrientedShapeInteger();
	*_result = ((::TopTools_DataMapOfOrientedShapeInteger*)_NativeInstance)->Assign(*(::TopTools_DataMapOfOrientedShapeInteger*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_DataMapOfOrientedShapeInteger(_result);
}

int Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::Bound(Macad::Occt::TopoDS_Shape^ theKey, int theItem)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

bool Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::TopTools_DataMapOfOrientedShapeInteger*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
}

bool Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::TopTools_DataMapOfOrientedShapeInteger*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
}

int Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::Seek(Macad::Occt::TopoDS_Shape^ theKey)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

int Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::Find(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::TopTools_DataMapOfOrientedShapeInteger*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance);
}

bool Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::Find(Macad::Occt::TopoDS_Shape^ theKey, int% theValue)
{
	pin_ptr<int> pp_theValue = &theValue;
	return ((::TopTools_DataMapOfOrientedShapeInteger*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance, *(int*)pp_theValue);
}

int Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

int Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::ChangeFind(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::TopTools_DataMapOfOrientedShapeInteger*)_NativeInstance)->ChangeFind(*(::TopoDS_Shape*)theKey->NativeInstance);
}

void Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::Clear(bool doReleaseMemory)
{
	((::TopTools_DataMapOfOrientedShapeInteger*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::Clear()
{
	((::TopTools_DataMapOfOrientedShapeInteger*)_NativeInstance)->Clear(true);
}

void Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TopTools_DataMapOfOrientedShapeInteger*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::Size()
{
	return ((::TopTools_DataMapOfOrientedShapeInteger*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfOrientedShapeShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_DataMapOfOrientedShapeShape::TopTools_DataMapOfOrientedShapeShape()
	: BaseClass<::TopTools_DataMapOfOrientedShapeShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_DataMapOfOrientedShapeShape();
}

Macad::Occt::TopTools_DataMapOfOrientedShapeShape::TopTools_DataMapOfOrientedShapeShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TopTools_DataMapOfOrientedShapeShape>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TopTools_DataMapOfOrientedShapeShape(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TopTools_DataMapOfOrientedShapeShape::TopTools_DataMapOfOrientedShapeShape(int theNbBuckets)
	: BaseClass<::TopTools_DataMapOfOrientedShapeShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_DataMapOfOrientedShapeShape(theNbBuckets, 0L);
}

Macad::Occt::TopTools_DataMapOfOrientedShapeShape::TopTools_DataMapOfOrientedShapeShape(Macad::Occt::TopTools_DataMapOfOrientedShapeShape^ theOther)
	: BaseClass<::TopTools_DataMapOfOrientedShapeShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_DataMapOfOrientedShapeShape(*(::TopTools_DataMapOfOrientedShapeShape*)theOther->NativeInstance);
}

void Macad::Occt::TopTools_DataMapOfOrientedShapeShape::Exchange(Macad::Occt::TopTools_DataMapOfOrientedShapeShape^ theOther)
{
	((::TopTools_DataMapOfOrientedShapeShape*)_NativeInstance)->Exchange(*(::TopTools_DataMapOfOrientedShapeShape*)theOther->NativeInstance);
}

Macad::Occt::TopTools_DataMapOfOrientedShapeShape^ Macad::Occt::TopTools_DataMapOfOrientedShapeShape::Assign(Macad::Occt::TopTools_DataMapOfOrientedShapeShape^ theOther)
{
	::TopTools_DataMapOfOrientedShapeShape* _result = new ::TopTools_DataMapOfOrientedShapeShape();
	*_result = ((::TopTools_DataMapOfOrientedShapeShape*)_NativeInstance)->Assign(*(::TopTools_DataMapOfOrientedShapeShape*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_DataMapOfOrientedShapeShape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfOrientedShapeShape::Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopoDS_Shape^ theItem)
{
	::TopoDS_Shape* _result;
	_result = (::TopoDS_Shape*)((::TopTools_DataMapOfOrientedShapeShape*)_NativeInstance)->Bound(*(::TopoDS_Shape*)theKey->NativeInstance, *(::TopoDS_Shape*)theItem->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::TopTools_DataMapOfOrientedShapeShape::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::TopTools_DataMapOfOrientedShapeShape*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
}

bool Macad::Occt::TopTools_DataMapOfOrientedShapeShape::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::TopTools_DataMapOfOrientedShapeShape*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfOrientedShapeShape::Seek(Macad::Occt::TopoDS_Shape^ theKey)
{
	::TopoDS_Shape* _result;
	_result = (::TopoDS_Shape*)((::TopTools_DataMapOfOrientedShapeShape*)_NativeInstance)->Seek(*(::TopoDS_Shape*)theKey->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfOrientedShapeShape::Find(Macad::Occt::TopoDS_Shape^ theKey)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::TopTools_DataMapOfOrientedShapeShape*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::TopTools_DataMapOfOrientedShapeShape::Find(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopoDS_Shape^ theValue)
{
	return ((::TopTools_DataMapOfOrientedShapeShape*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance, *(::TopoDS_Shape*)theValue->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfOrientedShapeShape::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey)
{
	::TopoDS_Shape* _result;
	_result = (::TopoDS_Shape*)((::TopTools_DataMapOfOrientedShapeShape*)_NativeInstance)->ChangeSeek(*(::TopoDS_Shape*)theKey->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfOrientedShapeShape::ChangeFind(Macad::Occt::TopoDS_Shape^ theKey)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::TopTools_DataMapOfOrientedShapeShape*)_NativeInstance)->ChangeFind(*(::TopoDS_Shape*)theKey->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::TopTools_DataMapOfOrientedShapeShape::Clear(bool doReleaseMemory)
{
	((::TopTools_DataMapOfOrientedShapeShape*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopTools_DataMapOfOrientedShapeShape::Clear()
{
	((::TopTools_DataMapOfOrientedShapeShape*)_NativeInstance)->Clear(true);
}

void Macad::Occt::TopTools_DataMapOfOrientedShapeShape::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TopTools_DataMapOfOrientedShapeShape*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::TopTools_DataMapOfOrientedShapeShape::Size()
{
	return ((::TopTools_DataMapOfOrientedShapeShape*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeInteger
//---------------------------------------------------------------------

Macad::Occt::TopTools_DataMapOfShapeInteger::TopTools_DataMapOfShapeInteger()
	: BaseClass<::TopTools_DataMapOfShapeInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_DataMapOfShapeInteger();
}

Macad::Occt::TopTools_DataMapOfShapeInteger::TopTools_DataMapOfShapeInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TopTools_DataMapOfShapeInteger>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TopTools_DataMapOfShapeInteger(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TopTools_DataMapOfShapeInteger::TopTools_DataMapOfShapeInteger(int theNbBuckets)
	: BaseClass<::TopTools_DataMapOfShapeInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_DataMapOfShapeInteger(theNbBuckets, 0L);
}

Macad::Occt::TopTools_DataMapOfShapeInteger::TopTools_DataMapOfShapeInteger(Macad::Occt::TopTools_DataMapOfShapeInteger^ theOther)
	: BaseClass<::TopTools_DataMapOfShapeInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_DataMapOfShapeInteger(*(::TopTools_DataMapOfShapeInteger*)theOther->NativeInstance);
}

void Macad::Occt::TopTools_DataMapOfShapeInteger::Exchange(Macad::Occt::TopTools_DataMapOfShapeInteger^ theOther)
{
	((::TopTools_DataMapOfShapeInteger*)_NativeInstance)->Exchange(*(::TopTools_DataMapOfShapeInteger*)theOther->NativeInstance);
}

Macad::Occt::TopTools_DataMapOfShapeInteger^ Macad::Occt::TopTools_DataMapOfShapeInteger::Assign(Macad::Occt::TopTools_DataMapOfShapeInteger^ theOther)
{
	::TopTools_DataMapOfShapeInteger* _result = new ::TopTools_DataMapOfShapeInteger();
	*_result = ((::TopTools_DataMapOfShapeInteger*)_NativeInstance)->Assign(*(::TopTools_DataMapOfShapeInteger*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_DataMapOfShapeInteger(_result);
}

int Macad::Occt::TopTools_DataMapOfShapeInteger::Bound(Macad::Occt::TopoDS_Shape^ theKey, int theItem)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

bool Macad::Occt::TopTools_DataMapOfShapeInteger::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::TopTools_DataMapOfShapeInteger*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
}

bool Macad::Occt::TopTools_DataMapOfShapeInteger::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::TopTools_DataMapOfShapeInteger*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
}

int Macad::Occt::TopTools_DataMapOfShapeInteger::Seek(Macad::Occt::TopoDS_Shape^ theKey)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

int Macad::Occt::TopTools_DataMapOfShapeInteger::Find(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::TopTools_DataMapOfShapeInteger*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance);
}

bool Macad::Occt::TopTools_DataMapOfShapeInteger::Find(Macad::Occt::TopoDS_Shape^ theKey, int% theValue)
{
	pin_ptr<int> pp_theValue = &theValue;
	return ((::TopTools_DataMapOfShapeInteger*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance, *(int*)pp_theValue);
}

int Macad::Occt::TopTools_DataMapOfShapeInteger::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

int Macad::Occt::TopTools_DataMapOfShapeInteger::ChangeFind(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::TopTools_DataMapOfShapeInteger*)_NativeInstance)->ChangeFind(*(::TopoDS_Shape*)theKey->NativeInstance);
}

void Macad::Occt::TopTools_DataMapOfShapeInteger::Clear(bool doReleaseMemory)
{
	((::TopTools_DataMapOfShapeInteger*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopTools_DataMapOfShapeInteger::Clear()
{
	((::TopTools_DataMapOfShapeInteger*)_NativeInstance)->Clear(true);
}

void Macad::Occt::TopTools_DataMapOfShapeInteger::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TopTools_DataMapOfShapeInteger*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::TopTools_DataMapOfShapeInteger::Size()
{
	return ((::TopTools_DataMapOfShapeInteger*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeListOfInteger
//---------------------------------------------------------------------

Macad::Occt::TopTools_DataMapOfShapeListOfInteger::TopTools_DataMapOfShapeListOfInteger()
	: BaseClass<::TopTools_DataMapOfShapeListOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_DataMapOfShapeListOfInteger();
}

Macad::Occt::TopTools_DataMapOfShapeListOfInteger::TopTools_DataMapOfShapeListOfInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TopTools_DataMapOfShapeListOfInteger>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TopTools_DataMapOfShapeListOfInteger(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TopTools_DataMapOfShapeListOfInteger::TopTools_DataMapOfShapeListOfInteger(int theNbBuckets)
	: BaseClass<::TopTools_DataMapOfShapeListOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_DataMapOfShapeListOfInteger(theNbBuckets, 0L);
}

Macad::Occt::TopTools_DataMapOfShapeListOfInteger::TopTools_DataMapOfShapeListOfInteger(Macad::Occt::TopTools_DataMapOfShapeListOfInteger^ theOther)
	: BaseClass<::TopTools_DataMapOfShapeListOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_DataMapOfShapeListOfInteger(*(::TopTools_DataMapOfShapeListOfInteger*)theOther->NativeInstance);
}

void Macad::Occt::TopTools_DataMapOfShapeListOfInteger::Exchange(Macad::Occt::TopTools_DataMapOfShapeListOfInteger^ theOther)
{
	((::TopTools_DataMapOfShapeListOfInteger*)_NativeInstance)->Exchange(*(::TopTools_DataMapOfShapeListOfInteger*)theOther->NativeInstance);
}

Macad::Occt::TopTools_DataMapOfShapeListOfInteger^ Macad::Occt::TopTools_DataMapOfShapeListOfInteger::Assign(Macad::Occt::TopTools_DataMapOfShapeListOfInteger^ theOther)
{
	::TopTools_DataMapOfShapeListOfInteger* _result = new ::TopTools_DataMapOfShapeListOfInteger();
	*_result = ((::TopTools_DataMapOfShapeListOfInteger*)_NativeInstance)->Assign(*(::TopTools_DataMapOfShapeListOfInteger*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_DataMapOfShapeListOfInteger(_result);
}

bool Macad::Occt::TopTools_DataMapOfShapeListOfInteger::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::TopTools_DataMapOfShapeListOfInteger*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
}

bool Macad::Occt::TopTools_DataMapOfShapeListOfInteger::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::TopTools_DataMapOfShapeListOfInteger*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
}

void Macad::Occt::TopTools_DataMapOfShapeListOfInteger::Clear(bool doReleaseMemory)
{
	((::TopTools_DataMapOfShapeListOfInteger*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopTools_DataMapOfShapeListOfInteger::Clear()
{
	((::TopTools_DataMapOfShapeListOfInteger*)_NativeInstance)->Clear(true);
}

void Macad::Occt::TopTools_DataMapOfShapeListOfInteger::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TopTools_DataMapOfShapeListOfInteger*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::TopTools_DataMapOfShapeListOfInteger::Size()
{
	return ((::TopTools_DataMapOfShapeListOfInteger*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeListOfShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_DataMapOfShapeListOfShape::TopTools_DataMapOfShapeListOfShape()
	: BaseClass<::TopTools_DataMapOfShapeListOfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_DataMapOfShapeListOfShape();
}

Macad::Occt::TopTools_DataMapOfShapeListOfShape::TopTools_DataMapOfShapeListOfShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TopTools_DataMapOfShapeListOfShape>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TopTools_DataMapOfShapeListOfShape(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TopTools_DataMapOfShapeListOfShape::TopTools_DataMapOfShapeListOfShape(int theNbBuckets)
	: BaseClass<::TopTools_DataMapOfShapeListOfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_DataMapOfShapeListOfShape(theNbBuckets, 0L);
}

Macad::Occt::TopTools_DataMapOfShapeListOfShape::TopTools_DataMapOfShapeListOfShape(Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theOther)
	: BaseClass<::TopTools_DataMapOfShapeListOfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_DataMapOfShapeListOfShape(*(::TopTools_DataMapOfShapeListOfShape*)theOther->NativeInstance);
}

void Macad::Occt::TopTools_DataMapOfShapeListOfShape::Exchange(Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theOther)
{
	((::TopTools_DataMapOfShapeListOfShape*)_NativeInstance)->Exchange(*(::TopTools_DataMapOfShapeListOfShape*)theOther->NativeInstance);
}

Macad::Occt::TopTools_DataMapOfShapeListOfShape^ Macad::Occt::TopTools_DataMapOfShapeListOfShape::Assign(Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theOther)
{
	::TopTools_DataMapOfShapeListOfShape* _result = new ::TopTools_DataMapOfShapeListOfShape();
	*_result = ((::TopTools_DataMapOfShapeListOfShape*)_NativeInstance)->Assign(*(::TopTools_DataMapOfShapeListOfShape*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_DataMapOfShapeListOfShape(_result);
}

bool Macad::Occt::TopTools_DataMapOfShapeListOfShape::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::TopTools_DataMapOfShapeListOfShape*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
}

bool Macad::Occt::TopTools_DataMapOfShapeListOfShape::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::TopTools_DataMapOfShapeListOfShape*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
}

void Macad::Occt::TopTools_DataMapOfShapeListOfShape::Clear(bool doReleaseMemory)
{
	((::TopTools_DataMapOfShapeListOfShape*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopTools_DataMapOfShapeListOfShape::Clear()
{
	((::TopTools_DataMapOfShapeListOfShape*)_NativeInstance)->Clear(true);
}

void Macad::Occt::TopTools_DataMapOfShapeListOfShape::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TopTools_DataMapOfShapeListOfShape*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::TopTools_DataMapOfShapeListOfShape::Size()
{
	return ((::TopTools_DataMapOfShapeListOfShape*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeReal
//---------------------------------------------------------------------

Macad::Occt::TopTools_DataMapOfShapeReal::TopTools_DataMapOfShapeReal()
	: BaseClass<::TopTools_DataMapOfShapeReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_DataMapOfShapeReal();
}

Macad::Occt::TopTools_DataMapOfShapeReal::TopTools_DataMapOfShapeReal(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TopTools_DataMapOfShapeReal>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TopTools_DataMapOfShapeReal(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TopTools_DataMapOfShapeReal::TopTools_DataMapOfShapeReal(int theNbBuckets)
	: BaseClass<::TopTools_DataMapOfShapeReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_DataMapOfShapeReal(theNbBuckets, 0L);
}

Macad::Occt::TopTools_DataMapOfShapeReal::TopTools_DataMapOfShapeReal(Macad::Occt::TopTools_DataMapOfShapeReal^ theOther)
	: BaseClass<::TopTools_DataMapOfShapeReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_DataMapOfShapeReal(*(::TopTools_DataMapOfShapeReal*)theOther->NativeInstance);
}

void Macad::Occt::TopTools_DataMapOfShapeReal::Exchange(Macad::Occt::TopTools_DataMapOfShapeReal^ theOther)
{
	((::TopTools_DataMapOfShapeReal*)_NativeInstance)->Exchange(*(::TopTools_DataMapOfShapeReal*)theOther->NativeInstance);
}

Macad::Occt::TopTools_DataMapOfShapeReal^ Macad::Occt::TopTools_DataMapOfShapeReal::Assign(Macad::Occt::TopTools_DataMapOfShapeReal^ theOther)
{
	::TopTools_DataMapOfShapeReal* _result = new ::TopTools_DataMapOfShapeReal();
	*_result = ((::TopTools_DataMapOfShapeReal*)_NativeInstance)->Assign(*(::TopTools_DataMapOfShapeReal*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_DataMapOfShapeReal(_result);
}

double Macad::Occt::TopTools_DataMapOfShapeReal::Bound(Macad::Occt::TopoDS_Shape^ theKey, double theItem)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

bool Macad::Occt::TopTools_DataMapOfShapeReal::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::TopTools_DataMapOfShapeReal*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
}

bool Macad::Occt::TopTools_DataMapOfShapeReal::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::TopTools_DataMapOfShapeReal*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
}

double Macad::Occt::TopTools_DataMapOfShapeReal::Seek(Macad::Occt::TopoDS_Shape^ theKey)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

double Macad::Occt::TopTools_DataMapOfShapeReal::Find(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::TopTools_DataMapOfShapeReal*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance);
}

bool Macad::Occt::TopTools_DataMapOfShapeReal::Find(Macad::Occt::TopoDS_Shape^ theKey, double% theValue)
{
	pin_ptr<double> pp_theValue = &theValue;
	return ((::TopTools_DataMapOfShapeReal*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance, *(double*)pp_theValue);
}

double Macad::Occt::TopTools_DataMapOfShapeReal::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

double Macad::Occt::TopTools_DataMapOfShapeReal::ChangeFind(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::TopTools_DataMapOfShapeReal*)_NativeInstance)->ChangeFind(*(::TopoDS_Shape*)theKey->NativeInstance);
}

void Macad::Occt::TopTools_DataMapOfShapeReal::Clear(bool doReleaseMemory)
{
	((::TopTools_DataMapOfShapeReal*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopTools_DataMapOfShapeReal::Clear()
{
	((::TopTools_DataMapOfShapeReal*)_NativeInstance)->Clear(true);
}

void Macad::Occt::TopTools_DataMapOfShapeReal::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TopTools_DataMapOfShapeReal*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::TopTools_DataMapOfShapeReal::Size()
{
	return ((::TopTools_DataMapOfShapeReal*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  TopTools_SequenceOfShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_SequenceOfShape::TopTools_SequenceOfShape()
	: BaseClass<::TopTools_SequenceOfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_SequenceOfShape();
}

Macad::Occt::TopTools_SequenceOfShape::TopTools_SequenceOfShape(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TopTools_SequenceOfShape>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TopTools_SequenceOfShape(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TopTools_SequenceOfShape::TopTools_SequenceOfShape(Macad::Occt::TopTools_SequenceOfShape^ theOther)
	: BaseClass<::TopTools_SequenceOfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_SequenceOfShape(*(::TopTools_SequenceOfShape*)theOther->NativeInstance);
}

int Macad::Occt::TopTools_SequenceOfShape::Size()
{
	return ((::TopTools_SequenceOfShape*)_NativeInstance)->Size();
}

int Macad::Occt::TopTools_SequenceOfShape::Length()
{
	return ((::TopTools_SequenceOfShape*)_NativeInstance)->Length();
}

int Macad::Occt::TopTools_SequenceOfShape::Lower()
{
	return ((::TopTools_SequenceOfShape*)_NativeInstance)->Lower();
}

int Macad::Occt::TopTools_SequenceOfShape::Upper()
{
	return ((::TopTools_SequenceOfShape*)_NativeInstance)->Upper();
}

bool Macad::Occt::TopTools_SequenceOfShape::IsEmpty()
{
	return ((::TopTools_SequenceOfShape*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TopTools_SequenceOfShape::Reverse()
{
	((::TopTools_SequenceOfShape*)_NativeInstance)->Reverse();
}

void Macad::Occt::TopTools_SequenceOfShape::Exchange(int I, int J)
{
	((::TopTools_SequenceOfShape*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TopTools_SequenceOfShape::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TopTools_SequenceOfShape*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TopTools_SequenceOfShape::Clear()
{
	((::TopTools_SequenceOfShape*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TopTools_SequenceOfShape^ Macad::Occt::TopTools_SequenceOfShape::Assign(Macad::Occt::TopTools_SequenceOfShape^ theOther)
{
	::TopTools_SequenceOfShape* _result = new ::TopTools_SequenceOfShape();
	*_result = ((::TopTools_SequenceOfShape*)_NativeInstance)->Assign(*(::TopTools_SequenceOfShape*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_SequenceOfShape(_result);
}

void Macad::Occt::TopTools_SequenceOfShape::Remove(int theIndex)
{
	((::TopTools_SequenceOfShape*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TopTools_SequenceOfShape::Remove(int theFromIndex, int theToIndex)
{
	((::TopTools_SequenceOfShape*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TopTools_SequenceOfShape::Append(Macad::Occt::TopoDS_Shape^ theItem)
{
	((::TopTools_SequenceOfShape*)_NativeInstance)->Append(*(::TopoDS_Shape*)theItem->NativeInstance);
}

void Macad::Occt::TopTools_SequenceOfShape::Append(Macad::Occt::TopTools_SequenceOfShape^ theSeq)
{
	((::TopTools_SequenceOfShape*)_NativeInstance)->Append(*(::TopTools_SequenceOfShape*)theSeq->NativeInstance);
}

void Macad::Occt::TopTools_SequenceOfShape::Prepend(Macad::Occt::TopoDS_Shape^ theItem)
{
	((::TopTools_SequenceOfShape*)_NativeInstance)->Prepend(*(::TopoDS_Shape*)theItem->NativeInstance);
}

void Macad::Occt::TopTools_SequenceOfShape::Prepend(Macad::Occt::TopTools_SequenceOfShape^ theSeq)
{
	((::TopTools_SequenceOfShape*)_NativeInstance)->Prepend(*(::TopTools_SequenceOfShape*)theSeq->NativeInstance);
}

void Macad::Occt::TopTools_SequenceOfShape::InsertBefore(int theIndex, Macad::Occt::TopoDS_Shape^ theItem)
{
	((::TopTools_SequenceOfShape*)_NativeInstance)->InsertBefore(theIndex, *(::TopoDS_Shape*)theItem->NativeInstance);
}

void Macad::Occt::TopTools_SequenceOfShape::InsertBefore(int theIndex, Macad::Occt::TopTools_SequenceOfShape^ theSeq)
{
	((::TopTools_SequenceOfShape*)_NativeInstance)->InsertBefore(theIndex, *(::TopTools_SequenceOfShape*)theSeq->NativeInstance);
}

void Macad::Occt::TopTools_SequenceOfShape::InsertAfter(int theIndex, Macad::Occt::TopTools_SequenceOfShape^ theSeq)
{
	((::TopTools_SequenceOfShape*)_NativeInstance)->InsertAfter(theIndex, *(::TopTools_SequenceOfShape*)theSeq->NativeInstance);
}

void Macad::Occt::TopTools_SequenceOfShape::InsertAfter(int theIndex, Macad::Occt::TopoDS_Shape^ theItem)
{
	((::TopTools_SequenceOfShape*)_NativeInstance)->InsertAfter(theIndex, *(::TopoDS_Shape*)theItem->NativeInstance);
}

void Macad::Occt::TopTools_SequenceOfShape::Split(int theIndex, Macad::Occt::TopTools_SequenceOfShape^ theSeq)
{
	((::TopTools_SequenceOfShape*)_NativeInstance)->Split(theIndex, *(::TopTools_SequenceOfShape*)theSeq->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_SequenceOfShape::First()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::TopTools_SequenceOfShape*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_SequenceOfShape::ChangeFirst()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::TopTools_SequenceOfShape*)_NativeInstance)->ChangeFirst();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_SequenceOfShape::Last()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::TopTools_SequenceOfShape*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_SequenceOfShape::ChangeLast()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::TopTools_SequenceOfShape*)_NativeInstance)->ChangeLast();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_SequenceOfShape::Value(int theIndex)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::TopTools_SequenceOfShape*)_NativeInstance)->Value(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_SequenceOfShape::ChangeValue(int theIndex)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::TopTools_SequenceOfShape*)_NativeInstance)->ChangeValue(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::TopTools_SequenceOfShape::SetValue(int theIndex, Macad::Occt::TopoDS_Shape^ theItem)
{
	((::TopTools_SequenceOfShape*)_NativeInstance)->SetValue(theIndex, *(::TopoDS_Shape*)theItem->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeSequenceOfShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape::TopTools_DataMapOfShapeSequenceOfShape()
	: BaseClass<::TopTools_DataMapOfShapeSequenceOfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_DataMapOfShapeSequenceOfShape();
}

Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape::TopTools_DataMapOfShapeSequenceOfShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TopTools_DataMapOfShapeSequenceOfShape>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TopTools_DataMapOfShapeSequenceOfShape(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape::TopTools_DataMapOfShapeSequenceOfShape(int theNbBuckets)
	: BaseClass<::TopTools_DataMapOfShapeSequenceOfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_DataMapOfShapeSequenceOfShape(theNbBuckets, 0L);
}

Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape::TopTools_DataMapOfShapeSequenceOfShape(Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape^ theOther)
	: BaseClass<::TopTools_DataMapOfShapeSequenceOfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_DataMapOfShapeSequenceOfShape(*(::TopTools_DataMapOfShapeSequenceOfShape*)theOther->NativeInstance);
}

void Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape::Exchange(Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape^ theOther)
{
	((::TopTools_DataMapOfShapeSequenceOfShape*)_NativeInstance)->Exchange(*(::TopTools_DataMapOfShapeSequenceOfShape*)theOther->NativeInstance);
}

Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape^ Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape::Assign(Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape^ theOther)
{
	::TopTools_DataMapOfShapeSequenceOfShape* _result = new ::TopTools_DataMapOfShapeSequenceOfShape();
	*_result = ((::TopTools_DataMapOfShapeSequenceOfShape*)_NativeInstance)->Assign(*(::TopTools_DataMapOfShapeSequenceOfShape*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape(_result);
}

bool Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::TopTools_DataMapOfShapeSequenceOfShape*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
}

bool Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::TopTools_DataMapOfShapeSequenceOfShape*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
}

void Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape::Clear(bool doReleaseMemory)
{
	((::TopTools_DataMapOfShapeSequenceOfShape*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape::Clear()
{
	((::TopTools_DataMapOfShapeSequenceOfShape*)_NativeInstance)->Clear(true);
}

void Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TopTools_DataMapOfShapeSequenceOfShape*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape::Size()
{
	return ((::TopTools_DataMapOfShapeSequenceOfShape*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_DataMapOfShapeShape::TopTools_DataMapOfShapeShape()
	: BaseClass<::TopTools_DataMapOfShapeShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_DataMapOfShapeShape();
}

Macad::Occt::TopTools_DataMapOfShapeShape::TopTools_DataMapOfShapeShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TopTools_DataMapOfShapeShape>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TopTools_DataMapOfShapeShape(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TopTools_DataMapOfShapeShape::TopTools_DataMapOfShapeShape(int theNbBuckets)
	: BaseClass<::TopTools_DataMapOfShapeShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_DataMapOfShapeShape(theNbBuckets, 0L);
}

Macad::Occt::TopTools_DataMapOfShapeShape::TopTools_DataMapOfShapeShape(Macad::Occt::TopTools_DataMapOfShapeShape^ theOther)
	: BaseClass<::TopTools_DataMapOfShapeShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_DataMapOfShapeShape(*(::TopTools_DataMapOfShapeShape*)theOther->NativeInstance);
}

void Macad::Occt::TopTools_DataMapOfShapeShape::Exchange(Macad::Occt::TopTools_DataMapOfShapeShape^ theOther)
{
	((::TopTools_DataMapOfShapeShape*)_NativeInstance)->Exchange(*(::TopTools_DataMapOfShapeShape*)theOther->NativeInstance);
}

Macad::Occt::TopTools_DataMapOfShapeShape^ Macad::Occt::TopTools_DataMapOfShapeShape::Assign(Macad::Occt::TopTools_DataMapOfShapeShape^ theOther)
{
	::TopTools_DataMapOfShapeShape* _result = new ::TopTools_DataMapOfShapeShape();
	*_result = ((::TopTools_DataMapOfShapeShape*)_NativeInstance)->Assign(*(::TopTools_DataMapOfShapeShape*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_DataMapOfShapeShape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfShapeShape::Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopoDS_Shape^ theItem)
{
	::TopoDS_Shape* _result;
	_result = (::TopoDS_Shape*)((::TopTools_DataMapOfShapeShape*)_NativeInstance)->Bound(*(::TopoDS_Shape*)theKey->NativeInstance, *(::TopoDS_Shape*)theItem->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::TopTools_DataMapOfShapeShape::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::TopTools_DataMapOfShapeShape*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
}

bool Macad::Occt::TopTools_DataMapOfShapeShape::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::TopTools_DataMapOfShapeShape*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfShapeShape::Seek(Macad::Occt::TopoDS_Shape^ theKey)
{
	::TopoDS_Shape* _result;
	_result = (::TopoDS_Shape*)((::TopTools_DataMapOfShapeShape*)_NativeInstance)->Seek(*(::TopoDS_Shape*)theKey->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfShapeShape::Find(Macad::Occt::TopoDS_Shape^ theKey)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::TopTools_DataMapOfShapeShape*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::TopTools_DataMapOfShapeShape::Find(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopoDS_Shape^ theValue)
{
	return ((::TopTools_DataMapOfShapeShape*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance, *(::TopoDS_Shape*)theValue->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfShapeShape::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey)
{
	::TopoDS_Shape* _result;
	_result = (::TopoDS_Shape*)((::TopTools_DataMapOfShapeShape*)_NativeInstance)->ChangeSeek(*(::TopoDS_Shape*)theKey->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfShapeShape::ChangeFind(Macad::Occt::TopoDS_Shape^ theKey)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::TopTools_DataMapOfShapeShape*)_NativeInstance)->ChangeFind(*(::TopoDS_Shape*)theKey->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::TopTools_DataMapOfShapeShape::Clear(bool doReleaseMemory)
{
	((::TopTools_DataMapOfShapeShape*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopTools_DataMapOfShapeShape::Clear()
{
	((::TopTools_DataMapOfShapeShape*)_NativeInstance)->Clear(true);
}

void Macad::Occt::TopTools_DataMapOfShapeShape::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TopTools_DataMapOfShapeShape*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::TopTools_DataMapOfShapeShape::Size()
{
	return ((::TopTools_DataMapOfShapeShape*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeBox
//---------------------------------------------------------------------

Macad::Occt::TopTools_DataMapOfShapeBox::TopTools_DataMapOfShapeBox()
	: BaseClass<::TopTools_DataMapOfShapeBox>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_DataMapOfShapeBox();
}

Macad::Occt::TopTools_DataMapOfShapeBox::TopTools_DataMapOfShapeBox(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TopTools_DataMapOfShapeBox>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TopTools_DataMapOfShapeBox(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TopTools_DataMapOfShapeBox::TopTools_DataMapOfShapeBox(int theNbBuckets)
	: BaseClass<::TopTools_DataMapOfShapeBox>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_DataMapOfShapeBox(theNbBuckets, 0L);
}

Macad::Occt::TopTools_DataMapOfShapeBox::TopTools_DataMapOfShapeBox(Macad::Occt::TopTools_DataMapOfShapeBox^ theOther)
	: BaseClass<::TopTools_DataMapOfShapeBox>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_DataMapOfShapeBox(*(::TopTools_DataMapOfShapeBox*)theOther->NativeInstance);
}

void Macad::Occt::TopTools_DataMapOfShapeBox::Exchange(Macad::Occt::TopTools_DataMapOfShapeBox^ theOther)
{
	((::TopTools_DataMapOfShapeBox*)_NativeInstance)->Exchange(*(::TopTools_DataMapOfShapeBox*)theOther->NativeInstance);
}

Macad::Occt::TopTools_DataMapOfShapeBox^ Macad::Occt::TopTools_DataMapOfShapeBox::Assign(Macad::Occt::TopTools_DataMapOfShapeBox^ theOther)
{
	::TopTools_DataMapOfShapeBox* _result = new ::TopTools_DataMapOfShapeBox();
	*_result = ((::TopTools_DataMapOfShapeBox*)_NativeInstance)->Assign(*(::TopTools_DataMapOfShapeBox*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_DataMapOfShapeBox(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::TopTools_DataMapOfShapeBox::Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::Bnd_Box^ theItem)
{
	::Bnd_Box* _result;
	_result = (::Bnd_Box*)((::TopTools_DataMapOfShapeBox*)_NativeInstance)->Bound(*(::TopoDS_Shape*)theKey->NativeInstance, *(::Bnd_Box*)theItem->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

bool Macad::Occt::TopTools_DataMapOfShapeBox::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::TopTools_DataMapOfShapeBox*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
}

bool Macad::Occt::TopTools_DataMapOfShapeBox::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::TopTools_DataMapOfShapeBox*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
}

Macad::Occt::Bnd_Box^ Macad::Occt::TopTools_DataMapOfShapeBox::Seek(Macad::Occt::TopoDS_Shape^ theKey)
{
	::Bnd_Box* _result;
	_result = (::Bnd_Box*)((::TopTools_DataMapOfShapeBox*)_NativeInstance)->Seek(*(::TopoDS_Shape*)theKey->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::TopTools_DataMapOfShapeBox::Find(Macad::Occt::TopoDS_Shape^ theKey)
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result =  (::Bnd_Box)((::TopTools_DataMapOfShapeBox*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

bool Macad::Occt::TopTools_DataMapOfShapeBox::Find(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::Bnd_Box^ theValue)
{
	return ((::TopTools_DataMapOfShapeBox*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance, *(::Bnd_Box*)theValue->NativeInstance);
}

Macad::Occt::Bnd_Box^ Macad::Occt::TopTools_DataMapOfShapeBox::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey)
{
	::Bnd_Box* _result;
	_result = (::Bnd_Box*)((::TopTools_DataMapOfShapeBox*)_NativeInstance)->ChangeSeek(*(::TopoDS_Shape*)theKey->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::TopTools_DataMapOfShapeBox::ChangeFind(Macad::Occt::TopoDS_Shape^ theKey)
{
	::Bnd_Box* _result = new ::Bnd_Box();
	*_result = ((::TopTools_DataMapOfShapeBox*)_NativeInstance)->ChangeFind(*(::TopoDS_Shape*)theKey->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

void Macad::Occt::TopTools_DataMapOfShapeBox::Clear(bool doReleaseMemory)
{
	((::TopTools_DataMapOfShapeBox*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopTools_DataMapOfShapeBox::Clear()
{
	((::TopTools_DataMapOfShapeBox*)_NativeInstance)->Clear(true);
}

void Macad::Occt::TopTools_DataMapOfShapeBox::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TopTools_DataMapOfShapeBox*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::TopTools_DataMapOfShapeBox::Size()
{
	return ((::TopTools_DataMapOfShapeBox*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  TopTools_IndexedDataMapOfShapeListOfShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::TopTools_IndexedDataMapOfShapeListOfShape()
	: BaseClass<::TopTools_IndexedDataMapOfShapeListOfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_IndexedDataMapOfShapeListOfShape();
}

Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::TopTools_IndexedDataMapOfShapeListOfShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TopTools_IndexedDataMapOfShapeListOfShape>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TopTools_IndexedDataMapOfShapeListOfShape(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::TopTools_IndexedDataMapOfShapeListOfShape(int theNbBuckets)
	: BaseClass<::TopTools_IndexedDataMapOfShapeListOfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_IndexedDataMapOfShapeListOfShape(theNbBuckets, 0L);
}

Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::TopTools_IndexedDataMapOfShapeListOfShape(Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape^ theOther)
	: BaseClass<::TopTools_IndexedDataMapOfShapeListOfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_IndexedDataMapOfShapeListOfShape(*(::TopTools_IndexedDataMapOfShapeListOfShape*)theOther->NativeInstance);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::Exchange(Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape^ theOther)
{
	((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->Exchange(*(::TopTools_IndexedDataMapOfShapeListOfShape*)theOther->NativeInstance);
}

int Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::Add(Macad::Occt::TopoDS_Shape^ theKey1, Macad::Occt::TopTools_ListOfShape^ theItem)
{
	return ((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->Add(*(::TopoDS_Shape*)theKey1->NativeInstance, *(::TopTools_ListOfShape*)theItem->NativeInstance);
}

bool Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::Contains(Macad::Occt::TopoDS_Shape^ theKey1)
{
	return ((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->Contains(*(::TopoDS_Shape*)theKey1->NativeInstance);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::Substitute(int theIndex, Macad::Occt::TopoDS_Shape^ theKey1, Macad::Occt::TopTools_ListOfShape^ theItem)
{
	((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->Substitute(theIndex, *(::TopoDS_Shape*)theKey1->NativeInstance, *(::TopTools_ListOfShape*)theItem->NativeInstance);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::Swap(int theIndex1, int theIndex2)
{
	((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->Swap(theIndex1, theIndex2);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::RemoveLast()
{
	((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->RemoveLast();
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::RemoveFromIndex(int theIndex)
{
	((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->RemoveFromIndex(theIndex);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::RemoveKey(Macad::Occt::TopoDS_Shape^ theKey1)
{
	((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->RemoveKey(*(::TopoDS_Shape*)theKey1->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::FindKey(int theIndex)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->FindKey(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::FindFromIndex(int theIndex)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->FindFromIndex(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::ChangeFromIndex(int theIndex)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = ((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->ChangeFromIndex(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

int Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::FindIndex(Macad::Occt::TopoDS_Shape^ theKey1)
{
	return ((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->FindIndex(*(::TopoDS_Shape*)theKey1->NativeInstance);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::FindFromKey(Macad::Occt::TopoDS_Shape^ theKey1)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->FindFromKey(*(::TopoDS_Shape*)theKey1->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::ChangeFromKey(Macad::Occt::TopoDS_Shape^ theKey1)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result = ((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->ChangeFromKey(*(::TopoDS_Shape*)theKey1->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::Seek(Macad::Occt::TopoDS_Shape^ theKey1)
{
	::TopTools_ListOfShape* _result;
	_result = (::TopTools_ListOfShape*)((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->Seek(*(::TopoDS_Shape*)theKey1->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey1)
{
	::TopTools_ListOfShape* _result;
	_result = (::TopTools_ListOfShape*)((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->ChangeSeek(*(::TopoDS_Shape*)theKey1->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

bool Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::FindFromKey(Macad::Occt::TopoDS_Shape^ theKey1, Macad::Occt::TopTools_ListOfShape^ theValue)
{
	return ((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->FindFromKey(*(::TopoDS_Shape*)theKey1->NativeInstance, *(::TopTools_ListOfShape*)theValue->NativeInstance);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::Clear(bool doReleaseMemory)
{
	((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::Clear()
{
	((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->Clear(true);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::Size()
{
	return ((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  TopTools_IndexedDataMapOfShapeReal
//---------------------------------------------------------------------

Macad::Occt::TopTools_IndexedDataMapOfShapeReal::TopTools_IndexedDataMapOfShapeReal()
	: BaseClass<::TopTools_IndexedDataMapOfShapeReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_IndexedDataMapOfShapeReal();
}

Macad::Occt::TopTools_IndexedDataMapOfShapeReal::TopTools_IndexedDataMapOfShapeReal(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TopTools_IndexedDataMapOfShapeReal>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TopTools_IndexedDataMapOfShapeReal(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TopTools_IndexedDataMapOfShapeReal::TopTools_IndexedDataMapOfShapeReal(int theNbBuckets)
	: BaseClass<::TopTools_IndexedDataMapOfShapeReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_IndexedDataMapOfShapeReal(theNbBuckets, 0L);
}

Macad::Occt::TopTools_IndexedDataMapOfShapeReal::TopTools_IndexedDataMapOfShapeReal(Macad::Occt::TopTools_IndexedDataMapOfShapeReal^ theOther)
	: BaseClass<::TopTools_IndexedDataMapOfShapeReal>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_IndexedDataMapOfShapeReal(*(::TopTools_IndexedDataMapOfShapeReal*)theOther->NativeInstance);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeReal::Exchange(Macad::Occt::TopTools_IndexedDataMapOfShapeReal^ theOther)
{
	((::TopTools_IndexedDataMapOfShapeReal*)_NativeInstance)->Exchange(*(::TopTools_IndexedDataMapOfShapeReal*)theOther->NativeInstance);
}

int Macad::Occt::TopTools_IndexedDataMapOfShapeReal::Add(Macad::Occt::TopoDS_Shape^ theKey1, double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	return ((::TopTools_IndexedDataMapOfShapeReal*)_NativeInstance)->Add(*(::TopoDS_Shape*)theKey1->NativeInstance, *(double*)pp_theItem);
}

bool Macad::Occt::TopTools_IndexedDataMapOfShapeReal::Contains(Macad::Occt::TopoDS_Shape^ theKey1)
{
	return ((::TopTools_IndexedDataMapOfShapeReal*)_NativeInstance)->Contains(*(::TopoDS_Shape*)theKey1->NativeInstance);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeReal::Substitute(int theIndex, Macad::Occt::TopoDS_Shape^ theKey1, double theItem)
{
	pin_ptr<double> pp_theItem = &theItem;
	((::TopTools_IndexedDataMapOfShapeReal*)_NativeInstance)->Substitute(theIndex, *(::TopoDS_Shape*)theKey1->NativeInstance, *(double*)pp_theItem);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeReal::Swap(int theIndex1, int theIndex2)
{
	((::TopTools_IndexedDataMapOfShapeReal*)_NativeInstance)->Swap(theIndex1, theIndex2);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeReal::RemoveLast()
{
	((::TopTools_IndexedDataMapOfShapeReal*)_NativeInstance)->RemoveLast();
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeReal::RemoveFromIndex(int theIndex)
{
	((::TopTools_IndexedDataMapOfShapeReal*)_NativeInstance)->RemoveFromIndex(theIndex);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeReal::RemoveKey(Macad::Occt::TopoDS_Shape^ theKey1)
{
	((::TopTools_IndexedDataMapOfShapeReal*)_NativeInstance)->RemoveKey(*(::TopoDS_Shape*)theKey1->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_IndexedDataMapOfShapeReal::FindKey(int theIndex)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::TopTools_IndexedDataMapOfShapeReal*)_NativeInstance)->FindKey(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

double Macad::Occt::TopTools_IndexedDataMapOfShapeReal::FindFromIndex(int theIndex)
{
	return ((::TopTools_IndexedDataMapOfShapeReal*)_NativeInstance)->FindFromIndex(theIndex);
}

double Macad::Occt::TopTools_IndexedDataMapOfShapeReal::ChangeFromIndex(int theIndex)
{
	return ((::TopTools_IndexedDataMapOfShapeReal*)_NativeInstance)->ChangeFromIndex(theIndex);
}

int Macad::Occt::TopTools_IndexedDataMapOfShapeReal::FindIndex(Macad::Occt::TopoDS_Shape^ theKey1)
{
	return ((::TopTools_IndexedDataMapOfShapeReal*)_NativeInstance)->FindIndex(*(::TopoDS_Shape*)theKey1->NativeInstance);
}

double Macad::Occt::TopTools_IndexedDataMapOfShapeReal::FindFromKey(Macad::Occt::TopoDS_Shape^ theKey1)
{
	return ((::TopTools_IndexedDataMapOfShapeReal*)_NativeInstance)->FindFromKey(*(::TopoDS_Shape*)theKey1->NativeInstance);
}

double Macad::Occt::TopTools_IndexedDataMapOfShapeReal::ChangeFromKey(Macad::Occt::TopoDS_Shape^ theKey1)
{
	return ((::TopTools_IndexedDataMapOfShapeReal*)_NativeInstance)->ChangeFromKey(*(::TopoDS_Shape*)theKey1->NativeInstance);
}

double Macad::Occt::TopTools_IndexedDataMapOfShapeReal::Seek(Macad::Occt::TopoDS_Shape^ theKey1)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

double Macad::Occt::TopTools_IndexedDataMapOfShapeReal::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey1)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

bool Macad::Occt::TopTools_IndexedDataMapOfShapeReal::FindFromKey(Macad::Occt::TopoDS_Shape^ theKey1, double% theValue)
{
	pin_ptr<double> pp_theValue = &theValue;
	return ((::TopTools_IndexedDataMapOfShapeReal*)_NativeInstance)->FindFromKey(*(::TopoDS_Shape*)theKey1->NativeInstance, *(double*)pp_theValue);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeReal::Clear(bool doReleaseMemory)
{
	((::TopTools_IndexedDataMapOfShapeReal*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeReal::Clear()
{
	((::TopTools_IndexedDataMapOfShapeReal*)_NativeInstance)->Clear(true);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeReal::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TopTools_IndexedDataMapOfShapeReal*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::TopTools_IndexedDataMapOfShapeReal::Size()
{
	return ((::TopTools_IndexedDataMapOfShapeReal*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  TopTools_IndexedDataMapOfShapeShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_IndexedDataMapOfShapeShape::TopTools_IndexedDataMapOfShapeShape()
	: BaseClass<::TopTools_IndexedDataMapOfShapeShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_IndexedDataMapOfShapeShape();
}

Macad::Occt::TopTools_IndexedDataMapOfShapeShape::TopTools_IndexedDataMapOfShapeShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TopTools_IndexedDataMapOfShapeShape>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TopTools_IndexedDataMapOfShapeShape(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TopTools_IndexedDataMapOfShapeShape::TopTools_IndexedDataMapOfShapeShape(int theNbBuckets)
	: BaseClass<::TopTools_IndexedDataMapOfShapeShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_IndexedDataMapOfShapeShape(theNbBuckets, 0L);
}

Macad::Occt::TopTools_IndexedDataMapOfShapeShape::TopTools_IndexedDataMapOfShapeShape(Macad::Occt::TopTools_IndexedDataMapOfShapeShape^ theOther)
	: BaseClass<::TopTools_IndexedDataMapOfShapeShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_IndexedDataMapOfShapeShape(*(::TopTools_IndexedDataMapOfShapeShape*)theOther->NativeInstance);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeShape::Exchange(Macad::Occt::TopTools_IndexedDataMapOfShapeShape^ theOther)
{
	((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->Exchange(*(::TopTools_IndexedDataMapOfShapeShape*)theOther->NativeInstance);
}

int Macad::Occt::TopTools_IndexedDataMapOfShapeShape::Add(Macad::Occt::TopoDS_Shape^ theKey1, Macad::Occt::TopoDS_Shape^ theItem)
{
	return ((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->Add(*(::TopoDS_Shape*)theKey1->NativeInstance, *(::TopoDS_Shape*)theItem->NativeInstance);
}

bool Macad::Occt::TopTools_IndexedDataMapOfShapeShape::Contains(Macad::Occt::TopoDS_Shape^ theKey1)
{
	return ((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->Contains(*(::TopoDS_Shape*)theKey1->NativeInstance);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeShape::Substitute(int theIndex, Macad::Occt::TopoDS_Shape^ theKey1, Macad::Occt::TopoDS_Shape^ theItem)
{
	((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->Substitute(theIndex, *(::TopoDS_Shape*)theKey1->NativeInstance, *(::TopoDS_Shape*)theItem->NativeInstance);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeShape::Swap(int theIndex1, int theIndex2)
{
	((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->Swap(theIndex1, theIndex2);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeShape::RemoveLast()
{
	((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->RemoveLast();
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeShape::RemoveFromIndex(int theIndex)
{
	((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->RemoveFromIndex(theIndex);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeShape::RemoveKey(Macad::Occt::TopoDS_Shape^ theKey1)
{
	((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->RemoveKey(*(::TopoDS_Shape*)theKey1->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_IndexedDataMapOfShapeShape::FindKey(int theIndex)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->FindKey(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_IndexedDataMapOfShapeShape::FindFromIndex(int theIndex)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->FindFromIndex(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_IndexedDataMapOfShapeShape::ChangeFromIndex(int theIndex)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->ChangeFromIndex(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

int Macad::Occt::TopTools_IndexedDataMapOfShapeShape::FindIndex(Macad::Occt::TopoDS_Shape^ theKey1)
{
	return ((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->FindIndex(*(::TopoDS_Shape*)theKey1->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_IndexedDataMapOfShapeShape::FindFromKey(Macad::Occt::TopoDS_Shape^ theKey1)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->FindFromKey(*(::TopoDS_Shape*)theKey1->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_IndexedDataMapOfShapeShape::ChangeFromKey(Macad::Occt::TopoDS_Shape^ theKey1)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->ChangeFromKey(*(::TopoDS_Shape*)theKey1->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_IndexedDataMapOfShapeShape::Seek(Macad::Occt::TopoDS_Shape^ theKey1)
{
	::TopoDS_Shape* _result;
	_result = (::TopoDS_Shape*)((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->Seek(*(::TopoDS_Shape*)theKey1->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_IndexedDataMapOfShapeShape::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey1)
{
	::TopoDS_Shape* _result;
	_result = (::TopoDS_Shape*)((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->ChangeSeek(*(::TopoDS_Shape*)theKey1->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::TopTools_IndexedDataMapOfShapeShape::FindFromKey(Macad::Occt::TopoDS_Shape^ theKey1, Macad::Occt::TopoDS_Shape^ theValue)
{
	return ((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->FindFromKey(*(::TopoDS_Shape*)theKey1->NativeInstance, *(::TopoDS_Shape*)theValue->NativeInstance);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeShape::Clear(bool doReleaseMemory)
{
	((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeShape::Clear()
{
	((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->Clear(true);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeShape::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::TopTools_IndexedDataMapOfShapeShape::Size()
{
	return ((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  TopTools_IndexedMapOfOrientedShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_IndexedMapOfOrientedShape::TopTools_IndexedMapOfOrientedShape()
	: BaseClass<::TopTools_IndexedMapOfOrientedShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_IndexedMapOfOrientedShape();
}

Macad::Occt::TopTools_IndexedMapOfOrientedShape::TopTools_IndexedMapOfOrientedShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TopTools_IndexedMapOfOrientedShape>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TopTools_IndexedMapOfOrientedShape(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TopTools_IndexedMapOfOrientedShape::TopTools_IndexedMapOfOrientedShape(int theNbBuckets)
	: BaseClass<::TopTools_IndexedMapOfOrientedShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_IndexedMapOfOrientedShape(theNbBuckets, 0L);
}

Macad::Occt::TopTools_IndexedMapOfOrientedShape::TopTools_IndexedMapOfOrientedShape(Macad::Occt::TopTools_IndexedMapOfOrientedShape^ theOther)
	: BaseClass<::TopTools_IndexedMapOfOrientedShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_IndexedMapOfOrientedShape(*(::TopTools_IndexedMapOfOrientedShape*)theOther->NativeInstance);
}

void Macad::Occt::TopTools_IndexedMapOfOrientedShape::Exchange(Macad::Occt::TopTools_IndexedMapOfOrientedShape^ theOther)
{
	((::TopTools_IndexedMapOfOrientedShape*)_NativeInstance)->Exchange(*(::TopTools_IndexedMapOfOrientedShape*)theOther->NativeInstance);
}

int Macad::Occt::TopTools_IndexedMapOfOrientedShape::Add(Macad::Occt::TopoDS_Shape^ theKey1)
{
	return ((::TopTools_IndexedMapOfOrientedShape*)_NativeInstance)->Add(*(::TopoDS_Shape*)theKey1->NativeInstance);
}

bool Macad::Occt::TopTools_IndexedMapOfOrientedShape::Contains(Macad::Occt::TopoDS_Shape^ theKey1)
{
	return ((::TopTools_IndexedMapOfOrientedShape*)_NativeInstance)->Contains(*(::TopoDS_Shape*)theKey1->NativeInstance);
}

void Macad::Occt::TopTools_IndexedMapOfOrientedShape::Substitute(int theIndex, Macad::Occt::TopoDS_Shape^ theKey1)
{
	((::TopTools_IndexedMapOfOrientedShape*)_NativeInstance)->Substitute(theIndex, *(::TopoDS_Shape*)theKey1->NativeInstance);
}

void Macad::Occt::TopTools_IndexedMapOfOrientedShape::Swap(int theIndex1, int theIndex2)
{
	((::TopTools_IndexedMapOfOrientedShape*)_NativeInstance)->Swap(theIndex1, theIndex2);
}

void Macad::Occt::TopTools_IndexedMapOfOrientedShape::RemoveLast()
{
	((::TopTools_IndexedMapOfOrientedShape*)_NativeInstance)->RemoveLast();
}

void Macad::Occt::TopTools_IndexedMapOfOrientedShape::RemoveFromIndex(int theIndex)
{
	((::TopTools_IndexedMapOfOrientedShape*)_NativeInstance)->RemoveFromIndex(theIndex);
}

bool Macad::Occt::TopTools_IndexedMapOfOrientedShape::RemoveKey(Macad::Occt::TopoDS_Shape^ theKey1)
{
	return ((::TopTools_IndexedMapOfOrientedShape*)_NativeInstance)->RemoveKey(*(::TopoDS_Shape*)theKey1->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_IndexedMapOfOrientedShape::FindKey(int theIndex)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::TopTools_IndexedMapOfOrientedShape*)_NativeInstance)->FindKey(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

int Macad::Occt::TopTools_IndexedMapOfOrientedShape::FindIndex(Macad::Occt::TopoDS_Shape^ theKey1)
{
	return ((::TopTools_IndexedMapOfOrientedShape*)_NativeInstance)->FindIndex(*(::TopoDS_Shape*)theKey1->NativeInstance);
}

void Macad::Occt::TopTools_IndexedMapOfOrientedShape::Clear(bool doReleaseMemory)
{
	((::TopTools_IndexedMapOfOrientedShape*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopTools_IndexedMapOfOrientedShape::Clear()
{
	((::TopTools_IndexedMapOfOrientedShape*)_NativeInstance)->Clear(true);
}

void Macad::Occt::TopTools_IndexedMapOfOrientedShape::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TopTools_IndexedMapOfOrientedShape*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::TopTools_IndexedMapOfOrientedShape::Size()
{
	return ((::TopTools_IndexedMapOfOrientedShape*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  TopTools_IndexedMapOfShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_IndexedMapOfShape::TopTools_IndexedMapOfShape()
	: BaseClass<::TopTools_IndexedMapOfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_IndexedMapOfShape();
}

Macad::Occt::TopTools_IndexedMapOfShape::TopTools_IndexedMapOfShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TopTools_IndexedMapOfShape>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TopTools_IndexedMapOfShape(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TopTools_IndexedMapOfShape::TopTools_IndexedMapOfShape(int theNbBuckets)
	: BaseClass<::TopTools_IndexedMapOfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_IndexedMapOfShape(theNbBuckets, 0L);
}

Macad::Occt::TopTools_IndexedMapOfShape::TopTools_IndexedMapOfShape(Macad::Occt::TopTools_IndexedMapOfShape^ theOther)
	: BaseClass<::TopTools_IndexedMapOfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_IndexedMapOfShape(*(::TopTools_IndexedMapOfShape*)theOther->NativeInstance);
}

void Macad::Occt::TopTools_IndexedMapOfShape::Exchange(Macad::Occt::TopTools_IndexedMapOfShape^ theOther)
{
	((::TopTools_IndexedMapOfShape*)_NativeInstance)->Exchange(*(::TopTools_IndexedMapOfShape*)theOther->NativeInstance);
}

int Macad::Occt::TopTools_IndexedMapOfShape::Add(Macad::Occt::TopoDS_Shape^ theKey1)
{
	return ((::TopTools_IndexedMapOfShape*)_NativeInstance)->Add(*(::TopoDS_Shape*)theKey1->NativeInstance);
}

bool Macad::Occt::TopTools_IndexedMapOfShape::Contains(Macad::Occt::TopoDS_Shape^ theKey1)
{
	return ((::TopTools_IndexedMapOfShape*)_NativeInstance)->Contains(*(::TopoDS_Shape*)theKey1->NativeInstance);
}

void Macad::Occt::TopTools_IndexedMapOfShape::Substitute(int theIndex, Macad::Occt::TopoDS_Shape^ theKey1)
{
	((::TopTools_IndexedMapOfShape*)_NativeInstance)->Substitute(theIndex, *(::TopoDS_Shape*)theKey1->NativeInstance);
}

void Macad::Occt::TopTools_IndexedMapOfShape::Swap(int theIndex1, int theIndex2)
{
	((::TopTools_IndexedMapOfShape*)_NativeInstance)->Swap(theIndex1, theIndex2);
}

void Macad::Occt::TopTools_IndexedMapOfShape::RemoveLast()
{
	((::TopTools_IndexedMapOfShape*)_NativeInstance)->RemoveLast();
}

void Macad::Occt::TopTools_IndexedMapOfShape::RemoveFromIndex(int theIndex)
{
	((::TopTools_IndexedMapOfShape*)_NativeInstance)->RemoveFromIndex(theIndex);
}

bool Macad::Occt::TopTools_IndexedMapOfShape::RemoveKey(Macad::Occt::TopoDS_Shape^ theKey1)
{
	return ((::TopTools_IndexedMapOfShape*)_NativeInstance)->RemoveKey(*(::TopoDS_Shape*)theKey1->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_IndexedMapOfShape::FindKey(int theIndex)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::TopTools_IndexedMapOfShape*)_NativeInstance)->FindKey(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

int Macad::Occt::TopTools_IndexedMapOfShape::FindIndex(Macad::Occt::TopoDS_Shape^ theKey1)
{
	return ((::TopTools_IndexedMapOfShape*)_NativeInstance)->FindIndex(*(::TopoDS_Shape*)theKey1->NativeInstance);
}

void Macad::Occt::TopTools_IndexedMapOfShape::Clear(bool doReleaseMemory)
{
	((::TopTools_IndexedMapOfShape*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopTools_IndexedMapOfShape::Clear()
{
	((::TopTools_IndexedMapOfShape*)_NativeInstance)->Clear(true);
}

void Macad::Occt::TopTools_IndexedMapOfShape::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TopTools_IndexedMapOfShape*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::TopTools_IndexedMapOfShape::Size()
{
	return ((::TopTools_IndexedMapOfShape*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  TopTools_ListOfListOfShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_ListOfListOfShape::TopTools_ListOfListOfShape()
	: BaseClass<::TopTools_ListOfListOfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_ListOfListOfShape();
}

Macad::Occt::TopTools_ListOfListOfShape::TopTools_ListOfListOfShape(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TopTools_ListOfListOfShape>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TopTools_ListOfListOfShape(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TopTools_ListOfListOfShape::TopTools_ListOfListOfShape(Macad::Occt::TopTools_ListOfListOfShape^ theOther)
	: BaseClass<::TopTools_ListOfListOfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_ListOfListOfShape(*(::TopTools_ListOfListOfShape*)theOther->NativeInstance);
}

int Macad::Occt::TopTools_ListOfListOfShape::Size()
{
	return ((::TopTools_ListOfListOfShape*)_NativeInstance)->Size();
}

Macad::Occt::TopTools_ListOfListOfShape^ Macad::Occt::TopTools_ListOfListOfShape::Assign(Macad::Occt::TopTools_ListOfListOfShape^ theOther)
{
	::TopTools_ListOfListOfShape* _result = new ::TopTools_ListOfListOfShape();
	*_result = ((::TopTools_ListOfListOfShape*)_NativeInstance)->Assign(*(::TopTools_ListOfListOfShape*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfListOfShape(_result);
}

void Macad::Occt::TopTools_ListOfListOfShape::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TopTools_ListOfListOfShape*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TopTools_ListOfListOfShape::Clear()
{
	((::TopTools_ListOfListOfShape*)_NativeInstance)->Clear(0L);
}

void Macad::Occt::TopTools_ListOfListOfShape::Append(Macad::Occt::TopTools_ListOfListOfShape^ theOther)
{
	((::TopTools_ListOfListOfShape*)_NativeInstance)->Append(*(::TopTools_ListOfListOfShape*)theOther->NativeInstance);
}

void Macad::Occt::TopTools_ListOfListOfShape::Prepend(Macad::Occt::TopTools_ListOfListOfShape^ theOther)
{
	((::TopTools_ListOfListOfShape*)_NativeInstance)->Prepend(*(::TopTools_ListOfListOfShape*)theOther->NativeInstance);
}

void Macad::Occt::TopTools_ListOfListOfShape::RemoveFirst()
{
	((::TopTools_ListOfListOfShape*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::TopTools_ListOfListOfShape::Reverse()
{
	((::TopTools_ListOfListOfShape*)_NativeInstance)->Reverse();
}




//---------------------------------------------------------------------
//  Class  TopTools_MapOfOrientedShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_MapOfOrientedShape::TopTools_MapOfOrientedShape()
	: BaseClass<::TopTools_MapOfOrientedShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_MapOfOrientedShape();
}

Macad::Occt::TopTools_MapOfOrientedShape::TopTools_MapOfOrientedShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TopTools_MapOfOrientedShape>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TopTools_MapOfOrientedShape(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TopTools_MapOfOrientedShape::TopTools_MapOfOrientedShape(int theNbBuckets)
	: BaseClass<::TopTools_MapOfOrientedShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_MapOfOrientedShape(theNbBuckets, 0L);
}

Macad::Occt::TopTools_MapOfOrientedShape::TopTools_MapOfOrientedShape(Macad::Occt::TopTools_MapOfOrientedShape^ theOther)
	: BaseClass<::TopTools_MapOfOrientedShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_MapOfOrientedShape(*(::TopTools_MapOfOrientedShape*)theOther->NativeInstance);
}

void Macad::Occt::TopTools_MapOfOrientedShape::Exchange(Macad::Occt::TopTools_MapOfOrientedShape^ theOther)
{
	((::TopTools_MapOfOrientedShape*)_NativeInstance)->Exchange(*(::TopTools_MapOfOrientedShape*)theOther->NativeInstance);
}

Macad::Occt::TopTools_MapOfOrientedShape^ Macad::Occt::TopTools_MapOfOrientedShape::Assign(Macad::Occt::TopTools_MapOfOrientedShape^ theOther)
{
	::TopTools_MapOfOrientedShape* _result = new ::TopTools_MapOfOrientedShape();
	*_result = ((::TopTools_MapOfOrientedShape*)_NativeInstance)->Assign(*(::TopTools_MapOfOrientedShape*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_MapOfOrientedShape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_MapOfOrientedShape::Added(Macad::Occt::TopoDS_Shape^ K)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::TopTools_MapOfOrientedShape*)_NativeInstance)->Added(*(::TopoDS_Shape*)K->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::TopTools_MapOfOrientedShape::Contains(Macad::Occt::TopoDS_Shape^ K)
{
	return ((::TopTools_MapOfOrientedShape*)_NativeInstance)->Contains(*(::TopoDS_Shape*)K->NativeInstance);
}

bool Macad::Occt::TopTools_MapOfOrientedShape::Remove(Macad::Occt::TopoDS_Shape^ K)
{
	return ((::TopTools_MapOfOrientedShape*)_NativeInstance)->Remove(*(::TopoDS_Shape*)K->NativeInstance);
}

void Macad::Occt::TopTools_MapOfOrientedShape::Clear(bool doReleaseMemory)
{
	((::TopTools_MapOfOrientedShape*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopTools_MapOfOrientedShape::Clear()
{
	((::TopTools_MapOfOrientedShape*)_NativeInstance)->Clear(true);
}

void Macad::Occt::TopTools_MapOfOrientedShape::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TopTools_MapOfOrientedShape*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::TopTools_MapOfOrientedShape::Size()
{
	return ((::TopTools_MapOfOrientedShape*)_NativeInstance)->Size();
}

bool Macad::Occt::TopTools_MapOfOrientedShape::IsEqual(Macad::Occt::TopTools_MapOfOrientedShape^ theOther)
{
	return ((::TopTools_MapOfOrientedShape*)_NativeInstance)->IsEqual(*(::TopTools_MapOfOrientedShape*)theOther->NativeInstance);
}

bool Macad::Occt::TopTools_MapOfOrientedShape::Contains(Macad::Occt::TopTools_MapOfOrientedShape^ theOther)
{
	return ((::TopTools_MapOfOrientedShape*)_NativeInstance)->Contains(*(::TopTools_MapOfOrientedShape*)theOther->NativeInstance);
}

void Macad::Occt::TopTools_MapOfOrientedShape::Union(Macad::Occt::TopTools_MapOfOrientedShape^ theLeft, Macad::Occt::TopTools_MapOfOrientedShape^ theRight)
{
	((::TopTools_MapOfOrientedShape*)_NativeInstance)->Union(*(::TopTools_MapOfOrientedShape*)theLeft->NativeInstance, *(::TopTools_MapOfOrientedShape*)theRight->NativeInstance);
}

bool Macad::Occt::TopTools_MapOfOrientedShape::Unite(Macad::Occt::TopTools_MapOfOrientedShape^ theOther)
{
	return ((::TopTools_MapOfOrientedShape*)_NativeInstance)->Unite(*(::TopTools_MapOfOrientedShape*)theOther->NativeInstance);
}

bool Macad::Occt::TopTools_MapOfOrientedShape::HasIntersection(Macad::Occt::TopTools_MapOfOrientedShape^ theMap)
{
	return ((::TopTools_MapOfOrientedShape*)_NativeInstance)->HasIntersection(*(::TopTools_MapOfOrientedShape*)theMap->NativeInstance);
}

void Macad::Occt::TopTools_MapOfOrientedShape::Intersection(Macad::Occt::TopTools_MapOfOrientedShape^ theLeft, Macad::Occt::TopTools_MapOfOrientedShape^ theRight)
{
	((::TopTools_MapOfOrientedShape*)_NativeInstance)->Intersection(*(::TopTools_MapOfOrientedShape*)theLeft->NativeInstance, *(::TopTools_MapOfOrientedShape*)theRight->NativeInstance);
}

bool Macad::Occt::TopTools_MapOfOrientedShape::Intersect(Macad::Occt::TopTools_MapOfOrientedShape^ theOther)
{
	return ((::TopTools_MapOfOrientedShape*)_NativeInstance)->Intersect(*(::TopTools_MapOfOrientedShape*)theOther->NativeInstance);
}

void Macad::Occt::TopTools_MapOfOrientedShape::Subtraction(Macad::Occt::TopTools_MapOfOrientedShape^ theLeft, Macad::Occt::TopTools_MapOfOrientedShape^ theRight)
{
	((::TopTools_MapOfOrientedShape*)_NativeInstance)->Subtraction(*(::TopTools_MapOfOrientedShape*)theLeft->NativeInstance, *(::TopTools_MapOfOrientedShape*)theRight->NativeInstance);
}

bool Macad::Occt::TopTools_MapOfOrientedShape::Subtract(Macad::Occt::TopTools_MapOfOrientedShape^ theOther)
{
	return ((::TopTools_MapOfOrientedShape*)_NativeInstance)->Subtract(*(::TopTools_MapOfOrientedShape*)theOther->NativeInstance);
}

void Macad::Occt::TopTools_MapOfOrientedShape::Difference(Macad::Occt::TopTools_MapOfOrientedShape^ theLeft, Macad::Occt::TopTools_MapOfOrientedShape^ theRight)
{
	((::TopTools_MapOfOrientedShape*)_NativeInstance)->Difference(*(::TopTools_MapOfOrientedShape*)theLeft->NativeInstance, *(::TopTools_MapOfOrientedShape*)theRight->NativeInstance);
}

bool Macad::Occt::TopTools_MapOfOrientedShape::Differ(Macad::Occt::TopTools_MapOfOrientedShape^ theOther)
{
	return ((::TopTools_MapOfOrientedShape*)_NativeInstance)->Differ(*(::TopTools_MapOfOrientedShape*)theOther->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  TopTools_MapOfShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_MapOfShape::TopTools_MapOfShape()
	: BaseClass<::TopTools_MapOfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_MapOfShape();
}

Macad::Occt::TopTools_MapOfShape::TopTools_MapOfShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::TopTools_MapOfShape>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::TopTools_MapOfShape(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::TopTools_MapOfShape::TopTools_MapOfShape(int theNbBuckets)
	: BaseClass<::TopTools_MapOfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_MapOfShape(theNbBuckets, 0L);
}

Macad::Occt::TopTools_MapOfShape::TopTools_MapOfShape(Macad::Occt::TopTools_MapOfShape^ theOther)
	: BaseClass<::TopTools_MapOfShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_MapOfShape(*(::TopTools_MapOfShape*)theOther->NativeInstance);
}

void Macad::Occt::TopTools_MapOfShape::Exchange(Macad::Occt::TopTools_MapOfShape^ theOther)
{
	((::TopTools_MapOfShape*)_NativeInstance)->Exchange(*(::TopTools_MapOfShape*)theOther->NativeInstance);
}

Macad::Occt::TopTools_MapOfShape^ Macad::Occt::TopTools_MapOfShape::Assign(Macad::Occt::TopTools_MapOfShape^ theOther)
{
	::TopTools_MapOfShape* _result = new ::TopTools_MapOfShape();
	*_result = ((::TopTools_MapOfShape*)_NativeInstance)->Assign(*(::TopTools_MapOfShape*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_MapOfShape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_MapOfShape::Added(Macad::Occt::TopoDS_Shape^ K)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::TopTools_MapOfShape*)_NativeInstance)->Added(*(::TopoDS_Shape*)K->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::TopTools_MapOfShape::Contains(Macad::Occt::TopoDS_Shape^ K)
{
	return ((::TopTools_MapOfShape*)_NativeInstance)->Contains(*(::TopoDS_Shape*)K->NativeInstance);
}

bool Macad::Occt::TopTools_MapOfShape::Remove(Macad::Occt::TopoDS_Shape^ K)
{
	return ((::TopTools_MapOfShape*)_NativeInstance)->Remove(*(::TopoDS_Shape*)K->NativeInstance);
}

void Macad::Occt::TopTools_MapOfShape::Clear(bool doReleaseMemory)
{
	((::TopTools_MapOfShape*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopTools_MapOfShape::Clear()
{
	((::TopTools_MapOfShape*)_NativeInstance)->Clear(true);
}

void Macad::Occt::TopTools_MapOfShape::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TopTools_MapOfShape*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::TopTools_MapOfShape::Size()
{
	return ((::TopTools_MapOfShape*)_NativeInstance)->Size();
}

bool Macad::Occt::TopTools_MapOfShape::IsEqual(Macad::Occt::TopTools_MapOfShape^ theOther)
{
	return ((::TopTools_MapOfShape*)_NativeInstance)->IsEqual(*(::TopTools_MapOfShape*)theOther->NativeInstance);
}

bool Macad::Occt::TopTools_MapOfShape::Contains(Macad::Occt::TopTools_MapOfShape^ theOther)
{
	return ((::TopTools_MapOfShape*)_NativeInstance)->Contains(*(::TopTools_MapOfShape*)theOther->NativeInstance);
}

void Macad::Occt::TopTools_MapOfShape::Union(Macad::Occt::TopTools_MapOfShape^ theLeft, Macad::Occt::TopTools_MapOfShape^ theRight)
{
	((::TopTools_MapOfShape*)_NativeInstance)->Union(*(::TopTools_MapOfShape*)theLeft->NativeInstance, *(::TopTools_MapOfShape*)theRight->NativeInstance);
}

bool Macad::Occt::TopTools_MapOfShape::Unite(Macad::Occt::TopTools_MapOfShape^ theOther)
{
	return ((::TopTools_MapOfShape*)_NativeInstance)->Unite(*(::TopTools_MapOfShape*)theOther->NativeInstance);
}

bool Macad::Occt::TopTools_MapOfShape::HasIntersection(Macad::Occt::TopTools_MapOfShape^ theMap)
{
	return ((::TopTools_MapOfShape*)_NativeInstance)->HasIntersection(*(::TopTools_MapOfShape*)theMap->NativeInstance);
}

void Macad::Occt::TopTools_MapOfShape::Intersection(Macad::Occt::TopTools_MapOfShape^ theLeft, Macad::Occt::TopTools_MapOfShape^ theRight)
{
	((::TopTools_MapOfShape*)_NativeInstance)->Intersection(*(::TopTools_MapOfShape*)theLeft->NativeInstance, *(::TopTools_MapOfShape*)theRight->NativeInstance);
}

bool Macad::Occt::TopTools_MapOfShape::Intersect(Macad::Occt::TopTools_MapOfShape^ theOther)
{
	return ((::TopTools_MapOfShape*)_NativeInstance)->Intersect(*(::TopTools_MapOfShape*)theOther->NativeInstance);
}

void Macad::Occt::TopTools_MapOfShape::Subtraction(Macad::Occt::TopTools_MapOfShape^ theLeft, Macad::Occt::TopTools_MapOfShape^ theRight)
{
	((::TopTools_MapOfShape*)_NativeInstance)->Subtraction(*(::TopTools_MapOfShape*)theLeft->NativeInstance, *(::TopTools_MapOfShape*)theRight->NativeInstance);
}

bool Macad::Occt::TopTools_MapOfShape::Subtract(Macad::Occt::TopTools_MapOfShape^ theOther)
{
	return ((::TopTools_MapOfShape*)_NativeInstance)->Subtract(*(::TopTools_MapOfShape*)theOther->NativeInstance);
}

void Macad::Occt::TopTools_MapOfShape::Difference(Macad::Occt::TopTools_MapOfShape^ theLeft, Macad::Occt::TopTools_MapOfShape^ theRight)
{
	((::TopTools_MapOfShape*)_NativeInstance)->Difference(*(::TopTools_MapOfShape*)theLeft->NativeInstance, *(::TopTools_MapOfShape*)theRight->NativeInstance);
}

bool Macad::Occt::TopTools_MapOfShape::Differ(Macad::Occt::TopTools_MapOfShape^ theOther)
{
	return ((::TopTools_MapOfShape*)_NativeInstance)->Differ(*(::TopTools_MapOfShape*)theOther->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  TopTools_ShapeMapHasher
//---------------------------------------------------------------------

Macad::Occt::TopTools_ShapeMapHasher::TopTools_ShapeMapHasher()
	: BaseClass<::TopTools_ShapeMapHasher>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_ShapeMapHasher();
}

Macad::Occt::TopTools_ShapeMapHasher::TopTools_ShapeMapHasher(Macad::Occt::TopTools_ShapeMapHasher^ parameter1)
	: BaseClass<::TopTools_ShapeMapHasher>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_ShapeMapHasher(*(::TopTools_ShapeMapHasher*)parameter1->NativeInstance);
}

int Macad::Occt::TopTools_ShapeMapHasher::HashCode(Macad::Occt::TopoDS_Shape^ theShape, int theUpperBound)
{
	return ::TopTools_ShapeMapHasher::HashCode(*(::TopoDS_Shape*)theShape->NativeInstance, theUpperBound);
}

bool Macad::Occt::TopTools_ShapeMapHasher::IsEqual(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2)
{
	return ::TopTools_ShapeMapHasher::IsEqual(*(::TopoDS_Shape*)S1->NativeInstance, *(::TopoDS_Shape*)S2->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  TopTools_OrientedShapeMapHasher
//---------------------------------------------------------------------

Macad::Occt::TopTools_OrientedShapeMapHasher::TopTools_OrientedShapeMapHasher()
	: BaseClass<::TopTools_OrientedShapeMapHasher>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_OrientedShapeMapHasher();
}

Macad::Occt::TopTools_OrientedShapeMapHasher::TopTools_OrientedShapeMapHasher(Macad::Occt::TopTools_OrientedShapeMapHasher^ parameter1)
	: BaseClass<::TopTools_OrientedShapeMapHasher>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_OrientedShapeMapHasher(*(::TopTools_OrientedShapeMapHasher*)parameter1->NativeInstance);
}

int Macad::Occt::TopTools_OrientedShapeMapHasher::HashCode(Macad::Occt::TopoDS_Shape^ theShape, int theUpperBound)
{
	return ::TopTools_OrientedShapeMapHasher::HashCode(*(::TopoDS_Shape*)theShape->NativeInstance, theUpperBound);
}

bool Macad::Occt::TopTools_OrientedShapeMapHasher::IsEqual(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2)
{
	return ::TopTools_OrientedShapeMapHasher::IsEqual(*(::TopoDS_Shape*)S1->NativeInstance, *(::TopoDS_Shape*)S2->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  TopTools_LocationSet
//---------------------------------------------------------------------

Macad::Occt::TopTools_LocationSet::TopTools_LocationSet()
	: BaseClass<::TopTools_LocationSet>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_LocationSet();
}

Macad::Occt::TopTools_LocationSet::TopTools_LocationSet(Macad::Occt::TopTools_LocationSet^ parameter1)
	: BaseClass<::TopTools_LocationSet>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_LocationSet(*(::TopTools_LocationSet*)parameter1->NativeInstance);
}

void Macad::Occt::TopTools_LocationSet::Clear()
{
	((::TopTools_LocationSet*)_NativeInstance)->Clear();
}

int Macad::Occt::TopTools_LocationSet::Add(Macad::Occt::TopLoc_Location^ L)
{
	return ((::TopTools_LocationSet*)_NativeInstance)->Add(*(::TopLoc_Location*)L->NativeInstance);
}

Macad::Occt::TopLoc_Location^ Macad::Occt::TopTools_LocationSet::Location(int I)
{
	::TopLoc_Location* _result = new ::TopLoc_Location();
	*_result =  (::TopLoc_Location)((::TopTools_LocationSet*)_NativeInstance)->Location(I);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

int Macad::Occt::TopTools_LocationSet::Index(Macad::Occt::TopLoc_Location^ L)
{
	return ((::TopTools_LocationSet*)_NativeInstance)->Index(*(::TopLoc_Location*)L->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  TopTools_ShapeSet
//---------------------------------------------------------------------

Macad::Occt::TopTools_ShapeSet::TopTools_ShapeSet()
	: BaseClass<::TopTools_ShapeSet>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_ShapeSet();
}

Macad::Occt::TopTools_ShapeSet::TopTools_ShapeSet(Macad::Occt::TopTools_ShapeSet^ parameter1)
	: BaseClass<::TopTools_ShapeSet>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_ShapeSet(*(::TopTools_ShapeSet*)parameter1->NativeInstance);
}

void Macad::Occt::TopTools_ShapeSet::SetFormatNb(int theFormatNb)
{
	((::TopTools_ShapeSet*)_NativeInstance)->SetFormatNb(theFormatNb);
}

int Macad::Occt::TopTools_ShapeSet::FormatNb()
{
	return ((::TopTools_ShapeSet*)_NativeInstance)->FormatNb();
}

void Macad::Occt::TopTools_ShapeSet::Clear()
{
	((::TopTools_ShapeSet*)_NativeInstance)->Clear();
}

int Macad::Occt::TopTools_ShapeSet::Add(Macad::Occt::TopoDS_Shape^ S)
{
	return ((::TopTools_ShapeSet*)_NativeInstance)->Add(*(::TopoDS_Shape*)S->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_ShapeSet::Shape(int I)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::TopTools_ShapeSet*)_NativeInstance)->Shape(I);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

int Macad::Occt::TopTools_ShapeSet::Index(Macad::Occt::TopoDS_Shape^ S)
{
	return ((::TopTools_ShapeSet*)_NativeInstance)->Index(*(::TopoDS_Shape*)S->NativeInstance);
}

Macad::Occt::TopTools_LocationSet^ Macad::Occt::TopTools_ShapeSet::Locations()
{
	::TopTools_LocationSet* _result = new ::TopTools_LocationSet();
	*_result =  (::TopTools_LocationSet)((::TopTools_ShapeSet*)_NativeInstance)->Locations();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_LocationSet(_result);
}

Macad::Occt::TopTools_LocationSet^ Macad::Occt::TopTools_ShapeSet::ChangeLocations()
{
	::TopTools_LocationSet* _result = new ::TopTools_LocationSet();
	*_result = ((::TopTools_ShapeSet*)_NativeInstance)->ChangeLocations();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_LocationSet(_result);
}

void Macad::Occt::TopTools_ShapeSet::DumpExtent(Macad::Occt::TCollection_AsciiString^ S)
{
	((::TopTools_ShapeSet*)_NativeInstance)->DumpExtent(*(::TCollection_AsciiString*)S->NativeInstance);
}

void Macad::Occt::TopTools_ShapeSet::AddGeometry(Macad::Occt::TopoDS_Shape^ S)
{
	((::TopTools_ShapeSet*)_NativeInstance)->AddGeometry(*(::TopoDS_Shape*)S->NativeInstance);
}

void Macad::Occt::TopTools_ShapeSet::AddShapes(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2)
{
	((::TopTools_ShapeSet*)_NativeInstance)->AddShapes(*(::TopoDS_Shape*)S1->NativeInstance, *(::TopoDS_Shape*)S2->NativeInstance);
}

void Macad::Occt::TopTools_ShapeSet::Check(Macad::Occt::TopAbs_ShapeEnum T, Macad::Occt::TopoDS_Shape^ S)
{
	((::TopTools_ShapeSet*)_NativeInstance)->Check((::TopAbs_ShapeEnum)T, *(::TopoDS_Shape*)S->NativeInstance);
}

int Macad::Occt::TopTools_ShapeSet::NbShapes()
{
	return ((::TopTools_ShapeSet*)_NativeInstance)->NbShapes();
}




//---------------------------------------------------------------------
//  Class  TopTools
//---------------------------------------------------------------------

Macad::Occt::TopTools::TopTools()
	: BaseClass<::TopTools>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools();
}

Macad::Occt::TopTools::TopTools(Macad::Occt::TopTools^ parameter1)
	: BaseClass<::TopTools>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools(*(::TopTools*)parameter1->NativeInstance);
}

void Macad::Occt::TopTools::Dummy(int I)
{
	::TopTools::Dummy(I);
}




//---------------------------------------------------------------------
//  Class  TopTools_HArray1OfListOfShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_HArray1OfListOfShape::TopTools_HArray1OfListOfShape()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TopTools_HArray1OfListOfShape();
}

Macad::Occt::TopTools_HArray1OfListOfShape::TopTools_HArray1OfListOfShape(int theLower, int theUpper)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TopTools_HArray1OfListOfShape(theLower, theUpper);
}

Macad::Occt::TopTools_HArray1OfListOfShape::TopTools_HArray1OfListOfShape(Macad::Occt::TopTools_Array1OfListOfShape^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TopTools_HArray1OfListOfShape(*(::TopTools_Array1OfListOfShape*)theOther->NativeInstance);
}

Macad::Occt::TopTools_HArray1OfListOfShape::TopTools_HArray1OfListOfShape(Macad::Occt::TopTools_HArray1OfListOfShape^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TopTools_HArray1OfListOfShape(*(::TopTools_HArray1OfListOfShape*)parameter1->NativeInstance);
}

Macad::Occt::TopTools_Array1OfListOfShape^ Macad::Occt::TopTools_HArray1OfListOfShape::Array1()
{
	::TopTools_Array1OfListOfShape* _result = new ::TopTools_Array1OfListOfShape();
	*_result =  (::TopTools_Array1OfListOfShape)((::TopTools_HArray1OfListOfShape*)_NativeInstance)->Array1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_Array1OfListOfShape(_result);
}

Macad::Occt::TopTools_Array1OfListOfShape^ Macad::Occt::TopTools_HArray1OfListOfShape::ChangeArray1()
{
	::TopTools_Array1OfListOfShape* _result = new ::TopTools_Array1OfListOfShape();
	*_result = ((::TopTools_HArray1OfListOfShape*)_NativeInstance)->ChangeArray1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_Array1OfListOfShape(_result);
}

int Macad::Occt::TopTools_HArray1OfListOfShape::Size()
{
	return ((::TopTools_HArray1OfListOfShape*)_NativeInstance)->Size();
}

int Macad::Occt::TopTools_HArray1OfListOfShape::Length()
{
	return ((::TopTools_HArray1OfListOfShape*)_NativeInstance)->Length();
}

bool Macad::Occt::TopTools_HArray1OfListOfShape::IsEmpty()
{
	return ((::TopTools_HArray1OfListOfShape*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TopTools_HArray1OfListOfShape::Lower()
{
	return ((::TopTools_HArray1OfListOfShape*)_NativeInstance)->Lower();
}

int Macad::Occt::TopTools_HArray1OfListOfShape::Upper()
{
	return ((::TopTools_HArray1OfListOfShape*)_NativeInstance)->Upper();
}

bool Macad::Occt::TopTools_HArray1OfListOfShape::IsDeletable()
{
	return ((::TopTools_HArray1OfListOfShape*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TopTools_HArray1OfListOfShape::IsAllocated()
{
	return ((::TopTools_HArray1OfListOfShape*)_NativeInstance)->IsAllocated();
}

void Macad::Occt::TopTools_HArray1OfListOfShape::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TopTools_HArray1OfListOfShape*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}


Macad::Occt::TopTools_HArray1OfListOfShape^ Macad::Occt::TopTools_HArray1OfListOfShape::CreateDowncasted(::TopTools_HArray1OfListOfShape* instance)
{
	return gcnew Macad::Occt::TopTools_HArray1OfListOfShape( instance );
}



//---------------------------------------------------------------------
//  Class  TopTools_HArray1OfShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_HArray1OfShape::TopTools_HArray1OfShape()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TopTools_HArray1OfShape();
}

Macad::Occt::TopTools_HArray1OfShape::TopTools_HArray1OfShape(int theLower, int theUpper)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TopTools_HArray1OfShape(theLower, theUpper);
}

Macad::Occt::TopTools_HArray1OfShape::TopTools_HArray1OfShape(int theLower, int theUpper, Macad::Occt::TopoDS_Shape^ theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TopTools_HArray1OfShape(theLower, theUpper, *(::TopoDS_Shape*)theValue->NativeInstance);
}

Macad::Occt::TopTools_HArray1OfShape::TopTools_HArray1OfShape(Macad::Occt::TopTools_Array1OfShape^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TopTools_HArray1OfShape(*(::TopTools_Array1OfShape*)theOther->NativeInstance);
}

Macad::Occt::TopTools_HArray1OfShape::TopTools_HArray1OfShape(Macad::Occt::TopTools_HArray1OfShape^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TopTools_HArray1OfShape(*(::TopTools_HArray1OfShape*)parameter1->NativeInstance);
}

Macad::Occt::TopTools_Array1OfShape^ Macad::Occt::TopTools_HArray1OfShape::Array1()
{
	::TopTools_Array1OfShape* _result = new ::TopTools_Array1OfShape();
	*_result =  (::TopTools_Array1OfShape)((::TopTools_HArray1OfShape*)_NativeInstance)->Array1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_Array1OfShape(_result);
}

Macad::Occt::TopTools_Array1OfShape^ Macad::Occt::TopTools_HArray1OfShape::ChangeArray1()
{
	::TopTools_Array1OfShape* _result = new ::TopTools_Array1OfShape();
	*_result = ((::TopTools_HArray1OfShape*)_NativeInstance)->ChangeArray1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_Array1OfShape(_result);
}

void Macad::Occt::TopTools_HArray1OfShape::Init(Macad::Occt::TopoDS_Shape^ theValue)
{
	((::TopTools_HArray1OfShape*)_NativeInstance)->Init(*(::TopoDS_Shape*)theValue->NativeInstance);
}

int Macad::Occt::TopTools_HArray1OfShape::Size()
{
	return ((::TopTools_HArray1OfShape*)_NativeInstance)->Size();
}

int Macad::Occt::TopTools_HArray1OfShape::Length()
{
	return ((::TopTools_HArray1OfShape*)_NativeInstance)->Length();
}

bool Macad::Occt::TopTools_HArray1OfShape::IsEmpty()
{
	return ((::TopTools_HArray1OfShape*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::TopTools_HArray1OfShape::Lower()
{
	return ((::TopTools_HArray1OfShape*)_NativeInstance)->Lower();
}

int Macad::Occt::TopTools_HArray1OfShape::Upper()
{
	return ((::TopTools_HArray1OfShape*)_NativeInstance)->Upper();
}

bool Macad::Occt::TopTools_HArray1OfShape::IsDeletable()
{
	return ((::TopTools_HArray1OfShape*)_NativeInstance)->IsDeletable();
}

bool Macad::Occt::TopTools_HArray1OfShape::IsAllocated()
{
	return ((::TopTools_HArray1OfShape*)_NativeInstance)->IsAllocated();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_HArray1OfShape::First()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::TopTools_HArray1OfShape*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_HArray1OfShape::ChangeFirst()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::TopTools_HArray1OfShape*)_NativeInstance)->ChangeFirst();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_HArray1OfShape::Last()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::TopTools_HArray1OfShape*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_HArray1OfShape::ChangeLast()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::TopTools_HArray1OfShape*)_NativeInstance)->ChangeLast();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_HArray1OfShape::Value(int theIndex)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::TopTools_HArray1OfShape*)_NativeInstance)->Value(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_HArray1OfShape::ChangeValue(int theIndex)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::TopTools_HArray1OfShape*)_NativeInstance)->ChangeValue(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::TopTools_HArray1OfShape::SetValue(int theIndex, Macad::Occt::TopoDS_Shape^ theItem)
{
	((::TopTools_HArray1OfShape*)_NativeInstance)->SetValue(theIndex, *(::TopoDS_Shape*)theItem->NativeInstance);
}

void Macad::Occt::TopTools_HArray1OfShape::Resize(int theLower, int theUpper, bool theToCopyData)
{
	((::TopTools_HArray1OfShape*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}


Macad::Occt::TopTools_HArray1OfShape^ Macad::Occt::TopTools_HArray1OfShape::CreateDowncasted(::TopTools_HArray1OfShape* instance)
{
	return gcnew Macad::Occt::TopTools_HArray1OfShape( instance );
}



//---------------------------------------------------------------------
//  Class  TopTools_HArray2OfShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_HArray2OfShape::TopTools_HArray2OfShape(int theRowLow, int theRowUpp, int theColLow, int theColUpp)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TopTools_HArray2OfShape(theRowLow, theRowUpp, theColLow, theColUpp);
}

Macad::Occt::TopTools_HArray2OfShape::TopTools_HArray2OfShape(int theRowLow, int theRowUpp, int theColLow, int theColUpp, Macad::Occt::TopoDS_Shape^ theValue)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TopTools_HArray2OfShape(theRowLow, theRowUpp, theColLow, theColUpp, *(::TopoDS_Shape*)theValue->NativeInstance);
}

Macad::Occt::TopTools_HArray2OfShape::TopTools_HArray2OfShape(Macad::Occt::TopTools_Array2OfShape^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TopTools_HArray2OfShape(*(::TopTools_Array2OfShape*)theOther->NativeInstance);
}

Macad::Occt::TopTools_HArray2OfShape::TopTools_HArray2OfShape(Macad::Occt::TopTools_HArray2OfShape^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TopTools_HArray2OfShape(*(::TopTools_HArray2OfShape*)parameter1->NativeInstance);
}

Macad::Occt::TopTools_Array2OfShape^ Macad::Occt::TopTools_HArray2OfShape::Array2()
{
	::TopTools_Array2OfShape* _result = new ::TopTools_Array2OfShape();
	*_result =  (::TopTools_Array2OfShape)((::TopTools_HArray2OfShape*)_NativeInstance)->Array2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_Array2OfShape(_result);
}

Macad::Occt::TopTools_Array2OfShape^ Macad::Occt::TopTools_HArray2OfShape::ChangeArray2()
{
	::TopTools_Array2OfShape* _result = new ::TopTools_Array2OfShape();
	*_result = ((::TopTools_HArray2OfShape*)_NativeInstance)->ChangeArray2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_Array2OfShape(_result);
}

void Macad::Occt::TopTools_HArray2OfShape::Init(Macad::Occt::TopoDS_Shape^ theValue)
{
	((::TopTools_HArray2OfShape*)_NativeInstance)->Init(*(::TopoDS_Shape*)theValue->NativeInstance);
}

int Macad::Occt::TopTools_HArray2OfShape::Size()
{
	return ((::TopTools_HArray2OfShape*)_NativeInstance)->Size();
}

int Macad::Occt::TopTools_HArray2OfShape::Length()
{
	return ((::TopTools_HArray2OfShape*)_NativeInstance)->Length();
}

int Macad::Occt::TopTools_HArray2OfShape::NbRows()
{
	return ((::TopTools_HArray2OfShape*)_NativeInstance)->NbRows();
}

int Macad::Occt::TopTools_HArray2OfShape::NbColumns()
{
	return ((::TopTools_HArray2OfShape*)_NativeInstance)->NbColumns();
}

int Macad::Occt::TopTools_HArray2OfShape::RowLength()
{
	return ((::TopTools_HArray2OfShape*)_NativeInstance)->RowLength();
}

int Macad::Occt::TopTools_HArray2OfShape::ColLength()
{
	return ((::TopTools_HArray2OfShape*)_NativeInstance)->ColLength();
}

int Macad::Occt::TopTools_HArray2OfShape::LowerRow()
{
	return ((::TopTools_HArray2OfShape*)_NativeInstance)->LowerRow();
}

int Macad::Occt::TopTools_HArray2OfShape::UpperRow()
{
	return ((::TopTools_HArray2OfShape*)_NativeInstance)->UpperRow();
}

int Macad::Occt::TopTools_HArray2OfShape::LowerCol()
{
	return ((::TopTools_HArray2OfShape*)_NativeInstance)->LowerCol();
}

int Macad::Occt::TopTools_HArray2OfShape::UpperCol()
{
	return ((::TopTools_HArray2OfShape*)_NativeInstance)->UpperCol();
}

bool Macad::Occt::TopTools_HArray2OfShape::IsDeletable()
{
	return ((::TopTools_HArray2OfShape*)_NativeInstance)->IsDeletable();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_HArray2OfShape::Value(int theRow, int theCol)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::TopTools_HArray2OfShape*)_NativeInstance)->Value(theRow, theCol);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_HArray2OfShape::ChangeValue(int theRow, int theCol)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::TopTools_HArray2OfShape*)_NativeInstance)->ChangeValue(theRow, theCol);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::TopTools_HArray2OfShape::SetValue(int theRow, int theCol, Macad::Occt::TopoDS_Shape^ theItem)
{
	((::TopTools_HArray2OfShape*)_NativeInstance)->SetValue(theRow, theCol, *(::TopoDS_Shape*)theItem->NativeInstance);
}

void Macad::Occt::TopTools_HArray2OfShape::Resize(int theRowLower, int theRowUpper, int theColLower, int theColUpper, bool theToCopyData)
{
	((::TopTools_HArray2OfShape*)_NativeInstance)->Resize(theRowLower, theRowUpper, theColLower, theColUpper, theToCopyData);
}


Macad::Occt::TopTools_HArray2OfShape^ Macad::Occt::TopTools_HArray2OfShape::CreateDowncasted(::TopTools_HArray2OfShape* instance)
{
	return gcnew Macad::Occt::TopTools_HArray2OfShape( instance );
}



//---------------------------------------------------------------------
//  Class  TopTools_HSequenceOfShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_HSequenceOfShape::TopTools_HSequenceOfShape()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TopTools_HSequenceOfShape();
}

Macad::Occt::TopTools_HSequenceOfShape::TopTools_HSequenceOfShape(Macad::Occt::TopTools_SequenceOfShape^ theOther)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TopTools_HSequenceOfShape(*(::TopTools_SequenceOfShape*)theOther->NativeInstance);
}

Macad::Occt::TopTools_HSequenceOfShape::TopTools_HSequenceOfShape(Macad::Occt::TopTools_HSequenceOfShape^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::TopTools_HSequenceOfShape(*(::TopTools_HSequenceOfShape*)parameter1->NativeInstance);
}

Macad::Occt::TopTools_SequenceOfShape^ Macad::Occt::TopTools_HSequenceOfShape::Sequence()
{
	::TopTools_SequenceOfShape* _result = new ::TopTools_SequenceOfShape();
	*_result =  (::TopTools_SequenceOfShape)((::TopTools_HSequenceOfShape*)_NativeInstance)->Sequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_SequenceOfShape(_result);
}

void Macad::Occt::TopTools_HSequenceOfShape::Append(Macad::Occt::TopoDS_Shape^ theItem)
{
	((::TopTools_HSequenceOfShape*)_NativeInstance)->Append(*(::TopoDS_Shape*)theItem->NativeInstance);
}

void Macad::Occt::TopTools_HSequenceOfShape::Append(Macad::Occt::TopTools_SequenceOfShape^ theSequence)
{
	((::TopTools_HSequenceOfShape*)_NativeInstance)->Append(*(::TopTools_SequenceOfShape*)theSequence->NativeInstance);
}

Macad::Occt::TopTools_SequenceOfShape^ Macad::Occt::TopTools_HSequenceOfShape::ChangeSequence()
{
	::TopTools_SequenceOfShape* _result = new ::TopTools_SequenceOfShape();
	*_result = ((::TopTools_HSequenceOfShape*)_NativeInstance)->ChangeSequence();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_SequenceOfShape(_result);
}

int Macad::Occt::TopTools_HSequenceOfShape::Size()
{
	return ((::TopTools_HSequenceOfShape*)_NativeInstance)->Size();
}

int Macad::Occt::TopTools_HSequenceOfShape::Length()
{
	return ((::TopTools_HSequenceOfShape*)_NativeInstance)->Length();
}

int Macad::Occt::TopTools_HSequenceOfShape::Lower()
{
	return ((::TopTools_HSequenceOfShape*)_NativeInstance)->Lower();
}

int Macad::Occt::TopTools_HSequenceOfShape::Upper()
{
	return ((::TopTools_HSequenceOfShape*)_NativeInstance)->Upper();
}

bool Macad::Occt::TopTools_HSequenceOfShape::IsEmpty()
{
	return ((::TopTools_HSequenceOfShape*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::TopTools_HSequenceOfShape::Reverse()
{
	((::TopTools_HSequenceOfShape*)_NativeInstance)->Reverse();
}

void Macad::Occt::TopTools_HSequenceOfShape::Exchange(int I, int J)
{
	((::TopTools_HSequenceOfShape*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::TopTools_HSequenceOfShape::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::TopTools_HSequenceOfShape*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::TopTools_HSequenceOfShape::Clear()
{
	((::TopTools_HSequenceOfShape*)_NativeInstance)->Clear(0L);
}

void Macad::Occt::TopTools_HSequenceOfShape::Remove(int theIndex)
{
	((::TopTools_HSequenceOfShape*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::TopTools_HSequenceOfShape::Remove(int theFromIndex, int theToIndex)
{
	((::TopTools_HSequenceOfShape*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::TopTools_HSequenceOfShape::Prepend(Macad::Occt::TopoDS_Shape^ theItem)
{
	((::TopTools_HSequenceOfShape*)_NativeInstance)->Prepend(*(::TopoDS_Shape*)theItem->NativeInstance);
}

void Macad::Occt::TopTools_HSequenceOfShape::InsertBefore(int theIndex, Macad::Occt::TopoDS_Shape^ theItem)
{
	((::TopTools_HSequenceOfShape*)_NativeInstance)->InsertBefore(theIndex, *(::TopoDS_Shape*)theItem->NativeInstance);
}

void Macad::Occt::TopTools_HSequenceOfShape::InsertAfter(int theIndex, Macad::Occt::TopoDS_Shape^ theItem)
{
	((::TopTools_HSequenceOfShape*)_NativeInstance)->InsertAfter(theIndex, *(::TopoDS_Shape*)theItem->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_HSequenceOfShape::First()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::TopTools_HSequenceOfShape*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_HSequenceOfShape::ChangeFirst()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::TopTools_HSequenceOfShape*)_NativeInstance)->ChangeFirst();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_HSequenceOfShape::Last()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::TopTools_HSequenceOfShape*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_HSequenceOfShape::ChangeLast()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::TopTools_HSequenceOfShape*)_NativeInstance)->ChangeLast();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_HSequenceOfShape::Value(int theIndex)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::TopTools_HSequenceOfShape*)_NativeInstance)->Value(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_HSequenceOfShape::ChangeValue(int theIndex)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::TopTools_HSequenceOfShape*)_NativeInstance)->ChangeValue(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::TopTools_HSequenceOfShape::SetValue(int theIndex, Macad::Occt::TopoDS_Shape^ theItem)
{
	((::TopTools_HSequenceOfShape*)_NativeInstance)->SetValue(theIndex, *(::TopoDS_Shape*)theItem->NativeInstance);
}


Macad::Occt::TopTools_HSequenceOfShape^ Macad::Occt::TopTools_HSequenceOfShape::CreateDowncasted(::TopTools_HSequenceOfShape* instance)
{
	return gcnew Macad::Occt::TopTools_HSequenceOfShape( instance );
}



//---------------------------------------------------------------------
//  Class  TopTools_MutexForShapeProvider
//---------------------------------------------------------------------

Macad::Occt::TopTools_MutexForShapeProvider::TopTools_MutexForShapeProvider()
	: BaseClass<::TopTools_MutexForShapeProvider>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopTools_MutexForShapeProvider();
}

void Macad::Occt::TopTools_MutexForShapeProvider::CreateMutexesForSubShapes(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::TopAbs_ShapeEnum theType)
{
	((::TopTools_MutexForShapeProvider*)_NativeInstance)->CreateMutexesForSubShapes(*(::TopoDS_Shape*)theShape->NativeInstance, (::TopAbs_ShapeEnum)theType);
}

void Macad::Occt::TopTools_MutexForShapeProvider::CreateMutexForShape(Macad::Occt::TopoDS_Shape^ theShape)
{
	((::TopTools_MutexForShapeProvider*)_NativeInstance)->CreateMutexForShape(*(::TopoDS_Shape*)theShape->NativeInstance);
}

void Macad::Occt::TopTools_MutexForShapeProvider::RemoveAllMutexes()
{
	((::TopTools_MutexForShapeProvider*)_NativeInstance)->RemoveAllMutexes();
}



