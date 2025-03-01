// Generated wrapper code for package TopTools

#include "OcctPCH.h"
#include "TopTools.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "TopoDS.h"
#include "TColStd.h"
#include "Bnd.h"
#include "TopLoc.h"
#include "Message.h"
#include "TopAbs.h"
#include "BRepTools.h"
#include "TCollection.h"


//---------------------------------------------------------------------
//  Class  TopTools_ListOfShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_ListOfShape::TopTools_ListOfShape()
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_ListOfShape();
}

Macad::Occt::TopTools_ListOfShape::TopTools_ListOfShape(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_ListOfShape(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::TopTools_ListOfShape::Size()
{
    int _result = ((::TopTools_ListOfShape*)_NativeInstance)->Size();
    return _result;
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::TopTools_ListOfShape::Assign(Macad::Occt::TopTools_ListOfShape^ theOther)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = ((::TopTools_ListOfShape*)_NativeInstance)->Assign(*(::TopTools_ListOfShape*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

void Macad::Occt::TopTools_ListOfShape::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::TopTools_ListOfShape*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::TopTools_ListOfShape::Clear()
{
    ((::TopTools_ListOfShape*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_ListOfShape::First()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_ListOfShape*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_ListOfShape::Last()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_ListOfShape*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_ListOfShape::Append(Macad::Occt::TopoDS_Shape^ theItem)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopTools_ListOfShape*)_NativeInstance)->Append(*(::TopoDS_Shape*)theItem->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_ListOfShape::Prepend(Macad::Occt::TopoDS_Shape^ theItem)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopTools_ListOfShape*)_NativeInstance)->Prepend(*(::TopoDS_Shape*)theItem->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::TopTools_ListOfShape::RemoveFirst()
{
    ((::TopTools_ListOfShape*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::TopTools_ListOfShape::Remove(Macad::Occt::TopTools_ListOfShape::Iterator^ theIter)
{
    ((::TopTools_ListOfShape*)_NativeInstance)->Remove(*(::TopTools_ListOfShape::Iterator*)theIter->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_ListOfShape::InsertBefore(Macad::Occt::TopoDS_Shape^ theItem, Macad::Occt::TopTools_ListOfShape::Iterator^ theIter)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopTools_ListOfShape*)_NativeInstance)->InsertBefore(*(::TopoDS_Shape*)theItem->NativeInstance, *(::TopTools_ListOfShape::Iterator*)theIter->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_ListOfShape::InsertAfter(Macad::Occt::TopoDS_Shape^ theItem, Macad::Occt::TopTools_ListOfShape::Iterator^ theIter)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopTools_ListOfShape*)_NativeInstance)->InsertAfter(*(::TopoDS_Shape*)theItem->NativeInstance, *(::TopTools_ListOfShape::Iterator*)theIter->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::TopTools_ListOfShape::Reverse()
{
    ((::TopTools_ListOfShape*)_NativeInstance)->Reverse();
}

System::Collections::Generic::IEnumerator<Macad::Occt::TopoDS_Shape^>^ Macad::Occt::TopTools_ListOfShape::GetEnumerator()
{
    return gcnew Macad::Occt::TopTools_ListOfShape::Iterator(new ::TopTools_ListOfShape::Iterator(*NativeInstance));
}

System::Collections::IEnumerator^ Macad::Occt::TopTools_ListOfShape::GetEnumerator2()
{
    return gcnew Macad::Occt::TopTools_ListOfShape::Iterator(new ::TopTools_ListOfShape::Iterator(*NativeInstance));
}



//---------------------------------------------------------------------
//  Class  TopTools_ListOfShape::Iterator
//---------------------------------------------------------------------

Macad::Occt::TopTools_ListOfShape::Iterator::Iterator()
    : Macad::Occt::IteratorEnumerator<Macad::Occt::TopoDS_Shape^, ::TopTools_ListOfShape::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_ListOfShape::Iterator();
}

bool Macad::Occt::TopTools_ListOfShape::Iterator::More()
{
    bool _result = ((::TopTools_ListOfShape::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TopTools_ListOfShape::Iterator::Next()
{
    ((::TopTools_ListOfShape::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_ListOfShape::Iterator::Value()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_ListOfShape::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_ListOfShape::Iterator::ChangeValue()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopTools_ListOfShape::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  TopTools_Array1OfListOfShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_Array1OfListOfShape::TopTools_Array1OfListOfShape()
    : Macad::Occt::BaseClass<::TopTools_Array1OfListOfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_Array1OfListOfShape();
}

Macad::Occt::TopTools_Array1OfListOfShape::TopTools_Array1OfListOfShape(int theLower, int theUpper)
    : Macad::Occt::BaseClass<::TopTools_Array1OfListOfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_Array1OfListOfShape(theLower, theUpper);
}

int Macad::Occt::TopTools_Array1OfListOfShape::Size()
{
    int _result = ((::TopTools_Array1OfListOfShape*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TopTools_Array1OfListOfShape::Length()
{
    int _result = ((::TopTools_Array1OfListOfShape*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::TopTools_Array1OfListOfShape::IsEmpty()
{
    bool _result = ((::TopTools_Array1OfListOfShape*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TopTools_Array1OfListOfShape::Lower()
{
    int _result = ((::TopTools_Array1OfListOfShape*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TopTools_Array1OfListOfShape::Upper()
{
    int _result = ((::TopTools_Array1OfListOfShape*)_NativeInstance)->Upper();
    return _result;
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

void Macad::Occt::TopTools_Array1OfListOfShape::UpdateLowerBound(int theLower)
{
    ((::TopTools_Array1OfListOfShape*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::TopTools_Array1OfListOfShape::UpdateUpperBound(int theUpper)
{
    ((::TopTools_Array1OfListOfShape*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::TopTools_Array1OfListOfShape::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TopTools_Array1OfListOfShape*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool Macad::Occt::TopTools_Array1OfListOfShape::IsDeletable()
{
    bool _result = ((::TopTools_Array1OfListOfShape*)_NativeInstance)->IsDeletable();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TopTools_Array1OfListOfShape::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TopTools_Array1OfShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_Array1OfShape::TopTools_Array1OfShape()
    : Macad::Occt::BaseClass<::TopTools_Array1OfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_Array1OfShape();
}

Macad::Occt::TopTools_Array1OfShape::TopTools_Array1OfShape(int theLower, int theUpper)
    : Macad::Occt::BaseClass<::TopTools_Array1OfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_Array1OfShape(theLower, theUpper);
}

Macad::Occt::TopTools_Array1OfShape::TopTools_Array1OfShape(Macad::Occt::TopoDS_Shape^ theBegin, int theLower, int theUpper, bool theUseBuffer)
    : Macad::Occt::BaseClass<::TopTools_Array1OfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_Array1OfShape(*(::TopoDS_Shape*)theBegin->NativeInstance, theLower, theUpper, theUseBuffer);
}

Macad::Occt::TopTools_Array1OfShape::TopTools_Array1OfShape(Macad::Occt::TopoDS_Shape^ theBegin, int theLower, int theUpper)
    : Macad::Occt::BaseClass<::TopTools_Array1OfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_Array1OfShape(*(::TopoDS_Shape*)theBegin->NativeInstance, theLower, theUpper, true);
}

void Macad::Occt::TopTools_Array1OfShape::Init(Macad::Occt::TopoDS_Shape^ theValue)
{
    ((::TopTools_Array1OfShape*)_NativeInstance)->Init(*(::TopoDS_Shape*)theValue->NativeInstance);
}

int Macad::Occt::TopTools_Array1OfShape::Size()
{
    int _result = ((::TopTools_Array1OfShape*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TopTools_Array1OfShape::Length()
{
    int _result = ((::TopTools_Array1OfShape*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::TopTools_Array1OfShape::IsEmpty()
{
    bool _result = ((::TopTools_Array1OfShape*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TopTools_Array1OfShape::Lower()
{
    int _result = ((::TopTools_Array1OfShape*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TopTools_Array1OfShape::Upper()
{
    int _result = ((::TopTools_Array1OfShape*)_NativeInstance)->Upper();
    return _result;
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
    *_result = (::TopoDS_Shape)((::TopTools_Array1OfShape*)_NativeInstance)->First();
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
    *_result = (::TopoDS_Shape)((::TopTools_Array1OfShape*)_NativeInstance)->Last();
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
    *_result = (::TopoDS_Shape)((::TopTools_Array1OfShape*)_NativeInstance)->Value(theIndex);
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

void Macad::Occt::TopTools_Array1OfShape::UpdateLowerBound(int theLower)
{
    ((::TopTools_Array1OfShape*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::TopTools_Array1OfShape::UpdateUpperBound(int theUpper)
{
    ((::TopTools_Array1OfShape*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::TopTools_Array1OfShape::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TopTools_Array1OfShape*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool Macad::Occt::TopTools_Array1OfShape::IsDeletable()
{
    bool _result = ((::TopTools_Array1OfShape*)_NativeInstance)->IsDeletable();
    return _result;
}

System::Collections::Generic::IEnumerator<Macad::Occt::TopoDS_Shape^>^ Macad::Occt::TopTools_Array1OfShape::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::TopoDS_Shape^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TopTools_Array1OfShape::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::TopoDS_Shape^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TopTools_Array1OfShape::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TopTools_Array2OfShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_Array2OfShape::TopTools_Array2OfShape()
    : Macad::Occt::BaseClass<::TopTools_Array2OfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_Array2OfShape();
}

Macad::Occt::TopTools_Array2OfShape::TopTools_Array2OfShape(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : Macad::Occt::BaseClass<::TopTools_Array2OfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_Array2OfShape(theRowLower, theRowUpper, theColLower, theColUpper);
}

Macad::Occt::TopTools_Array2OfShape::TopTools_Array2OfShape(Macad::Occt::TopoDS_Shape^ theBegin, int theRowLower, int theRowUpper, int theColLower, int theColUpper)
    : Macad::Occt::BaseClass<::TopTools_Array2OfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_Array2OfShape(*(::TopoDS_Shape*)theBegin->NativeInstance, theRowLower, theRowUpper, theColLower, theColUpper);
}

int Macad::Occt::TopTools_Array2OfShape::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::TopTools_Array2OfShape::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int Macad::Occt::TopTools_Array2OfShape::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::TopTools_Array2OfShape::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

int Macad::Occt::TopTools_Array2OfShape::Size()
{
    int _result = ((::TopTools_Array2OfShape*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TopTools_Array2OfShape::Length()
{
    int _result = ((::TopTools_Array2OfShape*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TopTools_Array2OfShape::NbRows()
{
    int _result = ((::TopTools_Array2OfShape*)_NativeInstance)->NbRows();
    return _result;
}

int Macad::Occt::TopTools_Array2OfShape::NbColumns()
{
    int _result = ((::TopTools_Array2OfShape*)_NativeInstance)->NbColumns();
    return _result;
}

int Macad::Occt::TopTools_Array2OfShape::RowLength()
{
    int _result = ((::TopTools_Array2OfShape*)_NativeInstance)->RowLength();
    return _result;
}

int Macad::Occt::TopTools_Array2OfShape::ColLength()
{
    int _result = ((::TopTools_Array2OfShape*)_NativeInstance)->ColLength();
    return _result;
}

int Macad::Occt::TopTools_Array2OfShape::LowerRow()
{
    int _result = ((::TopTools_Array2OfShape*)_NativeInstance)->LowerRow();
    return _result;
}

int Macad::Occt::TopTools_Array2OfShape::UpperRow()
{
    int _result = ((::TopTools_Array2OfShape*)_NativeInstance)->UpperRow();
    return _result;
}

int Macad::Occt::TopTools_Array2OfShape::LowerCol()
{
    int _result = ((::TopTools_Array2OfShape*)_NativeInstance)->LowerCol();
    return _result;
}

int Macad::Occt::TopTools_Array2OfShape::UpperCol()
{
    int _result = ((::TopTools_Array2OfShape*)_NativeInstance)->UpperCol();
    return _result;
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
    *_result = (::TopoDS_Shape)((::TopTools_Array2OfShape*)_NativeInstance)->Value(theRow, theCol);
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

void Macad::Occt::TopTools_Array2OfShape::Init(Macad::Occt::TopoDS_Shape^ theValue)
{
    ((::TopTools_Array2OfShape*)_NativeInstance)->Init(*(::TopoDS_Shape*)theValue->NativeInstance);
}

bool Macad::Occt::TopTools_Array2OfShape::IsEmpty()
{
    bool _result = ((::TopTools_Array2OfShape*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TopTools_Array2OfShape::Lower()
{
    int _result = ((::TopTools_Array2OfShape*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TopTools_Array2OfShape::Upper()
{
    int _result = ((::TopTools_Array2OfShape*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_Array2OfShape::First()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_Array2OfShape*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_Array2OfShape::ChangeFirst()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopTools_Array2OfShape*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_Array2OfShape::Last()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_Array2OfShape*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_Array2OfShape::ChangeLast()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopTools_Array2OfShape*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::TopTools_Array2OfShape::UpdateLowerBound(int theLower)
{
    ((::TopTools_Array2OfShape*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::TopTools_Array2OfShape::UpdateUpperBound(int theUpper)
{
    ((::TopTools_Array2OfShape*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool Macad::Occt::TopTools_Array2OfShape::IsDeletable()
{
    bool _result = ((::TopTools_Array2OfShape*)_NativeInstance)->IsDeletable();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TopTools_Array2OfShape::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfIntegerListOfShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_DataMapOfIntegerListOfShape::TopTools_DataMapOfIntegerListOfShape()
    : Macad::Occt::BaseClass<::TopTools_DataMapOfIntegerListOfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfIntegerListOfShape();
}

Macad::Occt::TopTools_DataMapOfIntegerListOfShape::TopTools_DataMapOfIntegerListOfShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TopTools_DataMapOfIntegerListOfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfIntegerListOfShape(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::TopTools_DataMapOfIntegerListOfShape::TopTools_DataMapOfIntegerListOfShape(int theNbBuckets)
    : Macad::Occt::BaseClass<::TopTools_DataMapOfIntegerListOfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfIntegerListOfShape(theNbBuckets, 0L);
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

void Macad::Occt::TopTools_DataMapOfIntegerListOfShape::ReSize(int N)
{
    ((::TopTools_DataMapOfIntegerListOfShape*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::TopTools_DataMapOfIntegerListOfShape::Bind(int theKey, Macad::Occt::TopoDS_ListOfShape^ theItem)
{
    pin_ptr<int> pp_theKey = &theKey;
    bool _result = ((::TopTools_DataMapOfIntegerListOfShape*)_NativeInstance)->Bind(*(int*)pp_theKey, *(::TopoDS_ListOfShape*)theItem->NativeInstance);
    return _result;
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::TopTools_DataMapOfIntegerListOfShape::Bound(int theKey, Macad::Occt::TopoDS_ListOfShape^ theItem)
{
    pin_ptr<int> pp_theKey = &theKey;
    ::TopoDS_ListOfShape* _result = ((::TopTools_DataMapOfIntegerListOfShape*)_NativeInstance)->Bound(*(int*)pp_theKey, *(::TopoDS_ListOfShape*)theItem->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

bool Macad::Occt::TopTools_DataMapOfIntegerListOfShape::IsBound(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    bool _result = ((::TopTools_DataMapOfIntegerListOfShape*)_NativeInstance)->IsBound(*(int*)pp_theKey);
    return _result;
}

bool Macad::Occt::TopTools_DataMapOfIntegerListOfShape::UnBind(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    bool _result = ((::TopTools_DataMapOfIntegerListOfShape*)_NativeInstance)->UnBind(*(int*)pp_theKey);
    return _result;
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::TopTools_DataMapOfIntegerListOfShape::Seek(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    const ::TopoDS_ListOfShape* _result = ((::TopTools_DataMapOfIntegerListOfShape*)_NativeInstance)->Seek(*(int*)pp_theKey);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape((::TopoDS_ListOfShape*)_result);
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::TopTools_DataMapOfIntegerListOfShape::Find(int theKey)
{
    ::TopoDS_ListOfShape* _result = new ::TopoDS_ListOfShape();
    pin_ptr<int> pp_theKey = &theKey;
    *_result = (::TopoDS_ListOfShape)((::TopTools_DataMapOfIntegerListOfShape*)_NativeInstance)->Find(*(int*)pp_theKey);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::TopTools_DataMapOfIntegerListOfShape::ChangeSeek(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    ::TopoDS_ListOfShape* _result = ((::TopTools_DataMapOfIntegerListOfShape*)_NativeInstance)->ChangeSeek(*(int*)pp_theKey);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::TopTools_DataMapOfIntegerListOfShape::ChangeFind(int theKey)
{
    ::TopoDS_ListOfShape* _result = new ::TopoDS_ListOfShape();
    pin_ptr<int> pp_theKey = &theKey;
    *_result = ((::TopTools_DataMapOfIntegerListOfShape*)_NativeInstance)->ChangeFind(*(int*)pp_theKey);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

void Macad::Occt::TopTools_DataMapOfIntegerListOfShape::Clear(bool doReleaseMemory)
{
    ((::TopTools_DataMapOfIntegerListOfShape*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopTools_DataMapOfIntegerListOfShape::Clear()
{
    ((::TopTools_DataMapOfIntegerListOfShape*)_NativeInstance)->Clear(false);
}

int Macad::Occt::TopTools_DataMapOfIntegerListOfShape::Size()
{
    int _result = ((::TopTools_DataMapOfIntegerListOfShape*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfIntegerListOfShape::Iterator
//---------------------------------------------------------------------

Macad::Occt::TopTools_DataMapOfIntegerListOfShape::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TopTools_DataMapOfIntegerListOfShape::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfIntegerListOfShape::Iterator();
}

bool Macad::Occt::TopTools_DataMapOfIntegerListOfShape::Iterator::More()
{
    bool _result = ((::TopTools_DataMapOfIntegerListOfShape::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TopTools_DataMapOfIntegerListOfShape::Iterator::Next()
{
    ((::TopTools_DataMapOfIntegerListOfShape::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::TopTools_DataMapOfIntegerListOfShape::Iterator::Value()
{
    ::TopoDS_ListOfShape* _result = new ::TopoDS_ListOfShape();
    *_result = (::TopoDS_ListOfShape)((::TopTools_DataMapOfIntegerListOfShape::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::TopTools_DataMapOfIntegerListOfShape::Iterator::ChangeValue()
{
    ::TopoDS_ListOfShape* _result = new ::TopoDS_ListOfShape();
    *_result = ((::TopTools_DataMapOfIntegerListOfShape::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

int Macad::Occt::TopTools_DataMapOfIntegerListOfShape::Iterator::Key()
{
    int _result = ((::TopTools_DataMapOfIntegerListOfShape::Iterator*)_NativeInstance)->Key();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfIntegerShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_DataMapOfIntegerShape::TopTools_DataMapOfIntegerShape()
    : Macad::Occt::BaseClass<::TopTools_DataMapOfIntegerShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfIntegerShape();
}

Macad::Occt::TopTools_DataMapOfIntegerShape::TopTools_DataMapOfIntegerShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TopTools_DataMapOfIntegerShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfIntegerShape(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::TopTools_DataMapOfIntegerShape::TopTools_DataMapOfIntegerShape(int theNbBuckets)
    : Macad::Occt::BaseClass<::TopTools_DataMapOfIntegerShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfIntegerShape(theNbBuckets, 0L);
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

void Macad::Occt::TopTools_DataMapOfIntegerShape::ReSize(int N)
{
    ((::TopTools_DataMapOfIntegerShape*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::TopTools_DataMapOfIntegerShape::Bind(int theKey, Macad::Occt::TopoDS_Shape^ theItem)
{
    pin_ptr<int> pp_theKey = &theKey;
    bool _result = ((::TopTools_DataMapOfIntegerShape*)_NativeInstance)->Bind(*(int*)pp_theKey, *(::TopoDS_Shape*)theItem->NativeInstance);
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfIntegerShape::Bound(int theKey, Macad::Occt::TopoDS_Shape^ theItem)
{
    pin_ptr<int> pp_theKey = &theKey;
    ::TopoDS_Shape* _result = ((::TopTools_DataMapOfIntegerShape*)_NativeInstance)->Bound(*(int*)pp_theKey, *(::TopoDS_Shape*)theItem->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::TopTools_DataMapOfIntegerShape::IsBound(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    bool _result = ((::TopTools_DataMapOfIntegerShape*)_NativeInstance)->IsBound(*(int*)pp_theKey);
    return _result;
}

bool Macad::Occt::TopTools_DataMapOfIntegerShape::UnBind(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    bool _result = ((::TopTools_DataMapOfIntegerShape*)_NativeInstance)->UnBind(*(int*)pp_theKey);
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfIntegerShape::Seek(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    const ::TopoDS_Shape* _result = ((::TopTools_DataMapOfIntegerShape*)_NativeInstance)->Seek(*(int*)pp_theKey);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape((::TopoDS_Shape*)_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfIntegerShape::Find(int theKey)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    pin_ptr<int> pp_theKey = &theKey;
    *_result = (::TopoDS_Shape)((::TopTools_DataMapOfIntegerShape*)_NativeInstance)->Find(*(int*)pp_theKey);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfIntegerShape::ChangeSeek(int theKey)
{
    pin_ptr<int> pp_theKey = &theKey;
    ::TopoDS_Shape* _result = ((::TopTools_DataMapOfIntegerShape*)_NativeInstance)->ChangeSeek(*(int*)pp_theKey);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfIntegerShape::ChangeFind(int theKey)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    pin_ptr<int> pp_theKey = &theKey;
    *_result = ((::TopTools_DataMapOfIntegerShape*)_NativeInstance)->ChangeFind(*(int*)pp_theKey);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::TopTools_DataMapOfIntegerShape::Clear(bool doReleaseMemory)
{
    ((::TopTools_DataMapOfIntegerShape*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopTools_DataMapOfIntegerShape::Clear()
{
    ((::TopTools_DataMapOfIntegerShape*)_NativeInstance)->Clear(false);
}

int Macad::Occt::TopTools_DataMapOfIntegerShape::Size()
{
    int _result = ((::TopTools_DataMapOfIntegerShape*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfIntegerShape::Iterator
//---------------------------------------------------------------------

Macad::Occt::TopTools_DataMapOfIntegerShape::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TopTools_DataMapOfIntegerShape::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfIntegerShape::Iterator();
}

bool Macad::Occt::TopTools_DataMapOfIntegerShape::Iterator::More()
{
    bool _result = ((::TopTools_DataMapOfIntegerShape::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TopTools_DataMapOfIntegerShape::Iterator::Next()
{
    ((::TopTools_DataMapOfIntegerShape::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfIntegerShape::Iterator::Value()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_DataMapOfIntegerShape::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfIntegerShape::Iterator::ChangeValue()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopTools_DataMapOfIntegerShape::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

int Macad::Occt::TopTools_DataMapOfIntegerShape::Iterator::Key()
{
    int _result = ((::TopTools_DataMapOfIntegerShape::Iterator*)_NativeInstance)->Key();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfOrientedShapeInteger
//---------------------------------------------------------------------

Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::TopTools_DataMapOfOrientedShapeInteger()
    : Macad::Occt::BaseClass<::TopTools_DataMapOfOrientedShapeInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfOrientedShapeInteger();
}

Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::TopTools_DataMapOfOrientedShapeInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TopTools_DataMapOfOrientedShapeInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfOrientedShapeInteger(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::TopTools_DataMapOfOrientedShapeInteger(int theNbBuckets)
    : Macad::Occt::BaseClass<::TopTools_DataMapOfOrientedShapeInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfOrientedShapeInteger(theNbBuckets, 0L);
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

void Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::ReSize(int N)
{
    ((::TopTools_DataMapOfOrientedShapeInteger*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::Bind(Macad::Occt::TopoDS_Shape^ theKey, int theItem)
{
    pin_ptr<int> pp_theItem = &theItem;
    bool _result = ((::TopTools_DataMapOfOrientedShapeInteger*)_NativeInstance)->Bind(*(::TopoDS_Shape*)theKey->NativeInstance, *(int*)pp_theItem);
    return _result;
}

int Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::Bound(Macad::Occt::TopoDS_Shape^ theKey, int theItem)
{
    throw gcnew System::NotImplementedException();
}

bool Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::TopTools_DataMapOfOrientedShapeInteger*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

bool Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::TopTools_DataMapOfOrientedShapeInteger*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

int Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::Seek(Macad::Occt::TopoDS_Shape^ theKey)
{
    throw gcnew System::NotImplementedException();
}

int Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::Find(Macad::Occt::TopoDS_Shape^ theKey)
{
    int _result = ((::TopTools_DataMapOfOrientedShapeInteger*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

int Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey)
{
    throw gcnew System::NotImplementedException();
}

int Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::ChangeFind(Macad::Occt::TopoDS_Shape^ theKey)
{
    int _result = ((::TopTools_DataMapOfOrientedShapeInteger*)_NativeInstance)->ChangeFind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

void Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::Clear(bool doReleaseMemory)
{
    ((::TopTools_DataMapOfOrientedShapeInteger*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::Clear()
{
    ((::TopTools_DataMapOfOrientedShapeInteger*)_NativeInstance)->Clear(false);
}

int Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::Size()
{
    int _result = ((::TopTools_DataMapOfOrientedShapeInteger*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfOrientedShapeInteger::Iterator
//---------------------------------------------------------------------

Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TopTools_DataMapOfOrientedShapeInteger::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfOrientedShapeInteger::Iterator();
}

bool Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::Iterator::More()
{
    bool _result = ((::TopTools_DataMapOfOrientedShapeInteger::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::Iterator::Next()
{
    ((::TopTools_DataMapOfOrientedShapeInteger::Iterator*)_NativeInstance)->Next();
}

int Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::Iterator::Value()
{
    int _result = ((::TopTools_DataMapOfOrientedShapeInteger::Iterator*)_NativeInstance)->Value();
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfOrientedShapeInteger::Iterator::Key()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_DataMapOfOrientedShapeInteger::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfOrientedShapeShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_DataMapOfOrientedShapeShape::TopTools_DataMapOfOrientedShapeShape()
    : Macad::Occt::BaseClass<::TopTools_DataMapOfOrientedShapeShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfOrientedShapeShape();
}

Macad::Occt::TopTools_DataMapOfOrientedShapeShape::TopTools_DataMapOfOrientedShapeShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TopTools_DataMapOfOrientedShapeShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfOrientedShapeShape(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::TopTools_DataMapOfOrientedShapeShape::TopTools_DataMapOfOrientedShapeShape(int theNbBuckets)
    : Macad::Occt::BaseClass<::TopTools_DataMapOfOrientedShapeShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfOrientedShapeShape(theNbBuckets, 0L);
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

void Macad::Occt::TopTools_DataMapOfOrientedShapeShape::ReSize(int N)
{
    ((::TopTools_DataMapOfOrientedShapeShape*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::TopTools_DataMapOfOrientedShapeShape::Bind(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopoDS_Shape^ theItem)
{
    bool _result = ((::TopTools_DataMapOfOrientedShapeShape*)_NativeInstance)->Bind(*(::TopoDS_Shape*)theKey->NativeInstance, *(::TopoDS_Shape*)theItem->NativeInstance);
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfOrientedShapeShape::Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopoDS_Shape^ theItem)
{
    ::TopoDS_Shape* _result = ((::TopTools_DataMapOfOrientedShapeShape*)_NativeInstance)->Bound(*(::TopoDS_Shape*)theKey->NativeInstance, *(::TopoDS_Shape*)theItem->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::TopTools_DataMapOfOrientedShapeShape::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::TopTools_DataMapOfOrientedShapeShape*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

bool Macad::Occt::TopTools_DataMapOfOrientedShapeShape::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::TopTools_DataMapOfOrientedShapeShape*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfOrientedShapeShape::Seek(Macad::Occt::TopoDS_Shape^ theKey)
{
    const ::TopoDS_Shape* _result = ((::TopTools_DataMapOfOrientedShapeShape*)_NativeInstance)->Seek(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape((::TopoDS_Shape*)_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfOrientedShapeShape::Find(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_DataMapOfOrientedShapeShape*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfOrientedShapeShape::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::TopoDS_Shape* _result = ((::TopTools_DataMapOfOrientedShapeShape*)_NativeInstance)->ChangeSeek(*(::TopoDS_Shape*)theKey->NativeInstance);
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
    ((::TopTools_DataMapOfOrientedShapeShape*)_NativeInstance)->Clear(false);
}

int Macad::Occt::TopTools_DataMapOfOrientedShapeShape::Size()
{
    int _result = ((::TopTools_DataMapOfOrientedShapeShape*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfOrientedShapeShape::Iterator
//---------------------------------------------------------------------

Macad::Occt::TopTools_DataMapOfOrientedShapeShape::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TopTools_DataMapOfOrientedShapeShape::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfOrientedShapeShape::Iterator();
}

bool Macad::Occt::TopTools_DataMapOfOrientedShapeShape::Iterator::More()
{
    bool _result = ((::TopTools_DataMapOfOrientedShapeShape::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TopTools_DataMapOfOrientedShapeShape::Iterator::Next()
{
    ((::TopTools_DataMapOfOrientedShapeShape::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfOrientedShapeShape::Iterator::Value()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_DataMapOfOrientedShapeShape::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfOrientedShapeShape::Iterator::ChangeValue()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopTools_DataMapOfOrientedShapeShape::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfOrientedShapeShape::Iterator::Key()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_DataMapOfOrientedShapeShape::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeInteger
//---------------------------------------------------------------------

Macad::Occt::TopTools_DataMapOfShapeInteger::TopTools_DataMapOfShapeInteger()
    : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfShapeInteger();
}

Macad::Occt::TopTools_DataMapOfShapeInteger::TopTools_DataMapOfShapeInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfShapeInteger(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::TopTools_DataMapOfShapeInteger::TopTools_DataMapOfShapeInteger(int theNbBuckets)
    : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfShapeInteger(theNbBuckets, 0L);
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

void Macad::Occt::TopTools_DataMapOfShapeInteger::ReSize(int N)
{
    ((::TopTools_DataMapOfShapeInteger*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::TopTools_DataMapOfShapeInteger::Bind(Macad::Occt::TopoDS_Shape^ theKey, int theItem)
{
    pin_ptr<int> pp_theItem = &theItem;
    bool _result = ((::TopTools_DataMapOfShapeInteger*)_NativeInstance)->Bind(*(::TopoDS_Shape*)theKey->NativeInstance, *(int*)pp_theItem);
    return _result;
}

int Macad::Occt::TopTools_DataMapOfShapeInteger::Bound(Macad::Occt::TopoDS_Shape^ theKey, int theItem)
{
    throw gcnew System::NotImplementedException();
}

bool Macad::Occt::TopTools_DataMapOfShapeInteger::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::TopTools_DataMapOfShapeInteger*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

bool Macad::Occt::TopTools_DataMapOfShapeInteger::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::TopTools_DataMapOfShapeInteger*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

int Macad::Occt::TopTools_DataMapOfShapeInteger::Seek(Macad::Occt::TopoDS_Shape^ theKey)
{
    throw gcnew System::NotImplementedException();
}

int Macad::Occt::TopTools_DataMapOfShapeInteger::Find(Macad::Occt::TopoDS_Shape^ theKey)
{
    int _result = ((::TopTools_DataMapOfShapeInteger*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

int Macad::Occt::TopTools_DataMapOfShapeInteger::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey)
{
    throw gcnew System::NotImplementedException();
}

int Macad::Occt::TopTools_DataMapOfShapeInteger::ChangeFind(Macad::Occt::TopoDS_Shape^ theKey)
{
    int _result = ((::TopTools_DataMapOfShapeInteger*)_NativeInstance)->ChangeFind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

void Macad::Occt::TopTools_DataMapOfShapeInteger::Clear(bool doReleaseMemory)
{
    ((::TopTools_DataMapOfShapeInteger*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopTools_DataMapOfShapeInteger::Clear()
{
    ((::TopTools_DataMapOfShapeInteger*)_NativeInstance)->Clear(false);
}

int Macad::Occt::TopTools_DataMapOfShapeInteger::Size()
{
    int _result = ((::TopTools_DataMapOfShapeInteger*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeInteger::Iterator
//---------------------------------------------------------------------

Macad::Occt::TopTools_DataMapOfShapeInteger::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeInteger::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfShapeInteger::Iterator();
}

bool Macad::Occt::TopTools_DataMapOfShapeInteger::Iterator::More()
{
    bool _result = ((::TopTools_DataMapOfShapeInteger::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TopTools_DataMapOfShapeInteger::Iterator::Next()
{
    ((::TopTools_DataMapOfShapeInteger::Iterator*)_NativeInstance)->Next();
}

int Macad::Occt::TopTools_DataMapOfShapeInteger::Iterator::Value()
{
    int _result = ((::TopTools_DataMapOfShapeInteger::Iterator*)_NativeInstance)->Value();
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfShapeInteger::Iterator::Key()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_DataMapOfShapeInteger::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeListOfInteger
//---------------------------------------------------------------------

Macad::Occt::TopTools_DataMapOfShapeListOfInteger::TopTools_DataMapOfShapeListOfInteger()
    : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeListOfInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfShapeListOfInteger();
}

Macad::Occt::TopTools_DataMapOfShapeListOfInteger::TopTools_DataMapOfShapeListOfInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeListOfInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfShapeListOfInteger(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::TopTools_DataMapOfShapeListOfInteger::TopTools_DataMapOfShapeListOfInteger(int theNbBuckets)
    : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeListOfInteger>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfShapeListOfInteger(theNbBuckets, 0L);
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

void Macad::Occt::TopTools_DataMapOfShapeListOfInteger::ReSize(int N)
{
    ((::TopTools_DataMapOfShapeListOfInteger*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::TopTools_DataMapOfShapeListOfInteger::Bind(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TColStd_ListOfInteger^ theItem)
{
    bool _result = ((::TopTools_DataMapOfShapeListOfInteger*)_NativeInstance)->Bind(*(::TopoDS_Shape*)theKey->NativeInstance, *(::TColStd_ListOfInteger*)theItem->NativeInstance);
    return _result;
}

Macad::Occt::TColStd_ListOfInteger^ Macad::Occt::TopTools_DataMapOfShapeListOfInteger::Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TColStd_ListOfInteger^ theItem)
{
    ::TColStd_ListOfInteger* _result = ((::TopTools_DataMapOfShapeListOfInteger*)_NativeInstance)->Bound(*(::TopoDS_Shape*)theKey->NativeInstance, *(::TColStd_ListOfInteger*)theItem->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfInteger(_result);
}

bool Macad::Occt::TopTools_DataMapOfShapeListOfInteger::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::TopTools_DataMapOfShapeListOfInteger*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

bool Macad::Occt::TopTools_DataMapOfShapeListOfInteger::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::TopTools_DataMapOfShapeListOfInteger*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

Macad::Occt::TColStd_ListOfInteger^ Macad::Occt::TopTools_DataMapOfShapeListOfInteger::Seek(Macad::Occt::TopoDS_Shape^ theKey)
{
    const ::TColStd_ListOfInteger* _result = ((::TopTools_DataMapOfShapeListOfInteger*)_NativeInstance)->Seek(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfInteger((::TColStd_ListOfInteger*)_result);
}

Macad::Occt::TColStd_ListOfInteger^ Macad::Occt::TopTools_DataMapOfShapeListOfInteger::Find(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::TColStd_ListOfInteger* _result = new ::TColStd_ListOfInteger();
    *_result = (::TColStd_ListOfInteger)((::TopTools_DataMapOfShapeListOfInteger*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfInteger(_result);
}

Macad::Occt::TColStd_ListOfInteger^ Macad::Occt::TopTools_DataMapOfShapeListOfInteger::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::TColStd_ListOfInteger* _result = ((::TopTools_DataMapOfShapeListOfInteger*)_NativeInstance)->ChangeSeek(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfInteger(_result);
}

Macad::Occt::TColStd_ListOfInteger^ Macad::Occt::TopTools_DataMapOfShapeListOfInteger::ChangeFind(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::TColStd_ListOfInteger* _result = new ::TColStd_ListOfInteger();
    *_result = ((::TopTools_DataMapOfShapeListOfInteger*)_NativeInstance)->ChangeFind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfInteger(_result);
}

void Macad::Occt::TopTools_DataMapOfShapeListOfInteger::Clear(bool doReleaseMemory)
{
    ((::TopTools_DataMapOfShapeListOfInteger*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopTools_DataMapOfShapeListOfInteger::Clear()
{
    ((::TopTools_DataMapOfShapeListOfInteger*)_NativeInstance)->Clear(false);
}

int Macad::Occt::TopTools_DataMapOfShapeListOfInteger::Size()
{
    int _result = ((::TopTools_DataMapOfShapeListOfInteger*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeListOfInteger::Iterator
//---------------------------------------------------------------------

Macad::Occt::TopTools_DataMapOfShapeListOfInteger::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeListOfInteger::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfShapeListOfInteger::Iterator();
}

bool Macad::Occt::TopTools_DataMapOfShapeListOfInteger::Iterator::More()
{
    bool _result = ((::TopTools_DataMapOfShapeListOfInteger::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TopTools_DataMapOfShapeListOfInteger::Iterator::Next()
{
    ((::TopTools_DataMapOfShapeListOfInteger::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TColStd_ListOfInteger^ Macad::Occt::TopTools_DataMapOfShapeListOfInteger::Iterator::Value()
{
    ::TColStd_ListOfInteger* _result = new ::TColStd_ListOfInteger();
    *_result = (::TColStd_ListOfInteger)((::TopTools_DataMapOfShapeListOfInteger::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfInteger(_result);
}

Macad::Occt::TColStd_ListOfInteger^ Macad::Occt::TopTools_DataMapOfShapeListOfInteger::Iterator::ChangeValue()
{
    ::TColStd_ListOfInteger* _result = new ::TColStd_ListOfInteger();
    *_result = ((::TopTools_DataMapOfShapeListOfInteger::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_ListOfInteger(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfShapeListOfInteger::Iterator::Key()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_DataMapOfShapeListOfInteger::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeListOfShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_DataMapOfShapeListOfShape::TopTools_DataMapOfShapeListOfShape()
    : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeListOfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfShapeListOfShape();
}

Macad::Occt::TopTools_DataMapOfShapeListOfShape::TopTools_DataMapOfShapeListOfShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeListOfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfShapeListOfShape(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::TopTools_DataMapOfShapeListOfShape::TopTools_DataMapOfShapeListOfShape(int theNbBuckets)
    : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeListOfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfShapeListOfShape(theNbBuckets, 0L);
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

void Macad::Occt::TopTools_DataMapOfShapeListOfShape::ReSize(int N)
{
    ((::TopTools_DataMapOfShapeListOfShape*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::TopTools_DataMapOfShapeListOfShape::Bind(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopoDS_ListOfShape^ theItem)
{
    bool _result = ((::TopTools_DataMapOfShapeListOfShape*)_NativeInstance)->Bind(*(::TopoDS_Shape*)theKey->NativeInstance, *(::TopoDS_ListOfShape*)theItem->NativeInstance);
    return _result;
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::TopTools_DataMapOfShapeListOfShape::Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopoDS_ListOfShape^ theItem)
{
    ::TopoDS_ListOfShape* _result = ((::TopTools_DataMapOfShapeListOfShape*)_NativeInstance)->Bound(*(::TopoDS_Shape*)theKey->NativeInstance, *(::TopoDS_ListOfShape*)theItem->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

bool Macad::Occt::TopTools_DataMapOfShapeListOfShape::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::TopTools_DataMapOfShapeListOfShape*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

bool Macad::Occt::TopTools_DataMapOfShapeListOfShape::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::TopTools_DataMapOfShapeListOfShape*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::TopTools_DataMapOfShapeListOfShape::Seek(Macad::Occt::TopoDS_Shape^ theKey)
{
    const ::TopoDS_ListOfShape* _result = ((::TopTools_DataMapOfShapeListOfShape*)_NativeInstance)->Seek(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape((::TopoDS_ListOfShape*)_result);
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::TopTools_DataMapOfShapeListOfShape::Find(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::TopoDS_ListOfShape* _result = new ::TopoDS_ListOfShape();
    *_result = (::TopoDS_ListOfShape)((::TopTools_DataMapOfShapeListOfShape*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::TopTools_DataMapOfShapeListOfShape::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::TopoDS_ListOfShape* _result = ((::TopTools_DataMapOfShapeListOfShape*)_NativeInstance)->ChangeSeek(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::TopTools_DataMapOfShapeListOfShape::ChangeFind(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::TopoDS_ListOfShape* _result = new ::TopoDS_ListOfShape();
    *_result = ((::TopTools_DataMapOfShapeListOfShape*)_NativeInstance)->ChangeFind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

void Macad::Occt::TopTools_DataMapOfShapeListOfShape::Clear(bool doReleaseMemory)
{
    ((::TopTools_DataMapOfShapeListOfShape*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopTools_DataMapOfShapeListOfShape::Clear()
{
    ((::TopTools_DataMapOfShapeListOfShape*)_NativeInstance)->Clear(false);
}

int Macad::Occt::TopTools_DataMapOfShapeListOfShape::Size()
{
    int _result = ((::TopTools_DataMapOfShapeListOfShape*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeListOfShape::Iterator
//---------------------------------------------------------------------

Macad::Occt::TopTools_DataMapOfShapeListOfShape::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeListOfShape::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfShapeListOfShape::Iterator();
}

bool Macad::Occt::TopTools_DataMapOfShapeListOfShape::Iterator::More()
{
    bool _result = ((::TopTools_DataMapOfShapeListOfShape::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TopTools_DataMapOfShapeListOfShape::Iterator::Next()
{
    ((::TopTools_DataMapOfShapeListOfShape::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::TopTools_DataMapOfShapeListOfShape::Iterator::Value()
{
    ::TopoDS_ListOfShape* _result = new ::TopoDS_ListOfShape();
    *_result = (::TopoDS_ListOfShape)((::TopTools_DataMapOfShapeListOfShape::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::TopTools_DataMapOfShapeListOfShape::Iterator::ChangeValue()
{
    ::TopoDS_ListOfShape* _result = new ::TopoDS_ListOfShape();
    *_result = ((::TopTools_DataMapOfShapeListOfShape::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfShapeListOfShape::Iterator::Key()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_DataMapOfShapeListOfShape::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeReal
//---------------------------------------------------------------------

Macad::Occt::TopTools_DataMapOfShapeReal::TopTools_DataMapOfShapeReal()
    : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeReal>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfShapeReal();
}

Macad::Occt::TopTools_DataMapOfShapeReal::TopTools_DataMapOfShapeReal(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeReal>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfShapeReal(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::TopTools_DataMapOfShapeReal::TopTools_DataMapOfShapeReal(int theNbBuckets)
    : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeReal>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfShapeReal(theNbBuckets, 0L);
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

void Macad::Occt::TopTools_DataMapOfShapeReal::ReSize(int N)
{
    ((::TopTools_DataMapOfShapeReal*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::TopTools_DataMapOfShapeReal::Bind(Macad::Occt::TopoDS_Shape^ theKey, double theItem)
{
    pin_ptr<double> pp_theItem = &theItem;
    bool _result = ((::TopTools_DataMapOfShapeReal*)_NativeInstance)->Bind(*(::TopoDS_Shape*)theKey->NativeInstance, *(double*)pp_theItem);
    return _result;
}

double Macad::Occt::TopTools_DataMapOfShapeReal::Bound(Macad::Occt::TopoDS_Shape^ theKey, double theItem)
{
    throw gcnew System::NotImplementedException();
}

bool Macad::Occt::TopTools_DataMapOfShapeReal::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::TopTools_DataMapOfShapeReal*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

bool Macad::Occt::TopTools_DataMapOfShapeReal::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::TopTools_DataMapOfShapeReal*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

double Macad::Occt::TopTools_DataMapOfShapeReal::Seek(Macad::Occt::TopoDS_Shape^ theKey)
{
    throw gcnew System::NotImplementedException();
}

double Macad::Occt::TopTools_DataMapOfShapeReal::Find(Macad::Occt::TopoDS_Shape^ theKey)
{
    double _result = ((::TopTools_DataMapOfShapeReal*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

double Macad::Occt::TopTools_DataMapOfShapeReal::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey)
{
    throw gcnew System::NotImplementedException();
}

double Macad::Occt::TopTools_DataMapOfShapeReal::ChangeFind(Macad::Occt::TopoDS_Shape^ theKey)
{
    double _result = ((::TopTools_DataMapOfShapeReal*)_NativeInstance)->ChangeFind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

void Macad::Occt::TopTools_DataMapOfShapeReal::Clear(bool doReleaseMemory)
{
    ((::TopTools_DataMapOfShapeReal*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopTools_DataMapOfShapeReal::Clear()
{
    ((::TopTools_DataMapOfShapeReal*)_NativeInstance)->Clear(false);
}

int Macad::Occt::TopTools_DataMapOfShapeReal::Size()
{
    int _result = ((::TopTools_DataMapOfShapeReal*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeReal::Iterator
//---------------------------------------------------------------------

Macad::Occt::TopTools_DataMapOfShapeReal::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfShapeReal::Iterator();
}

bool Macad::Occt::TopTools_DataMapOfShapeReal::Iterator::More()
{
    bool _result = ((::TopTools_DataMapOfShapeReal::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TopTools_DataMapOfShapeReal::Iterator::Next()
{
    ((::TopTools_DataMapOfShapeReal::Iterator*)_NativeInstance)->Next();
}

double Macad::Occt::TopTools_DataMapOfShapeReal::Iterator::Value()
{
    double _result = ((::TopTools_DataMapOfShapeReal::Iterator*)_NativeInstance)->Value();
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfShapeReal::Iterator::Key()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_DataMapOfShapeReal::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  TopTools_SequenceOfShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_SequenceOfShape::TopTools_SequenceOfShape()
    : Macad::Occt::BaseClass<::TopTools_SequenceOfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_SequenceOfShape();
}

Macad::Occt::TopTools_SequenceOfShape::TopTools_SequenceOfShape(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TopTools_SequenceOfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_SequenceOfShape(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::TopTools_SequenceOfShape::Size()
{
    int _result = ((::TopTools_SequenceOfShape*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TopTools_SequenceOfShape::Length()
{
    int _result = ((::TopTools_SequenceOfShape*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TopTools_SequenceOfShape::Lower()
{
    int _result = ((::TopTools_SequenceOfShape*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TopTools_SequenceOfShape::Upper()
{
    int _result = ((::TopTools_SequenceOfShape*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::TopTools_SequenceOfShape::IsEmpty()
{
    bool _result = ((::TopTools_SequenceOfShape*)_NativeInstance)->IsEmpty();
    return _result;
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
    ((::TopTools_SequenceOfShape*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
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

void Macad::Occt::TopTools_SequenceOfShape::Remove(Macad::Occt::TopTools_SequenceOfShape::Iterator^ thePosition)
{
    ((::TopTools_SequenceOfShape*)_NativeInstance)->Remove(*(::TopTools_SequenceOfShape::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::TopTools_SequenceOfShape::Append(Macad::Occt::TopoDS_Shape^ theItem)
{
    ((::TopTools_SequenceOfShape*)_NativeInstance)->Append(*(::TopoDS_Shape*)theItem->NativeInstance);
}

void Macad::Occt::TopTools_SequenceOfShape::Prepend(Macad::Occt::TopoDS_Shape^ theItem)
{
    ((::TopTools_SequenceOfShape*)_NativeInstance)->Prepend(*(::TopoDS_Shape*)theItem->NativeInstance);
}

void Macad::Occt::TopTools_SequenceOfShape::InsertBefore(int theIndex, Macad::Occt::TopoDS_Shape^ theItem)
{
    ((::TopTools_SequenceOfShape*)_NativeInstance)->InsertBefore(theIndex, *(::TopoDS_Shape*)theItem->NativeInstance);
}

void Macad::Occt::TopTools_SequenceOfShape::InsertAfter(Macad::Occt::TopTools_SequenceOfShape::Iterator^ thePosition, Macad::Occt::TopoDS_Shape^ theItem)
{
    ((::TopTools_SequenceOfShape*)_NativeInstance)->InsertAfter(*(::TopTools_SequenceOfShape::Iterator*)thePosition->NativeInstance, *(::TopoDS_Shape*)theItem->NativeInstance);
}

void Macad::Occt::TopTools_SequenceOfShape::Split(int theIndex, Macad::Occt::TopTools_SequenceOfShape^ theSeq)
{
    ((::TopTools_SequenceOfShape*)_NativeInstance)->Split(theIndex, *(::TopTools_SequenceOfShape*)theSeq->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_SequenceOfShape::First()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_SequenceOfShape*)_NativeInstance)->First();
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
    *_result = (::TopoDS_Shape)((::TopTools_SequenceOfShape*)_NativeInstance)->Last();
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
    *_result = (::TopoDS_Shape)((::TopTools_SequenceOfShape*)_NativeInstance)->Value(theIndex);
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

System::Collections::Generic::IEnumerator<Macad::Occt::TopoDS_Shape^>^ Macad::Occt::TopTools_SequenceOfShape::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::TopoDS_Shape^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TopTools_SequenceOfShape::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::TopoDS_Shape^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TopTools_SequenceOfShape::Iterator
//---------------------------------------------------------------------

Macad::Occt::TopTools_SequenceOfShape::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TopTools_SequenceOfShape::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_SequenceOfShape::Iterator();
}

bool Macad::Occt::TopTools_SequenceOfShape::Iterator::More()
{
    bool _result = ((::TopTools_SequenceOfShape::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TopTools_SequenceOfShape::Iterator::Next()
{
    ((::TopTools_SequenceOfShape::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_SequenceOfShape::Iterator::Value()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_SequenceOfShape::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_SequenceOfShape::Iterator::ChangeValue()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopTools_SequenceOfShape::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::TopTools_SequenceOfShape::Iterator::IsEqual(Macad::Occt::TopTools_SequenceOfShape::Iterator^ theOther)
{
    bool _result = ((::TopTools_SequenceOfShape::Iterator*)_NativeInstance)->IsEqual(*(::TopTools_SequenceOfShape::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TopTools_SequenceOfShape::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::TopTools_SequenceOfShape::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeSequenceOfShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape::TopTools_DataMapOfShapeSequenceOfShape()
    : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeSequenceOfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfShapeSequenceOfShape();
}

Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape::TopTools_DataMapOfShapeSequenceOfShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeSequenceOfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfShapeSequenceOfShape(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape::TopTools_DataMapOfShapeSequenceOfShape(int theNbBuckets)
    : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeSequenceOfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfShapeSequenceOfShape(theNbBuckets, 0L);
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

void Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape::ReSize(int N)
{
    ((::TopTools_DataMapOfShapeSequenceOfShape*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape::Bind(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopTools_SequenceOfShape^ theItem)
{
    bool _result = ((::TopTools_DataMapOfShapeSequenceOfShape*)_NativeInstance)->Bind(*(::TopoDS_Shape*)theKey->NativeInstance, *(::TopTools_SequenceOfShape*)theItem->NativeInstance);
    return _result;
}

Macad::Occt::TopTools_SequenceOfShape^ Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape::Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopTools_SequenceOfShape^ theItem)
{
    ::TopTools_SequenceOfShape* _result = ((::TopTools_DataMapOfShapeSequenceOfShape*)_NativeInstance)->Bound(*(::TopoDS_Shape*)theKey->NativeInstance, *(::TopTools_SequenceOfShape*)theItem->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_SequenceOfShape(_result);
}

bool Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::TopTools_DataMapOfShapeSequenceOfShape*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

bool Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::TopTools_DataMapOfShapeSequenceOfShape*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

Macad::Occt::TopTools_SequenceOfShape^ Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape::Seek(Macad::Occt::TopoDS_Shape^ theKey)
{
    const ::TopTools_SequenceOfShape* _result = ((::TopTools_DataMapOfShapeSequenceOfShape*)_NativeInstance)->Seek(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_SequenceOfShape((::TopTools_SequenceOfShape*)_result);
}

Macad::Occt::TopTools_SequenceOfShape^ Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape::Find(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::TopTools_SequenceOfShape* _result = new ::TopTools_SequenceOfShape();
    *_result = (::TopTools_SequenceOfShape)((::TopTools_DataMapOfShapeSequenceOfShape*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_SequenceOfShape(_result);
}

Macad::Occt::TopTools_SequenceOfShape^ Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::TopTools_SequenceOfShape* _result = ((::TopTools_DataMapOfShapeSequenceOfShape*)_NativeInstance)->ChangeSeek(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_SequenceOfShape(_result);
}

Macad::Occt::TopTools_SequenceOfShape^ Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape::ChangeFind(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::TopTools_SequenceOfShape* _result = new ::TopTools_SequenceOfShape();
    *_result = ((::TopTools_DataMapOfShapeSequenceOfShape*)_NativeInstance)->ChangeFind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_SequenceOfShape(_result);
}

void Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape::Clear(bool doReleaseMemory)
{
    ((::TopTools_DataMapOfShapeSequenceOfShape*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape::Clear()
{
    ((::TopTools_DataMapOfShapeSequenceOfShape*)_NativeInstance)->Clear(false);
}

int Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape::Size()
{
    int _result = ((::TopTools_DataMapOfShapeSequenceOfShape*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeSequenceOfShape::Iterator
//---------------------------------------------------------------------

Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeSequenceOfShape::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfShapeSequenceOfShape::Iterator();
}

bool Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape::Iterator::More()
{
    bool _result = ((::TopTools_DataMapOfShapeSequenceOfShape::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape::Iterator::Next()
{
    ((::TopTools_DataMapOfShapeSequenceOfShape::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TopTools_SequenceOfShape^ Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape::Iterator::Value()
{
    ::TopTools_SequenceOfShape* _result = new ::TopTools_SequenceOfShape();
    *_result = (::TopTools_SequenceOfShape)((::TopTools_DataMapOfShapeSequenceOfShape::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_SequenceOfShape(_result);
}

Macad::Occt::TopTools_SequenceOfShape^ Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape::Iterator::ChangeValue()
{
    ::TopTools_SequenceOfShape* _result = new ::TopTools_SequenceOfShape();
    *_result = ((::TopTools_DataMapOfShapeSequenceOfShape::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_SequenceOfShape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfShapeSequenceOfShape::Iterator::Key()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_DataMapOfShapeSequenceOfShape::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_DataMapOfShapeShape::TopTools_DataMapOfShapeShape()
    : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfShapeShape();
}

Macad::Occt::TopTools_DataMapOfShapeShape::TopTools_DataMapOfShapeShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfShapeShape(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::TopTools_DataMapOfShapeShape::TopTools_DataMapOfShapeShape(int theNbBuckets)
    : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfShapeShape(theNbBuckets, 0L);
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

void Macad::Occt::TopTools_DataMapOfShapeShape::ReSize(int N)
{
    ((::TopTools_DataMapOfShapeShape*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::TopTools_DataMapOfShapeShape::Bind(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopoDS_Shape^ theItem)
{
    bool _result = ((::TopTools_DataMapOfShapeShape*)_NativeInstance)->Bind(*(::TopoDS_Shape*)theKey->NativeInstance, *(::TopoDS_Shape*)theItem->NativeInstance);
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfShapeShape::Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopoDS_Shape^ theItem)
{
    ::TopoDS_Shape* _result = ((::TopTools_DataMapOfShapeShape*)_NativeInstance)->Bound(*(::TopoDS_Shape*)theKey->NativeInstance, *(::TopoDS_Shape*)theItem->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::TopTools_DataMapOfShapeShape::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::TopTools_DataMapOfShapeShape*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

bool Macad::Occt::TopTools_DataMapOfShapeShape::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::TopTools_DataMapOfShapeShape*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfShapeShape::Seek(Macad::Occt::TopoDS_Shape^ theKey)
{
    const ::TopoDS_Shape* _result = ((::TopTools_DataMapOfShapeShape*)_NativeInstance)->Seek(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape((::TopoDS_Shape*)_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfShapeShape::Find(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_DataMapOfShapeShape*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfShapeShape::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::TopoDS_Shape* _result = ((::TopTools_DataMapOfShapeShape*)_NativeInstance)->ChangeSeek(*(::TopoDS_Shape*)theKey->NativeInstance);
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
    ((::TopTools_DataMapOfShapeShape*)_NativeInstance)->Clear(false);
}

int Macad::Occt::TopTools_DataMapOfShapeShape::Size()
{
    int _result = ((::TopTools_DataMapOfShapeShape*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeShape::Iterator
//---------------------------------------------------------------------

Macad::Occt::TopTools_DataMapOfShapeShape::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeShape::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfShapeShape::Iterator();
}

bool Macad::Occt::TopTools_DataMapOfShapeShape::Iterator::More()
{
    bool _result = ((::TopTools_DataMapOfShapeShape::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TopTools_DataMapOfShapeShape::Iterator::Next()
{
    ((::TopTools_DataMapOfShapeShape::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfShapeShape::Iterator::Value()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_DataMapOfShapeShape::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfShapeShape::Iterator::ChangeValue()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopTools_DataMapOfShapeShape::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfShapeShape::Iterator::Key()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_DataMapOfShapeShape::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeBox
//---------------------------------------------------------------------

Macad::Occt::TopTools_DataMapOfShapeBox::TopTools_DataMapOfShapeBox()
    : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeBox>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfShapeBox();
}

Macad::Occt::TopTools_DataMapOfShapeBox::TopTools_DataMapOfShapeBox(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeBox>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfShapeBox(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::TopTools_DataMapOfShapeBox::TopTools_DataMapOfShapeBox(int theNbBuckets)
    : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeBox>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfShapeBox(theNbBuckets, 0L);
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

void Macad::Occt::TopTools_DataMapOfShapeBox::ReSize(int N)
{
    ((::TopTools_DataMapOfShapeBox*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::TopTools_DataMapOfShapeBox::Bind(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::Bnd_Box^ theItem)
{
    bool _result = ((::TopTools_DataMapOfShapeBox*)_NativeInstance)->Bind(*(::TopoDS_Shape*)theKey->NativeInstance, *(::Bnd_Box*)theItem->NativeInstance);
    return _result;
}

Macad::Occt::Bnd_Box^ Macad::Occt::TopTools_DataMapOfShapeBox::Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::Bnd_Box^ theItem)
{
    ::Bnd_Box* _result = ((::TopTools_DataMapOfShapeBox*)_NativeInstance)->Bound(*(::TopoDS_Shape*)theKey->NativeInstance, *(::Bnd_Box*)theItem->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

bool Macad::Occt::TopTools_DataMapOfShapeBox::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::TopTools_DataMapOfShapeBox*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

bool Macad::Occt::TopTools_DataMapOfShapeBox::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::TopTools_DataMapOfShapeBox*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

Macad::Occt::Bnd_Box^ Macad::Occt::TopTools_DataMapOfShapeBox::Seek(Macad::Occt::TopoDS_Shape^ theKey)
{
    const ::Bnd_Box* _result = ((::TopTools_DataMapOfShapeBox*)_NativeInstance)->Seek(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box((::Bnd_Box*)_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::TopTools_DataMapOfShapeBox::Find(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = (::Bnd_Box)((::TopTools_DataMapOfShapeBox*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::TopTools_DataMapOfShapeBox::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::Bnd_Box* _result = ((::TopTools_DataMapOfShapeBox*)_NativeInstance)->ChangeSeek(*(::TopoDS_Shape*)theKey->NativeInstance);
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
    ((::TopTools_DataMapOfShapeBox*)_NativeInstance)->Clear(false);
}

int Macad::Occt::TopTools_DataMapOfShapeBox::Size()
{
    int _result = ((::TopTools_DataMapOfShapeBox*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TopTools_DataMapOfShapeBox::Iterator
//---------------------------------------------------------------------

Macad::Occt::TopTools_DataMapOfShapeBox::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TopTools_DataMapOfShapeBox::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_DataMapOfShapeBox::Iterator();
}

bool Macad::Occt::TopTools_DataMapOfShapeBox::Iterator::More()
{
    bool _result = ((::TopTools_DataMapOfShapeBox::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TopTools_DataMapOfShapeBox::Iterator::Next()
{
    ((::TopTools_DataMapOfShapeBox::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Bnd_Box^ Macad::Occt::TopTools_DataMapOfShapeBox::Iterator::Value()
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = (::Bnd_Box)((::TopTools_DataMapOfShapeBox::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::TopTools_DataMapOfShapeBox::Iterator::ChangeValue()
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = ((::TopTools_DataMapOfShapeBox::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_DataMapOfShapeBox::Iterator::Key()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_DataMapOfShapeBox::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  TopTools_IndexedDataMapOfShapeAddress
//---------------------------------------------------------------------

Macad::Occt::TopTools_IndexedDataMapOfShapeAddress::TopTools_IndexedDataMapOfShapeAddress()
    : Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeAddress>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_IndexedDataMapOfShapeAddress();
}

Macad::Occt::TopTools_IndexedDataMapOfShapeAddress::TopTools_IndexedDataMapOfShapeAddress(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeAddress>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_IndexedDataMapOfShapeAddress(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::TopTools_IndexedDataMapOfShapeAddress::TopTools_IndexedDataMapOfShapeAddress(int theNbBuckets)
    : Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeAddress>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_IndexedDataMapOfShapeAddress(theNbBuckets, 0L);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeAddress::Exchange(Macad::Occt::TopTools_IndexedDataMapOfShapeAddress^ theOther)
{
    ((::TopTools_IndexedDataMapOfShapeAddress*)_NativeInstance)->Exchange(*(::TopTools_IndexedDataMapOfShapeAddress*)theOther->NativeInstance);
}

Macad::Occt::TopTools_IndexedDataMapOfShapeAddress^ Macad::Occt::TopTools_IndexedDataMapOfShapeAddress::Assign(Macad::Occt::TopTools_IndexedDataMapOfShapeAddress^ theOther)
{
    ::TopTools_IndexedDataMapOfShapeAddress* _result = new ::TopTools_IndexedDataMapOfShapeAddress();
    *_result = ((::TopTools_IndexedDataMapOfShapeAddress*)_NativeInstance)->Assign(*(::TopTools_IndexedDataMapOfShapeAddress*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_IndexedDataMapOfShapeAddress(_result);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeAddress::ReSize(int N)
{
    ((::TopTools_IndexedDataMapOfShapeAddress*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::TopTools_IndexedDataMapOfShapeAddress::Contains(Macad::Occt::TopoDS_Shape^ theKey1)
{
    bool _result = ((::TopTools_IndexedDataMapOfShapeAddress*)_NativeInstance)->Contains(*(::TopoDS_Shape*)theKey1->NativeInstance);
    return _result;
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeAddress::Swap(int theIndex1, int theIndex2)
{
    ((::TopTools_IndexedDataMapOfShapeAddress*)_NativeInstance)->Swap(theIndex1, theIndex2);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeAddress::RemoveLast()
{
    ((::TopTools_IndexedDataMapOfShapeAddress*)_NativeInstance)->RemoveLast();
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeAddress::RemoveFromIndex(int theIndex)
{
    ((::TopTools_IndexedDataMapOfShapeAddress*)_NativeInstance)->RemoveFromIndex(theIndex);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeAddress::RemoveKey(Macad::Occt::TopoDS_Shape^ theKey1)
{
    ((::TopTools_IndexedDataMapOfShapeAddress*)_NativeInstance)->RemoveKey(*(::TopoDS_Shape*)theKey1->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_IndexedDataMapOfShapeAddress::FindKey(int theIndex)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_IndexedDataMapOfShapeAddress*)_NativeInstance)->FindKey(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

int Macad::Occt::TopTools_IndexedDataMapOfShapeAddress::FindIndex(Macad::Occt::TopoDS_Shape^ theKey1)
{
    int _result = ((::TopTools_IndexedDataMapOfShapeAddress*)_NativeInstance)->FindIndex(*(::TopoDS_Shape*)theKey1->NativeInstance);
    return _result;
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeAddress::Clear(bool doReleaseMemory)
{
    ((::TopTools_IndexedDataMapOfShapeAddress*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeAddress::Clear()
{
    ((::TopTools_IndexedDataMapOfShapeAddress*)_NativeInstance)->Clear(false);
}

int Macad::Occt::TopTools_IndexedDataMapOfShapeAddress::Size()
{
    int _result = ((::TopTools_IndexedDataMapOfShapeAddress*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TopTools_IndexedDataMapOfShapeAddress::Iterator
//---------------------------------------------------------------------

Macad::Occt::TopTools_IndexedDataMapOfShapeAddress::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeAddress::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_IndexedDataMapOfShapeAddress::Iterator();
}

bool Macad::Occt::TopTools_IndexedDataMapOfShapeAddress::Iterator::More()
{
    bool _result = ((::TopTools_IndexedDataMapOfShapeAddress::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeAddress::Iterator::Next()
{
    ((::TopTools_IndexedDataMapOfShapeAddress::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_IndexedDataMapOfShapeAddress::Iterator::Key()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_IndexedDataMapOfShapeAddress::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::TopTools_IndexedDataMapOfShapeAddress::Iterator::IsEqual(Macad::Occt::TopTools_IndexedDataMapOfShapeAddress::Iterator^ theOther)
{
    bool _result = ((::TopTools_IndexedDataMapOfShapeAddress::Iterator*)_NativeInstance)->IsEqual(*(::TopTools_IndexedDataMapOfShapeAddress::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TopTools_IndexedDataMapOfShapeAddress::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::TopTools_IndexedDataMapOfShapeAddress::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TopTools_IndexedDataMapOfShapeListOfShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::TopTools_IndexedDataMapOfShapeListOfShape()
    : Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeListOfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_IndexedDataMapOfShapeListOfShape();
}

Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::TopTools_IndexedDataMapOfShapeListOfShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeListOfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_IndexedDataMapOfShapeListOfShape(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::TopTools_IndexedDataMapOfShapeListOfShape(int theNbBuckets)
    : Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeListOfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_IndexedDataMapOfShapeListOfShape(theNbBuckets, 0L);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::Exchange(Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape^ theOther)
{
    ((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->Exchange(*(::TopTools_IndexedDataMapOfShapeListOfShape*)theOther->NativeInstance);
}

Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape^ Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::Assign(Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape^ theOther)
{
    ::TopTools_IndexedDataMapOfShapeListOfShape* _result = new ::TopTools_IndexedDataMapOfShapeListOfShape();
    *_result = ((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->Assign(*(::TopTools_IndexedDataMapOfShapeListOfShape*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape(_result);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::ReSize(int N)
{
    ((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->ReSize(N);
}

int Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::Add(Macad::Occt::TopoDS_Shape^ theKey1, Macad::Occt::TopoDS_ListOfShape^ theItem)
{
    int _result = ((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->Add(*(::TopoDS_Shape*)theKey1->NativeInstance, *(::TopoDS_ListOfShape*)theItem->NativeInstance);
    return _result;
}

bool Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::Contains(Macad::Occt::TopoDS_Shape^ theKey1)
{
    bool _result = ((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->Contains(*(::TopoDS_Shape*)theKey1->NativeInstance);
    return _result;
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::Substitute(int theIndex, Macad::Occt::TopoDS_Shape^ theKey1, Macad::Occt::TopoDS_ListOfShape^ theItem)
{
    ((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->Substitute(theIndex, *(::TopoDS_Shape*)theKey1->NativeInstance, *(::TopoDS_ListOfShape*)theItem->NativeInstance);
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
    *_result = (::TopoDS_Shape)((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->FindKey(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::FindFromIndex(int theIndex)
{
    ::TopoDS_ListOfShape* _result = new ::TopoDS_ListOfShape();
    *_result = (::TopoDS_ListOfShape)((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->FindFromIndex(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::ChangeFromIndex(int theIndex)
{
    ::TopoDS_ListOfShape* _result = new ::TopoDS_ListOfShape();
    *_result = ((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->ChangeFromIndex(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

int Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::FindIndex(Macad::Occt::TopoDS_Shape^ theKey1)
{
    int _result = ((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->FindIndex(*(::TopoDS_Shape*)theKey1->NativeInstance);
    return _result;
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::FindFromKey(Macad::Occt::TopoDS_Shape^ theKey1)
{
    ::TopoDS_ListOfShape* _result = new ::TopoDS_ListOfShape();
    *_result = (::TopoDS_ListOfShape)((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->FindFromKey(*(::TopoDS_Shape*)theKey1->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::ChangeFromKey(Macad::Occt::TopoDS_Shape^ theKey1)
{
    ::TopoDS_ListOfShape* _result = new ::TopoDS_ListOfShape();
    *_result = ((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->ChangeFromKey(*(::TopoDS_Shape*)theKey1->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::Seek(Macad::Occt::TopoDS_Shape^ theKey1)
{
    const ::TopoDS_ListOfShape* _result = ((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->Seek(*(::TopoDS_Shape*)theKey1->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape((::TopoDS_ListOfShape*)_result);
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey1)
{
    ::TopoDS_ListOfShape* _result = ((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->ChangeSeek(*(::TopoDS_Shape*)theKey1->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::Clear(bool doReleaseMemory)
{
    ((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::Clear()
{
    ((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->Clear(false);
}

int Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::Size()
{
    int _result = ((::TopTools_IndexedDataMapOfShapeListOfShape*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TopTools_IndexedDataMapOfShapeListOfShape::Iterator
//---------------------------------------------------------------------

Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeListOfShape::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_IndexedDataMapOfShapeListOfShape::Iterator();
}

bool Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::Iterator::More()
{
    bool _result = ((::TopTools_IndexedDataMapOfShapeListOfShape::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::Iterator::Next()
{
    ((::TopTools_IndexedDataMapOfShapeListOfShape::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::Iterator::Value()
{
    ::TopoDS_ListOfShape* _result = new ::TopoDS_ListOfShape();
    *_result = (::TopoDS_ListOfShape)((::TopTools_IndexedDataMapOfShapeListOfShape::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::Iterator::ChangeValue()
{
    ::TopoDS_ListOfShape* _result = new ::TopoDS_ListOfShape();
    *_result = ((::TopTools_IndexedDataMapOfShapeListOfShape::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::Iterator::Key()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_IndexedDataMapOfShapeListOfShape::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::Iterator::IsEqual(Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::Iterator^ theOther)
{
    bool _result = ((::TopTools_IndexedDataMapOfShapeListOfShape::Iterator*)_NativeInstance)->IsEqual(*(::TopTools_IndexedDataMapOfShapeListOfShape::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TopTools_IndexedDataMapOfShapeReal
//---------------------------------------------------------------------

Macad::Occt::TopTools_IndexedDataMapOfShapeReal::TopTools_IndexedDataMapOfShapeReal()
    : Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeReal>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_IndexedDataMapOfShapeReal();
}

Macad::Occt::TopTools_IndexedDataMapOfShapeReal::TopTools_IndexedDataMapOfShapeReal(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeReal>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_IndexedDataMapOfShapeReal(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::TopTools_IndexedDataMapOfShapeReal::TopTools_IndexedDataMapOfShapeReal(int theNbBuckets)
    : Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeReal>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_IndexedDataMapOfShapeReal(theNbBuckets, 0L);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeReal::Exchange(Macad::Occt::TopTools_IndexedDataMapOfShapeReal^ theOther)
{
    ((::TopTools_IndexedDataMapOfShapeReal*)_NativeInstance)->Exchange(*(::TopTools_IndexedDataMapOfShapeReal*)theOther->NativeInstance);
}

Macad::Occt::TopTools_IndexedDataMapOfShapeReal^ Macad::Occt::TopTools_IndexedDataMapOfShapeReal::Assign(Macad::Occt::TopTools_IndexedDataMapOfShapeReal^ theOther)
{
    ::TopTools_IndexedDataMapOfShapeReal* _result = new ::TopTools_IndexedDataMapOfShapeReal();
    *_result = ((::TopTools_IndexedDataMapOfShapeReal*)_NativeInstance)->Assign(*(::TopTools_IndexedDataMapOfShapeReal*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_IndexedDataMapOfShapeReal(_result);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeReal::ReSize(int N)
{
    ((::TopTools_IndexedDataMapOfShapeReal*)_NativeInstance)->ReSize(N);
}

int Macad::Occt::TopTools_IndexedDataMapOfShapeReal::Add(Macad::Occt::TopoDS_Shape^ theKey1, double theItem)
{
    pin_ptr<double> pp_theItem = &theItem;
    int _result = ((::TopTools_IndexedDataMapOfShapeReal*)_NativeInstance)->Add(*(::TopoDS_Shape*)theKey1->NativeInstance, *(double*)pp_theItem);
    return _result;
}

bool Macad::Occt::TopTools_IndexedDataMapOfShapeReal::Contains(Macad::Occt::TopoDS_Shape^ theKey1)
{
    bool _result = ((::TopTools_IndexedDataMapOfShapeReal*)_NativeInstance)->Contains(*(::TopoDS_Shape*)theKey1->NativeInstance);
    return _result;
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
    *_result = (::TopoDS_Shape)((::TopTools_IndexedDataMapOfShapeReal*)_NativeInstance)->FindKey(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

double Macad::Occt::TopTools_IndexedDataMapOfShapeReal::FindFromIndex(int theIndex)
{
    double _result = ((::TopTools_IndexedDataMapOfShapeReal*)_NativeInstance)->FindFromIndex(theIndex);
    return _result;
}

double Macad::Occt::TopTools_IndexedDataMapOfShapeReal::ChangeFromIndex(int theIndex)
{
    double _result = ((::TopTools_IndexedDataMapOfShapeReal*)_NativeInstance)->ChangeFromIndex(theIndex);
    return _result;
}

int Macad::Occt::TopTools_IndexedDataMapOfShapeReal::FindIndex(Macad::Occt::TopoDS_Shape^ theKey1)
{
    int _result = ((::TopTools_IndexedDataMapOfShapeReal*)_NativeInstance)->FindIndex(*(::TopoDS_Shape*)theKey1->NativeInstance);
    return _result;
}

double Macad::Occt::TopTools_IndexedDataMapOfShapeReal::FindFromKey(Macad::Occt::TopoDS_Shape^ theKey1)
{
    double _result = ((::TopTools_IndexedDataMapOfShapeReal*)_NativeInstance)->FindFromKey(*(::TopoDS_Shape*)theKey1->NativeInstance);
    return _result;
}

double Macad::Occt::TopTools_IndexedDataMapOfShapeReal::ChangeFromKey(Macad::Occt::TopoDS_Shape^ theKey1)
{
    double _result = ((::TopTools_IndexedDataMapOfShapeReal*)_NativeInstance)->ChangeFromKey(*(::TopoDS_Shape*)theKey1->NativeInstance);
    return _result;
}

double Macad::Occt::TopTools_IndexedDataMapOfShapeReal::Seek(Macad::Occt::TopoDS_Shape^ theKey1)
{
    throw gcnew System::NotImplementedException();
}

double Macad::Occt::TopTools_IndexedDataMapOfShapeReal::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey1)
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeReal::Clear(bool doReleaseMemory)
{
    ((::TopTools_IndexedDataMapOfShapeReal*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeReal::Clear()
{
    ((::TopTools_IndexedDataMapOfShapeReal*)_NativeInstance)->Clear(false);
}

int Macad::Occt::TopTools_IndexedDataMapOfShapeReal::Size()
{
    int _result = ((::TopTools_IndexedDataMapOfShapeReal*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TopTools_IndexedDataMapOfShapeReal::Iterator
//---------------------------------------------------------------------

Macad::Occt::TopTools_IndexedDataMapOfShapeReal::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_IndexedDataMapOfShapeReal::Iterator();
}

bool Macad::Occt::TopTools_IndexedDataMapOfShapeReal::Iterator::More()
{
    bool _result = ((::TopTools_IndexedDataMapOfShapeReal::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeReal::Iterator::Next()
{
    ((::TopTools_IndexedDataMapOfShapeReal::Iterator*)_NativeInstance)->Next();
}

double Macad::Occt::TopTools_IndexedDataMapOfShapeReal::Iterator::Value()
{
    double _result = ((::TopTools_IndexedDataMapOfShapeReal::Iterator*)_NativeInstance)->Value();
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_IndexedDataMapOfShapeReal::Iterator::Key()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_IndexedDataMapOfShapeReal::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::TopTools_IndexedDataMapOfShapeReal::Iterator::IsEqual(Macad::Occt::TopTools_IndexedDataMapOfShapeReal::Iterator^ theOther)
{
    bool _result = ((::TopTools_IndexedDataMapOfShapeReal::Iterator*)_NativeInstance)->IsEqual(*(::TopTools_IndexedDataMapOfShapeReal::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TopTools_IndexedDataMapOfShapeReal::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::TopTools_IndexedDataMapOfShapeReal::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TopTools_IndexedDataMapOfShapeShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_IndexedDataMapOfShapeShape::TopTools_IndexedDataMapOfShapeShape()
    : Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_IndexedDataMapOfShapeShape();
}

Macad::Occt::TopTools_IndexedDataMapOfShapeShape::TopTools_IndexedDataMapOfShapeShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_IndexedDataMapOfShapeShape(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::TopTools_IndexedDataMapOfShapeShape::TopTools_IndexedDataMapOfShapeShape(int theNbBuckets)
    : Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_IndexedDataMapOfShapeShape(theNbBuckets, 0L);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeShape::Exchange(Macad::Occt::TopTools_IndexedDataMapOfShapeShape^ theOther)
{
    ((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->Exchange(*(::TopTools_IndexedDataMapOfShapeShape*)theOther->NativeInstance);
}

Macad::Occt::TopTools_IndexedDataMapOfShapeShape^ Macad::Occt::TopTools_IndexedDataMapOfShapeShape::Assign(Macad::Occt::TopTools_IndexedDataMapOfShapeShape^ theOther)
{
    ::TopTools_IndexedDataMapOfShapeShape* _result = new ::TopTools_IndexedDataMapOfShapeShape();
    *_result = ((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->Assign(*(::TopTools_IndexedDataMapOfShapeShape*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_IndexedDataMapOfShapeShape(_result);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeShape::ReSize(int N)
{
    ((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->ReSize(N);
}

int Macad::Occt::TopTools_IndexedDataMapOfShapeShape::Add(Macad::Occt::TopoDS_Shape^ theKey1, Macad::Occt::TopoDS_Shape^ theItem)
{
    int _result = ((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->Add(*(::TopoDS_Shape*)theKey1->NativeInstance, *(::TopoDS_Shape*)theItem->NativeInstance);
    return _result;
}

bool Macad::Occt::TopTools_IndexedDataMapOfShapeShape::Contains(Macad::Occt::TopoDS_Shape^ theKey1)
{
    bool _result = ((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->Contains(*(::TopoDS_Shape*)theKey1->NativeInstance);
    return _result;
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
    *_result = (::TopoDS_Shape)((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->FindKey(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_IndexedDataMapOfShapeShape::FindFromIndex(int theIndex)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->FindFromIndex(theIndex);
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
    int _result = ((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->FindIndex(*(::TopoDS_Shape*)theKey1->NativeInstance);
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_IndexedDataMapOfShapeShape::FindFromKey(Macad::Occt::TopoDS_Shape^ theKey1)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->FindFromKey(*(::TopoDS_Shape*)theKey1->NativeInstance);
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
    const ::TopoDS_Shape* _result = ((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->Seek(*(::TopoDS_Shape*)theKey1->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape((::TopoDS_Shape*)_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_IndexedDataMapOfShapeShape::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey1)
{
    ::TopoDS_Shape* _result = ((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->ChangeSeek(*(::TopoDS_Shape*)theKey1->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeShape::Clear(bool doReleaseMemory)
{
    ((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeShape::Clear()
{
    ((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->Clear(false);
}

int Macad::Occt::TopTools_IndexedDataMapOfShapeShape::Size()
{
    int _result = ((::TopTools_IndexedDataMapOfShapeShape*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TopTools_IndexedDataMapOfShapeShape::Iterator
//---------------------------------------------------------------------

Macad::Occt::TopTools_IndexedDataMapOfShapeShape::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TopTools_IndexedDataMapOfShapeShape::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_IndexedDataMapOfShapeShape::Iterator();
}

bool Macad::Occt::TopTools_IndexedDataMapOfShapeShape::Iterator::More()
{
    bool _result = ((::TopTools_IndexedDataMapOfShapeShape::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TopTools_IndexedDataMapOfShapeShape::Iterator::Next()
{
    ((::TopTools_IndexedDataMapOfShapeShape::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_IndexedDataMapOfShapeShape::Iterator::Value()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_IndexedDataMapOfShapeShape::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_IndexedDataMapOfShapeShape::Iterator::ChangeValue()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopTools_IndexedDataMapOfShapeShape::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_IndexedDataMapOfShapeShape::Iterator::Key()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_IndexedDataMapOfShapeShape::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::TopTools_IndexedDataMapOfShapeShape::Iterator::IsEqual(Macad::Occt::TopTools_IndexedDataMapOfShapeShape::Iterator^ theOther)
{
    bool _result = ((::TopTools_IndexedDataMapOfShapeShape::Iterator*)_NativeInstance)->IsEqual(*(::TopTools_IndexedDataMapOfShapeShape::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TopTools_IndexedDataMapOfShapeShape::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::TopTools_IndexedDataMapOfShapeShape::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TopTools_IndexedMapOfShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_IndexedMapOfShape::TopTools_IndexedMapOfShape()
    : Macad::Occt::BaseClass<::TopTools_IndexedMapOfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_IndexedMapOfShape();
}

Macad::Occt::TopTools_IndexedMapOfShape::TopTools_IndexedMapOfShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TopTools_IndexedMapOfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_IndexedMapOfShape(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::TopTools_IndexedMapOfShape::TopTools_IndexedMapOfShape(int theNbBuckets)
    : Macad::Occt::BaseClass<::TopTools_IndexedMapOfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_IndexedMapOfShape(theNbBuckets, 0L);
}

void Macad::Occt::TopTools_IndexedMapOfShape::Exchange(Macad::Occt::TopTools_IndexedMapOfShape^ theOther)
{
    ((::TopTools_IndexedMapOfShape*)_NativeInstance)->Exchange(*(::TopTools_IndexedMapOfShape*)theOther->NativeInstance);
}

Macad::Occt::TopTools_IndexedMapOfShape^ Macad::Occt::TopTools_IndexedMapOfShape::Assign(Macad::Occt::TopTools_IndexedMapOfShape^ theOther)
{
    ::TopTools_IndexedMapOfShape* _result = new ::TopTools_IndexedMapOfShape();
    *_result = ((::TopTools_IndexedMapOfShape*)_NativeInstance)->Assign(*(::TopTools_IndexedMapOfShape*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_IndexedMapOfShape(_result);
}

void Macad::Occt::TopTools_IndexedMapOfShape::ReSize(int theExtent)
{
    ((::TopTools_IndexedMapOfShape*)_NativeInstance)->ReSize(theExtent);
}

int Macad::Occt::TopTools_IndexedMapOfShape::Add(Macad::Occt::TopoDS_Shape^ theKey1)
{
    int _result = ((::TopTools_IndexedMapOfShape*)_NativeInstance)->Add(*(::TopoDS_Shape*)theKey1->NativeInstance);
    return _result;
}

bool Macad::Occt::TopTools_IndexedMapOfShape::Contains(Macad::Occt::TopoDS_Shape^ theKey1)
{
    bool _result = ((::TopTools_IndexedMapOfShape*)_NativeInstance)->Contains(*(::TopoDS_Shape*)theKey1->NativeInstance);
    return _result;
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
    bool _result = ((::TopTools_IndexedMapOfShape*)_NativeInstance)->RemoveKey(*(::TopoDS_Shape*)theKey1->NativeInstance);
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_IndexedMapOfShape::FindKey(int theIndex)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_IndexedMapOfShape*)_NativeInstance)->FindKey(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

int Macad::Occt::TopTools_IndexedMapOfShape::FindIndex(Macad::Occt::TopoDS_Shape^ theKey1)
{
    int _result = ((::TopTools_IndexedMapOfShape*)_NativeInstance)->FindIndex(*(::TopoDS_Shape*)theKey1->NativeInstance);
    return _result;
}

void Macad::Occt::TopTools_IndexedMapOfShape::Clear(bool doReleaseMemory)
{
    ((::TopTools_IndexedMapOfShape*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopTools_IndexedMapOfShape::Clear()
{
    ((::TopTools_IndexedMapOfShape*)_NativeInstance)->Clear(false);
}

int Macad::Occt::TopTools_IndexedMapOfShape::Size()
{
    int _result = ((::TopTools_IndexedMapOfShape*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  TopTools_IndexedMapOfShape::Iterator
//---------------------------------------------------------------------

Macad::Occt::TopTools_IndexedMapOfShape::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TopTools_IndexedMapOfShape::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_IndexedMapOfShape::Iterator();
}

bool Macad::Occt::TopTools_IndexedMapOfShape::Iterator::More()
{
    bool _result = ((::TopTools_IndexedMapOfShape::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TopTools_IndexedMapOfShape::Iterator::Next()
{
    ((::TopTools_IndexedMapOfShape::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_IndexedMapOfShape::Iterator::Value()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_IndexedMapOfShape::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::TopTools_IndexedMapOfShape::Iterator::IsEqual(Macad::Occt::TopTools_IndexedMapOfShape::Iterator^ theOther)
{
    bool _result = ((::TopTools_IndexedMapOfShape::Iterator*)_NativeInstance)->IsEqual(*(::TopTools_IndexedMapOfShape::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TopTools_IndexedMapOfShape::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::TopTools_IndexedMapOfShape::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TopTools_ListOfListOfShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_ListOfListOfShape::TopTools_ListOfListOfShape()
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_ListOfListOfShape();
}

Macad::Occt::TopTools_ListOfListOfShape::TopTools_ListOfListOfShape(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_ListOfListOfShape(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::TopTools_ListOfListOfShape::Size()
{
    int _result = ((::TopTools_ListOfListOfShape*)_NativeInstance)->Size();
    return _result;
}

Macad::Occt::TopTools_ListOfListOfShape^ Macad::Occt::TopTools_ListOfListOfShape::Assign(Macad::Occt::TopTools_ListOfListOfShape^ theOther)
{
    ::TopTools_ListOfListOfShape* _result = new ::TopTools_ListOfListOfShape();
    *_result = ((::TopTools_ListOfListOfShape*)_NativeInstance)->Assign(*(::TopTools_ListOfListOfShape*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfListOfShape(_result);
}

void Macad::Occt::TopTools_ListOfListOfShape::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::TopTools_ListOfListOfShape*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::TopTools_ListOfListOfShape::Clear()
{
    ((::TopTools_ListOfListOfShape*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::TopTools_ListOfListOfShape::First()
{
    ::TopoDS_ListOfShape* _result = new ::TopoDS_ListOfShape();
    *_result = (::TopoDS_ListOfShape)((::TopTools_ListOfListOfShape*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::TopTools_ListOfListOfShape::Last()
{
    ::TopoDS_ListOfShape* _result = new ::TopoDS_ListOfShape();
    *_result = (::TopoDS_ListOfShape)((::TopTools_ListOfListOfShape*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::TopTools_ListOfListOfShape::Append(Macad::Occt::TopoDS_ListOfShape^ theItem)
{
    ::TopoDS_ListOfShape* _result = new ::TopoDS_ListOfShape();
    *_result = ((::TopTools_ListOfListOfShape*)_NativeInstance)->Append(*(::TopoDS_ListOfShape*)theItem->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::TopTools_ListOfListOfShape::Prepend(Macad::Occt::TopoDS_ListOfShape^ theItem)
{
    ::TopoDS_ListOfShape* _result = new ::TopoDS_ListOfShape();
    *_result = ((::TopTools_ListOfListOfShape*)_NativeInstance)->Prepend(*(::TopoDS_ListOfShape*)theItem->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

void Macad::Occt::TopTools_ListOfListOfShape::RemoveFirst()
{
    ((::TopTools_ListOfListOfShape*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::TopTools_ListOfListOfShape::Remove(Macad::Occt::TopTools_ListOfListOfShape::Iterator^ theIter)
{
    ((::TopTools_ListOfListOfShape*)_NativeInstance)->Remove(*(::TopTools_ListOfListOfShape::Iterator*)theIter->NativeInstance);
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::TopTools_ListOfListOfShape::InsertBefore(Macad::Occt::TopoDS_ListOfShape^ theItem, Macad::Occt::TopTools_ListOfListOfShape::Iterator^ theIter)
{
    ::TopoDS_ListOfShape* _result = new ::TopoDS_ListOfShape();
    *_result = ((::TopTools_ListOfListOfShape*)_NativeInstance)->InsertBefore(*(::TopoDS_ListOfShape*)theItem->NativeInstance, *(::TopTools_ListOfListOfShape::Iterator*)theIter->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::TopTools_ListOfListOfShape::InsertAfter(Macad::Occt::TopoDS_ListOfShape^ theItem, Macad::Occt::TopTools_ListOfListOfShape::Iterator^ theIter)
{
    ::TopoDS_ListOfShape* _result = new ::TopoDS_ListOfShape();
    *_result = ((::TopTools_ListOfListOfShape*)_NativeInstance)->InsertAfter(*(::TopoDS_ListOfShape*)theItem->NativeInstance, *(::TopTools_ListOfListOfShape::Iterator*)theIter->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

void Macad::Occt::TopTools_ListOfListOfShape::Reverse()
{
    ((::TopTools_ListOfListOfShape*)_NativeInstance)->Reverse();
}

System::Collections::Generic::IEnumerator<Macad::Occt::TopoDS_ListOfShape^>^ Macad::Occt::TopTools_ListOfListOfShape::GetEnumerator()
{
    return gcnew Macad::Occt::TopTools_ListOfListOfShape::Iterator(new ::TopTools_ListOfListOfShape::Iterator(*NativeInstance));
}

System::Collections::IEnumerator^ Macad::Occt::TopTools_ListOfListOfShape::GetEnumerator2()
{
    return gcnew Macad::Occt::TopTools_ListOfListOfShape::Iterator(new ::TopTools_ListOfListOfShape::Iterator(*NativeInstance));
}



//---------------------------------------------------------------------
//  Class  TopTools_ListOfListOfShape::Iterator
//---------------------------------------------------------------------

Macad::Occt::TopTools_ListOfListOfShape::Iterator::Iterator()
    : Macad::Occt::IteratorEnumerator<Macad::Occt::TopoDS_ListOfShape^, ::TopTools_ListOfListOfShape::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_ListOfListOfShape::Iterator();
}

bool Macad::Occt::TopTools_ListOfListOfShape::Iterator::More()
{
    bool _result = ((::TopTools_ListOfListOfShape::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TopTools_ListOfListOfShape::Iterator::Next()
{
    ((::TopTools_ListOfListOfShape::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::TopTools_ListOfListOfShape::Iterator::Value()
{
    ::TopoDS_ListOfShape* _result = new ::TopoDS_ListOfShape();
    *_result = (::TopoDS_ListOfShape)((::TopTools_ListOfListOfShape::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::TopTools_ListOfListOfShape::Iterator::ChangeValue()
{
    ::TopoDS_ListOfShape* _result = new ::TopoDS_ListOfShape();
    *_result = ((::TopTools_ListOfListOfShape::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}



//---------------------------------------------------------------------
//  Class  TopTools_MapOfOrientedShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_MapOfOrientedShape::TopTools_MapOfOrientedShape()
    : Macad::Occt::BaseClass<::TopTools_MapOfOrientedShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_MapOfOrientedShape();
}

Macad::Occt::TopTools_MapOfOrientedShape::TopTools_MapOfOrientedShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TopTools_MapOfOrientedShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_MapOfOrientedShape(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::TopTools_MapOfOrientedShape::TopTools_MapOfOrientedShape(int theNbBuckets)
    : Macad::Occt::BaseClass<::TopTools_MapOfOrientedShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_MapOfOrientedShape(theNbBuckets, 0L);
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

void Macad::Occt::TopTools_MapOfOrientedShape::ReSize(int N)
{
    ((::TopTools_MapOfOrientedShape*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::TopTools_MapOfOrientedShape::Add(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::TopTools_MapOfOrientedShape*)_NativeInstance)->Add(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_MapOfOrientedShape::Added(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_MapOfOrientedShape*)_NativeInstance)->Added(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::TopTools_MapOfOrientedShape::Contains(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::TopTools_MapOfOrientedShape*)_NativeInstance)->Contains(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

bool Macad::Occt::TopTools_MapOfOrientedShape::Remove(Macad::Occt::TopoDS_Shape^ K)
{
    bool _result = ((::TopTools_MapOfOrientedShape*)_NativeInstance)->Remove(*(::TopoDS_Shape*)K->NativeInstance);
    return _result;
}

void Macad::Occt::TopTools_MapOfOrientedShape::Clear(bool doReleaseMemory)
{
    ((::TopTools_MapOfOrientedShape*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopTools_MapOfOrientedShape::Clear()
{
    ((::TopTools_MapOfOrientedShape*)_NativeInstance)->Clear(false);
}

int Macad::Occt::TopTools_MapOfOrientedShape::Size()
{
    int _result = ((::TopTools_MapOfOrientedShape*)_NativeInstance)->Size();
    return _result;
}

bool Macad::Occt::TopTools_MapOfOrientedShape::IsEqual(Macad::Occt::TopTools_MapOfOrientedShape^ theOther)
{
    bool _result = ((::TopTools_MapOfOrientedShape*)_NativeInstance)->IsEqual(*(::TopTools_MapOfOrientedShape*)theOther->NativeInstance);
    return _result;
}

void Macad::Occt::TopTools_MapOfOrientedShape::Union(Macad::Occt::TopTools_MapOfOrientedShape^ theLeft, Macad::Occt::TopTools_MapOfOrientedShape^ theRight)
{
    ((::TopTools_MapOfOrientedShape*)_NativeInstance)->Union(*(::TopTools_MapOfOrientedShape*)theLeft->NativeInstance, *(::TopTools_MapOfOrientedShape*)theRight->NativeInstance);
}

bool Macad::Occt::TopTools_MapOfOrientedShape::Unite(Macad::Occt::TopTools_MapOfOrientedShape^ theOther)
{
    bool _result = ((::TopTools_MapOfOrientedShape*)_NativeInstance)->Unite(*(::TopTools_MapOfOrientedShape*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TopTools_MapOfOrientedShape::HasIntersection(Macad::Occt::TopTools_MapOfOrientedShape^ theMap)
{
    bool _result = ((::TopTools_MapOfOrientedShape*)_NativeInstance)->HasIntersection(*(::TopTools_MapOfOrientedShape*)theMap->NativeInstance);
    return _result;
}

void Macad::Occt::TopTools_MapOfOrientedShape::Intersection(Macad::Occt::TopTools_MapOfOrientedShape^ theLeft, Macad::Occt::TopTools_MapOfOrientedShape^ theRight)
{
    ((::TopTools_MapOfOrientedShape*)_NativeInstance)->Intersection(*(::TopTools_MapOfOrientedShape*)theLeft->NativeInstance, *(::TopTools_MapOfOrientedShape*)theRight->NativeInstance);
}

bool Macad::Occt::TopTools_MapOfOrientedShape::Intersect(Macad::Occt::TopTools_MapOfOrientedShape^ theOther)
{
    bool _result = ((::TopTools_MapOfOrientedShape*)_NativeInstance)->Intersect(*(::TopTools_MapOfOrientedShape*)theOther->NativeInstance);
    return _result;
}

void Macad::Occt::TopTools_MapOfOrientedShape::Subtraction(Macad::Occt::TopTools_MapOfOrientedShape^ theLeft, Macad::Occt::TopTools_MapOfOrientedShape^ theRight)
{
    ((::TopTools_MapOfOrientedShape*)_NativeInstance)->Subtraction(*(::TopTools_MapOfOrientedShape*)theLeft->NativeInstance, *(::TopTools_MapOfOrientedShape*)theRight->NativeInstance);
}

bool Macad::Occt::TopTools_MapOfOrientedShape::Subtract(Macad::Occt::TopTools_MapOfOrientedShape^ theOther)
{
    bool _result = ((::TopTools_MapOfOrientedShape*)_NativeInstance)->Subtract(*(::TopTools_MapOfOrientedShape*)theOther->NativeInstance);
    return _result;
}

void Macad::Occt::TopTools_MapOfOrientedShape::Difference(Macad::Occt::TopTools_MapOfOrientedShape^ theLeft, Macad::Occt::TopTools_MapOfOrientedShape^ theRight)
{
    ((::TopTools_MapOfOrientedShape*)_NativeInstance)->Difference(*(::TopTools_MapOfOrientedShape*)theLeft->NativeInstance, *(::TopTools_MapOfOrientedShape*)theRight->NativeInstance);
}

bool Macad::Occt::TopTools_MapOfOrientedShape::Differ(Macad::Occt::TopTools_MapOfOrientedShape^ theOther)
{
    bool _result = ((::TopTools_MapOfOrientedShape*)_NativeInstance)->Differ(*(::TopTools_MapOfOrientedShape*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TopTools_MapOfOrientedShape::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::TopTools_MapOfOrientedShape::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((TopTools_MapOfOrientedShape^)obj)->NativeInstance);
    }
    return false;
}

System::Collections::Generic::IEnumerator<Macad::Occt::TopoDS_Shape^>^ Macad::Occt::TopTools_MapOfOrientedShape::GetEnumerator()
{
    return gcnew Macad::Occt::TopTools_MapOfOrientedShape::Iterator(new ::TopTools_MapOfOrientedShape::Iterator(*NativeInstance));
}

System::Collections::IEnumerator^ Macad::Occt::TopTools_MapOfOrientedShape::GetEnumerator2()
{
    return gcnew Macad::Occt::TopTools_MapOfOrientedShape::Iterator(new ::TopTools_MapOfOrientedShape::Iterator(*NativeInstance));
}



//---------------------------------------------------------------------
//  Class  TopTools_MapOfOrientedShape::Iterator
//---------------------------------------------------------------------

Macad::Occt::TopTools_MapOfOrientedShape::Iterator::Iterator()
    : Macad::Occt::IteratorEnumerator<Macad::Occt::TopoDS_Shape^, ::TopTools_MapOfOrientedShape::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_MapOfOrientedShape::Iterator();
}

bool Macad::Occt::TopTools_MapOfOrientedShape::Iterator::More()
{
    bool _result = ((::TopTools_MapOfOrientedShape::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TopTools_MapOfOrientedShape::Iterator::Next()
{
    ((::TopTools_MapOfOrientedShape::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_MapOfOrientedShape::Iterator::Value()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_MapOfOrientedShape::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_MapOfOrientedShape::Iterator::Key()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_MapOfOrientedShape::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  TopTools_MapOfShape
//---------------------------------------------------------------------

Macad::Occt::TopTools_MapOfShape::TopTools_MapOfShape()
    : Macad::Occt::BaseClass<::TopTools_MapOfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_MapOfShape();
}

Macad::Occt::TopTools_MapOfShape::TopTools_MapOfShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::TopTools_MapOfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_MapOfShape(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::TopTools_MapOfShape::TopTools_MapOfShape(int theNbBuckets)
    : Macad::Occt::BaseClass<::TopTools_MapOfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_MapOfShape(theNbBuckets, 0L);
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

void Macad::Occt::TopTools_MapOfShape::ReSize(int N)
{
    ((::TopTools_MapOfShape*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::TopTools_MapOfShape::Add(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::TopTools_MapOfShape*)_NativeInstance)->Add(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_MapOfShape::Added(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_MapOfShape*)_NativeInstance)->Added(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::TopTools_MapOfShape::Contains(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::TopTools_MapOfShape*)_NativeInstance)->Contains(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

bool Macad::Occt::TopTools_MapOfShape::Remove(Macad::Occt::TopoDS_Shape^ K)
{
    bool _result = ((::TopTools_MapOfShape*)_NativeInstance)->Remove(*(::TopoDS_Shape*)K->NativeInstance);
    return _result;
}

void Macad::Occt::TopTools_MapOfShape::Clear(bool doReleaseMemory)
{
    ((::TopTools_MapOfShape*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::TopTools_MapOfShape::Clear()
{
    ((::TopTools_MapOfShape*)_NativeInstance)->Clear(false);
}

int Macad::Occt::TopTools_MapOfShape::Size()
{
    int _result = ((::TopTools_MapOfShape*)_NativeInstance)->Size();
    return _result;
}

bool Macad::Occt::TopTools_MapOfShape::IsEqual(Macad::Occt::TopTools_MapOfShape^ theOther)
{
    bool _result = ((::TopTools_MapOfShape*)_NativeInstance)->IsEqual(*(::TopTools_MapOfShape*)theOther->NativeInstance);
    return _result;
}

void Macad::Occt::TopTools_MapOfShape::Union(Macad::Occt::TopTools_MapOfShape^ theLeft, Macad::Occt::TopTools_MapOfShape^ theRight)
{
    ((::TopTools_MapOfShape*)_NativeInstance)->Union(*(::TopTools_MapOfShape*)theLeft->NativeInstance, *(::TopTools_MapOfShape*)theRight->NativeInstance);
}

bool Macad::Occt::TopTools_MapOfShape::Unite(Macad::Occt::TopTools_MapOfShape^ theOther)
{
    bool _result = ((::TopTools_MapOfShape*)_NativeInstance)->Unite(*(::TopTools_MapOfShape*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TopTools_MapOfShape::HasIntersection(Macad::Occt::TopTools_MapOfShape^ theMap)
{
    bool _result = ((::TopTools_MapOfShape*)_NativeInstance)->HasIntersection(*(::TopTools_MapOfShape*)theMap->NativeInstance);
    return _result;
}

void Macad::Occt::TopTools_MapOfShape::Intersection(Macad::Occt::TopTools_MapOfShape^ theLeft, Macad::Occt::TopTools_MapOfShape^ theRight)
{
    ((::TopTools_MapOfShape*)_NativeInstance)->Intersection(*(::TopTools_MapOfShape*)theLeft->NativeInstance, *(::TopTools_MapOfShape*)theRight->NativeInstance);
}

bool Macad::Occt::TopTools_MapOfShape::Intersect(Macad::Occt::TopTools_MapOfShape^ theOther)
{
    bool _result = ((::TopTools_MapOfShape*)_NativeInstance)->Intersect(*(::TopTools_MapOfShape*)theOther->NativeInstance);
    return _result;
}

void Macad::Occt::TopTools_MapOfShape::Subtraction(Macad::Occt::TopTools_MapOfShape^ theLeft, Macad::Occt::TopTools_MapOfShape^ theRight)
{
    ((::TopTools_MapOfShape*)_NativeInstance)->Subtraction(*(::TopTools_MapOfShape*)theLeft->NativeInstance, *(::TopTools_MapOfShape*)theRight->NativeInstance);
}

bool Macad::Occt::TopTools_MapOfShape::Subtract(Macad::Occt::TopTools_MapOfShape^ theOther)
{
    bool _result = ((::TopTools_MapOfShape*)_NativeInstance)->Subtract(*(::TopTools_MapOfShape*)theOther->NativeInstance);
    return _result;
}

void Macad::Occt::TopTools_MapOfShape::Difference(Macad::Occt::TopTools_MapOfShape^ theLeft, Macad::Occt::TopTools_MapOfShape^ theRight)
{
    ((::TopTools_MapOfShape*)_NativeInstance)->Difference(*(::TopTools_MapOfShape*)theLeft->NativeInstance, *(::TopTools_MapOfShape*)theRight->NativeInstance);
}

bool Macad::Occt::TopTools_MapOfShape::Differ(Macad::Occt::TopTools_MapOfShape^ theOther)
{
    bool _result = ((::TopTools_MapOfShape*)_NativeInstance)->Differ(*(::TopTools_MapOfShape*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TopTools_MapOfShape::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::TopTools_MapOfShape::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((TopTools_MapOfShape^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TopTools_MapOfShape::Iterator
//---------------------------------------------------------------------

Macad::Occt::TopTools_MapOfShape::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TopTools_MapOfShape::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_MapOfShape::Iterator();
}

bool Macad::Occt::TopTools_MapOfShape::Iterator::More()
{
    bool _result = ((::TopTools_MapOfShape::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TopTools_MapOfShape::Iterator::Next()
{
    ((::TopTools_MapOfShape::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_MapOfShape::Iterator::Value()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_MapOfShape::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_MapOfShape::Iterator::Key()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_MapOfShape::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  TopTools
//---------------------------------------------------------------------

Macad::Occt::TopTools::TopTools()
    : Macad::Occt::BaseClass<::TopTools>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools();
}

void Macad::Occt::TopTools::Dump(Macad::Occt::TopoDS_Shape^ Sh, System::IO::TextWriter^ S)
{
    std::ostringstream oss_S;
    ::TopTools::Dump(*(::TopoDS_Shape*)Sh->NativeInstance, oss_S);
    S->Write(gcnew System::String(oss_S.str().c_str()));
}

void Macad::Occt::TopTools::Dummy(int I)
{
    ::TopTools::Dummy(I);
}



//---------------------------------------------------------------------
//  Class  TopTools_ShapeMapHasher
//---------------------------------------------------------------------

Macad::Occt::TopTools_ShapeMapHasher::TopTools_ShapeMapHasher()
    : Macad::Occt::BaseClass<::TopTools_ShapeMapHasher>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_ShapeMapHasher();
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

Macad::Occt::TopTools_Array1OfListOfShape^ Macad::Occt::TopTools_HArray1OfListOfShape::Array1()
{
    ::TopTools_Array1OfListOfShape* _result = new ::TopTools_Array1OfListOfShape();
    *_result = (::TopTools_Array1OfListOfShape)((::TopTools_HArray1OfListOfShape*)_NativeInstance)->Array1();
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
    int _result = ((::TopTools_HArray1OfListOfShape*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TopTools_HArray1OfListOfShape::Length()
{
    int _result = ((::TopTools_HArray1OfListOfShape*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::TopTools_HArray1OfListOfShape::IsEmpty()
{
    bool _result = ((::TopTools_HArray1OfListOfShape*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TopTools_HArray1OfListOfShape::Lower()
{
    int _result = ((::TopTools_HArray1OfListOfShape*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TopTools_HArray1OfListOfShape::Upper()
{
    int _result = ((::TopTools_HArray1OfListOfShape*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::TopTools_HArray1OfListOfShape^ Macad::Occt::TopTools_HArray1OfListOfShape::Assign(Macad::Occt::TopTools_HArray1OfListOfShape^ theOther)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::TopTools_HArray1OfListOfShape^ Macad::Occt::TopTools_HArray1OfListOfShape::Move(Macad::Occt::TopTools_HArray1OfListOfShape^ theOther)
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::TopTools_HArray1OfListOfShape::UpdateLowerBound(int theLower)
{
    ((::TopTools_HArray1OfListOfShape*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::TopTools_HArray1OfListOfShape::UpdateUpperBound(int theUpper)
{
    ((::TopTools_HArray1OfListOfShape*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::TopTools_HArray1OfListOfShape::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TopTools_HArray1OfListOfShape*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool Macad::Occt::TopTools_HArray1OfListOfShape::IsDeletable()
{
    bool _result = ((::TopTools_HArray1OfListOfShape*)_NativeInstance)->IsDeletable();
    return _result;
}

Macad::Occt::TopTools_HArray1OfListOfShape^ Macad::Occt::TopTools_HArray1OfListOfShape::CreateDowncasted(::TopTools_HArray1OfListOfShape* instance)
{
    return gcnew Macad::Occt::TopTools_HArray1OfListOfShape( instance );
}



//---------------------------------------------------------------------
//  Class  TopTools_HArray1OfListOfShape::Iterator
//---------------------------------------------------------------------



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

Macad::Occt::TopTools_HArray1OfShape::TopTools_HArray1OfShape(Macad::Occt::TopoDS_Shape^ theBegin, int theLower, int theUpper, bool parameter1)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TopTools_HArray1OfShape(*(::TopoDS_Shape*)theBegin->NativeInstance, theLower, theUpper, parameter1);
}

Macad::Occt::TopTools_HArray1OfShape::TopTools_HArray1OfShape(Macad::Occt::TopTools_Array1OfShape^ theOther)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::TopTools_HArray1OfShape(*(::TopTools_Array1OfShape*)theOther->NativeInstance);
}

Macad::Occt::TopTools_Array1OfShape^ Macad::Occt::TopTools_HArray1OfShape::Array1()
{
    ::TopTools_Array1OfShape* _result = new ::TopTools_Array1OfShape();
    *_result = (::TopTools_Array1OfShape)((::TopTools_HArray1OfShape*)_NativeInstance)->Array1();
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
    int _result = ((::TopTools_HArray1OfShape*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TopTools_HArray1OfShape::Length()
{
    int _result = ((::TopTools_HArray1OfShape*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::TopTools_HArray1OfShape::IsEmpty()
{
    bool _result = ((::TopTools_HArray1OfShape*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TopTools_HArray1OfShape::Lower()
{
    int _result = ((::TopTools_HArray1OfShape*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TopTools_HArray1OfShape::Upper()
{
    int _result = ((::TopTools_HArray1OfShape*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::TopTools_HArray1OfShape^ Macad::Occt::TopTools_HArray1OfShape::Assign(Macad::Occt::TopTools_HArray1OfShape^ theOther)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::TopTools_HArray1OfShape^ Macad::Occt::TopTools_HArray1OfShape::Move(Macad::Occt::TopTools_HArray1OfShape^ theOther)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_HArray1OfShape::First()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_HArray1OfShape*)_NativeInstance)->First();
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
    *_result = (::TopoDS_Shape)((::TopTools_HArray1OfShape*)_NativeInstance)->Last();
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
    *_result = (::TopoDS_Shape)((::TopTools_HArray1OfShape*)_NativeInstance)->Value(theIndex);
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

void Macad::Occt::TopTools_HArray1OfShape::UpdateLowerBound(int theLower)
{
    ((::TopTools_HArray1OfShape*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::TopTools_HArray1OfShape::UpdateUpperBound(int theUpper)
{
    ((::TopTools_HArray1OfShape*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::TopTools_HArray1OfShape::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::TopTools_HArray1OfShape*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool Macad::Occt::TopTools_HArray1OfShape::IsDeletable()
{
    bool _result = ((::TopTools_HArray1OfShape*)_NativeInstance)->IsDeletable();
    return _result;
}

Macad::Occt::TopTools_HArray1OfShape^ Macad::Occt::TopTools_HArray1OfShape::CreateDowncasted(::TopTools_HArray1OfShape* instance)
{
    return gcnew Macad::Occt::TopTools_HArray1OfShape( instance );
}

System::Collections::Generic::IEnumerator<Macad::Occt::TopoDS_Shape^>^ Macad::Occt::TopTools_HArray1OfShape::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::TopoDS_Shape^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TopTools_HArray1OfShape::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::TopoDS_Shape^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TopTools_HArray1OfShape::Iterator
//---------------------------------------------------------------------



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

Macad::Occt::TopTools_Array2OfShape^ Macad::Occt::TopTools_HArray2OfShape::Array2()
{
    ::TopTools_Array2OfShape* _result = new ::TopTools_Array2OfShape();
    *_result = (::TopTools_Array2OfShape)((::TopTools_HArray2OfShape*)_NativeInstance)->Array2();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_Array2OfShape(_result);
}

Macad::Occt::TopTools_Array2OfShape^ Macad::Occt::TopTools_HArray2OfShape::ChangeArray2()
{
    ::TopTools_Array2OfShape* _result = new ::TopTools_Array2OfShape();
    *_result = ((::TopTools_HArray2OfShape*)_NativeInstance)->ChangeArray2();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_Array2OfShape(_result);
}

int Macad::Occt::TopTools_HArray2OfShape::BeginPosition(int theRowLower, int parameter1, int theColLower, int theColUpper)
{
    int _result = ::TopTools_HArray2OfShape::BeginPosition(theRowLower, parameter1, theColLower, theColUpper);
    return _result;
}

int Macad::Occt::TopTools_HArray2OfShape::LastPosition(int theRowLower, int theRowUpper, int theColLower, int theColUpper)
{
    int _result = ::TopTools_HArray2OfShape::LastPosition(theRowLower, theRowUpper, theColLower, theColUpper);
    return _result;
}

int Macad::Occt::TopTools_HArray2OfShape::Size()
{
    int _result = ((::TopTools_HArray2OfShape*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TopTools_HArray2OfShape::Length()
{
    int _result = ((::TopTools_HArray2OfShape*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TopTools_HArray2OfShape::NbRows()
{
    int _result = ((::TopTools_HArray2OfShape*)_NativeInstance)->NbRows();
    return _result;
}

int Macad::Occt::TopTools_HArray2OfShape::NbColumns()
{
    int _result = ((::TopTools_HArray2OfShape*)_NativeInstance)->NbColumns();
    return _result;
}

int Macad::Occt::TopTools_HArray2OfShape::RowLength()
{
    int _result = ((::TopTools_HArray2OfShape*)_NativeInstance)->RowLength();
    return _result;
}

int Macad::Occt::TopTools_HArray2OfShape::ColLength()
{
    int _result = ((::TopTools_HArray2OfShape*)_NativeInstance)->ColLength();
    return _result;
}

int Macad::Occt::TopTools_HArray2OfShape::LowerRow()
{
    int _result = ((::TopTools_HArray2OfShape*)_NativeInstance)->LowerRow();
    return _result;
}

int Macad::Occt::TopTools_HArray2OfShape::UpperRow()
{
    int _result = ((::TopTools_HArray2OfShape*)_NativeInstance)->UpperRow();
    return _result;
}

int Macad::Occt::TopTools_HArray2OfShape::LowerCol()
{
    int _result = ((::TopTools_HArray2OfShape*)_NativeInstance)->LowerCol();
    return _result;
}

int Macad::Occt::TopTools_HArray2OfShape::UpperCol()
{
    int _result = ((::TopTools_HArray2OfShape*)_NativeInstance)->UpperCol();
    return _result;
}

Macad::Occt::TopTools_HArray2OfShape^ Macad::Occt::TopTools_HArray2OfShape::Assign(Macad::Occt::TopTools_HArray2OfShape^ theOther)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::TopTools_HArray2OfShape^ Macad::Occt::TopTools_HArray2OfShape::Move(Macad::Occt::TopTools_HArray2OfShape^ theOther)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_HArray2OfShape::Value(int theRow, int theCol)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_HArray2OfShape*)_NativeInstance)->Value(theRow, theCol);
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

void Macad::Occt::TopTools_HArray2OfShape::Init(Macad::Occt::TopoDS_Shape^ theValue)
{
    ((::TopTools_HArray2OfShape*)_NativeInstance)->Init(*(::TopoDS_Shape*)theValue->NativeInstance);
}

bool Macad::Occt::TopTools_HArray2OfShape::IsEmpty()
{
    bool _result = ((::TopTools_HArray2OfShape*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::TopTools_HArray2OfShape::Lower()
{
    int _result = ((::TopTools_HArray2OfShape*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TopTools_HArray2OfShape::Upper()
{
    int _result = ((::TopTools_HArray2OfShape*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_HArray2OfShape::First()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_HArray2OfShape*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_HArray2OfShape::ChangeFirst()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopTools_HArray2OfShape*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_HArray2OfShape::Last()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_HArray2OfShape*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_HArray2OfShape::ChangeLast()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopTools_HArray2OfShape*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::TopTools_HArray2OfShape::UpdateLowerBound(int theLower)
{
    ((::TopTools_HArray2OfShape*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::TopTools_HArray2OfShape::UpdateUpperBound(int theUpper)
{
    ((::TopTools_HArray2OfShape*)_NativeInstance)->UpdateUpperBound(theUpper);
}

bool Macad::Occt::TopTools_HArray2OfShape::IsDeletable()
{
    bool _result = ((::TopTools_HArray2OfShape*)_NativeInstance)->IsDeletable();
    return _result;
}

Macad::Occt::TopTools_HArray2OfShape^ Macad::Occt::TopTools_HArray2OfShape::CreateDowncasted(::TopTools_HArray2OfShape* instance)
{
    return gcnew Macad::Occt::TopTools_HArray2OfShape( instance );
}



//---------------------------------------------------------------------
//  Class  TopTools_HArray2OfShape::Iterator
//---------------------------------------------------------------------



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

Macad::Occt::TopTools_SequenceOfShape^ Macad::Occt::TopTools_HSequenceOfShape::Sequence()
{
    ::TopTools_SequenceOfShape* _result = new ::TopTools_SequenceOfShape();
    *_result = (::TopTools_SequenceOfShape)((::TopTools_HSequenceOfShape*)_NativeInstance)->Sequence();
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
    int _result = ((::TopTools_HSequenceOfShape*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::TopTools_HSequenceOfShape::Length()
{
    int _result = ((::TopTools_HSequenceOfShape*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::TopTools_HSequenceOfShape::Lower()
{
    int _result = ((::TopTools_HSequenceOfShape*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::TopTools_HSequenceOfShape::Upper()
{
    int _result = ((::TopTools_HSequenceOfShape*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::TopTools_HSequenceOfShape::IsEmpty()
{
    bool _result = ((::TopTools_HSequenceOfShape*)_NativeInstance)->IsEmpty();
    return _result;
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
    ((::TopTools_HSequenceOfShape*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::TopTools_HSequenceOfShape::Clear()
{
    ((::TopTools_HSequenceOfShape*)_NativeInstance)->Clear(0L);
}

Macad::Occt::TopTools_HSequenceOfShape^ Macad::Occt::TopTools_HSequenceOfShape::Assign(Macad::Occt::TopTools_HSequenceOfShape^ theOther)
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::TopTools_HSequenceOfShape::Remove(Macad::Occt::TopTools_HSequenceOfShape::Iterator^ thePosition)
{
    ((::TopTools_HSequenceOfShape*)_NativeInstance)->Remove(*(::TopTools_HSequenceOfShape::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::TopTools_HSequenceOfShape::Prepend(Macad::Occt::TopoDS_Shape^ theItem)
{
    ((::TopTools_HSequenceOfShape*)_NativeInstance)->Prepend(*(::TopoDS_Shape*)theItem->NativeInstance);
}

void Macad::Occt::TopTools_HSequenceOfShape::InsertBefore(int theIndex, Macad::Occt::TopoDS_Shape^ theItem)
{
    ((::TopTools_HSequenceOfShape*)_NativeInstance)->InsertBefore(theIndex, *(::TopoDS_Shape*)theItem->NativeInstance);
}

void Macad::Occt::TopTools_HSequenceOfShape::InsertAfter(Macad::Occt::TopTools_HSequenceOfShape::Iterator^ thePosition, Macad::Occt::TopoDS_Shape^ theItem)
{
    ((::TopTools_HSequenceOfShape*)_NativeInstance)->InsertAfter(*(::TopTools_HSequenceOfShape::Iterator*)thePosition->NativeInstance, *(::TopoDS_Shape*)theItem->NativeInstance);
}

void Macad::Occt::TopTools_HSequenceOfShape::Split(int theIndex, Macad::Occt::TopTools_HSequenceOfShape^ theSeq)
{
    ((::TopTools_HSequenceOfShape*)_NativeInstance)->Split(theIndex, *(::TopTools_HSequenceOfShape*)theSeq->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_HSequenceOfShape::First()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_HSequenceOfShape*)_NativeInstance)->First();
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
    *_result = (::TopoDS_Shape)((::TopTools_HSequenceOfShape*)_NativeInstance)->Last();
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
    *_result = (::TopoDS_Shape)((::TopTools_HSequenceOfShape*)_NativeInstance)->Value(theIndex);
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

System::Collections::Generic::IEnumerator<Macad::Occt::TopoDS_Shape^>^ Macad::Occt::TopTools_HSequenceOfShape::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::TopoDS_Shape^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::TopTools_HSequenceOfShape::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::TopoDS_Shape^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  TopTools_HSequenceOfShape::Iterator
//---------------------------------------------------------------------

Macad::Occt::TopTools_HSequenceOfShape::Iterator::Iterator()
    : Macad::Occt::BaseClass<::TopTools_HSequenceOfShape::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_HSequenceOfShape::Iterator();
}

bool Macad::Occt::TopTools_HSequenceOfShape::Iterator::More()
{
    bool _result = ((::TopTools_HSequenceOfShape::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::TopTools_HSequenceOfShape::Iterator::Next()
{
    ((::TopTools_HSequenceOfShape::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_HSequenceOfShape::Iterator::Value()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_HSequenceOfShape::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_HSequenceOfShape::Iterator::ChangeValue()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::TopTools_HSequenceOfShape::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::TopTools_HSequenceOfShape::Iterator::IsEqual(Macad::Occt::TopTools_HSequenceOfShape::Iterator^ theOther)
{
    bool _result = ((::TopTools_HSequenceOfShape::Iterator*)_NativeInstance)->IsEqual(*(::TopTools_HSequenceOfShape::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::TopTools_HSequenceOfShape::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::TopTools_HSequenceOfShape::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  TopTools_LocationSet
//---------------------------------------------------------------------

Macad::Occt::TopTools_LocationSet::TopTools_LocationSet()
    : Macad::Occt::BaseClass<::TopTools_LocationSet>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_LocationSet();
}

void Macad::Occt::TopTools_LocationSet::Clear()
{
    ((::TopTools_LocationSet*)_NativeInstance)->Clear();
}

int Macad::Occt::TopTools_LocationSet::Add(Macad::Occt::TopLoc_Location^ L)
{
    int _result = ((::TopTools_LocationSet*)_NativeInstance)->Add(*(::TopLoc_Location*)L->NativeInstance);
    return _result;
}

Macad::Occt::TopLoc_Location^ Macad::Occt::TopTools_LocationSet::Location(int I)
{
    ::TopLoc_Location* _result = new ::TopLoc_Location();
    *_result = (::TopLoc_Location)((::TopTools_LocationSet*)_NativeInstance)->Location(I);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

int Macad::Occt::TopTools_LocationSet::Index(Macad::Occt::TopLoc_Location^ L)
{
    int _result = ((::TopTools_LocationSet*)_NativeInstance)->Index(*(::TopLoc_Location*)L->NativeInstance);
    return _result;
}

void Macad::Occt::TopTools_LocationSet::Dump(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::TopTools_LocationSet*)_NativeInstance)->Dump(oss_OS);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::TopTools_LocationSet::Write(System::IO::TextWriter^ OS, Macad::Occt::Message_ProgressRange^ theProgress)
{
    std::ostringstream oss_OS;
    ((::TopTools_LocationSet*)_NativeInstance)->Write(oss_OS, *(::Message_ProgressRange*)theProgress->NativeInstance);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::TopTools_LocationSet::Write(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::TopTools_LocationSet*)_NativeInstance)->Write(oss_OS, ::Message_ProgressRange());
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  TopTools_MutexForShapeProvider
//---------------------------------------------------------------------

Macad::Occt::TopTools_MutexForShapeProvider::TopTools_MutexForShapeProvider()
    : Macad::Occt::BaseClass<::TopTools_MutexForShapeProvider>(BaseClass::InitMode::Uninitialized)
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



//---------------------------------------------------------------------
//  Class  TopTools_ShapeSet
//---------------------------------------------------------------------

Macad::Occt::TopTools_ShapeSet::TopTools_ShapeSet()
    : Macad::Occt::BaseClass<::TopTools_ShapeSet>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::TopTools_ShapeSet();
}

void Macad::Occt::TopTools_ShapeSet::SetFormatNb(int theFormatNb)
{
    ((::TopTools_ShapeSet*)_NativeInstance)->SetFormatNb(theFormatNb);
}

int Macad::Occt::TopTools_ShapeSet::FormatNb()
{
    int _result = ((::TopTools_ShapeSet*)_NativeInstance)->FormatNb();
    return _result;
}

void Macad::Occt::TopTools_ShapeSet::Clear()
{
    ((::TopTools_ShapeSet*)_NativeInstance)->Clear();
}

int Macad::Occt::TopTools_ShapeSet::Add(Macad::Occt::TopoDS_Shape^ S)
{
    int _result = ((::TopTools_ShapeSet*)_NativeInstance)->Add(*(::TopoDS_Shape*)S->NativeInstance);
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopTools_ShapeSet::Shape(int I)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::TopTools_ShapeSet*)_NativeInstance)->Shape(I);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

int Macad::Occt::TopTools_ShapeSet::Index(Macad::Occt::TopoDS_Shape^ S)
{
    int _result = ((::TopTools_ShapeSet*)_NativeInstance)->Index(*(::TopoDS_Shape*)S->NativeInstance);
    return _result;
}

Macad::Occt::TopTools_LocationSet^ Macad::Occt::TopTools_ShapeSet::Locations()
{
    ::TopTools_LocationSet* _result = new ::TopTools_LocationSet();
    *_result = (::TopTools_LocationSet)((::TopTools_ShapeSet*)_NativeInstance)->Locations();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_LocationSet(_result);
}

Macad::Occt::TopTools_LocationSet^ Macad::Occt::TopTools_ShapeSet::ChangeLocations()
{
    ::TopTools_LocationSet* _result = new ::TopTools_LocationSet();
    *_result = ((::TopTools_ShapeSet*)_NativeInstance)->ChangeLocations();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_LocationSet(_result);
}

System::IO::TextWriter^ Macad::Occt::TopTools_ShapeSet::DumpExtent(System::IO::TextWriter^ OS)
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::TopTools_ShapeSet::DumpExtent(Macad::Occt::TCollection_AsciiString^ S)
{
    ((::TopTools_ShapeSet*)_NativeInstance)->DumpExtent(*(::TCollection_AsciiString*)S->NativeInstance);
}

void Macad::Occt::TopTools_ShapeSet::Dump(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::TopTools_ShapeSet*)_NativeInstance)->Dump(oss_OS);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::TopTools_ShapeSet::Write(System::IO::TextWriter^ OS, Macad::Occt::Message_ProgressRange^ theProgress)
{
    std::ostringstream oss_OS;
    ((::TopTools_ShapeSet*)_NativeInstance)->Write(oss_OS, *(::Message_ProgressRange*)theProgress->NativeInstance);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::TopTools_ShapeSet::Write(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::TopTools_ShapeSet*)_NativeInstance)->Write(oss_OS, ::Message_ProgressRange());
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::TopTools_ShapeSet::Dump(Macad::Occt::TopoDS_Shape^ S, System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::TopTools_ShapeSet*)_NativeInstance)->Dump(*(::TopoDS_Shape*)S->NativeInstance, oss_OS);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::TopTools_ShapeSet::Write(Macad::Occt::TopoDS_Shape^ S, System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::TopTools_ShapeSet*)_NativeInstance)->Write(*(::TopoDS_Shape*)S->NativeInstance, oss_OS);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::TopTools_ShapeSet::AddGeometry(Macad::Occt::TopoDS_Shape^ S)
{
    ((::TopTools_ShapeSet*)_NativeInstance)->AddGeometry(*(::TopoDS_Shape*)S->NativeInstance);
}

void Macad::Occt::TopTools_ShapeSet::DumpGeometry(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::TopTools_ShapeSet*)_NativeInstance)->DumpGeometry(oss_OS);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::TopTools_ShapeSet::WriteGeometry(System::IO::TextWriter^ OS, Macad::Occt::Message_ProgressRange^ theProgress)
{
    std::ostringstream oss_OS;
    ((::TopTools_ShapeSet*)_NativeInstance)->WriteGeometry(oss_OS, *(::Message_ProgressRange*)theProgress->NativeInstance);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::TopTools_ShapeSet::WriteGeometry(System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::TopTools_ShapeSet*)_NativeInstance)->WriteGeometry(oss_OS, ::Message_ProgressRange());
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::TopTools_ShapeSet::DumpGeometry(Macad::Occt::TopoDS_Shape^ S, System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::TopTools_ShapeSet*)_NativeInstance)->DumpGeometry(*(::TopoDS_Shape*)S->NativeInstance, oss_OS);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
}

void Macad::Occt::TopTools_ShapeSet::WriteGeometry(Macad::Occt::TopoDS_Shape^ S, System::IO::TextWriter^ OS)
{
    std::ostringstream oss_OS;
    ((::TopTools_ShapeSet*)_NativeInstance)->WriteGeometry(*(::TopoDS_Shape*)S->NativeInstance, oss_OS);
    OS->Write(gcnew System::String(oss_OS.str().c_str()));
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
    int _result = ((::TopTools_ShapeSet*)_NativeInstance)->NbShapes();
    return _result;
}


