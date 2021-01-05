// Generated wrapper code for package BRepOffset

#include "OcctPCH.h"
#include "BRepOffset.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "BRepOffset.h"
#include "Standard.h"
#include "TopoDS.h"
#include "Geom.h"
#include "TopTools.h"
#include "GeomAbs.h"
#include "TopAbs.h"
#include "TCollection.h"
#include "TopLoc.h"
#include "gp.h"
#include "Geom2d.h"


//---------------------------------------------------------------------
//  Class  BRepOffset_ListOfInterval
//---------------------------------------------------------------------

Macad::Occt::BRepOffset_ListOfInterval::BRepOffset_ListOfInterval()
	: BaseClass<::BRepOffset_ListOfInterval>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_ListOfInterval();
}

Macad::Occt::BRepOffset_ListOfInterval::BRepOffset_ListOfInterval(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::BRepOffset_ListOfInterval>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::BRepOffset_ListOfInterval(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::BRepOffset_ListOfInterval::BRepOffset_ListOfInterval(Macad::Occt::BRepOffset_ListOfInterval^ theOther)
	: BaseClass<::BRepOffset_ListOfInterval>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_ListOfInterval(*(::BRepOffset_ListOfInterval*)theOther->NativeInstance);
}

int Macad::Occt::BRepOffset_ListOfInterval::Size()
{
	return ((::BRepOffset_ListOfInterval*)_NativeInstance)->Size();
}

Macad::Occt::BRepOffset_ListOfInterval^ Macad::Occt::BRepOffset_ListOfInterval::Assign(Macad::Occt::BRepOffset_ListOfInterval^ theOther)
{
	::BRepOffset_ListOfInterval* _result = new ::BRepOffset_ListOfInterval();
	*_result = ((::BRepOffset_ListOfInterval*)_NativeInstance)->Assign(*(::BRepOffset_ListOfInterval*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepOffset_ListOfInterval(_result);
}

void Macad::Occt::BRepOffset_ListOfInterval::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::BRepOffset_ListOfInterval*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::BRepOffset_ListOfInterval::Clear()
{
	((::BRepOffset_ListOfInterval*)_NativeInstance)->Clear(0L);
}

Macad::Occt::BRepOffset_Interval^ Macad::Occt::BRepOffset_ListOfInterval::First()
{
	::BRepOffset_Interval* _result = new ::BRepOffset_Interval();
	*_result =  (::BRepOffset_Interval)((::BRepOffset_ListOfInterval*)_NativeInstance)->First();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepOffset_Interval(_result);
}

Macad::Occt::BRepOffset_Interval^ Macad::Occt::BRepOffset_ListOfInterval::Last()
{
	::BRepOffset_Interval* _result = new ::BRepOffset_Interval();
	*_result =  (::BRepOffset_Interval)((::BRepOffset_ListOfInterval*)_NativeInstance)->Last();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepOffset_Interval(_result);
}

Macad::Occt::BRepOffset_Interval^ Macad::Occt::BRepOffset_ListOfInterval::Append(Macad::Occt::BRepOffset_Interval^ theItem)
{
	::BRepOffset_Interval* _result = new ::BRepOffset_Interval();
	*_result = ((::BRepOffset_ListOfInterval*)_NativeInstance)->Append(*(::BRepOffset_Interval*)theItem->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepOffset_Interval(_result);
}

void Macad::Occt::BRepOffset_ListOfInterval::Append(Macad::Occt::BRepOffset_ListOfInterval^ theOther)
{
	((::BRepOffset_ListOfInterval*)_NativeInstance)->Append(*(::BRepOffset_ListOfInterval*)theOther->NativeInstance);
}

Macad::Occt::BRepOffset_Interval^ Macad::Occt::BRepOffset_ListOfInterval::Prepend(Macad::Occt::BRepOffset_Interval^ theItem)
{
	::BRepOffset_Interval* _result = new ::BRepOffset_Interval();
	*_result = ((::BRepOffset_ListOfInterval*)_NativeInstance)->Prepend(*(::BRepOffset_Interval*)theItem->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepOffset_Interval(_result);
}

void Macad::Occt::BRepOffset_ListOfInterval::Prepend(Macad::Occt::BRepOffset_ListOfInterval^ theOther)
{
	((::BRepOffset_ListOfInterval*)_NativeInstance)->Prepend(*(::BRepOffset_ListOfInterval*)theOther->NativeInstance);
}

void Macad::Occt::BRepOffset_ListOfInterval::RemoveFirst()
{
	((::BRepOffset_ListOfInterval*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::BRepOffset_ListOfInterval::Reverse()
{
	((::BRepOffset_ListOfInterval*)_NativeInstance)->Reverse();
}




//---------------------------------------------------------------------
//  Class  BRepOffset_DataMapOfShapeListOfInterval
//---------------------------------------------------------------------

Macad::Occt::BRepOffset_DataMapOfShapeListOfInterval::BRepOffset_DataMapOfShapeListOfInterval()
	: BaseClass<::BRepOffset_DataMapOfShapeListOfInterval>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_DataMapOfShapeListOfInterval();
}

Macad::Occt::BRepOffset_DataMapOfShapeListOfInterval::BRepOffset_DataMapOfShapeListOfInterval(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::BRepOffset_DataMapOfShapeListOfInterval>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::BRepOffset_DataMapOfShapeListOfInterval(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::BRepOffset_DataMapOfShapeListOfInterval::BRepOffset_DataMapOfShapeListOfInterval(int theNbBuckets)
	: BaseClass<::BRepOffset_DataMapOfShapeListOfInterval>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_DataMapOfShapeListOfInterval(theNbBuckets, 0L);
}

Macad::Occt::BRepOffset_DataMapOfShapeListOfInterval::BRepOffset_DataMapOfShapeListOfInterval(Macad::Occt::BRepOffset_DataMapOfShapeListOfInterval^ theOther)
	: BaseClass<::BRepOffset_DataMapOfShapeListOfInterval>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_DataMapOfShapeListOfInterval(*(::BRepOffset_DataMapOfShapeListOfInterval*)theOther->NativeInstance);
}

void Macad::Occt::BRepOffset_DataMapOfShapeListOfInterval::Exchange(Macad::Occt::BRepOffset_DataMapOfShapeListOfInterval^ theOther)
{
	((::BRepOffset_DataMapOfShapeListOfInterval*)_NativeInstance)->Exchange(*(::BRepOffset_DataMapOfShapeListOfInterval*)theOther->NativeInstance);
}

Macad::Occt::BRepOffset_DataMapOfShapeListOfInterval^ Macad::Occt::BRepOffset_DataMapOfShapeListOfInterval::Assign(Macad::Occt::BRepOffset_DataMapOfShapeListOfInterval^ theOther)
{
	::BRepOffset_DataMapOfShapeListOfInterval* _result = new ::BRepOffset_DataMapOfShapeListOfInterval();
	*_result = ((::BRepOffset_DataMapOfShapeListOfInterval*)_NativeInstance)->Assign(*(::BRepOffset_DataMapOfShapeListOfInterval*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepOffset_DataMapOfShapeListOfInterval(_result);
}

bool Macad::Occt::BRepOffset_DataMapOfShapeListOfInterval::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::BRepOffset_DataMapOfShapeListOfInterval*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
}

bool Macad::Occt::BRepOffset_DataMapOfShapeListOfInterval::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::BRepOffset_DataMapOfShapeListOfInterval*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
}

void Macad::Occt::BRepOffset_DataMapOfShapeListOfInterval::Clear(bool doReleaseMemory)
{
	((::BRepOffset_DataMapOfShapeListOfInterval*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::BRepOffset_DataMapOfShapeListOfInterval::Clear()
{
	((::BRepOffset_DataMapOfShapeListOfInterval*)_NativeInstance)->Clear(true);
}

void Macad::Occt::BRepOffset_DataMapOfShapeListOfInterval::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::BRepOffset_DataMapOfShapeListOfInterval*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::BRepOffset_DataMapOfShapeListOfInterval::Size()
{
	return ((::BRepOffset_DataMapOfShapeListOfInterval*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  BRepOffset_DataMapOfShapeOffset
//---------------------------------------------------------------------

Macad::Occt::BRepOffset_DataMapOfShapeOffset::BRepOffset_DataMapOfShapeOffset()
	: BaseClass<::BRepOffset_DataMapOfShapeOffset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_DataMapOfShapeOffset();
}

Macad::Occt::BRepOffset_DataMapOfShapeOffset::BRepOffset_DataMapOfShapeOffset(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::BRepOffset_DataMapOfShapeOffset>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::BRepOffset_DataMapOfShapeOffset(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::BRepOffset_DataMapOfShapeOffset::BRepOffset_DataMapOfShapeOffset(int theNbBuckets)
	: BaseClass<::BRepOffset_DataMapOfShapeOffset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_DataMapOfShapeOffset(theNbBuckets, 0L);
}

Macad::Occt::BRepOffset_DataMapOfShapeOffset::BRepOffset_DataMapOfShapeOffset(Macad::Occt::BRepOffset_DataMapOfShapeOffset^ theOther)
	: BaseClass<::BRepOffset_DataMapOfShapeOffset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_DataMapOfShapeOffset(*(::BRepOffset_DataMapOfShapeOffset*)theOther->NativeInstance);
}

void Macad::Occt::BRepOffset_DataMapOfShapeOffset::Exchange(Macad::Occt::BRepOffset_DataMapOfShapeOffset^ theOther)
{
	((::BRepOffset_DataMapOfShapeOffset*)_NativeInstance)->Exchange(*(::BRepOffset_DataMapOfShapeOffset*)theOther->NativeInstance);
}

Macad::Occt::BRepOffset_DataMapOfShapeOffset^ Macad::Occt::BRepOffset_DataMapOfShapeOffset::Assign(Macad::Occt::BRepOffset_DataMapOfShapeOffset^ theOther)
{
	::BRepOffset_DataMapOfShapeOffset* _result = new ::BRepOffset_DataMapOfShapeOffset();
	*_result = ((::BRepOffset_DataMapOfShapeOffset*)_NativeInstance)->Assign(*(::BRepOffset_DataMapOfShapeOffset*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepOffset_DataMapOfShapeOffset(_result);
}

Macad::Occt::BRepOffset_Offset^ Macad::Occt::BRepOffset_DataMapOfShapeOffset::Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::BRepOffset_Offset^ theItem)
{
	::BRepOffset_Offset* _result;
	_result = (::BRepOffset_Offset*)((::BRepOffset_DataMapOfShapeOffset*)_NativeInstance)->Bound(*(::TopoDS_Shape*)theKey->NativeInstance, *(::BRepOffset_Offset*)theItem->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepOffset_Offset(_result);
}

bool Macad::Occt::BRepOffset_DataMapOfShapeOffset::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::BRepOffset_DataMapOfShapeOffset*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
}

bool Macad::Occt::BRepOffset_DataMapOfShapeOffset::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
	return ((::BRepOffset_DataMapOfShapeOffset*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
}

Macad::Occt::BRepOffset_Offset^ Macad::Occt::BRepOffset_DataMapOfShapeOffset::Seek(Macad::Occt::TopoDS_Shape^ theKey)
{
	::BRepOffset_Offset* _result;
	_result = (::BRepOffset_Offset*)((::BRepOffset_DataMapOfShapeOffset*)_NativeInstance)->Seek(*(::TopoDS_Shape*)theKey->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepOffset_Offset(_result);
}

Macad::Occt::BRepOffset_Offset^ Macad::Occt::BRepOffset_DataMapOfShapeOffset::Find(Macad::Occt::TopoDS_Shape^ theKey)
{
	::BRepOffset_Offset* _result = new ::BRepOffset_Offset();
	*_result =  (::BRepOffset_Offset)((::BRepOffset_DataMapOfShapeOffset*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepOffset_Offset(_result);
}

bool Macad::Occt::BRepOffset_DataMapOfShapeOffset::Find(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::BRepOffset_Offset^ theValue)
{
	return ((::BRepOffset_DataMapOfShapeOffset*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance, *(::BRepOffset_Offset*)theValue->NativeInstance);
}

Macad::Occt::BRepOffset_Offset^ Macad::Occt::BRepOffset_DataMapOfShapeOffset::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey)
{
	::BRepOffset_Offset* _result;
	_result = (::BRepOffset_Offset*)((::BRepOffset_DataMapOfShapeOffset*)_NativeInstance)->ChangeSeek(*(::TopoDS_Shape*)theKey->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepOffset_Offset(_result);
}

Macad::Occt::BRepOffset_Offset^ Macad::Occt::BRepOffset_DataMapOfShapeOffset::ChangeFind(Macad::Occt::TopoDS_Shape^ theKey)
{
	::BRepOffset_Offset* _result = new ::BRepOffset_Offset();
	*_result = ((::BRepOffset_DataMapOfShapeOffset*)_NativeInstance)->ChangeFind(*(::TopoDS_Shape*)theKey->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepOffset_Offset(_result);
}

void Macad::Occt::BRepOffset_DataMapOfShapeOffset::Clear(bool doReleaseMemory)
{
	((::BRepOffset_DataMapOfShapeOffset*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::BRepOffset_DataMapOfShapeOffset::Clear()
{
	((::BRepOffset_DataMapOfShapeOffset*)_NativeInstance)->Clear(true);
}

void Macad::Occt::BRepOffset_DataMapOfShapeOffset::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::BRepOffset_DataMapOfShapeOffset*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::BRepOffset_DataMapOfShapeOffset::Size()
{
	return ((::BRepOffset_DataMapOfShapeOffset*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  BRepOffset
//---------------------------------------------------------------------

Macad::Occt::BRepOffset::BRepOffset()
	: BaseClass<::BRepOffset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset();
}

Macad::Occt::BRepOffset::BRepOffset(Macad::Occt::BRepOffset^ parameter1)
	: BaseClass<::BRepOffset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset(*(::BRepOffset*)parameter1->NativeInstance);
}

Macad::Occt::Geom_Surface^ Macad::Occt::BRepOffset::Surface(Macad::Occt::Geom_Surface^ Surface, double Offset, Macad::Occt::BRepOffset_Status% theStatus, bool allowC0)
{
	Handle(::Geom_Surface) h_Surface = Surface->NativeInstance;
	pin_ptr<Macad::Occt::BRepOffset_Status> pp_theStatus = &theStatus;
	Handle(::Geom_Surface) _result;
	_result = ::BRepOffset::Surface(h_Surface, Offset, *(::BRepOffset_Status*)pp_theStatus, allowC0);
	Surface->NativeInstance = h_Surface.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_Surface^ Macad::Occt::BRepOffset::Surface(Macad::Occt::Geom_Surface^ Surface, double Offset, Macad::Occt::BRepOffset_Status% theStatus)
{
	Handle(::Geom_Surface) h_Surface = Surface->NativeInstance;
	pin_ptr<Macad::Occt::BRepOffset_Status> pp_theStatus = &theStatus;
	Handle(::Geom_Surface) _result;
	_result = ::BRepOffset::Surface(h_Surface, Offset, *(::BRepOffset_Status*)pp_theStatus, false);
	Surface->NativeInstance = h_Surface.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted( _result.get());
}

Macad::Occt::Geom_Surface^ Macad::Occt::BRepOffset::CollapseSingularities(Macad::Occt::Geom_Surface^ theSurface, Macad::Occt::TopoDS_Face^ theFace, double thePrecision)
{
	Handle(::Geom_Surface) h_theSurface = theSurface->NativeInstance;
	Handle(::Geom_Surface) _result;
	_result = ::BRepOffset::CollapseSingularities(h_theSurface, *(::TopoDS_Face*)theFace->NativeInstance, thePrecision);
	theSurface->NativeInstance = h_theSurface.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::Geom_Surface::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  BRepOffset_Interval
//---------------------------------------------------------------------

Macad::Occt::BRepOffset_Interval::BRepOffset_Interval()
	: BaseClass<::BRepOffset_Interval>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_Interval();
}

Macad::Occt::BRepOffset_Interval::BRepOffset_Interval(Macad::Occt::BRepOffset_Interval^ parameter1)
	: BaseClass<::BRepOffset_Interval>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_Interval(*(::BRepOffset_Interval*)parameter1->NativeInstance);
}

void Macad::Occt::BRepOffset_Interval::First(double U)
{
	((::BRepOffset_Interval*)_NativeInstance)->First(U);
}

void Macad::Occt::BRepOffset_Interval::Last(double U)
{
	((::BRepOffset_Interval*)_NativeInstance)->Last(U);
}

double Macad::Occt::BRepOffset_Interval::First()
{
	return ((::BRepOffset_Interval*)_NativeInstance)->First();
}

double Macad::Occt::BRepOffset_Interval::Last()
{
	return ((::BRepOffset_Interval*)_NativeInstance)->Last();
}




//---------------------------------------------------------------------
//  Class  BRepOffset_Analyse
//---------------------------------------------------------------------

Macad::Occt::BRepOffset_Analyse::BRepOffset_Analyse()
	: BaseClass<::BRepOffset_Analyse>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_Analyse();
}

Macad::Occt::BRepOffset_Analyse::BRepOffset_Analyse(Macad::Occt::TopoDS_Shape^ theS, double theAngle)
	: BaseClass<::BRepOffset_Analyse>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_Analyse(*(::TopoDS_Shape*)theS->NativeInstance, theAngle);
}

Macad::Occt::BRepOffset_Analyse::BRepOffset_Analyse(Macad::Occt::BRepOffset_Analyse^ parameter1)
	: BaseClass<::BRepOffset_Analyse>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_Analyse(*(::BRepOffset_Analyse*)parameter1->NativeInstance);
}

void Macad::Occt::BRepOffset_Analyse::Perform(Macad::Occt::TopoDS_Shape^ theS, double theAngle)
{
	((::BRepOffset_Analyse*)_NativeInstance)->Perform(*(::TopoDS_Shape*)theS->NativeInstance, theAngle);
}

bool Macad::Occt::BRepOffset_Analyse::IsDone()
{
	return ((::BRepOffset_Analyse*)_NativeInstance)->IsDone();
}

Macad::Occt::BRepOffset_ListOfInterval^ Macad::Occt::BRepOffset_Analyse::Type(Macad::Occt::TopoDS_Edge^ theE)
{
	::BRepOffset_ListOfInterval* _result = new ::BRepOffset_ListOfInterval();
	*_result =  (::BRepOffset_ListOfInterval)((::BRepOffset_Analyse*)_NativeInstance)->Type(*(::TopoDS_Edge*)theE->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepOffset_ListOfInterval(_result);
}

void Macad::Occt::BRepOffset_Analyse::TangentEdges(Macad::Occt::TopoDS_Edge^ theEdge, Macad::Occt::TopoDS_Vertex^ theVertex, Macad::Occt::TopTools_ListOfShape^ theEdges)
{
	((::BRepOffset_Analyse*)_NativeInstance)->TangentEdges(*(::TopoDS_Edge*)theEdge->NativeInstance, *(::TopoDS_Vertex*)theVertex->NativeInstance, *(::TopTools_ListOfShape*)theEdges->NativeInstance);
}

bool Macad::Occt::BRepOffset_Analyse::HasAncestor(Macad::Occt::TopoDS_Shape^ theS)
{
	return ((::BRepOffset_Analyse*)_NativeInstance)->HasAncestor(*(::TopoDS_Shape*)theS->NativeInstance);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepOffset_Analyse::Ancestors(Macad::Occt::TopoDS_Shape^ theS)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepOffset_Analyse*)_NativeInstance)->Ancestors(*(::TopoDS_Shape*)theS->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

void Macad::Occt::BRepOffset_Analyse::SetOffsetValue(double theOffset)
{
	((::BRepOffset_Analyse*)_NativeInstance)->SetOffsetValue(theOffset);
}

void Macad::Occt::BRepOffset_Analyse::SetFaceOffsetMap(Macad::Occt::TopTools_DataMapOfShapeReal^ theMap)
{
	((::BRepOffset_Analyse*)_NativeInstance)->SetFaceOffsetMap(*(::TopTools_DataMapOfShapeReal*)theMap->NativeInstance);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepOffset_Analyse::NewFaces()
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepOffset_Analyse*)_NativeInstance)->NewFaces();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepOffset_Analyse::Generated(Macad::Occt::TopoDS_Shape^ theS)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::BRepOffset_Analyse*)_NativeInstance)->Generated(*(::TopoDS_Shape*)theS->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::BRepOffset_Analyse::HasGenerated(Macad::Occt::TopoDS_Shape^ theS)
{
	return ((::BRepOffset_Analyse*)_NativeInstance)->HasGenerated(*(::TopoDS_Shape*)theS->NativeInstance);
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepOffset_Analyse::EdgeReplacement(Macad::Occt::TopoDS_Face^ theFace, Macad::Occt::TopoDS_Edge^ theEdge)
{
	::TopoDS_Edge* _result = new ::TopoDS_Edge();
	*_result =  (::TopoDS_Edge)((::BRepOffset_Analyse*)_NativeInstance)->EdgeReplacement(*(::TopoDS_Face*)theFace->NativeInstance, *(::TopoDS_Edge*)theEdge->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepOffset_Analyse::Descendants(Macad::Occt::TopoDS_Shape^ theS, bool theUpdate)
{
	::TopTools_ListOfShape* _result;
	_result = (::TopTools_ListOfShape*)((::BRepOffset_Analyse*)_NativeInstance)->Descendants(*(::TopoDS_Shape*)theS->NativeInstance, theUpdate);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepOffset_Analyse::Descendants(Macad::Occt::TopoDS_Shape^ theS)
{
	::TopTools_ListOfShape* _result;
	_result = (::TopTools_ListOfShape*)((::BRepOffset_Analyse*)_NativeInstance)->Descendants(*(::TopoDS_Shape*)theS->NativeInstance, false);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

void Macad::Occt::BRepOffset_Analyse::Clear()
{
	((::BRepOffset_Analyse*)_NativeInstance)->Clear();
}




//---------------------------------------------------------------------
//  Class  BRepOffset_Offset
//---------------------------------------------------------------------

Macad::Occt::BRepOffset_Offset::BRepOffset_Offset()
	: BaseClass<::BRepOffset_Offset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_Offset();
}

Macad::Occt::BRepOffset_Offset::BRepOffset_Offset(Macad::Occt::TopoDS_Face^ Face, double Offset, bool OffsetOutside, Macad::Occt::GeomAbs_JoinType JoinType)
	: BaseClass<::BRepOffset_Offset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_Offset(*(::TopoDS_Face*)Face->NativeInstance, Offset, OffsetOutside, (::GeomAbs_JoinType)JoinType);
}

Macad::Occt::BRepOffset_Offset::BRepOffset_Offset(Macad::Occt::TopoDS_Face^ Face, double Offset, bool OffsetOutside)
	: BaseClass<::BRepOffset_Offset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_Offset(*(::TopoDS_Face*)Face->NativeInstance, Offset, OffsetOutside, GeomAbs_Arc);
}

Macad::Occt::BRepOffset_Offset::BRepOffset_Offset(Macad::Occt::TopoDS_Face^ Face, double Offset)
	: BaseClass<::BRepOffset_Offset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_Offset(*(::TopoDS_Face*)Face->NativeInstance, Offset, true, GeomAbs_Arc);
}

Macad::Occt::BRepOffset_Offset::BRepOffset_Offset(Macad::Occt::TopoDS_Face^ Face, double Offset, Macad::Occt::TopTools_DataMapOfShapeShape^ Created, bool OffsetOutside, Macad::Occt::GeomAbs_JoinType JoinType)
	: BaseClass<::BRepOffset_Offset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_Offset(*(::TopoDS_Face*)Face->NativeInstance, Offset, *(::TopTools_DataMapOfShapeShape*)Created->NativeInstance, OffsetOutside, (::GeomAbs_JoinType)JoinType);
}

Macad::Occt::BRepOffset_Offset::BRepOffset_Offset(Macad::Occt::TopoDS_Face^ Face, double Offset, Macad::Occt::TopTools_DataMapOfShapeShape^ Created, bool OffsetOutside)
	: BaseClass<::BRepOffset_Offset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_Offset(*(::TopoDS_Face*)Face->NativeInstance, Offset, *(::TopTools_DataMapOfShapeShape*)Created->NativeInstance, OffsetOutside, GeomAbs_Arc);
}

Macad::Occt::BRepOffset_Offset::BRepOffset_Offset(Macad::Occt::TopoDS_Face^ Face, double Offset, Macad::Occt::TopTools_DataMapOfShapeShape^ Created)
	: BaseClass<::BRepOffset_Offset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_Offset(*(::TopoDS_Face*)Face->NativeInstance, Offset, *(::TopTools_DataMapOfShapeShape*)Created->NativeInstance, true, GeomAbs_Arc);
}

Macad::Occt::BRepOffset_Offset::BRepOffset_Offset(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, bool Polynomial, double Tol, Macad::Occt::GeomAbs_Shape Conti)
	: BaseClass<::BRepOffset_Offset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_Offset(*(::TopoDS_Edge*)Path->NativeInstance, *(::TopoDS_Edge*)Edge1->NativeInstance, *(::TopoDS_Edge*)Edge2->NativeInstance, Offset, Polynomial, Tol, (::GeomAbs_Shape)Conti);
}

Macad::Occt::BRepOffset_Offset::BRepOffset_Offset(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, bool Polynomial, double Tol)
	: BaseClass<::BRepOffset_Offset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_Offset(*(::TopoDS_Edge*)Path->NativeInstance, *(::TopoDS_Edge*)Edge1->NativeInstance, *(::TopoDS_Edge*)Edge2->NativeInstance, Offset, Polynomial, Tol, GeomAbs_C1);
}

Macad::Occt::BRepOffset_Offset::BRepOffset_Offset(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, bool Polynomial)
	: BaseClass<::BRepOffset_Offset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_Offset(*(::TopoDS_Edge*)Path->NativeInstance, *(::TopoDS_Edge*)Edge1->NativeInstance, *(::TopoDS_Edge*)Edge2->NativeInstance, Offset, Polynomial, 1.0E-4, GeomAbs_C1);
}

Macad::Occt::BRepOffset_Offset::BRepOffset_Offset(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset)
	: BaseClass<::BRepOffset_Offset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_Offset(*(::TopoDS_Edge*)Path->NativeInstance, *(::TopoDS_Edge*)Edge1->NativeInstance, *(::TopoDS_Edge*)Edge2->NativeInstance, Offset, false, 1.0E-4, GeomAbs_C1);
}

Macad::Occt::BRepOffset_Offset::BRepOffset_Offset(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, Macad::Occt::TopoDS_Edge^ FirstEdge, Macad::Occt::TopoDS_Edge^ LastEdge, bool Polynomial, double Tol, Macad::Occt::GeomAbs_Shape Conti)
	: BaseClass<::BRepOffset_Offset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_Offset(*(::TopoDS_Edge*)Path->NativeInstance, *(::TopoDS_Edge*)Edge1->NativeInstance, *(::TopoDS_Edge*)Edge2->NativeInstance, Offset, *(::TopoDS_Edge*)FirstEdge->NativeInstance, *(::TopoDS_Edge*)LastEdge->NativeInstance, Polynomial, Tol, (::GeomAbs_Shape)Conti);
}

Macad::Occt::BRepOffset_Offset::BRepOffset_Offset(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, Macad::Occt::TopoDS_Edge^ FirstEdge, Macad::Occt::TopoDS_Edge^ LastEdge, bool Polynomial, double Tol)
	: BaseClass<::BRepOffset_Offset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_Offset(*(::TopoDS_Edge*)Path->NativeInstance, *(::TopoDS_Edge*)Edge1->NativeInstance, *(::TopoDS_Edge*)Edge2->NativeInstance, Offset, *(::TopoDS_Edge*)FirstEdge->NativeInstance, *(::TopoDS_Edge*)LastEdge->NativeInstance, Polynomial, Tol, GeomAbs_C1);
}

Macad::Occt::BRepOffset_Offset::BRepOffset_Offset(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, Macad::Occt::TopoDS_Edge^ FirstEdge, Macad::Occt::TopoDS_Edge^ LastEdge, bool Polynomial)
	: BaseClass<::BRepOffset_Offset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_Offset(*(::TopoDS_Edge*)Path->NativeInstance, *(::TopoDS_Edge*)Edge1->NativeInstance, *(::TopoDS_Edge*)Edge2->NativeInstance, Offset, *(::TopoDS_Edge*)FirstEdge->NativeInstance, *(::TopoDS_Edge*)LastEdge->NativeInstance, Polynomial, 1.0E-4, GeomAbs_C1);
}

Macad::Occt::BRepOffset_Offset::BRepOffset_Offset(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, Macad::Occt::TopoDS_Edge^ FirstEdge, Macad::Occt::TopoDS_Edge^ LastEdge)
	: BaseClass<::BRepOffset_Offset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_Offset(*(::TopoDS_Edge*)Path->NativeInstance, *(::TopoDS_Edge*)Edge1->NativeInstance, *(::TopoDS_Edge*)Edge2->NativeInstance, Offset, *(::TopoDS_Edge*)FirstEdge->NativeInstance, *(::TopoDS_Edge*)LastEdge->NativeInstance, false, 1.0E-4, GeomAbs_C1);
}

Macad::Occt::BRepOffset_Offset::BRepOffset_Offset(Macad::Occt::TopoDS_Vertex^ Vertex, Macad::Occt::TopTools_ListOfShape^ LEdge, double Offset, bool Polynomial, double Tol, Macad::Occt::GeomAbs_Shape Conti)
	: BaseClass<::BRepOffset_Offset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_Offset(*(::TopoDS_Vertex*)Vertex->NativeInstance, *(::TopTools_ListOfShape*)LEdge->NativeInstance, Offset, Polynomial, Tol, (::GeomAbs_Shape)Conti);
}

Macad::Occt::BRepOffset_Offset::BRepOffset_Offset(Macad::Occt::TopoDS_Vertex^ Vertex, Macad::Occt::TopTools_ListOfShape^ LEdge, double Offset, bool Polynomial, double Tol)
	: BaseClass<::BRepOffset_Offset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_Offset(*(::TopoDS_Vertex*)Vertex->NativeInstance, *(::TopTools_ListOfShape*)LEdge->NativeInstance, Offset, Polynomial, Tol, GeomAbs_C1);
}

Macad::Occt::BRepOffset_Offset::BRepOffset_Offset(Macad::Occt::TopoDS_Vertex^ Vertex, Macad::Occt::TopTools_ListOfShape^ LEdge, double Offset, bool Polynomial)
	: BaseClass<::BRepOffset_Offset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_Offset(*(::TopoDS_Vertex*)Vertex->NativeInstance, *(::TopTools_ListOfShape*)LEdge->NativeInstance, Offset, Polynomial, 1.0E-4, GeomAbs_C1);
}

Macad::Occt::BRepOffset_Offset::BRepOffset_Offset(Macad::Occt::TopoDS_Vertex^ Vertex, Macad::Occt::TopTools_ListOfShape^ LEdge, double Offset)
	: BaseClass<::BRepOffset_Offset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_Offset(*(::TopoDS_Vertex*)Vertex->NativeInstance, *(::TopTools_ListOfShape*)LEdge->NativeInstance, Offset, false, 1.0E-4, GeomAbs_C1);
}

Macad::Occt::BRepOffset_Offset::BRepOffset_Offset(Macad::Occt::BRepOffset_Offset^ parameter1)
	: BaseClass<::BRepOffset_Offset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_Offset(*(::BRepOffset_Offset*)parameter1->NativeInstance);
}

void Macad::Occt::BRepOffset_Offset::Init(Macad::Occt::TopoDS_Face^ Face, double Offset, bool OffsetOutside, Macad::Occt::GeomAbs_JoinType JoinType)
{
	((::BRepOffset_Offset*)_NativeInstance)->Init(*(::TopoDS_Face*)Face->NativeInstance, Offset, OffsetOutside, (::GeomAbs_JoinType)JoinType);
}

void Macad::Occt::BRepOffset_Offset::Init(Macad::Occt::TopoDS_Face^ Face, double Offset, bool OffsetOutside)
{
	((::BRepOffset_Offset*)_NativeInstance)->Init(*(::TopoDS_Face*)Face->NativeInstance, Offset, OffsetOutside, GeomAbs_Arc);
}

void Macad::Occt::BRepOffset_Offset::Init(Macad::Occt::TopoDS_Face^ Face, double Offset)
{
	((::BRepOffset_Offset*)_NativeInstance)->Init(*(::TopoDS_Face*)Face->NativeInstance, Offset, true, GeomAbs_Arc);
}

void Macad::Occt::BRepOffset_Offset::Init(Macad::Occt::TopoDS_Face^ Face, double Offset, Macad::Occt::TopTools_DataMapOfShapeShape^ Created, bool OffsetOutside, Macad::Occt::GeomAbs_JoinType JoinType)
{
	((::BRepOffset_Offset*)_NativeInstance)->Init(*(::TopoDS_Face*)Face->NativeInstance, Offset, *(::TopTools_DataMapOfShapeShape*)Created->NativeInstance, OffsetOutside, (::GeomAbs_JoinType)JoinType);
}

void Macad::Occt::BRepOffset_Offset::Init(Macad::Occt::TopoDS_Face^ Face, double Offset, Macad::Occt::TopTools_DataMapOfShapeShape^ Created, bool OffsetOutside)
{
	((::BRepOffset_Offset*)_NativeInstance)->Init(*(::TopoDS_Face*)Face->NativeInstance, Offset, *(::TopTools_DataMapOfShapeShape*)Created->NativeInstance, OffsetOutside, GeomAbs_Arc);
}

void Macad::Occt::BRepOffset_Offset::Init(Macad::Occt::TopoDS_Face^ Face, double Offset, Macad::Occt::TopTools_DataMapOfShapeShape^ Created)
{
	((::BRepOffset_Offset*)_NativeInstance)->Init(*(::TopoDS_Face*)Face->NativeInstance, Offset, *(::TopTools_DataMapOfShapeShape*)Created->NativeInstance, true, GeomAbs_Arc);
}

void Macad::Occt::BRepOffset_Offset::Init(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, bool Polynomial, double Tol, Macad::Occt::GeomAbs_Shape Conti)
{
	((::BRepOffset_Offset*)_NativeInstance)->Init(*(::TopoDS_Edge*)Path->NativeInstance, *(::TopoDS_Edge*)Edge1->NativeInstance, *(::TopoDS_Edge*)Edge2->NativeInstance, Offset, Polynomial, Tol, (::GeomAbs_Shape)Conti);
}

void Macad::Occt::BRepOffset_Offset::Init(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, bool Polynomial, double Tol)
{
	((::BRepOffset_Offset*)_NativeInstance)->Init(*(::TopoDS_Edge*)Path->NativeInstance, *(::TopoDS_Edge*)Edge1->NativeInstance, *(::TopoDS_Edge*)Edge2->NativeInstance, Offset, Polynomial, Tol, GeomAbs_C1);
}

void Macad::Occt::BRepOffset_Offset::Init(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, bool Polynomial)
{
	((::BRepOffset_Offset*)_NativeInstance)->Init(*(::TopoDS_Edge*)Path->NativeInstance, *(::TopoDS_Edge*)Edge1->NativeInstance, *(::TopoDS_Edge*)Edge2->NativeInstance, Offset, Polynomial, 1.0E-4, GeomAbs_C1);
}

void Macad::Occt::BRepOffset_Offset::Init(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset)
{
	((::BRepOffset_Offset*)_NativeInstance)->Init(*(::TopoDS_Edge*)Path->NativeInstance, *(::TopoDS_Edge*)Edge1->NativeInstance, *(::TopoDS_Edge*)Edge2->NativeInstance, Offset, false, 1.0E-4, GeomAbs_C1);
}

void Macad::Occt::BRepOffset_Offset::Init(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, Macad::Occt::TopoDS_Edge^ FirstEdge, Macad::Occt::TopoDS_Edge^ LastEdge, bool Polynomial, double Tol, Macad::Occt::GeomAbs_Shape Conti)
{
	((::BRepOffset_Offset*)_NativeInstance)->Init(*(::TopoDS_Edge*)Path->NativeInstance, *(::TopoDS_Edge*)Edge1->NativeInstance, *(::TopoDS_Edge*)Edge2->NativeInstance, Offset, *(::TopoDS_Edge*)FirstEdge->NativeInstance, *(::TopoDS_Edge*)LastEdge->NativeInstance, Polynomial, Tol, (::GeomAbs_Shape)Conti);
}

void Macad::Occt::BRepOffset_Offset::Init(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, Macad::Occt::TopoDS_Edge^ FirstEdge, Macad::Occt::TopoDS_Edge^ LastEdge, bool Polynomial, double Tol)
{
	((::BRepOffset_Offset*)_NativeInstance)->Init(*(::TopoDS_Edge*)Path->NativeInstance, *(::TopoDS_Edge*)Edge1->NativeInstance, *(::TopoDS_Edge*)Edge2->NativeInstance, Offset, *(::TopoDS_Edge*)FirstEdge->NativeInstance, *(::TopoDS_Edge*)LastEdge->NativeInstance, Polynomial, Tol, GeomAbs_C1);
}

void Macad::Occt::BRepOffset_Offset::Init(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, Macad::Occt::TopoDS_Edge^ FirstEdge, Macad::Occt::TopoDS_Edge^ LastEdge, bool Polynomial)
{
	((::BRepOffset_Offset*)_NativeInstance)->Init(*(::TopoDS_Edge*)Path->NativeInstance, *(::TopoDS_Edge*)Edge1->NativeInstance, *(::TopoDS_Edge*)Edge2->NativeInstance, Offset, *(::TopoDS_Edge*)FirstEdge->NativeInstance, *(::TopoDS_Edge*)LastEdge->NativeInstance, Polynomial, 1.0E-4, GeomAbs_C1);
}

void Macad::Occt::BRepOffset_Offset::Init(Macad::Occt::TopoDS_Edge^ Path, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, double Offset, Macad::Occt::TopoDS_Edge^ FirstEdge, Macad::Occt::TopoDS_Edge^ LastEdge)
{
	((::BRepOffset_Offset*)_NativeInstance)->Init(*(::TopoDS_Edge*)Path->NativeInstance, *(::TopoDS_Edge*)Edge1->NativeInstance, *(::TopoDS_Edge*)Edge2->NativeInstance, Offset, *(::TopoDS_Edge*)FirstEdge->NativeInstance, *(::TopoDS_Edge*)LastEdge->NativeInstance, false, 1.0E-4, GeomAbs_C1);
}

void Macad::Occt::BRepOffset_Offset::Init(Macad::Occt::TopoDS_Vertex^ Vertex, Macad::Occt::TopTools_ListOfShape^ LEdge, double Offset, bool Polynomial, double Tol, Macad::Occt::GeomAbs_Shape Conti)
{
	((::BRepOffset_Offset*)_NativeInstance)->Init(*(::TopoDS_Vertex*)Vertex->NativeInstance, *(::TopTools_ListOfShape*)LEdge->NativeInstance, Offset, Polynomial, Tol, (::GeomAbs_Shape)Conti);
}

void Macad::Occt::BRepOffset_Offset::Init(Macad::Occt::TopoDS_Vertex^ Vertex, Macad::Occt::TopTools_ListOfShape^ LEdge, double Offset, bool Polynomial, double Tol)
{
	((::BRepOffset_Offset*)_NativeInstance)->Init(*(::TopoDS_Vertex*)Vertex->NativeInstance, *(::TopTools_ListOfShape*)LEdge->NativeInstance, Offset, Polynomial, Tol, GeomAbs_C1);
}

void Macad::Occt::BRepOffset_Offset::Init(Macad::Occt::TopoDS_Vertex^ Vertex, Macad::Occt::TopTools_ListOfShape^ LEdge, double Offset, bool Polynomial)
{
	((::BRepOffset_Offset*)_NativeInstance)->Init(*(::TopoDS_Vertex*)Vertex->NativeInstance, *(::TopTools_ListOfShape*)LEdge->NativeInstance, Offset, Polynomial, 1.0E-4, GeomAbs_C1);
}

void Macad::Occt::BRepOffset_Offset::Init(Macad::Occt::TopoDS_Vertex^ Vertex, Macad::Occt::TopTools_ListOfShape^ LEdge, double Offset)
{
	((::BRepOffset_Offset*)_NativeInstance)->Init(*(::TopoDS_Vertex*)Vertex->NativeInstance, *(::TopTools_ListOfShape*)LEdge->NativeInstance, Offset, false, 1.0E-4, GeomAbs_C1);
}

void Macad::Occt::BRepOffset_Offset::Init(Macad::Occt::TopoDS_Edge^ Edge, double Offset)
{
	((::BRepOffset_Offset*)_NativeInstance)->Init(*(::TopoDS_Edge*)Edge->NativeInstance, Offset);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepOffset_Offset::InitialShape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BRepOffset_Offset*)_NativeInstance)->InitialShape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepOffset_Offset::Face()
{
	::TopoDS_Face* _result = new ::TopoDS_Face();
	*_result =  (::TopoDS_Face)((::BRepOffset_Offset*)_NativeInstance)->Face();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepOffset_Offset::Generated(Macad::Occt::TopoDS_Shape^ Shape)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ((::BRepOffset_Offset*)_NativeInstance)->Generated(*(::TopoDS_Shape*)Shape->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::BRepOffset_Status Macad::Occt::BRepOffset_Offset::Status()
{
	return (Macad::Occt::BRepOffset_Status)((::BRepOffset_Offset*)_NativeInstance)->Status();
}




//---------------------------------------------------------------------
//  Class  BRepOffset_Inter2d
//---------------------------------------------------------------------

Macad::Occt::BRepOffset_Inter2d::BRepOffset_Inter2d()
	: BaseClass<::BRepOffset_Inter2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_Inter2d();
}

Macad::Occt::BRepOffset_Inter2d::BRepOffset_Inter2d(Macad::Occt::BRepOffset_Inter2d^ parameter1)
	: BaseClass<::BRepOffset_Inter2d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_Inter2d(*(::BRepOffset_Inter2d*)parameter1->NativeInstance);
}

bool Macad::Occt::BRepOffset_Inter2d::ExtentEdge(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Edge^ NE, double theOffset)
{
	return ::BRepOffset_Inter2d::ExtentEdge(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Edge*)NE->NativeInstance, theOffset);
}




//---------------------------------------------------------------------
//  Class  BRepOffset_Inter3d
//---------------------------------------------------------------------

Macad::Occt::BRepOffset_Inter3d::BRepOffset_Inter3d(Macad::Occt::BRepOffset_Inter3d^ parameter1)
	: BaseClass<::BRepOffset_Inter3d>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_Inter3d(*(::BRepOffset_Inter3d*)parameter1->NativeInstance);
}

void Macad::Occt::BRepOffset_Inter3d::ConnexIntByInt(Macad::Occt::TopoDS_Shape^ SI, Macad::Occt::BRepOffset_DataMapOfShapeOffset^ MapSF, Macad::Occt::BRepOffset_Analyse^ A, Macad::Occt::TopTools_DataMapOfShapeShape^ MES, Macad::Occt::TopTools_DataMapOfShapeShape^ Build, Macad::Occt::TopTools_ListOfShape^ Failed, bool bIsPlanar)
{
	((::BRepOffset_Inter3d*)_NativeInstance)->ConnexIntByInt(*(::TopoDS_Shape*)SI->NativeInstance, *(::BRepOffset_DataMapOfShapeOffset*)MapSF->NativeInstance, *(::BRepOffset_Analyse*)A->NativeInstance, *(::TopTools_DataMapOfShapeShape*)MES->NativeInstance, *(::TopTools_DataMapOfShapeShape*)Build->NativeInstance, *(::TopTools_ListOfShape*)Failed->NativeInstance, bIsPlanar);
}

void Macad::Occt::BRepOffset_Inter3d::ConnexIntByInt(Macad::Occt::TopoDS_Shape^ SI, Macad::Occt::BRepOffset_DataMapOfShapeOffset^ MapSF, Macad::Occt::BRepOffset_Analyse^ A, Macad::Occt::TopTools_DataMapOfShapeShape^ MES, Macad::Occt::TopTools_DataMapOfShapeShape^ Build, Macad::Occt::TopTools_ListOfShape^ Failed)
{
	((::BRepOffset_Inter3d*)_NativeInstance)->ConnexIntByInt(*(::TopoDS_Shape*)SI->NativeInstance, *(::BRepOffset_DataMapOfShapeOffset*)MapSF->NativeInstance, *(::BRepOffset_Analyse*)A->NativeInstance, *(::TopTools_DataMapOfShapeShape*)MES->NativeInstance, *(::TopTools_DataMapOfShapeShape*)Build->NativeInstance, *(::TopTools_ListOfShape*)Failed->NativeInstance, false);
}

void Macad::Occt::BRepOffset_Inter3d::ContextIntByInt(Macad::Occt::TopTools_IndexedMapOfShape^ ContextFaces, bool ExtentContext, Macad::Occt::BRepOffset_DataMapOfShapeOffset^ MapSF, Macad::Occt::BRepOffset_Analyse^ A, Macad::Occt::TopTools_DataMapOfShapeShape^ MES, Macad::Occt::TopTools_DataMapOfShapeShape^ Build, Macad::Occt::TopTools_ListOfShape^ Failed, bool bIsPlanar)
{
	((::BRepOffset_Inter3d*)_NativeInstance)->ContextIntByInt(*(::TopTools_IndexedMapOfShape*)ContextFaces->NativeInstance, ExtentContext, *(::BRepOffset_DataMapOfShapeOffset*)MapSF->NativeInstance, *(::BRepOffset_Analyse*)A->NativeInstance, *(::TopTools_DataMapOfShapeShape*)MES->NativeInstance, *(::TopTools_DataMapOfShapeShape*)Build->NativeInstance, *(::TopTools_ListOfShape*)Failed->NativeInstance, bIsPlanar);
}

void Macad::Occt::BRepOffset_Inter3d::ContextIntByInt(Macad::Occt::TopTools_IndexedMapOfShape^ ContextFaces, bool ExtentContext, Macad::Occt::BRepOffset_DataMapOfShapeOffset^ MapSF, Macad::Occt::BRepOffset_Analyse^ A, Macad::Occt::TopTools_DataMapOfShapeShape^ MES, Macad::Occt::TopTools_DataMapOfShapeShape^ Build, Macad::Occt::TopTools_ListOfShape^ Failed)
{
	((::BRepOffset_Inter3d*)_NativeInstance)->ContextIntByInt(*(::TopTools_IndexedMapOfShape*)ContextFaces->NativeInstance, ExtentContext, *(::BRepOffset_DataMapOfShapeOffset*)MapSF->NativeInstance, *(::BRepOffset_Analyse*)A->NativeInstance, *(::TopTools_DataMapOfShapeShape*)MES->NativeInstance, *(::TopTools_DataMapOfShapeShape*)Build->NativeInstance, *(::TopTools_ListOfShape*)Failed->NativeInstance, false);
}

void Macad::Occt::BRepOffset_Inter3d::AddCommonEdges(Macad::Occt::TopTools_ListOfShape^ SetOfFaces)
{
	((::BRepOffset_Inter3d*)_NativeInstance)->AddCommonEdges(*(::TopTools_ListOfShape*)SetOfFaces->NativeInstance);
}

void Macad::Occt::BRepOffset_Inter3d::SetDone(Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2)
{
	((::BRepOffset_Inter3d*)_NativeInstance)->SetDone(*(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance);
}

bool Macad::Occt::BRepOffset_Inter3d::IsDone(Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2)
{
	return ((::BRepOffset_Inter3d*)_NativeInstance)->IsDone(*(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance);
}

Macad::Occt::TopTools_IndexedMapOfShape^ Macad::Occt::BRepOffset_Inter3d::TouchedFaces()
{
	::TopTools_IndexedMapOfShape* _result = new ::TopTools_IndexedMapOfShape();
	*_result = ((::BRepOffset_Inter3d*)_NativeInstance)->TouchedFaces();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_IndexedMapOfShape(_result);
}

Macad::Occt::TopTools_IndexedMapOfShape^ Macad::Occt::BRepOffset_Inter3d::NewEdges()
{
	::TopTools_IndexedMapOfShape* _result = new ::TopTools_IndexedMapOfShape();
	*_result = ((::BRepOffset_Inter3d*)_NativeInstance)->NewEdges();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_IndexedMapOfShape(_result);
}




//---------------------------------------------------------------------
//  Class  BRepOffset_MakeLoops
//---------------------------------------------------------------------

Macad::Occt::BRepOffset_MakeLoops::BRepOffset_MakeLoops()
	: BaseClass<::BRepOffset_MakeLoops>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_MakeLoops();
}

Macad::Occt::BRepOffset_MakeLoops::BRepOffset_MakeLoops(Macad::Occt::BRepOffset_MakeLoops^ parameter1)
	: BaseClass<::BRepOffset_MakeLoops>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_MakeLoops(*(::BRepOffset_MakeLoops*)parameter1->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  BRepOffset_MakeOffset
//---------------------------------------------------------------------

Macad::Occt::BRepOffset_MakeOffset::BRepOffset_MakeOffset()
	: BaseClass<::BRepOffset_MakeOffset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_MakeOffset();
}

Macad::Occt::BRepOffset_MakeOffset::BRepOffset_MakeOffset(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join, bool Thickening, bool RemoveIntEdges)
	: BaseClass<::BRepOffset_MakeOffset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_MakeOffset(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, (::GeomAbs_JoinType)Join, Thickening, RemoveIntEdges);
}

Macad::Occt::BRepOffset_MakeOffset::BRepOffset_MakeOffset(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join, bool Thickening)
	: BaseClass<::BRepOffset_MakeOffset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_MakeOffset(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, (::GeomAbs_JoinType)Join, Thickening, false);
}

