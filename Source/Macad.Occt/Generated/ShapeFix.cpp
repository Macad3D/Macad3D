// Generated wrapper code for package ShapeFix

#include "OcctPCH.h"
#include "ShapeFix.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "ShapeFix.h"
#include "Standard.h"
#include "Bnd.h"
#include "TopoDS.h"
#include "ShapeBuild.h"
#include "ShapeExtend.h"
#include "Message.h"
#include "Geom2d.h"
#include "ShapeConstruct.h"
#include "Geom.h"
#include "TopLoc.h"
#include "ShapeAnalysis.h"
#include "TopTools.h"
#include "TopAbs.h"


//---------------------------------------------------------------------
//  Class  ShapeFix_SequenceOfWireSegment
//---------------------------------------------------------------------

Macad::Occt::ShapeFix_SequenceOfWireSegment::ShapeFix_SequenceOfWireSegment()
	: BaseClass<::ShapeFix_SequenceOfWireSegment>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_SequenceOfWireSegment();
}

Macad::Occt::ShapeFix_SequenceOfWireSegment::ShapeFix_SequenceOfWireSegment(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::ShapeFix_SequenceOfWireSegment>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::ShapeFix_SequenceOfWireSegment(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::ShapeFix_SequenceOfWireSegment::ShapeFix_SequenceOfWireSegment(Macad::Occt::ShapeFix_SequenceOfWireSegment^ theOther)
	: BaseClass<::ShapeFix_SequenceOfWireSegment>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_SequenceOfWireSegment(*(::ShapeFix_SequenceOfWireSegment*)theOther->NativeInstance);
}

int Macad::Occt::ShapeFix_SequenceOfWireSegment::Size()
{
	return ((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->Size();
}

int Macad::Occt::ShapeFix_SequenceOfWireSegment::Length()
{
	return ((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->Length();
}

int Macad::Occt::ShapeFix_SequenceOfWireSegment::Lower()
{
	return ((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->Lower();
}

int Macad::Occt::ShapeFix_SequenceOfWireSegment::Upper()
{
	return ((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->Upper();
}

bool Macad::Occt::ShapeFix_SequenceOfWireSegment::IsEmpty()
{
	return ((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::ShapeFix_SequenceOfWireSegment::Reverse()
{
	((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->Reverse();
}

void Macad::Occt::ShapeFix_SequenceOfWireSegment::Exchange(int I, int J)
{
	((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::ShapeFix_SequenceOfWireSegment::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::ShapeFix_SequenceOfWireSegment::Clear()
{
	((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->Clear(0L);
}

Macad::Occt::ShapeFix_SequenceOfWireSegment^ Macad::Occt::ShapeFix_SequenceOfWireSegment::Assign(Macad::Occt::ShapeFix_SequenceOfWireSegment^ theOther)
{
	::ShapeFix_SequenceOfWireSegment* _result = new ::ShapeFix_SequenceOfWireSegment();
	*_result = ((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->Assign(*(::ShapeFix_SequenceOfWireSegment*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::ShapeFix_SequenceOfWireSegment(_result);
}

void Macad::Occt::ShapeFix_SequenceOfWireSegment::Remove(int theIndex)
{
	((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::ShapeFix_SequenceOfWireSegment::Remove(int theFromIndex, int theToIndex)
{
	((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::ShapeFix_SequenceOfWireSegment::Append(Macad::Occt::ShapeFix_WireSegment^ theItem)
{
	((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->Append(*(::ShapeFix_WireSegment*)theItem->NativeInstance);
}

void Macad::Occt::ShapeFix_SequenceOfWireSegment::Append(Macad::Occt::ShapeFix_SequenceOfWireSegment^ theSeq)
{
	((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->Append(*(::ShapeFix_SequenceOfWireSegment*)theSeq->NativeInstance);
}

void Macad::Occt::ShapeFix_SequenceOfWireSegment::Prepend(Macad::Occt::ShapeFix_WireSegment^ theItem)
{
	((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->Prepend(*(::ShapeFix_WireSegment*)theItem->NativeInstance);
}

void Macad::Occt::ShapeFix_SequenceOfWireSegment::Prepend(Macad::Occt::ShapeFix_SequenceOfWireSegment^ theSeq)
{
	((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->Prepend(*(::ShapeFix_SequenceOfWireSegment*)theSeq->NativeInstance);
}

void Macad::Occt::ShapeFix_SequenceOfWireSegment::InsertBefore(int theIndex, Macad::Occt::ShapeFix_WireSegment^ theItem)
{
	((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->InsertBefore(theIndex, *(::ShapeFix_WireSegment*)theItem->NativeInstance);
}

void Macad::Occt::ShapeFix_SequenceOfWireSegment::InsertBefore(int theIndex, Macad::Occt::ShapeFix_SequenceOfWireSegment^ theSeq)
{
	((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->InsertBefore(theIndex, *(::ShapeFix_SequenceOfWireSegment*)theSeq->NativeInstance);
}

void Macad::Occt::ShapeFix_SequenceOfWireSegment::InsertAfter(int theIndex, Macad::Occt::ShapeFix_SequenceOfWireSegment^ theSeq)
{
	((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->InsertAfter(theIndex, *(::ShapeFix_SequenceOfWireSegment*)theSeq->NativeInstance);
}

void Macad::Occt::ShapeFix_SequenceOfWireSegment::InsertAfter(int theIndex, Macad::Occt::ShapeFix_WireSegment^ theItem)
{
	((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->InsertAfter(theIndex, *(::ShapeFix_WireSegment*)theItem->NativeInstance);
}

void Macad::Occt::ShapeFix_SequenceOfWireSegment::Split(int theIndex, Macad::Occt::ShapeFix_SequenceOfWireSegment^ theSeq)
{
	((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->Split(theIndex, *(::ShapeFix_SequenceOfWireSegment*)theSeq->NativeInstance);
}

Macad::Occt::ShapeFix_WireSegment^ Macad::Occt::ShapeFix_SequenceOfWireSegment::First()
{
	::ShapeFix_WireSegment* _result = new ::ShapeFix_WireSegment();
	*_result =  (::ShapeFix_WireSegment)((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::ShapeFix_WireSegment(_result);
}

Macad::Occt::ShapeFix_WireSegment^ Macad::Occt::ShapeFix_SequenceOfWireSegment::ChangeFirst()
{
	::ShapeFix_WireSegment* _result = new ::ShapeFix_WireSegment();
	*_result = ((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->ChangeFirst();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::ShapeFix_WireSegment(_result);
}

Macad::Occt::ShapeFix_WireSegment^ Macad::Occt::ShapeFix_SequenceOfWireSegment::Last()
{
	::ShapeFix_WireSegment* _result = new ::ShapeFix_WireSegment();
	*_result =  (::ShapeFix_WireSegment)((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::ShapeFix_WireSegment(_result);
}

Macad::Occt::ShapeFix_WireSegment^ Macad::Occt::ShapeFix_SequenceOfWireSegment::ChangeLast()
{
	::ShapeFix_WireSegment* _result = new ::ShapeFix_WireSegment();
	*_result = ((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->ChangeLast();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::ShapeFix_WireSegment(_result);
}

Macad::Occt::ShapeFix_WireSegment^ Macad::Occt::ShapeFix_SequenceOfWireSegment::Value(int theIndex)
{
	::ShapeFix_WireSegment* _result = new ::ShapeFix_WireSegment();
	*_result =  (::ShapeFix_WireSegment)((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->Value(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::ShapeFix_WireSegment(_result);
}

Macad::Occt::ShapeFix_WireSegment^ Macad::Occt::ShapeFix_SequenceOfWireSegment::ChangeValue(int theIndex)
{
	::ShapeFix_WireSegment* _result = new ::ShapeFix_WireSegment();
	*_result = ((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->ChangeValue(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::ShapeFix_WireSegment(_result);
}

void Macad::Occt::ShapeFix_SequenceOfWireSegment::SetValue(int theIndex, Macad::Occt::ShapeFix_WireSegment^ theItem)
{
	((::ShapeFix_SequenceOfWireSegment*)_NativeInstance)->SetValue(theIndex, *(::ShapeFix_WireSegment*)theItem->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  ShapeFix_DataMapOfShapeBox2d
//---------------------------------------------------------------------

Macad::Occt::ShapeFix_DataMapOfShapeBox2d::ShapeFix_DataMapOfShapeBox2d()
	: BaseClass<::ShapeFix_DataMapOfShapeBox2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_DataMapOfShapeBox2d();
}

Macad::Occt::ShapeFix_DataMapOfShapeBox2d::ShapeFix_DataMapOfShapeBox2d(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::ShapeFix_DataMapOfShapeBox2d>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::ShapeFix_DataMapOfShapeBox2d(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::ShapeFix_DataMapOfShapeBox2d::ShapeFix_DataMapOfShapeBox2d(int theNbBuckets)
	: BaseClass<::ShapeFix_DataMapOfShapeBox2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_DataMapOfShapeBox2d(theNbBuckets, 0L);
}

Macad::Occt::ShapeFix_DataMapOfShapeBox2d::ShapeFix_DataMapOfShapeBox2d(Macad::Occt::ShapeFix_DataMapOfShapeBox2d^ theOther)
	: BaseClass<::ShapeFix_DataMapOfShapeBox2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_DataMapOfShapeBox2d(*(::ShapeFix_DataMapOfShapeBox2d*)theOther->NativeInstance);
}

void Macad::Occt::ShapeFix_DataMapOfShapeBox2d::Exchange(Macad::Occt::ShapeFix_DataMapOfShapeBox2d^ theOther)
{
	((::ShapeFix_DataMapOfShapeBox2d*)_NativeInstance)->Exchange(*(::ShapeFix_DataMapOfShapeBox2d*)theOther->NativeInstance);
}

Macad::Occt::ShapeFix_DataMapOfShapeBox2d^ Macad::Occt::ShapeFix_DataMapOfShapeBox2d::Assign(Macad::Occt::ShapeFix_DataMapOfShapeBox2d^ theOther)
{
	::ShapeFix_DataMapOfShapeBox2d* _result = new ::ShapeFix_DataMapOfShapeBox2d();
	*_result = ((::ShapeFix_DataMapOfShapeBox2d*)_NativeInstance)->Assign(*(::ShapeFix_DataMapOfShapeBox2d*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::ShapeFix_DataMapOfShapeBox2d(_result);
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::ShapeFix_DataMapOfShapeBox2d::Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::Bnd_Box2d^ theItem)
{
	::Bnd_Box2d* _result;
	_result = (::Bnd_Box2d*)((::ShapeFix_DataMapOfShapeBox2d*)_NativeInstance)->Bound(*(::TopoDS_Shape*)theKey->NativeInstance, *(::Bnd_Box2d*)theItem->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

bool Macad::Occt::ShapeFix_DataMapOfShapeBox2d::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::ShapeFix_DataMapOfShapeBox2d*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
}

bool Macad::Occt::ShapeFix_DataMapOfShapeBox2d::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::ShapeFix_DataMapOfShapeBox2d*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::ShapeFix_DataMapOfShapeBox2d::Seek(Macad::Occt::TopoDS_Shape^ theKey)
{
	::Bnd_Box2d* _result;
	_result = (::Bnd_Box2d*)((::ShapeFix_DataMapOfShapeBox2d*)_NativeInstance)->Seek(*(::TopoDS_Shape*)theKey->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::ShapeFix_DataMapOfShapeBox2d::Find(Macad::Occt::TopoDS_Shape^ theKey)
{
	::Bnd_Box2d* _result = new ::Bnd_Box2d();
	*_result =  (::Bnd_Box2d)((::ShapeFix_DataMapOfShapeBox2d*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

bool Macad::Occt::ShapeFix_DataMapOfShapeBox2d::Find(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::Bnd_Box2d^ theValue)
{
	return ((::ShapeFix_DataMapOfShapeBox2d*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance, *(::Bnd_Box2d*)theValue->NativeInstance);
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::ShapeFix_DataMapOfShapeBox2d::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey)
{
	::Bnd_Box2d* _result;
	_result = (::Bnd_Box2d*)((::ShapeFix_DataMapOfShapeBox2d*)_NativeInstance)->ChangeSeek(*(::TopoDS_Shape*)theKey->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

Macad::Occt::Bnd_Box2d^ Macad::Occt::ShapeFix_DataMapOfShapeBox2d::ChangeFind(Macad::Occt::TopoDS_Shape^ theKey)
{
	::Bnd_Box2d* _result = new ::Bnd_Box2d();
	*_result = ((::ShapeFix_DataMapOfShapeBox2d*)_NativeInstance)->ChangeFind(*(::TopoDS_Shape*)theKey->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box2d(_result);
}

void Macad::Occt::ShapeFix_DataMapOfShapeBox2d::Clear(bool doReleaseMemory)
{
	((::ShapeFix_DataMapOfShapeBox2d*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::ShapeFix_DataMapOfShapeBox2d::Clear()
{
	((::ShapeFix_DataMapOfShapeBox2d*)_NativeInstance)->Clear(true);
}

void Macad::Occt::ShapeFix_DataMapOfShapeBox2d::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::ShapeFix_DataMapOfShapeBox2d*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::ShapeFix_DataMapOfShapeBox2d::Size()
{
	return ((::ShapeFix_DataMapOfShapeBox2d*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  ShapeFix_Root
//---------------------------------------------------------------------

Macad::Occt::ShapeFix_Root::ShapeFix_Root()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Root();
}

Macad::Occt::ShapeFix_Root::ShapeFix_Root(Macad::Occt::ShapeFix_Root^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Root(*(::ShapeFix_Root*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeFix_Root::Set(Macad::Occt::ShapeFix_Root^ Root)
{
	Handle(::ShapeFix_Root) h_Root = Root->NativeInstance;
	((::ShapeFix_Root*)_NativeInstance)->Set(h_Root);
	Root->NativeInstance = h_Root.get();
}

void Macad::Occt::ShapeFix_Root::SetContext(Macad::Occt::ShapeBuild_ReShape^ context)
{
	Handle(::ShapeBuild_ReShape) h_context = context->NativeInstance;
	((::ShapeFix_Root*)_NativeInstance)->SetContext(h_context);
	context->NativeInstance = h_context.get();
}

Macad::Occt::ShapeBuild_ReShape^ Macad::Occt::ShapeFix_Root::Context()
{
	Handle(::ShapeBuild_ReShape) _result;
	_result = ((::ShapeFix_Root*)_NativeInstance)->Context();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeBuild_ReShape::CreateDowncasted( _result.get());
}

void Macad::Occt::ShapeFix_Root::SetMsgRegistrator(Macad::Occt::ShapeExtend_BasicMsgRegistrator^ msgreg)
{
	Handle(::ShapeExtend_BasicMsgRegistrator) h_msgreg = msgreg->NativeInstance;
	((::ShapeFix_Root*)_NativeInstance)->SetMsgRegistrator(h_msgreg);
	msgreg->NativeInstance = h_msgreg.get();
}

Macad::Occt::ShapeExtend_BasicMsgRegistrator^ Macad::Occt::ShapeFix_Root::MsgRegistrator()
{
	Handle(::ShapeExtend_BasicMsgRegistrator) _result;
	_result = ((::ShapeFix_Root*)_NativeInstance)->MsgRegistrator();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeExtend_BasicMsgRegistrator::CreateDowncasted( _result.get());
}

void Macad::Occt::ShapeFix_Root::SetPrecision(double preci)
{
	((::ShapeFix_Root*)_NativeInstance)->SetPrecision(preci);
}

double Macad::Occt::ShapeFix_Root::Precision()
{
	return ((::ShapeFix_Root*)_NativeInstance)->Precision();
}

void Macad::Occt::ShapeFix_Root::SetMinTolerance(double mintol)
{
	((::ShapeFix_Root*)_NativeInstance)->SetMinTolerance(mintol);
}

double Macad::Occt::ShapeFix_Root::MinTolerance()
{
	return ((::ShapeFix_Root*)_NativeInstance)->MinTolerance();
}

void Macad::Occt::ShapeFix_Root::SetMaxTolerance(double maxtol)
{
	((::ShapeFix_Root*)_NativeInstance)->SetMaxTolerance(maxtol);
}

double Macad::Occt::ShapeFix_Root::MaxTolerance()
{
	return ((::ShapeFix_Root*)_NativeInstance)->MaxTolerance();
}

double Macad::Occt::ShapeFix_Root::LimitTolerance(double toler)
{
	return ((::ShapeFix_Root*)_NativeInstance)->LimitTolerance(toler);
}

void Macad::Occt::ShapeFix_Root::SendMsg(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::Message_Msg^ message, Macad::Occt::Message_Gravity gravity)
{
	((::ShapeFix_Root*)_NativeInstance)->SendMsg(*(::TopoDS_Shape*)shape->NativeInstance, *(::Message_Msg*)message->NativeInstance, (::Message_Gravity)gravity);
}

void Macad::Occt::ShapeFix_Root::SendMsg(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::Message_Msg^ message)
{
	((::ShapeFix_Root*)_NativeInstance)->SendMsg(*(::TopoDS_Shape*)shape->NativeInstance, *(::Message_Msg*)message->NativeInstance, Message_Info);
}

void Macad::Occt::ShapeFix_Root::SendMsg(Macad::Occt::Message_Msg^ message, Macad::Occt::Message_Gravity gravity)
{
	((::ShapeFix_Root*)_NativeInstance)->SendMsg(*(::Message_Msg*)message->NativeInstance, (::Message_Gravity)gravity);
}

void Macad::Occt::ShapeFix_Root::SendMsg(Macad::Occt::Message_Msg^ message)
{
	((::ShapeFix_Root*)_NativeInstance)->SendMsg(*(::Message_Msg*)message->NativeInstance, Message_Info);
}

void Macad::Occt::ShapeFix_Root::SendWarning(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::Message_Msg^ message)
{
	((::ShapeFix_Root*)_NativeInstance)->SendWarning(*(::TopoDS_Shape*)shape->NativeInstance, *(::Message_Msg*)message->NativeInstance);
}

void Macad::Occt::ShapeFix_Root::SendWarning(Macad::Occt::Message_Msg^ message)
{
	((::ShapeFix_Root*)_NativeInstance)->SendWarning(*(::Message_Msg*)message->NativeInstance);
}

void Macad::Occt::ShapeFix_Root::SendFail(Macad::Occt::TopoDS_Shape^ shape, Macad::Occt::Message_Msg^ message)
{
	((::ShapeFix_Root*)_NativeInstance)->SendFail(*(::TopoDS_Shape*)shape->NativeInstance, *(::Message_Msg*)message->NativeInstance);
}

void Macad::Occt::ShapeFix_Root::SendFail(Macad::Occt::Message_Msg^ message)
{
	((::ShapeFix_Root*)_NativeInstance)->SendFail(*(::Message_Msg*)message->NativeInstance);
}


Macad::Occt::ShapeFix_Root^ Macad::Occt::ShapeFix_Root::CreateDowncasted(::ShapeFix_Root* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::ShapeFix_Wire)))
		return Macad::Occt::ShapeFix_Wire::CreateDowncasted((::ShapeFix_Wire*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeFix_Face)))
		return Macad::Occt::ShapeFix_Face::CreateDowncasted((::ShapeFix_Face*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeFix_FixSmallFace)))
		return Macad::Occt::ShapeFix_FixSmallFace::CreateDowncasted((::ShapeFix_FixSmallFace*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeFix_FixSmallSolid)))
		return Macad::Occt::ShapeFix_FixSmallSolid::CreateDowncasted((::ShapeFix_FixSmallSolid*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeFix_Wireframe)))
		return Macad::Occt::ShapeFix_Wireframe::CreateDowncasted((::ShapeFix_Wireframe*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeFix_Shell)))
		return Macad::Occt::ShapeFix_Shell::CreateDowncasted((::ShapeFix_Shell*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeFix_Solid)))
		return Macad::Occt::ShapeFix_Solid::CreateDowncasted((::ShapeFix_Solid*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeFix_Shape)))
		return Macad::Occt::ShapeFix_Shape::CreateDowncasted((::ShapeFix_Shape*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeFix_ComposeShell)))
		return Macad::Occt::ShapeFix_ComposeShell::CreateDowncasted((::ShapeFix_ComposeShell*)instance);
	if (instance->IsKind(STANDARD_TYPE(::ShapeFix_SplitCommonVertex)))
		return Macad::Occt::ShapeFix_SplitCommonVertex::CreateDowncasted((::ShapeFix_SplitCommonVertex*)instance);

	return gcnew Macad::Occt::ShapeFix_Root( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeFix_EdgeProjAux
//---------------------------------------------------------------------

Macad::Occt::ShapeFix_EdgeProjAux::ShapeFix_EdgeProjAux()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_EdgeProjAux();
}

Macad::Occt::ShapeFix_EdgeProjAux::ShapeFix_EdgeProjAux(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_EdgeProjAux(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance);
}

Macad::Occt::ShapeFix_EdgeProjAux::ShapeFix_EdgeProjAux(Macad::Occt::ShapeFix_EdgeProjAux^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_EdgeProjAux(*(::ShapeFix_EdgeProjAux*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeFix_EdgeProjAux::Init(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E)
{
	((::ShapeFix_EdgeProjAux*)_NativeInstance)->Init(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance);
}

void Macad::Occt::ShapeFix_EdgeProjAux::Compute(double preci)
{
	((::ShapeFix_EdgeProjAux*)_NativeInstance)->Compute(preci);
}

bool Macad::Occt::ShapeFix_EdgeProjAux::IsFirstDone()
{
	return ((::ShapeFix_EdgeProjAux*)_NativeInstance)->IsFirstDone();
}

bool Macad::Occt::ShapeFix_EdgeProjAux::IsLastDone()
{
	return ((::ShapeFix_EdgeProjAux*)_NativeInstance)->IsLastDone();
}

double Macad::Occt::ShapeFix_EdgeProjAux::FirstParam()
{
	return ((::ShapeFix_EdgeProjAux*)_NativeInstance)->FirstParam();
}

double Macad::Occt::ShapeFix_EdgeProjAux::LastParam()
{
	return ((::ShapeFix_EdgeProjAux*)_NativeInstance)->LastParam();
}

bool Macad::Occt::ShapeFix_EdgeProjAux::IsIso(Macad::Occt::Geom2d_Curve^ C)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	return ((::ShapeFix_EdgeProjAux*)_NativeInstance)->IsIso(h_C);
	C->NativeInstance = h_C.get();
}


Macad::Occt::ShapeFix_EdgeProjAux^ Macad::Occt::ShapeFix_EdgeProjAux::CreateDowncasted(::ShapeFix_EdgeProjAux* instance)
{
	return gcnew Macad::Occt::ShapeFix_EdgeProjAux( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeFix_Edge
//---------------------------------------------------------------------

Macad::Occt::ShapeFix_Edge::ShapeFix_Edge()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Edge();
}

Macad::Occt::ShapeFix_Edge::ShapeFix_Edge(Macad::Occt::ShapeFix_Edge^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Edge(*(::ShapeFix_Edge*)parameter1->NativeInstance);
}

Macad::Occt::ShapeConstruct_ProjectCurveOnSurface^ Macad::Occt::ShapeFix_Edge::Projector()
{
	Handle(::ShapeConstruct_ProjectCurveOnSurface) _result;
	_result = ((::ShapeFix_Edge*)_NativeInstance)->Projector();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeConstruct_ProjectCurveOnSurface::CreateDowncasted( _result.get());
}

bool Macad::Occt::ShapeFix_Edge::FixRemovePCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face)
{
	return ((::ShapeFix_Edge*)_NativeInstance)->FixRemovePCurve(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance);
}

bool Macad::Occt::ShapeFix_Edge::FixRemovePCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location)
{
	Handle(::Geom_Surface) h_surface = surface->NativeInstance;
	return ((::ShapeFix_Edge*)_NativeInstance)->FixRemovePCurve(*(::TopoDS_Edge*)edge->NativeInstance, h_surface, *(::TopLoc_Location*)location->NativeInstance);
	surface->NativeInstance = h_surface.get();
}

bool Macad::Occt::ShapeFix_Edge::FixRemoveCurve3d(Macad::Occt::TopoDS_Edge^ edge)
{
	return ((::ShapeFix_Edge*)_NativeInstance)->FixRemoveCurve3d(*(::TopoDS_Edge*)edge->NativeInstance);
}

bool Macad::Occt::ShapeFix_Edge::FixAddPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, bool isSeam, double prec)
{
	return ((::ShapeFix_Edge*)_NativeInstance)->FixAddPCurve(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, isSeam, prec);
}

bool Macad::Occt::ShapeFix_Edge::FixAddPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, bool isSeam)
{
	return ((::ShapeFix_Edge*)_NativeInstance)->FixAddPCurve(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, isSeam, 0.);
}

bool Macad::Occt::ShapeFix_Edge::FixAddPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, bool isSeam, double prec)
{
	Handle(::Geom_Surface) h_surface = surface->NativeInstance;
	return ((::ShapeFix_Edge*)_NativeInstance)->FixAddPCurve(*(::TopoDS_Edge*)edge->NativeInstance, h_surface, *(::TopLoc_Location*)location->NativeInstance, isSeam, prec);
	surface->NativeInstance = h_surface.get();
}

bool Macad::Occt::ShapeFix_Edge::FixAddPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, bool isSeam)
{
	Handle(::Geom_Surface) h_surface = surface->NativeInstance;
	return ((::ShapeFix_Edge*)_NativeInstance)->FixAddPCurve(*(::TopoDS_Edge*)edge->NativeInstance, h_surface, *(::TopLoc_Location*)location->NativeInstance, isSeam, 0.);
	surface->NativeInstance = h_surface.get();
}

bool Macad::Occt::ShapeFix_Edge::FixAddPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, bool isSeam, Macad::Occt::ShapeAnalysis_Surface^ surfana, double prec)
{
	Handle(::ShapeAnalysis_Surface) h_surfana = surfana->NativeInstance;
	return ((::ShapeFix_Edge*)_NativeInstance)->FixAddPCurve(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, isSeam, h_surfana, prec);
	surfana->NativeInstance = h_surfana.get();
}

bool Macad::Occt::ShapeFix_Edge::FixAddPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, bool isSeam, Macad::Occt::ShapeAnalysis_Surface^ surfana)
{
	Handle(::ShapeAnalysis_Surface) h_surfana = surfana->NativeInstance;
	return ((::ShapeFix_Edge*)_NativeInstance)->FixAddPCurve(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, isSeam, h_surfana, 0.);
	surfana->NativeInstance = h_surfana.get();
}

bool Macad::Occt::ShapeFix_Edge::FixAddPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, bool isSeam, Macad::Occt::ShapeAnalysis_Surface^ surfana, double prec)
{
	Handle(::Geom_Surface) h_surface = surface->NativeInstance;
	Handle(::ShapeAnalysis_Surface) h_surfana = surfana->NativeInstance;
	return ((::ShapeFix_Edge*)_NativeInstance)->FixAddPCurve(*(::TopoDS_Edge*)edge->NativeInstance, h_surface, *(::TopLoc_Location*)location->NativeInstance, isSeam, h_surfana, prec);
	surface->NativeInstance = h_surface.get();
	surfana->NativeInstance = h_surfana.get();
}

bool Macad::Occt::ShapeFix_Edge::FixAddPCurve(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location, bool isSeam, Macad::Occt::ShapeAnalysis_Surface^ surfana)
{
	Handle(::Geom_Surface) h_surface = surface->NativeInstance;
	Handle(::ShapeAnalysis_Surface) h_surfana = surfana->NativeInstance;
	return ((::ShapeFix_Edge*)_NativeInstance)->FixAddPCurve(*(::TopoDS_Edge*)edge->NativeInstance, h_surface, *(::TopLoc_Location*)location->NativeInstance, isSeam, h_surfana, 0.);
	surface->NativeInstance = h_surface.get();
	surfana->NativeInstance = h_surfana.get();
}

bool Macad::Occt::ShapeFix_Edge::FixAddCurve3d(Macad::Occt::TopoDS_Edge^ edge)
{
	return ((::ShapeFix_Edge*)_NativeInstance)->FixAddCurve3d(*(::TopoDS_Edge*)edge->NativeInstance);
}

bool Macad::Occt::ShapeFix_Edge::FixVertexTolerance(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face)
{
	return ((::ShapeFix_Edge*)_NativeInstance)->FixVertexTolerance(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance);
}

bool Macad::Occt::ShapeFix_Edge::FixVertexTolerance(Macad::Occt::TopoDS_Edge^ edge)
{
	return ((::ShapeFix_Edge*)_NativeInstance)->FixVertexTolerance(*(::TopoDS_Edge*)edge->NativeInstance);
}

bool Macad::Occt::ShapeFix_Edge::FixReversed2d(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face)
{
	return ((::ShapeFix_Edge*)_NativeInstance)->FixReversed2d(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance);
}

bool Macad::Occt::ShapeFix_Edge::FixReversed2d(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::Geom_Surface^ surface, Macad::Occt::TopLoc_Location^ location)
{
	Handle(::Geom_Surface) h_surface = surface->NativeInstance;
	return ((::ShapeFix_Edge*)_NativeInstance)->FixReversed2d(*(::TopoDS_Edge*)edge->NativeInstance, h_surface, *(::TopLoc_Location*)location->NativeInstance);
	surface->NativeInstance = h_surface.get();
}

bool Macad::Occt::ShapeFix_Edge::FixSameParameter(Macad::Occt::TopoDS_Edge^ edge, double tolerance)
{
	return ((::ShapeFix_Edge*)_NativeInstance)->FixSameParameter(*(::TopoDS_Edge*)edge->NativeInstance, tolerance);
}

bool Macad::Occt::ShapeFix_Edge::FixSameParameter(Macad::Occt::TopoDS_Edge^ edge)
{
	return ((::ShapeFix_Edge*)_NativeInstance)->FixSameParameter(*(::TopoDS_Edge*)edge->NativeInstance, 0.);
}

bool Macad::Occt::ShapeFix_Edge::FixSameParameter(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face, double tolerance)
{
	return ((::ShapeFix_Edge*)_NativeInstance)->FixSameParameter(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, tolerance);
}

bool Macad::Occt::ShapeFix_Edge::FixSameParameter(Macad::Occt::TopoDS_Edge^ edge, Macad::Occt::TopoDS_Face^ face)
{
	return ((::ShapeFix_Edge*)_NativeInstance)->FixSameParameter(*(::TopoDS_Edge*)edge->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, 0.);
}

bool Macad::Occt::ShapeFix_Edge::Status(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeFix_Edge*)_NativeInstance)->Status((::ShapeExtend_Status)status);
}

void Macad::Occt::ShapeFix_Edge::SetContext(Macad::Occt::ShapeBuild_ReShape^ context)
{
	Handle(::ShapeBuild_ReShape) h_context = context->NativeInstance;
	((::ShapeFix_Edge*)_NativeInstance)->SetContext(h_context);
	context->NativeInstance = h_context.get();
}

Macad::Occt::ShapeBuild_ReShape^ Macad::Occt::ShapeFix_Edge::Context()
{
	Handle(::ShapeBuild_ReShape) _result;
	_result = ((::ShapeFix_Edge*)_NativeInstance)->Context();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeBuild_ReShape::CreateDowncasted( _result.get());
}


Macad::Occt::ShapeFix_Edge^ Macad::Occt::ShapeFix_Edge::CreateDowncasted(::ShapeFix_Edge* instance)
{
	return gcnew Macad::Occt::ShapeFix_Edge( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeFix_Wire
//---------------------------------------------------------------------

Macad::Occt::ShapeFix_Wire::ShapeFix_Wire()
	: Macad::Occt::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Wire();
}

Macad::Occt::ShapeFix_Wire::ShapeFix_Wire(Macad::Occt::TopoDS_Wire^ wire, Macad::Occt::TopoDS_Face^ face, double prec)
	: Macad::Occt::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Wire(*(::TopoDS_Wire*)wire->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, prec);
}

Macad::Occt::ShapeFix_Wire::ShapeFix_Wire(Macad::Occt::ShapeFix_Wire^ parameter1)
	: Macad::Occt::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Wire(*(::ShapeFix_Wire*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeFix_Wire::ClearModes()
{
	((::ShapeFix_Wire*)_NativeInstance)->ClearModes();
}

void Macad::Occt::ShapeFix_Wire::ClearStatuses()
{
	((::ShapeFix_Wire*)_NativeInstance)->ClearStatuses();
}

void Macad::Occt::ShapeFix_Wire::Init(Macad::Occt::TopoDS_Wire^ wire, Macad::Occt::TopoDS_Face^ face, double prec)
{
	((::ShapeFix_Wire*)_NativeInstance)->Init(*(::TopoDS_Wire*)wire->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, prec);
}

void Macad::Occt::ShapeFix_Wire::Init(Macad::Occt::ShapeAnalysis_Wire^ saw)
{
	Handle(::ShapeAnalysis_Wire) h_saw = saw->NativeInstance;
	((::ShapeFix_Wire*)_NativeInstance)->Init(h_saw);
	saw->NativeInstance = h_saw.get();
}

void Macad::Occt::ShapeFix_Wire::Load(Macad::Occt::TopoDS_Wire^ wire)
{
	((::ShapeFix_Wire*)_NativeInstance)->Load(*(::TopoDS_Wire*)wire->NativeInstance);
}

void Macad::Occt::ShapeFix_Wire::Load(Macad::Occt::ShapeExtend_WireData^ sbwd)
{
	Handle(::ShapeExtend_WireData) h_sbwd = sbwd->NativeInstance;
	((::ShapeFix_Wire*)_NativeInstance)->Load(h_sbwd);
	sbwd->NativeInstance = h_sbwd.get();
}

void Macad::Occt::ShapeFix_Wire::SetFace(Macad::Occt::TopoDS_Face^ face)
{
	((::ShapeFix_Wire*)_NativeInstance)->SetFace(*(::TopoDS_Face*)face->NativeInstance);
}

void Macad::Occt::ShapeFix_Wire::SetSurface(Macad::Occt::Geom_Surface^ surf)
{
	Handle(::Geom_Surface) h_surf = surf->NativeInstance;
	((::ShapeFix_Wire*)_NativeInstance)->SetSurface(h_surf);
	surf->NativeInstance = h_surf.get();
}

void Macad::Occt::ShapeFix_Wire::SetSurface(Macad::Occt::Geom_Surface^ surf, Macad::Occt::TopLoc_Location^ loc)
{
	Handle(::Geom_Surface) h_surf = surf->NativeInstance;
	((::ShapeFix_Wire*)_NativeInstance)->SetSurface(h_surf, *(::TopLoc_Location*)loc->NativeInstance);
	surf->NativeInstance = h_surf.get();
}

void Macad::Occt::ShapeFix_Wire::SetPrecision(double prec)
{
	((::ShapeFix_Wire*)_NativeInstance)->SetPrecision(prec);
}

void Macad::Occt::ShapeFix_Wire::SetMaxTailAngle(double theMaxTailAngle)
{
	((::ShapeFix_Wire*)_NativeInstance)->SetMaxTailAngle(theMaxTailAngle);
}

void Macad::Occt::ShapeFix_Wire::SetMaxTailWidth(double theMaxTailWidth)
{
	((::ShapeFix_Wire*)_NativeInstance)->SetMaxTailWidth(theMaxTailWidth);
}

bool Macad::Occt::ShapeFix_Wire::IsLoaded()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->IsLoaded();
}

bool Macad::Occt::ShapeFix_Wire::IsReady()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->IsReady();
}

int Macad::Occt::ShapeFix_Wire::NbEdges()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->NbEdges();
}

Macad::Occt::TopoDS_Wire^ Macad::Occt::ShapeFix_Wire::Wire()
{
	::TopoDS_Wire* _result = new ::TopoDS_Wire();
	*_result = ((::ShapeFix_Wire*)_NativeInstance)->Wire();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Wire(_result);
}

Macad::Occt::TopoDS_Wire^ Macad::Occt::ShapeFix_Wire::WireAPIMake()
{
	::TopoDS_Wire* _result = new ::TopoDS_Wire();
	*_result = ((::ShapeFix_Wire*)_NativeInstance)->WireAPIMake();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Wire(_result);
}

Macad::Occt::ShapeAnalysis_Wire^ Macad::Occt::ShapeFix_Wire::Analyzer()
{
	Handle(::ShapeAnalysis_Wire) _result;
	_result = ((::ShapeFix_Wire*)_NativeInstance)->Analyzer();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_Wire::CreateDowncasted( _result.get());
}

Macad::Occt::ShapeExtend_WireData^ Macad::Occt::ShapeFix_Wire::WireData()
{
	Handle(::ShapeExtend_WireData) _result;
	_result = ((::ShapeFix_Wire*)_NativeInstance)->WireData();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeExtend_WireData::CreateDowncasted( _result.get());
}

Macad::Occt::TopoDS_Face^ Macad::Occt::ShapeFix_Wire::Face()
{
	::TopoDS_Face* _result = new ::TopoDS_Face();
	*_result =  (::TopoDS_Face)((::ShapeFix_Wire*)_NativeInstance)->Face();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

bool Macad::Occt::ShapeFix_Wire::ModifyTopologyMode()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->ModifyTopologyMode();
}

bool Macad::Occt::ShapeFix_Wire::ModifyGeometryMode()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->ModifyGeometryMode();
}

int Macad::Occt::ShapeFix_Wire::ModifyRemoveLoopMode()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->ModifyRemoveLoopMode();
}

bool Macad::Occt::ShapeFix_Wire::ClosedWireMode()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->ClosedWireMode();
}

bool Macad::Occt::ShapeFix_Wire::PreferencePCurveMode()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->PreferencePCurveMode();
}

bool Macad::Occt::ShapeFix_Wire::FixGapsByRangesMode()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixGapsByRangesMode();
}

int Macad::Occt::ShapeFix_Wire::FixReorderMode()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixReorderMode();
}

int Macad::Occt::ShapeFix_Wire::FixSmallMode()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixSmallMode();
}

int Macad::Occt::ShapeFix_Wire::FixConnectedMode()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixConnectedMode();
}

int Macad::Occt::ShapeFix_Wire::FixEdgeCurvesMode()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixEdgeCurvesMode();
}

int Macad::Occt::ShapeFix_Wire::FixDegeneratedMode()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixDegeneratedMode();
}

int Macad::Occt::ShapeFix_Wire::FixSelfIntersectionMode()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixSelfIntersectionMode();
}

int Macad::Occt::ShapeFix_Wire::FixLackingMode()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixLackingMode();
}

int Macad::Occt::ShapeFix_Wire::FixGaps3dMode()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixGaps3dMode();
}

int Macad::Occt::ShapeFix_Wire::FixGaps2dMode()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixGaps2dMode();
}

int Macad::Occt::ShapeFix_Wire::FixReversed2dMode()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixReversed2dMode();
}

int Macad::Occt::ShapeFix_Wire::FixRemovePCurveMode()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixRemovePCurveMode();
}

int Macad::Occt::ShapeFix_Wire::FixAddPCurveMode()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixAddPCurveMode();
}

int Macad::Occt::ShapeFix_Wire::FixRemoveCurve3dMode()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixRemoveCurve3dMode();
}

int Macad::Occt::ShapeFix_Wire::FixAddCurve3dMode()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixAddCurve3dMode();
}

int Macad::Occt::ShapeFix_Wire::FixSeamMode()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixSeamMode();
}

int Macad::Occt::ShapeFix_Wire::FixShiftedMode()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixShiftedMode();
}

int Macad::Occt::ShapeFix_Wire::FixSameParameterMode()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixSameParameterMode();
}

int Macad::Occt::ShapeFix_Wire::FixVertexToleranceMode()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixVertexToleranceMode();
}

int Macad::Occt::ShapeFix_Wire::FixNotchedEdgesMode()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixNotchedEdgesMode();
}

int Macad::Occt::ShapeFix_Wire::FixSelfIntersectingEdgeMode()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixSelfIntersectingEdgeMode();
}

int Macad::Occt::ShapeFix_Wire::FixIntersectingEdgesMode()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixIntersectingEdgesMode();
}

int Macad::Occt::ShapeFix_Wire::FixNonAdjacentIntersectingEdgesMode()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixNonAdjacentIntersectingEdgesMode();
}

int Macad::Occt::ShapeFix_Wire::FixTailMode()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixTailMode();
}

bool Macad::Occt::ShapeFix_Wire::Perform()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->Perform();
}

bool Macad::Occt::ShapeFix_Wire::FixReorder()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixReorder();
}

int Macad::Occt::ShapeFix_Wire::FixSmall(bool lockvtx, double precsmall)
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixSmall(lockvtx, precsmall);
}

int Macad::Occt::ShapeFix_Wire::FixSmall(bool lockvtx)
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixSmall(lockvtx, 0.);
}

bool Macad::Occt::ShapeFix_Wire::FixConnected(double prec)
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixConnected(prec);
}

bool Macad::Occt::ShapeFix_Wire::FixConnected()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixConnected(-1.);
}

bool Macad::Occt::ShapeFix_Wire::FixEdgeCurves()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixEdgeCurves();
}

bool Macad::Occt::ShapeFix_Wire::FixDegenerated()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixDegenerated();
}

bool Macad::Occt::ShapeFix_Wire::FixSelfIntersection()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixSelfIntersection();
}

bool Macad::Occt::ShapeFix_Wire::FixLacking(bool force)
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixLacking(force);
}

bool Macad::Occt::ShapeFix_Wire::FixLacking()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixLacking(false);
}

bool Macad::Occt::ShapeFix_Wire::FixClosed(double prec)
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixClosed(prec);
}

bool Macad::Occt::ShapeFix_Wire::FixClosed()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixClosed(-1.);
}

bool Macad::Occt::ShapeFix_Wire::FixGaps3d()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixGaps3d();
}

bool Macad::Occt::ShapeFix_Wire::FixGaps2d()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixGaps2d();
}

bool Macad::Occt::ShapeFix_Wire::FixReorder(Macad::Occt::ShapeAnalysis_WireOrder^ wi)
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixReorder(*(::ShapeAnalysis_WireOrder*)wi->NativeInstance);
}

bool Macad::Occt::ShapeFix_Wire::FixSmall(int num, bool lockvtx, double precsmall)
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixSmall(num, lockvtx, precsmall);
}

bool Macad::Occt::ShapeFix_Wire::FixConnected(int num, double prec)
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixConnected(num, prec);
}

bool Macad::Occt::ShapeFix_Wire::FixSeam(int num)
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixSeam(num);
}

bool Macad::Occt::ShapeFix_Wire::FixShifted()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixShifted();
}

bool Macad::Occt::ShapeFix_Wire::FixDegenerated(int num)
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixDegenerated(num);
}

bool Macad::Occt::ShapeFix_Wire::FixLacking(int num, bool force)
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixLacking(num, force);
}

bool Macad::Occt::ShapeFix_Wire::FixLacking(int num)
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixLacking(num, false);
}

bool Macad::Occt::ShapeFix_Wire::FixNotchedEdges()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixNotchedEdges();
}

bool Macad::Occt::ShapeFix_Wire::FixGap3d(int num, bool convert)
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixGap3d(num, convert);
}

bool Macad::Occt::ShapeFix_Wire::FixGap3d(int num)
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixGap3d(num, false);
}

bool Macad::Occt::ShapeFix_Wire::FixGap2d(int num, bool convert)
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixGap2d(num, convert);
}

bool Macad::Occt::ShapeFix_Wire::FixGap2d(int num)
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixGap2d(num, false);
}

bool Macad::Occt::ShapeFix_Wire::FixTails()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->FixTails();
}

bool Macad::Occt::ShapeFix_Wire::StatusReorder(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeFix_Wire*)_NativeInstance)->StatusReorder((::ShapeExtend_Status)status);
}

bool Macad::Occt::ShapeFix_Wire::StatusSmall(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeFix_Wire*)_NativeInstance)->StatusSmall((::ShapeExtend_Status)status);
}

bool Macad::Occt::ShapeFix_Wire::StatusConnected(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeFix_Wire*)_NativeInstance)->StatusConnected((::ShapeExtend_Status)status);
}

