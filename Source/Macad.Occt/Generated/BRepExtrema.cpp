// Generated wrapper code for package BRepExtrema

#include "OcctPCH.h"
#include "BRepExtrema.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "BRepExtrema.h"
#include "Standard.h"
#include "TColStd.h"
#include "gp.h"
#include "TopoDS.h"
#include "Bnd.h"
#include "Extrema.h"


//---------------------------------------------------------------------
//  Class  BRepExtrema_SeqOfSolution
//---------------------------------------------------------------------

Macad::Occt::BRepExtrema_SeqOfSolution::BRepExtrema_SeqOfSolution()
	: BaseClass<::BRepExtrema_SeqOfSolution>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_SeqOfSolution();
}

Macad::Occt::BRepExtrema_SeqOfSolution::BRepExtrema_SeqOfSolution(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::BRepExtrema_SeqOfSolution>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::BRepExtrema_SeqOfSolution(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::BRepExtrema_SeqOfSolution::BRepExtrema_SeqOfSolution(Macad::Occt::BRepExtrema_SeqOfSolution^ theOther)
	: BaseClass<::BRepExtrema_SeqOfSolution>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_SeqOfSolution(*(::BRepExtrema_SeqOfSolution*)theOther->NativeInstance);
}

int Macad::Occt::BRepExtrema_SeqOfSolution::Size()
{
	return ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Size();
}

int Macad::Occt::BRepExtrema_SeqOfSolution::Length()
{
	return ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Length();
}

int Macad::Occt::BRepExtrema_SeqOfSolution::Lower()
{
	return ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Lower();
}

int Macad::Occt::BRepExtrema_SeqOfSolution::Upper()
{
	return ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Upper();
}

bool Macad::Occt::BRepExtrema_SeqOfSolution::IsEmpty()
{
	return ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::BRepExtrema_SeqOfSolution::Reverse()
{
	((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Reverse();
}

void Macad::Occt::BRepExtrema_SeqOfSolution::Exchange(int I, int J)
{
	((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::BRepExtrema_SeqOfSolution::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::BRepExtrema_SeqOfSolution::Clear()
{
	((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Clear(0L);
}

Macad::Occt::BRepExtrema_SeqOfSolution^ Macad::Occt::BRepExtrema_SeqOfSolution::Assign(Macad::Occt::BRepExtrema_SeqOfSolution^ theOther)
{
	::BRepExtrema_SeqOfSolution* _result = new ::BRepExtrema_SeqOfSolution();
	*_result = ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Assign(*(::BRepExtrema_SeqOfSolution*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepExtrema_SeqOfSolution(_result);
}

void Macad::Occt::BRepExtrema_SeqOfSolution::Remove(int theIndex)
{
	((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::BRepExtrema_SeqOfSolution::Remove(int theFromIndex, int theToIndex)
{
	((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::BRepExtrema_SeqOfSolution::Append(Macad::Occt::BRepExtrema_SolutionElem^ theItem)
{
	((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Append(*(::BRepExtrema_SolutionElem*)theItem->NativeInstance);
}

void Macad::Occt::BRepExtrema_SeqOfSolution::Append(Macad::Occt::BRepExtrema_SeqOfSolution^ theSeq)
{
	((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Append(*(::BRepExtrema_SeqOfSolution*)theSeq->NativeInstance);
}

void Macad::Occt::BRepExtrema_SeqOfSolution::Prepend(Macad::Occt::BRepExtrema_SolutionElem^ theItem)
{
	((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Prepend(*(::BRepExtrema_SolutionElem*)theItem->NativeInstance);
}

void Macad::Occt::BRepExtrema_SeqOfSolution::Prepend(Macad::Occt::BRepExtrema_SeqOfSolution^ theSeq)
{
	((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Prepend(*(::BRepExtrema_SeqOfSolution*)theSeq->NativeInstance);
}

void Macad::Occt::BRepExtrema_SeqOfSolution::InsertBefore(int theIndex, Macad::Occt::BRepExtrema_SolutionElem^ theItem)
{
	((::BRepExtrema_SeqOfSolution*)_NativeInstance)->InsertBefore(theIndex, *(::BRepExtrema_SolutionElem*)theItem->NativeInstance);
}

void Macad::Occt::BRepExtrema_SeqOfSolution::InsertBefore(int theIndex, Macad::Occt::BRepExtrema_SeqOfSolution^ theSeq)
{
	((::BRepExtrema_SeqOfSolution*)_NativeInstance)->InsertBefore(theIndex, *(::BRepExtrema_SeqOfSolution*)theSeq->NativeInstance);
}

void Macad::Occt::BRepExtrema_SeqOfSolution::InsertAfter(int theIndex, Macad::Occt::BRepExtrema_SeqOfSolution^ theSeq)
{
	((::BRepExtrema_SeqOfSolution*)_NativeInstance)->InsertAfter(theIndex, *(::BRepExtrema_SeqOfSolution*)theSeq->NativeInstance);
}

void Macad::Occt::BRepExtrema_SeqOfSolution::InsertAfter(int theIndex, Macad::Occt::BRepExtrema_SolutionElem^ theItem)
{
	((::BRepExtrema_SeqOfSolution*)_NativeInstance)->InsertAfter(theIndex, *(::BRepExtrema_SolutionElem*)theItem->NativeInstance);
}

void Macad::Occt::BRepExtrema_SeqOfSolution::Split(int theIndex, Macad::Occt::BRepExtrema_SeqOfSolution^ theSeq)
{
	((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Split(theIndex, *(::BRepExtrema_SeqOfSolution*)theSeq->NativeInstance);
}

Macad::Occt::BRepExtrema_SolutionElem^ Macad::Occt::BRepExtrema_SeqOfSolution::First()
{
	::BRepExtrema_SolutionElem* _result = new ::BRepExtrema_SolutionElem();
	*_result =  (::BRepExtrema_SolutionElem)((::BRepExtrema_SeqOfSolution*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepExtrema_SolutionElem(_result);
}

Macad::Occt::BRepExtrema_SolutionElem^ Macad::Occt::BRepExtrema_SeqOfSolution::ChangeFirst()
{
	::BRepExtrema_SolutionElem* _result = new ::BRepExtrema_SolutionElem();
	*_result = ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->ChangeFirst();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepExtrema_SolutionElem(_result);
}

Macad::Occt::BRepExtrema_SolutionElem^ Macad::Occt::BRepExtrema_SeqOfSolution::Last()
{
	::BRepExtrema_SolutionElem* _result = new ::BRepExtrema_SolutionElem();
	*_result =  (::BRepExtrema_SolutionElem)((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepExtrema_SolutionElem(_result);
}

Macad::Occt::BRepExtrema_SolutionElem^ Macad::Occt::BRepExtrema_SeqOfSolution::ChangeLast()
{
	::BRepExtrema_SolutionElem* _result = new ::BRepExtrema_SolutionElem();
	*_result = ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->ChangeLast();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepExtrema_SolutionElem(_result);
}

Macad::Occt::BRepExtrema_SolutionElem^ Macad::Occt::BRepExtrema_SeqOfSolution::Value(int theIndex)
{
	::BRepExtrema_SolutionElem* _result = new ::BRepExtrema_SolutionElem();
	*_result =  (::BRepExtrema_SolutionElem)((::BRepExtrema_SeqOfSolution*)_NativeInstance)->Value(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepExtrema_SolutionElem(_result);
}

Macad::Occt::BRepExtrema_SolutionElem^ Macad::Occt::BRepExtrema_SeqOfSolution::ChangeValue(int theIndex)
{
	::BRepExtrema_SolutionElem* _result = new ::BRepExtrema_SolutionElem();
	*_result = ((::BRepExtrema_SeqOfSolution*)_NativeInstance)->ChangeValue(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepExtrema_SolutionElem(_result);
}

void Macad::Occt::BRepExtrema_SeqOfSolution::SetValue(int theIndex, Macad::Occt::BRepExtrema_SolutionElem^ theItem)
{
	((::BRepExtrema_SeqOfSolution*)_NativeInstance)->SetValue(theIndex, *(::BRepExtrema_SolutionElem*)theItem->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  BRepExtrema_MapOfIntegerPackedMapOfInteger
//---------------------------------------------------------------------

Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::BRepExtrema_MapOfIntegerPackedMapOfInteger()
	: BaseClass<::BRepExtrema_MapOfIntegerPackedMapOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_MapOfIntegerPackedMapOfInteger();
}

Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::BRepExtrema_MapOfIntegerPackedMapOfInteger(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::BRepExtrema_MapOfIntegerPackedMapOfInteger>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::BRepExtrema_MapOfIntegerPackedMapOfInteger(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::BRepExtrema_MapOfIntegerPackedMapOfInteger(int theNbBuckets)
	: BaseClass<::BRepExtrema_MapOfIntegerPackedMapOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_MapOfIntegerPackedMapOfInteger(theNbBuckets, 0L);
}

Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::BRepExtrema_MapOfIntegerPackedMapOfInteger(Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger^ theOther)
	: BaseClass<::BRepExtrema_MapOfIntegerPackedMapOfInteger>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_MapOfIntegerPackedMapOfInteger(*(::BRepExtrema_MapOfIntegerPackedMapOfInteger*)theOther->NativeInstance);
}

void Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::Exchange(Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger^ theOther)
{
	((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->Exchange(*(::BRepExtrema_MapOfIntegerPackedMapOfInteger*)theOther->NativeInstance);
}

Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger^ Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::Assign(Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger^ theOther)
{
	::BRepExtrema_MapOfIntegerPackedMapOfInteger* _result = new ::BRepExtrema_MapOfIntegerPackedMapOfInteger();
	*_result = ((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->Assign(*(::BRepExtrema_MapOfIntegerPackedMapOfInteger*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger(_result);
}

bool Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::IsBound(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	return ((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->IsBound(*(int*)pp_theKey);
}

bool Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::UnBind(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	return ((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->UnBind(*(int*)pp_theKey);
}

void Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::Clear(bool doReleaseMemory)
{
	((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::Clear()
{
	((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->Clear(true);
}

void Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger::Size()
{
	return ((::BRepExtrema_MapOfIntegerPackedMapOfInteger*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  BRepExtrema_ElementFilter
//---------------------------------------------------------------------

Macad::Occt::BRepExtrema_ElementFilter::BRepExtrema_ElementFilter(Macad::Occt::BRepExtrema_ElementFilter^ parameter1)
	: BaseClass<::BRepExtrema_ElementFilter>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_ElementFilter(*(::BRepExtrema_ElementFilter*)parameter1->NativeInstance);
}

Macad::Occt::BRepExtrema_ElementFilter::BRepExtrema_ElementFilter()
	: BaseClass<::BRepExtrema_ElementFilter>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_ElementFilter();
}

Macad::Occt::BRepExtrema_ElementFilter::FilterResult Macad::Occt::BRepExtrema_ElementFilter::PreCheckElements(int parameter1, int parameter2)
{
	throw gcnew System::NotImplementedException("Unresolved external symbol");
}




//---------------------------------------------------------------------
//  Class  BRepExtrema_SolutionElem
//---------------------------------------------------------------------

Macad::Occt::BRepExtrema_SolutionElem::BRepExtrema_SolutionElem()
	: BaseClass<::BRepExtrema_SolutionElem>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_SolutionElem();
}

Macad::Occt::BRepExtrema_SolutionElem::BRepExtrema_SolutionElem(double theDist, Macad::Occt::Pnt thePoint, Macad::Occt::BRepExtrema_SupportType theSolType, Macad::Occt::TopoDS_Vertex^ theVertex)
	: BaseClass<::BRepExtrema_SolutionElem>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
	_NativeInstance = new ::BRepExtrema_SolutionElem(theDist, *(gp_Pnt*)pp_thePoint, (::BRepExtrema_SupportType)theSolType, *(::TopoDS_Vertex*)theVertex->NativeInstance);
}

Macad::Occt::BRepExtrema_SolutionElem::BRepExtrema_SolutionElem(double theDist, Macad::Occt::Pnt thePoint, Macad::Occt::BRepExtrema_SupportType theSolType, Macad::Occt::TopoDS_Edge^ theEdge, double theParam)
	: BaseClass<::BRepExtrema_SolutionElem>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
	_NativeInstance = new ::BRepExtrema_SolutionElem(theDist, *(gp_Pnt*)pp_thePoint, (::BRepExtrema_SupportType)theSolType, *(::TopoDS_Edge*)theEdge->NativeInstance, theParam);
}

Macad::Occt::BRepExtrema_SolutionElem::BRepExtrema_SolutionElem(double theDist, Macad::Occt::Pnt thePoint, Macad::Occt::BRepExtrema_SupportType theSolType, Macad::Occt::TopoDS_Face^ theFace, double theU, double theV)
	: BaseClass<::BRepExtrema_SolutionElem>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
	_NativeInstance = new ::BRepExtrema_SolutionElem(theDist, *(gp_Pnt*)pp_thePoint, (::BRepExtrema_SupportType)theSolType, *(::TopoDS_Face*)theFace->NativeInstance, theU, theV);
}

Macad::Occt::BRepExtrema_SolutionElem::BRepExtrema_SolutionElem(Macad::Occt::BRepExtrema_SolutionElem^ parameter1)
	: BaseClass<::BRepExtrema_SolutionElem>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_SolutionElem(*(::BRepExtrema_SolutionElem*)parameter1->NativeInstance);
}

double Macad::Occt::BRepExtrema_SolutionElem::Dist()
{
	return ((::BRepExtrema_SolutionElem*)_NativeInstance)->Dist();
}

Macad::Occt::Pnt Macad::Occt::BRepExtrema_SolutionElem::Point()
{
	return Macad::Occt::Pnt(((::BRepExtrema_SolutionElem*)_NativeInstance)->Point());
}

Macad::Occt::BRepExtrema_SupportType Macad::Occt::BRepExtrema_SolutionElem::SupportKind()
{
	return (Macad::Occt::BRepExtrema_SupportType)((::BRepExtrema_SolutionElem*)_NativeInstance)->SupportKind();
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepExtrema_SolutionElem::Vertex()
{
	::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
	*_result =  (::TopoDS_Vertex)((::BRepExtrema_SolutionElem*)_NativeInstance)->Vertex();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepExtrema_SolutionElem::Edge()
{
	::TopoDS_Edge* _result = new ::TopoDS_Edge();
	*_result =  (::TopoDS_Edge)((::BRepExtrema_SolutionElem*)_NativeInstance)->Edge();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepExtrema_SolutionElem::Face()
{
	::TopoDS_Face* _result = new ::TopoDS_Face();
	*_result =  (::TopoDS_Face)((::BRepExtrema_SolutionElem*)_NativeInstance)->Face();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

void Macad::Occt::BRepExtrema_SolutionElem::EdgeParameter(double% theParam)
{
	pin_ptr<double> pp_theParam = &theParam;
	((::BRepExtrema_SolutionElem*)_NativeInstance)->EdgeParameter(*(Standard_Real*)pp_theParam);
}

void Macad::Occt::BRepExtrema_SolutionElem::FaceParameter(double% theU, double% theV)
{
	pin_ptr<double> pp_theU = &theU;
	pin_ptr<double> pp_theV = &theV;
	((::BRepExtrema_SolutionElem*)_NativeInstance)->FaceParameter(*(Standard_Real*)pp_theU, *(Standard_Real*)pp_theV);
}




//---------------------------------------------------------------------
//  Class  BRepExtrema_DistanceSS
//---------------------------------------------------------------------

Macad::Occt::BRepExtrema_DistanceSS::BRepExtrema_DistanceSS(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2, Macad::Occt::Bnd_Box^ B1, Macad::Occt::Bnd_Box^ B2, double DstRef)
	: BaseClass<::BRepExtrema_DistanceSS>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_DistanceSS(*(::TopoDS_Shape*)S1->NativeInstance, *(::TopoDS_Shape*)S2->NativeInstance, *(::Bnd_Box*)B1->NativeInstance, *(::Bnd_Box*)B2->NativeInstance, DstRef, Extrema_ExtFlag_MINMAX, Extrema_ExtAlgo_Grad);
}

Macad::Occt::BRepExtrema_DistanceSS::BRepExtrema_DistanceSS(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2, Macad::Occt::Bnd_Box^ B1, Macad::Occt::Bnd_Box^ B2, double DstRef, double aDeflection)
	: BaseClass<::BRepExtrema_DistanceSS>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_DistanceSS(*(::TopoDS_Shape*)S1->NativeInstance, *(::TopoDS_Shape*)S2->NativeInstance, *(::Bnd_Box*)B1->NativeInstance, *(::Bnd_Box*)B2->NativeInstance, DstRef, aDeflection, Extrema_ExtFlag_MINMAX, Extrema_ExtAlgo_Grad);
}

Macad::Occt::BRepExtrema_DistanceSS::BRepExtrema_DistanceSS(Macad::Occt::BRepExtrema_DistanceSS^ parameter1)
	: BaseClass<::BRepExtrema_DistanceSS>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_DistanceSS(*(::BRepExtrema_DistanceSS*)parameter1->NativeInstance);
}

bool Macad::Occt::BRepExtrema_DistanceSS::IsDone()
{
	return ((::BRepExtrema_DistanceSS*)_NativeInstance)->IsDone();
}

double Macad::Occt::BRepExtrema_DistanceSS::DistValue()
{
	return ((::BRepExtrema_DistanceSS*)_NativeInstance)->DistValue();
}

Macad::Occt::BRepExtrema_SeqOfSolution^ Macad::Occt::BRepExtrema_DistanceSS::Seq1Value()
{
	::BRepExtrema_SeqOfSolution* _result = new ::BRepExtrema_SeqOfSolution();
	*_result =  (::BRepExtrema_SeqOfSolution)((::BRepExtrema_DistanceSS*)_NativeInstance)->Seq1Value();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepExtrema_SeqOfSolution(_result);
}

Macad::Occt::BRepExtrema_SeqOfSolution^ Macad::Occt::BRepExtrema_DistanceSS::Seq2Value()
{
	::BRepExtrema_SeqOfSolution* _result = new ::BRepExtrema_SeqOfSolution();
	*_result =  (::BRepExtrema_SeqOfSolution)((::BRepExtrema_DistanceSS*)_NativeInstance)->Seq2Value();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepExtrema_SeqOfSolution(_result);
}




//---------------------------------------------------------------------
//  Class  BRepExtrema_DistShapeShape
//---------------------------------------------------------------------

Macad::Occt::BRepExtrema_DistShapeShape::BRepExtrema_DistShapeShape()
	: BaseClass<::BRepExtrema_DistShapeShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_DistShapeShape();
}

Macad::Occt::BRepExtrema_DistShapeShape::BRepExtrema_DistShapeShape(Macad::Occt::TopoDS_Shape^ Shape1, Macad::Occt::TopoDS_Shape^ Shape2)
	: BaseClass<::BRepExtrema_DistShapeShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_DistShapeShape(*(::TopoDS_Shape*)Shape1->NativeInstance, *(::TopoDS_Shape*)Shape2->NativeInstance, Extrema_ExtFlag_MINMAX, Extrema_ExtAlgo_Grad);
}

Macad::Occt::BRepExtrema_DistShapeShape::BRepExtrema_DistShapeShape(Macad::Occt::TopoDS_Shape^ Shape1, Macad::Occt::TopoDS_Shape^ Shape2, double theDeflection)
	: BaseClass<::BRepExtrema_DistShapeShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_DistShapeShape(*(::TopoDS_Shape*)Shape1->NativeInstance, *(::TopoDS_Shape*)Shape2->NativeInstance, theDeflection, Extrema_ExtFlag_MINMAX, Extrema_ExtAlgo_Grad);
}

Macad::Occt::BRepExtrema_DistShapeShape::BRepExtrema_DistShapeShape(Macad::Occt::BRepExtrema_DistShapeShape^ parameter1)
	: BaseClass<::BRepExtrema_DistShapeShape>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_DistShapeShape(*(::BRepExtrema_DistShapeShape*)parameter1->NativeInstance);
}

void Macad::Occt::BRepExtrema_DistShapeShape::SetDeflection(double theDeflection)
{
	((::BRepExtrema_DistShapeShape*)_NativeInstance)->SetDeflection(theDeflection);
}

void Macad::Occt::BRepExtrema_DistShapeShape::LoadS1(Macad::Occt::TopoDS_Shape^ Shape1)
{
	((::BRepExtrema_DistShapeShape*)_NativeInstance)->LoadS1(*(::TopoDS_Shape*)Shape1->NativeInstance);
}

void Macad::Occt::BRepExtrema_DistShapeShape::LoadS2(Macad::Occt::TopoDS_Shape^ Shape1)
{
	((::BRepExtrema_DistShapeShape*)_NativeInstance)->LoadS2(*(::TopoDS_Shape*)Shape1->NativeInstance);
}

bool Macad::Occt::BRepExtrema_DistShapeShape::Perform()
{
	return ((::BRepExtrema_DistShapeShape*)_NativeInstance)->Perform();
}

bool Macad::Occt::BRepExtrema_DistShapeShape::IsDone()
{
	return ((::BRepExtrema_DistShapeShape*)_NativeInstance)->IsDone();
}

int Macad::Occt::BRepExtrema_DistShapeShape::NbSolution()
{
	return ((::BRepExtrema_DistShapeShape*)_NativeInstance)->NbSolution();
}

double Macad::Occt::BRepExtrema_DistShapeShape::Value()
{
	return ((::BRepExtrema_DistShapeShape*)_NativeInstance)->Value();
}

bool Macad::Occt::BRepExtrema_DistShapeShape::InnerSolution()
{
	return ((::BRepExtrema_DistShapeShape*)_NativeInstance)->InnerSolution();
}

Macad::Occt::Pnt Macad::Occt::BRepExtrema_DistShapeShape::PointOnShape1(int N)
{
	return Macad::Occt::Pnt(((::BRepExtrema_DistShapeShape*)_NativeInstance)->PointOnShape1(N));
}

Macad::Occt::Pnt Macad::Occt::BRepExtrema_DistShapeShape::PointOnShape2(int N)
{
	return Macad::Occt::Pnt(((::BRepExtrema_DistShapeShape*)_NativeInstance)->PointOnShape2(N));
}

Macad::Occt::BRepExtrema_SupportType Macad::Occt::BRepExtrema_DistShapeShape::SupportTypeShape1(int N)
{
	return (Macad::Occt::BRepExtrema_SupportType)((::BRepExtrema_DistShapeShape*)_NativeInstance)->SupportTypeShape1(N);
}

Macad::Occt::BRepExtrema_SupportType Macad::Occt::BRepExtrema_DistShapeShape::SupportTypeShape2(int N)
{
	return (Macad::Occt::BRepExtrema_SupportType)((::BRepExtrema_DistShapeShape*)_NativeInstance)->SupportTypeShape2(N);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepExtrema_DistShapeShape::SupportOnShape1(int N)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::BRepExtrema_DistShapeShape*)_NativeInstance)->SupportOnShape1(N);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepExtrema_DistShapeShape::SupportOnShape2(int N)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::BRepExtrema_DistShapeShape*)_NativeInstance)->SupportOnShape2(N);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::BRepExtrema_DistShapeShape::ParOnEdgeS1(int N, double% t)
{
	pin_ptr<double> pp_t = &t;
	((::BRepExtrema_DistShapeShape*)_NativeInstance)->ParOnEdgeS1(N, *(Standard_Real*)pp_t);
}

void Macad::Occt::BRepExtrema_DistShapeShape::ParOnEdgeS2(int N, double% t)
{
	pin_ptr<double> pp_t = &t;
	((::BRepExtrema_DistShapeShape*)_NativeInstance)->ParOnEdgeS2(N, *(Standard_Real*)pp_t);
}

void Macad::Occt::BRepExtrema_DistShapeShape::ParOnFaceS1(int N, double% u, double% v)
{
	pin_ptr<double> pp_u = &u;
	pin_ptr<double> pp_v = &v;
	((::BRepExtrema_DistShapeShape*)_NativeInstance)->ParOnFaceS1(N, *(Standard_Real*)pp_u, *(Standard_Real*)pp_v);
}

void Macad::Occt::BRepExtrema_DistShapeShape::ParOnFaceS2(int N, double% u, double% v)
{
	pin_ptr<double> pp_u = &u;
	pin_ptr<double> pp_v = &v;
	((::BRepExtrema_DistShapeShape*)_NativeInstance)->ParOnFaceS2(N, *(Standard_Real*)pp_u, *(Standard_Real*)pp_v);
}




//---------------------------------------------------------------------
//  Class  BRepExtrema_ExtCC
//---------------------------------------------------------------------

Macad::Occt::BRepExtrema_ExtCC::BRepExtrema_ExtCC()
	: BaseClass<::BRepExtrema_ExtCC>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_ExtCC();
}

Macad::Occt::BRepExtrema_ExtCC::BRepExtrema_ExtCC(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2)
	: BaseClass<::BRepExtrema_ExtCC>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_ExtCC(*(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance);
}

Macad::Occt::BRepExtrema_ExtCC::BRepExtrema_ExtCC(Macad::Occt::BRepExtrema_ExtCC^ parameter1)
	: BaseClass<::BRepExtrema_ExtCC>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_ExtCC(*(::BRepExtrema_ExtCC*)parameter1->NativeInstance);
}

void Macad::Occt::BRepExtrema_ExtCC::Initialize(Macad::Occt::TopoDS_Edge^ E2)
{
	((::BRepExtrema_ExtCC*)_NativeInstance)->Initialize(*(::TopoDS_Edge*)E2->NativeInstance);
}

void Macad::Occt::BRepExtrema_ExtCC::Perform(Macad::Occt::TopoDS_Edge^ E1)
{
	((::BRepExtrema_ExtCC*)_NativeInstance)->Perform(*(::TopoDS_Edge*)E1->NativeInstance);
}

bool Macad::Occt::BRepExtrema_ExtCC::IsDone()
{
	return ((::BRepExtrema_ExtCC*)_NativeInstance)->IsDone();
}

int Macad::Occt::BRepExtrema_ExtCC::NbExt()
{
	return ((::BRepExtrema_ExtCC*)_NativeInstance)->NbExt();
}

bool Macad::Occt::BRepExtrema_ExtCC::IsParallel()
{
	return ((::BRepExtrema_ExtCC*)_NativeInstance)->IsParallel();
}

double Macad::Occt::BRepExtrema_ExtCC::SquareDistance(int N)
{
	return ((::BRepExtrema_ExtCC*)_NativeInstance)->SquareDistance(N);
}

double Macad::Occt::BRepExtrema_ExtCC::ParameterOnE1(int N)
{
	return ((::BRepExtrema_ExtCC*)_NativeInstance)->ParameterOnE1(N);
}

Macad::Occt::Pnt Macad::Occt::BRepExtrema_ExtCC::PointOnE1(int N)
{
	return Macad::Occt::Pnt(((::BRepExtrema_ExtCC*)_NativeInstance)->PointOnE1(N));
}

double Macad::Occt::BRepExtrema_ExtCC::ParameterOnE2(int N)
{
	return ((::BRepExtrema_ExtCC*)_NativeInstance)->ParameterOnE2(N);
}

Macad::Occt::Pnt Macad::Occt::BRepExtrema_ExtCC::PointOnE2(int N)
{
	return Macad::Occt::Pnt(((::BRepExtrema_ExtCC*)_NativeInstance)->PointOnE2(N));
}

void Macad::Occt::BRepExtrema_ExtCC::TrimmedSquareDistances(double% dist11, double% distP12, double% distP21, double% distP22, Macad::Occt::Pnt% P11, Macad::Occt::Pnt% P12, Macad::Occt::Pnt% P21, Macad::Occt::Pnt% P22)
{
	pin_ptr<double> pp_dist11 = &dist11;
	pin_ptr<double> pp_distP12 = &distP12;
	pin_ptr<double> pp_distP21 = &distP21;
	pin_ptr<double> pp_distP22 = &distP22;
	pin_ptr<Macad::Occt::Pnt> pp_P11 = &P11;
	pin_ptr<Macad::Occt::Pnt> pp_P12 = &P12;
	pin_ptr<Macad::Occt::Pnt> pp_P21 = &P21;
	pin_ptr<Macad::Occt::Pnt> pp_P22 = &P22;
	((::BRepExtrema_ExtCC*)_NativeInstance)->TrimmedSquareDistances(*(Standard_Real*)pp_dist11, *(Standard_Real*)pp_distP12, *(Standard_Real*)pp_distP21, *(Standard_Real*)pp_distP22, *(gp_Pnt*)pp_P11, *(gp_Pnt*)pp_P12, *(gp_Pnt*)pp_P21, *(gp_Pnt*)pp_P22);
}




//---------------------------------------------------------------------
//  Class  BRepExtrema_ExtCF
//---------------------------------------------------------------------

Macad::Occt::BRepExtrema_ExtCF::BRepExtrema_ExtCF()
	: BaseClass<::BRepExtrema_ExtCF>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_ExtCF();
}

Macad::Occt::BRepExtrema_ExtCF::BRepExtrema_ExtCF(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F)
	: BaseClass<::BRepExtrema_ExtCF>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_ExtCF(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

Macad::Occt::BRepExtrema_ExtCF::BRepExtrema_ExtCF(Macad::Occt::BRepExtrema_ExtCF^ parameter1)
	: BaseClass<::BRepExtrema_ExtCF>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_ExtCF(*(::BRepExtrema_ExtCF*)parameter1->NativeInstance);
}

void Macad::Occt::BRepExtrema_ExtCF::Initialize(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F)
{
	((::BRepExtrema_ExtCF*)_NativeInstance)->Initialize(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

void Macad::Occt::BRepExtrema_ExtCF::Perform(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F)
{
	((::BRepExtrema_ExtCF*)_NativeInstance)->Perform(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance);
}

bool Macad::Occt::BRepExtrema_ExtCF::IsDone()
{
	return ((::BRepExtrema_ExtCF*)_NativeInstance)->IsDone();
}

int Macad::Occt::BRepExtrema_ExtCF::NbExt()
{
	return ((::BRepExtrema_ExtCF*)_NativeInstance)->NbExt();
}

double Macad::Occt::BRepExtrema_ExtCF::SquareDistance(int N)
{
	return ((::BRepExtrema_ExtCF*)_NativeInstance)->SquareDistance(N);
}

bool Macad::Occt::BRepExtrema_ExtCF::IsParallel()
{
	return ((::BRepExtrema_ExtCF*)_NativeInstance)->IsParallel();
}

double Macad::Occt::BRepExtrema_ExtCF::ParameterOnEdge(int N)
{
	return ((::BRepExtrema_ExtCF*)_NativeInstance)->ParameterOnEdge(N);
}

void Macad::Occt::BRepExtrema_ExtCF::ParameterOnFace(int N, double% U, double% V)
{
	pin_ptr<double> pp_U = &U;
	pin_ptr<double> pp_V = &V;
	((::BRepExtrema_ExtCF*)_NativeInstance)->ParameterOnFace(N, *(Standard_Real*)pp_U, *(Standard_Real*)pp_V);
}

Macad::Occt::Pnt Macad::Occt::BRepExtrema_ExtCF::PointOnEdge(int N)
{
	return Macad::Occt::Pnt(((::BRepExtrema_ExtCF*)_NativeInstance)->PointOnEdge(N));
}

Macad::Occt::Pnt Macad::Occt::BRepExtrema_ExtCF::PointOnFace(int N)
{
	return Macad::Occt::Pnt(((::BRepExtrema_ExtCF*)_NativeInstance)->PointOnFace(N));
}




//---------------------------------------------------------------------
//  Class  BRepExtrema_ExtFF
//---------------------------------------------------------------------

Macad::Occt::BRepExtrema_ExtFF::BRepExtrema_ExtFF()
	: BaseClass<::BRepExtrema_ExtFF>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_ExtFF();
}

Macad::Occt::BRepExtrema_ExtFF::BRepExtrema_ExtFF(Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2)
	: BaseClass<::BRepExtrema_ExtFF>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_ExtFF(*(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance);
}

Macad::Occt::BRepExtrema_ExtFF::BRepExtrema_ExtFF(Macad::Occt::BRepExtrema_ExtFF^ parameter1)
	: BaseClass<::BRepExtrema_ExtFF>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_ExtFF(*(::BRepExtrema_ExtFF*)parameter1->NativeInstance);
}

void Macad::Occt::BRepExtrema_ExtFF::Initialize(Macad::Occt::TopoDS_Face^ F2)
{
	((::BRepExtrema_ExtFF*)_NativeInstance)->Initialize(*(::TopoDS_Face*)F2->NativeInstance);
}

void Macad::Occt::BRepExtrema_ExtFF::Perform(Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2)
{
	((::BRepExtrema_ExtFF*)_NativeInstance)->Perform(*(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance);
}

bool Macad::Occt::BRepExtrema_ExtFF::IsDone()
{
	return ((::BRepExtrema_ExtFF*)_NativeInstance)->IsDone();
}

bool Macad::Occt::BRepExtrema_ExtFF::IsParallel()
{
	return ((::BRepExtrema_ExtFF*)_NativeInstance)->IsParallel();
}

int Macad::Occt::BRepExtrema_ExtFF::NbExt()
{
	return ((::BRepExtrema_ExtFF*)_NativeInstance)->NbExt();
}

double Macad::Occt::BRepExtrema_ExtFF::SquareDistance(int N)
{
	return ((::BRepExtrema_ExtFF*)_NativeInstance)->SquareDistance(N);
}

void Macad::Occt::BRepExtrema_ExtFF::ParameterOnFace1(int N, double% U, double% V)
{
	pin_ptr<double> pp_U = &U;
	pin_ptr<double> pp_V = &V;
	((::BRepExtrema_ExtFF*)_NativeInstance)->ParameterOnFace1(N, *(Standard_Real*)pp_U, *(Standard_Real*)pp_V);
}

void Macad::Occt::BRepExtrema_ExtFF::ParameterOnFace2(int N, double% U, double% V)
{
	pin_ptr<double> pp_U = &U;
	pin_ptr<double> pp_V = &V;
	((::BRepExtrema_ExtFF*)_NativeInstance)->ParameterOnFace2(N, *(Standard_Real*)pp_U, *(Standard_Real*)pp_V);
}

Macad::Occt::Pnt Macad::Occt::BRepExtrema_ExtFF::PointOnFace1(int N)
{
	return Macad::Occt::Pnt(((::BRepExtrema_ExtFF*)_NativeInstance)->PointOnFace1(N));
}

Macad::Occt::Pnt Macad::Occt::BRepExtrema_ExtFF::PointOnFace2(int N)
{
	return Macad::Occt::Pnt(((::BRepExtrema_ExtFF*)_NativeInstance)->PointOnFace2(N));
}




//---------------------------------------------------------------------
//  Class  BRepExtrema_ExtPC
//---------------------------------------------------------------------

Macad::Occt::BRepExtrema_ExtPC::BRepExtrema_ExtPC()
	: BaseClass<::BRepExtrema_ExtPC>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_ExtPC();
}

Macad::Occt::BRepExtrema_ExtPC::BRepExtrema_ExtPC(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E)
	: BaseClass<::BRepExtrema_ExtPC>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_ExtPC(*(::TopoDS_Vertex*)V->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance);
}

Macad::Occt::BRepExtrema_ExtPC::BRepExtrema_ExtPC(Macad::Occt::BRepExtrema_ExtPC^ parameter1)
	: BaseClass<::BRepExtrema_ExtPC>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_ExtPC(*(::BRepExtrema_ExtPC*)parameter1->NativeInstance);
}

void Macad::Occt::BRepExtrema_ExtPC::Initialize(Macad::Occt::TopoDS_Edge^ E)
{
	((::BRepExtrema_ExtPC*)_NativeInstance)->Initialize(*(::TopoDS_Edge*)E->NativeInstance);
}

void Macad::Occt::BRepExtrema_ExtPC::Perform(Macad::Occt::TopoDS_Vertex^ V)
{
	((::BRepExtrema_ExtPC*)_NativeInstance)->Perform(*(::TopoDS_Vertex*)V->NativeInstance);
}

bool Macad::Occt::BRepExtrema_ExtPC::IsDone()
{
	return ((::BRepExtrema_ExtPC*)_NativeInstance)->IsDone();
}

int Macad::Occt::BRepExtrema_ExtPC::NbExt()
{
	return ((::BRepExtrema_ExtPC*)_NativeInstance)->NbExt();
}

bool Macad::Occt::BRepExtrema_ExtPC::IsMin(int N)
{
	return ((::BRepExtrema_ExtPC*)_NativeInstance)->IsMin(N);
}

double Macad::Occt::BRepExtrema_ExtPC::SquareDistance(int N)
{
	return ((::BRepExtrema_ExtPC*)_NativeInstance)->SquareDistance(N);
}

double Macad::Occt::BRepExtrema_ExtPC::Parameter(int N)
{
	return ((::BRepExtrema_ExtPC*)_NativeInstance)->Parameter(N);
}

Macad::Occt::Pnt Macad::Occt::BRepExtrema_ExtPC::Point(int N)
{
	return Macad::Occt::Pnt(((::BRepExtrema_ExtPC*)_NativeInstance)->Point(N));
}

void Macad::Occt::BRepExtrema_ExtPC::TrimmedSquareDistances(double% dist1, double% dist2, Macad::Occt::Pnt% pnt1, Macad::Occt::Pnt% pnt2)
{
	pin_ptr<double> pp_dist1 = &dist1;
	pin_ptr<double> pp_dist2 = &dist2;
	pin_ptr<Macad::Occt::Pnt> pp_pnt1 = &pnt1;
	pin_ptr<Macad::Occt::Pnt> pp_pnt2 = &pnt2;
	((::BRepExtrema_ExtPC*)_NativeInstance)->TrimmedSquareDistances(*(Standard_Real*)pp_dist1, *(Standard_Real*)pp_dist2, *(gp_Pnt*)pp_pnt1, *(gp_Pnt*)pp_pnt2);
}




//---------------------------------------------------------------------
//  Class  BRepExtrema_ExtPF
//---------------------------------------------------------------------

Macad::Occt::BRepExtrema_ExtPF::BRepExtrema_ExtPF()
	: BaseClass<::BRepExtrema_ExtPF>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_ExtPF();
}

Macad::Occt::BRepExtrema_ExtPF::BRepExtrema_ExtPF(Macad::Occt::TopoDS_Vertex^ TheVertex, Macad::Occt::TopoDS_Face^ TheFace)
	: BaseClass<::BRepExtrema_ExtPF>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_ExtPF(*(::TopoDS_Vertex*)TheVertex->NativeInstance, *(::TopoDS_Face*)TheFace->NativeInstance, Extrema_ExtFlag_MINMAX, Extrema_ExtAlgo_Grad);
}

Macad::Occt::BRepExtrema_ExtPF::BRepExtrema_ExtPF(Macad::Occt::BRepExtrema_ExtPF^ parameter1)
	: BaseClass<::BRepExtrema_ExtPF>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_ExtPF(*(::BRepExtrema_ExtPF*)parameter1->NativeInstance);
}

void Macad::Occt::BRepExtrema_ExtPF::Initialize(Macad::Occt::TopoDS_Face^ TheFace)
{
	((::BRepExtrema_ExtPF*)_NativeInstance)->Initialize(*(::TopoDS_Face*)TheFace->NativeInstance, Extrema_ExtFlag_MINMAX, Extrema_ExtAlgo_Grad);
}

void Macad::Occt::BRepExtrema_ExtPF::Perform(Macad::Occt::TopoDS_Vertex^ TheVertex, Macad::Occt::TopoDS_Face^ TheFace)
{
	((::BRepExtrema_ExtPF*)_NativeInstance)->Perform(*(::TopoDS_Vertex*)TheVertex->NativeInstance, *(::TopoDS_Face*)TheFace->NativeInstance);
}

bool Macad::Occt::BRepExtrema_ExtPF::IsDone()
{
	return ((::BRepExtrema_ExtPF*)_NativeInstance)->IsDone();
}

int Macad::Occt::BRepExtrema_ExtPF::NbExt()
{
	return ((::BRepExtrema_ExtPF*)_NativeInstance)->NbExt();
}

double Macad::Occt::BRepExtrema_ExtPF::SquareDistance(int N)
{
	return ((::BRepExtrema_ExtPF*)_NativeInstance)->SquareDistance(N);
}

void Macad::Occt::BRepExtrema_ExtPF::Parameter(int N, double% U, double% V)
{
	pin_ptr<double> pp_U = &U;
	pin_ptr<double> pp_V = &V;
	((::BRepExtrema_ExtPF*)_NativeInstance)->Parameter(N, *(Standard_Real*)pp_U, *(Standard_Real*)pp_V);
}

Macad::Occt::Pnt Macad::Occt::BRepExtrema_ExtPF::Point(int N)
{
	return Macad::Occt::Pnt(((::BRepExtrema_ExtPF*)_NativeInstance)->Point(N));
}




//---------------------------------------------------------------------
//  Class  BRepExtrema_Poly
//---------------------------------------------------------------------

Macad::Occt::BRepExtrema_Poly::BRepExtrema_Poly()
	: BaseClass<::BRepExtrema_Poly>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_Poly();
}

Macad::Occt::BRepExtrema_Poly::BRepExtrema_Poly(Macad::Occt::BRepExtrema_Poly^ parameter1)
	: BaseClass<::BRepExtrema_Poly>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_Poly(*(::BRepExtrema_Poly*)parameter1->NativeInstance);
}

bool Macad::Occt::BRepExtrema_Poly::Distance(Macad::Occt::TopoDS_Shape^ S1, Macad::Occt::TopoDS_Shape^ S2, Macad::Occt::Pnt% P1, Macad::Occt::Pnt% P2, double% dist)
{
	pin_ptr<Macad::Occt::Pnt> pp_P1 = &P1;
	pin_ptr<Macad::Occt::Pnt> pp_P2 = &P2;
	pin_ptr<double> pp_dist = &dist;
	return ::BRepExtrema_Poly::Distance(*(::TopoDS_Shape*)S1->NativeInstance, *(::TopoDS_Shape*)S2->NativeInstance, *(gp_Pnt*)pp_P1, *(gp_Pnt*)pp_P2, *(Standard_Real*)pp_dist);
}




//---------------------------------------------------------------------
//  Class  BRepExtrema_ShapeProximity
//---------------------------------------------------------------------

Macad::Occt::BRepExtrema_ShapeProximity::BRepExtrema_ShapeProximity(double theTolerance)
	: BaseClass<::BRepExtrema_ShapeProximity>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_ShapeProximity(theTolerance);
}

Macad::Occt::BRepExtrema_ShapeProximity::BRepExtrema_ShapeProximity(Macad::Occt::TopoDS_Shape^ theShape1, Macad::Occt::TopoDS_Shape^ theShape2, double theTolerance)
	: BaseClass<::BRepExtrema_ShapeProximity>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_ShapeProximity(*(::TopoDS_Shape*)theShape1->NativeInstance, *(::TopoDS_Shape*)theShape2->NativeInstance, theTolerance);
}

Macad::Occt::BRepExtrema_ShapeProximity::BRepExtrema_ShapeProximity(Macad::Occt::TopoDS_Shape^ theShape1, Macad::Occt::TopoDS_Shape^ theShape2)
	: BaseClass<::BRepExtrema_ShapeProximity>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_ShapeProximity(*(::TopoDS_Shape*)theShape1->NativeInstance, *(::TopoDS_Shape*)theShape2->NativeInstance, 0.);
}

Macad::Occt::BRepExtrema_ShapeProximity::BRepExtrema_ShapeProximity(Macad::Occt::BRepExtrema_ShapeProximity^ parameter1)
	: BaseClass<::BRepExtrema_ShapeProximity>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepExtrema_ShapeProximity(*(::BRepExtrema_ShapeProximity*)parameter1->NativeInstance);
}

double Macad::Occt::BRepExtrema_ShapeProximity::Tolerance()
{
	return ((::BRepExtrema_ShapeProximity*)_NativeInstance)->Tolerance();
}

void Macad::Occt::BRepExtrema_ShapeProximity::SetTolerance(double theTolerance)
{
	((::BRepExtrema_ShapeProximity*)_NativeInstance)->SetTolerance(theTolerance);
}

bool Macad::Occt::BRepExtrema_ShapeProximity::LoadShape1(Macad::Occt::TopoDS_Shape^ theShape1)
{
	return ((::BRepExtrema_ShapeProximity*)_NativeInstance)->LoadShape1(*(::TopoDS_Shape*)theShape1->NativeInstance);
}

bool Macad::Occt::BRepExtrema_ShapeProximity::LoadShape2(Macad::Occt::TopoDS_Shape^ theShape2)
{
	return ((::BRepExtrema_ShapeProximity*)_NativeInstance)->LoadShape2(*(::TopoDS_Shape*)theShape2->NativeInstance);
}

void Macad::Occt::BRepExtrema_ShapeProximity::Perform()
{
	((::BRepExtrema_ShapeProximity*)_NativeInstance)->Perform();
}

bool Macad::Occt::BRepExtrema_ShapeProximity::IsDone()
{
	return ((::BRepExtrema_ShapeProximity*)_NativeInstance)->IsDone();
}

Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger^ Macad::Occt::BRepExtrema_ShapeProximity::OverlapSubShapes1()
{
	::BRepExtrema_MapOfIntegerPackedMapOfInteger* _result = new ::BRepExtrema_MapOfIntegerPackedMapOfInteger();
	*_result =  (::BRepExtrema_MapOfIntegerPackedMapOfInteger)((::BRepExtrema_ShapeProximity*)_NativeInstance)->OverlapSubShapes1();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger(_result);
}

Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger^ Macad::Occt::BRepExtrema_ShapeProximity::OverlapSubShapes2()
{
	::BRepExtrema_MapOfIntegerPackedMapOfInteger* _result = new ::BRepExtrema_MapOfIntegerPackedMapOfInteger();
	*_result =  (::BRepExtrema_MapOfIntegerPackedMapOfInteger)((::BRepExtrema_ShapeProximity*)_NativeInstance)->OverlapSubShapes2();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepExtrema_MapOfIntegerPackedMapOfInteger(_result);
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepExtrema_ShapeProximity::GetSubShape1(int theID)
{
	::TopoDS_Face* _result = new ::TopoDS_Face();
	*_result =  (::TopoDS_Face)((::BRepExtrema_ShapeProximity*)_NativeInstance)->GetSubShape1(theID);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepExtrema_ShapeProximity::GetSubShape2(int theID)
{
	::TopoDS_Face* _result = new ::TopoDS_Face();
	*_result =  (::TopoDS_Face)((::BRepExtrema_ShapeProximity*)_NativeInstance)->GetSubShape2(theID);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}




//---------------------------------------------------------------------
//  Class  BRepExtrema_UnCompatibleShape
//---------------------------------------------------------------------

Macad::Occt::BRepExtrema_UnCompatibleShape::BRepExtrema_UnCompatibleShape()
	: Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepExtrema_UnCompatibleShape();
}

Macad::Occt::BRepExtrema_UnCompatibleShape::BRepExtrema_UnCompatibleShape(System::String^ theMessage)
	: Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::BRepExtrema_UnCompatibleShape(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::BRepExtrema_UnCompatibleShape::BRepExtrema_UnCompatibleShape(Macad::Occt::BRepExtrema_UnCompatibleShape^ parameter1)
	: Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepExtrema_UnCompatibleShape(*(::BRepExtrema_UnCompatibleShape*)parameter1->NativeInstance);
}

void Macad::Occt::BRepExtrema_UnCompatibleShape::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::BRepExtrema_UnCompatibleShape::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::BRepExtrema_UnCompatibleShape::Raise()
{
	::BRepExtrema_UnCompatibleShape::Raise("");
}

Macad::Occt::BRepExtrema_UnCompatibleShape^ Macad::Occt::BRepExtrema_UnCompatibleShape::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::BRepExtrema_UnCompatibleShape) _result;
	_result = ::BRepExtrema_UnCompatibleShape::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::BRepExtrema_UnCompatibleShape::CreateDowncasted( _result.get());
}

Macad::Occt::BRepExtrema_UnCompatibleShape^ Macad::Occt::BRepExtrema_UnCompatibleShape::NewInstance()
{
	Handle(::BRepExtrema_UnCompatibleShape) _result;
	_result = ::BRepExtrema_UnCompatibleShape::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::BRepExtrema_UnCompatibleShape::CreateDowncasted( _result.get());
}


Macad::Occt::BRepExtrema_UnCompatibleShape^ Macad::Occt::BRepExtrema_UnCompatibleShape::CreateDowncasted(::BRepExtrema_UnCompatibleShape* instance)
{
	return gcnew Macad::Occt::BRepExtrema_UnCompatibleShape( instance );
}


