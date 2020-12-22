// Generated wrapper code for package SelectMgr

#include "OcctPCH.h"
#include "SelectMgr.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "SelectMgr.h"
#include "Standard.h"
#include "StdSelect.h"
#include "AIS.h"
#include "Graphic3d.h"
#include "PrsMgr.h"
#include "Prs3d.h"
#include "TopLoc.h"
#include "V3d.h"
#include "TopAbs.h"
#include "Bnd.h"
#include "gp.h"
#include "TColStd.h"
#include "TCollection.h"


//---------------------------------------------------------------------
//  Class  SelectMgr_ListOfFilter
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_ListOfFilter::SelectMgr_ListOfFilter()
	: BaseClass<::SelectMgr_ListOfFilter>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_ListOfFilter();
}

Macad::Occt::SelectMgr_ListOfFilter::SelectMgr_ListOfFilter(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::SelectMgr_ListOfFilter>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::SelectMgr_ListOfFilter(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::SelectMgr_ListOfFilter::SelectMgr_ListOfFilter(Macad::Occt::SelectMgr_ListOfFilter^ theOther)
	: BaseClass<::SelectMgr_ListOfFilter>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_ListOfFilter(*(::SelectMgr_ListOfFilter*)theOther->NativeInstance);
}

int Macad::Occt::SelectMgr_ListOfFilter::Size()
{
	return ((::SelectMgr_ListOfFilter*)_NativeInstance)->Size();
}

Macad::Occt::SelectMgr_ListOfFilter^ Macad::Occt::SelectMgr_ListOfFilter::Assign(Macad::Occt::SelectMgr_ListOfFilter^ theOther)
{
	::SelectMgr_ListOfFilter* _result = new ::SelectMgr_ListOfFilter();
	*_result = ((::SelectMgr_ListOfFilter*)_NativeInstance)->Assign(*(::SelectMgr_ListOfFilter*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_ListOfFilter(_result);
}

void Macad::Occt::SelectMgr_ListOfFilter::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::SelectMgr_ListOfFilter*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::SelectMgr_ListOfFilter::Clear()
{
	((::SelectMgr_ListOfFilter*)_NativeInstance)->Clear(0L);
}

Macad::Occt::SelectMgr_Filter^ Macad::Occt::SelectMgr_ListOfFilter::First()
{
	Handle(::SelectMgr_Filter) _result;
	_result = ((::SelectMgr_ListOfFilter*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Filter::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_Filter^ Macad::Occt::SelectMgr_ListOfFilter::Last()
{
	Handle(::SelectMgr_Filter) _result;
	_result = ((::SelectMgr_ListOfFilter*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Filter::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_Filter^ Macad::Occt::SelectMgr_ListOfFilter::Append(Macad::Occt::SelectMgr_Filter^ theItem)
{
	Handle(::SelectMgr_Filter) h_theItem = theItem->NativeInstance;
	Handle(::SelectMgr_Filter) _result;
	_result = ((::SelectMgr_ListOfFilter*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Filter::CreateDowncasted( _result.get());
}

void Macad::Occt::SelectMgr_ListOfFilter::Append(Macad::Occt::SelectMgr_ListOfFilter^ theOther)
{
	((::SelectMgr_ListOfFilter*)_NativeInstance)->Append(*(::SelectMgr_ListOfFilter*)theOther->NativeInstance);
}

Macad::Occt::SelectMgr_Filter^ Macad::Occt::SelectMgr_ListOfFilter::Prepend(Macad::Occt::SelectMgr_Filter^ theItem)
{
	Handle(::SelectMgr_Filter) h_theItem = theItem->NativeInstance;
	Handle(::SelectMgr_Filter) _result;
	_result = ((::SelectMgr_ListOfFilter*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Filter::CreateDowncasted( _result.get());
}

void Macad::Occt::SelectMgr_ListOfFilter::Prepend(Macad::Occt::SelectMgr_ListOfFilter^ theOther)
{
	((::SelectMgr_ListOfFilter*)_NativeInstance)->Prepend(*(::SelectMgr_ListOfFilter*)theOther->NativeInstance);
}

void Macad::Occt::SelectMgr_ListOfFilter::RemoveFirst()
{
	((::SelectMgr_ListOfFilter*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::SelectMgr_ListOfFilter::Reverse()
{
	((::SelectMgr_ListOfFilter*)_NativeInstance)->Reverse();
}




//---------------------------------------------------------------------
//  Class  SelectMgr_TriangFrustums
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_TriangFrustums::SelectMgr_TriangFrustums()
	: BaseClass<::SelectMgr_TriangFrustums>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_TriangFrustums();
}

Macad::Occt::SelectMgr_TriangFrustums::SelectMgr_TriangFrustums(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::SelectMgr_TriangFrustums>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::SelectMgr_TriangFrustums(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::SelectMgr_TriangFrustums::SelectMgr_TriangFrustums(Macad::Occt::SelectMgr_TriangFrustums^ theOther)
	: BaseClass<::SelectMgr_TriangFrustums>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_TriangFrustums(*(::SelectMgr_TriangFrustums*)theOther->NativeInstance);
}

int Macad::Occt::SelectMgr_TriangFrustums::Size()
{
	return ((::SelectMgr_TriangFrustums*)_NativeInstance)->Size();
}

Macad::Occt::SelectMgr_TriangFrustums^ Macad::Occt::SelectMgr_TriangFrustums::Assign(Macad::Occt::SelectMgr_TriangFrustums^ theOther)
{
	::SelectMgr_TriangFrustums* _result = new ::SelectMgr_TriangFrustums();
	*_result = ((::SelectMgr_TriangFrustums*)_NativeInstance)->Assign(*(::SelectMgr_TriangFrustums*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_TriangFrustums(_result);
}

void Macad::Occt::SelectMgr_TriangFrustums::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::SelectMgr_TriangFrustums*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::SelectMgr_TriangFrustums::Clear()
{
	((::SelectMgr_TriangFrustums*)_NativeInstance)->Clear(0L);
}

void Macad::Occt::SelectMgr_TriangFrustums::Append(Macad::Occt::SelectMgr_TriangFrustums^ theOther)
{
	((::SelectMgr_TriangFrustums*)_NativeInstance)->Append(*(::SelectMgr_TriangFrustums*)theOther->NativeInstance);
}

void Macad::Occt::SelectMgr_TriangFrustums::Prepend(Macad::Occt::SelectMgr_TriangFrustums^ theOther)
{
	((::SelectMgr_TriangFrustums*)_NativeInstance)->Prepend(*(::SelectMgr_TriangFrustums*)theOther->NativeInstance);
}

void Macad::Occt::SelectMgr_TriangFrustums::RemoveFirst()
{
	((::SelectMgr_TriangFrustums*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::SelectMgr_TriangFrustums::Reverse()
{
	((::SelectMgr_TriangFrustums*)_NativeInstance)->Reverse();
}




//---------------------------------------------------------------------
//  Class  SelectMgr_SequenceOfSelection
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_SequenceOfSelection::SelectMgr_SequenceOfSelection()
	: BaseClass<::SelectMgr_SequenceOfSelection>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_SequenceOfSelection();
}

Macad::Occt::SelectMgr_SequenceOfSelection::SelectMgr_SequenceOfSelection(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::SelectMgr_SequenceOfSelection>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::SelectMgr_SequenceOfSelection(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::SelectMgr_SequenceOfSelection::SelectMgr_SequenceOfSelection(Macad::Occt::SelectMgr_SequenceOfSelection^ theOther)
	: BaseClass<::SelectMgr_SequenceOfSelection>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_SequenceOfSelection(*(::SelectMgr_SequenceOfSelection*)theOther->NativeInstance);
}

int Macad::Occt::SelectMgr_SequenceOfSelection::Size()
{
	return ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Size();
}

int Macad::Occt::SelectMgr_SequenceOfSelection::Length()
{
	return ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Length();
}

int Macad::Occt::SelectMgr_SequenceOfSelection::Lower()
{
	return ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Lower();
}

int Macad::Occt::SelectMgr_SequenceOfSelection::Upper()
{
	return ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Upper();
}

bool Macad::Occt::SelectMgr_SequenceOfSelection::IsEmpty()
{
	return ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::SelectMgr_SequenceOfSelection::Reverse()
{
	((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Reverse();
}

void Macad::Occt::SelectMgr_SequenceOfSelection::Exchange(int I, int J)
{
	((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::SelectMgr_SequenceOfSelection::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::SelectMgr_SequenceOfSelection::Clear()
{
	((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Clear(0L);
}

Macad::Occt::SelectMgr_SequenceOfSelection^ Macad::Occt::SelectMgr_SequenceOfSelection::Assign(Macad::Occt::SelectMgr_SequenceOfSelection^ theOther)
{
	::SelectMgr_SequenceOfSelection* _result = new ::SelectMgr_SequenceOfSelection();
	*_result = ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Assign(*(::SelectMgr_SequenceOfSelection*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_SequenceOfSelection(_result);
}

void Macad::Occt::SelectMgr_SequenceOfSelection::Remove(int theIndex)
{
	((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::SelectMgr_SequenceOfSelection::Remove(int theFromIndex, int theToIndex)
{
	((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::SelectMgr_SequenceOfSelection::Append(Macad::Occt::SelectMgr_Selection^ theItem)
{
	Handle(::SelectMgr_Selection) h_theItem = theItem->NativeInstance;
	((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::SelectMgr_SequenceOfSelection::Append(Macad::Occt::SelectMgr_SequenceOfSelection^ theSeq)
{
	((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Append(*(::SelectMgr_SequenceOfSelection*)theSeq->NativeInstance);
}

void Macad::Occt::SelectMgr_SequenceOfSelection::Prepend(Macad::Occt::SelectMgr_Selection^ theItem)
{
	Handle(::SelectMgr_Selection) h_theItem = theItem->NativeInstance;
	((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::SelectMgr_SequenceOfSelection::Prepend(Macad::Occt::SelectMgr_SequenceOfSelection^ theSeq)
{
	((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Prepend(*(::SelectMgr_SequenceOfSelection*)theSeq->NativeInstance);
}

void Macad::Occt::SelectMgr_SequenceOfSelection::InsertBefore(int theIndex, Macad::Occt::SelectMgr_Selection^ theItem)
{
	Handle(::SelectMgr_Selection) h_theItem = theItem->NativeInstance;
	((::SelectMgr_SequenceOfSelection*)_NativeInstance)->InsertBefore(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::SelectMgr_SequenceOfSelection::InsertBefore(int theIndex, Macad::Occt::SelectMgr_SequenceOfSelection^ theSeq)
{
	((::SelectMgr_SequenceOfSelection*)_NativeInstance)->InsertBefore(theIndex, *(::SelectMgr_SequenceOfSelection*)theSeq->NativeInstance);
}

void Macad::Occt::SelectMgr_SequenceOfSelection::InsertAfter(int theIndex, Macad::Occt::SelectMgr_SequenceOfSelection^ theSeq)
{
	((::SelectMgr_SequenceOfSelection*)_NativeInstance)->InsertAfter(theIndex, *(::SelectMgr_SequenceOfSelection*)theSeq->NativeInstance);
}

void Macad::Occt::SelectMgr_SequenceOfSelection::InsertAfter(int theIndex, Macad::Occt::SelectMgr_Selection^ theItem)
{
	Handle(::SelectMgr_Selection) h_theItem = theItem->NativeInstance;
	((::SelectMgr_SequenceOfSelection*)_NativeInstance)->InsertAfter(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::SelectMgr_SequenceOfSelection::Split(int theIndex, Macad::Occt::SelectMgr_SequenceOfSelection^ theSeq)
{
	((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Split(theIndex, *(::SelectMgr_SequenceOfSelection*)theSeq->NativeInstance);
}

Macad::Occt::SelectMgr_Selection^ Macad::Occt::SelectMgr_SequenceOfSelection::First()
{
	Handle(::SelectMgr_Selection) _result;
	_result = ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Selection::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_Selection^ Macad::Occt::SelectMgr_SequenceOfSelection::ChangeFirst()
{
	Handle(::SelectMgr_Selection) _result;
	_result = ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->ChangeFirst();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Selection::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_Selection^ Macad::Occt::SelectMgr_SequenceOfSelection::Last()
{
	Handle(::SelectMgr_Selection) _result;
	_result = ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Selection::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_Selection^ Macad::Occt::SelectMgr_SequenceOfSelection::ChangeLast()
{
	Handle(::SelectMgr_Selection) _result;
	_result = ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->ChangeLast();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Selection::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_Selection^ Macad::Occt::SelectMgr_SequenceOfSelection::Value(int theIndex)
{
	Handle(::SelectMgr_Selection) _result;
	_result = ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Value(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Selection::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_Selection^ Macad::Occt::SelectMgr_SequenceOfSelection::ChangeValue(int theIndex)
{
	Handle(::SelectMgr_Selection) _result;
	_result = ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->ChangeValue(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Selection::CreateDowncasted( _result.get());
}

void Macad::Occt::SelectMgr_SequenceOfSelection::SetValue(int theIndex, Macad::Occt::SelectMgr_Selection^ theItem)
{
	Handle(::SelectMgr_Selection) h_theItem = theItem->NativeInstance;
	((::SelectMgr_SequenceOfSelection*)_NativeInstance)->SetValue(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}




//---------------------------------------------------------------------
//  Class  SelectMgr_SequenceOfOwner
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_SequenceOfOwner::SelectMgr_SequenceOfOwner()
	: BaseClass<::SelectMgr_SequenceOfOwner>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_SequenceOfOwner();
}

Macad::Occt::SelectMgr_SequenceOfOwner::SelectMgr_SequenceOfOwner(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::SelectMgr_SequenceOfOwner>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::SelectMgr_SequenceOfOwner(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::SelectMgr_SequenceOfOwner::SelectMgr_SequenceOfOwner(Macad::Occt::SelectMgr_SequenceOfOwner^ theOther)
	: BaseClass<::SelectMgr_SequenceOfOwner>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_SequenceOfOwner(*(::SelectMgr_SequenceOfOwner*)theOther->NativeInstance);
}

int Macad::Occt::SelectMgr_SequenceOfOwner::Size()
{
	return ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Size();
}

int Macad::Occt::SelectMgr_SequenceOfOwner::Length()
{
	return ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Length();
}

int Macad::Occt::SelectMgr_SequenceOfOwner::Lower()
{
	return ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Lower();
}

int Macad::Occt::SelectMgr_SequenceOfOwner::Upper()
{
	return ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Upper();
}

bool Macad::Occt::SelectMgr_SequenceOfOwner::IsEmpty()
{
	return ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::SelectMgr_SequenceOfOwner::Reverse()
{
	((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Reverse();
}

void Macad::Occt::SelectMgr_SequenceOfOwner::Exchange(int I, int J)
{
	((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::SelectMgr_SequenceOfOwner::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::SelectMgr_SequenceOfOwner::Clear()
{
	((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Clear(0L);
}

Macad::Occt::SelectMgr_SequenceOfOwner^ Macad::Occt::SelectMgr_SequenceOfOwner::Assign(Macad::Occt::SelectMgr_SequenceOfOwner^ theOther)
{
	::SelectMgr_SequenceOfOwner* _result = new ::SelectMgr_SequenceOfOwner();
	*_result = ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Assign(*(::SelectMgr_SequenceOfOwner*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_SequenceOfOwner(_result);
}

void Macad::Occt::SelectMgr_SequenceOfOwner::Remove(int theIndex)
{
	((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::SelectMgr_SequenceOfOwner::Remove(int theFromIndex, int theToIndex)
{
	((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::SelectMgr_SequenceOfOwner::Append(Macad::Occt::SelectMgr_EntityOwner^ theItem)
{
	Handle(::SelectMgr_EntityOwner) h_theItem = theItem->NativeInstance;
	((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::SelectMgr_SequenceOfOwner::Append(Macad::Occt::SelectMgr_SequenceOfOwner^ theSeq)
{
	((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Append(*(::SelectMgr_SequenceOfOwner*)theSeq->NativeInstance);
}

void Macad::Occt::SelectMgr_SequenceOfOwner::Prepend(Macad::Occt::SelectMgr_EntityOwner^ theItem)
{
	Handle(::SelectMgr_EntityOwner) h_theItem = theItem->NativeInstance;
	((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::SelectMgr_SequenceOfOwner::Prepend(Macad::Occt::SelectMgr_SequenceOfOwner^ theSeq)
{
	((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Prepend(*(::SelectMgr_SequenceOfOwner*)theSeq->NativeInstance);
}

void Macad::Occt::SelectMgr_SequenceOfOwner::InsertBefore(int theIndex, Macad::Occt::SelectMgr_EntityOwner^ theItem)
{
	Handle(::SelectMgr_EntityOwner) h_theItem = theItem->NativeInstance;
	((::SelectMgr_SequenceOfOwner*)_NativeInstance)->InsertBefore(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::SelectMgr_SequenceOfOwner::InsertBefore(int theIndex, Macad::Occt::SelectMgr_SequenceOfOwner^ theSeq)
{
	((::SelectMgr_SequenceOfOwner*)_NativeInstance)->InsertBefore(theIndex, *(::SelectMgr_SequenceOfOwner*)theSeq->NativeInstance);
}

void Macad::Occt::SelectMgr_SequenceOfOwner::InsertAfter(int theIndex, Macad::Occt::SelectMgr_SequenceOfOwner^ theSeq)
{
	((::SelectMgr_SequenceOfOwner*)_NativeInstance)->InsertAfter(theIndex, *(::SelectMgr_SequenceOfOwner*)theSeq->NativeInstance);
}

void Macad::Occt::SelectMgr_SequenceOfOwner::InsertAfter(int theIndex, Macad::Occt::SelectMgr_EntityOwner^ theItem)
{
	Handle(::SelectMgr_EntityOwner) h_theItem = theItem->NativeInstance;
	((::SelectMgr_SequenceOfOwner*)_NativeInstance)->InsertAfter(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::SelectMgr_SequenceOfOwner::Split(int theIndex, Macad::Occt::SelectMgr_SequenceOfOwner^ theSeq)
{
	((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Split(theIndex, *(::SelectMgr_SequenceOfOwner*)theSeq->NativeInstance);
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_SequenceOfOwner::First()
{
	Handle(::SelectMgr_EntityOwner) _result;
	_result = ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_SequenceOfOwner::ChangeFirst()
{
	Handle(::SelectMgr_EntityOwner) _result;
	_result = ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->ChangeFirst();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_SequenceOfOwner::Last()
{
	Handle(::SelectMgr_EntityOwner) _result;
	_result = ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_SequenceOfOwner::ChangeLast()
{
	Handle(::SelectMgr_EntityOwner) _result;
	_result = ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->ChangeLast();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_SequenceOfOwner::Value(int theIndex)
{
	Handle(::SelectMgr_EntityOwner) _result;
	_result = ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Value(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_SequenceOfOwner::ChangeValue(int theIndex)
{
	Handle(::SelectMgr_EntityOwner) _result;
	_result = ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->ChangeValue(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted( _result.get());
}

void Macad::Occt::SelectMgr_SequenceOfOwner::SetValue(int theIndex, Macad::Occt::SelectMgr_EntityOwner^ theItem)
{
	Handle(::SelectMgr_EntityOwner) h_theItem = theItem->NativeInstance;
	((::SelectMgr_SequenceOfOwner*)_NativeInstance)->SetValue(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}




//---------------------------------------------------------------------
//  Class  SelectMgr_FrustumCache
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_FrustumCache::SelectMgr_FrustumCache()
	: BaseClass<::SelectMgr_FrustumCache>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_FrustumCache();
}

Macad::Occt::SelectMgr_FrustumCache::SelectMgr_FrustumCache(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::SelectMgr_FrustumCache>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::SelectMgr_FrustumCache(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::SelectMgr_FrustumCache::SelectMgr_FrustumCache(int theNbBuckets)
	: BaseClass<::SelectMgr_FrustumCache>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_FrustumCache(theNbBuckets, 0L);
}

Macad::Occt::SelectMgr_FrustumCache::SelectMgr_FrustumCache(Macad::Occt::SelectMgr_FrustumCache^ theOther)
	: BaseClass<::SelectMgr_FrustumCache>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_FrustumCache(*(::SelectMgr_FrustumCache*)theOther->NativeInstance);
}

void Macad::Occt::SelectMgr_FrustumCache::Exchange(Macad::Occt::SelectMgr_FrustumCache^ theOther)
{
	((::SelectMgr_FrustumCache*)_NativeInstance)->Exchange(*(::SelectMgr_FrustumCache*)theOther->NativeInstance);
}

Macad::Occt::SelectMgr_FrustumCache^ Macad::Occt::SelectMgr_FrustumCache::Assign(Macad::Occt::SelectMgr_FrustumCache^ theOther)
{
	::SelectMgr_FrustumCache* _result = new ::SelectMgr_FrustumCache();
	*_result = ((::SelectMgr_FrustumCache*)_NativeInstance)->Assign(*(::SelectMgr_FrustumCache*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_FrustumCache(_result);
}

bool Macad::Occt::SelectMgr_FrustumCache::IsBound(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	return ((::SelectMgr_FrustumCache*)_NativeInstance)->IsBound(*(int*)pp_theKey);
}

bool Macad::Occt::SelectMgr_FrustumCache::UnBind(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	return ((::SelectMgr_FrustumCache*)_NativeInstance)->UnBind(*(int*)pp_theKey);
}

void Macad::Occt::SelectMgr_FrustumCache::Clear(bool doReleaseMemory)
{
	((::SelectMgr_FrustumCache*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::SelectMgr_FrustumCache::Clear()
{
	((::SelectMgr_FrustumCache*)_NativeInstance)->Clear(true);
}

void Macad::Occt::SelectMgr_FrustumCache::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::SelectMgr_FrustumCache*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::SelectMgr_FrustumCache::Size()
{
	return ((::SelectMgr_FrustumCache*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  SelectMgr_SequenceOfFilter
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_SequenceOfFilter::SelectMgr_SequenceOfFilter()
	: BaseClass<::SelectMgr_SequenceOfFilter>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_SequenceOfFilter();
}

Macad::Occt::SelectMgr_SequenceOfFilter::SelectMgr_SequenceOfFilter(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::SelectMgr_SequenceOfFilter>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::SelectMgr_SequenceOfFilter(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::SelectMgr_SequenceOfFilter::SelectMgr_SequenceOfFilter(Macad::Occt::SelectMgr_SequenceOfFilter^ theOther)
	: BaseClass<::SelectMgr_SequenceOfFilter>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_SequenceOfFilter(*(::SelectMgr_SequenceOfFilter*)theOther->NativeInstance);
}

int Macad::Occt::SelectMgr_SequenceOfFilter::Size()
{
	return ((::SelectMgr_SequenceOfFilter*)_NativeInstance)->Size();
}

int Macad::Occt::SelectMgr_SequenceOfFilter::Length()
{
	return ((::SelectMgr_SequenceOfFilter*)_NativeInstance)->Length();
}

int Macad::Occt::SelectMgr_SequenceOfFilter::Lower()
{
	return ((::SelectMgr_SequenceOfFilter*)_NativeInstance)->Lower();
}

int Macad::Occt::SelectMgr_SequenceOfFilter::Upper()
{
	return ((::SelectMgr_SequenceOfFilter*)_NativeInstance)->Upper();
}

bool Macad::Occt::SelectMgr_SequenceOfFilter::IsEmpty()
{
	return ((::SelectMgr_SequenceOfFilter*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::SelectMgr_SequenceOfFilter::Reverse()
{
	((::SelectMgr_SequenceOfFilter*)_NativeInstance)->Reverse();
}

void Macad::Occt::SelectMgr_SequenceOfFilter::Exchange(int I, int J)
{
	((::SelectMgr_SequenceOfFilter*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::SelectMgr_SequenceOfFilter::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::SelectMgr_SequenceOfFilter*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::SelectMgr_SequenceOfFilter::Clear()
{
	((::SelectMgr_SequenceOfFilter*)_NativeInstance)->Clear(0L);
}

Macad::Occt::SelectMgr_SequenceOfFilter^ Macad::Occt::SelectMgr_SequenceOfFilter::Assign(Macad::Occt::SelectMgr_SequenceOfFilter^ theOther)
{
	::SelectMgr_SequenceOfFilter* _result = new ::SelectMgr_SequenceOfFilter();
	*_result = ((::SelectMgr_SequenceOfFilter*)_NativeInstance)->Assign(*(::SelectMgr_SequenceOfFilter*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_SequenceOfFilter(_result);
}

void Macad::Occt::SelectMgr_SequenceOfFilter::Remove(int theIndex)
{
	((::SelectMgr_SequenceOfFilter*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::SelectMgr_SequenceOfFilter::Remove(int theFromIndex, int theToIndex)
{
	((::SelectMgr_SequenceOfFilter*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::SelectMgr_SequenceOfFilter::Append(Macad::Occt::SelectMgr_Filter^ theItem)
{
	Handle(::SelectMgr_Filter) h_theItem = theItem->NativeInstance;
	((::SelectMgr_SequenceOfFilter*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::SelectMgr_SequenceOfFilter::Append(Macad::Occt::SelectMgr_SequenceOfFilter^ theSeq)
{
	((::SelectMgr_SequenceOfFilter*)_NativeInstance)->Append(*(::SelectMgr_SequenceOfFilter*)theSeq->NativeInstance);
}

void Macad::Occt::SelectMgr_SequenceOfFilter::Prepend(Macad::Occt::SelectMgr_Filter^ theItem)
{
	Handle(::SelectMgr_Filter) h_theItem = theItem->NativeInstance;
	((::SelectMgr_SequenceOfFilter*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::SelectMgr_SequenceOfFilter::Prepend(Macad::Occt::SelectMgr_SequenceOfFilter^ theSeq)
{
	((::SelectMgr_SequenceOfFilter*)_NativeInstance)->Prepend(*(::SelectMgr_SequenceOfFilter*)theSeq->NativeInstance);
}

void Macad::Occt::SelectMgr_SequenceOfFilter::InsertBefore(int theIndex, Macad::Occt::SelectMgr_Filter^ theItem)
{
	Handle(::SelectMgr_Filter) h_theItem = theItem->NativeInstance;
	((::SelectMgr_SequenceOfFilter*)_NativeInstance)->InsertBefore(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::SelectMgr_SequenceOfFilter::InsertBefore(int theIndex, Macad::Occt::SelectMgr_SequenceOfFilter^ theSeq)
{
	((::SelectMgr_SequenceOfFilter*)_NativeInstance)->InsertBefore(theIndex, *(::SelectMgr_SequenceOfFilter*)theSeq->NativeInstance);
}

void Macad::Occt::SelectMgr_SequenceOfFilter::InsertAfter(int theIndex, Macad::Occt::SelectMgr_SequenceOfFilter^ theSeq)
{
	((::SelectMgr_SequenceOfFilter*)_NativeInstance)->InsertAfter(theIndex, *(::SelectMgr_SequenceOfFilter*)theSeq->NativeInstance);
}

void Macad::Occt::SelectMgr_SequenceOfFilter::InsertAfter(int theIndex, Macad::Occt::SelectMgr_Filter^ theItem)
{
	Handle(::SelectMgr_Filter) h_theItem = theItem->NativeInstance;
	((::SelectMgr_SequenceOfFilter*)_NativeInstance)->InsertAfter(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::SelectMgr_SequenceOfFilter::Split(int theIndex, Macad::Occt::SelectMgr_SequenceOfFilter^ theSeq)
{
	((::SelectMgr_SequenceOfFilter*)_NativeInstance)->Split(theIndex, *(::SelectMgr_SequenceOfFilter*)theSeq->NativeInstance);
}

Macad::Occt::SelectMgr_Filter^ Macad::Occt::SelectMgr_SequenceOfFilter::First()
{
	Handle(::SelectMgr_Filter) _result;
	_result = ((::SelectMgr_SequenceOfFilter*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Filter::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_Filter^ Macad::Occt::SelectMgr_SequenceOfFilter::ChangeFirst()
{
	Handle(::SelectMgr_Filter) _result;
	_result = ((::SelectMgr_SequenceOfFilter*)_NativeInstance)->ChangeFirst();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Filter::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_Filter^ Macad::Occt::SelectMgr_SequenceOfFilter::Last()
{
	Handle(::SelectMgr_Filter) _result;
	_result = ((::SelectMgr_SequenceOfFilter*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Filter::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_Filter^ Macad::Occt::SelectMgr_SequenceOfFilter::ChangeLast()
{
	Handle(::SelectMgr_Filter) _result;
	_result = ((::SelectMgr_SequenceOfFilter*)_NativeInstance)->ChangeLast();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Filter::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_Filter^ Macad::Occt::SelectMgr_SequenceOfFilter::Value(int theIndex)
{
	Handle(::SelectMgr_Filter) _result;
	_result = ((::SelectMgr_SequenceOfFilter*)_NativeInstance)->Value(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Filter::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_Filter^ Macad::Occt::SelectMgr_SequenceOfFilter::ChangeValue(int theIndex)
{
	Handle(::SelectMgr_Filter) _result;
	_result = ((::SelectMgr_SequenceOfFilter*)_NativeInstance)->ChangeValue(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Filter::CreateDowncasted( _result.get());
}

void Macad::Occt::SelectMgr_SequenceOfFilter::SetValue(int theIndex, Macad::Occt::SelectMgr_Filter^ theItem)
{
	Handle(::SelectMgr_Filter) h_theItem = theItem->NativeInstance;
	((::SelectMgr_SequenceOfFilter*)_NativeInstance)->SetValue(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}




//---------------------------------------------------------------------
//  Class  SelectMgr_EntityOwner
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_EntityOwner::SelectMgr_EntityOwner(int aPriority)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::SelectMgr_EntityOwner(aPriority);
}

Macad::Occt::SelectMgr_EntityOwner::SelectMgr_EntityOwner(Macad::Occt::SelectMgr_SelectableObject^ aSO, int aPriority)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	Handle(::SelectMgr_SelectableObject) h_aSO = aSO->NativeInstance;
	NativeInstance = new ::SelectMgr_EntityOwner(h_aSO, aPriority);
	aSO->NativeInstance = h_aSO.get();
}

Macad::Occt::SelectMgr_EntityOwner::SelectMgr_EntityOwner(Macad::Occt::SelectMgr_SelectableObject^ aSO)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	Handle(::SelectMgr_SelectableObject) h_aSO = aSO->NativeInstance;
	NativeInstance = new ::SelectMgr_EntityOwner(h_aSO, 0);
	aSO->NativeInstance = h_aSO.get();
}

Macad::Occt::SelectMgr_EntityOwner::SelectMgr_EntityOwner(Macad::Occt::SelectMgr_EntityOwner^ theOwner, int aPriority)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	Handle(::SelectMgr_EntityOwner) h_theOwner = theOwner->NativeInstance;
	NativeInstance = new ::SelectMgr_EntityOwner(h_theOwner, aPriority);
	theOwner->NativeInstance = h_theOwner.get();
}

Macad::Occt::SelectMgr_EntityOwner::SelectMgr_EntityOwner(Macad::Occt::SelectMgr_EntityOwner^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::SelectMgr_EntityOwner(*(::SelectMgr_EntityOwner*)parameter1->NativeInstance);
}

int Macad::Occt::SelectMgr_EntityOwner::Priority()
{
	return ((::SelectMgr_EntityOwner*)_NativeInstance)->Priority();
}

void Macad::Occt::SelectMgr_EntityOwner::SetPriority(int thePriority)
{
	((::SelectMgr_EntityOwner*)_NativeInstance)->SetPriority(thePriority);
}

bool Macad::Occt::SelectMgr_EntityOwner::HasSelectable()
{
	return ((::SelectMgr_EntityOwner*)_NativeInstance)->HasSelectable();
}

Macad::Occt::SelectMgr_SelectableObject^ Macad::Occt::SelectMgr_EntityOwner::Selectable()
{
	Handle(::SelectMgr_SelectableObject) _result;
	_result = ((::SelectMgr_EntityOwner*)_NativeInstance)->Selectable();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_SelectableObject::CreateDowncasted( _result.get());
}

void Macad::Occt::SelectMgr_EntityOwner::SetSelectable(Macad::Occt::SelectMgr_SelectableObject^ theSelObj)
{
	Handle(::SelectMgr_SelectableObject) h_theSelObj = theSelObj->NativeInstance;
	((::SelectMgr_EntityOwner*)_NativeInstance)->SetSelectable(h_theSelObj);
	theSelObj->NativeInstance = h_theSelObj.get();
}

bool Macad::Occt::SelectMgr_EntityOwner::HandleMouseClick(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButton, unsigned int theModifiers, bool theIsDoubleClick)
{
	return ((::SelectMgr_EntityOwner*)_NativeInstance)->HandleMouseClick(*(::Graphic3d_Vec2i*)thePoint->NativeInstance, theButton, theModifiers, theIsDoubleClick);
}

bool Macad::Occt::SelectMgr_EntityOwner::HasLocation()
{
	return ((::SelectMgr_EntityOwner*)_NativeInstance)->HasLocation();
}

Macad::Occt::TopLoc_Location^ Macad::Occt::SelectMgr_EntityOwner::Location()
{
	::TopLoc_Location* _result = new ::TopLoc_Location();
	*_result = ((::SelectMgr_EntityOwner*)_NativeInstance)->Location();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

void Macad::Occt::SelectMgr_EntityOwner::SetLocation(Macad::Occt::TopLoc_Location^ theLocation)
{
	((::SelectMgr_EntityOwner*)_NativeInstance)->SetLocation(*(::TopLoc_Location*)theLocation->NativeInstance);
}

bool Macad::Occt::SelectMgr_EntityOwner::IsSelected()
{
	return ((::SelectMgr_EntityOwner*)_NativeInstance)->IsSelected();
}

void Macad::Occt::SelectMgr_EntityOwner::SetSelected(bool theIsSelected)
{
	((::SelectMgr_EntityOwner*)_NativeInstance)->SetSelected(theIsSelected);
}

int Macad::Occt::SelectMgr_EntityOwner::State()
{
	return ((::SelectMgr_EntityOwner*)_NativeInstance)->State();
}

void Macad::Occt::SelectMgr_EntityOwner::State(int theStatus)
{
	((::SelectMgr_EntityOwner*)_NativeInstance)->State(theStatus);
}

bool Macad::Occt::SelectMgr_EntityOwner::IsAutoHilight()
{
	return ((::SelectMgr_EntityOwner*)_NativeInstance)->IsAutoHilight();
}

bool Macad::Occt::SelectMgr_EntityOwner::IsForcedHilight()
{
	return ((::SelectMgr_EntityOwner*)_NativeInstance)->IsForcedHilight();
}

void Macad::Occt::SelectMgr_EntityOwner::SetZLayer(int theLayerId)
{
	((::SelectMgr_EntityOwner*)_NativeInstance)->SetZLayer(theLayerId);
}

bool Macad::Occt::SelectMgr_EntityOwner::IsSameSelectable(Macad::Occt::SelectMgr_SelectableObject^ theOther)
{
	Handle(::SelectMgr_SelectableObject) h_theOther = theOther->NativeInstance;
	return ((::SelectMgr_EntityOwner*)_NativeInstance)->IsSameSelectable(h_theOther);
	theOther->NativeInstance = h_theOther.get();
}

bool Macad::Occt::SelectMgr_EntityOwner::ComesFromDecomposition()
{
	return ((::SelectMgr_EntityOwner*)_NativeInstance)->ComesFromDecomposition();
}

void Macad::Occt::SelectMgr_EntityOwner::SetComesFromDecomposition(bool theIsFromDecomposition)
{
	((::SelectMgr_EntityOwner*)_NativeInstance)->SetComesFromDecomposition(theIsFromDecomposition);
}

void Macad::Occt::SelectMgr_EntityOwner::Set(Macad::Occt::SelectMgr_SelectableObject^ theSelObj)
{
	Handle(::SelectMgr_SelectableObject) h_theSelObj = theSelObj->NativeInstance;
	((::SelectMgr_EntityOwner*)_NativeInstance)->Set(h_theSelObj);
	theSelObj->NativeInstance = h_theSelObj.get();
}

void Macad::Occt::SelectMgr_EntityOwner::Set(int thePriority)
{
	((::SelectMgr_EntityOwner*)_NativeInstance)->Set(thePriority);
}


Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(::SelectMgr_EntityOwner* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::StdSelect_BRepOwner)))
		return Macad::Occt::StdSelect_BRepOwner::CreateDowncasted((::StdSelect_BRepOwner*)instance);
	if (instance->IsKind(STANDARD_TYPE(::AIS_DimensionOwner)))
		return Macad::Occt::AIS_DimensionOwner::CreateDowncasted((::AIS_DimensionOwner*)instance);
	if (instance->IsKind(STANDARD_TYPE(::AIS_ManipulatorOwner)))
		return Macad::Occt::AIS_ManipulatorOwner::CreateDowncasted((::AIS_ManipulatorOwner*)instance);
	if (instance->IsKind(STANDARD_TYPE(::AIS_PointCloudOwner)))
		return Macad::Occt::AIS_PointCloudOwner::CreateDowncasted((::AIS_PointCloudOwner*)instance);
	if (instance->IsKind(STANDARD_TYPE(::AIS_TrihedronOwner)))
		return Macad::Occt::AIS_TrihedronOwner::CreateDowncasted((::AIS_TrihedronOwner*)instance);
	if (instance->IsKind(STANDARD_TYPE(::AIS_ViewCubeOwner)))
		return Macad::Occt::AIS_ViewCubeOwner::CreateDowncasted((::AIS_ViewCubeOwner*)instance);

	return gcnew Macad::Occt::SelectMgr_EntityOwner( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr_Filter
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_Filter::SelectMgr_Filter(Macad::Occt::SelectMgr_Filter^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::SelectMgr_Filter::SelectMgr_Filter()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

bool Macad::Occt::SelectMgr_Filter::IsOk(Macad::Occt::SelectMgr_EntityOwner^ anObj)
{
	Handle(::SelectMgr_EntityOwner) h_anObj = anObj->NativeInstance;
	return ((::SelectMgr_Filter*)_NativeInstance)->IsOk(h_anObj);
	anObj->NativeInstance = h_anObj.get();
}

bool Macad::Occt::SelectMgr_Filter::ActsOn(Macad::Occt::TopAbs_ShapeEnum aStandardMode)
{
	return ((::SelectMgr_Filter*)_NativeInstance)->ActsOn((::TopAbs_ShapeEnum)aStandardMode);
}


Macad::Occt::SelectMgr_Filter^ Macad::Occt::SelectMgr_Filter::CreateDowncasted(::SelectMgr_Filter* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::SelectMgr_CompositionFilter)))
		return Macad::Occt::SelectMgr_CompositionFilter::CreateDowncasted((::SelectMgr_CompositionFilter*)instance);
	if (instance->IsKind(STANDARD_TYPE(::StdSelect_EdgeFilter)))
		return Macad::Occt::StdSelect_EdgeFilter::CreateDowncasted((::StdSelect_EdgeFilter*)instance);
	if (instance->IsKind(STANDARD_TYPE(::StdSelect_FaceFilter)))
		return Macad::Occt::StdSelect_FaceFilter::CreateDowncasted((::StdSelect_FaceFilter*)instance);
	if (instance->IsKind(STANDARD_TYPE(::StdSelect_ShapeTypeFilter)))
		return Macad::Occt::StdSelect_ShapeTypeFilter::CreateDowncasted((::StdSelect_ShapeTypeFilter*)instance);
	if (instance->IsKind(STANDARD_TYPE(::AIS_AttributeFilter)))
		return Macad::Occt::AIS_AttributeFilter::CreateDowncasted((::AIS_AttributeFilter*)instance);
	if (instance->IsKind(STANDARD_TYPE(::AIS_BadEdgeFilter)))
		return Macad::Occt::AIS_BadEdgeFilter::CreateDowncasted((::AIS_BadEdgeFilter*)instance);
	if (instance->IsKind(STANDARD_TYPE(::AIS_C0RegularityFilter)))
		return Macad::Occt::AIS_C0RegularityFilter::CreateDowncasted((::AIS_C0RegularityFilter*)instance);
	if (instance->IsKind(STANDARD_TYPE(::AIS_ExclusionFilter)))
		return Macad::Occt::AIS_ExclusionFilter::CreateDowncasted((::AIS_ExclusionFilter*)instance);
	if (instance->IsKind(STANDARD_TYPE(::AIS_TypeFilter)))
		return Macad::Occt::AIS_TypeFilter::CreateDowncasted((::AIS_TypeFilter*)instance);

	return gcnew Macad::Occt::SelectMgr_Filter( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr_CompositionFilter
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_CompositionFilter::SelectMgr_CompositionFilter(Macad::Occt::SelectMgr_CompositionFilter^ parameter1)
	: Macad::Occt::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::SelectMgr_CompositionFilter::SelectMgr_CompositionFilter()
	: Macad::Occt::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

void Macad::Occt::SelectMgr_CompositionFilter::Add(Macad::Occt::SelectMgr_Filter^ afilter)
{
	Handle(::SelectMgr_Filter) h_afilter = afilter->NativeInstance;
	((::SelectMgr_CompositionFilter*)_NativeInstance)->Add(h_afilter);
	afilter->NativeInstance = h_afilter.get();
}

void Macad::Occt::SelectMgr_CompositionFilter::Remove(Macad::Occt::SelectMgr_Filter^ aFilter)
{
	Handle(::SelectMgr_Filter) h_aFilter = aFilter->NativeInstance;
	((::SelectMgr_CompositionFilter*)_NativeInstance)->Remove(h_aFilter);
	aFilter->NativeInstance = h_aFilter.get();
}

bool Macad::Occt::SelectMgr_CompositionFilter::IsEmpty()
{
	return ((::SelectMgr_CompositionFilter*)_NativeInstance)->IsEmpty();
}

bool Macad::Occt::SelectMgr_CompositionFilter::IsIn(Macad::Occt::SelectMgr_Filter^ aFilter)
{
	Handle(::SelectMgr_Filter) h_aFilter = aFilter->NativeInstance;
	return ((::SelectMgr_CompositionFilter*)_NativeInstance)->IsIn(h_aFilter);
	aFilter->NativeInstance = h_aFilter.get();
}

Macad::Occt::SelectMgr_ListOfFilter^ Macad::Occt::SelectMgr_CompositionFilter::StoredFilters()
{
	::SelectMgr_ListOfFilter* _result = new ::SelectMgr_ListOfFilter();
	*_result =  (::SelectMgr_ListOfFilter)((::SelectMgr_CompositionFilter*)_NativeInstance)->StoredFilters();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_ListOfFilter(_result);
}

void Macad::Occt::SelectMgr_CompositionFilter::Clear()
{
	((::SelectMgr_CompositionFilter*)_NativeInstance)->Clear();
}

bool Macad::Occt::SelectMgr_CompositionFilter::ActsOn(Macad::Occt::TopAbs_ShapeEnum aStandardMode)
{
	return ((::SelectMgr_CompositionFilter*)_NativeInstance)->ActsOn((::TopAbs_ShapeEnum)aStandardMode);
}


Macad::Occt::SelectMgr_CompositionFilter^ Macad::Occt::SelectMgr_CompositionFilter::CreateDowncasted(::SelectMgr_CompositionFilter* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::SelectMgr_AndFilter)))
		return Macad::Occt::SelectMgr_AndFilter::CreateDowncasted((::SelectMgr_AndFilter*)instance);
	if (instance->IsKind(STANDARD_TYPE(::SelectMgr_OrFilter)))
		return Macad::Occt::SelectMgr_OrFilter::CreateDowncasted((::SelectMgr_OrFilter*)instance);

	return gcnew Macad::Occt::SelectMgr_CompositionFilter( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr_AndFilter
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_AndFilter::SelectMgr_AndFilter()
	: Macad::Occt::SelectMgr_CompositionFilter(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::SelectMgr_AndFilter();
}

Macad::Occt::SelectMgr_AndFilter::SelectMgr_AndFilter(Macad::Occt::SelectMgr_AndFilter^ parameter1)
	: Macad::Occt::SelectMgr_CompositionFilter(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::SelectMgr_AndFilter(*(::SelectMgr_AndFilter*)parameter1->NativeInstance);
}

bool Macad::Occt::SelectMgr_AndFilter::IsOk(Macad::Occt::SelectMgr_EntityOwner^ anobj)
{
	Handle(::SelectMgr_EntityOwner) h_anobj = anobj->NativeInstance;
	return ((::SelectMgr_AndFilter*)_NativeInstance)->IsOk(h_anobj);
	anobj->NativeInstance = h_anobj.get();
}


Macad::Occt::SelectMgr_AndFilter^ Macad::Occt::SelectMgr_AndFilter::CreateDowncasted(::SelectMgr_AndFilter* instance)
{
	return gcnew Macad::Occt::SelectMgr_AndFilter( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr_ViewClipRange
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_ViewClipRange::SelectMgr_ViewClipRange()
	: BaseClass<::SelectMgr_ViewClipRange>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_ViewClipRange();
}

Macad::Occt::SelectMgr_ViewClipRange::SelectMgr_ViewClipRange(Macad::Occt::SelectMgr_ViewClipRange^ parameter1)
	: BaseClass<::SelectMgr_ViewClipRange>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_ViewClipRange(*(::SelectMgr_ViewClipRange*)parameter1->NativeInstance);
}

bool Macad::Occt::SelectMgr_ViewClipRange::IsClipped(double theDepth)
{
	return ((::SelectMgr_ViewClipRange*)_NativeInstance)->IsClipped(theDepth);
}

bool Macad::Occt::SelectMgr_ViewClipRange::GetNearestDepth(Macad::Occt::Bnd_Range^ theRange, double% theDepth)
{
	pin_ptr<double> pp_theDepth = &theDepth;
	return ((::SelectMgr_ViewClipRange*)_NativeInstance)->GetNearestDepth(*(::Bnd_Range*)theRange->NativeInstance, *(Standard_Real*)pp_theDepth);
}

void Macad::Occt::SelectMgr_ViewClipRange::SetVoid()
{
	((::SelectMgr_ViewClipRange*)_NativeInstance)->SetVoid();
}

void Macad::Occt::SelectMgr_ViewClipRange::AddClippingPlanes(Macad::Occt::Graphic3d_SequenceOfHClipPlane^ thePlanes, Macad::Occt::Ax1 thePickRay)
{
	pin_ptr<Macad::Occt::Ax1> pp_thePickRay = &thePickRay;
	((::SelectMgr_ViewClipRange*)_NativeInstance)->AddClippingPlanes(*(::Graphic3d_SequenceOfHClipPlane*)thePlanes->NativeInstance, *(gp_Ax1*)pp_thePickRay);
}

Macad::Occt::Bnd_Range^ Macad::Occt::SelectMgr_ViewClipRange::ChangeUnclipRange()
{
	::Bnd_Range* _result = new ::Bnd_Range();
	*_result = ((::SelectMgr_ViewClipRange*)_NativeInstance)->ChangeUnclipRange();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Range(_result);
}

void Macad::Occt::SelectMgr_ViewClipRange::AddClipSubRange(Macad::Occt::Bnd_Range^ theRange)
{
	((::SelectMgr_ViewClipRange*)_NativeInstance)->AddClipSubRange(*(::Bnd_Range*)theRange->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  SelectMgr_SensitiveEntity
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_SensitiveEntity::SelectMgr_SensitiveEntity(Macad::Occt::SelectMgr_SensitiveEntity^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::SelectMgr_SensitiveEntity(*(::SelectMgr_SensitiveEntity*)parameter1->NativeInstance);
}

void Macad::Occt::SelectMgr_SensitiveEntity::Clear()
{
	((::SelectMgr_SensitiveEntity*)_NativeInstance)->Clear();
}

bool Macad::Occt::SelectMgr_SensitiveEntity::IsActiveForSelection()
{
	return ((::SelectMgr_SensitiveEntity*)_NativeInstance)->IsActiveForSelection();
}

void Macad::Occt::SelectMgr_SensitiveEntity::ResetSelectionActiveStatus()
{
	((::SelectMgr_SensitiveEntity*)_NativeInstance)->ResetSelectionActiveStatus();
}

void Macad::Occt::SelectMgr_SensitiveEntity::SetActiveForSelection()
{
	((::SelectMgr_SensitiveEntity*)_NativeInstance)->SetActiveForSelection();
}


Macad::Occt::SelectMgr_SensitiveEntity^ Macad::Occt::SelectMgr_SensitiveEntity::CreateDowncasted(::SelectMgr_SensitiveEntity* instance)
{
	return gcnew Macad::Occt::SelectMgr_SensitiveEntity( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr_Selection
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_Selection::SelectMgr_Selection(int theModeIdx)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::SelectMgr_Selection(theModeIdx);
}

Macad::Occt::SelectMgr_Selection::SelectMgr_Selection(Macad::Occt::SelectMgr_Selection^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::SelectMgr_Selection(*(::SelectMgr_Selection*)parameter1->NativeInstance);
}

void Macad::Occt::SelectMgr_Selection::Destroy()
{
	((::SelectMgr_Selection*)_NativeInstance)->Destroy();
}

void Macad::Occt::SelectMgr_Selection::Clear()
{
	((::SelectMgr_Selection*)_NativeInstance)->Clear();
}

bool Macad::Occt::SelectMgr_Selection::IsEmpty()
{
	return ((::SelectMgr_Selection*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::SelectMgr_Selection::Mode()
{
	return ((::SelectMgr_Selection*)_NativeInstance)->Mode();
}

void Macad::Occt::SelectMgr_Selection::Init()
{
	((::SelectMgr_Selection*)_NativeInstance)->Init();
}

bool Macad::Occt::SelectMgr_Selection::More()
{
	return ((::SelectMgr_Selection*)_NativeInstance)->More();
}

void Macad::Occt::SelectMgr_Selection::Next()
{
	((::SelectMgr_Selection*)_NativeInstance)->Next();
}

Macad::Occt::SelectMgr_SensitiveEntity^ Macad::Occt::SelectMgr_Selection::Sensitive()
{
	Handle(::SelectMgr_SensitiveEntity) _result;
	_result = ((::SelectMgr_Selection*)_NativeInstance)->Sensitive();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_SensitiveEntity::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_TypeOfUpdate Macad::Occt::SelectMgr_Selection::UpdateStatus()
{
	return (Macad::Occt::SelectMgr_TypeOfUpdate)((::SelectMgr_Selection*)_NativeInstance)->UpdateStatus();
}

void Macad::Occt::SelectMgr_Selection::UpdateStatus(Macad::Occt::SelectMgr_TypeOfUpdate theStatus)
{
	((::SelectMgr_Selection*)_NativeInstance)->UpdateStatus((::SelectMgr_TypeOfUpdate)theStatus);
}

void Macad::Occt::SelectMgr_Selection::UpdateBVHStatus(Macad::Occt::SelectMgr_TypeOfBVHUpdate theStatus)
{
	((::SelectMgr_Selection*)_NativeInstance)->UpdateBVHStatus((::SelectMgr_TypeOfBVHUpdate)theStatus);
}

Macad::Occt::SelectMgr_TypeOfBVHUpdate Macad::Occt::SelectMgr_Selection::BVHUpdateStatus()
{
	return (Macad::Occt::SelectMgr_TypeOfBVHUpdate)((::SelectMgr_Selection*)_NativeInstance)->BVHUpdateStatus();
}

Macad::Occt::SelectMgr_StateOfSelection Macad::Occt::SelectMgr_Selection::GetSelectionState()
{
	return (Macad::Occt::SelectMgr_StateOfSelection)((::SelectMgr_Selection*)_NativeInstance)->GetSelectionState();
}

void Macad::Occt::SelectMgr_Selection::SetSelectionState(Macad::Occt::SelectMgr_StateOfSelection theState)
{
	((::SelectMgr_Selection*)_NativeInstance)->SetSelectionState((::SelectMgr_StateOfSelection)theState);
}

int Macad::Occt::SelectMgr_Selection::Sensitivity()
{
	return ((::SelectMgr_Selection*)_NativeInstance)->Sensitivity();
}

void Macad::Occt::SelectMgr_Selection::SetSensitivity(int theNewSens)
{
	((::SelectMgr_Selection*)_NativeInstance)->SetSensitivity(theNewSens);
}


Macad::Occt::SelectMgr_Selection^ Macad::Occt::SelectMgr_Selection::CreateDowncasted(::SelectMgr_Selection* instance)
{
	return gcnew Macad::Occt::SelectMgr_Selection( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr_SelectionManager
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_SelectionManager::SelectMgr_SelectionManager(Macad::Occt::SelectMgr_ViewerSelector^ theSelector)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	Handle(::SelectMgr_ViewerSelector) h_theSelector = theSelector->NativeInstance;
	NativeInstance = new ::SelectMgr_SelectionManager(h_theSelector);
	theSelector->NativeInstance = h_theSelector.get();
}

Macad::Occt::SelectMgr_SelectionManager::SelectMgr_SelectionManager(Macad::Occt::SelectMgr_SelectionManager^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::SelectMgr_SelectionManager(*(::SelectMgr_SelectionManager*)parameter1->NativeInstance);
}

Macad::Occt::SelectMgr_ViewerSelector^ Macad::Occt::SelectMgr_SelectionManager::Selector()
{
	Handle(::SelectMgr_ViewerSelector) _result;
	_result = ((::SelectMgr_SelectionManager*)_NativeInstance)->Selector();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_ViewerSelector::CreateDowncasted( _result.get());
}

bool Macad::Occt::SelectMgr_SelectionManager::Contains(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	return ((::SelectMgr_SelectionManager*)_NativeInstance)->Contains(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectionManager::Load(Macad::Occt::SelectMgr_SelectableObject^ theObject, int theMode)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->Load(h_theObject, theMode);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectionManager::Load(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->Load(h_theObject, -1);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectionManager::Remove(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->Remove(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectionManager::Activate(Macad::Occt::SelectMgr_SelectableObject^ theObject, int theMode)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->Activate(h_theObject, theMode);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectionManager::Activate(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->Activate(h_theObject, 0);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectionManager::Deactivate(Macad::Occt::SelectMgr_SelectableObject^ theObject, int theMode)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->Deactivate(h_theObject, theMode);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectionManager::Deactivate(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->Deactivate(h_theObject, -1);
	theObject->NativeInstance = h_theObject.get();
}

bool Macad::Occt::SelectMgr_SelectionManager::IsActivated(Macad::Occt::SelectMgr_SelectableObject^ theObject, int theMode)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	return ((::SelectMgr_SelectionManager*)_NativeInstance)->IsActivated(h_theObject, theMode);
	theObject->NativeInstance = h_theObject.get();
}

bool Macad::Occt::SelectMgr_SelectionManager::IsActivated(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	return ((::SelectMgr_SelectionManager*)_NativeInstance)->IsActivated(h_theObject, -1);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectionManager::ClearSelectionStructures(Macad::Occt::SelectMgr_SelectableObject^ theObj, int theMode)
{
	Handle(::SelectMgr_SelectableObject) h_theObj = theObj->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->ClearSelectionStructures(h_theObj, theMode);
	theObj->NativeInstance = h_theObj.get();
}

void Macad::Occt::SelectMgr_SelectionManager::ClearSelectionStructures(Macad::Occt::SelectMgr_SelectableObject^ theObj)
{
	Handle(::SelectMgr_SelectableObject) h_theObj = theObj->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->ClearSelectionStructures(h_theObj, -1);
	theObj->NativeInstance = h_theObj.get();
}

void Macad::Occt::SelectMgr_SelectionManager::RestoreSelectionStructures(Macad::Occt::SelectMgr_SelectableObject^ theObj, int theMode)
{
	Handle(::SelectMgr_SelectableObject) h_theObj = theObj->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->RestoreSelectionStructures(h_theObj, theMode);
	theObj->NativeInstance = h_theObj.get();
}

void Macad::Occt::SelectMgr_SelectionManager::RestoreSelectionStructures(Macad::Occt::SelectMgr_SelectableObject^ theObj)
{
	Handle(::SelectMgr_SelectableObject) h_theObj = theObj->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->RestoreSelectionStructures(h_theObj, -1);
	theObj->NativeInstance = h_theObj.get();
}

void Macad::Occt::SelectMgr_SelectionManager::RecomputeSelection(Macad::Occt::SelectMgr_SelectableObject^ theObject, bool theIsForce, int theMode)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->RecomputeSelection(h_theObject, theIsForce, theMode);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectionManager::RecomputeSelection(Macad::Occt::SelectMgr_SelectableObject^ theObject, bool theIsForce)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->RecomputeSelection(h_theObject, theIsForce, -1);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectionManager::RecomputeSelection(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->RecomputeSelection(h_theObject, false, -1);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectionManager::Update(Macad::Occt::SelectMgr_SelectableObject^ theObject, bool theIsForce)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->Update(h_theObject, theIsForce);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectionManager::Update(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->Update(h_theObject, true);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectionManager::SetUpdateMode(Macad::Occt::SelectMgr_SelectableObject^ theObject, Macad::Occt::SelectMgr_TypeOfUpdate theType)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->SetUpdateMode(h_theObject, (::SelectMgr_TypeOfUpdate)theType);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectionManager::SetUpdateMode(Macad::Occt::SelectMgr_SelectableObject^ theObject, int theMode, Macad::Occt::SelectMgr_TypeOfUpdate theType)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->SetUpdateMode(h_theObject, theMode, (::SelectMgr_TypeOfUpdate)theType);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectionManager::SetSelectionSensitivity(Macad::Occt::SelectMgr_SelectableObject^ theObject, int theMode, int theNewSens)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->SetSelectionSensitivity(h_theObject, theMode, theNewSens);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectionManager::UpdateSelection(Macad::Occt::SelectMgr_SelectableObject^ theObj)
{
	Handle(::SelectMgr_SelectableObject) h_theObj = theObj->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->UpdateSelection(h_theObj);
	theObj->NativeInstance = h_theObj.get();
}


Macad::Occt::SelectMgr_SelectionManager^ Macad::Occt::SelectMgr_SelectionManager::CreateDowncasted(::SelectMgr_SelectionManager* instance)
{
	return gcnew Macad::Occt::SelectMgr_SelectionManager( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr_SelectableObject
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_SelectableObject::SelectMgr_SelectableObject(Macad::Occt::SelectMgr_SelectableObject^ parameter1)
	: Macad::Occt::PrsMgr_PresentableObject(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

void Macad::Occt::SelectMgr_SelectableObject::ComputeSelection(Macad::Occt::SelectMgr_Selection^ theSelection, int theMode)
{
	Handle(::SelectMgr_Selection) h_theSelection = theSelection->NativeInstance;
	((::SelectMgr_SelectableObject*)_NativeInstance)->ComputeSelection(h_theSelection, theMode);
	theSelection->NativeInstance = h_theSelection.get();
}

bool Macad::Occt::SelectMgr_SelectableObject::AcceptShapeDecomposition()
{
	return ((::SelectMgr_SelectableObject*)_NativeInstance)->AcceptShapeDecomposition();
}

void Macad::Occt::SelectMgr_SelectableObject::RecomputePrimitives()
{
	((::SelectMgr_SelectableObject*)_NativeInstance)->RecomputePrimitives();
}

void Macad::Occt::SelectMgr_SelectableObject::RecomputePrimitives(int theMode)
{
	((::SelectMgr_SelectableObject*)_NativeInstance)->RecomputePrimitives(theMode);
}

void Macad::Occt::SelectMgr_SelectableObject::AddSelection(Macad::Occt::SelectMgr_Selection^ aSelection, int aMode)
{
	Handle(::SelectMgr_Selection) h_aSelection = aSelection->NativeInstance;
	((::SelectMgr_SelectableObject*)_NativeInstance)->AddSelection(h_aSelection, aMode);
	aSelection->NativeInstance = h_aSelection.get();
}

void Macad::Occt::SelectMgr_SelectableObject::ClearSelections(bool update)
{
	((::SelectMgr_SelectableObject*)_NativeInstance)->ClearSelections(update);
}

void Macad::Occt::SelectMgr_SelectableObject::ClearSelections()
{
	((::SelectMgr_SelectableObject*)_NativeInstance)->ClearSelections(false);
}

Macad::Occt::SelectMgr_Selection^ Macad::Occt::SelectMgr_SelectableObject::Selection(int theMode)
{
	Handle(::SelectMgr_Selection) _result;
	_result = ((::SelectMgr_SelectableObject*)_NativeInstance)->Selection(theMode);
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Selection::CreateDowncasted( _result.get());
}

bool Macad::Occt::SelectMgr_SelectableObject::HasSelection(int theMode)
{
	return ((::SelectMgr_SelectableObject*)_NativeInstance)->HasSelection(theMode);
}

Macad::Occt::SelectMgr_SequenceOfSelection^ Macad::Occt::SelectMgr_SelectableObject::Selections()
{
	::SelectMgr_SequenceOfSelection* _result = new ::SelectMgr_SequenceOfSelection();
	*_result =  (::SelectMgr_SequenceOfSelection)((::SelectMgr_SelectableObject*)_NativeInstance)->Selections();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_SequenceOfSelection(_result);
}

void Macad::Occt::SelectMgr_SelectableObject::ResetTransformation()
{
	((::SelectMgr_SelectableObject*)_NativeInstance)->ResetTransformation();
}

void Macad::Occt::SelectMgr_SelectableObject::UpdateTransformation()
{
	((::SelectMgr_SelectableObject*)_NativeInstance)->UpdateTransformation();
}

void Macad::Occt::SelectMgr_SelectableObject::UpdateTransformations(Macad::Occt::SelectMgr_Selection^ aSelection)
{
	Handle(::SelectMgr_Selection) h_aSelection = aSelection->NativeInstance;
	((::SelectMgr_SelectableObject*)_NativeInstance)->UpdateTransformations(h_aSelection);
	aSelection->NativeInstance = h_aSelection.get();
}

void Macad::Occt::SelectMgr_SelectableObject::ClearSelected()
{
	((::SelectMgr_SelectableObject*)_NativeInstance)->ClearSelected();
}

bool Macad::Occt::SelectMgr_SelectableObject::IsAutoHilight()
{
	return ((::SelectMgr_SelectableObject*)_NativeInstance)->IsAutoHilight();
}

void Macad::Occt::SelectMgr_SelectableObject::SetAutoHilight(bool theAutoHilight)
{
	((::SelectMgr_SelectableObject*)_NativeInstance)->SetAutoHilight(theAutoHilight);
}

void Macad::Occt::SelectMgr_SelectableObject::ErasePresentations(bool theToRemove)
{
	((::SelectMgr_SelectableObject*)_NativeInstance)->ErasePresentations(theToRemove);
}

void Macad::Occt::SelectMgr_SelectableObject::SetZLayer(int theLayerId)
{
	((::SelectMgr_SelectableObject*)_NativeInstance)->SetZLayer(theLayerId);
}

void Macad::Occt::SelectMgr_SelectableObject::UpdateSelection(int theMode)
{
	((::SelectMgr_SelectableObject*)_NativeInstance)->UpdateSelection(theMode);
}

void Macad::Occt::SelectMgr_SelectableObject::UpdateSelection()
{
	((::SelectMgr_SelectableObject*)_NativeInstance)->UpdateSelection(-1);
}

void Macad::Occt::SelectMgr_SelectableObject::SetAssemblyOwner(Macad::Occt::SelectMgr_EntityOwner^ theOwner, int theMode)
{
	Handle(::SelectMgr_EntityOwner) h_theOwner = theOwner->NativeInstance;
	((::SelectMgr_SelectableObject*)_NativeInstance)->SetAssemblyOwner(h_theOwner, theMode);
	theOwner->NativeInstance = h_theOwner.get();
}

void Macad::Occt::SelectMgr_SelectableObject::SetAssemblyOwner(Macad::Occt::SelectMgr_EntityOwner^ theOwner)
{
	Handle(::SelectMgr_EntityOwner) h_theOwner = theOwner->NativeInstance;
	((::SelectMgr_SelectableObject*)_NativeInstance)->SetAssemblyOwner(h_theOwner, -1);
	theOwner->NativeInstance = h_theOwner.get();
}

int Macad::Occt::SelectMgr_SelectableObject::GlobalSelectionMode()
{
	return ((::SelectMgr_SelectableObject*)_NativeInstance)->GlobalSelectionMode();
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_SelectableObject::GlobalSelOwner()
{
	Handle(::SelectMgr_EntityOwner) _result;
	_result = ((::SelectMgr_SelectableObject*)_NativeInstance)->GlobalSelOwner();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_SelectableObject::GetAssemblyOwner()
{
	Handle(::SelectMgr_EntityOwner) _result;
	_result = ((::SelectMgr_SelectableObject*)_NativeInstance)->GetAssemblyOwner();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted( _result.get());
}

void Macad::Occt::SelectMgr_SelectableObject::Init()
{
	((::SelectMgr_SelectableObject*)_NativeInstance)->Init();
}

bool Macad::Occt::SelectMgr_SelectableObject::More()
{
	return ((::SelectMgr_SelectableObject*)_NativeInstance)->More();
}

void Macad::Occt::SelectMgr_SelectableObject::Next()
{
	((::SelectMgr_SelectableObject*)_NativeInstance)->Next();
}

Macad::Occt::SelectMgr_Selection^ Macad::Occt::SelectMgr_SelectableObject::CurrentSelection()
{
	Handle(::SelectMgr_Selection) _result;
	_result = ((::SelectMgr_SelectableObject*)_NativeInstance)->CurrentSelection();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Selection::CreateDowncasted( _result.get());
}


Macad::Occt::SelectMgr_SelectableObject^ Macad::Occt::SelectMgr_SelectableObject::CreateDowncasted(::SelectMgr_SelectableObject* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::AIS_InteractiveObject)))
		return Macad::Occt::AIS_InteractiveObject::CreateDowncasted((::AIS_InteractiveObject*)instance);

	return gcnew Macad::Occt::SelectMgr_SelectableObject( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr_SortCriterion
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_SortCriterion::SelectMgr_SortCriterion()
	: BaseClass<::SelectMgr_SortCriterion>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_SortCriterion();
}

Macad::Occt::SelectMgr_SortCriterion::SelectMgr_SortCriterion(Macad::Occt::SelectMgr_SortCriterion^ parameter1)
	: BaseClass<::SelectMgr_SortCriterion>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_SortCriterion(*(::SelectMgr_SortCriterion*)parameter1->NativeInstance);
}

bool Macad::Occt::SelectMgr_SortCriterion::IsGreater(Macad::Occt::SelectMgr_SortCriterion^ theOther)
{
	return ((::SelectMgr_SortCriterion*)_NativeInstance)->IsGreater(*(::SelectMgr_SortCriterion*)theOther->NativeInstance);
}

bool Macad::Occt::SelectMgr_SortCriterion::IsLower(Macad::Occt::SelectMgr_SortCriterion^ theOther)
{
	return ((::SelectMgr_SortCriterion*)_NativeInstance)->IsLower(*(::SelectMgr_SortCriterion*)theOther->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  SelectMgr_OrFilter
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_OrFilter::SelectMgr_OrFilter()
	: Macad::Occt::SelectMgr_CompositionFilter(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::SelectMgr_OrFilter();
}

Macad::Occt::SelectMgr_OrFilter::SelectMgr_OrFilter(Macad::Occt::SelectMgr_OrFilter^ parameter1)
	: Macad::Occt::SelectMgr_CompositionFilter(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::SelectMgr_OrFilter(*(::SelectMgr_OrFilter*)parameter1->NativeInstance);
}

bool Macad::Occt::SelectMgr_OrFilter::IsOk(Macad::Occt::SelectMgr_EntityOwner^ anobj)
{
	Handle(::SelectMgr_EntityOwner) h_anobj = anobj->NativeInstance;
	return ((::SelectMgr_OrFilter*)_NativeInstance)->IsOk(h_anobj);
	anobj->NativeInstance = h_anobj.get();
}


Macad::Occt::SelectMgr_OrFilter^ Macad::Occt::SelectMgr_OrFilter::CreateDowncasted(::SelectMgr_OrFilter* instance)
{
	return gcnew Macad::Occt::SelectMgr_OrFilter( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr_SelectableObjectSet
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_SelectableObjectSet::SelectMgr_SelectableObjectSet()
	: BaseClass<::SelectMgr_SelectableObjectSet>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_SelectableObjectSet();
}

Macad::Occt::SelectMgr_SelectableObjectSet::SelectMgr_SelectableObjectSet(Macad::Occt::SelectMgr_SelectableObjectSet^ parameter1)
	: BaseClass<::SelectMgr_SelectableObjectSet>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_SelectableObjectSet(*(::SelectMgr_SelectableObjectSet*)parameter1->NativeInstance);
}

bool Macad::Occt::SelectMgr_SelectableObjectSet::Append(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	return ((::SelectMgr_SelectableObjectSet*)_NativeInstance)->Append(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

bool Macad::Occt::SelectMgr_SelectableObjectSet::Remove(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	return ((::SelectMgr_SelectableObjectSet*)_NativeInstance)->Remove(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectableObjectSet::ChangeSubset(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_SelectableObjectSet*)_NativeInstance)->ChangeSubset(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectableObjectSet::MarkDirty()
{
	((::SelectMgr_SelectableObjectSet*)_NativeInstance)->MarkDirty();
}

bool Macad::Occt::SelectMgr_SelectableObjectSet::Contains(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	return ((::SelectMgr_SelectableObjectSet*)_NativeInstance)->Contains(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

bool Macad::Occt::SelectMgr_SelectableObjectSet::IsEmpty()
{
	return ((::SelectMgr_SelectableObjectSet*)_NativeInstance)->IsEmpty();
}

bool Macad::Occt::SelectMgr_SelectableObjectSet::IsEmpty(Macad::Occt::SelectMgr_SelectableObjectSet::BVHSubset theSubset)
{
	return ((::SelectMgr_SelectableObjectSet*)_NativeInstance)->IsEmpty((::SelectMgr_SelectableObjectSet::BVHSubset)theSubset);
}

Macad::Occt::SelectMgr_SelectableObject^ Macad::Occt::SelectMgr_SelectableObjectSet::GetObjectById(Macad::Occt::SelectMgr_SelectableObjectSet::BVHSubset theSubset, int theIndex)
{
	Handle(::SelectMgr_SelectableObject) _result;
	_result = ((::SelectMgr_SelectableObjectSet*)_NativeInstance)->GetObjectById((::SelectMgr_SelectableObjectSet::BVHSubset)theSubset, theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_SelectableObject::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  SelectMgr_SensitiveEntitySet
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_SensitiveEntitySet::SelectMgr_SensitiveEntitySet(Macad::Occt::SelectMgr_SensitiveEntitySet^ parameter1)
	: BaseClass<::SelectMgr_SensitiveEntitySet>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_SensitiveEntitySet(*(::SelectMgr_SensitiveEntitySet*)parameter1->NativeInstance);
}

void Macad::Occt::SelectMgr_SensitiveEntitySet::Append(Macad::Occt::SelectMgr_SensitiveEntity^ theEntity)
{
	Handle(::SelectMgr_SensitiveEntity) h_theEntity = theEntity->NativeInstance;
	((::SelectMgr_SensitiveEntitySet*)_NativeInstance)->Append(h_theEntity);
	theEntity->NativeInstance = h_theEntity.get();
}

void Macad::Occt::SelectMgr_SensitiveEntitySet::Append(Macad::Occt::SelectMgr_Selection^ theSelection)
{
	Handle(::SelectMgr_Selection) h_theSelection = theSelection->NativeInstance;
	((::SelectMgr_SensitiveEntitySet*)_NativeInstance)->Append(h_theSelection);
	theSelection->NativeInstance = h_theSelection.get();
}

void Macad::Occt::SelectMgr_SensitiveEntitySet::Remove(Macad::Occt::SelectMgr_Selection^ theSelection)
{
	Handle(::SelectMgr_Selection) h_theSelection = theSelection->NativeInstance;
	((::SelectMgr_SensitiveEntitySet*)_NativeInstance)->Remove(h_theSelection);
	theSelection->NativeInstance = h_theSelection.get();
}

double Macad::Occt::SelectMgr_SensitiveEntitySet::Center(int theIndex, int theAxis)
{
	return ((::SelectMgr_SensitiveEntitySet*)_NativeInstance)->Center(theIndex, theAxis);
}

void Macad::Occt::SelectMgr_SensitiveEntitySet::Swap(int theIndex1, int theIndex2)
{
	((::SelectMgr_SensitiveEntitySet*)_NativeInstance)->Swap(theIndex1, theIndex2);
}

int Macad::Occt::SelectMgr_SensitiveEntitySet::Size()
{
	return ((::SelectMgr_SensitiveEntitySet*)_NativeInstance)->Size();
}

Macad::Occt::SelectMgr_SensitiveEntity^ Macad::Occt::SelectMgr_SensitiveEntitySet::GetSensitiveById(int theIndex)
{
	Handle(::SelectMgr_SensitiveEntity) _result;
	_result = ((::SelectMgr_SensitiveEntitySet*)_NativeInstance)->GetSensitiveById(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_SensitiveEntity::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  SelectMgr_ViewerSelector
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_ViewerSelector::SelectMgr_ViewerSelector(Macad::Occt::SelectMgr_ViewerSelector^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::SelectMgr_ViewerSelector(*(::SelectMgr_ViewerSelector*)parameter1->NativeInstance);
}

void Macad::Occt::SelectMgr_ViewerSelector::Clear()
{
	((::SelectMgr_ViewerSelector*)_NativeInstance)->Clear();
}

double Macad::Occt::SelectMgr_ViewerSelector::Sensitivity()
{
	return ((::SelectMgr_ViewerSelector*)_NativeInstance)->Sensitivity();
}

void Macad::Occt::SelectMgr_ViewerSelector::SortResult()
{
	((::SelectMgr_ViewerSelector*)_NativeInstance)->SortResult();
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_ViewerSelector::OnePicked()
{
	Handle(::SelectMgr_EntityOwner) _result;
	_result = ((::SelectMgr_ViewerSelector*)_NativeInstance)->OnePicked();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted( _result.get());
}

void Macad::Occt::SelectMgr_ViewerSelector::SetPickClosest(bool theToPreferClosest)
{
	((::SelectMgr_ViewerSelector*)_NativeInstance)->SetPickClosest(theToPreferClosest);
}

int Macad::Occt::SelectMgr_ViewerSelector::NbPicked()
{
	return ((::SelectMgr_ViewerSelector*)_NativeInstance)->NbPicked();
}

void Macad::Occt::SelectMgr_ViewerSelector::ClearPicked()
{
	((::SelectMgr_ViewerSelector*)_NativeInstance)->ClearPicked();
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_ViewerSelector::Picked(int theRank)
{
	Handle(::SelectMgr_EntityOwner) _result;
	_result = ((::SelectMgr_ViewerSelector*)_NativeInstance)->Picked(theRank);
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_SortCriterion^ Macad::Occt::SelectMgr_ViewerSelector::PickedData(int theRank)
{
	::SelectMgr_SortCriterion* _result = new ::SelectMgr_SortCriterion();
	*_result =  (::SelectMgr_SortCriterion)((::SelectMgr_ViewerSelector*)_NativeInstance)->PickedData(theRank);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_SortCriterion(_result);
}

Macad::Occt::Pnt Macad::Occt::SelectMgr_ViewerSelector::PickedPoint(int theRank)
{
	return Macad::Occt::Pnt(((::SelectMgr_ViewerSelector*)_NativeInstance)->PickedPoint(theRank));
}

bool Macad::Occt::SelectMgr_ViewerSelector::Contains(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	return ((::SelectMgr_ViewerSelector*)_NativeInstance)->Contains(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

bool Macad::Occt::SelectMgr_ViewerSelector::Modes(Macad::Occt::SelectMgr_SelectableObject^ theSelectableObject, Macad::Occt::TColStd_ListOfInteger^ theModeList, Macad::Occt::SelectMgr_StateOfSelection theWantedState)
{
	Handle(::SelectMgr_SelectableObject) h_theSelectableObject = theSelectableObject->NativeInstance;
	return ((::SelectMgr_ViewerSelector*)_NativeInstance)->Modes(h_theSelectableObject, *(::TColStd_ListOfInteger*)theModeList->NativeInstance, (::SelectMgr_StateOfSelection)theWantedState);
	theSelectableObject->NativeInstance = h_theSelectableObject.get();
}

bool Macad::Occt::SelectMgr_ViewerSelector::Modes(Macad::Occt::SelectMgr_SelectableObject^ theSelectableObject, Macad::Occt::TColStd_ListOfInteger^ theModeList)
{
	Handle(::SelectMgr_SelectableObject) h_theSelectableObject = theSelectableObject->NativeInstance;
	return ((::SelectMgr_ViewerSelector*)_NativeInstance)->Modes(h_theSelectableObject, *(::TColStd_ListOfInteger*)theModeList->NativeInstance, SelectMgr_SOS_Any);
	theSelectableObject->NativeInstance = h_theSelectableObject.get();
}

bool Macad::Occt::SelectMgr_ViewerSelector::IsActive(Macad::Occt::SelectMgr_SelectableObject^ theSelectableObject, int theMode)
{
	Handle(::SelectMgr_SelectableObject) h_theSelectableObject = theSelectableObject->NativeInstance;
	return ((::SelectMgr_ViewerSelector*)_NativeInstance)->IsActive(h_theSelectableObject, theMode);
	theSelectableObject->NativeInstance = h_theSelectableObject.get();
}

bool Macad::Occt::SelectMgr_ViewerSelector::IsInside(Macad::Occt::SelectMgr_SelectableObject^ theSelectableObject, int theMode)
{
	Handle(::SelectMgr_SelectableObject) h_theSelectableObject = theSelectableObject->NativeInstance;
	return ((::SelectMgr_ViewerSelector*)_NativeInstance)->IsInside(h_theSelectableObject, theMode);
	theSelectableObject->NativeInstance = h_theSelectableObject.get();
}

Macad::Occt::SelectMgr_StateOfSelection Macad::Occt::SelectMgr_ViewerSelector::Status(Macad::Occt::SelectMgr_Selection^ theSelection)
{
	Handle(::SelectMgr_Selection) h_theSelection = theSelection->NativeInstance;
	return (Macad::Occt::SelectMgr_StateOfSelection)((::SelectMgr_ViewerSelector*)_NativeInstance)->Status(h_theSelection);
	theSelection->NativeInstance = h_theSelection.get();
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::SelectMgr_ViewerSelector::Status(Macad::Occt::SelectMgr_SelectableObject^ theSelectableObject)
{
	Handle(::SelectMgr_SelectableObject) h_theSelectableObject = theSelectableObject->NativeInstance;
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::SelectMgr_ViewerSelector*)_NativeInstance)->Status(h_theSelectableObject);
	theSelectableObject->NativeInstance = h_theSelectableObject.get();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::SelectMgr_ViewerSelector::AddSelectableObject(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_ViewerSelector*)_NativeInstance)->AddSelectableObject(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_ViewerSelector::AddSelectionToObject(Macad::Occt::SelectMgr_SelectableObject^ theObject, Macad::Occt::SelectMgr_Selection^ theSelection)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	Handle(::SelectMgr_Selection) h_theSelection = theSelection->NativeInstance;
	((::SelectMgr_ViewerSelector*)_NativeInstance)->AddSelectionToObject(h_theObject, h_theSelection);
	theObject->NativeInstance = h_theObject.get();
	theSelection->NativeInstance = h_theSelection.get();
}

void Macad::Occt::SelectMgr_ViewerSelector::MoveSelectableObject(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_ViewerSelector*)_NativeInstance)->MoveSelectableObject(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_ViewerSelector::RemoveSelectableObject(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_ViewerSelector*)_NativeInstance)->RemoveSelectableObject(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_ViewerSelector::RemoveSelectionOfObject(Macad::Occt::SelectMgr_SelectableObject^ theObject, Macad::Occt::SelectMgr_Selection^ theSelection)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	Handle(::SelectMgr_Selection) h_theSelection = theSelection->NativeInstance;
	((::SelectMgr_ViewerSelector*)_NativeInstance)->RemoveSelectionOfObject(h_theObject, h_theSelection);
	theObject->NativeInstance = h_theObject.get();
	theSelection->NativeInstance = h_theSelection.get();
}

void Macad::Occt::SelectMgr_ViewerSelector::RebuildObjectsTree(bool theIsForce)
{
	((::SelectMgr_ViewerSelector*)_NativeInstance)->RebuildObjectsTree(theIsForce);
}

void Macad::Occt::SelectMgr_ViewerSelector::RebuildObjectsTree()
{
	((::SelectMgr_ViewerSelector*)_NativeInstance)->RebuildObjectsTree(false);
}

void Macad::Occt::SelectMgr_ViewerSelector::RebuildSensitivesTree(Macad::Occt::SelectMgr_SelectableObject^ theObject, bool theIsForce)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_ViewerSelector*)_NativeInstance)->RebuildSensitivesTree(h_theObject, theIsForce);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_ViewerSelector::RebuildSensitivesTree(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_ViewerSelector*)_NativeInstance)->RebuildSensitivesTree(h_theObject, false);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_ViewerSelector::ResetSelectionActivationStatus()
{
	((::SelectMgr_ViewerSelector*)_NativeInstance)->ResetSelectionActivationStatus();
}

void Macad::Occt::SelectMgr_ViewerSelector::AllowOverlapDetection(bool theIsToAllow)
{
	((::SelectMgr_ViewerSelector*)_NativeInstance)->AllowOverlapDetection(theIsToAllow);
}

void Macad::Occt::SelectMgr_ViewerSelector::Init()
{
	((::SelectMgr_ViewerSelector*)_NativeInstance)->Init();
}

bool Macad::Occt::SelectMgr_ViewerSelector::More()
{
	return ((::SelectMgr_ViewerSelector*)_NativeInstance)->More();
}

void Macad::Occt::SelectMgr_ViewerSelector::Next()
{
	((::SelectMgr_ViewerSelector*)_NativeInstance)->Next();
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_ViewerSelector::Picked()
{
	Handle(::SelectMgr_EntityOwner) _result;
	_result = ((::SelectMgr_ViewerSelector*)_NativeInstance)->Picked();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted( _result.get());
}

void Macad::Occt::SelectMgr_ViewerSelector::InitDetected()
{
	((::SelectMgr_ViewerSelector*)_NativeInstance)->InitDetected();
}

void Macad::Occt::SelectMgr_ViewerSelector::NextDetected()
{
	((::SelectMgr_ViewerSelector*)_NativeInstance)->NextDetected();
}

bool Macad::Occt::SelectMgr_ViewerSelector::MoreDetected()
{
	return ((::SelectMgr_ViewerSelector*)_NativeInstance)->MoreDetected();
}


Macad::Occt::SelectMgr_ViewerSelector^ Macad::Occt::SelectMgr_ViewerSelector::CreateDowncasted(::SelectMgr_ViewerSelector* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::StdSelect_ViewerSelector3d)))
		return Macad::Occt::StdSelect_ViewerSelector3d::CreateDowncasted((::StdSelect_ViewerSelector3d*)instance);

	return gcnew Macad::Occt::SelectMgr_ViewerSelector( instance );
}