bool Macad::Occt::ShapeFix_Wire::StatusEdgeCurves(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeFix_Wire*)_NativeInstance)->StatusEdgeCurves((::ShapeExtend_Status)status);
}

bool Macad::Occt::ShapeFix_Wire::StatusDegenerated(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeFix_Wire*)_NativeInstance)->StatusDegenerated((::ShapeExtend_Status)status);
}

bool Macad::Occt::ShapeFix_Wire::StatusSelfIntersection(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeFix_Wire*)_NativeInstance)->StatusSelfIntersection((::ShapeExtend_Status)status);
}

bool Macad::Occt::ShapeFix_Wire::StatusLacking(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeFix_Wire*)_NativeInstance)->StatusLacking((::ShapeExtend_Status)status);
}

bool Macad::Occt::ShapeFix_Wire::StatusClosed(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeFix_Wire*)_NativeInstance)->StatusClosed((::ShapeExtend_Status)status);
}

bool Macad::Occt::ShapeFix_Wire::StatusGaps3d(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeFix_Wire*)_NativeInstance)->StatusGaps3d((::ShapeExtend_Status)status);
}

bool Macad::Occt::ShapeFix_Wire::StatusGaps2d(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeFix_Wire*)_NativeInstance)->StatusGaps2d((::ShapeExtend_Status)status);
}