Macad::Occt::BRepOffset_MakeOffset::BRepOffset_MakeOffset(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join)
	: BaseClass<::BRepOffset_MakeOffset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_MakeOffset(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, (::GeomAbs_JoinType)Join, false, false);
}

Macad::Occt::BRepOffset_MakeOffset::BRepOffset_MakeOffset(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter)
	: BaseClass<::BRepOffset_MakeOffset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_MakeOffset(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, GeomAbs_Arc, false, false);
}

Macad::Occt::BRepOffset_MakeOffset::BRepOffset_MakeOffset(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection)
	: BaseClass<::BRepOffset_MakeOffset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_MakeOffset(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, false, GeomAbs_Arc, false, false);
}

Macad::Occt::BRepOffset_MakeOffset::BRepOffset_MakeOffset(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode)
	: BaseClass<::BRepOffset_MakeOffset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_MakeOffset(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, false, false, GeomAbs_Arc, false, false);
}

Macad::Occt::BRepOffset_MakeOffset::BRepOffset_MakeOffset(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol)
	: BaseClass<::BRepOffset_MakeOffset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_MakeOffset(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, BRepOffset_Skin, false, false, GeomAbs_Arc, false, false);
}

Macad::Occt::BRepOffset_MakeOffset::BRepOffset_MakeOffset(Macad::Occt::BRepOffset_MakeOffset^ parameter1)
	: BaseClass<::BRepOffset_MakeOffset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_MakeOffset(*(::BRepOffset_MakeOffset*)parameter1->NativeInstance);
}

