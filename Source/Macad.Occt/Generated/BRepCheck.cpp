// Generated wrapper code for package BRepCheck

#include "OcctPCH.h"
#include "BRepCheck.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "BRepCheck.h"
#include "Standard.h"
#include "TopoDS.h"
#include "TopTools.h"
#include "Adaptor3d.h"


//---------------------------------------------------------------------
//  Class  BRepCheck_ListOfStatus
//---------------------------------------------------------------------

Macad::Occt::BRepCheck_ListOfStatus::BRepCheck_ListOfStatus()
	: BaseClass<::BRepCheck_ListOfStatus>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepCheck_ListOfStatus();
}

Macad::Occt::BRepCheck_ListOfStatus::BRepCheck_ListOfStatus(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::BRepCheck_ListOfStatus>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::BRepCheck_ListOfStatus(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::BRepCheck_ListOfStatus::BRepCheck_ListOfStatus(Macad::Occt::BRepCheck_ListOfStatus^ theOther)
	: BaseClass<::BRepCheck_ListOfStatus>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepCheck_ListOfStatus(*(::BRepCheck_ListOfStatus*)theOther->NativeInstance);
}

int Macad::Occt::BRepCheck_ListOfStatus::Size()
{
	return ((::BRepCheck_ListOfStatus*)_NativeInstance)->Size();
}

Macad::Occt::BRepCheck_ListOfStatus^ Macad::Occt::BRepCheck_ListOfStatus::Assign(Macad::Occt::BRepCheck_ListOfStatus^ theOther)
{
	::BRepCheck_ListOfStatus* _result = new ::BRepCheck_ListOfStatus();
	*_result = ((::BRepCheck_ListOfStatus*)_NativeInstance)->Assign(*(::BRepCheck_ListOfStatus*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepCheck_ListOfStatus(_result);
}

void Macad::Occt::BRepCheck_ListOfStatus::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::BRepCheck_ListOfStatus*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::BRepCheck_ListOfStatus::Clear()
{
	((::BRepCheck_ListOfStatus*)_NativeInstance)->Clear(0L);
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_ListOfStatus::First()
{
	return (Macad::Occt::BRepCheck_Status)((::BRepCheck_ListOfStatus*)_NativeInstance)->First();
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_ListOfStatus::Last()
{
	return (Macad::Occt::BRepCheck_Status)((::BRepCheck_ListOfStatus*)_NativeInstance)->Last();
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_ListOfStatus::Append(Macad::Occt::BRepCheck_Status% theItem)
{
	pin_ptr<Macad::Occt::BRepCheck_Status> pp_theItem = &theItem;
	return (Macad::Occt::BRepCheck_Status)((::BRepCheck_ListOfStatus*)_NativeInstance)->Append(*(::BRepCheck_Status*)pp_theItem);
}

void Macad::Occt::BRepCheck_ListOfStatus::Append(Macad::Occt::BRepCheck_ListOfStatus^ theOther)
{
	((::BRepCheck_ListOfStatus*)_NativeInstance)->Append(*(::BRepCheck_ListOfStatus*)theOther->NativeInstance);
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_ListOfStatus::Prepend(Macad::Occt::BRepCheck_Status% theItem)
{
	pin_ptr<Macad::Occt::BRepCheck_Status> pp_theItem = &theItem;
	return (Macad::Occt::BRepCheck_Status)((::BRepCheck_ListOfStatus*)_NativeInstance)->Prepend(*(::BRepCheck_Status*)pp_theItem);
}

void Macad::Occt::BRepCheck_ListOfStatus::Prepend(Macad::Occt::BRepCheck_ListOfStatus^ theOther)
{
	((::BRepCheck_ListOfStatus*)_NativeInstance)->Prepend(*(::BRepCheck_ListOfStatus*)theOther->NativeInstance);
}

void Macad::Occt::BRepCheck_ListOfStatus::RemoveFirst()
{
	((::BRepCheck_ListOfStatus*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::BRepCheck_ListOfStatus::Reverse()
{
	((::BRepCheck_ListOfStatus*)_NativeInstance)->Reverse();
}




//---------------------------------------------------------------------
//  Class  BRepCheck_DataMapOfShapeListOfStatus
//---------------------------------------------------------------------

Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus::BRepCheck_DataMapOfShapeListOfStatus()
	: BaseClass<::BRepCheck_DataMapOfShapeListOfStatus>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepCheck_DataMapOfShapeListOfStatus();
}

Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus::BRepCheck_DataMapOfShapeListOfStatus(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::BRepCheck_DataMapOfShapeListOfStatus>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::BRepCheck_DataMapOfShapeListOfStatus(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus::BRepCheck_DataMapOfShapeListOfStatus(int theNbBuckets)
	: BaseClass<::BRepCheck_DataMapOfShapeListOfStatus>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepCheck_DataMapOfShapeListOfStatus(theNbBuckets, 0L);
}

Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus::BRepCheck_DataMapOfShapeListOfStatus(Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus^ theOther)
	: BaseClass<::BRepCheck_DataMapOfShapeListOfStatus>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepCheck_DataMapOfShapeListOfStatus(*(::BRepCheck_DataMapOfShapeListOfStatus*)theOther->NativeInstance);
}

void Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus::Exchange(Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus^ theOther)
{
	((::BRepCheck_DataMapOfShapeListOfStatus*)_NativeInstance)->Exchange(*(::BRepCheck_DataMapOfShapeListOfStatus*)theOther->NativeInstance);
}

Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus^ Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus::Assign(Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus^ theOther)
{
	::BRepCheck_DataMapOfShapeListOfStatus* _result = new ::BRepCheck_DataMapOfShapeListOfStatus();
	*_result = ((::BRepCheck_DataMapOfShapeListOfStatus*)_NativeInstance)->Assign(*(::BRepCheck_DataMapOfShapeListOfStatus*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus(_result);
}

bool Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::BRepCheck_DataMapOfShapeListOfStatus*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
}

bool Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::BRepCheck_DataMapOfShapeListOfStatus*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
}

void Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus::Clear(bool doReleaseMemory)
{
	((::BRepCheck_DataMapOfShapeListOfStatus*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus::Clear()
{
	((::BRepCheck_DataMapOfShapeListOfStatus*)_NativeInstance)->Clear(true);
}

void Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::BRepCheck_DataMapOfShapeListOfStatus*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::BRepCheck_DataMapOfShapeListOfStatus::Size()
{
	return ((::BRepCheck_DataMapOfShapeListOfStatus*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  BRepCheck_DataMapOfShapeResult
//---------------------------------------------------------------------

Macad::Occt::BRepCheck_DataMapOfShapeResult::BRepCheck_DataMapOfShapeResult()
	: BaseClass<::BRepCheck_DataMapOfShapeResult>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepCheck_DataMapOfShapeResult();
}

Macad::Occt::BRepCheck_DataMapOfShapeResult::BRepCheck_DataMapOfShapeResult(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::BRepCheck_DataMapOfShapeResult>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::BRepCheck_DataMapOfShapeResult(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::BRepCheck_DataMapOfShapeResult::BRepCheck_DataMapOfShapeResult(int theNbBuckets)
	: BaseClass<::BRepCheck_DataMapOfShapeResult>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepCheck_DataMapOfShapeResult(theNbBuckets, 0L);
}

Macad::Occt::BRepCheck_DataMapOfShapeResult::BRepCheck_DataMapOfShapeResult(Macad::Occt::BRepCheck_DataMapOfShapeResult^ theOther)
	: BaseClass<::BRepCheck_DataMapOfShapeResult>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepCheck_DataMapOfShapeResult(*(::BRepCheck_DataMapOfShapeResult*)theOther->NativeInstance);
}

void Macad::Occt::BRepCheck_DataMapOfShapeResult::Exchange(Macad::Occt::BRepCheck_DataMapOfShapeResult^ theOther)
{
	((::BRepCheck_DataMapOfShapeResult*)_NativeInstance)->Exchange(*(::BRepCheck_DataMapOfShapeResult*)theOther->NativeInstance);
}

Macad::Occt::BRepCheck_DataMapOfShapeResult^ Macad::Occt::BRepCheck_DataMapOfShapeResult::Assign(Macad::Occt::BRepCheck_DataMapOfShapeResult^ theOther)
{
	::BRepCheck_DataMapOfShapeResult* _result = new ::BRepCheck_DataMapOfShapeResult();
	*_result = ((::BRepCheck_DataMapOfShapeResult*)_NativeInstance)->Assign(*(::BRepCheck_DataMapOfShapeResult*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepCheck_DataMapOfShapeResult(_result);
}

Macad::Occt::BRepCheck_Result^ Macad::Occt::BRepCheck_DataMapOfShapeResult::Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::BRepCheck_Result^ theItem)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

bool Macad::Occt::BRepCheck_DataMapOfShapeResult::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::BRepCheck_DataMapOfShapeResult*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
}

bool Macad::Occt::BRepCheck_DataMapOfShapeResult::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::BRepCheck_DataMapOfShapeResult*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
}

Macad::Occt::BRepCheck_Result^ Macad::Occt::BRepCheck_DataMapOfShapeResult::Seek(Macad::Occt::TopoDS_Shape^ theKey)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

Macad::Occt::BRepCheck_Result^ Macad::Occt::BRepCheck_DataMapOfShapeResult::Find(Macad::Occt::TopoDS_Shape^ theKey)
{
	Handle(::BRepCheck_Result) _result;
	_result = ((::BRepCheck_DataMapOfShapeResult*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance);
	 return _result.IsNull() ? nullptr : Macad::Occt::BRepCheck_Result::CreateDowncasted( _result.get());
}

bool Macad::Occt::BRepCheck_DataMapOfShapeResult::Find(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::BRepCheck_Result^ theValue)
{
	Handle(::BRepCheck_Result) h_theValue = theValue->NativeInstance;
	return ((::BRepCheck_DataMapOfShapeResult*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance, h_theValue);
	theValue->NativeInstance = h_theValue.get();
}

Macad::Occt::BRepCheck_Result^ Macad::Occt::BRepCheck_DataMapOfShapeResult::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

Macad::Occt::BRepCheck_Result^ Macad::Occt::BRepCheck_DataMapOfShapeResult::ChangeFind(Macad::Occt::TopoDS_Shape^ theKey)
{
	Handle(::BRepCheck_Result) _result;
	_result = ((::BRepCheck_DataMapOfShapeResult*)_NativeInstance)->ChangeFind(*(::TopoDS_Shape*)theKey->NativeInstance);
	 return _result.IsNull() ? nullptr : Macad::Occt::BRepCheck_Result::CreateDowncasted( _result.get());
}

void Macad::Occt::BRepCheck_DataMapOfShapeResult::Clear(bool doReleaseMemory)
{
	((::BRepCheck_DataMapOfShapeResult*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::BRepCheck_DataMapOfShapeResult::Clear()
{
	((::BRepCheck_DataMapOfShapeResult*)_NativeInstance)->Clear(true);
}

void Macad::Occt::BRepCheck_DataMapOfShapeResult::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::BRepCheck_DataMapOfShapeResult*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::BRepCheck_DataMapOfShapeResult::Size()
{
	return ((::BRepCheck_DataMapOfShapeResult*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  BRepCheck_Result
//---------------------------------------------------------------------

Macad::Occt::BRepCheck_Result::BRepCheck_Result(Macad::Occt::BRepCheck_Result^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

void Macad::Occt::BRepCheck_Result::Init(Macad::Occt::TopoDS_Shape^ S)
{
	((::BRepCheck_Result*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance);
}

void Macad::Occt::BRepCheck_Result::InContext(Macad::Occt::TopoDS_Shape^ ContextShape)
{
	((::BRepCheck_Result*)_NativeInstance)->InContext(*(::TopoDS_Shape*)ContextShape->NativeInstance);
}

void Macad::Occt::BRepCheck_Result::Minimum()
{
	((::BRepCheck_Result*)_NativeInstance)->Minimum();
}

void Macad::Occt::BRepCheck_Result::Blind()
{
	((::BRepCheck_Result*)_NativeInstance)->Blind();
}

void Macad::Occt::BRepCheck_Result::SetFailStatus(Macad::Occt::TopoDS_Shape^ S)
{
	((::BRepCheck_Result*)_NativeInstance)->SetFailStatus(*(::TopoDS_Shape*)S->NativeInstance);
}

Macad::Occt::BRepCheck_ListOfStatus^ Macad::Occt::BRepCheck_Result::Status()
{
	::BRepCheck_ListOfStatus* _result = new ::BRepCheck_ListOfStatus();
	*_result =  (::BRepCheck_ListOfStatus)((::BRepCheck_Result*)_NativeInstance)->Status();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepCheck_ListOfStatus(_result);
}

bool Macad::Occt::BRepCheck_Result::IsMinimum()
{
	return ((::BRepCheck_Result*)_NativeInstance)->IsMinimum();
}

bool Macad::Occt::BRepCheck_Result::IsBlind()
{
	return ((::BRepCheck_Result*)_NativeInstance)->IsBlind();
}

Macad::Occt::BRepCheck_ListOfStatus^ Macad::Occt::BRepCheck_Result::StatusOnShape(Macad::Occt::TopoDS_Shape^ S)
{
	::BRepCheck_ListOfStatus* _result = new ::BRepCheck_ListOfStatus();
	*_result =  (::BRepCheck_ListOfStatus)((::BRepCheck_Result*)_NativeInstance)->StatusOnShape(*(::TopoDS_Shape*)S->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepCheck_ListOfStatus(_result);
}

void Macad::Occt::BRepCheck_Result::InitContextIterator()
{
	((::BRepCheck_Result*)_NativeInstance)->InitContextIterator();
}

bool Macad::Occt::BRepCheck_Result::MoreShapeInContext()
{
	return ((::BRepCheck_Result*)_NativeInstance)->MoreShapeInContext();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepCheck_Result::ContextualShape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BRepCheck_Result*)_NativeInstance)->ContextualShape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::BRepCheck_ListOfStatus^ Macad::Occt::BRepCheck_Result::StatusOnShape()
{
	::BRepCheck_ListOfStatus* _result = new ::BRepCheck_ListOfStatus();
	*_result =  (::BRepCheck_ListOfStatus)((::BRepCheck_Result*)_NativeInstance)->StatusOnShape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepCheck_ListOfStatus(_result);
}

void Macad::Occt::BRepCheck_Result::NextShapeInContext()
{
	((::BRepCheck_Result*)_NativeInstance)->NextShapeInContext();
}


Macad::Occt::BRepCheck_Result^ Macad::Occt::BRepCheck_Result::CreateDowncasted(::BRepCheck_Result* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::BRepCheck_Vertex)))
		return Macad::Occt::BRepCheck_Vertex::CreateDowncasted((::BRepCheck_Vertex*)instance);
	if (instance->IsKind(STANDARD_TYPE(::BRepCheck_Edge)))
		return Macad::Occt::BRepCheck_Edge::CreateDowncasted((::BRepCheck_Edge*)instance);
	if (instance->IsKind(STANDARD_TYPE(::BRepCheck_Wire)))
		return Macad::Occt::BRepCheck_Wire::CreateDowncasted((::BRepCheck_Wire*)instance);
	if (instance->IsKind(STANDARD_TYPE(::BRepCheck_Face)))
		return Macad::Occt::BRepCheck_Face::CreateDowncasted((::BRepCheck_Face*)instance);
	if (instance->IsKind(STANDARD_TYPE(::BRepCheck_Shell)))
		return Macad::Occt::BRepCheck_Shell::CreateDowncasted((::BRepCheck_Shell*)instance);
	if (instance->IsKind(STANDARD_TYPE(::BRepCheck_Solid)))
		return Macad::Occt::BRepCheck_Solid::CreateDowncasted((::BRepCheck_Solid*)instance);

	return gcnew Macad::Occt::BRepCheck_Result( instance );
}



//---------------------------------------------------------------------
//  Class  BRepCheck_Vertex
//---------------------------------------------------------------------

Macad::Occt::BRepCheck_Vertex::BRepCheck_Vertex(Macad::Occt::TopoDS_Vertex^ V)
	: Macad::Occt::BRepCheck_Result(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepCheck_Vertex(*(::TopoDS_Vertex*)V->NativeInstance);
}

Macad::Occt::BRepCheck_Vertex::BRepCheck_Vertex(Macad::Occt::BRepCheck_Vertex^ parameter1)
	: Macad::Occt::BRepCheck_Result(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepCheck_Vertex(*(::BRepCheck_Vertex*)parameter1->NativeInstance);
}

void Macad::Occt::BRepCheck_Vertex::InContext(Macad::Occt::TopoDS_Shape^ ContextShape)
{
	((::BRepCheck_Vertex*)_NativeInstance)->InContext(*(::TopoDS_Shape*)ContextShape->NativeInstance);
}

void Macad::Occt::BRepCheck_Vertex::Minimum()
{
	((::BRepCheck_Vertex*)_NativeInstance)->Minimum();
}

void Macad::Occt::BRepCheck_Vertex::Blind()
{
	((::BRepCheck_Vertex*)_NativeInstance)->Blind();
}

double Macad::Occt::BRepCheck_Vertex::Tolerance()
{
	return ((::BRepCheck_Vertex*)_NativeInstance)->Tolerance();
}


Macad::Occt::BRepCheck_Vertex^ Macad::Occt::BRepCheck_Vertex::CreateDowncasted(::BRepCheck_Vertex* instance)
{
	return gcnew Macad::Occt::BRepCheck_Vertex( instance );
}



//---------------------------------------------------------------------
//  Class  BRepCheck_Edge
//---------------------------------------------------------------------

Macad::Occt::BRepCheck_Edge::BRepCheck_Edge(Macad::Occt::TopoDS_Edge^ E)
	: Macad::Occt::BRepCheck_Result(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepCheck_Edge(*(::TopoDS_Edge*)E->NativeInstance);
}

Macad::Occt::BRepCheck_Edge::BRepCheck_Edge(Macad::Occt::BRepCheck_Edge^ parameter1)
	: Macad::Occt::BRepCheck_Result(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepCheck_Edge(*(::BRepCheck_Edge*)parameter1->NativeInstance);
}

void Macad::Occt::BRepCheck_Edge::InContext(Macad::Occt::TopoDS_Shape^ ContextShape)
{
	((::BRepCheck_Edge*)_NativeInstance)->InContext(*(::TopoDS_Shape*)ContextShape->NativeInstance);
}

void Macad::Occt::BRepCheck_Edge::Minimum()
{
	((::BRepCheck_Edge*)_NativeInstance)->Minimum();
}

void Macad::Occt::BRepCheck_Edge::Blind()
{
	((::BRepCheck_Edge*)_NativeInstance)->Blind();
}

bool Macad::Occt::BRepCheck_Edge::GeometricControls()
{
	return ((::BRepCheck_Edge*)_NativeInstance)->GeometricControls();
}

void Macad::Occt::BRepCheck_Edge::GeometricControls(bool B)
{
	((::BRepCheck_Edge*)_NativeInstance)->GeometricControls(B);
}

double Macad::Occt::BRepCheck_Edge::Tolerance()
{
	return ((::BRepCheck_Edge*)_NativeInstance)->Tolerance();
}

void Macad::Occt::BRepCheck_Edge::SetStatus(Macad::Occt::BRepCheck_Status theStatus)
{
	((::BRepCheck_Edge*)_NativeInstance)->SetStatus((::BRepCheck_Status)theStatus);
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Edge::CheckPolygonOnTriangulation(Macad::Occt::TopoDS_Edge^ theEdge)
{
	return (Macad::Occt::BRepCheck_Status)((::BRepCheck_Edge*)_NativeInstance)->CheckPolygonOnTriangulation(*(::TopoDS_Edge*)theEdge->NativeInstance);
}


Macad::Occt::BRepCheck_Edge^ Macad::Occt::BRepCheck_Edge::CreateDowncasted(::BRepCheck_Edge* instance)
{
	return gcnew Macad::Occt::BRepCheck_Edge( instance );
}



//---------------------------------------------------------------------
//  Class  BRepCheck_Wire
//---------------------------------------------------------------------

Macad::Occt::BRepCheck_Wire::BRepCheck_Wire(Macad::Occt::TopoDS_Wire^ W)
	: Macad::Occt::BRepCheck_Result(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepCheck_Wire(*(::TopoDS_Wire*)W->NativeInstance);
}

Macad::Occt::BRepCheck_Wire::BRepCheck_Wire(Macad::Occt::BRepCheck_Wire^ parameter1)
	: Macad::Occt::BRepCheck_Result(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepCheck_Wire(*(::BRepCheck_Wire*)parameter1->NativeInstance);
}

void Macad::Occt::BRepCheck_Wire::InContext(Macad::Occt::TopoDS_Shape^ ContextShape)
{
	((::BRepCheck_Wire*)_NativeInstance)->InContext(*(::TopoDS_Shape*)ContextShape->NativeInstance);
}

void Macad::Occt::BRepCheck_Wire::Minimum()
{
	((::BRepCheck_Wire*)_NativeInstance)->Minimum();
}

void Macad::Occt::BRepCheck_Wire::Blind()
{
	((::BRepCheck_Wire*)_NativeInstance)->Blind();
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Wire::Closed(bool Update)
{
	return (Macad::Occt::BRepCheck_Status)((::BRepCheck_Wire*)_NativeInstance)->Closed(Update);
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Wire::Closed()
{
	return (Macad::Occt::BRepCheck_Status)((::BRepCheck_Wire*)_NativeInstance)->Closed(false);
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Wire::Closed2d(Macad::Occt::TopoDS_Face^ F, bool Update)
{
	return (Macad::Occt::BRepCheck_Status)((::BRepCheck_Wire*)_NativeInstance)->Closed2d(*(::TopoDS_Face*)F->NativeInstance, Update);
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Wire::Closed2d(Macad::Occt::TopoDS_Face^ F)
{
	return (Macad::Occt::BRepCheck_Status)((::BRepCheck_Wire*)_NativeInstance)->Closed2d(*(::TopoDS_Face*)F->NativeInstance, false);
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Wire::Orientation(Macad::Occt::TopoDS_Face^ F, bool Update)
{
	return (Macad::Occt::BRepCheck_Status)((::BRepCheck_Wire*)_NativeInstance)->Orientation(*(::TopoDS_Face*)F->NativeInstance, Update);
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Wire::Orientation(Macad::Occt::TopoDS_Face^ F)
{
	return (Macad::Occt::BRepCheck_Status)((::BRepCheck_Wire*)_NativeInstance)->Orientation(*(::TopoDS_Face*)F->NativeInstance, false);
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Wire::SelfIntersect(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, bool Update)
{
	return (Macad::Occt::BRepCheck_Status)((::BRepCheck_Wire*)_NativeInstance)->SelfIntersect(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, Update);
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Wire::SelfIntersect(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2)
{
	return (Macad::Occt::BRepCheck_Status)((::BRepCheck_Wire*)_NativeInstance)->SelfIntersect(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, false);
}

bool Macad::Occt::BRepCheck_Wire::GeometricControls()
{
	return ((::BRepCheck_Wire*)_NativeInstance)->GeometricControls();
}

void Macad::Occt::BRepCheck_Wire::GeometricControls(bool B)
{
	((::BRepCheck_Wire*)_NativeInstance)->GeometricControls(B);
}

void Macad::Occt::BRepCheck_Wire::SetStatus(Macad::Occt::BRepCheck_Status theStatus)
{
	((::BRepCheck_Wire*)_NativeInstance)->SetStatus((::BRepCheck_Status)theStatus);
}


Macad::Occt::BRepCheck_Wire^ Macad::Occt::BRepCheck_Wire::CreateDowncasted(::BRepCheck_Wire* instance)
{
	return gcnew Macad::Occt::BRepCheck_Wire( instance );
}



//---------------------------------------------------------------------
//  Class  BRepCheck_Face
//---------------------------------------------------------------------

Macad::Occt::BRepCheck_Face::BRepCheck_Face(Macad::Occt::TopoDS_Face^ F)
	: Macad::Occt::BRepCheck_Result(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepCheck_Face(*(::TopoDS_Face*)F->NativeInstance);
}

Macad::Occt::BRepCheck_Face::BRepCheck_Face(Macad::Occt::BRepCheck_Face^ parameter1)
	: Macad::Occt::BRepCheck_Result(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepCheck_Face(*(::BRepCheck_Face*)parameter1->NativeInstance);
}

void Macad::Occt::BRepCheck_Face::InContext(Macad::Occt::TopoDS_Shape^ ContextShape)
{
	((::BRepCheck_Face*)_NativeInstance)->InContext(*(::TopoDS_Shape*)ContextShape->NativeInstance);
}

void Macad::Occt::BRepCheck_Face::Minimum()
{
	((::BRepCheck_Face*)_NativeInstance)->Minimum();
}

void Macad::Occt::BRepCheck_Face::Blind()
{
	((::BRepCheck_Face*)_NativeInstance)->Blind();
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Face::IntersectWires(bool Update)
{
	return (Macad::Occt::BRepCheck_Status)((::BRepCheck_Face*)_NativeInstance)->IntersectWires(Update);
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Face::IntersectWires()
{
	return (Macad::Occt::BRepCheck_Status)((::BRepCheck_Face*)_NativeInstance)->IntersectWires(false);
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Face::ClassifyWires(bool Update)
{
	return (Macad::Occt::BRepCheck_Status)((::BRepCheck_Face*)_NativeInstance)->ClassifyWires(Update);
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Face::ClassifyWires()
{
	return (Macad::Occt::BRepCheck_Status)((::BRepCheck_Face*)_NativeInstance)->ClassifyWires(false);
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Face::OrientationOfWires(bool Update)
{
	return (Macad::Occt::BRepCheck_Status)((::BRepCheck_Face*)_NativeInstance)->OrientationOfWires(Update);
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Face::OrientationOfWires()
{
	return (Macad::Occt::BRepCheck_Status)((::BRepCheck_Face*)_NativeInstance)->OrientationOfWires(false);
}

void Macad::Occt::BRepCheck_Face::SetUnorientable()
{
	((::BRepCheck_Face*)_NativeInstance)->SetUnorientable();
}

void Macad::Occt::BRepCheck_Face::SetStatus(Macad::Occt::BRepCheck_Status theStatus)
{
	((::BRepCheck_Face*)_NativeInstance)->SetStatus((::BRepCheck_Status)theStatus);
}

bool Macad::Occt::BRepCheck_Face::IsUnorientable()
{
	return ((::BRepCheck_Face*)_NativeInstance)->IsUnorientable();
}

bool Macad::Occt::BRepCheck_Face::GeometricControls()
{
	return ((::BRepCheck_Face*)_NativeInstance)->GeometricControls();
}

void Macad::Occt::BRepCheck_Face::GeometricControls(bool B)
{
	((::BRepCheck_Face*)_NativeInstance)->GeometricControls(B);
}


Macad::Occt::BRepCheck_Face^ Macad::Occt::BRepCheck_Face::CreateDowncasted(::BRepCheck_Face* instance)
{
	return gcnew Macad::Occt::BRepCheck_Face( instance );
}



//---------------------------------------------------------------------
//  Class  BRepCheck_Shell
//---------------------------------------------------------------------

Macad::Occt::BRepCheck_Shell::BRepCheck_Shell(Macad::Occt::TopoDS_Shell^ S)
	: Macad::Occt::BRepCheck_Result(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepCheck_Shell(*(::TopoDS_Shell*)S->NativeInstance);
}

Macad::Occt::BRepCheck_Shell::BRepCheck_Shell(Macad::Occt::BRepCheck_Shell^ parameter1)
	: Macad::Occt::BRepCheck_Result(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepCheck_Shell(*(::BRepCheck_Shell*)parameter1->NativeInstance);
}

void Macad::Occt::BRepCheck_Shell::InContext(Macad::Occt::TopoDS_Shape^ ContextShape)
{
	((::BRepCheck_Shell*)_NativeInstance)->InContext(*(::TopoDS_Shape*)ContextShape->NativeInstance);
}

void Macad::Occt::BRepCheck_Shell::Minimum()
{
	((::BRepCheck_Shell*)_NativeInstance)->Minimum();
}

void Macad::Occt::BRepCheck_Shell::Blind()
{
	((::BRepCheck_Shell*)_NativeInstance)->Blind();
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Shell::Closed(bool Update)
{
	return (Macad::Occt::BRepCheck_Status)((::BRepCheck_Shell*)_NativeInstance)->Closed(Update);
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Shell::Closed()
{
	return (Macad::Occt::BRepCheck_Status)((::BRepCheck_Shell*)_NativeInstance)->Closed(false);
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Shell::Orientation(bool Update)
{
	return (Macad::Occt::BRepCheck_Status)((::BRepCheck_Shell*)_NativeInstance)->Orientation(Update);
}

Macad::Occt::BRepCheck_Status Macad::Occt::BRepCheck_Shell::Orientation()
{
	return (Macad::Occt::BRepCheck_Status)((::BRepCheck_Shell*)_NativeInstance)->Orientation(false);
}

void Macad::Occt::BRepCheck_Shell::SetUnorientable()
{
	((::BRepCheck_Shell*)_NativeInstance)->SetUnorientable();
}

bool Macad::Occt::BRepCheck_Shell::IsUnorientable()
{
	return ((::BRepCheck_Shell*)_NativeInstance)->IsUnorientable();
}

int Macad::Occt::BRepCheck_Shell::NbConnectedSet(Macad::Occt::TopTools_ListOfShape^ theSets)
{
	return ((::BRepCheck_Shell*)_NativeInstance)->NbConnectedSet(*(::TopTools_ListOfShape*)theSets->NativeInstance);
}


Macad::Occt::BRepCheck_Shell^ Macad::Occt::BRepCheck_Shell::CreateDowncasted(::BRepCheck_Shell* instance)
{
	return gcnew Macad::Occt::BRepCheck_Shell( instance );
}



//---------------------------------------------------------------------
//  Class  BRepCheck_Solid
//---------------------------------------------------------------------

Macad::Occt::BRepCheck_Solid::BRepCheck_Solid(Macad::Occt::TopoDS_Solid^ theS)
	: Macad::Occt::BRepCheck_Result(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepCheck_Solid(*(::TopoDS_Solid*)theS->NativeInstance);
}

Macad::Occt::BRepCheck_Solid::BRepCheck_Solid(Macad::Occt::BRepCheck_Solid^ parameter1)
	: Macad::Occt::BRepCheck_Result(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepCheck_Solid(*(::BRepCheck_Solid*)parameter1->NativeInstance);
}

void Macad::Occt::BRepCheck_Solid::InContext(Macad::Occt::TopoDS_Shape^ theContextShape)
{
	((::BRepCheck_Solid*)_NativeInstance)->InContext(*(::TopoDS_Shape*)theContextShape->NativeInstance);
}

void Macad::Occt::BRepCheck_Solid::Minimum()
{
	((::BRepCheck_Solid*)_NativeInstance)->Minimum();
}

void Macad::Occt::BRepCheck_Solid::Blind()
{
	((::BRepCheck_Solid*)_NativeInstance)->Blind();
}


Macad::Occt::BRepCheck_Solid^ Macad::Occt::BRepCheck_Solid::CreateDowncasted(::BRepCheck_Solid* instance)
{
	return gcnew Macad::Occt::BRepCheck_Solid( instance );
}



//---------------------------------------------------------------------
//  Class  BRepCheck_Analyzer
//---------------------------------------------------------------------

Macad::Occt::BRepCheck_Analyzer::BRepCheck_Analyzer(Macad::Occt::TopoDS_Shape^ S, bool GeomControls)
	: BaseClass<::BRepCheck_Analyzer>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepCheck_Analyzer(*(::TopoDS_Shape*)S->NativeInstance, GeomControls);
}

Macad::Occt::BRepCheck_Analyzer::BRepCheck_Analyzer(Macad::Occt::TopoDS_Shape^ S)
	: BaseClass<::BRepCheck_Analyzer>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepCheck_Analyzer(*(::TopoDS_Shape*)S->NativeInstance, true);
}

Macad::Occt::BRepCheck_Analyzer::BRepCheck_Analyzer(Macad::Occt::BRepCheck_Analyzer^ parameter1)
	: BaseClass<::BRepCheck_Analyzer>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepCheck_Analyzer(*(::BRepCheck_Analyzer*)parameter1->NativeInstance);
}

void Macad::Occt::BRepCheck_Analyzer::Init(Macad::Occt::TopoDS_Shape^ S, bool GeomControls)
{
	((::BRepCheck_Analyzer*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance, GeomControls);
}

void Macad::Occt::BRepCheck_Analyzer::Init(Macad::Occt::TopoDS_Shape^ S)
{
	((::BRepCheck_Analyzer*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance, true);
}

bool Macad::Occt::BRepCheck_Analyzer::IsValid(Macad::Occt::TopoDS_Shape^ S)
{
	return ((::BRepCheck_Analyzer*)_NativeInstance)->IsValid(*(::TopoDS_Shape*)S->NativeInstance);
}

bool Macad::Occt::BRepCheck_Analyzer::IsValid()
{
	return ((::BRepCheck_Analyzer*)_NativeInstance)->IsValid();
}

Macad::Occt::BRepCheck_Result^ Macad::Occt::BRepCheck_Analyzer::Result(Macad::Occt::TopoDS_Shape^ SubS)
{
	Handle(::BRepCheck_Result) _result;
	_result = ((::BRepCheck_Analyzer*)_NativeInstance)->Result(*(::TopoDS_Shape*)SubS->NativeInstance);
	 return _result.IsNull() ? nullptr : Macad::Occt::BRepCheck_Result::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  BRepCheck
//---------------------------------------------------------------------

Macad::Occt::BRepCheck::BRepCheck()
	: BaseClass<::BRepCheck>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepCheck();
}

Macad::Occt::BRepCheck::BRepCheck(Macad::Occt::BRepCheck^ parameter1)
	: BaseClass<::BRepCheck>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepCheck(*(::BRepCheck*)parameter1->NativeInstance);
}

void Macad::Occt::BRepCheck::Add(Macad::Occt::BRepCheck_ListOfStatus^ List, Macad::Occt::BRepCheck_Status Stat)
{
	::BRepCheck::Add(*(::BRepCheck_ListOfStatus*)List->NativeInstance, (::BRepCheck_Status)Stat);
}

bool Macad::Occt::BRepCheck::SelfIntersection(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2)
{
	return ::BRepCheck::SelfIntersection(*(::TopoDS_Wire*)W->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance);
}

double Macad::Occt::BRepCheck::PrecCurve(Macad::Occt::Adaptor3d_Curve^ aAC3D)
{
	return ::BRepCheck::PrecCurve(*(::Adaptor3d_Curve*)aAC3D->NativeInstance);
}

double Macad::Occt::BRepCheck::PrecSurface(Macad::Occt::Adaptor3d_HSurface^ aAHSurf)
{
	Handle(::Adaptor3d_HSurface) h_aAHSurf = aAHSurf->NativeInstance;
	return ::BRepCheck::PrecSurface(h_aAHSurf);
	aAHSurf->NativeInstance = h_aAHSurf.get();
}