bool Macad::Occt::ShapeFix_Wire::StatusNotches(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeFix_Wire*)_NativeInstance)->StatusNotches((::ShapeExtend_Status)status);
}

bool Macad::Occt::ShapeFix_Wire::StatusRemovedSegment()
{
	return ((::ShapeFix_Wire*)_NativeInstance)->StatusRemovedSegment();
}

bool Macad::Occt::ShapeFix_Wire::StatusFixTails(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeFix_Wire*)_NativeInstance)->StatusFixTails((::ShapeExtend_Status)status);
}

bool Macad::Occt::ShapeFix_Wire::LastFixStatus(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeFix_Wire*)_NativeInstance)->LastFixStatus((::ShapeExtend_Status)status);
}

Macad::Occt::ShapeFix_Edge^ Macad::Occt::ShapeFix_Wire::FixEdgeTool()
{
	Handle(::ShapeFix_Edge) _result;
	_result = ((::ShapeFix_Wire*)_NativeInstance)->FixEdgeTool();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeFix_Edge::CreateDowncasted( _result.get());
}


Macad::Occt::ShapeFix_Wire^ Macad::Occt::ShapeFix_Wire::CreateDowncasted(::ShapeFix_Wire* instance)
{
	return gcnew Macad::Occt::ShapeFix_Wire( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeFix_Face
//---------------------------------------------------------------------

Macad::Occt::ShapeFix_Face::ShapeFix_Face()
	: Macad::Occt::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Face();
}

Macad::Occt::ShapeFix_Face::ShapeFix_Face(Macad::Occt::TopoDS_Face^ face)
	: Macad::Occt::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Face(*(::TopoDS_Face*)face->NativeInstance);
}