void Macad::Occt::BRepOffset_MakeOffset::Initialize(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join, bool Thickening, bool RemoveIntEdges)
{
	((::BRepOffset_MakeOffset*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, (::GeomAbs_JoinType)Join, Thickening, RemoveIntEdges);
}

void Macad::Occt::BRepOffset_MakeOffset::Initialize(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join, bool Thickening)
{
	((::BRepOffset_MakeOffset*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, (::GeomAbs_JoinType)Join, Thickening, false);
}

void Macad::Occt::BRepOffset_MakeOffset::Initialize(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter, Macad::Occt::GeomAbs_JoinType Join)
{
	((::BRepOffset_MakeOffset*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, (::GeomAbs_JoinType)Join, false, false);
}

void Macad::Occt::BRepOffset_MakeOffset::Initialize(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection, bool SelfInter)
{
	((::BRepOffset_MakeOffset*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, SelfInter, GeomAbs_Arc, false, false);
}

void Macad::Occt::BRepOffset_MakeOffset::Initialize(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode, bool Intersection)
{
	((::BRepOffset_MakeOffset*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, Intersection, false, GeomAbs_Arc, false, false);
}

void Macad::Occt::BRepOffset_MakeOffset::Initialize(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol, Macad::Occt::BRepOffset_Mode Mode)
{
	((::BRepOffset_MakeOffset*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, (::BRepOffset_Mode)Mode, false, false, GeomAbs_Arc, false, false);
}

void Macad::Occt::BRepOffset_MakeOffset::Initialize(Macad::Occt::TopoDS_Shape^ S, double Offset, double Tol)
{
	((::BRepOffset_MakeOffset*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)S->NativeInstance, Offset, Tol, BRepOffset_Skin, false, false, GeomAbs_Arc, false, false);
}

void Macad::Occt::BRepOffset_MakeOffset::Clear()
{
	((::BRepOffset_MakeOffset*)_NativeInstance)->Clear();
}

void Macad::Occt::BRepOffset_MakeOffset::AllowLinearization(bool theIsAllowed)
{
	((::BRepOffset_MakeOffset*)_NativeInstance)->AllowLinearization(theIsAllowed);
}

void Macad::Occt::BRepOffset_MakeOffset::AddFace(Macad::Occt::TopoDS_Face^ F)
{
	((::BRepOffset_MakeOffset*)_NativeInstance)->AddFace(*(::TopoDS_Face*)F->NativeInstance);
}

void Macad::Occt::BRepOffset_MakeOffset::SetOffsetOnFace(Macad::Occt::TopoDS_Face^ F, double Off)
{
	((::BRepOffset_MakeOffset*)_NativeInstance)->SetOffsetOnFace(*(::TopoDS_Face*)F->NativeInstance, Off);
}

void Macad::Occt::BRepOffset_MakeOffset::MakeOffsetShape()
{
	((::BRepOffset_MakeOffset*)_NativeInstance)->MakeOffsetShape();
}

void Macad::Occt::BRepOffset_MakeOffset::MakeThickSolid()
{
	((::BRepOffset_MakeOffset*)_NativeInstance)->MakeThickSolid();
}

Macad::Occt::BRepOffset_Analyse^ Macad::Occt::BRepOffset_MakeOffset::GetAnalyse()
{
	throw gcnew System::NotImplementedException("Unresolved external symbol");
}

bool Macad::Occt::BRepOffset_MakeOffset::IsDone()
{
	return ((::BRepOffset_MakeOffset*)_NativeInstance)->IsDone();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepOffset_MakeOffset::Shape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BRepOffset_MakeOffset*)_NativeInstance)->Shape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepOffset_MakeOffset::InitShape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BRepOffset_MakeOffset*)_NativeInstance)->InitShape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::BRepOffset_Error Macad::Occt::BRepOffset_MakeOffset::Error()
{
	return (Macad::Occt::BRepOffset_Error)((::BRepOffset_MakeOffset*)_NativeInstance)->Error();
}

Macad::Occt::GeomAbs_JoinType Macad::Occt::BRepOffset_MakeOffset::GetJoinType()
{
	return (Macad::Occt::GeomAbs_JoinType)((::BRepOffset_MakeOffset*)_NativeInstance)->GetJoinType();
}

Macad::Occt::TopTools_IndexedMapOfShape^ Macad::Occt::BRepOffset_MakeOffset::ClosingFaces()
{
	::TopTools_IndexedMapOfShape* _result = new ::TopTools_IndexedMapOfShape();
	*_result =  (::TopTools_IndexedMapOfShape)((::BRepOffset_MakeOffset*)_NativeInstance)->ClosingFaces();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_IndexedMapOfShape(_result);
}

bool Macad::Occt::BRepOffset_MakeOffset::CheckInputData()
{
	return ((::BRepOffset_MakeOffset*)_NativeInstance)->CheckInputData();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepOffset_MakeOffset::GetBadShape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BRepOffset_MakeOffset*)_NativeInstance)->GetBadShape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepOffset_MakeOffset::Generated(Macad::Occt::TopoDS_Shape^ theS)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepOffset_MakeOffset*)_NativeInstance)->Generated(*(::TopoDS_Shape*)theS->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepOffset_MakeOffset::Modified(Macad::Occt::TopoDS_Shape^ theS)
{
	::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
	*_result =  (::TopTools_ListOfShape)((::BRepOffset_MakeOffset*)_NativeInstance)->Modified(*(::TopoDS_Shape*)theS->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

bool Macad::Occt::BRepOffset_MakeOffset::IsDeleted(Macad::Occt::TopoDS_Shape^ S)
{
	return ((::BRepOffset_MakeOffset*)_NativeInstance)->IsDeleted(*(::TopoDS_Shape*)S->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  BRepOffset_MakeSimpleOffset
//---------------------------------------------------------------------

Macad::Occt::BRepOffset_MakeSimpleOffset::BRepOffset_MakeSimpleOffset()
	: BaseClass<::BRepOffset_MakeSimpleOffset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_MakeSimpleOffset();
}

Macad::Occt::BRepOffset_MakeSimpleOffset::BRepOffset_MakeSimpleOffset(Macad::Occt::TopoDS_Shape^ theInputShape, double theOffsetValue)
	: BaseClass<::BRepOffset_MakeSimpleOffset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_MakeSimpleOffset(*(::TopoDS_Shape*)theInputShape->NativeInstance, theOffsetValue);
}

Macad::Occt::BRepOffset_MakeSimpleOffset::BRepOffset_MakeSimpleOffset(Macad::Occt::BRepOffset_MakeSimpleOffset^ parameter1)
	: BaseClass<::BRepOffset_MakeSimpleOffset>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_MakeSimpleOffset(*(::BRepOffset_MakeSimpleOffset*)parameter1->NativeInstance);
}

void Macad::Occt::BRepOffset_MakeSimpleOffset::Initialize(Macad::Occt::TopoDS_Shape^ theInputShape, double theOffsetValue)
{
	((::BRepOffset_MakeSimpleOffset*)_NativeInstance)->Initialize(*(::TopoDS_Shape*)theInputShape->NativeInstance, theOffsetValue);
}

void Macad::Occt::BRepOffset_MakeSimpleOffset::Perform()
{
	((::BRepOffset_MakeSimpleOffset*)_NativeInstance)->Perform();
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::BRepOffset_MakeSimpleOffset::GetErrorMessage()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::BRepOffset_MakeSimpleOffset*)_NativeInstance)->GetErrorMessage();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::BRepOffsetSimple_Status Macad::Occt::BRepOffset_MakeSimpleOffset::GetError()
{
	return (Macad::Occt::BRepOffsetSimple_Status)((::BRepOffset_MakeSimpleOffset*)_NativeInstance)->GetError();
}

bool Macad::Occt::BRepOffset_MakeSimpleOffset::GetBuildSolidFlag()
{
	return ((::BRepOffset_MakeSimpleOffset*)_NativeInstance)->GetBuildSolidFlag();
}

void Macad::Occt::BRepOffset_MakeSimpleOffset::SetBuildSolidFlag(bool theBuildFlag)
{
	((::BRepOffset_MakeSimpleOffset*)_NativeInstance)->SetBuildSolidFlag(theBuildFlag);
}

double Macad::Occt::BRepOffset_MakeSimpleOffset::GetOffsetValue()
{
	return ((::BRepOffset_MakeSimpleOffset*)_NativeInstance)->GetOffsetValue();
}

void Macad::Occt::BRepOffset_MakeSimpleOffset::SetOffsetValue(double theOffsetValue)
{
	((::BRepOffset_MakeSimpleOffset*)_NativeInstance)->SetOffsetValue(theOffsetValue);
}

double Macad::Occt::BRepOffset_MakeSimpleOffset::GetTolerance()
{
	return ((::BRepOffset_MakeSimpleOffset*)_NativeInstance)->GetTolerance();
}

void Macad::Occt::BRepOffset_MakeSimpleOffset::SetTolerance(double theValue)
{
	((::BRepOffset_MakeSimpleOffset*)_NativeInstance)->SetTolerance(theValue);
}

bool Macad::Occt::BRepOffset_MakeSimpleOffset::IsDone()
{
	return ((::BRepOffset_MakeSimpleOffset*)_NativeInstance)->IsDone();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepOffset_MakeSimpleOffset::GetResultShape()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BRepOffset_MakeSimpleOffset*)_NativeInstance)->GetResultShape();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepOffset_MakeSimpleOffset::Generated(Macad::Occt::TopoDS_Shape^ theShape)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BRepOffset_MakeSimpleOffset*)_NativeInstance)->Generated(*(::TopoDS_Shape*)theShape->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepOffset_MakeSimpleOffset::Modified(Macad::Occt::TopoDS_Shape^ theShape)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::BRepOffset_MakeSimpleOffset*)_NativeInstance)->Modified(*(::TopoDS_Shape*)theShape->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}