Macad::Occt::ShapeFix_Face::ShapeFix_Face(Macad::Occt::ShapeFix_Face^ parameter1)
	: Macad::Occt::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Face(*(::ShapeFix_Face*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeFix_Face::ClearModes()
{
	((::ShapeFix_Face*)_NativeInstance)->ClearModes();
}

void Macad::Occt::ShapeFix_Face::Init(Macad::Occt::TopoDS_Face^ face)
{
	((::ShapeFix_Face*)_NativeInstance)->Init(*(::TopoDS_Face*)face->NativeInstance);
}

void Macad::Occt::ShapeFix_Face::Init(Macad::Occt::Geom_Surface^ surf, double preci, bool fwd)
{
	Handle(::Geom_Surface) h_surf = surf->NativeInstance;
	((::ShapeFix_Face*)_NativeInstance)->Init(h_surf, preci, fwd);
	surf->NativeInstance = h_surf.get();
}

void Macad::Occt::ShapeFix_Face::Init(Macad::Occt::Geom_Surface^ surf, double preci)
{
	Handle(::Geom_Surface) h_surf = surf->NativeInstance;
	((::ShapeFix_Face*)_NativeInstance)->Init(h_surf, preci, true);
	surf->NativeInstance = h_surf.get();
}

void Macad::Occt::ShapeFix_Face::Init(Macad::Occt::ShapeAnalysis_Surface^ surf, double preci, bool fwd)
{
	Handle(::ShapeAnalysis_Surface) h_surf = surf->NativeInstance;
	((::ShapeFix_Face*)_NativeInstance)->Init(h_surf, preci, fwd);
	surf->NativeInstance = h_surf.get();
}

void Macad::Occt::ShapeFix_Face::Init(Macad::Occt::ShapeAnalysis_Surface^ surf, double preci)
{
	Handle(::ShapeAnalysis_Surface) h_surf = surf->NativeInstance;
	((::ShapeFix_Face*)_NativeInstance)->Init(h_surf, preci, true);
	surf->NativeInstance = h_surf.get();
}

void Macad::Occt::ShapeFix_Face::SetMsgRegistrator(Macad::Occt::ShapeExtend_BasicMsgRegistrator^ msgreg)
{
	Handle(::ShapeExtend_BasicMsgRegistrator) h_msgreg = msgreg->NativeInstance;
	((::ShapeFix_Face*)_NativeInstance)->SetMsgRegistrator(h_msgreg);
	msgreg->NativeInstance = h_msgreg.get();
}

void Macad::Occt::ShapeFix_Face::SetPrecision(double preci)
{
	((::ShapeFix_Face*)_NativeInstance)->SetPrecision(preci);
}

void Macad::Occt::ShapeFix_Face::SetMinTolerance(double mintol)
{
	((::ShapeFix_Face*)_NativeInstance)->SetMinTolerance(mintol);
}

void Macad::Occt::ShapeFix_Face::SetMaxTolerance(double maxtol)
{
	((::ShapeFix_Face*)_NativeInstance)->SetMaxTolerance(maxtol);
}

int Macad::Occt::ShapeFix_Face::FixWireMode()
{
	return ((::ShapeFix_Face*)_NativeInstance)->FixWireMode();
}

int Macad::Occt::ShapeFix_Face::FixOrientationMode()
{
	return ((::ShapeFix_Face*)_NativeInstance)->FixOrientationMode();
}

int Macad::Occt::ShapeFix_Face::FixAddNaturalBoundMode()
{
	return ((::ShapeFix_Face*)_NativeInstance)->FixAddNaturalBoundMode();
}

int Macad::Occt::ShapeFix_Face::FixMissingSeamMode()
{
	return ((::ShapeFix_Face*)_NativeInstance)->FixMissingSeamMode();
}

int Macad::Occt::ShapeFix_Face::FixSmallAreaWireMode()
{
	return ((::ShapeFix_Face*)_NativeInstance)->FixSmallAreaWireMode();
}

int Macad::Occt::ShapeFix_Face::RemoveSmallAreaFaceMode()
{
	return ((::ShapeFix_Face*)_NativeInstance)->RemoveSmallAreaFaceMode();
}

int Macad::Occt::ShapeFix_Face::FixIntersectingWiresMode()
{
	return ((::ShapeFix_Face*)_NativeInstance)->FixIntersectingWiresMode();
}

int Macad::Occt::ShapeFix_Face::FixLoopWiresMode()
{
	return ((::ShapeFix_Face*)_NativeInstance)->FixLoopWiresMode();
}

int Macad::Occt::ShapeFix_Face::FixSplitFaceMode()
{
	return ((::ShapeFix_Face*)_NativeInstance)->FixSplitFaceMode();
}

int Macad::Occt::ShapeFix_Face::AutoCorrectPrecisionMode()
{
	return ((::ShapeFix_Face*)_NativeInstance)->AutoCorrectPrecisionMode();
}

int Macad::Occt::ShapeFix_Face::FixPeriodicDegeneratedMode()
{
	return ((::ShapeFix_Face*)_NativeInstance)->FixPeriodicDegeneratedMode();
}

Macad::Occt::TopoDS_Face^ Macad::Occt::ShapeFix_Face::Face()
{
	::TopoDS_Face* _result = new ::TopoDS_Face();
	*_result = ((::ShapeFix_Face*)_NativeInstance)->Face();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeFix_Face::Result()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeFix_Face*)_NativeInstance)->Result();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::ShapeFix_Face::Add(Macad::Occt::TopoDS_Wire^ wire)
{
	((::ShapeFix_Face*)_NativeInstance)->Add(*(::TopoDS_Wire*)wire->NativeInstance);
}

bool Macad::Occt::ShapeFix_Face::Perform()
{
	return ((::ShapeFix_Face*)_NativeInstance)->Perform();
}

bool Macad::Occt::ShapeFix_Face::FixOrientation()
{
	return ((::ShapeFix_Face*)_NativeInstance)->FixOrientation();
}

bool Macad::Occt::ShapeFix_Face::FixOrientation(Macad::Occt::TopTools_DataMapOfShapeListOfShape^ MapWires)
{
	return ((::ShapeFix_Face*)_NativeInstance)->FixOrientation(*(::TopTools_DataMapOfShapeListOfShape*)MapWires->NativeInstance);
}

bool Macad::Occt::ShapeFix_Face::FixAddNaturalBound()
{
	return ((::ShapeFix_Face*)_NativeInstance)->FixAddNaturalBound();
}

bool Macad::Occt::ShapeFix_Face::FixMissingSeam()
{
	return ((::ShapeFix_Face*)_NativeInstance)->FixMissingSeam();
}

bool Macad::Occt::ShapeFix_Face::FixSmallAreaWire(bool theIsRemoveSmallFace)
{
	return ((::ShapeFix_Face*)_NativeInstance)->FixSmallAreaWire(theIsRemoveSmallFace);
}

bool Macad::Occt::ShapeFix_Face::FixLoopWire(Macad::Occt::TopTools_SequenceOfShape^ aResWires)
{
	return ((::ShapeFix_Face*)_NativeInstance)->FixLoopWire(*(::TopTools_SequenceOfShape*)aResWires->NativeInstance);
}

bool Macad::Occt::ShapeFix_Face::FixIntersectingWires()
{
	return ((::ShapeFix_Face*)_NativeInstance)->FixIntersectingWires();
}

bool Macad::Occt::ShapeFix_Face::FixWiresTwoCoincEdges()
{
	return ((::ShapeFix_Face*)_NativeInstance)->FixWiresTwoCoincEdges();
}

bool Macad::Occt::ShapeFix_Face::FixSplitFace(Macad::Occt::TopTools_DataMapOfShapeListOfShape^ MapWires)
{
	return ((::ShapeFix_Face*)_NativeInstance)->FixSplitFace(*(::TopTools_DataMapOfShapeListOfShape*)MapWires->NativeInstance);
}

bool Macad::Occt::ShapeFix_Face::FixPeriodicDegenerated()
{
	return ((::ShapeFix_Face*)_NativeInstance)->FixPeriodicDegenerated();
}

bool Macad::Occt::ShapeFix_Face::Status(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeFix_Face*)_NativeInstance)->Status((::ShapeExtend_Status)status);
}

Macad::Occt::ShapeFix_Wire^ Macad::Occt::ShapeFix_Face::FixWireTool()
{
	Handle(::ShapeFix_Wire) _result;
	_result = ((::ShapeFix_Face*)_NativeInstance)->FixWireTool();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeFix_Wire::CreateDowncasted( _result.get());
}


Macad::Occt::ShapeFix_Face^ Macad::Occt::ShapeFix_Face::CreateDowncasted(::ShapeFix_Face* instance)
{
	return gcnew Macad::Occt::ShapeFix_Face( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeFix_FixSmallFace
//---------------------------------------------------------------------

Macad::Occt::ShapeFix_FixSmallFace::ShapeFix_FixSmallFace()
	: Macad::Occt::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_FixSmallFace();
}

Macad::Occt::ShapeFix_FixSmallFace::ShapeFix_FixSmallFace(Macad::Occt::ShapeFix_FixSmallFace^ parameter1)
	: Macad::Occt::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_FixSmallFace(*(::ShapeFix_FixSmallFace*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeFix_FixSmallFace::Init(Macad::Occt::TopoDS_Shape^ S)
{
	((::ShapeFix_FixSmallFace*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance);
}

void Macad::Occt::ShapeFix_FixSmallFace::Perform()
{
	((::ShapeFix_FixSmallFace*)_NativeInstance)->Perform();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeFix_FixSmallFace::FixSpotFace()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeFix_FixSmallFace*)_NativeInstance)->FixSpotFace();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::ShapeFix_FixSmallFace::ReplaceVerticesInCaseOfSpot(Macad::Occt::TopoDS_Face^ F, double tol)
{
	return ((::ShapeFix_FixSmallFace*)_NativeInstance)->ReplaceVerticesInCaseOfSpot(*(::TopoDS_Face*)F->NativeInstance, tol);
}

bool Macad::Occt::ShapeFix_FixSmallFace::RemoveFacesInCaseOfSpot(Macad::Occt::TopoDS_Face^ F)
{
	return ((::ShapeFix_FixSmallFace*)_NativeInstance)->RemoveFacesInCaseOfSpot(*(::TopoDS_Face*)F->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeFix_FixSmallFace::FixStripFace(bool wasdone)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeFix_FixSmallFace*)_NativeInstance)->FixStripFace(wasdone);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeFix_FixSmallFace::FixStripFace()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeFix_FixSmallFace*)_NativeInstance)->FixStripFace(false);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::ShapeFix_FixSmallFace::ReplaceInCaseOfStrip(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, double tol)
{
	return ((::ShapeFix_FixSmallFace*)_NativeInstance)->ReplaceInCaseOfStrip(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, tol);
}

bool Macad::Occt::ShapeFix_FixSmallFace::RemoveFacesInCaseOfStrip(Macad::Occt::TopoDS_Face^ F)
{
	return ((::ShapeFix_FixSmallFace*)_NativeInstance)->RemoveFacesInCaseOfStrip(*(::TopoDS_Face*)F->NativeInstance);
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::ShapeFix_FixSmallFace::ComputeSharedEdgeForStripFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, Macad::Occt::TopoDS_Face^ F1, double tol)
{
	::TopoDS_Edge* _result = new ::TopoDS_Edge();
	*_result = ((::ShapeFix_FixSmallFace*)_NativeInstance)->ComputeSharedEdgeForStripFace(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, *(::TopoDS_Face*)F1->NativeInstance, tol);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeFix_FixSmallFace::FixSplitFace(Macad::Occt::TopoDS_Shape^ S)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeFix_FixSmallFace*)_NativeInstance)->FixSplitFace(*(::TopoDS_Shape*)S->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::ShapeFix_FixSmallFace::SplitOneFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Compound^ theSplittedFaces)
{
	return ((::ShapeFix_FixSmallFace*)_NativeInstance)->SplitOneFace(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Compound*)theSplittedFaces->NativeInstance);
}

Macad::Occt::TopoDS_Face^ Macad::Occt::ShapeFix_FixSmallFace::FixFace(Macad::Occt::TopoDS_Face^ F)
{
	::TopoDS_Face* _result = new ::TopoDS_Face();
	*_result = ((::ShapeFix_FixSmallFace*)_NativeInstance)->FixFace(*(::TopoDS_Face*)F->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeFix_FixSmallFace::FixShape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeFix_FixSmallFace*)_NativeInstance)->FixShape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeFix_FixSmallFace::Shape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeFix_FixSmallFace*)_NativeInstance)->Shape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::ShapeFix_FixSmallFace::FixPinFace(Macad::Occt::TopoDS_Face^ F)
{
	return ((::ShapeFix_FixSmallFace*)_NativeInstance)->FixPinFace(*(::TopoDS_Face*)F->NativeInstance);
}


Macad::Occt::ShapeFix_FixSmallFace^ Macad::Occt::ShapeFix_FixSmallFace::CreateDowncasted(::ShapeFix_FixSmallFace* instance)
{
	return gcnew Macad::Occt::ShapeFix_FixSmallFace( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeFix_FixSmallSolid
//---------------------------------------------------------------------

Macad::Occt::ShapeFix_FixSmallSolid::ShapeFix_FixSmallSolid()
	: Macad::Occt::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_FixSmallSolid();
}

Macad::Occt::ShapeFix_FixSmallSolid::ShapeFix_FixSmallSolid(Macad::Occt::ShapeFix_FixSmallSolid^ parameter1)
	: Macad::Occt::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_FixSmallSolid(*(::ShapeFix_FixSmallSolid*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeFix_FixSmallSolid::SetFixMode(int theMode)
{
	((::ShapeFix_FixSmallSolid*)_NativeInstance)->SetFixMode(theMode);
}

void Macad::Occt::ShapeFix_FixSmallSolid::SetVolumeThreshold(double theThreshold)
{
	((::ShapeFix_FixSmallSolid*)_NativeInstance)->SetVolumeThreshold(theThreshold);
}

void Macad::Occt::ShapeFix_FixSmallSolid::SetVolumeThreshold()
{
	((::ShapeFix_FixSmallSolid*)_NativeInstance)->SetVolumeThreshold(-1.);
}

void Macad::Occt::ShapeFix_FixSmallSolid::SetWidthFactorThreshold(double theThreshold)
{
	((::ShapeFix_FixSmallSolid*)_NativeInstance)->SetWidthFactorThreshold(theThreshold);
}

void Macad::Occt::ShapeFix_FixSmallSolid::SetWidthFactorThreshold()
{
	((::ShapeFix_FixSmallSolid*)_NativeInstance)->SetWidthFactorThreshold(-1.);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeFix_FixSmallSolid::Remove(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::ShapeBuild_ReShape^ theContext)
{
	Handle(::ShapeBuild_ReShape) h_theContext = theContext->NativeInstance;
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeFix_FixSmallSolid*)_NativeInstance)->Remove(*(::TopoDS_Shape*)theShape->NativeInstance, h_theContext);
	theContext->NativeInstance = h_theContext.get();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeFix_FixSmallSolid::Merge(Macad::Occt::TopoDS_Shape^ theShape, Macad::Occt::ShapeBuild_ReShape^ theContext)
{
	Handle(::ShapeBuild_ReShape) h_theContext = theContext->NativeInstance;
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeFix_FixSmallSolid*)_NativeInstance)->Merge(*(::TopoDS_Shape*)theShape->NativeInstance, h_theContext);
	theContext->NativeInstance = h_theContext.get();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}


Macad::Occt::ShapeFix_FixSmallSolid^ Macad::Occt::ShapeFix_FixSmallSolid::CreateDowncasted(::ShapeFix_FixSmallSolid* instance)
{
	return gcnew Macad::Occt::ShapeFix_FixSmallSolid( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeFix_WireVertex
//---------------------------------------------------------------------

Macad::Occt::ShapeFix_WireVertex::ShapeFix_WireVertex()
	: BaseClass<::ShapeFix_WireVertex>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_WireVertex();
}

Macad::Occt::ShapeFix_WireVertex::ShapeFix_WireVertex(Macad::Occt::ShapeFix_WireVertex^ parameter1)
	: BaseClass<::ShapeFix_WireVertex>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_WireVertex(*(::ShapeFix_WireVertex*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeFix_WireVertex::Init(Macad::Occt::TopoDS_Wire^ wire, double preci)
{
	((::ShapeFix_WireVertex*)_NativeInstance)->Init(*(::TopoDS_Wire*)wire->NativeInstance, preci);
}

void Macad::Occt::ShapeFix_WireVertex::Init(Macad::Occt::ShapeExtend_WireData^ sbwd, double preci)
{
	Handle(::ShapeExtend_WireData) h_sbwd = sbwd->NativeInstance;
	((::ShapeFix_WireVertex*)_NativeInstance)->Init(h_sbwd, preci);
	sbwd->NativeInstance = h_sbwd.get();
}

void Macad::Occt::ShapeFix_WireVertex::Init(Macad::Occt::ShapeAnalysis_WireVertex^ sawv)
{
	((::ShapeFix_WireVertex*)_NativeInstance)->Init(*(::ShapeAnalysis_WireVertex*)sawv->NativeInstance);
}

Macad::Occt::ShapeAnalysis_WireVertex^ Macad::Occt::ShapeFix_WireVertex::Analyzer()
{
	::ShapeAnalysis_WireVertex* _result = new ::ShapeAnalysis_WireVertex();
	*_result =  (::ShapeAnalysis_WireVertex)((::ShapeFix_WireVertex*)_NativeInstance)->Analyzer();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::ShapeAnalysis_WireVertex(_result);
}

Macad::Occt::ShapeExtend_WireData^ Macad::Occt::ShapeFix_WireVertex::WireData()
{
	Handle(::ShapeExtend_WireData) _result;
	_result = ((::ShapeFix_WireVertex*)_NativeInstance)->WireData();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeExtend_WireData::CreateDowncasted( _result.get());
}

Macad::Occt::TopoDS_Wire^ Macad::Occt::ShapeFix_WireVertex::Wire()
{
	::TopoDS_Wire* _result = new ::TopoDS_Wire();
	*_result = ((::ShapeFix_WireVertex*)_NativeInstance)->Wire();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Wire(_result);
}

int Macad::Occt::ShapeFix_WireVertex::FixSame()
{
	return ((::ShapeFix_WireVertex*)_NativeInstance)->FixSame();
}

int Macad::Occt::ShapeFix_WireVertex::Fix()
{
	return ((::ShapeFix_WireVertex*)_NativeInstance)->Fix();
}




//---------------------------------------------------------------------
//  Class  ShapeFix_Wireframe
//---------------------------------------------------------------------

Macad::Occt::ShapeFix_Wireframe::ShapeFix_Wireframe()
	: Macad::Occt::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Wireframe();
}

Macad::Occt::ShapeFix_Wireframe::ShapeFix_Wireframe(Macad::Occt::TopoDS_Shape^ shape)
	: Macad::Occt::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Wireframe(*(::TopoDS_Shape*)shape->NativeInstance);
}

Macad::Occt::ShapeFix_Wireframe::ShapeFix_Wireframe(Macad::Occt::ShapeFix_Wireframe^ parameter1)
	: Macad::Occt::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Wireframe(*(::ShapeFix_Wireframe*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeFix_Wireframe::ClearStatuses()
{
	((::ShapeFix_Wireframe*)_NativeInstance)->ClearStatuses();
}

void Macad::Occt::ShapeFix_Wireframe::Load(Macad::Occt::TopoDS_Shape^ shape)
{
	((::ShapeFix_Wireframe*)_NativeInstance)->Load(*(::TopoDS_Shape*)shape->NativeInstance);
}

bool Macad::Occt::ShapeFix_Wireframe::FixWireGaps()
{
	return ((::ShapeFix_Wireframe*)_NativeInstance)->FixWireGaps();
}

bool Macad::Occt::ShapeFix_Wireframe::FixSmallEdges()
{
	return ((::ShapeFix_Wireframe*)_NativeInstance)->FixSmallEdges();
}

bool Macad::Occt::ShapeFix_Wireframe::CheckSmallEdges(Macad::Occt::TopTools_MapOfShape^ theSmallEdges, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theEdgeToFaces, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theFaceWithSmall, Macad::Occt::TopTools_MapOfShape^ theMultyEdges)
{
	return ((::ShapeFix_Wireframe*)_NativeInstance)->CheckSmallEdges(*(::TopTools_MapOfShape*)theSmallEdges->NativeInstance, *(::TopTools_DataMapOfShapeListOfShape*)theEdgeToFaces->NativeInstance, *(::TopTools_DataMapOfShapeListOfShape*)theFaceWithSmall->NativeInstance, *(::TopTools_MapOfShape*)theMultyEdges->NativeInstance);
}

bool Macad::Occt::ShapeFix_Wireframe::MergeSmallEdges(Macad::Occt::TopTools_MapOfShape^ theSmallEdges, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theEdgeToFaces, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theFaceWithSmall, Macad::Occt::TopTools_MapOfShape^ theMultyEdges, bool theModeDrop, double theLimitAngle)
{
	return ((::ShapeFix_Wireframe*)_NativeInstance)->MergeSmallEdges(*(::TopTools_MapOfShape*)theSmallEdges->NativeInstance, *(::TopTools_DataMapOfShapeListOfShape*)theEdgeToFaces->NativeInstance, *(::TopTools_DataMapOfShapeListOfShape*)theFaceWithSmall->NativeInstance, *(::TopTools_MapOfShape*)theMultyEdges->NativeInstance, theModeDrop, theLimitAngle);
}

bool Macad::Occt::ShapeFix_Wireframe::MergeSmallEdges(Macad::Occt::TopTools_MapOfShape^ theSmallEdges, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theEdgeToFaces, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theFaceWithSmall, Macad::Occt::TopTools_MapOfShape^ theMultyEdges, bool theModeDrop)
{
	return ((::ShapeFix_Wireframe*)_NativeInstance)->MergeSmallEdges(*(::TopTools_MapOfShape*)theSmallEdges->NativeInstance, *(::TopTools_DataMapOfShapeListOfShape*)theEdgeToFaces->NativeInstance, *(::TopTools_DataMapOfShapeListOfShape*)theFaceWithSmall->NativeInstance, *(::TopTools_MapOfShape*)theMultyEdges->NativeInstance, theModeDrop, -1);
}

bool Macad::Occt::ShapeFix_Wireframe::MergeSmallEdges(Macad::Occt::TopTools_MapOfShape^ theSmallEdges, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theEdgeToFaces, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theFaceWithSmall, Macad::Occt::TopTools_MapOfShape^ theMultyEdges)
{
	return ((::ShapeFix_Wireframe*)_NativeInstance)->MergeSmallEdges(*(::TopTools_MapOfShape*)theSmallEdges->NativeInstance, *(::TopTools_DataMapOfShapeListOfShape*)theEdgeToFaces->NativeInstance, *(::TopTools_DataMapOfShapeListOfShape*)theFaceWithSmall->NativeInstance, *(::TopTools_MapOfShape*)theMultyEdges->NativeInstance, false, -1);
}

bool Macad::Occt::ShapeFix_Wireframe::StatusWireGaps(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeFix_Wireframe*)_NativeInstance)->StatusWireGaps((::ShapeExtend_Status)status);
}

bool Macad::Occt::ShapeFix_Wireframe::StatusSmallEdges(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeFix_Wireframe*)_NativeInstance)->StatusSmallEdges((::ShapeExtend_Status)status);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeFix_Wireframe::Shape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeFix_Wireframe*)_NativeInstance)->Shape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::ShapeFix_Wireframe::ModeDropSmallEdges()
{
	return ((::ShapeFix_Wireframe*)_NativeInstance)->ModeDropSmallEdges();
}

void Macad::Occt::ShapeFix_Wireframe::SetLimitAngle(double theLimitAngle)
{
	((::ShapeFix_Wireframe*)_NativeInstance)->SetLimitAngle(theLimitAngle);
}

double Macad::Occt::ShapeFix_Wireframe::LimitAngle()
{
	return ((::ShapeFix_Wireframe*)_NativeInstance)->LimitAngle();
}


Macad::Occt::ShapeFix_Wireframe^ Macad::Occt::ShapeFix_Wireframe::CreateDowncasted(::ShapeFix_Wireframe* instance)
{
	return gcnew Macad::Occt::ShapeFix_Wireframe( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeFix_FreeBounds
//---------------------------------------------------------------------

Macad::Occt::ShapeFix_FreeBounds::ShapeFix_FreeBounds()
	: BaseClass<::ShapeFix_FreeBounds>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_FreeBounds();
}

Macad::Occt::ShapeFix_FreeBounds::ShapeFix_FreeBounds(Macad::Occt::TopoDS_Shape^ shape, double sewtoler, double closetoler, bool splitclosed, bool splitopen)
	: BaseClass<::ShapeFix_FreeBounds>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_FreeBounds(*(::TopoDS_Shape*)shape->NativeInstance, sewtoler, closetoler, splitclosed, splitopen);
}

Macad::Occt::ShapeFix_FreeBounds::ShapeFix_FreeBounds(Macad::Occt::TopoDS_Shape^ shape, double closetoler, bool splitclosed, bool splitopen)
	: BaseClass<::ShapeFix_FreeBounds>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_FreeBounds(*(::TopoDS_Shape*)shape->NativeInstance, closetoler, splitclosed, splitopen);
}

Macad::Occt::ShapeFix_FreeBounds::ShapeFix_FreeBounds(Macad::Occt::ShapeFix_FreeBounds^ parameter1)
	: BaseClass<::ShapeFix_FreeBounds>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_FreeBounds(*(::ShapeFix_FreeBounds*)parameter1->NativeInstance);
}

Macad::Occt::TopoDS_Compound^ Macad::Occt::ShapeFix_FreeBounds::GetClosedWires()
{
	::TopoDS_Compound* _result = new ::TopoDS_Compound();
	*_result =  (::TopoDS_Compound)((::ShapeFix_FreeBounds*)_NativeInstance)->GetClosedWires();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Compound(_result);
}

Macad::Occt::TopoDS_Compound^ Macad::Occt::ShapeFix_FreeBounds::GetOpenWires()
{
	::TopoDS_Compound* _result = new ::TopoDS_Compound();
	*_result =  (::TopoDS_Compound)((::ShapeFix_FreeBounds*)_NativeInstance)->GetOpenWires();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Compound(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeFix_FreeBounds::GetShape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::ShapeFix_FreeBounds*)_NativeInstance)->GetShape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}




//---------------------------------------------------------------------
//  Class  ShapeFix_FaceConnect
//---------------------------------------------------------------------

Macad::Occt::ShapeFix_FaceConnect::ShapeFix_FaceConnect()
	: BaseClass<::ShapeFix_FaceConnect>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_FaceConnect();
}

Macad::Occt::ShapeFix_FaceConnect::ShapeFix_FaceConnect(Macad::Occt::ShapeFix_FaceConnect^ parameter1)
	: BaseClass<::ShapeFix_FaceConnect>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_FaceConnect(*(::ShapeFix_FaceConnect*)parameter1->NativeInstance);
}