//---------------------------------------------------------------------
//  Class  BRepOffset_SimpleOffset
//---------------------------------------------------------------------

Macad::Occt::BRepOffset_SimpleOffset::BRepOffset_SimpleOffset(Macad::Occt::TopoDS_Shape^ theInputShape, double theOffsetValue, double theTolerance)
	: Macad::Occt::BRepTools_Modification(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::BRepOffset_SimpleOffset(*(::TopoDS_Shape*)theInputShape->NativeInstance, theOffsetValue, theTolerance);
}

bool Macad::Occt::BRepOffset_SimpleOffset::NewSurface(Macad::Occt::TopoDS_Face^ F, Macad::Occt::Geom_Surface^ S, Macad::Occt::TopLoc_Location^ L, double% Tol, bool% RevWires, bool% RevFace)
{
	Handle(::Geom_Surface) h_S = S->NativeInstance;
	pin_ptr<double> pp_Tol = &Tol;
	pin_ptr<bool> pp_RevWires = &RevWires;
	pin_ptr<bool> pp_RevFace = &RevFace;
	return ((::BRepOffset_SimpleOffset*)_NativeInstance)->NewSurface(*(::TopoDS_Face*)F->NativeInstance, h_S, *(::TopLoc_Location*)L->NativeInstance, *(Standard_Real*)pp_Tol, *(Standard_Boolean*)pp_RevWires, *(Standard_Boolean*)pp_RevFace);
	S->NativeInstance = h_S.get();
}