bool Macad::Occt::ShapeFix_FaceConnect::Add(Macad::Occt::TopoDS_Face^ aFirst, Macad::Occt::TopoDS_Face^ aSecond)
{
	return ((::ShapeFix_FaceConnect*)_NativeInstance)->Add(*(::TopoDS_Face*)aFirst->NativeInstance, *(::TopoDS_Face*)aSecond->NativeInstance);
}

Macad::Occt::TopoDS_Shell^ Macad::Occt::ShapeFix_FaceConnect::Build(Macad::Occt::TopoDS_Shell^ shell, double sewtoler, double fixtoler)
{
	::TopoDS_Shell* _result = new ::TopoDS_Shell();
	*_result = ((::ShapeFix_FaceConnect*)_NativeInstance)->Build(*(::TopoDS_Shell*)shell->NativeInstance, sewtoler, fixtoler);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shell(_result);
}

void Macad::Occt::ShapeFix_FaceConnect::Clear()
{
	((::ShapeFix_FaceConnect*)_NativeInstance)->Clear();
}




//---------------------------------------------------------------------
//  Class  ShapeFix_Shell
//---------------------------------------------------------------------

Macad::Occt::ShapeFix_Shell::ShapeFix_Shell()
	: Macad::Occt::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Shell();
}

Macad::Occt::ShapeFix_Shell::ShapeFix_Shell(Macad::Occt::TopoDS_Shell^ shape)
	: Macad::Occt::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Shell(*(::TopoDS_Shell*)shape->NativeInstance);
}

Macad::Occt::ShapeFix_Shell::ShapeFix_Shell(Macad::Occt::ShapeFix_Shell^ parameter1)
	: Macad::Occt::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Shell(*(::ShapeFix_Shell*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeFix_Shell::Init(Macad::Occt::TopoDS_Shell^ shell)
{
	((::ShapeFix_Shell*)_NativeInstance)->Init(*(::TopoDS_Shell*)shell->NativeInstance);
}

bool Macad::Occt::ShapeFix_Shell::Perform(Macad::Occt::Message_ProgressRange^ theProgress)
{
	return ((::ShapeFix_Shell*)_NativeInstance)->Perform(*(::Message_ProgressRange*)theProgress->NativeInstance);
}

bool Macad::Occt::ShapeFix_Shell::Perform()
{
	return ((::ShapeFix_Shell*)_NativeInstance)->Perform(::Message_ProgressRange());
}

bool Macad::Occt::ShapeFix_Shell::FixFaceOrientation(Macad::Occt::TopoDS_Shell^ shell, bool isAccountMultiConex, bool NonManifold)
{
	return ((::ShapeFix_Shell*)_NativeInstance)->FixFaceOrientation(*(::TopoDS_Shell*)shell->NativeInstance, isAccountMultiConex, NonManifold);
}

bool Macad::Occt::ShapeFix_Shell::FixFaceOrientation(Macad::Occt::TopoDS_Shell^ shell, bool isAccountMultiConex)
{
	return ((::ShapeFix_Shell*)_NativeInstance)->FixFaceOrientation(*(::TopoDS_Shell*)shell->NativeInstance, isAccountMultiConex, false);
}

bool Macad::Occt::ShapeFix_Shell::FixFaceOrientation(Macad::Occt::TopoDS_Shell^ shell)
{
	return ((::ShapeFix_Shell*)_NativeInstance)->FixFaceOrientation(*(::TopoDS_Shell*)shell->NativeInstance, true, false);
}

Macad::Occt::TopoDS_Shell^ Macad::Occt::ShapeFix_Shell::Shell()
{
	::TopoDS_Shell* _result = new ::TopoDS_Shell();
	*_result = ((::ShapeFix_Shell*)_NativeInstance)->Shell();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shell(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeFix_Shell::Shape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeFix_Shell*)_NativeInstance)->Shape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

int Macad::Occt::ShapeFix_Shell::NbShells()
{
	return ((::ShapeFix_Shell*)_NativeInstance)->NbShells();
}

Macad::Occt::TopoDS_Compound^ Macad::Occt::ShapeFix_Shell::ErrorFaces()
{
	::TopoDS_Compound* _result = new ::TopoDS_Compound();
	*_result = ((::ShapeFix_Shell*)_NativeInstance)->ErrorFaces();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Compound(_result);
}

bool Macad::Occt::ShapeFix_Shell::Status(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeFix_Shell*)_NativeInstance)->Status((::ShapeExtend_Status)status);
}

Macad::Occt::ShapeFix_Face^ Macad::Occt::ShapeFix_Shell::FixFaceTool()
{
	Handle(::ShapeFix_Face) _result;
	_result = ((::ShapeFix_Shell*)_NativeInstance)->FixFaceTool();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeFix_Face::CreateDowncasted( _result.get());
}

void Macad::Occt::ShapeFix_Shell::SetMsgRegistrator(Macad::Occt::ShapeExtend_BasicMsgRegistrator^ msgreg)
{
	Handle(::ShapeExtend_BasicMsgRegistrator) h_msgreg = msgreg->NativeInstance;
	((::ShapeFix_Shell*)_NativeInstance)->SetMsgRegistrator(h_msgreg);
	msgreg->NativeInstance = h_msgreg.get();
}

void Macad::Occt::ShapeFix_Shell::SetPrecision(double preci)
{
	((::ShapeFix_Shell*)_NativeInstance)->SetPrecision(preci);
}

void Macad::Occt::ShapeFix_Shell::SetMinTolerance(double mintol)
{
	((::ShapeFix_Shell*)_NativeInstance)->SetMinTolerance(mintol);
}

void Macad::Occt::ShapeFix_Shell::SetMaxTolerance(double maxtol)
{
	((::ShapeFix_Shell*)_NativeInstance)->SetMaxTolerance(maxtol);
}

int Macad::Occt::ShapeFix_Shell::FixFaceMode()
{
	return ((::ShapeFix_Shell*)_NativeInstance)->FixFaceMode();
}

int Macad::Occt::ShapeFix_Shell::FixOrientationMode()
{
	return ((::ShapeFix_Shell*)_NativeInstance)->FixOrientationMode();
}

void Macad::Occt::ShapeFix_Shell::SetNonManifoldFlag(bool isNonManifold)
{
	((::ShapeFix_Shell*)_NativeInstance)->SetNonManifoldFlag(isNonManifold);
}


Macad::Occt::ShapeFix_Shell^ Macad::Occt::ShapeFix_Shell::CreateDowncasted(::ShapeFix_Shell* instance)
{
	return gcnew Macad::Occt::ShapeFix_Shell( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeFix_Solid
//---------------------------------------------------------------------

Macad::Occt::ShapeFix_Solid::ShapeFix_Solid()
	: Macad::Occt::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Solid();
}

Macad::Occt::ShapeFix_Solid::ShapeFix_Solid(Macad::Occt::TopoDS_Solid^ solid)
	: Macad::Occt::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Solid(*(::TopoDS_Solid*)solid->NativeInstance);
}

Macad::Occt::ShapeFix_Solid::ShapeFix_Solid(Macad::Occt::ShapeFix_Solid^ parameter1)
	: Macad::Occt::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Solid(*(::ShapeFix_Solid*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeFix_Solid::Init(Macad::Occt::TopoDS_Solid^ solid)
{
	((::ShapeFix_Solid*)_NativeInstance)->Init(*(::TopoDS_Solid*)solid->NativeInstance);
}

bool Macad::Occt::ShapeFix_Solid::Perform(Macad::Occt::Message_ProgressRange^ theProgress)
{
	return ((::ShapeFix_Solid*)_NativeInstance)->Perform(*(::Message_ProgressRange*)theProgress->NativeInstance);
}

bool Macad::Occt::ShapeFix_Solid::Perform()
{
	return ((::ShapeFix_Solid*)_NativeInstance)->Perform(::Message_ProgressRange());
}

Macad::Occt::TopoDS_Solid^ Macad::Occt::ShapeFix_Solid::SolidFromShell(Macad::Occt::TopoDS_Shell^ shell)
{
	::TopoDS_Solid* _result = new ::TopoDS_Solid();
	*_result = ((::ShapeFix_Solid*)_NativeInstance)->SolidFromShell(*(::TopoDS_Shell*)shell->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Solid(_result);
}

bool Macad::Occt::ShapeFix_Solid::Status(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeFix_Solid*)_NativeInstance)->Status((::ShapeExtend_Status)status);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeFix_Solid::Solid()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeFix_Solid*)_NativeInstance)->Solid();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::ShapeFix_Shell^ Macad::Occt::ShapeFix_Solid::FixShellTool()
{
	Handle(::ShapeFix_Shell) _result;
	_result = ((::ShapeFix_Solid*)_NativeInstance)->FixShellTool();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeFix_Shell::CreateDowncasted( _result.get());
}

void Macad::Occt::ShapeFix_Solid::SetMsgRegistrator(Macad::Occt::ShapeExtend_BasicMsgRegistrator^ msgreg)
{
	Handle(::ShapeExtend_BasicMsgRegistrator) h_msgreg = msgreg->NativeInstance;
	((::ShapeFix_Solid*)_NativeInstance)->SetMsgRegistrator(h_msgreg);
	msgreg->NativeInstance = h_msgreg.get();
}

void Macad::Occt::ShapeFix_Solid::SetPrecision(double preci)
{
	((::ShapeFix_Solid*)_NativeInstance)->SetPrecision(preci);
}

void Macad::Occt::ShapeFix_Solid::SetMinTolerance(double mintol)
{
	((::ShapeFix_Solid*)_NativeInstance)->SetMinTolerance(mintol);
}

void Macad::Occt::ShapeFix_Solid::SetMaxTolerance(double maxtol)
{
	((::ShapeFix_Solid*)_NativeInstance)->SetMaxTolerance(maxtol);
}

int Macad::Occt::ShapeFix_Solid::FixShellMode()
{
	return ((::ShapeFix_Solid*)_NativeInstance)->FixShellMode();
}

int Macad::Occt::ShapeFix_Solid::FixShellOrientationMode()
{
	return ((::ShapeFix_Solid*)_NativeInstance)->FixShellOrientationMode();
}

bool Macad::Occt::ShapeFix_Solid::CreateOpenSolidMode()
{
	return ((::ShapeFix_Solid*)_NativeInstance)->CreateOpenSolidMode();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeFix_Solid::Shape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeFix_Solid*)_NativeInstance)->Shape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}


Macad::Occt::ShapeFix_Solid^ Macad::Occt::ShapeFix_Solid::CreateDowncasted(::ShapeFix_Solid* instance)
{
	return gcnew Macad::Occt::ShapeFix_Solid( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeFix_ShapeTolerance
//---------------------------------------------------------------------

Macad::Occt::ShapeFix_ShapeTolerance::ShapeFix_ShapeTolerance()
	: BaseClass<::ShapeFix_ShapeTolerance>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_ShapeTolerance();
}

Macad::Occt::ShapeFix_ShapeTolerance::ShapeFix_ShapeTolerance(Macad::Occt::ShapeFix_ShapeTolerance^ parameter1)
	: BaseClass<::ShapeFix_ShapeTolerance>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_ShapeTolerance(*(::ShapeFix_ShapeTolerance*)parameter1->NativeInstance);
}

bool Macad::Occt::ShapeFix_ShapeTolerance::LimitTolerance(Macad::Occt::TopoDS_Shape^ shape, double tmin, double tmax, Macad::Occt::TopAbs_ShapeEnum styp)
{
	return ((::ShapeFix_ShapeTolerance*)_NativeInstance)->LimitTolerance(*(::TopoDS_Shape*)shape->NativeInstance, tmin, tmax, (::TopAbs_ShapeEnum)styp);
}

bool Macad::Occt::ShapeFix_ShapeTolerance::LimitTolerance(Macad::Occt::TopoDS_Shape^ shape, double tmin, double tmax)
{
	return ((::ShapeFix_ShapeTolerance*)_NativeInstance)->LimitTolerance(*(::TopoDS_Shape*)shape->NativeInstance, tmin, tmax, TopAbs_SHAPE);
}

bool Macad::Occt::ShapeFix_ShapeTolerance::LimitTolerance(Macad::Occt::TopoDS_Shape^ shape, double tmin)
{
	return ((::ShapeFix_ShapeTolerance*)_NativeInstance)->LimitTolerance(*(::TopoDS_Shape*)shape->NativeInstance, tmin, 0., TopAbs_SHAPE);
}

void Macad::Occt::ShapeFix_ShapeTolerance::SetTolerance(Macad::Occt::TopoDS_Shape^ shape, double preci, Macad::Occt::TopAbs_ShapeEnum styp)
{
	((::ShapeFix_ShapeTolerance*)_NativeInstance)->SetTolerance(*(::TopoDS_Shape*)shape->NativeInstance, preci, (::TopAbs_ShapeEnum)styp);
}

void Macad::Occt::ShapeFix_ShapeTolerance::SetTolerance(Macad::Occt::TopoDS_Shape^ shape, double preci)
{
	((::ShapeFix_ShapeTolerance*)_NativeInstance)->SetTolerance(*(::TopoDS_Shape*)shape->NativeInstance, preci, TopAbs_SHAPE);
}




//---------------------------------------------------------------------
//  Class  ShapeFix_Shape
//---------------------------------------------------------------------

Macad::Occt::ShapeFix_Shape::ShapeFix_Shape()
	: Macad::Occt::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Shape();
}

Macad::Occt::ShapeFix_Shape::ShapeFix_Shape(Macad::Occt::TopoDS_Shape^ shape)
	: Macad::Occt::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Shape(*(::TopoDS_Shape*)shape->NativeInstance);
}

Macad::Occt::ShapeFix_Shape::ShapeFix_Shape(Macad::Occt::ShapeFix_Shape^ parameter1)
	: Macad::Occt::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_Shape(*(::ShapeFix_Shape*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeFix_Shape::Init(Macad::Occt::TopoDS_Shape^ shape)
{
	((::ShapeFix_Shape*)_NativeInstance)->Init(*(::TopoDS_Shape*)shape->NativeInstance);
}

bool Macad::Occt::ShapeFix_Shape::Perform(Macad::Occt::Message_ProgressRange^ theProgress)
{
	return ((::ShapeFix_Shape*)_NativeInstance)->Perform(*(::Message_ProgressRange*)theProgress->NativeInstance);
}

bool Macad::Occt::ShapeFix_Shape::Perform()
{
	return ((::ShapeFix_Shape*)_NativeInstance)->Perform(::Message_ProgressRange());
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeFix_Shape::Shape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeFix_Shape*)_NativeInstance)->Shape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::ShapeFix_Solid^ Macad::Occt::ShapeFix_Shape::FixSolidTool()
{
	Handle(::ShapeFix_Solid) _result;
	_result = ((::ShapeFix_Shape*)_NativeInstance)->FixSolidTool();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeFix_Solid::CreateDowncasted( _result.get());
}

Macad::Occt::ShapeFix_Shell^ Macad::Occt::ShapeFix_Shape::FixShellTool()
{
	Handle(::ShapeFix_Shell) _result;
	_result = ((::ShapeFix_Shape*)_NativeInstance)->FixShellTool();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeFix_Shell::CreateDowncasted( _result.get());
}

Macad::Occt::ShapeFix_Face^ Macad::Occt::ShapeFix_Shape::FixFaceTool()
{
	Handle(::ShapeFix_Face) _result;
	_result = ((::ShapeFix_Shape*)_NativeInstance)->FixFaceTool();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeFix_Face::CreateDowncasted( _result.get());
}

Macad::Occt::ShapeFix_Wire^ Macad::Occt::ShapeFix_Shape::FixWireTool()
{
	Handle(::ShapeFix_Wire) _result;
	_result = ((::ShapeFix_Shape*)_NativeInstance)->FixWireTool();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeFix_Wire::CreateDowncasted( _result.get());
}

Macad::Occt::ShapeFix_Edge^ Macad::Occt::ShapeFix_Shape::FixEdgeTool()
{
	Handle(::ShapeFix_Edge) _result;
	_result = ((::ShapeFix_Shape*)_NativeInstance)->FixEdgeTool();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeFix_Edge::CreateDowncasted( _result.get());
}

bool Macad::Occt::ShapeFix_Shape::Status(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeFix_Shape*)_NativeInstance)->Status((::ShapeExtend_Status)status);
}

void Macad::Occt::ShapeFix_Shape::SetMsgRegistrator(Macad::Occt::ShapeExtend_BasicMsgRegistrator^ msgreg)
{
	Handle(::ShapeExtend_BasicMsgRegistrator) h_msgreg = msgreg->NativeInstance;
	((::ShapeFix_Shape*)_NativeInstance)->SetMsgRegistrator(h_msgreg);
	msgreg->NativeInstance = h_msgreg.get();
}

void Macad::Occt::ShapeFix_Shape::SetPrecision(double preci)
{
	((::ShapeFix_Shape*)_NativeInstance)->SetPrecision(preci);
}

void Macad::Occt::ShapeFix_Shape::SetMinTolerance(double mintol)
{
	((::ShapeFix_Shape*)_NativeInstance)->SetMinTolerance(mintol);
}

void Macad::Occt::ShapeFix_Shape::SetMaxTolerance(double maxtol)
{
	((::ShapeFix_Shape*)_NativeInstance)->SetMaxTolerance(maxtol);
}

int Macad::Occt::ShapeFix_Shape::FixSolidMode()
{
	return ((::ShapeFix_Shape*)_NativeInstance)->FixSolidMode();
}

int Macad::Occt::ShapeFix_Shape::FixFreeShellMode()
{
	return ((::ShapeFix_Shape*)_NativeInstance)->FixFreeShellMode();
}

int Macad::Occt::ShapeFix_Shape::FixFreeFaceMode()
{
	return ((::ShapeFix_Shape*)_NativeInstance)->FixFreeFaceMode();
}

int Macad::Occt::ShapeFix_Shape::FixFreeWireMode()
{
	return ((::ShapeFix_Shape*)_NativeInstance)->FixFreeWireMode();
}

int Macad::Occt::ShapeFix_Shape::FixSameParameterMode()
{
	return ((::ShapeFix_Shape*)_NativeInstance)->FixSameParameterMode();
}

int Macad::Occt::ShapeFix_Shape::FixVertexPositionMode()
{
	return ((::ShapeFix_Shape*)_NativeInstance)->FixVertexPositionMode();
}

int Macad::Occt::ShapeFix_Shape::FixVertexTolMode()
{
	return ((::ShapeFix_Shape*)_NativeInstance)->FixVertexTolMode();
}