bool Macad::Occt::BRepOffset_SimpleOffset::NewCurve(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::Geom_Curve^ C, Macad::Occt::TopLoc_Location^ L, double% Tol)
{
	Handle(::Geom_Curve) h_C = C->NativeInstance;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::BRepOffset_SimpleOffset*)_NativeInstance)->NewCurve(*(::TopoDS_Edge*)E->NativeInstance, h_C, *(::TopLoc_Location*)L->NativeInstance, *(Standard_Real*)pp_Tol);
	C->NativeInstance = h_C.get();
}

bool Macad::Occt::BRepOffset_SimpleOffset::NewPoint(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::Pnt% P, double% Tol)
{
	pin_ptr<Macad::Occt::Pnt> pp_P = &P;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::BRepOffset_SimpleOffset*)_NativeInstance)->NewPoint(*(::TopoDS_Vertex*)V->NativeInstance, *(gp_Pnt*)pp_P, *(Standard_Real*)pp_Tol);
}

bool Macad::Occt::BRepOffset_SimpleOffset::NewCurve2d(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF, Macad::Occt::Geom2d_Curve^ C, double% Tol)
{
	Handle(::Geom2d_Curve) h_C = C->NativeInstance;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::BRepOffset_SimpleOffset*)_NativeInstance)->NewCurve2d(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF->NativeInstance, h_C, *(Standard_Real*)pp_Tol);
	C->NativeInstance = h_C.get();
}