Macad::Occt::ShapeFix_Shape^ Macad::Occt::ShapeFix_Shape::CreateDowncasted(::ShapeFix_Shape* instance)
{
	return gcnew Macad::Occt::ShapeFix_Shape( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeFix_EdgeConnect
//---------------------------------------------------------------------

Macad::Occt::ShapeFix_EdgeConnect::ShapeFix_EdgeConnect()
	: BaseClass<::ShapeFix_EdgeConnect>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_EdgeConnect();
}

Macad::Occt::ShapeFix_EdgeConnect::ShapeFix_EdgeConnect(Macad::Occt::ShapeFix_EdgeConnect^ parameter1)
	: BaseClass<::ShapeFix_EdgeConnect>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_EdgeConnect(*(::ShapeFix_EdgeConnect*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeFix_EdgeConnect::Add(Macad::Occt::TopoDS_Edge^ aFirst, Macad::Occt::TopoDS_Edge^ aSecond)
{
	((::ShapeFix_EdgeConnect*)_NativeInstance)->Add(*(::TopoDS_Edge*)aFirst->NativeInstance, *(::TopoDS_Edge*)aSecond->NativeInstance);
}

void Macad::Occt::ShapeFix_EdgeConnect::Add(Macad::Occt::TopoDS_Shape^ aShape)
{
	((::ShapeFix_EdgeConnect*)_NativeInstance)->Add(*(::TopoDS_Shape*)aShape->NativeInstance);
}

void Macad::Occt::ShapeFix_EdgeConnect::Build()
{
	((::ShapeFix_EdgeConnect*)_NativeInstance)->Build();
}

void Macad::Occt::ShapeFix_EdgeConnect::Clear()
{
	((::ShapeFix_EdgeConnect*)_NativeInstance)->Clear();
}




//---------------------------------------------------------------------
//  Class  ShapeFix_ComposeShell
//---------------------------------------------------------------------

Macad::Occt::ShapeFix_ComposeShell::ShapeFix_ComposeShell()
	: Macad::Occt::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_ComposeShell();
}

Macad::Occt::ShapeFix_ComposeShell::ShapeFix_ComposeShell(Macad::Occt::ShapeFix_ComposeShell^ parameter1)
	: Macad::Occt::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_ComposeShell(*(::ShapeFix_ComposeShell*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeFix_ComposeShell::Init(Macad::Occt::ShapeExtend_CompositeSurface^ Grid, Macad::Occt::TopLoc_Location^ L, Macad::Occt::TopoDS_Face^ Face, double Prec)
{
	Handle(::ShapeExtend_CompositeSurface) h_Grid = Grid->NativeInstance;
	((::ShapeFix_ComposeShell*)_NativeInstance)->Init(h_Grid, *(::TopLoc_Location*)L->NativeInstance, *(::TopoDS_Face*)Face->NativeInstance, Prec);
	Grid->NativeInstance = h_Grid.get();
}

bool Macad::Occt::ShapeFix_ComposeShell::ClosedMode()
{
	return ((::ShapeFix_ComposeShell*)_NativeInstance)->ClosedMode();
}

bool Macad::Occt::ShapeFix_ComposeShell::Perform()
{
	return ((::ShapeFix_ComposeShell*)_NativeInstance)->Perform();
}

void Macad::Occt::ShapeFix_ComposeShell::SplitEdges()
{
	((::ShapeFix_ComposeShell*)_NativeInstance)->SplitEdges();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeFix_ComposeShell::Result()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::ShapeFix_ComposeShell*)_NativeInstance)->Result();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::ShapeFix_ComposeShell::Status(Macad::Occt::ShapeExtend_Status status)
{
	return ((::ShapeFix_ComposeShell*)_NativeInstance)->Status((::ShapeExtend_Status)status);
}

void Macad::Occt::ShapeFix_ComposeShell::DispatchWires(Macad::Occt::TopTools_SequenceOfShape^ faces, Macad::Occt::ShapeFix_SequenceOfWireSegment^ wires)
{
	((::ShapeFix_ComposeShell*)_NativeInstance)->DispatchWires(*(::TopTools_SequenceOfShape*)faces->NativeInstance, *(::ShapeFix_SequenceOfWireSegment*)wires->NativeInstance);
}

void Macad::Occt::ShapeFix_ComposeShell::SetTransferParamTool(Macad::Occt::ShapeAnalysis_TransferParameters^ TransferParam)
{
	Handle(::ShapeAnalysis_TransferParameters) h_TransferParam = TransferParam->NativeInstance;
	((::ShapeFix_ComposeShell*)_NativeInstance)->SetTransferParamTool(h_TransferParam);
	TransferParam->NativeInstance = h_TransferParam.get();
}

Macad::Occt::ShapeAnalysis_TransferParameters^ Macad::Occt::ShapeFix_ComposeShell::GetTransferParamTool()
{
	Handle(::ShapeAnalysis_TransferParameters) _result;
	_result = ((::ShapeFix_ComposeShell*)_NativeInstance)->GetTransferParamTool();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeAnalysis_TransferParameters::CreateDowncasted( _result.get());
}


Macad::Occt::ShapeFix_ComposeShell^ Macad::Occt::ShapeFix_ComposeShell::CreateDowncasted(::ShapeFix_ComposeShell* instance)
{
	return gcnew Macad::Occt::ShapeFix_ComposeShell( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeFix_SplitCommonVertex
//---------------------------------------------------------------------

Macad::Occt::ShapeFix_SplitCommonVertex::ShapeFix_SplitCommonVertex()
	: Macad::Occt::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_SplitCommonVertex();
}

Macad::Occt::ShapeFix_SplitCommonVertex::ShapeFix_SplitCommonVertex(Macad::Occt::ShapeFix_SplitCommonVertex^ parameter1)
	: Macad::Occt::ShapeFix_Root(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::ShapeFix_SplitCommonVertex(*(::ShapeFix_SplitCommonVertex*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeFix_SplitCommonVertex::Init(Macad::Occt::TopoDS_Shape^ S)
{
	((::ShapeFix_SplitCommonVertex*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance);
}

void Macad::Occt::ShapeFix_SplitCommonVertex::Perform()
{
	((::ShapeFix_SplitCommonVertex*)_NativeInstance)->Perform();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeFix_SplitCommonVertex::Shape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::ShapeFix_SplitCommonVertex*)_NativeInstance)->Shape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}


Macad::Occt::ShapeFix_SplitCommonVertex^ Macad::Occt::ShapeFix_SplitCommonVertex::CreateDowncasted(::ShapeFix_SplitCommonVertex* instance)
{
	return gcnew Macad::Occt::ShapeFix_SplitCommonVertex( instance );
}



//---------------------------------------------------------------------
//  Class  ShapeFix_WireSegment
//---------------------------------------------------------------------

Macad::Occt::ShapeFix_WireSegment::ShapeFix_WireSegment()
	: BaseClass<::ShapeFix_WireSegment>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_WireSegment();
}

Macad::Occt::ShapeFix_WireSegment::ShapeFix_WireSegment(Macad::Occt::ShapeExtend_WireData^ wire, Macad::Occt::TopAbs_Orientation ori)
	: BaseClass<::ShapeFix_WireSegment>(BaseClass::InitMode::Uninitialized)
{
	Handle(::ShapeExtend_WireData) h_wire = wire->NativeInstance;
	_NativeInstance = new ::ShapeFix_WireSegment(h_wire, (::TopAbs_Orientation)ori);
	wire->NativeInstance = h_wire.get();
}

Macad::Occt::ShapeFix_WireSegment::ShapeFix_WireSegment(Macad::Occt::ShapeExtend_WireData^ wire)
	: BaseClass<::ShapeFix_WireSegment>(BaseClass::InitMode::Uninitialized)
{
	Handle(::ShapeExtend_WireData) h_wire = wire->NativeInstance;
	_NativeInstance = new ::ShapeFix_WireSegment(h_wire, TopAbs_EXTERNAL);
	wire->NativeInstance = h_wire.get();
}

Macad::Occt::ShapeFix_WireSegment::ShapeFix_WireSegment(Macad::Occt::TopoDS_Wire^ wire, Macad::Occt::TopAbs_Orientation ori)
	: BaseClass<::ShapeFix_WireSegment>(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Unresolved external symbol");
}

Macad::Occt::ShapeFix_WireSegment::ShapeFix_WireSegment(Macad::Occt::TopoDS_Wire^ wire)
	: BaseClass<::ShapeFix_WireSegment>(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Unresolved external symbol");
}

Macad::Occt::ShapeFix_WireSegment::ShapeFix_WireSegment(Macad::Occt::ShapeFix_WireSegment^ parameter1)
	: BaseClass<::ShapeFix_WireSegment>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_WireSegment(*(::ShapeFix_WireSegment*)parameter1->NativeInstance);
}

void Macad::Occt::ShapeFix_WireSegment::Clear()
{
	((::ShapeFix_WireSegment*)_NativeInstance)->Clear();
}

void Macad::Occt::ShapeFix_WireSegment::Load(Macad::Occt::ShapeExtend_WireData^ wire)
{
	Handle(::ShapeExtend_WireData) h_wire = wire->NativeInstance;
	((::ShapeFix_WireSegment*)_NativeInstance)->Load(h_wire);
	wire->NativeInstance = h_wire.get();
}

Macad::Occt::ShapeExtend_WireData^ Macad::Occt::ShapeFix_WireSegment::WireData()
{
	Handle(::ShapeExtend_WireData) _result;
	_result = ((::ShapeFix_WireSegment*)_NativeInstance)->WireData();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeExtend_WireData::CreateDowncasted( _result.get());
}

void Macad::Occt::ShapeFix_WireSegment::Orientation(Macad::Occt::TopAbs_Orientation ori)
{
	((::ShapeFix_WireSegment*)_NativeInstance)->Orientation((::TopAbs_Orientation)ori);
}

Macad::Occt::TopAbs_Orientation Macad::Occt::ShapeFix_WireSegment::Orientation()
{
	return (Macad::Occt::TopAbs_Orientation)((::ShapeFix_WireSegment*)_NativeInstance)->Orientation();
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::ShapeFix_WireSegment::FirstVertex()
{
	::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
	*_result = ((::ShapeFix_WireSegment*)_NativeInstance)->FirstVertex();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::ShapeFix_WireSegment::LastVertex()
{
	::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
	*_result = ((::ShapeFix_WireSegment*)_NativeInstance)->LastVertex();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

bool Macad::Occt::ShapeFix_WireSegment::IsClosed()
{
	return ((::ShapeFix_WireSegment*)_NativeInstance)->IsClosed();
}

int Macad::Occt::ShapeFix_WireSegment::NbEdges()
{
	return ((::ShapeFix_WireSegment*)_NativeInstance)->NbEdges();
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::ShapeFix_WireSegment::Edge(int i)
{
	::TopoDS_Edge* _result = new ::TopoDS_Edge();
	*_result = ((::ShapeFix_WireSegment*)_NativeInstance)->Edge(i);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

void Macad::Occt::ShapeFix_WireSegment::SetEdge(int i, Macad::Occt::TopoDS_Edge^ edge)
{
	((::ShapeFix_WireSegment*)_NativeInstance)->SetEdge(i, *(::TopoDS_Edge*)edge->NativeInstance);
}

void Macad::Occt::ShapeFix_WireSegment::AddEdge(int i, Macad::Occt::TopoDS_Edge^ edge)
{
	((::ShapeFix_WireSegment*)_NativeInstance)->AddEdge(i, *(::TopoDS_Edge*)edge->NativeInstance);
}

void Macad::Occt::ShapeFix_WireSegment::AddEdge(int i, Macad::Occt::TopoDS_Edge^ edge, int iumin, int iumax, int ivmin, int ivmax)
{
	((::ShapeFix_WireSegment*)_NativeInstance)->AddEdge(i, *(::TopoDS_Edge*)edge->NativeInstance, iumin, iumax, ivmin, ivmax);
}

void Macad::Occt::ShapeFix_WireSegment::SetPatchIndex(int i, int iumin, int iumax, int ivmin, int ivmax)
{
	((::ShapeFix_WireSegment*)_NativeInstance)->SetPatchIndex(i, iumin, iumax, ivmin, ivmax);
}

void Macad::Occt::ShapeFix_WireSegment::DefineIUMin(int i, int iumin)
{
	((::ShapeFix_WireSegment*)_NativeInstance)->DefineIUMin(i, iumin);
}

void Macad::Occt::ShapeFix_WireSegment::DefineIUMax(int i, int iumax)
{
	((::ShapeFix_WireSegment*)_NativeInstance)->DefineIUMax(i, iumax);
}

void Macad::Occt::ShapeFix_WireSegment::DefineIVMin(int i, int ivmin)
{
	((::ShapeFix_WireSegment*)_NativeInstance)->DefineIVMin(i, ivmin);
}

void Macad::Occt::ShapeFix_WireSegment::DefineIVMax(int i, int ivmax)
{
	((::ShapeFix_WireSegment*)_NativeInstance)->DefineIVMax(i, ivmax);
}

void Macad::Occt::ShapeFix_WireSegment::GetPatchIndex(int i, int% iumin, int% iumax, int% ivmin, int% ivmax)
{
	pin_ptr<int> pp_iumin = &iumin;
	pin_ptr<int> pp_iumax = &iumax;
	pin_ptr<int> pp_ivmin = &ivmin;
	pin_ptr<int> pp_ivmax = &ivmax;
	((::ShapeFix_WireSegment*)_NativeInstance)->GetPatchIndex(i, *(Standard_Integer*)pp_iumin, *(Standard_Integer*)pp_iumax, *(Standard_Integer*)pp_ivmin, *(Standard_Integer*)pp_ivmax);
}

bool Macad::Occt::ShapeFix_WireSegment::CheckPatchIndex(int i)
{
	return ((::ShapeFix_WireSegment*)_NativeInstance)->CheckPatchIndex(i);
}

void Macad::Occt::ShapeFix_WireSegment::SetVertex(Macad::Occt::TopoDS_Vertex^ theVertex)
{
	((::ShapeFix_WireSegment*)_NativeInstance)->SetVertex(*(::TopoDS_Vertex*)theVertex->NativeInstance);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::ShapeFix_WireSegment::GetVertex()
{
	::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
	*_result = ((::ShapeFix_WireSegment*)_NativeInstance)->GetVertex();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

bool Macad::Occt::ShapeFix_WireSegment::IsVertex()
{
	return ((::ShapeFix_WireSegment*)_NativeInstance)->IsVertex();
}




//---------------------------------------------------------------------
//  Class  ShapeFix_IntersectionTool
//---------------------------------------------------------------------

Macad::Occt::ShapeFix_IntersectionTool::ShapeFix_IntersectionTool(Macad::Occt::ShapeBuild_ReShape^ context, double preci, double maxtol)
	: BaseClass<::ShapeFix_IntersectionTool>(BaseClass::InitMode::Uninitialized)
{
	Handle(::ShapeBuild_ReShape) h_context = context->NativeInstance;
	_NativeInstance = new ::ShapeFix_IntersectionTool(h_context, preci, maxtol);
	context->NativeInstance = h_context.get();
}

Macad::Occt::ShapeFix_IntersectionTool::ShapeFix_IntersectionTool(Macad::Occt::ShapeBuild_ReShape^ context, double preci)
	: BaseClass<::ShapeFix_IntersectionTool>(BaseClass::InitMode::Uninitialized)
{
	Handle(::ShapeBuild_ReShape) h_context = context->NativeInstance;
	_NativeInstance = new ::ShapeFix_IntersectionTool(h_context, preci, 1.);
	context->NativeInstance = h_context.get();
}

Macad::Occt::ShapeFix_IntersectionTool::ShapeFix_IntersectionTool(Macad::Occt::ShapeFix_IntersectionTool^ parameter1)
	: BaseClass<::ShapeFix_IntersectionTool>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_IntersectionTool(*(::ShapeFix_IntersectionTool*)parameter1->NativeInstance);
}

Macad::Occt::ShapeBuild_ReShape^ Macad::Occt::ShapeFix_IntersectionTool::Context()
{
	Handle(::ShapeBuild_ReShape) _result;
	_result = ((::ShapeFix_IntersectionTool*)_NativeInstance)->Context();
	 return _result.IsNull() ? nullptr : Macad::Occt::ShapeBuild_ReShape::CreateDowncasted( _result.get());
}

bool Macad::Occt::ShapeFix_IntersectionTool::SplitEdge(Macad::Occt::TopoDS_Edge^ edge, double param, Macad::Occt::TopoDS_Vertex^ vert, Macad::Occt::TopoDS_Face^ face, Macad::Occt::TopoDS_Edge^ newE1, Macad::Occt::TopoDS_Edge^ newE2, double preci)
{
	return ((::ShapeFix_IntersectionTool*)_NativeInstance)->SplitEdge(*(::TopoDS_Edge*)edge->NativeInstance, param, *(::TopoDS_Vertex*)vert->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, *(::TopoDS_Edge*)newE1->NativeInstance, *(::TopoDS_Edge*)newE2->NativeInstance, preci);
}

bool Macad::Occt::ShapeFix_IntersectionTool::CutEdge(Macad::Occt::TopoDS_Edge^ edge, double pend, double cut, Macad::Occt::TopoDS_Face^ face, bool% iscutline)
{
	pin_ptr<bool> pp_iscutline = &iscutline;
	return ((::ShapeFix_IntersectionTool*)_NativeInstance)->CutEdge(*(::TopoDS_Edge*)edge->NativeInstance, pend, cut, *(::TopoDS_Face*)face->NativeInstance, *(Standard_Boolean*)pp_iscutline);
}

bool Macad::Occt::ShapeFix_IntersectionTool::FixSelfIntersectWire(Macad::Occt::ShapeExtend_WireData^ sewd, Macad::Occt::TopoDS_Face^ face, int% NbSplit, int% NbCut, int% NbRemoved)
{
	Handle(::ShapeExtend_WireData) h_sewd = sewd->NativeInstance;
	pin_ptr<int> pp_NbSplit = &NbSplit;
	pin_ptr<int> pp_NbCut = &NbCut;
	pin_ptr<int> pp_NbRemoved = &NbRemoved;
	return ((::ShapeFix_IntersectionTool*)_NativeInstance)->FixSelfIntersectWire(h_sewd, *(::TopoDS_Face*)face->NativeInstance, *(Standard_Integer*)pp_NbSplit, *(Standard_Integer*)pp_NbCut, *(Standard_Integer*)pp_NbRemoved);
	sewd->NativeInstance = h_sewd.get();
}

bool Macad::Occt::ShapeFix_IntersectionTool::FixIntersectingWires(Macad::Occt::TopoDS_Face^ face)
{
	return ((::ShapeFix_IntersectionTool*)_NativeInstance)->FixIntersectingWires(*(::TopoDS_Face*)face->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  ShapeFix_SplitTool
//---------------------------------------------------------------------

Macad::Occt::ShapeFix_SplitTool::ShapeFix_SplitTool()
	: BaseClass<::ShapeFix_SplitTool>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_SplitTool();
}

Macad::Occt::ShapeFix_SplitTool::ShapeFix_SplitTool(Macad::Occt::ShapeFix_SplitTool^ parameter1)
	: BaseClass<::ShapeFix_SplitTool>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix_SplitTool(*(::ShapeFix_SplitTool*)parameter1->NativeInstance);
}

bool Macad::Occt::ShapeFix_SplitTool::SplitEdge(Macad::Occt::TopoDS_Edge^ edge, double param, Macad::Occt::TopoDS_Vertex^ vert, Macad::Occt::TopoDS_Face^ face, Macad::Occt::TopoDS_Edge^ newE1, Macad::Occt::TopoDS_Edge^ newE2, double tol3d, double tol2d)
{
	return ((::ShapeFix_SplitTool*)_NativeInstance)->SplitEdge(*(::TopoDS_Edge*)edge->NativeInstance, param, *(::TopoDS_Vertex*)vert->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, *(::TopoDS_Edge*)newE1->NativeInstance, *(::TopoDS_Edge*)newE2->NativeInstance, tol3d, tol2d);
}

bool Macad::Occt::ShapeFix_SplitTool::SplitEdge(Macad::Occt::TopoDS_Edge^ edge, double param1, double param2, Macad::Occt::TopoDS_Vertex^ vert, Macad::Occt::TopoDS_Face^ face, Macad::Occt::TopoDS_Edge^ newE1, Macad::Occt::TopoDS_Edge^ newE2, double tol3d, double tol2d)
{
	return ((::ShapeFix_SplitTool*)_NativeInstance)->SplitEdge(*(::TopoDS_Edge*)edge->NativeInstance, param1, param2, *(::TopoDS_Vertex*)vert->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, *(::TopoDS_Edge*)newE1->NativeInstance, *(::TopoDS_Edge*)newE2->NativeInstance, tol3d, tol2d);
}

bool Macad::Occt::ShapeFix_SplitTool::CutEdge(Macad::Occt::TopoDS_Edge^ edge, double pend, double cut, Macad::Occt::TopoDS_Face^ face, bool% iscutline)
{
	pin_ptr<bool> pp_iscutline = &iscutline;
	return ((::ShapeFix_SplitTool*)_NativeInstance)->CutEdge(*(::TopoDS_Edge*)edge->NativeInstance, pend, cut, *(::TopoDS_Face*)face->NativeInstance, *(Standard_Boolean*)pp_iscutline);
}

bool Macad::Occt::ShapeFix_SplitTool::SplitEdge(Macad::Occt::TopoDS_Edge^ edge, double fp, Macad::Occt::TopoDS_Vertex^ V1, double lp, Macad::Occt::TopoDS_Vertex^ V2, Macad::Occt::TopoDS_Face^ face, Macad::Occt::TopTools_SequenceOfShape^ SeqE, int% aNum, Macad::Occt::ShapeBuild_ReShape^ context, double tol3d, double tol2d)
{
	pin_ptr<int> pp_aNum = &aNum;
	Handle(::ShapeBuild_ReShape) h_context = context->NativeInstance;
	return ((::ShapeFix_SplitTool*)_NativeInstance)->SplitEdge(*(::TopoDS_Edge*)edge->NativeInstance, fp, *(::TopoDS_Vertex*)V1->NativeInstance, lp, *(::TopoDS_Vertex*)V2->NativeInstance, *(::TopoDS_Face*)face->NativeInstance, *(::TopTools_SequenceOfShape*)SeqE->NativeInstance, *(Standard_Integer*)pp_aNum, h_context, tol3d, tol2d);
	context->NativeInstance = h_context.get();
}




//---------------------------------------------------------------------
//  Class  ShapeFix
//---------------------------------------------------------------------

Macad::Occt::ShapeFix::ShapeFix()
	: BaseClass<::ShapeFix>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix();
}

Macad::Occt::ShapeFix::ShapeFix(Macad::Occt::ShapeFix^ parameter1)
	: BaseClass<::ShapeFix>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::ShapeFix(*(::ShapeFix*)parameter1->NativeInstance);
}

bool Macad::Occt::ShapeFix::SameParameter(Macad::Occt::TopoDS_Shape^ shape, bool enforce, double preci, Macad::Occt::Message_ProgressRange^ theProgress, Macad::Occt::ShapeExtend_BasicMsgRegistrator^ theMsgReg)
{
	Handle(::ShapeExtend_BasicMsgRegistrator) h_theMsgReg = theMsgReg->NativeInstance;
	return ::ShapeFix::SameParameter(*(::TopoDS_Shape*)shape->NativeInstance, enforce, preci, *(::Message_ProgressRange*)theProgress->NativeInstance, h_theMsgReg);
	theMsgReg->NativeInstance = h_theMsgReg.get();
}

bool Macad::Occt::ShapeFix::SameParameter(Macad::Occt::TopoDS_Shape^ shape, bool enforce, double preci, Macad::Occt::Message_ProgressRange^ theProgress)
{
	return ::ShapeFix::SameParameter(*(::TopoDS_Shape*)shape->NativeInstance, enforce, preci, *(::Message_ProgressRange*)theProgress->NativeInstance, 0);
}

bool Macad::Occt::ShapeFix::SameParameter(Macad::Occt::TopoDS_Shape^ shape, bool enforce, double preci)
{
	return ::ShapeFix::SameParameter(*(::TopoDS_Shape*)shape->NativeInstance, enforce, preci, ::Message_ProgressRange(), 0);
}

bool Macad::Occt::ShapeFix::SameParameter(Macad::Occt::TopoDS_Shape^ shape, bool enforce)
{
	return ::ShapeFix::SameParameter(*(::TopoDS_Shape*)shape->NativeInstance, enforce, 0., ::Message_ProgressRange(), 0);
}

void Macad::Occt::ShapeFix::EncodeRegularity(Macad::Occt::TopoDS_Shape^ shape, double tolang)
{
	::ShapeFix::EncodeRegularity(*(::TopoDS_Shape*)shape->NativeInstance, tolang);
}

void Macad::Occt::ShapeFix::EncodeRegularity(Macad::Occt::TopoDS_Shape^ shape)
{
	::ShapeFix::EncodeRegularity(*(::TopoDS_Shape*)shape->NativeInstance, 1.0E-10);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::ShapeFix::RemoveSmallEdges(Macad::Occt::TopoDS_Shape^ shape, double Tolerance, Macad::Occt::ShapeBuild_ReShape^ context)
{
	Handle(::ShapeBuild_ReShape) h_context = context->NativeInstance;
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ::ShapeFix::RemoveSmallEdges(*(::TopoDS_Shape*)shape->NativeInstance, Tolerance, h_context);
	context->NativeInstance = h_context.get();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::ShapeFix::FixVertexPosition(Macad::Occt::TopoDS_Shape^ theshape, double theTolerance, Macad::Occt::ShapeBuild_ReShape^ thecontext)
{
	Handle(::ShapeBuild_ReShape) h_thecontext = thecontext->NativeInstance;
	return ::ShapeFix::FixVertexPosition(*(::TopoDS_Shape*)theshape->NativeInstance, theTolerance, h_thecontext);
	thecontext->NativeInstance = h_thecontext.get();
}

double Macad::Occt::ShapeFix::LeastEdgeSize(Macad::Occt::TopoDS_Shape^ theshape)
{
	return ::ShapeFix::LeastEdgeSize(*(::TopoDS_Shape*)theshape->NativeInstance);
}