bool Macad::Occt::BRepOffset_SimpleOffset::NewParameter(Macad::Occt::TopoDS_Vertex^ V, Macad::Occt::TopoDS_Edge^ E, double% P, double% Tol)
{
	pin_ptr<double> pp_P = &P;
	pin_ptr<double> pp_Tol = &Tol;
	return ((::BRepOffset_SimpleOffset*)_NativeInstance)->NewParameter(*(::TopoDS_Vertex*)V->NativeInstance, *(::TopoDS_Edge*)E->NativeInstance, *(Standard_Real*)pp_P, *(Standard_Real*)pp_Tol);
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRepOffset_SimpleOffset::Continuity(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopoDS_Edge^ NewE, Macad::Occt::TopoDS_Face^ NewF1, Macad::Occt::TopoDS_Face^ NewF2)
{
	return (Macad::Occt::GeomAbs_Shape)((::BRepOffset_SimpleOffset*)_NativeInstance)->Continuity(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance, *(::TopoDS_Edge*)NewE->NativeInstance, *(::TopoDS_Face*)NewF1->NativeInstance, *(::TopoDS_Face*)NewF2->NativeInstance);
}


Macad::Occt::BRepOffset_SimpleOffset^ Macad::Occt::BRepOffset_SimpleOffset::CreateDowncasted(::BRepOffset_SimpleOffset* instance)
{
	return gcnew Macad::Occt::BRepOffset_SimpleOffset( instance );
}



//---------------------------------------------------------------------
//  Class  BRepOffset_Tool
//---------------------------------------------------------------------

Macad::Occt::BRepOffset_Tool::BRepOffset_Tool()
	: BaseClass<::BRepOffset_Tool>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_Tool();
}

Macad::Occt::BRepOffset_Tool::BRepOffset_Tool(Macad::Occt::BRepOffset_Tool^ parameter1)
	: BaseClass<::BRepOffset_Tool>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::BRepOffset_Tool(*(::BRepOffset_Tool*)parameter1->NativeInstance);
}

void Macad::Occt::BRepOffset_Tool::EdgeVertices(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Vertex^ V1, Macad::Occt::TopoDS_Vertex^ V2)
{
	::BRepOffset_Tool::EdgeVertices(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Vertex*)V1->NativeInstance, *(::TopoDS_Vertex*)V2->NativeInstance);
}

void Macad::Occt::BRepOffset_Tool::OrientSection(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopAbs_Orientation% O1, Macad::Occt::TopAbs_Orientation% O2)
{
	pin_ptr<Macad::Occt::TopAbs_Orientation> pp_O1 = &O1;
	pin_ptr<Macad::Occt::TopAbs_Orientation> pp_O2 = &O2;
	::BRepOffset_Tool::OrientSection(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance, *(::TopAbs_Orientation*)pp_O1, *(::TopAbs_Orientation*)pp_O2);
}

bool Macad::Occt::BRepOffset_Tool::FindCommonShapes(Macad::Occt::TopoDS_Face^ theF1, Macad::Occt::TopoDS_Face^ theF2, Macad::Occt::TopTools_ListOfShape^ theLE, Macad::Occt::TopTools_ListOfShape^ theLV)
{
	return ::BRepOffset_Tool::FindCommonShapes(*(::TopoDS_Face*)theF1->NativeInstance, *(::TopoDS_Face*)theF2->NativeInstance, *(::TopTools_ListOfShape*)theLE->NativeInstance, *(::TopTools_ListOfShape*)theLV->NativeInstance);
}

bool Macad::Occt::BRepOffset_Tool::FindCommonShapes(Macad::Occt::TopoDS_Shape^ theS1, Macad::Occt::TopoDS_Shape^ theS2, Macad::Occt::TopAbs_ShapeEnum theType, Macad::Occt::TopTools_ListOfShape^ theLSC)
{
	return ::BRepOffset_Tool::FindCommonShapes(*(::TopoDS_Shape*)theS1->NativeInstance, *(::TopoDS_Shape*)theS2->NativeInstance, (::TopAbs_ShapeEnum)theType, *(::TopTools_ListOfShape*)theLSC->NativeInstance);
}

void Macad::Occt::BRepOffset_Tool::Inter3D(Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopTools_ListOfShape^ LInt1, Macad::Occt::TopTools_ListOfShape^ LInt2, Macad::Occt::TopAbs_State Side, Macad::Occt::TopoDS_Edge^ RefEdge, bool IsRefEdgeDefined)
{
	::BRepOffset_Tool::Inter3D(*(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance, *(::TopTools_ListOfShape*)LInt1->NativeInstance, *(::TopTools_ListOfShape*)LInt2->NativeInstance, (::TopAbs_State)Side, *(::TopoDS_Edge*)RefEdge->NativeInstance, IsRefEdgeDefined);
}

void Macad::Occt::BRepOffset_Tool::Inter3D(Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopTools_ListOfShape^ LInt1, Macad::Occt::TopTools_ListOfShape^ LInt2, Macad::Occt::TopAbs_State Side, Macad::Occt::TopoDS_Edge^ RefEdge)
{
	::BRepOffset_Tool::Inter3D(*(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance, *(::TopTools_ListOfShape*)LInt1->NativeInstance, *(::TopTools_ListOfShape*)LInt2->NativeInstance, (::TopAbs_State)Side, *(::TopoDS_Edge*)RefEdge->NativeInstance, false);
}

bool Macad::Occt::BRepOffset_Tool::TryProject(Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopTools_ListOfShape^ Edges, Macad::Occt::TopTools_ListOfShape^ LInt1, Macad::Occt::TopTools_ListOfShape^ LInt2, Macad::Occt::TopAbs_State Side, double TolConf)
{
	return ::BRepOffset_Tool::TryProject(*(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance, *(::TopTools_ListOfShape*)Edges->NativeInstance, *(::TopTools_ListOfShape*)LInt1->NativeInstance, *(::TopTools_ListOfShape*)LInt2->NativeInstance, (::TopAbs_State)Side, TolConf);
}

void Macad::Occt::BRepOffset_Tool::PipeInter(Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopTools_ListOfShape^ LInt1, Macad::Occt::TopTools_ListOfShape^ LInt2, Macad::Occt::TopAbs_State Side)
{
	::BRepOffset_Tool::PipeInter(*(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance, *(::TopTools_ListOfShape*)LInt1->NativeInstance, *(::TopTools_ListOfShape*)LInt2->NativeInstance, (::TopAbs_State)Side);
}

void Macad::Occt::BRepOffset_Tool::Inter2d(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, Macad::Occt::TopTools_ListOfShape^ LV, double Tol)
{
	::BRepOffset_Tool::Inter2d(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, *(::TopTools_ListOfShape*)LV->NativeInstance, Tol);
}

void Macad::Occt::BRepOffset_Tool::InterOrExtent(Macad::Occt::TopoDS_Face^ F1, Macad::Occt::TopoDS_Face^ F2, Macad::Occt::TopTools_ListOfShape^ LInt1, Macad::Occt::TopTools_ListOfShape^ LInt2, Macad::Occt::TopAbs_State Side)
{
	::BRepOffset_Tool::InterOrExtent(*(::TopoDS_Face*)F1->NativeInstance, *(::TopoDS_Face*)F2->NativeInstance, *(::TopTools_ListOfShape*)LInt1->NativeInstance, *(::TopTools_ListOfShape*)LInt2->NativeInstance, (::TopAbs_State)Side);
}

void Macad::Occt::BRepOffset_Tool::CheckBounds(Macad::Occt::TopoDS_Face^ F, Macad::Occt::BRepOffset_Analyse^ Analyse, bool% enlargeU, bool% enlargeVfirst, bool% enlargeVlast)
{
	pin_ptr<bool> pp_enlargeU = &enlargeU;
	pin_ptr<bool> pp_enlargeVfirst = &enlargeVfirst;
	pin_ptr<bool> pp_enlargeVlast = &enlargeVlast;
	::BRepOffset_Tool::CheckBounds(*(::TopoDS_Face*)F->NativeInstance, *(::BRepOffset_Analyse*)Analyse->NativeInstance, *(Standard_Boolean*)pp_enlargeU, *(Standard_Boolean*)pp_enlargeVfirst, *(Standard_Boolean*)pp_enlargeVlast);
}

bool Macad::Occt::BRepOffset_Tool::EnLargeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Face^ NF, bool ChangeGeom, bool UpDatePCurve, bool enlargeU, bool enlargeVfirst, bool enlargeVlast, int theExtensionMode, double theLenBeforeUfirst, double theLenAfterUlast, double theLenBeforeVfirst, double theLenAfterVlast)
{
	return ::BRepOffset_Tool::EnLargeFace(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Face*)NF->NativeInstance, ChangeGeom, UpDatePCurve, enlargeU, enlargeVfirst, enlargeVlast, theExtensionMode, theLenBeforeUfirst, theLenAfterUlast, theLenBeforeVfirst, theLenAfterVlast);
}

bool Macad::Occt::BRepOffset_Tool::EnLargeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Face^ NF, bool ChangeGeom, bool UpDatePCurve, bool enlargeU, bool enlargeVfirst, bool enlargeVlast, int theExtensionMode, double theLenBeforeUfirst, double theLenAfterUlast, double theLenBeforeVfirst)
{
	return ::BRepOffset_Tool::EnLargeFace(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Face*)NF->NativeInstance, ChangeGeom, UpDatePCurve, enlargeU, enlargeVfirst, enlargeVlast, theExtensionMode, theLenBeforeUfirst, theLenAfterUlast, theLenBeforeVfirst, -1.);
}

bool Macad::Occt::BRepOffset_Tool::EnLargeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Face^ NF, bool ChangeGeom, bool UpDatePCurve, bool enlargeU, bool enlargeVfirst, bool enlargeVlast, int theExtensionMode, double theLenBeforeUfirst, double theLenAfterUlast)
{
	return ::BRepOffset_Tool::EnLargeFace(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Face*)NF->NativeInstance, ChangeGeom, UpDatePCurve, enlargeU, enlargeVfirst, enlargeVlast, theExtensionMode, theLenBeforeUfirst, theLenAfterUlast, -1., -1.);
}

bool Macad::Occt::BRepOffset_Tool::EnLargeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Face^ NF, bool ChangeGeom, bool UpDatePCurve, bool enlargeU, bool enlargeVfirst, bool enlargeVlast, int theExtensionMode, double theLenBeforeUfirst)
{
	return ::BRepOffset_Tool::EnLargeFace(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Face*)NF->NativeInstance, ChangeGeom, UpDatePCurve, enlargeU, enlargeVfirst, enlargeVlast, theExtensionMode, theLenBeforeUfirst, -1., -1., -1.);
}

bool Macad::Occt::BRepOffset_Tool::EnLargeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Face^ NF, bool ChangeGeom, bool UpDatePCurve, bool enlargeU, bool enlargeVfirst, bool enlargeVlast, int theExtensionMode)
{
	return ::BRepOffset_Tool::EnLargeFace(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Face*)NF->NativeInstance, ChangeGeom, UpDatePCurve, enlargeU, enlargeVfirst, enlargeVlast, theExtensionMode, -1., -1., -1., -1.);
}

bool Macad::Occt::BRepOffset_Tool::EnLargeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Face^ NF, bool ChangeGeom, bool UpDatePCurve, bool enlargeU, bool enlargeVfirst, bool enlargeVlast)
{
	return ::BRepOffset_Tool::EnLargeFace(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Face*)NF->NativeInstance, ChangeGeom, UpDatePCurve, enlargeU, enlargeVfirst, enlargeVlast, 1, -1., -1., -1., -1.);
}

bool Macad::Occt::BRepOffset_Tool::EnLargeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Face^ NF, bool ChangeGeom, bool UpDatePCurve, bool enlargeU, bool enlargeVfirst)
{
	return ::BRepOffset_Tool::EnLargeFace(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Face*)NF->NativeInstance, ChangeGeom, UpDatePCurve, enlargeU, enlargeVfirst, true, 1, -1., -1., -1., -1.);
}

bool Macad::Occt::BRepOffset_Tool::EnLargeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Face^ NF, bool ChangeGeom, bool UpDatePCurve, bool enlargeU)
{
	return ::BRepOffset_Tool::EnLargeFace(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Face*)NF->NativeInstance, ChangeGeom, UpDatePCurve, enlargeU, true, true, 1, -1., -1., -1., -1.);
}

bool Macad::Occt::BRepOffset_Tool::EnLargeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Face^ NF, bool ChangeGeom, bool UpDatePCurve)
{
	return ::BRepOffset_Tool::EnLargeFace(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Face*)NF->NativeInstance, ChangeGeom, UpDatePCurve, true, true, true, 1, -1., -1., -1., -1.);
}

bool Macad::Occt::BRepOffset_Tool::EnLargeFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopoDS_Face^ NF, bool ChangeGeom)
{
	return ::BRepOffset_Tool::EnLargeFace(*(::TopoDS_Face*)F->NativeInstance, *(::TopoDS_Face*)NF->NativeInstance, ChangeGeom, false, true, true, true, 1, -1., -1., -1., -1.);
}

void Macad::Occt::BRepOffset_Tool::ExtentFace(Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopTools_DataMapOfShapeShape^ ConstShapes, Macad::Occt::TopTools_DataMapOfShapeShape^ ToBuild, Macad::Occt::TopAbs_State Side, double TolConf, Macad::Occt::TopoDS_Face^ NF)
{
	::BRepOffset_Tool::ExtentFace(*(::TopoDS_Face*)F->NativeInstance, *(::TopTools_DataMapOfShapeShape*)ConstShapes->NativeInstance, *(::TopTools_DataMapOfShapeShape*)ToBuild->NativeInstance, (::TopAbs_State)Side, TolConf, *(::TopoDS_Face*)NF->NativeInstance);
}

void Macad::Occt::BRepOffset_Tool::BuildNeighbour(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::TopoDS_Face^ F, Macad::Occt::TopTools_DataMapOfShapeShape^ NOnV1, Macad::Occt::TopTools_DataMapOfShapeShape^ NOnV2)
{
	::BRepOffset_Tool::BuildNeighbour(*(::TopoDS_Wire*)W->NativeInstance, *(::TopoDS_Face*)F->NativeInstance, *(::TopTools_DataMapOfShapeShape*)NOnV1->NativeInstance, *(::TopTools_DataMapOfShapeShape*)NOnV2->NativeInstance);
}

void Macad::Occt::BRepOffset_Tool::MapVertexEdges(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ MVE)
{
	::BRepOffset_Tool::MapVertexEdges(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_DataMapOfShapeListOfShape*)MVE->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepOffset_Tool::Deboucle3D(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_MapOfShape^ Boundary)
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result = ::BRepOffset_Tool::Deboucle3D(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_MapOfShape*)Boundary->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

double Macad::Occt::BRepOffset_Tool::Gabarit(Macad::Occt::Geom_Curve^ aCurve)
{
	Handle(::Geom_Curve) h_aCurve = aCurve->NativeInstance;
	return ::BRepOffset_Tool::Gabarit(h_aCurve);
	aCurve->NativeInstance = h_aCurve.get();
}

bool Macad::Occt::BRepOffset_Tool::CheckPlanesNormals(Macad::Occt::TopoDS_Face^ theFace1, Macad::Occt::TopoDS_Face^ theFace2, double theTolAng)
{
	return ::BRepOffset_Tool::CheckPlanesNormals(*(::TopoDS_Face*)theFace1->NativeInstance, *(::TopoDS_Face*)theFace2->NativeInstance, theTolAng);
}

bool Macad::Occt::BRepOffset_Tool::CheckPlanesNormals(Macad::Occt::TopoDS_Face^ theFace1, Macad::Occt::TopoDS_Face^ theFace2)
{
	return ::BRepOffset_Tool::CheckPlanesNormals(*(::TopoDS_Face*)theFace1->NativeInstance, *(::TopoDS_Face*)theFace2->NativeInstance, 1.0E-8);
}



