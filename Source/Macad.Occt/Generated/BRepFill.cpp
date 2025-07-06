// Generated wrapper code for package BRepFill

#include "OcctPCH.h"
#include "BRepFill.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "TopTools.h"
#include "TopoDS.h"
#include "TColgp.h"
#include "TColStd.h"
#include "gp.h"
#include "Geom.h"
#include "Geom2d.h"
#include "GeomAbs.h"


//---------------------------------------------------------------------
//  Class  BRepFill_DataMapOfNodeDataMapOfShapeShape
//---------------------------------------------------------------------

Macad::Occt::BRepFill_DataMapOfNodeDataMapOfShapeShape::BRepFill_DataMapOfNodeDataMapOfShapeShape()
    : Macad::Occt::BaseClass<::BRepFill_DataMapOfNodeDataMapOfShapeShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_DataMapOfNodeDataMapOfShapeShape();
}

Macad::Occt::BRepFill_DataMapOfNodeDataMapOfShapeShape::BRepFill_DataMapOfNodeDataMapOfShapeShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::BRepFill_DataMapOfNodeDataMapOfShapeShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_DataMapOfNodeDataMapOfShapeShape(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::BRepFill_DataMapOfNodeDataMapOfShapeShape::BRepFill_DataMapOfNodeDataMapOfShapeShape(int theNbBuckets)
    : Macad::Occt::BaseClass<::BRepFill_DataMapOfNodeDataMapOfShapeShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_DataMapOfNodeDataMapOfShapeShape(theNbBuckets, 0L);
}

void Macad::Occt::BRepFill_DataMapOfNodeDataMapOfShapeShape::Exchange(Macad::Occt::BRepFill_DataMapOfNodeDataMapOfShapeShape^ theOther)
{
    ((::BRepFill_DataMapOfNodeDataMapOfShapeShape*)_NativeInstance)->Exchange(*(::BRepFill_DataMapOfNodeDataMapOfShapeShape*)theOther->NativeInstance);
}

Macad::Occt::BRepFill_DataMapOfNodeDataMapOfShapeShape^ Macad::Occt::BRepFill_DataMapOfNodeDataMapOfShapeShape::Assign(Macad::Occt::BRepFill_DataMapOfNodeDataMapOfShapeShape^ theOther)
{
    ::BRepFill_DataMapOfNodeDataMapOfShapeShape* _result = new ::BRepFill_DataMapOfNodeDataMapOfShapeShape();
    *_result = ((::BRepFill_DataMapOfNodeDataMapOfShapeShape*)_NativeInstance)->Assign(*(::BRepFill_DataMapOfNodeDataMapOfShapeShape*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_DataMapOfNodeDataMapOfShapeShape(_result);
}

void Macad::Occt::BRepFill_DataMapOfNodeDataMapOfShapeShape::ReSize(int N)
{
    ((::BRepFill_DataMapOfNodeDataMapOfShapeShape*)_NativeInstance)->ReSize(N);
}

void Macad::Occt::BRepFill_DataMapOfNodeDataMapOfShapeShape::Clear(bool doReleaseMemory)
{
    ((::BRepFill_DataMapOfNodeDataMapOfShapeShape*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::BRepFill_DataMapOfNodeDataMapOfShapeShape::Clear()
{
    ((::BRepFill_DataMapOfNodeDataMapOfShapeShape*)_NativeInstance)->Clear(false);
}

int Macad::Occt::BRepFill_DataMapOfNodeDataMapOfShapeShape::Size()
{
    int _result = ((::BRepFill_DataMapOfNodeDataMapOfShapeShape*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepFill_DataMapOfNodeDataMapOfShapeShape::Iterator
//---------------------------------------------------------------------

Macad::Occt::BRepFill_DataMapOfNodeDataMapOfShapeShape::Iterator::Iterator()
    : Macad::Occt::BaseClass<::BRepFill_DataMapOfNodeDataMapOfShapeShape::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_DataMapOfNodeDataMapOfShapeShape::Iterator();
}

bool Macad::Occt::BRepFill_DataMapOfNodeDataMapOfShapeShape::Iterator::More()
{
    bool _result = ((::BRepFill_DataMapOfNodeDataMapOfShapeShape::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::BRepFill_DataMapOfNodeDataMapOfShapeShape::Iterator::Next()
{
    ((::BRepFill_DataMapOfNodeDataMapOfShapeShape::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TopTools_DataMapOfShapeShape^ Macad::Occt::BRepFill_DataMapOfNodeDataMapOfShapeShape::Iterator::Value()
{
    ::TopTools_DataMapOfShapeShape* _result = new ::TopTools_DataMapOfShapeShape();
    *_result = (::TopTools_DataMapOfShapeShape)((::BRepFill_DataMapOfNodeDataMapOfShapeShape::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_DataMapOfShapeShape(_result);
}

Macad::Occt::TopTools_DataMapOfShapeShape^ Macad::Occt::BRepFill_DataMapOfNodeDataMapOfShapeShape::Iterator::ChangeValue()
{
    ::TopTools_DataMapOfShapeShape* _result = new ::TopTools_DataMapOfShapeShape();
    *_result = ((::BRepFill_DataMapOfNodeDataMapOfShapeShape::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_DataMapOfShapeShape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepFill_DataMapOfNodeShape
//---------------------------------------------------------------------

Macad::Occt::BRepFill_DataMapOfNodeShape::BRepFill_DataMapOfNodeShape()
    : Macad::Occt::BaseClass<::BRepFill_DataMapOfNodeShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_DataMapOfNodeShape();
}

Macad::Occt::BRepFill_DataMapOfNodeShape::BRepFill_DataMapOfNodeShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::BRepFill_DataMapOfNodeShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_DataMapOfNodeShape(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::BRepFill_DataMapOfNodeShape::BRepFill_DataMapOfNodeShape(int theNbBuckets)
    : Macad::Occt::BaseClass<::BRepFill_DataMapOfNodeShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_DataMapOfNodeShape(theNbBuckets, 0L);
}

void Macad::Occt::BRepFill_DataMapOfNodeShape::Exchange(Macad::Occt::BRepFill_DataMapOfNodeShape^ theOther)
{
    ((::BRepFill_DataMapOfNodeShape*)_NativeInstance)->Exchange(*(::BRepFill_DataMapOfNodeShape*)theOther->NativeInstance);
}

Macad::Occt::BRepFill_DataMapOfNodeShape^ Macad::Occt::BRepFill_DataMapOfNodeShape::Assign(Macad::Occt::BRepFill_DataMapOfNodeShape^ theOther)
{
    ::BRepFill_DataMapOfNodeShape* _result = new ::BRepFill_DataMapOfNodeShape();
    *_result = ((::BRepFill_DataMapOfNodeShape*)_NativeInstance)->Assign(*(::BRepFill_DataMapOfNodeShape*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_DataMapOfNodeShape(_result);
}

void Macad::Occt::BRepFill_DataMapOfNodeShape::ReSize(int N)
{
    ((::BRepFill_DataMapOfNodeShape*)_NativeInstance)->ReSize(N);
}

void Macad::Occt::BRepFill_DataMapOfNodeShape::Clear(bool doReleaseMemory)
{
    ((::BRepFill_DataMapOfNodeShape*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::BRepFill_DataMapOfNodeShape::Clear()
{
    ((::BRepFill_DataMapOfNodeShape*)_NativeInstance)->Clear(false);
}

int Macad::Occt::BRepFill_DataMapOfNodeShape::Size()
{
    int _result = ((::BRepFill_DataMapOfNodeShape*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepFill_DataMapOfNodeShape::Iterator
//---------------------------------------------------------------------

Macad::Occt::BRepFill_DataMapOfNodeShape::Iterator::Iterator()
    : Macad::Occt::BaseClass<::BRepFill_DataMapOfNodeShape::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_DataMapOfNodeShape::Iterator();
}

bool Macad::Occt::BRepFill_DataMapOfNodeShape::Iterator::More()
{
    bool _result = ((::BRepFill_DataMapOfNodeShape::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::BRepFill_DataMapOfNodeShape::Iterator::Next()
{
    ((::BRepFill_DataMapOfNodeShape::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepFill_DataMapOfNodeShape::Iterator::Value()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepFill_DataMapOfNodeShape::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepFill_DataMapOfNodeShape::Iterator::ChangeValue()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepFill_DataMapOfNodeShape::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepFill_DataMapOfOrientedShapeListOfShape
//---------------------------------------------------------------------

Macad::Occt::BRepFill_DataMapOfOrientedShapeListOfShape::BRepFill_DataMapOfOrientedShapeListOfShape()
    : Macad::Occt::BaseClass<::BRepFill_DataMapOfOrientedShapeListOfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_DataMapOfOrientedShapeListOfShape();
}

Macad::Occt::BRepFill_DataMapOfOrientedShapeListOfShape::BRepFill_DataMapOfOrientedShapeListOfShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::BRepFill_DataMapOfOrientedShapeListOfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_DataMapOfOrientedShapeListOfShape(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::BRepFill_DataMapOfOrientedShapeListOfShape::BRepFill_DataMapOfOrientedShapeListOfShape(int theNbBuckets)
    : Macad::Occt::BaseClass<::BRepFill_DataMapOfOrientedShapeListOfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_DataMapOfOrientedShapeListOfShape(theNbBuckets, 0L);
}

void Macad::Occt::BRepFill_DataMapOfOrientedShapeListOfShape::Exchange(Macad::Occt::BRepFill_DataMapOfOrientedShapeListOfShape^ theOther)
{
    ((::BRepFill_DataMapOfOrientedShapeListOfShape*)_NativeInstance)->Exchange(*(::BRepFill_DataMapOfOrientedShapeListOfShape*)theOther->NativeInstance);
}

Macad::Occt::BRepFill_DataMapOfOrientedShapeListOfShape^ Macad::Occt::BRepFill_DataMapOfOrientedShapeListOfShape::Assign(Macad::Occt::BRepFill_DataMapOfOrientedShapeListOfShape^ theOther)
{
    ::BRepFill_DataMapOfOrientedShapeListOfShape* _result = new ::BRepFill_DataMapOfOrientedShapeListOfShape();
    *_result = ((::BRepFill_DataMapOfOrientedShapeListOfShape*)_NativeInstance)->Assign(*(::BRepFill_DataMapOfOrientedShapeListOfShape*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_DataMapOfOrientedShapeListOfShape(_result);
}

void Macad::Occt::BRepFill_DataMapOfOrientedShapeListOfShape::ReSize(int N)
{
    ((::BRepFill_DataMapOfOrientedShapeListOfShape*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::BRepFill_DataMapOfOrientedShapeListOfShape::Bind(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopoDS_ListOfShape^ theItem)
{
    bool _result = ((::BRepFill_DataMapOfOrientedShapeListOfShape*)_NativeInstance)->Bind(*(::TopoDS_Shape*)theKey->NativeInstance, *(::TopoDS_ListOfShape*)theItem->NativeInstance);
    return _result;
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::BRepFill_DataMapOfOrientedShapeListOfShape::Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopoDS_ListOfShape^ theItem)
{
    ::TopoDS_ListOfShape* _result = ((::BRepFill_DataMapOfOrientedShapeListOfShape*)_NativeInstance)->Bound(*(::TopoDS_Shape*)theKey->NativeInstance, *(::TopoDS_ListOfShape*)theItem->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

bool Macad::Occt::BRepFill_DataMapOfOrientedShapeListOfShape::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::BRepFill_DataMapOfOrientedShapeListOfShape*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

bool Macad::Occt::BRepFill_DataMapOfOrientedShapeListOfShape::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::BRepFill_DataMapOfOrientedShapeListOfShape*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::BRepFill_DataMapOfOrientedShapeListOfShape::Seek(Macad::Occt::TopoDS_Shape^ theKey)
{
    const ::TopoDS_ListOfShape* _result = ((::BRepFill_DataMapOfOrientedShapeListOfShape*)_NativeInstance)->Seek(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape((::TopoDS_ListOfShape*)_result);
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::BRepFill_DataMapOfOrientedShapeListOfShape::Find(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::TopoDS_ListOfShape* _result = new ::TopoDS_ListOfShape();
    *_result = (::TopoDS_ListOfShape)((::BRepFill_DataMapOfOrientedShapeListOfShape*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::BRepFill_DataMapOfOrientedShapeListOfShape::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::TopoDS_ListOfShape* _result = ((::BRepFill_DataMapOfOrientedShapeListOfShape*)_NativeInstance)->ChangeSeek(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::BRepFill_DataMapOfOrientedShapeListOfShape::ChangeFind(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::TopoDS_ListOfShape* _result = new ::TopoDS_ListOfShape();
    *_result = ((::BRepFill_DataMapOfOrientedShapeListOfShape*)_NativeInstance)->ChangeFind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

void Macad::Occt::BRepFill_DataMapOfOrientedShapeListOfShape::Clear(bool doReleaseMemory)
{
    ((::BRepFill_DataMapOfOrientedShapeListOfShape*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::BRepFill_DataMapOfOrientedShapeListOfShape::Clear()
{
    ((::BRepFill_DataMapOfOrientedShapeListOfShape*)_NativeInstance)->Clear(false);
}

int Macad::Occt::BRepFill_DataMapOfOrientedShapeListOfShape::Size()
{
    int _result = ((::BRepFill_DataMapOfOrientedShapeListOfShape*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepFill_DataMapOfOrientedShapeListOfShape::Iterator
//---------------------------------------------------------------------

Macad::Occt::BRepFill_DataMapOfOrientedShapeListOfShape::Iterator::Iterator()
    : Macad::Occt::BaseClass<::BRepFill_DataMapOfOrientedShapeListOfShape::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_DataMapOfOrientedShapeListOfShape::Iterator();
}

bool Macad::Occt::BRepFill_DataMapOfOrientedShapeListOfShape::Iterator::More()
{
    bool _result = ((::BRepFill_DataMapOfOrientedShapeListOfShape::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::BRepFill_DataMapOfOrientedShapeListOfShape::Iterator::Next()
{
    ((::BRepFill_DataMapOfOrientedShapeListOfShape::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::BRepFill_DataMapOfOrientedShapeListOfShape::Iterator::Value()
{
    ::TopoDS_ListOfShape* _result = new ::TopoDS_ListOfShape();
    *_result = (::TopoDS_ListOfShape)((::BRepFill_DataMapOfOrientedShapeListOfShape::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::BRepFill_DataMapOfOrientedShapeListOfShape::Iterator::ChangeValue()
{
    ::TopoDS_ListOfShape* _result = new ::TopoDS_ListOfShape();
    *_result = ((::BRepFill_DataMapOfOrientedShapeListOfShape::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepFill_DataMapOfOrientedShapeListOfShape::Iterator::Key()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepFill_DataMapOfOrientedShapeListOfShape::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepFill_DataMapOfShapeDataMapOfShapeListOfShape
//---------------------------------------------------------------------

Macad::Occt::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape()
    : Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape();
}

Macad::Occt::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape(int theNbBuckets)
    : Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape(theNbBuckets, 0L);
}

void Macad::Occt::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Exchange(Macad::Occt::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape^ theOther)
{
    ((::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape*)_NativeInstance)->Exchange(*(::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape*)theOther->NativeInstance);
}

Macad::Occt::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape^ Macad::Occt::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Assign(Macad::Occt::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape^ theOther)
{
    ::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape* _result = new ::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape();
    *_result = ((::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape*)_NativeInstance)->Assign(*(::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape(_result);
}

void Macad::Occt::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::ReSize(int N)
{
    ((::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Bind(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theItem)
{
    bool _result = ((::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape*)_NativeInstance)->Bind(*(::TopoDS_Shape*)theKey->NativeInstance, *(::TopTools_DataMapOfShapeListOfShape*)theItem->NativeInstance);
    return _result;
}

Macad::Occt::TopTools_DataMapOfShapeListOfShape^ Macad::Occt::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopTools_DataMapOfShapeListOfShape^ theItem)
{
    ::TopTools_DataMapOfShapeListOfShape* _result = ((::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape*)_NativeInstance)->Bound(*(::TopoDS_Shape*)theKey->NativeInstance, *(::TopTools_DataMapOfShapeListOfShape*)theItem->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_DataMapOfShapeListOfShape(_result);
}

bool Macad::Occt::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

bool Macad::Occt::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

Macad::Occt::TopTools_DataMapOfShapeListOfShape^ Macad::Occt::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Seek(Macad::Occt::TopoDS_Shape^ theKey)
{
    const ::TopTools_DataMapOfShapeListOfShape* _result = ((::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape*)_NativeInstance)->Seek(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_DataMapOfShapeListOfShape((::TopTools_DataMapOfShapeListOfShape*)_result);
}

Macad::Occt::TopTools_DataMapOfShapeListOfShape^ Macad::Occt::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Find(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::TopTools_DataMapOfShapeListOfShape* _result = new ::TopTools_DataMapOfShapeListOfShape();
    *_result = (::TopTools_DataMapOfShapeListOfShape)((::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_DataMapOfShapeListOfShape(_result);
}

Macad::Occt::TopTools_DataMapOfShapeListOfShape^ Macad::Occt::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::TopTools_DataMapOfShapeListOfShape* _result = ((::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape*)_NativeInstance)->ChangeSeek(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_DataMapOfShapeListOfShape(_result);
}

Macad::Occt::TopTools_DataMapOfShapeListOfShape^ Macad::Occt::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::ChangeFind(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::TopTools_DataMapOfShapeListOfShape* _result = new ::TopTools_DataMapOfShapeListOfShape();
    *_result = ((::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape*)_NativeInstance)->ChangeFind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_DataMapOfShapeListOfShape(_result);
}

void Macad::Occt::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Clear(bool doReleaseMemory)
{
    ((::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Clear()
{
    ((::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape*)_NativeInstance)->Clear(false);
}

int Macad::Occt::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Size()
{
    int _result = ((::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Iterator
//---------------------------------------------------------------------

Macad::Occt::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Iterator::Iterator()
    : Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Iterator();
}

bool Macad::Occt::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Iterator::More()
{
    bool _result = ((::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Iterator::Next()
{
    ((::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TopTools_DataMapOfShapeListOfShape^ Macad::Occt::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Iterator::Value()
{
    ::TopTools_DataMapOfShapeListOfShape* _result = new ::TopTools_DataMapOfShapeListOfShape();
    *_result = (::TopTools_DataMapOfShapeListOfShape)((::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_DataMapOfShapeListOfShape(_result);
}

Macad::Occt::TopTools_DataMapOfShapeListOfShape^ Macad::Occt::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Iterator::ChangeValue()
{
    ::TopTools_DataMapOfShapeListOfShape* _result = new ::TopTools_DataMapOfShapeListOfShape();
    *_result = ((::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_DataMapOfShapeListOfShape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Iterator::Key()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepFill_DataMapOfShapeDataMapOfShapeListOfShape::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepFill_DataMapOfShapeHArray2OfShape
//---------------------------------------------------------------------

Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape::BRepFill_DataMapOfShapeHArray2OfShape()
    : Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeHArray2OfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_DataMapOfShapeHArray2OfShape();
}

Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape::BRepFill_DataMapOfShapeHArray2OfShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeHArray2OfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_DataMapOfShapeHArray2OfShape(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape::BRepFill_DataMapOfShapeHArray2OfShape(int theNbBuckets)
    : Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeHArray2OfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_DataMapOfShapeHArray2OfShape(theNbBuckets, 0L);
}

void Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape::Exchange(Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape^ theOther)
{
    ((::BRepFill_DataMapOfShapeHArray2OfShape*)_NativeInstance)->Exchange(*(::BRepFill_DataMapOfShapeHArray2OfShape*)theOther->NativeInstance);
}

Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape^ Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape::Assign(Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape^ theOther)
{
    ::BRepFill_DataMapOfShapeHArray2OfShape* _result = new ::BRepFill_DataMapOfShapeHArray2OfShape();
    *_result = ((::BRepFill_DataMapOfShapeHArray2OfShape*)_NativeInstance)->Assign(*(::BRepFill_DataMapOfShapeHArray2OfShape*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape(_result);
}

void Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape::ReSize(int N)
{
    ((::BRepFill_DataMapOfShapeHArray2OfShape*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape::Bind(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopTools_HArray2OfShape^ theItem)
{
    bool _result = ((::BRepFill_DataMapOfShapeHArray2OfShape*)_NativeInstance)->Bind(*(::TopoDS_Shape*)theKey->NativeInstance, Handle(::TopTools_HArray2OfShape)(theItem->NativeInstance));
    return _result;
}

Macad::Occt::TopTools_HArray2OfShape^ Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape::Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TopTools_HArray2OfShape^ theItem)
{
    throw gcnew System::NotImplementedException();
}

bool Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::BRepFill_DataMapOfShapeHArray2OfShape*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

bool Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::BRepFill_DataMapOfShapeHArray2OfShape*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

Macad::Occt::TopTools_HArray2OfShape^ Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape::Seek(Macad::Occt::TopoDS_Shape^ theKey)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::TopTools_HArray2OfShape^ Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape::Find(Macad::Occt::TopoDS_Shape^ theKey)
{
    Handle(::TopTools_HArray2OfShape) _result = ((::BRepFill_DataMapOfShapeHArray2OfShape*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::TopTools_HArray2OfShape::CreateDowncasted(_result.get());
}

Macad::Occt::TopTools_HArray2OfShape^ Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::TopTools_HArray2OfShape^ Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape::ChangeFind(Macad::Occt::TopoDS_Shape^ theKey)
{
    Handle(::TopTools_HArray2OfShape) _result = ((::BRepFill_DataMapOfShapeHArray2OfShape*)_NativeInstance)->ChangeFind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::TopTools_HArray2OfShape::CreateDowncasted(_result.get());
}

void Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape::Clear(bool doReleaseMemory)
{
    ((::BRepFill_DataMapOfShapeHArray2OfShape*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape::Clear()
{
    ((::BRepFill_DataMapOfShapeHArray2OfShape*)_NativeInstance)->Clear(false);
}

int Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape::Size()
{
    int _result = ((::BRepFill_DataMapOfShapeHArray2OfShape*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepFill_DataMapOfShapeHArray2OfShape::Iterator
//---------------------------------------------------------------------

Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape::Iterator::Iterator()
    : Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeHArray2OfShape::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_DataMapOfShapeHArray2OfShape::Iterator();
}

bool Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape::Iterator::More()
{
    bool _result = ((::BRepFill_DataMapOfShapeHArray2OfShape::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape::Iterator::Next()
{
    ((::BRepFill_DataMapOfShapeHArray2OfShape::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TopTools_HArray2OfShape^ Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape::Iterator::Value()
{
    Handle(::TopTools_HArray2OfShape) _result = ((::BRepFill_DataMapOfShapeHArray2OfShape::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::TopTools_HArray2OfShape::CreateDowncasted(_result.get());
}

Macad::Occt::TopTools_HArray2OfShape^ Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape::Iterator::ChangeValue()
{
    Handle(::TopTools_HArray2OfShape) _result = ((::BRepFill_DataMapOfShapeHArray2OfShape::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::TopTools_HArray2OfShape::CreateDowncasted(_result.get());
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape::Iterator::Key()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepFill_DataMapOfShapeHArray2OfShape::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepFill_DataMapOfShapeSequenceOfPnt
//---------------------------------------------------------------------

Macad::Occt::BRepFill_DataMapOfShapeSequenceOfPnt::BRepFill_DataMapOfShapeSequenceOfPnt()
    : Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeSequenceOfPnt>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_DataMapOfShapeSequenceOfPnt();
}

Macad::Occt::BRepFill_DataMapOfShapeSequenceOfPnt::BRepFill_DataMapOfShapeSequenceOfPnt(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeSequenceOfPnt>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_DataMapOfShapeSequenceOfPnt(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::BRepFill_DataMapOfShapeSequenceOfPnt::BRepFill_DataMapOfShapeSequenceOfPnt(int theNbBuckets)
    : Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeSequenceOfPnt>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_DataMapOfShapeSequenceOfPnt(theNbBuckets, 0L);
}

void Macad::Occt::BRepFill_DataMapOfShapeSequenceOfPnt::Exchange(Macad::Occt::BRepFill_DataMapOfShapeSequenceOfPnt^ theOther)
{
    ((::BRepFill_DataMapOfShapeSequenceOfPnt*)_NativeInstance)->Exchange(*(::BRepFill_DataMapOfShapeSequenceOfPnt*)theOther->NativeInstance);
}

Macad::Occt::BRepFill_DataMapOfShapeSequenceOfPnt^ Macad::Occt::BRepFill_DataMapOfShapeSequenceOfPnt::Assign(Macad::Occt::BRepFill_DataMapOfShapeSequenceOfPnt^ theOther)
{
    ::BRepFill_DataMapOfShapeSequenceOfPnt* _result = new ::BRepFill_DataMapOfShapeSequenceOfPnt();
    *_result = ((::BRepFill_DataMapOfShapeSequenceOfPnt*)_NativeInstance)->Assign(*(::BRepFill_DataMapOfShapeSequenceOfPnt*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_DataMapOfShapeSequenceOfPnt(_result);
}

void Macad::Occt::BRepFill_DataMapOfShapeSequenceOfPnt::ReSize(int N)
{
    ((::BRepFill_DataMapOfShapeSequenceOfPnt*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::BRepFill_DataMapOfShapeSequenceOfPnt::Bind(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TColgp_SequenceOfPnt^ theItem)
{
    bool _result = ((::BRepFill_DataMapOfShapeSequenceOfPnt*)_NativeInstance)->Bind(*(::TopoDS_Shape*)theKey->NativeInstance, *(::TColgp_SequenceOfPnt*)theItem->NativeInstance);
    return _result;
}

Macad::Occt::TColgp_SequenceOfPnt^ Macad::Occt::BRepFill_DataMapOfShapeSequenceOfPnt::Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TColgp_SequenceOfPnt^ theItem)
{
    ::TColgp_SequenceOfPnt* _result = ((::BRepFill_DataMapOfShapeSequenceOfPnt*)_NativeInstance)->Bound(*(::TopoDS_Shape*)theKey->NativeInstance, *(::TColgp_SequenceOfPnt*)theItem->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfPnt(_result);
}

bool Macad::Occt::BRepFill_DataMapOfShapeSequenceOfPnt::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::BRepFill_DataMapOfShapeSequenceOfPnt*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

bool Macad::Occt::BRepFill_DataMapOfShapeSequenceOfPnt::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::BRepFill_DataMapOfShapeSequenceOfPnt*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

Macad::Occt::TColgp_SequenceOfPnt^ Macad::Occt::BRepFill_DataMapOfShapeSequenceOfPnt::Seek(Macad::Occt::TopoDS_Shape^ theKey)
{
    const ::TColgp_SequenceOfPnt* _result = ((::BRepFill_DataMapOfShapeSequenceOfPnt*)_NativeInstance)->Seek(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfPnt((::TColgp_SequenceOfPnt*)_result);
}

Macad::Occt::TColgp_SequenceOfPnt^ Macad::Occt::BRepFill_DataMapOfShapeSequenceOfPnt::Find(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::TColgp_SequenceOfPnt* _result = new ::TColgp_SequenceOfPnt();
    *_result = (::TColgp_SequenceOfPnt)((::BRepFill_DataMapOfShapeSequenceOfPnt*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfPnt(_result);
}

Macad::Occt::TColgp_SequenceOfPnt^ Macad::Occt::BRepFill_DataMapOfShapeSequenceOfPnt::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::TColgp_SequenceOfPnt* _result = ((::BRepFill_DataMapOfShapeSequenceOfPnt*)_NativeInstance)->ChangeSeek(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfPnt(_result);
}

Macad::Occt::TColgp_SequenceOfPnt^ Macad::Occt::BRepFill_DataMapOfShapeSequenceOfPnt::ChangeFind(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::TColgp_SequenceOfPnt* _result = new ::TColgp_SequenceOfPnt();
    *_result = ((::BRepFill_DataMapOfShapeSequenceOfPnt*)_NativeInstance)->ChangeFind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfPnt(_result);
}

void Macad::Occt::BRepFill_DataMapOfShapeSequenceOfPnt::Clear(bool doReleaseMemory)
{
    ((::BRepFill_DataMapOfShapeSequenceOfPnt*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::BRepFill_DataMapOfShapeSequenceOfPnt::Clear()
{
    ((::BRepFill_DataMapOfShapeSequenceOfPnt*)_NativeInstance)->Clear(false);
}

int Macad::Occt::BRepFill_DataMapOfShapeSequenceOfPnt::Size()
{
    int _result = ((::BRepFill_DataMapOfShapeSequenceOfPnt*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepFill_DataMapOfShapeSequenceOfPnt::Iterator
//---------------------------------------------------------------------

Macad::Occt::BRepFill_DataMapOfShapeSequenceOfPnt::Iterator::Iterator()
    : Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeSequenceOfPnt::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_DataMapOfShapeSequenceOfPnt::Iterator();
}

bool Macad::Occt::BRepFill_DataMapOfShapeSequenceOfPnt::Iterator::More()
{
    bool _result = ((::BRepFill_DataMapOfShapeSequenceOfPnt::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::BRepFill_DataMapOfShapeSequenceOfPnt::Iterator::Next()
{
    ((::BRepFill_DataMapOfShapeSequenceOfPnt::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TColgp_SequenceOfPnt^ Macad::Occt::BRepFill_DataMapOfShapeSequenceOfPnt::Iterator::Value()
{
    ::TColgp_SequenceOfPnt* _result = new ::TColgp_SequenceOfPnt();
    *_result = (::TColgp_SequenceOfPnt)((::BRepFill_DataMapOfShapeSequenceOfPnt::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfPnt(_result);
}

Macad::Occt::TColgp_SequenceOfPnt^ Macad::Occt::BRepFill_DataMapOfShapeSequenceOfPnt::Iterator::ChangeValue()
{
    ::TColgp_SequenceOfPnt* _result = new ::TColgp_SequenceOfPnt();
    *_result = ((::BRepFill_DataMapOfShapeSequenceOfPnt::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColgp_SequenceOfPnt(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepFill_DataMapOfShapeSequenceOfPnt::Iterator::Key()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepFill_DataMapOfShapeSequenceOfPnt::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepFill_DataMapOfShapeSequenceOfReal
//---------------------------------------------------------------------

Macad::Occt::BRepFill_DataMapOfShapeSequenceOfReal::BRepFill_DataMapOfShapeSequenceOfReal()
    : Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeSequenceOfReal>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_DataMapOfShapeSequenceOfReal();
}

Macad::Occt::BRepFill_DataMapOfShapeSequenceOfReal::BRepFill_DataMapOfShapeSequenceOfReal(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeSequenceOfReal>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_DataMapOfShapeSequenceOfReal(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::BRepFill_DataMapOfShapeSequenceOfReal::BRepFill_DataMapOfShapeSequenceOfReal(int theNbBuckets)
    : Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeSequenceOfReal>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_DataMapOfShapeSequenceOfReal(theNbBuckets, 0L);
}

void Macad::Occt::BRepFill_DataMapOfShapeSequenceOfReal::Exchange(Macad::Occt::BRepFill_DataMapOfShapeSequenceOfReal^ theOther)
{
    ((::BRepFill_DataMapOfShapeSequenceOfReal*)_NativeInstance)->Exchange(*(::BRepFill_DataMapOfShapeSequenceOfReal*)theOther->NativeInstance);
}

Macad::Occt::BRepFill_DataMapOfShapeSequenceOfReal^ Macad::Occt::BRepFill_DataMapOfShapeSequenceOfReal::Assign(Macad::Occt::BRepFill_DataMapOfShapeSequenceOfReal^ theOther)
{
    ::BRepFill_DataMapOfShapeSequenceOfReal* _result = new ::BRepFill_DataMapOfShapeSequenceOfReal();
    *_result = ((::BRepFill_DataMapOfShapeSequenceOfReal*)_NativeInstance)->Assign(*(::BRepFill_DataMapOfShapeSequenceOfReal*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_DataMapOfShapeSequenceOfReal(_result);
}

void Macad::Occt::BRepFill_DataMapOfShapeSequenceOfReal::ReSize(int N)
{
    ((::BRepFill_DataMapOfShapeSequenceOfReal*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::BRepFill_DataMapOfShapeSequenceOfReal::Bind(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TColStd_SequenceOfReal^ theItem)
{
    bool _result = ((::BRepFill_DataMapOfShapeSequenceOfReal*)_NativeInstance)->Bind(*(::TopoDS_Shape*)theKey->NativeInstance, *(::TColStd_SequenceOfReal*)theItem->NativeInstance);
    return _result;
}

Macad::Occt::TColStd_SequenceOfReal^ Macad::Occt::BRepFill_DataMapOfShapeSequenceOfReal::Bound(Macad::Occt::TopoDS_Shape^ theKey, Macad::Occt::TColStd_SequenceOfReal^ theItem)
{
    ::TColStd_SequenceOfReal* _result = ((::BRepFill_DataMapOfShapeSequenceOfReal*)_NativeInstance)->Bound(*(::TopoDS_Shape*)theKey->NativeInstance, *(::TColStd_SequenceOfReal*)theItem->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_SequenceOfReal(_result);
}

bool Macad::Occt::BRepFill_DataMapOfShapeSequenceOfReal::IsBound(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::BRepFill_DataMapOfShapeSequenceOfReal*)_NativeInstance)->IsBound(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

bool Macad::Occt::BRepFill_DataMapOfShapeSequenceOfReal::UnBind(Macad::Occt::TopoDS_Shape^ theKey)
{
    bool _result = ((::BRepFill_DataMapOfShapeSequenceOfReal*)_NativeInstance)->UnBind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result;
}

Macad::Occt::TColStd_SequenceOfReal^ Macad::Occt::BRepFill_DataMapOfShapeSequenceOfReal::Seek(Macad::Occt::TopoDS_Shape^ theKey)
{
    const ::TColStd_SequenceOfReal* _result = ((::BRepFill_DataMapOfShapeSequenceOfReal*)_NativeInstance)->Seek(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_SequenceOfReal((::TColStd_SequenceOfReal*)_result);
}

Macad::Occt::TColStd_SequenceOfReal^ Macad::Occt::BRepFill_DataMapOfShapeSequenceOfReal::Find(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::TColStd_SequenceOfReal* _result = new ::TColStd_SequenceOfReal();
    *_result = (::TColStd_SequenceOfReal)((::BRepFill_DataMapOfShapeSequenceOfReal*)_NativeInstance)->Find(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_SequenceOfReal(_result);
}

Macad::Occt::TColStd_SequenceOfReal^ Macad::Occt::BRepFill_DataMapOfShapeSequenceOfReal::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::TColStd_SequenceOfReal* _result = ((::BRepFill_DataMapOfShapeSequenceOfReal*)_NativeInstance)->ChangeSeek(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_SequenceOfReal(_result);
}

Macad::Occt::TColStd_SequenceOfReal^ Macad::Occt::BRepFill_DataMapOfShapeSequenceOfReal::ChangeFind(Macad::Occt::TopoDS_Shape^ theKey)
{
    ::TColStd_SequenceOfReal* _result = new ::TColStd_SequenceOfReal();
    *_result = ((::BRepFill_DataMapOfShapeSequenceOfReal*)_NativeInstance)->ChangeFind(*(::TopoDS_Shape*)theKey->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_SequenceOfReal(_result);
}

void Macad::Occt::BRepFill_DataMapOfShapeSequenceOfReal::Clear(bool doReleaseMemory)
{
    ((::BRepFill_DataMapOfShapeSequenceOfReal*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::BRepFill_DataMapOfShapeSequenceOfReal::Clear()
{
    ((::BRepFill_DataMapOfShapeSequenceOfReal*)_NativeInstance)->Clear(false);
}

int Macad::Occt::BRepFill_DataMapOfShapeSequenceOfReal::Size()
{
    int _result = ((::BRepFill_DataMapOfShapeSequenceOfReal*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepFill_DataMapOfShapeSequenceOfReal::Iterator
//---------------------------------------------------------------------

Macad::Occt::BRepFill_DataMapOfShapeSequenceOfReal::Iterator::Iterator()
    : Macad::Occt::BaseClass<::BRepFill_DataMapOfShapeSequenceOfReal::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_DataMapOfShapeSequenceOfReal::Iterator();
}

bool Macad::Occt::BRepFill_DataMapOfShapeSequenceOfReal::Iterator::More()
{
    bool _result = ((::BRepFill_DataMapOfShapeSequenceOfReal::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::BRepFill_DataMapOfShapeSequenceOfReal::Iterator::Next()
{
    ((::BRepFill_DataMapOfShapeSequenceOfReal::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::TColStd_SequenceOfReal^ Macad::Occt::BRepFill_DataMapOfShapeSequenceOfReal::Iterator::Value()
{
    ::TColStd_SequenceOfReal* _result = new ::TColStd_SequenceOfReal();
    *_result = (::TColStd_SequenceOfReal)((::BRepFill_DataMapOfShapeSequenceOfReal::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_SequenceOfReal(_result);
}

Macad::Occt::TColStd_SequenceOfReal^ Macad::Occt::BRepFill_DataMapOfShapeSequenceOfReal::Iterator::ChangeValue()
{
    ::TColStd_SequenceOfReal* _result = new ::TColStd_SequenceOfReal();
    *_result = ((::BRepFill_DataMapOfShapeSequenceOfReal::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TColStd_SequenceOfReal(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepFill_DataMapOfShapeSequenceOfReal::Iterator::Key()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepFill_DataMapOfShapeSequenceOfReal::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepFill_SequenceOfEdgeFaceAndOrder
//---------------------------------------------------------------------

Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::BRepFill_SequenceOfEdgeFaceAndOrder()
    : Macad::Occt::BaseClass<::BRepFill_SequenceOfEdgeFaceAndOrder>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_SequenceOfEdgeFaceAndOrder();
}

Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::BRepFill_SequenceOfEdgeFaceAndOrder(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::BRepFill_SequenceOfEdgeFaceAndOrder>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_SequenceOfEdgeFaceAndOrder(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::Size()
{
    int _result = ((::BRepFill_SequenceOfEdgeFaceAndOrder*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::Length()
{
    int _result = ((::BRepFill_SequenceOfEdgeFaceAndOrder*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::Lower()
{
    int _result = ((::BRepFill_SequenceOfEdgeFaceAndOrder*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::Upper()
{
    int _result = ((::BRepFill_SequenceOfEdgeFaceAndOrder*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::IsEmpty()
{
    bool _result = ((::BRepFill_SequenceOfEdgeFaceAndOrder*)_NativeInstance)->IsEmpty();
    return _result;
}

void Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::Reverse()
{
    ((::BRepFill_SequenceOfEdgeFaceAndOrder*)_NativeInstance)->Reverse();
}

void Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::Exchange(int I, int J)
{
    ((::BRepFill_SequenceOfEdgeFaceAndOrder*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::BRepFill_SequenceOfEdgeFaceAndOrder*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::Clear()
{
    ((::BRepFill_SequenceOfEdgeFaceAndOrder*)_NativeInstance)->Clear(0L);
}

Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder^ Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::Assign(Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder^ theOther)
{
    ::BRepFill_SequenceOfEdgeFaceAndOrder* _result = new ::BRepFill_SequenceOfEdgeFaceAndOrder();
    *_result = ((::BRepFill_SequenceOfEdgeFaceAndOrder*)_NativeInstance)->Assign(*(::BRepFill_SequenceOfEdgeFaceAndOrder*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder(_result);
}

void Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::Remove(Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::Iterator^ thePosition)
{
    ((::BRepFill_SequenceOfEdgeFaceAndOrder*)_NativeInstance)->Remove(*(::BRepFill_SequenceOfEdgeFaceAndOrder::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::Append(Macad::Occt::BRepFill_EdgeFaceAndOrder^ theItem)
{
    ((::BRepFill_SequenceOfEdgeFaceAndOrder*)_NativeInstance)->Append(*(::BRepFill_EdgeFaceAndOrder*)theItem->NativeInstance);
}

void Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::Prepend(Macad::Occt::BRepFill_EdgeFaceAndOrder^ theItem)
{
    ((::BRepFill_SequenceOfEdgeFaceAndOrder*)_NativeInstance)->Prepend(*(::BRepFill_EdgeFaceAndOrder*)theItem->NativeInstance);
}

void Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::InsertBefore(int theIndex, Macad::Occt::BRepFill_EdgeFaceAndOrder^ theItem)
{
    ((::BRepFill_SequenceOfEdgeFaceAndOrder*)_NativeInstance)->InsertBefore(theIndex, *(::BRepFill_EdgeFaceAndOrder*)theItem->NativeInstance);
}

void Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::InsertAfter(Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::Iterator^ thePosition, Macad::Occt::BRepFill_EdgeFaceAndOrder^ theItem)
{
    ((::BRepFill_SequenceOfEdgeFaceAndOrder*)_NativeInstance)->InsertAfter(*(::BRepFill_SequenceOfEdgeFaceAndOrder::Iterator*)thePosition->NativeInstance, *(::BRepFill_EdgeFaceAndOrder*)theItem->NativeInstance);
}

void Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::Split(int theIndex, Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder^ theSeq)
{
    ((::BRepFill_SequenceOfEdgeFaceAndOrder*)_NativeInstance)->Split(theIndex, *(::BRepFill_SequenceOfEdgeFaceAndOrder*)theSeq->NativeInstance);
}

Macad::Occt::BRepFill_EdgeFaceAndOrder^ Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::First()
{
    ::BRepFill_EdgeFaceAndOrder* _result = new ::BRepFill_EdgeFaceAndOrder();
    *_result = (::BRepFill_EdgeFaceAndOrder)((::BRepFill_SequenceOfEdgeFaceAndOrder*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_EdgeFaceAndOrder(_result);
}

Macad::Occt::BRepFill_EdgeFaceAndOrder^ Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::ChangeFirst()
{
    ::BRepFill_EdgeFaceAndOrder* _result = new ::BRepFill_EdgeFaceAndOrder();
    *_result = ((::BRepFill_SequenceOfEdgeFaceAndOrder*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_EdgeFaceAndOrder(_result);
}

Macad::Occt::BRepFill_EdgeFaceAndOrder^ Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::Last()
{
    ::BRepFill_EdgeFaceAndOrder* _result = new ::BRepFill_EdgeFaceAndOrder();
    *_result = (::BRepFill_EdgeFaceAndOrder)((::BRepFill_SequenceOfEdgeFaceAndOrder*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_EdgeFaceAndOrder(_result);
}

Macad::Occt::BRepFill_EdgeFaceAndOrder^ Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::ChangeLast()
{
    ::BRepFill_EdgeFaceAndOrder* _result = new ::BRepFill_EdgeFaceAndOrder();
    *_result = ((::BRepFill_SequenceOfEdgeFaceAndOrder*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_EdgeFaceAndOrder(_result);
}

Macad::Occt::BRepFill_EdgeFaceAndOrder^ Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::Value(int theIndex)
{
    ::BRepFill_EdgeFaceAndOrder* _result = new ::BRepFill_EdgeFaceAndOrder();
    *_result = (::BRepFill_EdgeFaceAndOrder)((::BRepFill_SequenceOfEdgeFaceAndOrder*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_EdgeFaceAndOrder(_result);
}

Macad::Occt::BRepFill_EdgeFaceAndOrder^ Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::ChangeValue(int theIndex)
{
    ::BRepFill_EdgeFaceAndOrder* _result = new ::BRepFill_EdgeFaceAndOrder();
    *_result = ((::BRepFill_SequenceOfEdgeFaceAndOrder*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_EdgeFaceAndOrder(_result);
}

void Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::SetValue(int theIndex, Macad::Occt::BRepFill_EdgeFaceAndOrder^ theItem)
{
    ((::BRepFill_SequenceOfEdgeFaceAndOrder*)_NativeInstance)->SetValue(theIndex, *(::BRepFill_EdgeFaceAndOrder*)theItem->NativeInstance);
}

System::Collections::Generic::IEnumerator<Macad::Occt::BRepFill_EdgeFaceAndOrder^>^ Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::BRepFill_EdgeFaceAndOrder^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::BRepFill_EdgeFaceAndOrder^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  BRepFill_SequenceOfEdgeFaceAndOrder::Iterator
//---------------------------------------------------------------------

Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::Iterator::Iterator()
    : Macad::Occt::BaseClass<::BRepFill_SequenceOfEdgeFaceAndOrder::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_SequenceOfEdgeFaceAndOrder::Iterator();
}

bool Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::Iterator::More()
{
    bool _result = ((::BRepFill_SequenceOfEdgeFaceAndOrder::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::Iterator::Next()
{
    ((::BRepFill_SequenceOfEdgeFaceAndOrder::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::BRepFill_EdgeFaceAndOrder^ Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::Iterator::Value()
{
    ::BRepFill_EdgeFaceAndOrder* _result = new ::BRepFill_EdgeFaceAndOrder();
    *_result = (::BRepFill_EdgeFaceAndOrder)((::BRepFill_SequenceOfEdgeFaceAndOrder::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_EdgeFaceAndOrder(_result);
}

Macad::Occt::BRepFill_EdgeFaceAndOrder^ Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::Iterator::ChangeValue()
{
    ::BRepFill_EdgeFaceAndOrder* _result = new ::BRepFill_EdgeFaceAndOrder();
    *_result = ((::BRepFill_SequenceOfEdgeFaceAndOrder::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_EdgeFaceAndOrder(_result);
}

bool Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::Iterator::IsEqual(Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::Iterator^ theOther)
{
    bool _result = ((::BRepFill_SequenceOfEdgeFaceAndOrder::Iterator*)_NativeInstance)->IsEqual(*(::BRepFill_SequenceOfEdgeFaceAndOrder::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::BRepFill_SequenceOfEdgeFaceAndOrder::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  BRepFill_SequenceOfFaceAndOrder
//---------------------------------------------------------------------

Macad::Occt::BRepFill_SequenceOfFaceAndOrder::BRepFill_SequenceOfFaceAndOrder()
    : Macad::Occt::BaseClass<::BRepFill_SequenceOfFaceAndOrder>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_SequenceOfFaceAndOrder();
}

Macad::Occt::BRepFill_SequenceOfFaceAndOrder::BRepFill_SequenceOfFaceAndOrder(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::BRepFill_SequenceOfFaceAndOrder>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_SequenceOfFaceAndOrder(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::BRepFill_SequenceOfFaceAndOrder::Size()
{
    int _result = ((::BRepFill_SequenceOfFaceAndOrder*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::BRepFill_SequenceOfFaceAndOrder::Length()
{
    int _result = ((::BRepFill_SequenceOfFaceAndOrder*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::BRepFill_SequenceOfFaceAndOrder::Lower()
{
    int _result = ((::BRepFill_SequenceOfFaceAndOrder*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::BRepFill_SequenceOfFaceAndOrder::Upper()
{
    int _result = ((::BRepFill_SequenceOfFaceAndOrder*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::BRepFill_SequenceOfFaceAndOrder::IsEmpty()
{
    bool _result = ((::BRepFill_SequenceOfFaceAndOrder*)_NativeInstance)->IsEmpty();
    return _result;
}

void Macad::Occt::BRepFill_SequenceOfFaceAndOrder::Reverse()
{
    ((::BRepFill_SequenceOfFaceAndOrder*)_NativeInstance)->Reverse();
}

void Macad::Occt::BRepFill_SequenceOfFaceAndOrder::Exchange(int I, int J)
{
    ((::BRepFill_SequenceOfFaceAndOrder*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::BRepFill_SequenceOfFaceAndOrder::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::BRepFill_SequenceOfFaceAndOrder*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::BRepFill_SequenceOfFaceAndOrder::Clear()
{
    ((::BRepFill_SequenceOfFaceAndOrder*)_NativeInstance)->Clear(0L);
}

Macad::Occt::BRepFill_SequenceOfFaceAndOrder^ Macad::Occt::BRepFill_SequenceOfFaceAndOrder::Assign(Macad::Occt::BRepFill_SequenceOfFaceAndOrder^ theOther)
{
    ::BRepFill_SequenceOfFaceAndOrder* _result = new ::BRepFill_SequenceOfFaceAndOrder();
    *_result = ((::BRepFill_SequenceOfFaceAndOrder*)_NativeInstance)->Assign(*(::BRepFill_SequenceOfFaceAndOrder*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_SequenceOfFaceAndOrder(_result);
}

void Macad::Occt::BRepFill_SequenceOfFaceAndOrder::Remove(Macad::Occt::BRepFill_SequenceOfFaceAndOrder::Iterator^ thePosition)
{
    ((::BRepFill_SequenceOfFaceAndOrder*)_NativeInstance)->Remove(*(::BRepFill_SequenceOfFaceAndOrder::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::BRepFill_SequenceOfFaceAndOrder::Append(Macad::Occt::BRepFill_FaceAndOrder^ theItem)
{
    ((::BRepFill_SequenceOfFaceAndOrder*)_NativeInstance)->Append(*(::BRepFill_FaceAndOrder*)theItem->NativeInstance);
}

void Macad::Occt::BRepFill_SequenceOfFaceAndOrder::Prepend(Macad::Occt::BRepFill_FaceAndOrder^ theItem)
{
    ((::BRepFill_SequenceOfFaceAndOrder*)_NativeInstance)->Prepend(*(::BRepFill_FaceAndOrder*)theItem->NativeInstance);
}

void Macad::Occt::BRepFill_SequenceOfFaceAndOrder::InsertBefore(int theIndex, Macad::Occt::BRepFill_FaceAndOrder^ theItem)
{
    ((::BRepFill_SequenceOfFaceAndOrder*)_NativeInstance)->InsertBefore(theIndex, *(::BRepFill_FaceAndOrder*)theItem->NativeInstance);
}

void Macad::Occt::BRepFill_SequenceOfFaceAndOrder::InsertAfter(Macad::Occt::BRepFill_SequenceOfFaceAndOrder::Iterator^ thePosition, Macad::Occt::BRepFill_FaceAndOrder^ theItem)
{
    ((::BRepFill_SequenceOfFaceAndOrder*)_NativeInstance)->InsertAfter(*(::BRepFill_SequenceOfFaceAndOrder::Iterator*)thePosition->NativeInstance, *(::BRepFill_FaceAndOrder*)theItem->NativeInstance);
}

void Macad::Occt::BRepFill_SequenceOfFaceAndOrder::Split(int theIndex, Macad::Occt::BRepFill_SequenceOfFaceAndOrder^ theSeq)
{
    ((::BRepFill_SequenceOfFaceAndOrder*)_NativeInstance)->Split(theIndex, *(::BRepFill_SequenceOfFaceAndOrder*)theSeq->NativeInstance);
}

Macad::Occt::BRepFill_FaceAndOrder^ Macad::Occt::BRepFill_SequenceOfFaceAndOrder::First()
{
    ::BRepFill_FaceAndOrder* _result = new ::BRepFill_FaceAndOrder();
    *_result = (::BRepFill_FaceAndOrder)((::BRepFill_SequenceOfFaceAndOrder*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_FaceAndOrder(_result);
}

Macad::Occt::BRepFill_FaceAndOrder^ Macad::Occt::BRepFill_SequenceOfFaceAndOrder::ChangeFirst()
{
    ::BRepFill_FaceAndOrder* _result = new ::BRepFill_FaceAndOrder();
    *_result = ((::BRepFill_SequenceOfFaceAndOrder*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_FaceAndOrder(_result);
}

Macad::Occt::BRepFill_FaceAndOrder^ Macad::Occt::BRepFill_SequenceOfFaceAndOrder::Last()
{
    ::BRepFill_FaceAndOrder* _result = new ::BRepFill_FaceAndOrder();
    *_result = (::BRepFill_FaceAndOrder)((::BRepFill_SequenceOfFaceAndOrder*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_FaceAndOrder(_result);
}

Macad::Occt::BRepFill_FaceAndOrder^ Macad::Occt::BRepFill_SequenceOfFaceAndOrder::ChangeLast()
{
    ::BRepFill_FaceAndOrder* _result = new ::BRepFill_FaceAndOrder();
    *_result = ((::BRepFill_SequenceOfFaceAndOrder*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_FaceAndOrder(_result);
}

Macad::Occt::BRepFill_FaceAndOrder^ Macad::Occt::BRepFill_SequenceOfFaceAndOrder::Value(int theIndex)
{
    ::BRepFill_FaceAndOrder* _result = new ::BRepFill_FaceAndOrder();
    *_result = (::BRepFill_FaceAndOrder)((::BRepFill_SequenceOfFaceAndOrder*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_FaceAndOrder(_result);
}

Macad::Occt::BRepFill_FaceAndOrder^ Macad::Occt::BRepFill_SequenceOfFaceAndOrder::ChangeValue(int theIndex)
{
    ::BRepFill_FaceAndOrder* _result = new ::BRepFill_FaceAndOrder();
    *_result = ((::BRepFill_SequenceOfFaceAndOrder*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_FaceAndOrder(_result);
}

void Macad::Occt::BRepFill_SequenceOfFaceAndOrder::SetValue(int theIndex, Macad::Occt::BRepFill_FaceAndOrder^ theItem)
{
    ((::BRepFill_SequenceOfFaceAndOrder*)_NativeInstance)->SetValue(theIndex, *(::BRepFill_FaceAndOrder*)theItem->NativeInstance);
}

System::Collections::Generic::IEnumerator<Macad::Occt::BRepFill_FaceAndOrder^>^ Macad::Occt::BRepFill_SequenceOfFaceAndOrder::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::BRepFill_FaceAndOrder^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::BRepFill_SequenceOfFaceAndOrder::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::BRepFill_FaceAndOrder^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  BRepFill_SequenceOfFaceAndOrder::Iterator
//---------------------------------------------------------------------

Macad::Occt::BRepFill_SequenceOfFaceAndOrder::Iterator::Iterator()
    : Macad::Occt::BaseClass<::BRepFill_SequenceOfFaceAndOrder::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_SequenceOfFaceAndOrder::Iterator();
}

bool Macad::Occt::BRepFill_SequenceOfFaceAndOrder::Iterator::More()
{
    bool _result = ((::BRepFill_SequenceOfFaceAndOrder::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::BRepFill_SequenceOfFaceAndOrder::Iterator::Next()
{
    ((::BRepFill_SequenceOfFaceAndOrder::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::BRepFill_FaceAndOrder^ Macad::Occt::BRepFill_SequenceOfFaceAndOrder::Iterator::Value()
{
    ::BRepFill_FaceAndOrder* _result = new ::BRepFill_FaceAndOrder();
    *_result = (::BRepFill_FaceAndOrder)((::BRepFill_SequenceOfFaceAndOrder::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_FaceAndOrder(_result);
}

Macad::Occt::BRepFill_FaceAndOrder^ Macad::Occt::BRepFill_SequenceOfFaceAndOrder::Iterator::ChangeValue()
{
    ::BRepFill_FaceAndOrder* _result = new ::BRepFill_FaceAndOrder();
    *_result = ((::BRepFill_SequenceOfFaceAndOrder::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_FaceAndOrder(_result);
}

bool Macad::Occt::BRepFill_SequenceOfFaceAndOrder::Iterator::IsEqual(Macad::Occt::BRepFill_SequenceOfFaceAndOrder::Iterator^ theOther)
{
    bool _result = ((::BRepFill_SequenceOfFaceAndOrder::Iterator*)_NativeInstance)->IsEqual(*(::BRepFill_SequenceOfFaceAndOrder::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::BRepFill_SequenceOfFaceAndOrder::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::BRepFill_SequenceOfFaceAndOrder::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  BRepFill_IndexedDataMapOfOrientedShapeListOfShape
//---------------------------------------------------------------------

Macad::Occt::BRepFill_IndexedDataMapOfOrientedShapeListOfShape::BRepFill_IndexedDataMapOfOrientedShapeListOfShape()
    : Macad::Occt::BaseClass<::BRepFill_IndexedDataMapOfOrientedShapeListOfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_IndexedDataMapOfOrientedShapeListOfShape();
}

Macad::Occt::BRepFill_IndexedDataMapOfOrientedShapeListOfShape::BRepFill_IndexedDataMapOfOrientedShapeListOfShape(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::BRepFill_IndexedDataMapOfOrientedShapeListOfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_IndexedDataMapOfOrientedShapeListOfShape(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::BRepFill_IndexedDataMapOfOrientedShapeListOfShape::BRepFill_IndexedDataMapOfOrientedShapeListOfShape(int theNbBuckets)
    : Macad::Occt::BaseClass<::BRepFill_IndexedDataMapOfOrientedShapeListOfShape>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_IndexedDataMapOfOrientedShapeListOfShape(theNbBuckets, 0L);
}

void Macad::Occt::BRepFill_IndexedDataMapOfOrientedShapeListOfShape::Exchange(Macad::Occt::BRepFill_IndexedDataMapOfOrientedShapeListOfShape^ theOther)
{
    ((::BRepFill_IndexedDataMapOfOrientedShapeListOfShape*)_NativeInstance)->Exchange(*(::BRepFill_IndexedDataMapOfOrientedShapeListOfShape*)theOther->NativeInstance);
}

Macad::Occt::BRepFill_IndexedDataMapOfOrientedShapeListOfShape^ Macad::Occt::BRepFill_IndexedDataMapOfOrientedShapeListOfShape::Assign(Macad::Occt::BRepFill_IndexedDataMapOfOrientedShapeListOfShape^ theOther)
{
    ::BRepFill_IndexedDataMapOfOrientedShapeListOfShape* _result = new ::BRepFill_IndexedDataMapOfOrientedShapeListOfShape();
    *_result = ((::BRepFill_IndexedDataMapOfOrientedShapeListOfShape*)_NativeInstance)->Assign(*(::BRepFill_IndexedDataMapOfOrientedShapeListOfShape*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_IndexedDataMapOfOrientedShapeListOfShape(_result);
}

void Macad::Occt::BRepFill_IndexedDataMapOfOrientedShapeListOfShape::ReSize(int N)
{
    ((::BRepFill_IndexedDataMapOfOrientedShapeListOfShape*)_NativeInstance)->ReSize(N);
}

int Macad::Occt::BRepFill_IndexedDataMapOfOrientedShapeListOfShape::Add(Macad::Occt::TopoDS_Shape^ theKey1, Macad::Occt::TopoDS_ListOfShape^ theItem)
{
    int _result = ((::BRepFill_IndexedDataMapOfOrientedShapeListOfShape*)_NativeInstance)->Add(*(::TopoDS_Shape*)theKey1->NativeInstance, *(::TopoDS_ListOfShape*)theItem->NativeInstance);
    return _result;
}

bool Macad::Occt::BRepFill_IndexedDataMapOfOrientedShapeListOfShape::Contains(Macad::Occt::TopoDS_Shape^ theKey1)
{
    bool _result = ((::BRepFill_IndexedDataMapOfOrientedShapeListOfShape*)_NativeInstance)->Contains(*(::TopoDS_Shape*)theKey1->NativeInstance);
    return _result;
}

void Macad::Occt::BRepFill_IndexedDataMapOfOrientedShapeListOfShape::Substitute(int theIndex, Macad::Occt::TopoDS_Shape^ theKey1, Macad::Occt::TopoDS_ListOfShape^ theItem)
{
    ((::BRepFill_IndexedDataMapOfOrientedShapeListOfShape*)_NativeInstance)->Substitute(theIndex, *(::TopoDS_Shape*)theKey1->NativeInstance, *(::TopoDS_ListOfShape*)theItem->NativeInstance);
}

void Macad::Occt::BRepFill_IndexedDataMapOfOrientedShapeListOfShape::Swap(int theIndex1, int theIndex2)
{
    ((::BRepFill_IndexedDataMapOfOrientedShapeListOfShape*)_NativeInstance)->Swap(theIndex1, theIndex2);
}

void Macad::Occt::BRepFill_IndexedDataMapOfOrientedShapeListOfShape::RemoveLast()
{
    ((::BRepFill_IndexedDataMapOfOrientedShapeListOfShape*)_NativeInstance)->RemoveLast();
}

void Macad::Occt::BRepFill_IndexedDataMapOfOrientedShapeListOfShape::RemoveFromIndex(int theIndex)
{
    ((::BRepFill_IndexedDataMapOfOrientedShapeListOfShape*)_NativeInstance)->RemoveFromIndex(theIndex);
}

void Macad::Occt::BRepFill_IndexedDataMapOfOrientedShapeListOfShape::RemoveKey(Macad::Occt::TopoDS_Shape^ theKey1)
{
    ((::BRepFill_IndexedDataMapOfOrientedShapeListOfShape*)_NativeInstance)->RemoveKey(*(::TopoDS_Shape*)theKey1->NativeInstance);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepFill_IndexedDataMapOfOrientedShapeListOfShape::FindKey(int theIndex)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepFill_IndexedDataMapOfOrientedShapeListOfShape*)_NativeInstance)->FindKey(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::BRepFill_IndexedDataMapOfOrientedShapeListOfShape::FindFromIndex(int theIndex)
{
    ::TopoDS_ListOfShape* _result = new ::TopoDS_ListOfShape();
    *_result = (::TopoDS_ListOfShape)((::BRepFill_IndexedDataMapOfOrientedShapeListOfShape*)_NativeInstance)->FindFromIndex(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::BRepFill_IndexedDataMapOfOrientedShapeListOfShape::ChangeFromIndex(int theIndex)
{
    ::TopoDS_ListOfShape* _result = new ::TopoDS_ListOfShape();
    *_result = ((::BRepFill_IndexedDataMapOfOrientedShapeListOfShape*)_NativeInstance)->ChangeFromIndex(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

int Macad::Occt::BRepFill_IndexedDataMapOfOrientedShapeListOfShape::FindIndex(Macad::Occt::TopoDS_Shape^ theKey1)
{
    int _result = ((::BRepFill_IndexedDataMapOfOrientedShapeListOfShape*)_NativeInstance)->FindIndex(*(::TopoDS_Shape*)theKey1->NativeInstance);
    return _result;
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::BRepFill_IndexedDataMapOfOrientedShapeListOfShape::FindFromKey(Macad::Occt::TopoDS_Shape^ theKey1)
{
    ::TopoDS_ListOfShape* _result = new ::TopoDS_ListOfShape();
    *_result = (::TopoDS_ListOfShape)((::BRepFill_IndexedDataMapOfOrientedShapeListOfShape*)_NativeInstance)->FindFromKey(*(::TopoDS_Shape*)theKey1->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::BRepFill_IndexedDataMapOfOrientedShapeListOfShape::ChangeFromKey(Macad::Occt::TopoDS_Shape^ theKey1)
{
    ::TopoDS_ListOfShape* _result = new ::TopoDS_ListOfShape();
    *_result = ((::BRepFill_IndexedDataMapOfOrientedShapeListOfShape*)_NativeInstance)->ChangeFromKey(*(::TopoDS_Shape*)theKey1->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::BRepFill_IndexedDataMapOfOrientedShapeListOfShape::Seek(Macad::Occt::TopoDS_Shape^ theKey1)
{
    const ::TopoDS_ListOfShape* _result = ((::BRepFill_IndexedDataMapOfOrientedShapeListOfShape*)_NativeInstance)->Seek(*(::TopoDS_Shape*)theKey1->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape((::TopoDS_ListOfShape*)_result);
}

Macad::Occt::TopoDS_ListOfShape^ Macad::Occt::BRepFill_IndexedDataMapOfOrientedShapeListOfShape::ChangeSeek(Macad::Occt::TopoDS_Shape^ theKey1)
{
    ::TopoDS_ListOfShape* _result = ((::BRepFill_IndexedDataMapOfOrientedShapeListOfShape*)_NativeInstance)->ChangeSeek(*(::TopoDS_Shape*)theKey1->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_ListOfShape(_result);
}

void Macad::Occt::BRepFill_IndexedDataMapOfOrientedShapeListOfShape::Clear(bool doReleaseMemory)
{
    ((::BRepFill_IndexedDataMapOfOrientedShapeListOfShape*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::BRepFill_IndexedDataMapOfOrientedShapeListOfShape::Clear()
{
    ((::BRepFill_IndexedDataMapOfOrientedShapeListOfShape*)_NativeInstance)->Clear(false);
}

int Macad::Occt::BRepFill_IndexedDataMapOfOrientedShapeListOfShape::Size()
{
    int _result = ((::BRepFill_IndexedDataMapOfOrientedShapeListOfShape*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepFill_IndexedDataMapOfOrientedShapeListOfShape::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  BRepFill_ListOfOffsetWire
//---------------------------------------------------------------------

Macad::Occt::BRepFill_ListOfOffsetWire::BRepFill_ListOfOffsetWire()
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_ListOfOffsetWire();
}

Macad::Occt::BRepFill_ListOfOffsetWire::BRepFill_ListOfOffsetWire(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_ListOfOffsetWire(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::BRepFill_ListOfOffsetWire::Size()
{
    int _result = ((::BRepFill_ListOfOffsetWire*)_NativeInstance)->Size();
    return _result;
}

Macad::Occt::BRepFill_ListOfOffsetWire^ Macad::Occt::BRepFill_ListOfOffsetWire::Assign(Macad::Occt::BRepFill_ListOfOffsetWire^ theOther)
{
    ::BRepFill_ListOfOffsetWire* _result = new ::BRepFill_ListOfOffsetWire();
    *_result = ((::BRepFill_ListOfOffsetWire*)_NativeInstance)->Assign(*(::BRepFill_ListOfOffsetWire*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_ListOfOffsetWire(_result);
}

void Macad::Occt::BRepFill_ListOfOffsetWire::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::BRepFill_ListOfOffsetWire*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::BRepFill_ListOfOffsetWire::Clear()
{
    ((::BRepFill_ListOfOffsetWire*)_NativeInstance)->Clear(0L);
}

Macad::Occt::BRepFill_OffsetWire^ Macad::Occt::BRepFill_ListOfOffsetWire::First()
{
    ::BRepFill_OffsetWire* _result = new ::BRepFill_OffsetWire();
    *_result = (::BRepFill_OffsetWire)((::BRepFill_ListOfOffsetWire*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_OffsetWire(_result);
}

Macad::Occt::BRepFill_OffsetWire^ Macad::Occt::BRepFill_ListOfOffsetWire::Last()
{
    ::BRepFill_OffsetWire* _result = new ::BRepFill_OffsetWire();
    *_result = (::BRepFill_OffsetWire)((::BRepFill_ListOfOffsetWire*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_OffsetWire(_result);
}

Macad::Occt::BRepFill_OffsetWire^ Macad::Occt::BRepFill_ListOfOffsetWire::Append(Macad::Occt::BRepFill_OffsetWire^ theItem)
{
    ::BRepFill_OffsetWire* _result = new ::BRepFill_OffsetWire();
    *_result = ((::BRepFill_ListOfOffsetWire*)_NativeInstance)->Append(*(::BRepFill_OffsetWire*)theItem->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_OffsetWire(_result);
}

Macad::Occt::BRepFill_OffsetWire^ Macad::Occt::BRepFill_ListOfOffsetWire::Prepend(Macad::Occt::BRepFill_OffsetWire^ theItem)
{
    ::BRepFill_OffsetWire* _result = new ::BRepFill_OffsetWire();
    *_result = ((::BRepFill_ListOfOffsetWire*)_NativeInstance)->Prepend(*(::BRepFill_OffsetWire*)theItem->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_OffsetWire(_result);
}

void Macad::Occt::BRepFill_ListOfOffsetWire::RemoveFirst()
{
    ((::BRepFill_ListOfOffsetWire*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::BRepFill_ListOfOffsetWire::Remove(Macad::Occt::BRepFill_ListOfOffsetWire::Iterator^ theIter)
{
    ((::BRepFill_ListOfOffsetWire*)_NativeInstance)->Remove(*(::BRepFill_ListOfOffsetWire::Iterator*)theIter->NativeInstance);
}

Macad::Occt::BRepFill_OffsetWire^ Macad::Occt::BRepFill_ListOfOffsetWire::InsertBefore(Macad::Occt::BRepFill_OffsetWire^ theItem, Macad::Occt::BRepFill_ListOfOffsetWire::Iterator^ theIter)
{
    ::BRepFill_OffsetWire* _result = new ::BRepFill_OffsetWire();
    *_result = ((::BRepFill_ListOfOffsetWire*)_NativeInstance)->InsertBefore(*(::BRepFill_OffsetWire*)theItem->NativeInstance, *(::BRepFill_ListOfOffsetWire::Iterator*)theIter->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_OffsetWire(_result);
}

Macad::Occt::BRepFill_OffsetWire^ Macad::Occt::BRepFill_ListOfOffsetWire::InsertAfter(Macad::Occt::BRepFill_OffsetWire^ theItem, Macad::Occt::BRepFill_ListOfOffsetWire::Iterator^ theIter)
{
    ::BRepFill_OffsetWire* _result = new ::BRepFill_OffsetWire();
    *_result = ((::BRepFill_ListOfOffsetWire*)_NativeInstance)->InsertAfter(*(::BRepFill_OffsetWire*)theItem->NativeInstance, *(::BRepFill_ListOfOffsetWire::Iterator*)theIter->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_OffsetWire(_result);
}

void Macad::Occt::BRepFill_ListOfOffsetWire::Reverse()
{
    ((::BRepFill_ListOfOffsetWire*)_NativeInstance)->Reverse();
}

System::Collections::Generic::IEnumerator<Macad::Occt::BRepFill_OffsetWire^>^ Macad::Occt::BRepFill_ListOfOffsetWire::GetEnumerator()
{
    return gcnew Macad::Occt::BRepFill_ListOfOffsetWire::Iterator(new ::BRepFill_ListOfOffsetWire::Iterator(*NativeInstance));
}

System::Collections::IEnumerator^ Macad::Occt::BRepFill_ListOfOffsetWire::GetEnumerator2()
{
    return gcnew Macad::Occt::BRepFill_ListOfOffsetWire::Iterator(new ::BRepFill_ListOfOffsetWire::Iterator(*NativeInstance));
}



//---------------------------------------------------------------------
//  Class  BRepFill_ListOfOffsetWire::Iterator
//---------------------------------------------------------------------

Macad::Occt::BRepFill_ListOfOffsetWire::Iterator::Iterator()
    : Macad::Occt::IteratorEnumerator<Macad::Occt::BRepFill_OffsetWire^, ::BRepFill_ListOfOffsetWire::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_ListOfOffsetWire::Iterator();
}

bool Macad::Occt::BRepFill_ListOfOffsetWire::Iterator::More()
{
    bool _result = ((::BRepFill_ListOfOffsetWire::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::BRepFill_ListOfOffsetWire::Iterator::Next()
{
    ((::BRepFill_ListOfOffsetWire::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::BRepFill_OffsetWire^ Macad::Occt::BRepFill_ListOfOffsetWire::Iterator::Value()
{
    ::BRepFill_OffsetWire* _result = new ::BRepFill_OffsetWire();
    *_result = (::BRepFill_OffsetWire)((::BRepFill_ListOfOffsetWire::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_OffsetWire(_result);
}

Macad::Occt::BRepFill_OffsetWire^ Macad::Occt::BRepFill_ListOfOffsetWire::Iterator::ChangeValue()
{
    ::BRepFill_OffsetWire* _result = new ::BRepFill_OffsetWire();
    *_result = ((::BRepFill_ListOfOffsetWire::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_OffsetWire(_result);
}



//---------------------------------------------------------------------
//  Class  BRepFill_SequenceOfSection
//---------------------------------------------------------------------

Macad::Occt::BRepFill_SequenceOfSection::BRepFill_SequenceOfSection()
    : Macad::Occt::BaseClass<::BRepFill_SequenceOfSection>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_SequenceOfSection();
}

Macad::Occt::BRepFill_SequenceOfSection::BRepFill_SequenceOfSection(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::BRepFill_SequenceOfSection>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_SequenceOfSection(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::BRepFill_SequenceOfSection::Size()
{
    int _result = ((::BRepFill_SequenceOfSection*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::BRepFill_SequenceOfSection::Length()
{
    int _result = ((::BRepFill_SequenceOfSection*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::BRepFill_SequenceOfSection::Lower()
{
    int _result = ((::BRepFill_SequenceOfSection*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::BRepFill_SequenceOfSection::Upper()
{
    int _result = ((::BRepFill_SequenceOfSection*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::BRepFill_SequenceOfSection::IsEmpty()
{
    bool _result = ((::BRepFill_SequenceOfSection*)_NativeInstance)->IsEmpty();
    return _result;
}

void Macad::Occt::BRepFill_SequenceOfSection::Reverse()
{
    ((::BRepFill_SequenceOfSection*)_NativeInstance)->Reverse();
}

void Macad::Occt::BRepFill_SequenceOfSection::Exchange(int I, int J)
{
    ((::BRepFill_SequenceOfSection*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::BRepFill_SequenceOfSection::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::BRepFill_SequenceOfSection*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::BRepFill_SequenceOfSection::Clear()
{
    ((::BRepFill_SequenceOfSection*)_NativeInstance)->Clear(0L);
}

Macad::Occt::BRepFill_SequenceOfSection^ Macad::Occt::BRepFill_SequenceOfSection::Assign(Macad::Occt::BRepFill_SequenceOfSection^ theOther)
{
    ::BRepFill_SequenceOfSection* _result = new ::BRepFill_SequenceOfSection();
    *_result = ((::BRepFill_SequenceOfSection*)_NativeInstance)->Assign(*(::BRepFill_SequenceOfSection*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_SequenceOfSection(_result);
}

void Macad::Occt::BRepFill_SequenceOfSection::Remove(Macad::Occt::BRepFill_SequenceOfSection::Iterator^ thePosition)
{
    ((::BRepFill_SequenceOfSection*)_NativeInstance)->Remove(*(::BRepFill_SequenceOfSection::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::BRepFill_SequenceOfSection::Append(Macad::Occt::BRepFill_Section^ theItem)
{
    ((::BRepFill_SequenceOfSection*)_NativeInstance)->Append(*(::BRepFill_Section*)theItem->NativeInstance);
}

void Macad::Occt::BRepFill_SequenceOfSection::Prepend(Macad::Occt::BRepFill_Section^ theItem)
{
    ((::BRepFill_SequenceOfSection*)_NativeInstance)->Prepend(*(::BRepFill_Section*)theItem->NativeInstance);
}

void Macad::Occt::BRepFill_SequenceOfSection::InsertBefore(int theIndex, Macad::Occt::BRepFill_Section^ theItem)
{
    ((::BRepFill_SequenceOfSection*)_NativeInstance)->InsertBefore(theIndex, *(::BRepFill_Section*)theItem->NativeInstance);
}

void Macad::Occt::BRepFill_SequenceOfSection::InsertAfter(Macad::Occt::BRepFill_SequenceOfSection::Iterator^ thePosition, Macad::Occt::BRepFill_Section^ theItem)
{
    ((::BRepFill_SequenceOfSection*)_NativeInstance)->InsertAfter(*(::BRepFill_SequenceOfSection::Iterator*)thePosition->NativeInstance, *(::BRepFill_Section*)theItem->NativeInstance);
}

void Macad::Occt::BRepFill_SequenceOfSection::Split(int theIndex, Macad::Occt::BRepFill_SequenceOfSection^ theSeq)
{
    ((::BRepFill_SequenceOfSection*)_NativeInstance)->Split(theIndex, *(::BRepFill_SequenceOfSection*)theSeq->NativeInstance);
}

Macad::Occt::BRepFill_Section^ Macad::Occt::BRepFill_SequenceOfSection::First()
{
    ::BRepFill_Section* _result = new ::BRepFill_Section();
    *_result = (::BRepFill_Section)((::BRepFill_SequenceOfSection*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_Section(_result);
}

Macad::Occt::BRepFill_Section^ Macad::Occt::BRepFill_SequenceOfSection::ChangeFirst()
{
    ::BRepFill_Section* _result = new ::BRepFill_Section();
    *_result = ((::BRepFill_SequenceOfSection*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_Section(_result);
}

Macad::Occt::BRepFill_Section^ Macad::Occt::BRepFill_SequenceOfSection::Last()
{
    ::BRepFill_Section* _result = new ::BRepFill_Section();
    *_result = (::BRepFill_Section)((::BRepFill_SequenceOfSection*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_Section(_result);
}

Macad::Occt::BRepFill_Section^ Macad::Occt::BRepFill_SequenceOfSection::ChangeLast()
{
    ::BRepFill_Section* _result = new ::BRepFill_Section();
    *_result = ((::BRepFill_SequenceOfSection*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_Section(_result);
}

Macad::Occt::BRepFill_Section^ Macad::Occt::BRepFill_SequenceOfSection::Value(int theIndex)
{
    ::BRepFill_Section* _result = new ::BRepFill_Section();
    *_result = (::BRepFill_Section)((::BRepFill_SequenceOfSection*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_Section(_result);
}

Macad::Occt::BRepFill_Section^ Macad::Occt::BRepFill_SequenceOfSection::ChangeValue(int theIndex)
{
    ::BRepFill_Section* _result = new ::BRepFill_Section();
    *_result = ((::BRepFill_SequenceOfSection*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_Section(_result);
}

void Macad::Occt::BRepFill_SequenceOfSection::SetValue(int theIndex, Macad::Occt::BRepFill_Section^ theItem)
{
    ((::BRepFill_SequenceOfSection*)_NativeInstance)->SetValue(theIndex, *(::BRepFill_Section*)theItem->NativeInstance);
}

System::Collections::Generic::IEnumerator<Macad::Occt::BRepFill_Section^>^ Macad::Occt::BRepFill_SequenceOfSection::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::BRepFill_Section^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::BRepFill_SequenceOfSection::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::BRepFill_Section^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  BRepFill_SequenceOfSection::Iterator
//---------------------------------------------------------------------

Macad::Occt::BRepFill_SequenceOfSection::Iterator::Iterator()
    : Macad::Occt::BaseClass<::BRepFill_SequenceOfSection::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_SequenceOfSection::Iterator();
}

bool Macad::Occt::BRepFill_SequenceOfSection::Iterator::More()
{
    bool _result = ((::BRepFill_SequenceOfSection::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::BRepFill_SequenceOfSection::Iterator::Next()
{
    ((::BRepFill_SequenceOfSection::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::BRepFill_Section^ Macad::Occt::BRepFill_SequenceOfSection::Iterator::Value()
{
    ::BRepFill_Section* _result = new ::BRepFill_Section();
    *_result = (::BRepFill_Section)((::BRepFill_SequenceOfSection::Iterator*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_Section(_result);
}

Macad::Occt::BRepFill_Section^ Macad::Occt::BRepFill_SequenceOfSection::Iterator::ChangeValue()
{
    ::BRepFill_Section* _result = new ::BRepFill_Section();
    *_result = ((::BRepFill_SequenceOfSection::Iterator*)_NativeInstance)->ChangeValue();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::BRepFill_Section(_result);
}

bool Macad::Occt::BRepFill_SequenceOfSection::Iterator::IsEqual(Macad::Occt::BRepFill_SequenceOfSection::Iterator^ theOther)
{
    bool _result = ((::BRepFill_SequenceOfSection::Iterator*)_NativeInstance)->IsEqual(*(::BRepFill_SequenceOfSection::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::BRepFill_SequenceOfSection::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::BRepFill_SequenceOfSection::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  BRepFill
//---------------------------------------------------------------------

Macad::Occt::BRepFill::BRepFill()
    : Macad::Occt::BaseClass<::BRepFill>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill();
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepFill::Face(Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2)
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = ::BRepFill::Face(*(::TopoDS_Edge*)Edge1->NativeInstance, *(::TopoDS_Edge*)Edge2->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

Macad::Occt::TopoDS_Shell^ Macad::Occt::BRepFill::Shell(Macad::Occt::TopoDS_Wire^ Wire1, Macad::Occt::TopoDS_Wire^ Wire2)
{
    ::TopoDS_Shell* _result = new ::TopoDS_Shell();
    *_result = ::BRepFill::Shell(*(::TopoDS_Wire*)Wire1->NativeInstance, *(::TopoDS_Wire*)Wire2->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shell(_result);
}

void Macad::Occt::BRepFill::Axe(Macad::Occt::TopoDS_Shape^ Spine, Macad::Occt::TopoDS_Wire^ Profile, Macad::Occt::Ax3% AxeProf, bool% ProfOnSpine, double Tol)
{
    pin_ptr<Macad::Occt::Ax3> pp_AxeProf = &AxeProf;
    pin_ptr<bool> pp_ProfOnSpine = &ProfOnSpine;
    ::BRepFill::Axe(*(::TopoDS_Shape*)Spine->NativeInstance, *(::TopoDS_Wire*)Profile->NativeInstance, *(gp_Ax3*)pp_AxeProf, *(bool*)pp_ProfOnSpine, Tol);
}

void Macad::Occt::BRepFill::ComputeACR(Macad::Occt::TopoDS_Wire^ wire, Macad::Occt::TColStd_Array1OfReal^ ACR)
{
    ::BRepFill::ComputeACR(*(::TopoDS_Wire*)wire->NativeInstance, *(::TColStd_Array1OfReal*)ACR->NativeInstance);
}

Macad::Occt::TopoDS_Wire^ Macad::Occt::BRepFill::InsertACR(Macad::Occt::TopoDS_Wire^ wire, Macad::Occt::TColStd_Array1OfReal^ ACRcuts, double prec)
{
    ::TopoDS_Wire* _result = new ::TopoDS_Wire();
    *_result = ::BRepFill::InsertACR(*(::TopoDS_Wire*)wire->NativeInstance, *(::TColStd_Array1OfReal*)ACRcuts->NativeInstance, prec);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Wire(_result);
}



//---------------------------------------------------------------------
//  Class  BRepFill_LocationLaw
//---------------------------------------------------------------------

Macad::Occt::BRepFill_LocationLaw::BRepFill_LocationLaw()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepFill_LocationLaw();
}

void Macad::Occt::BRepFill_LocationLaw::TransformInG0Law()
{
    ((::BRepFill_LocationLaw*)_NativeInstance)->TransformInG0Law();
}

void Macad::Occt::BRepFill_LocationLaw::TransformInCompatibleLaw(double AngularTolerance)
{
    ((::BRepFill_LocationLaw*)_NativeInstance)->TransformInCompatibleLaw(AngularTolerance);
}

void Macad::Occt::BRepFill_LocationLaw::DeleteTransform()
{
    ((::BRepFill_LocationLaw*)_NativeInstance)->DeleteTransform();
}

int Macad::Occt::BRepFill_LocationLaw::NbHoles(double Tol)
{
    int _result = ((::BRepFill_LocationLaw*)_NativeInstance)->NbHoles(Tol);
    return _result;
}

int Macad::Occt::BRepFill_LocationLaw::NbHoles()
{
    int _result = ((::BRepFill_LocationLaw*)_NativeInstance)->NbHoles(9.9999999999999995E-8);
    return _result;
}

void Macad::Occt::BRepFill_LocationLaw::Holes(Macad::Occt::TColStd_Array1OfInteger^ Interval)
{
    ((::BRepFill_LocationLaw*)_NativeInstance)->Holes(*(::TColStd_Array1OfInteger*)Interval->NativeInstance);
}

int Macad::Occt::BRepFill_LocationLaw::NbLaw()
{
    int _result = ((::BRepFill_LocationLaw*)_NativeInstance)->NbLaw();
    return _result;
}

Macad::Occt::TopoDS_Wire^ Macad::Occt::BRepFill_LocationLaw::Wire()
{
    ::TopoDS_Wire* _result = new ::TopoDS_Wire();
    *_result = (::TopoDS_Wire)((::BRepFill_LocationLaw*)_NativeInstance)->Wire();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Wire(_result);
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepFill_LocationLaw::Edge(int Index)
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepFill_LocationLaw*)_NativeInstance)->Edge(Index);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepFill_LocationLaw::Vertex(int Index)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ((::BRepFill_LocationLaw*)_NativeInstance)->Vertex(Index);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

void Macad::Occt::BRepFill_LocationLaw::PerformVertex(int Index, Macad::Occt::TopoDS_Vertex^ InputVertex, double TolMin, Macad::Occt::TopoDS_Vertex^ OutputVertex, int Location)
{
    ((::BRepFill_LocationLaw*)_NativeInstance)->PerformVertex(Index, *(::TopoDS_Vertex*)InputVertex->NativeInstance, TolMin, *(::TopoDS_Vertex*)OutputVertex->NativeInstance, Location);
}

void Macad::Occt::BRepFill_LocationLaw::PerformVertex(int Index, Macad::Occt::TopoDS_Vertex^ InputVertex, double TolMin, Macad::Occt::TopoDS_Vertex^ OutputVertex)
{
    ((::BRepFill_LocationLaw*)_NativeInstance)->PerformVertex(Index, *(::TopoDS_Vertex*)InputVertex->NativeInstance, TolMin, *(::TopoDS_Vertex*)OutputVertex->NativeInstance, 0);
}

void Macad::Occt::BRepFill_LocationLaw::CurvilinearBounds(int Index, double% First, double% Last)
{
    pin_ptr<double> pp_First = &First;
    pin_ptr<double> pp_Last = &Last;
    ((::BRepFill_LocationLaw*)_NativeInstance)->CurvilinearBounds(Index, *(double*)pp_First, *(double*)pp_Last);
}

bool Macad::Occt::BRepFill_LocationLaw::IsClosed()
{
    bool _result = ((::BRepFill_LocationLaw*)_NativeInstance)->IsClosed();
    return _result;
}

int Macad::Occt::BRepFill_LocationLaw::IsG1(int Index, double SpatialTolerance, double AngularTolerance)
{
    int _result = ((::BRepFill_LocationLaw*)_NativeInstance)->IsG1(Index, SpatialTolerance, AngularTolerance);
    return _result;
}

int Macad::Occt::BRepFill_LocationLaw::IsG1(int Index, double SpatialTolerance)
{
    int _result = ((::BRepFill_LocationLaw*)_NativeInstance)->IsG1(Index, SpatialTolerance, 1.0E-4);
    return _result;
}

int Macad::Occt::BRepFill_LocationLaw::IsG1(int Index)
{
    int _result = ((::BRepFill_LocationLaw*)_NativeInstance)->IsG1(Index, 9.9999999999999995E-8, 1.0E-4);
    return _result;
}

void Macad::Occt::BRepFill_LocationLaw::D0(double Abscissa, Macad::Occt::TopoDS_Shape^ Section)
{
    ((::BRepFill_LocationLaw*)_NativeInstance)->D0(Abscissa, *(::TopoDS_Shape*)Section->NativeInstance);
}

void Macad::Occt::BRepFill_LocationLaw::Parameter(double Abscissa, int% Index, double% Param)
{
    pin_ptr<int> pp_Index = &Index;
    pin_ptr<double> pp_Param = &Param;
    ((::BRepFill_LocationLaw*)_NativeInstance)->Parameter(Abscissa, *(int*)pp_Index, *(double*)pp_Param);
}

double Macad::Occt::BRepFill_LocationLaw::Abscissa(int Index, double Param)
{
    double _result = ((::BRepFill_LocationLaw*)_NativeInstance)->Abscissa(Index, Param);
    return _result;
}

Macad::Occt::BRepFill_LocationLaw^ Macad::Occt::BRepFill_LocationLaw::CreateDowncasted(::BRepFill_LocationLaw* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::BRepFill_ACRLaw)))
        return Macad::Occt::BRepFill_ACRLaw::CreateDowncasted((::BRepFill_ACRLaw*)instance);
    if (instance->IsKind(STANDARD_TYPE(::BRepFill_Edge3DLaw)))
        return Macad::Occt::BRepFill_Edge3DLaw::CreateDowncasted((::BRepFill_Edge3DLaw*)instance);
    if (instance->IsKind(STANDARD_TYPE(::BRepFill_EdgeOnSurfLaw)))
        return Macad::Occt::BRepFill_EdgeOnSurfLaw::CreateDowncasted((::BRepFill_EdgeOnSurfLaw*)instance);
    
    return gcnew Macad::Occt::BRepFill_LocationLaw( instance );
}



//---------------------------------------------------------------------
//  Class  BRepFill_ACRLaw
//---------------------------------------------------------------------

Macad::Occt::BRepFill_ACRLaw^ Macad::Occt::BRepFill_ACRLaw::CreateDowncasted(::BRepFill_ACRLaw* instance)
{
    return gcnew Macad::Occt::BRepFill_ACRLaw( instance );
}



//---------------------------------------------------------------------
//  Class  BRepFill_AdvancedEvolved
//---------------------------------------------------------------------

Macad::Occt::BRepFill_AdvancedEvolved::BRepFill_AdvancedEvolved()
    : Macad::Occt::BaseClass<::BRepFill_AdvancedEvolved>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_AdvancedEvolved();
}

void Macad::Occt::BRepFill_AdvancedEvolved::Perform(Macad::Occt::TopoDS_Wire^ theSpine, Macad::Occt::TopoDS_Wire^ theProfile, double theTolerance, bool theSolidReq)
{
    ((::BRepFill_AdvancedEvolved*)_NativeInstance)->Perform(*(::TopoDS_Wire*)theSpine->NativeInstance, *(::TopoDS_Wire*)theProfile->NativeInstance, theTolerance, theSolidReq);
}

void Macad::Occt::BRepFill_AdvancedEvolved::Perform(Macad::Occt::TopoDS_Wire^ theSpine, Macad::Occt::TopoDS_Wire^ theProfile, double theTolerance)
{
    ((::BRepFill_AdvancedEvolved*)_NativeInstance)->Perform(*(::TopoDS_Wire*)theSpine->NativeInstance, *(::TopoDS_Wire*)theProfile->NativeInstance, theTolerance, true);
}

bool Macad::Occt::BRepFill_AdvancedEvolved::IsDone(unsigned int% theErrorCode)
{
    pin_ptr<unsigned int> pp_theErrorCode = &theErrorCode;
    bool _result = ((::BRepFill_AdvancedEvolved*)_NativeInstance)->IsDone((unsigned int*)pp_theErrorCode);
    return _result;
}

bool Macad::Occt::BRepFill_AdvancedEvolved::IsDone()
{
    bool _result = ((::BRepFill_AdvancedEvolved*)_NativeInstance)->IsDone(nullptr);
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepFill_AdvancedEvolved::Shape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepFill_AdvancedEvolved*)_NativeInstance)->Shape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::BRepFill_AdvancedEvolved::SetTemporaryDirectory(System::String^ thePath)
{
    const char* sz_thePath = (char*)(void*)Marshal::StringToHGlobalAnsi(thePath);
    ((::BRepFill_AdvancedEvolved*)_NativeInstance)->SetTemporaryDirectory(sz_thePath);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_thePath);
}

void Macad::Occt::BRepFill_AdvancedEvolved::SetParallelMode(bool theVal)
{
    ((::BRepFill_AdvancedEvolved*)_NativeInstance)->SetParallelMode(theVal);
}



//---------------------------------------------------------------------
//  Class  BRepFill_ApproxSeewing
//---------------------------------------------------------------------

Macad::Occt::BRepFill_ApproxSeewing::BRepFill_ApproxSeewing()
    : Macad::Occt::BaseClass<::BRepFill_ApproxSeewing>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_ApproxSeewing();
}

bool Macad::Occt::BRepFill_ApproxSeewing::IsDone()
{
    bool _result = ((::BRepFill_ApproxSeewing*)_NativeInstance)->IsDone();
    return _result;
}

Macad::Occt::Geom_Curve^ Macad::Occt::BRepFill_ApproxSeewing::Curve()
{
    Handle(::Geom_Curve) _result = ((::BRepFill_ApproxSeewing*)_NativeInstance)->Curve();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom_Curve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::BRepFill_ApproxSeewing::CurveOnF1()
{
    Handle(::Geom2d_Curve) _result = ((::BRepFill_ApproxSeewing*)_NativeInstance)->CurveOnF1();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted(_result.get());
}

Macad::Occt::Geom2d_Curve^ Macad::Occt::BRepFill_ApproxSeewing::CurveOnF2()
{
    Handle(::Geom2d_Curve) _result = ((::BRepFill_ApproxSeewing*)_NativeInstance)->CurveOnF2();
    return _result.IsNull() ? nullptr : Macad::Occt::Geom2d_Curve::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  BRepFill_CompatibleWires
//---------------------------------------------------------------------

Macad::Occt::BRepFill_CompatibleWires::BRepFill_CompatibleWires()
    : Macad::Occt::BaseClass<::BRepFill_CompatibleWires>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_CompatibleWires();
}

Macad::Occt::BRepFill_CompatibleWires::BRepFill_CompatibleWires(Macad::Occt::TopTools_SequenceOfShape^ Sections)
    : Macad::Occt::BaseClass<::BRepFill_CompatibleWires>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_CompatibleWires(*(::TopTools_SequenceOfShape*)Sections->NativeInstance);
}

void Macad::Occt::BRepFill_CompatibleWires::Init(Macad::Occt::TopTools_SequenceOfShape^ Sections)
{
    ((::BRepFill_CompatibleWires*)_NativeInstance)->Init(*(::TopTools_SequenceOfShape*)Sections->NativeInstance);
}

void Macad::Occt::BRepFill_CompatibleWires::SetPercent(double percent)
{
    ((::BRepFill_CompatibleWires*)_NativeInstance)->SetPercent(percent);
}

void Macad::Occt::BRepFill_CompatibleWires::SetPercent()
{
    ((::BRepFill_CompatibleWires*)_NativeInstance)->SetPercent(0.01);
}

void Macad::Occt::BRepFill_CompatibleWires::Perform(bool WithRotation)
{
    ((::BRepFill_CompatibleWires*)_NativeInstance)->Perform(WithRotation);
}

void Macad::Occt::BRepFill_CompatibleWires::Perform()
{
    ((::BRepFill_CompatibleWires*)_NativeInstance)->Perform(true);
}

bool Macad::Occt::BRepFill_CompatibleWires::IsDone()
{
    bool _result = ((::BRepFill_CompatibleWires*)_NativeInstance)->IsDone();
    return _result;
}

Macad::Occt::BRepFill_ThruSectionErrorStatus Macad::Occt::BRepFill_CompatibleWires::GetStatus()
{
    ::BRepFill_ThruSectionErrorStatus _result = ((::BRepFill_CompatibleWires*)_NativeInstance)->GetStatus();
    return (Macad::Occt::BRepFill_ThruSectionErrorStatus)_result;
}

Macad::Occt::TopTools_SequenceOfShape^ Macad::Occt::BRepFill_CompatibleWires::Shape()
{
    ::TopTools_SequenceOfShape* _result = new ::TopTools_SequenceOfShape();
    *_result = (::TopTools_SequenceOfShape)((::BRepFill_CompatibleWires*)_NativeInstance)->Shape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_SequenceOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepFill_CompatibleWires::GeneratedShapes(Macad::Occt::TopoDS_Edge^ SubSection)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepFill_CompatibleWires*)_NativeInstance)->GeneratedShapes(*(::TopoDS_Edge*)SubSection->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopTools_DataMapOfShapeListOfShape^ Macad::Occt::BRepFill_CompatibleWires::Generated()
{
    ::TopTools_DataMapOfShapeListOfShape* _result = new ::TopTools_DataMapOfShapeListOfShape();
    *_result = (::TopTools_DataMapOfShapeListOfShape)((::BRepFill_CompatibleWires*)_NativeInstance)->Generated();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_DataMapOfShapeListOfShape(_result);
}

bool Macad::Occt::BRepFill_CompatibleWires::IsDegeneratedFirstSection()
{
    bool _result = ((::BRepFill_CompatibleWires*)_NativeInstance)->IsDegeneratedFirstSection();
    return _result;
}

bool Macad::Occt::BRepFill_CompatibleWires::IsDegeneratedLastSection()
{
    bool _result = ((::BRepFill_CompatibleWires*)_NativeInstance)->IsDegeneratedLastSection();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepFill_ComputeCLine
//---------------------------------------------------------------------

Macad::Occt::BRepFill_ComputeCLine::BRepFill_ComputeCLine(int degreemin, int degreemax, double Tolerance3d, double Tolerance2d, bool cutting)
    : Macad::Occt::BaseClass<::BRepFill_ComputeCLine>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_ComputeCLine(degreemin, degreemax, Tolerance3d, Tolerance2d, cutting, AppParCurves_TangencyPoint, AppParCurves_TangencyPoint);
}

Macad::Occt::BRepFill_ComputeCLine::BRepFill_ComputeCLine(int degreemin, int degreemax, double Tolerance3d, double Tolerance2d)
    : Macad::Occt::BaseClass<::BRepFill_ComputeCLine>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_ComputeCLine(degreemin, degreemax, Tolerance3d, Tolerance2d, false, AppParCurves_TangencyPoint, AppParCurves_TangencyPoint);
}

Macad::Occt::BRepFill_ComputeCLine::BRepFill_ComputeCLine(int degreemin, int degreemax, double Tolerance3d)
    : Macad::Occt::BaseClass<::BRepFill_ComputeCLine>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_ComputeCLine(degreemin, degreemax, Tolerance3d, 1.0000000000000001E-5, false, AppParCurves_TangencyPoint, AppParCurves_TangencyPoint);
}

Macad::Occt::BRepFill_ComputeCLine::BRepFill_ComputeCLine(int degreemin, int degreemax)
    : Macad::Occt::BaseClass<::BRepFill_ComputeCLine>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_ComputeCLine(degreemin, degreemax, 1.0000000000000001E-5, 1.0000000000000001E-5, false, AppParCurves_TangencyPoint, AppParCurves_TangencyPoint);
}

Macad::Occt::BRepFill_ComputeCLine::BRepFill_ComputeCLine(int degreemin)
    : Macad::Occt::BaseClass<::BRepFill_ComputeCLine>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_ComputeCLine(degreemin, 8, 1.0000000000000001E-5, 1.0000000000000001E-5, false, AppParCurves_TangencyPoint, AppParCurves_TangencyPoint);
}

Macad::Occt::BRepFill_ComputeCLine::BRepFill_ComputeCLine()
    : Macad::Occt::BaseClass<::BRepFill_ComputeCLine>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_ComputeCLine(3, 8, 1.0000000000000001E-5, 1.0000000000000001E-5, false, AppParCurves_TangencyPoint, AppParCurves_TangencyPoint);
}

void Macad::Occt::BRepFill_ComputeCLine::SetDegrees(int degreemin, int degreemax)
{
    ((::BRepFill_ComputeCLine*)_NativeInstance)->SetDegrees(degreemin, degreemax);
}

void Macad::Occt::BRepFill_ComputeCLine::SetTolerances(double Tolerance3d, double Tolerance2d)
{
    ((::BRepFill_ComputeCLine*)_NativeInstance)->SetTolerances(Tolerance3d, Tolerance2d);
}

void Macad::Occt::BRepFill_ComputeCLine::SetMaxSegments(int theMaxSegments)
{
    ((::BRepFill_ComputeCLine*)_NativeInstance)->SetMaxSegments(theMaxSegments);
}

void Macad::Occt::BRepFill_ComputeCLine::SetInvOrder(bool theInvOrder)
{
    ((::BRepFill_ComputeCLine*)_NativeInstance)->SetInvOrder(theInvOrder);
}

void Macad::Occt::BRepFill_ComputeCLine::SetHangChecking(bool theHangChecking)
{
    ((::BRepFill_ComputeCLine*)_NativeInstance)->SetHangChecking(theHangChecking);
}

bool Macad::Occt::BRepFill_ComputeCLine::IsAllApproximated()
{
    bool _result = ((::BRepFill_ComputeCLine*)_NativeInstance)->IsAllApproximated();
    return _result;
}

bool Macad::Occt::BRepFill_ComputeCLine::IsToleranceReached()
{
    bool _result = ((::BRepFill_ComputeCLine*)_NativeInstance)->IsToleranceReached();
    return _result;
}

void Macad::Occt::BRepFill_ComputeCLine::Error(int Index, double% tol3d, double% tol2d)
{
    pin_ptr<double> pp_tol3d = &tol3d;
    pin_ptr<double> pp_tol2d = &tol2d;
    ((::BRepFill_ComputeCLine*)_NativeInstance)->Error(Index, *(double*)pp_tol3d, *(double*)pp_tol2d);
}

int Macad::Occt::BRepFill_ComputeCLine::NbMultiCurves()
{
    int _result = ((::BRepFill_ComputeCLine*)_NativeInstance)->NbMultiCurves();
    return _result;
}

void Macad::Occt::BRepFill_ComputeCLine::Parameters(int Index, double% firstp, double% lastp)
{
    pin_ptr<double> pp_firstp = &firstp;
    pin_ptr<double> pp_lastp = &lastp;
    ((::BRepFill_ComputeCLine*)_NativeInstance)->Parameters(Index, *(double*)pp_firstp, *(double*)pp_lastp);
}



//---------------------------------------------------------------------
//  Class  BRepFill_Edge3DLaw
//---------------------------------------------------------------------

Macad::Occt::BRepFill_Edge3DLaw^ Macad::Occt::BRepFill_Edge3DLaw::CreateDowncasted(::BRepFill_Edge3DLaw* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::BRepFill_DraftLaw)))
        return Macad::Occt::BRepFill_DraftLaw::CreateDowncasted((::BRepFill_DraftLaw*)instance);
    
    return gcnew Macad::Occt::BRepFill_Edge3DLaw( instance );
}



//---------------------------------------------------------------------
//  Class  BRepFill_SectionLaw
//---------------------------------------------------------------------

Macad::Occt::BRepFill_SectionLaw::BRepFill_SectionLaw()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

int Macad::Occt::BRepFill_SectionLaw::NbLaw()
{
    int _result = ((::BRepFill_SectionLaw*)_NativeInstance)->NbLaw();
    return _result;
}

int Macad::Occt::BRepFill_SectionLaw::IndexOfEdge(Macad::Occt::TopoDS_Shape^ anEdge)
{
    int _result = ((::BRepFill_SectionLaw*)_NativeInstance)->IndexOfEdge(*(::TopoDS_Shape*)anEdge->NativeInstance);
    return _result;
}

bool Macad::Occt::BRepFill_SectionLaw::IsConstant()
{
    bool _result = ((::BRepFill_SectionLaw*)_NativeInstance)->IsConstant();
    return _result;
}

bool Macad::Occt::BRepFill_SectionLaw::IsUClosed()
{
    bool _result = ((::BRepFill_SectionLaw*)_NativeInstance)->IsUClosed();
    return _result;
}

bool Macad::Occt::BRepFill_SectionLaw::IsVClosed()
{
    bool _result = ((::BRepFill_SectionLaw*)_NativeInstance)->IsVClosed();
    return _result;
}

bool Macad::Occt::BRepFill_SectionLaw::IsDone()
{
    bool _result = ((::BRepFill_SectionLaw*)_NativeInstance)->IsDone();
    return _result;
}

bool Macad::Occt::BRepFill_SectionLaw::IsVertex()
{
    bool _result = ((::BRepFill_SectionLaw*)_NativeInstance)->IsVertex();
    return _result;
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRepFill_SectionLaw::Continuity(int Index, double TolAngular)
{
    ::GeomAbs_Shape _result = ((::BRepFill_SectionLaw*)_NativeInstance)->Continuity(Index, TolAngular);
    return (Macad::Occt::GeomAbs_Shape)_result;
}

double Macad::Occt::BRepFill_SectionLaw::VertexTol(int Index, double Param)
{
    double _result = ((::BRepFill_SectionLaw*)_NativeInstance)->VertexTol(Index, Param);
    return _result;
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepFill_SectionLaw::Vertex(int Index, double Param)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ((::BRepFill_SectionLaw*)_NativeInstance)->Vertex(Index, Param);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

void Macad::Occt::BRepFill_SectionLaw::D0(double U, Macad::Occt::TopoDS_Shape^ S)
{
    ((::BRepFill_SectionLaw*)_NativeInstance)->D0(U, *(::TopoDS_Shape*)S->NativeInstance);
}

void Macad::Occt::BRepFill_SectionLaw::Init(Macad::Occt::TopoDS_Wire^ W)
{
    ((::BRepFill_SectionLaw*)_NativeInstance)->Init(*(::TopoDS_Wire*)W->NativeInstance);
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepFill_SectionLaw::CurrentEdge()
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = ((::BRepFill_SectionLaw*)_NativeInstance)->CurrentEdge();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::BRepFill_SectionLaw^ Macad::Occt::BRepFill_SectionLaw::CreateDowncasted(::BRepFill_SectionLaw* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::BRepFill_NSections)))
        return Macad::Occt::BRepFill_NSections::CreateDowncasted((::BRepFill_NSections*)instance);
    if (instance->IsKind(STANDARD_TYPE(::BRepFill_ShapeLaw)))
        return Macad::Occt::BRepFill_ShapeLaw::CreateDowncasted((::BRepFill_ShapeLaw*)instance);
    
    return gcnew Macad::Occt::BRepFill_SectionLaw( instance );
}



//---------------------------------------------------------------------
//  Class  BRepFill_Draft
//---------------------------------------------------------------------

Macad::Occt::BRepFill_Draft::BRepFill_Draft(Macad::Occt::TopoDS_Shape^ Shape, Macad::Occt::Dir Dir, double Angle)
    : Macad::Occt::BaseClass<::BRepFill_Draft>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Dir> pp_Dir = &Dir;
    _NativeInstance = new ::BRepFill_Draft(*(::TopoDS_Shape*)Shape->NativeInstance, *(gp_Dir*)pp_Dir, Angle);
}

void Macad::Occt::BRepFill_Draft::SetOptions(Macad::Occt::BRepFill_TransitionStyle Style, double AngleMin, double AngleMax)
{
    ((::BRepFill_Draft*)_NativeInstance)->SetOptions((::BRepFill_TransitionStyle)Style, AngleMin, AngleMax);
}

void Macad::Occt::BRepFill_Draft::SetOptions(Macad::Occt::BRepFill_TransitionStyle Style, double AngleMin)
{
    ((::BRepFill_Draft*)_NativeInstance)->SetOptions((::BRepFill_TransitionStyle)Style, AngleMin, 3.);
}

void Macad::Occt::BRepFill_Draft::SetOptions(Macad::Occt::BRepFill_TransitionStyle Style)
{
    ((::BRepFill_Draft*)_NativeInstance)->SetOptions((::BRepFill_TransitionStyle)Style, 0.01, 3.);
}

void Macad::Occt::BRepFill_Draft::SetOptions()
{
    ((::BRepFill_Draft*)_NativeInstance)->SetOptions(BRepFill_Right, 0.01, 3.);
}

void Macad::Occt::BRepFill_Draft::SetDraft(bool IsInternal)
{
    ((::BRepFill_Draft*)_NativeInstance)->SetDraft(IsInternal);
}

void Macad::Occt::BRepFill_Draft::SetDraft()
{
    ((::BRepFill_Draft*)_NativeInstance)->SetDraft(false);
}

void Macad::Occt::BRepFill_Draft::Perform(double LengthMax)
{
    ((::BRepFill_Draft*)_NativeInstance)->Perform(LengthMax);
}

void Macad::Occt::BRepFill_Draft::Perform(Macad::Occt::Geom_Surface^ Surface, bool KeepInsideSurface)
{
    ((::BRepFill_Draft*)_NativeInstance)->Perform(Handle(::Geom_Surface)(Surface->NativeInstance), KeepInsideSurface);
}

void Macad::Occt::BRepFill_Draft::Perform(Macad::Occt::Geom_Surface^ Surface)
{
    ((::BRepFill_Draft*)_NativeInstance)->Perform(Handle(::Geom_Surface)(Surface->NativeInstance), true);
}

void Macad::Occt::BRepFill_Draft::Perform(Macad::Occt::TopoDS_Shape^ StopShape, bool KeepOutSide)
{
    ((::BRepFill_Draft*)_NativeInstance)->Perform(*(::TopoDS_Shape*)StopShape->NativeInstance, KeepOutSide);
}

void Macad::Occt::BRepFill_Draft::Perform(Macad::Occt::TopoDS_Shape^ StopShape)
{
    ((::BRepFill_Draft*)_NativeInstance)->Perform(*(::TopoDS_Shape*)StopShape->NativeInstance, true);
}

bool Macad::Occt::BRepFill_Draft::IsDone()
{
    bool _result = ((::BRepFill_Draft*)_NativeInstance)->IsDone();
    return _result;
}

Macad::Occt::TopoDS_Shell^ Macad::Occt::BRepFill_Draft::Shell()
{
    ::TopoDS_Shell* _result = new ::TopoDS_Shell();
    *_result = ((::BRepFill_Draft*)_NativeInstance)->Shell();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shell(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepFill_Draft::Generated(Macad::Occt::TopoDS_Shape^ S)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepFill_Draft*)_NativeInstance)->Generated(*(::TopoDS_Shape*)S->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepFill_Draft::Shape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepFill_Draft*)_NativeInstance)->Shape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepFill_DraftLaw
//---------------------------------------------------------------------

void Macad::Occt::BRepFill_DraftLaw::CleanLaw(double TolAngular)
{
    ((::BRepFill_DraftLaw*)_NativeInstance)->CleanLaw(TolAngular);
}

Macad::Occt::BRepFill_DraftLaw^ Macad::Occt::BRepFill_DraftLaw::CreateDowncasted(::BRepFill_DraftLaw* instance)
{
    return gcnew Macad::Occt::BRepFill_DraftLaw( instance );
}



//---------------------------------------------------------------------
//  Class  BRepFill_EdgeFaceAndOrder
//---------------------------------------------------------------------

Macad::Occt::BRepFill_EdgeFaceAndOrder::BRepFill_EdgeFaceAndOrder()
    : Macad::Occt::BaseClass<::BRepFill_EdgeFaceAndOrder>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_EdgeFaceAndOrder();
}

Macad::Occt::BRepFill_EdgeFaceAndOrder::BRepFill_EdgeFaceAndOrder(Macad::Occt::TopoDS_Edge^ anEdge, Macad::Occt::TopoDS_Face^ aFace, Macad::Occt::GeomAbs_Shape anOrder)
    : Macad::Occt::BaseClass<::BRepFill_EdgeFaceAndOrder>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_EdgeFaceAndOrder(*(::TopoDS_Edge*)anEdge->NativeInstance, *(::TopoDS_Face*)aFace->NativeInstance, (::GeomAbs_Shape)anOrder);
}



//---------------------------------------------------------------------
//  Class  BRepFill_EdgeOnSurfLaw
//---------------------------------------------------------------------

Macad::Occt::BRepFill_EdgeOnSurfLaw::BRepFill_EdgeOnSurfLaw(Macad::Occt::TopoDS_Wire^ Path, Macad::Occt::TopoDS_Shape^ Surf)
    : Macad::Occt::BRepFill_LocationLaw(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepFill_EdgeOnSurfLaw(*(::TopoDS_Wire*)Path->NativeInstance, *(::TopoDS_Shape*)Surf->NativeInstance);
}

bool Macad::Occt::BRepFill_EdgeOnSurfLaw::HasResult()
{
    bool _result = ((::BRepFill_EdgeOnSurfLaw*)_NativeInstance)->HasResult();
    return _result;
}

Macad::Occt::BRepFill_EdgeOnSurfLaw^ Macad::Occt::BRepFill_EdgeOnSurfLaw::CreateDowncasted(::BRepFill_EdgeOnSurfLaw* instance)
{
    return gcnew Macad::Occt::BRepFill_EdgeOnSurfLaw( instance );
}



//---------------------------------------------------------------------
//  Class  BRepFill_Evolved
//---------------------------------------------------------------------

Macad::Occt::BRepFill_Evolved::BRepFill_Evolved()
    : Macad::Occt::BaseClass<::BRepFill_Evolved>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_Evolved();
}

Macad::Occt::BRepFill_Evolved::BRepFill_Evolved(Macad::Occt::TopoDS_Wire^ Spine, Macad::Occt::TopoDS_Wire^ Profile, Macad::Occt::Ax3 AxeProf, Macad::Occt::GeomAbs_JoinType Join, bool Solid)
    : Macad::Occt::BaseClass<::BRepFill_Evolved>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax3> pp_AxeProf = &AxeProf;
    _NativeInstance = new ::BRepFill_Evolved(*(::TopoDS_Wire*)Spine->NativeInstance, *(::TopoDS_Wire*)Profile->NativeInstance, *(gp_Ax3*)pp_AxeProf, (::GeomAbs_JoinType)Join, Solid);
}

Macad::Occt::BRepFill_Evolved::BRepFill_Evolved(Macad::Occt::TopoDS_Wire^ Spine, Macad::Occt::TopoDS_Wire^ Profile, Macad::Occt::Ax3 AxeProf, Macad::Occt::GeomAbs_JoinType Join)
    : Macad::Occt::BaseClass<::BRepFill_Evolved>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax3> pp_AxeProf = &AxeProf;
    _NativeInstance = new ::BRepFill_Evolved(*(::TopoDS_Wire*)Spine->NativeInstance, *(::TopoDS_Wire*)Profile->NativeInstance, *(gp_Ax3*)pp_AxeProf, (::GeomAbs_JoinType)Join, false);
}

Macad::Occt::BRepFill_Evolved::BRepFill_Evolved(Macad::Occt::TopoDS_Wire^ Spine, Macad::Occt::TopoDS_Wire^ Profile, Macad::Occt::Ax3 AxeProf)
    : Macad::Occt::BaseClass<::BRepFill_Evolved>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax3> pp_AxeProf = &AxeProf;
    _NativeInstance = new ::BRepFill_Evolved(*(::TopoDS_Wire*)Spine->NativeInstance, *(::TopoDS_Wire*)Profile->NativeInstance, *(gp_Ax3*)pp_AxeProf, GeomAbs_Arc, false);
}

Macad::Occt::BRepFill_Evolved::BRepFill_Evolved(Macad::Occt::TopoDS_Face^ Spine, Macad::Occt::TopoDS_Wire^ Profile, Macad::Occt::Ax3 AxeProf, Macad::Occt::GeomAbs_JoinType Join, bool Solid)
    : Macad::Occt::BaseClass<::BRepFill_Evolved>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax3> pp_AxeProf = &AxeProf;
    _NativeInstance = new ::BRepFill_Evolved(*(::TopoDS_Face*)Spine->NativeInstance, *(::TopoDS_Wire*)Profile->NativeInstance, *(gp_Ax3*)pp_AxeProf, (::GeomAbs_JoinType)Join, Solid);
}

Macad::Occt::BRepFill_Evolved::BRepFill_Evolved(Macad::Occt::TopoDS_Face^ Spine, Macad::Occt::TopoDS_Wire^ Profile, Macad::Occt::Ax3 AxeProf, Macad::Occt::GeomAbs_JoinType Join)
    : Macad::Occt::BaseClass<::BRepFill_Evolved>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax3> pp_AxeProf = &AxeProf;
    _NativeInstance = new ::BRepFill_Evolved(*(::TopoDS_Face*)Spine->NativeInstance, *(::TopoDS_Wire*)Profile->NativeInstance, *(gp_Ax3*)pp_AxeProf, (::GeomAbs_JoinType)Join, false);
}

Macad::Occt::BRepFill_Evolved::BRepFill_Evolved(Macad::Occt::TopoDS_Face^ Spine, Macad::Occt::TopoDS_Wire^ Profile, Macad::Occt::Ax3 AxeProf)
    : Macad::Occt::BaseClass<::BRepFill_Evolved>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax3> pp_AxeProf = &AxeProf;
    _NativeInstance = new ::BRepFill_Evolved(*(::TopoDS_Face*)Spine->NativeInstance, *(::TopoDS_Wire*)Profile->NativeInstance, *(gp_Ax3*)pp_AxeProf, GeomAbs_Arc, false);
}

void Macad::Occt::BRepFill_Evolved::Perform(Macad::Occt::TopoDS_Wire^ Spine, Macad::Occt::TopoDS_Wire^ Profile, Macad::Occt::Ax3 AxeProf, Macad::Occt::GeomAbs_JoinType Join, bool Solid)
{
    pin_ptr<Macad::Occt::Ax3> pp_AxeProf = &AxeProf;
    ((::BRepFill_Evolved*)_NativeInstance)->Perform(*(::TopoDS_Wire*)Spine->NativeInstance, *(::TopoDS_Wire*)Profile->NativeInstance, *(gp_Ax3*)pp_AxeProf, (::GeomAbs_JoinType)Join, Solid);
}

void Macad::Occt::BRepFill_Evolved::Perform(Macad::Occt::TopoDS_Wire^ Spine, Macad::Occt::TopoDS_Wire^ Profile, Macad::Occt::Ax3 AxeProf, Macad::Occt::GeomAbs_JoinType Join)
{
    pin_ptr<Macad::Occt::Ax3> pp_AxeProf = &AxeProf;
    ((::BRepFill_Evolved*)_NativeInstance)->Perform(*(::TopoDS_Wire*)Spine->NativeInstance, *(::TopoDS_Wire*)Profile->NativeInstance, *(gp_Ax3*)pp_AxeProf, (::GeomAbs_JoinType)Join, false);
}

void Macad::Occt::BRepFill_Evolved::Perform(Macad::Occt::TopoDS_Wire^ Spine, Macad::Occt::TopoDS_Wire^ Profile, Macad::Occt::Ax3 AxeProf)
{
    pin_ptr<Macad::Occt::Ax3> pp_AxeProf = &AxeProf;
    ((::BRepFill_Evolved*)_NativeInstance)->Perform(*(::TopoDS_Wire*)Spine->NativeInstance, *(::TopoDS_Wire*)Profile->NativeInstance, *(gp_Ax3*)pp_AxeProf, GeomAbs_Arc, false);
}

void Macad::Occt::BRepFill_Evolved::Perform(Macad::Occt::TopoDS_Face^ Spine, Macad::Occt::TopoDS_Wire^ Profile, Macad::Occt::Ax3 AxeProf, Macad::Occt::GeomAbs_JoinType Join, bool Solid)
{
    pin_ptr<Macad::Occt::Ax3> pp_AxeProf = &AxeProf;
    ((::BRepFill_Evolved*)_NativeInstance)->Perform(*(::TopoDS_Face*)Spine->NativeInstance, *(::TopoDS_Wire*)Profile->NativeInstance, *(gp_Ax3*)pp_AxeProf, (::GeomAbs_JoinType)Join, Solid);
}

void Macad::Occt::BRepFill_Evolved::Perform(Macad::Occt::TopoDS_Face^ Spine, Macad::Occt::TopoDS_Wire^ Profile, Macad::Occt::Ax3 AxeProf, Macad::Occt::GeomAbs_JoinType Join)
{
    pin_ptr<Macad::Occt::Ax3> pp_AxeProf = &AxeProf;
    ((::BRepFill_Evolved*)_NativeInstance)->Perform(*(::TopoDS_Face*)Spine->NativeInstance, *(::TopoDS_Wire*)Profile->NativeInstance, *(gp_Ax3*)pp_AxeProf, (::GeomAbs_JoinType)Join, false);
}

void Macad::Occt::BRepFill_Evolved::Perform(Macad::Occt::TopoDS_Face^ Spine, Macad::Occt::TopoDS_Wire^ Profile, Macad::Occt::Ax3 AxeProf)
{
    pin_ptr<Macad::Occt::Ax3> pp_AxeProf = &AxeProf;
    ((::BRepFill_Evolved*)_NativeInstance)->Perform(*(::TopoDS_Face*)Spine->NativeInstance, *(::TopoDS_Wire*)Profile->NativeInstance, *(gp_Ax3*)pp_AxeProf, GeomAbs_Arc, false);
}

bool Macad::Occt::BRepFill_Evolved::IsDone()
{
    bool _result = ((::BRepFill_Evolved*)_NativeInstance)->IsDone();
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepFill_Evolved::Shape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepFill_Evolved*)_NativeInstance)->Shape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepFill_Evolved::GeneratedShapes(Macad::Occt::TopoDS_Shape^ SpineShape, Macad::Occt::TopoDS_Shape^ ProfShape)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepFill_Evolved*)_NativeInstance)->GeneratedShapes(*(::TopoDS_Shape*)SpineShape->NativeInstance, *(::TopoDS_Shape*)ProfShape->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::GeomAbs_JoinType Macad::Occt::BRepFill_Evolved::JoinType()
{
    ::GeomAbs_JoinType _result = ((::BRepFill_Evolved*)_NativeInstance)->JoinType();
    return (Macad::Occt::GeomAbs_JoinType)_result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepFill_Evolved::Top()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepFill_Evolved*)_NativeInstance)->Top();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepFill_Evolved::Bottom()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepFill_Evolved*)_NativeInstance)->Bottom();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepFill_FaceAndOrder
//---------------------------------------------------------------------

Macad::Occt::BRepFill_FaceAndOrder::BRepFill_FaceAndOrder()
    : Macad::Occt::BaseClass<::BRepFill_FaceAndOrder>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_FaceAndOrder();
}

Macad::Occt::BRepFill_FaceAndOrder::BRepFill_FaceAndOrder(Macad::Occt::TopoDS_Face^ aFace, Macad::Occt::GeomAbs_Shape anOrder)
    : Macad::Occt::BaseClass<::BRepFill_FaceAndOrder>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_FaceAndOrder(*(::TopoDS_Face*)aFace->NativeInstance, (::GeomAbs_Shape)anOrder);
}



//---------------------------------------------------------------------
//  Class  BRepFill_Filling
//---------------------------------------------------------------------

Macad::Occt::BRepFill_Filling::BRepFill_Filling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d, double Tol3d, double TolAng, double TolCurv, int MaxDeg, int MaxSegments)
    : Macad::Occt::BaseClass<::BRepFill_Filling>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_Filling(Degree, NbPtsOnCur, NbIter, Anisotropie, Tol2d, Tol3d, TolAng, TolCurv, MaxDeg, MaxSegments);
}

Macad::Occt::BRepFill_Filling::BRepFill_Filling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d, double Tol3d, double TolAng, double TolCurv, int MaxDeg)
    : Macad::Occt::BaseClass<::BRepFill_Filling>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_Filling(Degree, NbPtsOnCur, NbIter, Anisotropie, Tol2d, Tol3d, TolAng, TolCurv, MaxDeg, 9);
}

Macad::Occt::BRepFill_Filling::BRepFill_Filling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d, double Tol3d, double TolAng, double TolCurv)
    : Macad::Occt::BaseClass<::BRepFill_Filling>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_Filling(Degree, NbPtsOnCur, NbIter, Anisotropie, Tol2d, Tol3d, TolAng, TolCurv, 8, 9);
}

Macad::Occt::BRepFill_Filling::BRepFill_Filling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d, double Tol3d, double TolAng)
    : Macad::Occt::BaseClass<::BRepFill_Filling>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_Filling(Degree, NbPtsOnCur, NbIter, Anisotropie, Tol2d, Tol3d, TolAng, 0.10000000000000001, 8, 9);
}

Macad::Occt::BRepFill_Filling::BRepFill_Filling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d, double Tol3d)
    : Macad::Occt::BaseClass<::BRepFill_Filling>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_Filling(Degree, NbPtsOnCur, NbIter, Anisotropie, Tol2d, Tol3d, 0.01, 0.10000000000000001, 8, 9);
}

Macad::Occt::BRepFill_Filling::BRepFill_Filling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie, double Tol2d)
    : Macad::Occt::BaseClass<::BRepFill_Filling>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_Filling(Degree, NbPtsOnCur, NbIter, Anisotropie, Tol2d, 1.0E-4, 0.01, 0.10000000000000001, 8, 9);
}

Macad::Occt::BRepFill_Filling::BRepFill_Filling(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie)
    : Macad::Occt::BaseClass<::BRepFill_Filling>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_Filling(Degree, NbPtsOnCur, NbIter, Anisotropie, 1.0000000000000001E-5, 1.0E-4, 0.01, 0.10000000000000001, 8, 9);
}

Macad::Occt::BRepFill_Filling::BRepFill_Filling(int Degree, int NbPtsOnCur, int NbIter)
    : Macad::Occt::BaseClass<::BRepFill_Filling>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_Filling(Degree, NbPtsOnCur, NbIter, false, 1.0000000000000001E-5, 1.0E-4, 0.01, 0.10000000000000001, 8, 9);
}

Macad::Occt::BRepFill_Filling::BRepFill_Filling(int Degree, int NbPtsOnCur)
    : Macad::Occt::BaseClass<::BRepFill_Filling>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_Filling(Degree, NbPtsOnCur, 2, false, 1.0000000000000001E-5, 1.0E-4, 0.01, 0.10000000000000001, 8, 9);
}

Macad::Occt::BRepFill_Filling::BRepFill_Filling(int Degree)
    : Macad::Occt::BaseClass<::BRepFill_Filling>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_Filling(Degree, 15, 2, false, 1.0000000000000001E-5, 1.0E-4, 0.01, 0.10000000000000001, 8, 9);
}

Macad::Occt::BRepFill_Filling::BRepFill_Filling()
    : Macad::Occt::BaseClass<::BRepFill_Filling>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_Filling(3, 15, 2, false, 1.0000000000000001E-5, 1.0E-4, 0.01, 0.10000000000000001, 8, 9);
}

void Macad::Occt::BRepFill_Filling::SetConstrParam(double Tol2d, double Tol3d, double TolAng, double TolCurv)
{
    ((::BRepFill_Filling*)_NativeInstance)->SetConstrParam(Tol2d, Tol3d, TolAng, TolCurv);
}

void Macad::Occt::BRepFill_Filling::SetConstrParam(double Tol2d, double Tol3d, double TolAng)
{
    ((::BRepFill_Filling*)_NativeInstance)->SetConstrParam(Tol2d, Tol3d, TolAng, 0.10000000000000001);
}

void Macad::Occt::BRepFill_Filling::SetConstrParam(double Tol2d, double Tol3d)
{
    ((::BRepFill_Filling*)_NativeInstance)->SetConstrParam(Tol2d, Tol3d, 0.01, 0.10000000000000001);
}

void Macad::Occt::BRepFill_Filling::SetConstrParam(double Tol2d)
{
    ((::BRepFill_Filling*)_NativeInstance)->SetConstrParam(Tol2d, 1.0E-4, 0.01, 0.10000000000000001);
}

void Macad::Occt::BRepFill_Filling::SetConstrParam()
{
    ((::BRepFill_Filling*)_NativeInstance)->SetConstrParam(1.0000000000000001E-5, 1.0E-4, 0.01, 0.10000000000000001);
}

void Macad::Occt::BRepFill_Filling::SetResolParam(int Degree, int NbPtsOnCur, int NbIter, bool Anisotropie)
{
    ((::BRepFill_Filling*)_NativeInstance)->SetResolParam(Degree, NbPtsOnCur, NbIter, Anisotropie);
}

void Macad::Occt::BRepFill_Filling::SetResolParam(int Degree, int NbPtsOnCur, int NbIter)
{
    ((::BRepFill_Filling*)_NativeInstance)->SetResolParam(Degree, NbPtsOnCur, NbIter, false);
}

void Macad::Occt::BRepFill_Filling::SetResolParam(int Degree, int NbPtsOnCur)
{
    ((::BRepFill_Filling*)_NativeInstance)->SetResolParam(Degree, NbPtsOnCur, 2, false);
}

void Macad::Occt::BRepFill_Filling::SetResolParam(int Degree)
{
    ((::BRepFill_Filling*)_NativeInstance)->SetResolParam(Degree, 15, 2, false);
}

void Macad::Occt::BRepFill_Filling::SetResolParam()
{
    ((::BRepFill_Filling*)_NativeInstance)->SetResolParam(3, 15, 2, false);
}

void Macad::Occt::BRepFill_Filling::SetApproxParam(int MaxDeg, int MaxSegments)
{
    ((::BRepFill_Filling*)_NativeInstance)->SetApproxParam(MaxDeg, MaxSegments);
}

void Macad::Occt::BRepFill_Filling::SetApproxParam(int MaxDeg)
{
    ((::BRepFill_Filling*)_NativeInstance)->SetApproxParam(MaxDeg, 9);
}

void Macad::Occt::BRepFill_Filling::SetApproxParam()
{
    ((::BRepFill_Filling*)_NativeInstance)->SetApproxParam(8, 9);
}

void Macad::Occt::BRepFill_Filling::LoadInitSurface(Macad::Occt::TopoDS_Face^ aFace)
{
    ((::BRepFill_Filling*)_NativeInstance)->LoadInitSurface(*(::TopoDS_Face*)aFace->NativeInstance);
}

int Macad::Occt::BRepFill_Filling::Add(Macad::Occt::TopoDS_Edge^ anEdge, Macad::Occt::GeomAbs_Shape Order, bool IsBound)
{
    int _result = ((::BRepFill_Filling*)_NativeInstance)->Add(*(::TopoDS_Edge*)anEdge->NativeInstance, (::GeomAbs_Shape)Order, IsBound);
    return _result;
}

int Macad::Occt::BRepFill_Filling::Add(Macad::Occt::TopoDS_Edge^ anEdge, Macad::Occt::GeomAbs_Shape Order)
{
    int _result = ((::BRepFill_Filling*)_NativeInstance)->Add(*(::TopoDS_Edge*)anEdge->NativeInstance, (::GeomAbs_Shape)Order, true);
    return _result;
}

int Macad::Occt::BRepFill_Filling::Add(Macad::Occt::TopoDS_Edge^ anEdge, Macad::Occt::TopoDS_Face^ Support, Macad::Occt::GeomAbs_Shape Order, bool IsBound)
{
    int _result = ((::BRepFill_Filling*)_NativeInstance)->Add(*(::TopoDS_Edge*)anEdge->NativeInstance, *(::TopoDS_Face*)Support->NativeInstance, (::GeomAbs_Shape)Order, IsBound);
    return _result;
}

int Macad::Occt::BRepFill_Filling::Add(Macad::Occt::TopoDS_Edge^ anEdge, Macad::Occt::TopoDS_Face^ Support, Macad::Occt::GeomAbs_Shape Order)
{
    int _result = ((::BRepFill_Filling*)_NativeInstance)->Add(*(::TopoDS_Edge*)anEdge->NativeInstance, *(::TopoDS_Face*)Support->NativeInstance, (::GeomAbs_Shape)Order, true);
    return _result;
}

int Macad::Occt::BRepFill_Filling::Add(Macad::Occt::TopoDS_Face^ Support, Macad::Occt::GeomAbs_Shape Order)
{
    int _result = ((::BRepFill_Filling*)_NativeInstance)->Add(*(::TopoDS_Face*)Support->NativeInstance, (::GeomAbs_Shape)Order);
    return _result;
}

int Macad::Occt::BRepFill_Filling::Add(Macad::Occt::Pnt Point)
{
    pin_ptr<Macad::Occt::Pnt> pp_Point = &Point;
    int _result = ((::BRepFill_Filling*)_NativeInstance)->Add(*(gp_Pnt*)pp_Point);
    return _result;
}

int Macad::Occt::BRepFill_Filling::Add(double U, double V, Macad::Occt::TopoDS_Face^ Support, Macad::Occt::GeomAbs_Shape Order)
{
    int _result = ((::BRepFill_Filling*)_NativeInstance)->Add(U, V, *(::TopoDS_Face*)Support->NativeInstance, (::GeomAbs_Shape)Order);
    return _result;
}

void Macad::Occt::BRepFill_Filling::Build()
{
    ((::BRepFill_Filling*)_NativeInstance)->Build();
}

bool Macad::Occt::BRepFill_Filling::IsDone()
{
    bool _result = ((::BRepFill_Filling*)_NativeInstance)->IsDone();
    return _result;
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepFill_Filling::Face()
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = ((::BRepFill_Filling*)_NativeInstance)->Face();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepFill_Filling::Generated(Macad::Occt::TopoDS_Shape^ S)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepFill_Filling*)_NativeInstance)->Generated(*(::TopoDS_Shape*)S->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

double Macad::Occt::BRepFill_Filling::G0Error()
{
    double _result = ((::BRepFill_Filling*)_NativeInstance)->G0Error();
    return _result;
}

double Macad::Occt::BRepFill_Filling::G1Error()
{
    double _result = ((::BRepFill_Filling*)_NativeInstance)->G1Error();
    return _result;
}

double Macad::Occt::BRepFill_Filling::G2Error()
{
    double _result = ((::BRepFill_Filling*)_NativeInstance)->G2Error();
    return _result;
}

double Macad::Occt::BRepFill_Filling::G0Error(int Index)
{
    double _result = ((::BRepFill_Filling*)_NativeInstance)->G0Error(Index);
    return _result;
}

double Macad::Occt::BRepFill_Filling::G1Error(int Index)
{
    double _result = ((::BRepFill_Filling*)_NativeInstance)->G1Error(Index);
    return _result;
}

double Macad::Occt::BRepFill_Filling::G2Error(int Index)
{
    double _result = ((::BRepFill_Filling*)_NativeInstance)->G2Error(Index);
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepFill_Generator
//---------------------------------------------------------------------

Macad::Occt::BRepFill_Generator::BRepFill_Generator()
    : Macad::Occt::BaseClass<::BRepFill_Generator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_Generator();
}

void Macad::Occt::BRepFill_Generator::AddWire(Macad::Occt::TopoDS_Wire^ Wire)
{
    ((::BRepFill_Generator*)_NativeInstance)->AddWire(*(::TopoDS_Wire*)Wire->NativeInstance);
}

void Macad::Occt::BRepFill_Generator::Perform()
{
    ((::BRepFill_Generator*)_NativeInstance)->Perform();
}

Macad::Occt::TopoDS_Shell^ Macad::Occt::BRepFill_Generator::Shell()
{
    ::TopoDS_Shell* _result = new ::TopoDS_Shell();
    *_result = (::TopoDS_Shell)((::BRepFill_Generator*)_NativeInstance)->Shell();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shell(_result);
}

Macad::Occt::TopTools_DataMapOfShapeListOfShape^ Macad::Occt::BRepFill_Generator::Generated()
{
    ::TopTools_DataMapOfShapeListOfShape* _result = new ::TopTools_DataMapOfShapeListOfShape();
    *_result = (::TopTools_DataMapOfShapeListOfShape)((::BRepFill_Generator*)_NativeInstance)->Generated();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_DataMapOfShapeListOfShape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepFill_Generator::GeneratedShapes(Macad::Occt::TopoDS_Shape^ SSection)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepFill_Generator*)_NativeInstance)->GeneratedShapes(*(::TopoDS_Shape*)SSection->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepFill_Generator::ResultShape(Macad::Occt::TopoDS_Shape^ theShape)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepFill_Generator*)_NativeInstance)->ResultShape(*(::TopoDS_Shape*)theShape->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::BRepFill_Generator::SetMutableInput(bool theIsMutableInput)
{
    ((::BRepFill_Generator*)_NativeInstance)->SetMutableInput(theIsMutableInput);
}

bool Macad::Occt::BRepFill_Generator::IsMutableInput()
{
    bool _result = ((::BRepFill_Generator*)_NativeInstance)->IsMutableInput();
    return _result;
}

Macad::Occt::BRepFill_ThruSectionErrorStatus Macad::Occt::BRepFill_Generator::GetStatus()
{
    ::BRepFill_ThruSectionErrorStatus _result = ((::BRepFill_Generator*)_NativeInstance)->GetStatus();
    return (Macad::Occt::BRepFill_ThruSectionErrorStatus)_result;
}



//---------------------------------------------------------------------
//  Class  BRepFill_TrimEdgeTool
//---------------------------------------------------------------------

Macad::Occt::BRepFill_TrimEdgeTool::BRepFill_TrimEdgeTool()
    : Macad::Occt::BaseClass<::BRepFill_TrimEdgeTool>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_TrimEdgeTool();
}

void Macad::Occt::BRepFill_TrimEdgeTool::IntersectWith(Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, Macad::Occt::TopoDS_Shape^ InitShape1, Macad::Occt::TopoDS_Shape^ InitShape2, Macad::Occt::TopoDS_Vertex^ End1, Macad::Occt::TopoDS_Vertex^ End2, Macad::Occt::GeomAbs_JoinType theJoinType, bool IsOpenResult, Macad::Occt::TColgp_SequenceOfPnt^ Params)
{
    ((::BRepFill_TrimEdgeTool*)_NativeInstance)->IntersectWith(*(::TopoDS_Edge*)Edge1->NativeInstance, *(::TopoDS_Edge*)Edge2->NativeInstance, *(::TopoDS_Shape*)InitShape1->NativeInstance, *(::TopoDS_Shape*)InitShape2->NativeInstance, *(::TopoDS_Vertex*)End1->NativeInstance, *(::TopoDS_Vertex*)End2->NativeInstance, (::GeomAbs_JoinType)theJoinType, IsOpenResult, *(::TColgp_SequenceOfPnt*)Params->NativeInstance);
}

void Macad::Occt::BRepFill_TrimEdgeTool::AddOrConfuse(bool Start, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, Macad::Occt::TColgp_SequenceOfPnt^ Params)
{
    ((::BRepFill_TrimEdgeTool*)_NativeInstance)->AddOrConfuse(Start, *(::TopoDS_Edge*)Edge1->NativeInstance, *(::TopoDS_Edge*)Edge2->NativeInstance, *(::TColgp_SequenceOfPnt*)Params->NativeInstance);
}

bool Macad::Occt::BRepFill_TrimEdgeTool::IsInside(Macad::Occt::Pnt2d P)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_P = &P;
    bool _result = ((::BRepFill_TrimEdgeTool*)_NativeInstance)->IsInside(*(gp_Pnt2d*)pp_P);
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepFill_OffsetWire
//---------------------------------------------------------------------

Macad::Occt::BRepFill_OffsetWire::BRepFill_OffsetWire()
    : Macad::Occt::BaseClass<::BRepFill_OffsetWire>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_OffsetWire();
}

Macad::Occt::BRepFill_OffsetWire::BRepFill_OffsetWire(Macad::Occt::TopoDS_Face^ Spine, Macad::Occt::GeomAbs_JoinType Join, bool IsOpenResult)
    : Macad::Occt::BaseClass<::BRepFill_OffsetWire>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_OffsetWire(*(::TopoDS_Face*)Spine->NativeInstance, (::GeomAbs_JoinType)Join, IsOpenResult);
}

Macad::Occt::BRepFill_OffsetWire::BRepFill_OffsetWire(Macad::Occt::TopoDS_Face^ Spine, Macad::Occt::GeomAbs_JoinType Join)
    : Macad::Occt::BaseClass<::BRepFill_OffsetWire>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_OffsetWire(*(::TopoDS_Face*)Spine->NativeInstance, (::GeomAbs_JoinType)Join, false);
}

Macad::Occt::BRepFill_OffsetWire::BRepFill_OffsetWire(Macad::Occt::TopoDS_Face^ Spine)
    : Macad::Occt::BaseClass<::BRepFill_OffsetWire>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_OffsetWire(*(::TopoDS_Face*)Spine->NativeInstance, GeomAbs_Arc, false);
}

void Macad::Occt::BRepFill_OffsetWire::Init(Macad::Occt::TopoDS_Face^ Spine, Macad::Occt::GeomAbs_JoinType Join, bool IsOpenResult)
{
    ((::BRepFill_OffsetWire*)_NativeInstance)->Init(*(::TopoDS_Face*)Spine->NativeInstance, (::GeomAbs_JoinType)Join, IsOpenResult);
}

void Macad::Occt::BRepFill_OffsetWire::Init(Macad::Occt::TopoDS_Face^ Spine, Macad::Occt::GeomAbs_JoinType Join)
{
    ((::BRepFill_OffsetWire*)_NativeInstance)->Init(*(::TopoDS_Face*)Spine->NativeInstance, (::GeomAbs_JoinType)Join, false);
}

void Macad::Occt::BRepFill_OffsetWire::Init(Macad::Occt::TopoDS_Face^ Spine)
{
    ((::BRepFill_OffsetWire*)_NativeInstance)->Init(*(::TopoDS_Face*)Spine->NativeInstance, GeomAbs_Arc, false);
}

void Macad::Occt::BRepFill_OffsetWire::Perform(double Offset, double Alt)
{
    ((::BRepFill_OffsetWire*)_NativeInstance)->Perform(Offset, Alt);
}

void Macad::Occt::BRepFill_OffsetWire::Perform(double Offset)
{
    ((::BRepFill_OffsetWire*)_NativeInstance)->Perform(Offset, 0.);
}

bool Macad::Occt::BRepFill_OffsetWire::IsDone()
{
    bool _result = ((::BRepFill_OffsetWire*)_NativeInstance)->IsDone();
    return _result;
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepFill_OffsetWire::Spine()
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = (::TopoDS_Face)((::BRepFill_OffsetWire*)_NativeInstance)->Spine();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepFill_OffsetWire::Shape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepFill_OffsetWire*)_NativeInstance)->Shape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopTools_ListOfShape^ Macad::Occt::BRepFill_OffsetWire::GeneratedShapes(Macad::Occt::TopoDS_Shape^ SpineShape)
{
    ::TopTools_ListOfShape* _result = new ::TopTools_ListOfShape();
    *_result = (::TopTools_ListOfShape)((::BRepFill_OffsetWire*)_NativeInstance)->GeneratedShapes(*(::TopoDS_Shape*)SpineShape->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopTools_ListOfShape(_result);
}

Macad::Occt::GeomAbs_JoinType Macad::Occt::BRepFill_OffsetWire::JoinType()
{
    ::GeomAbs_JoinType _result = ((::BRepFill_OffsetWire*)_NativeInstance)->JoinType();
    return (Macad::Occt::GeomAbs_JoinType)_result;
}



//---------------------------------------------------------------------
//  Class  BRepFill_NSections
//---------------------------------------------------------------------

Macad::Occt::BRepFill_NSections::BRepFill_NSections(Macad::Occt::TopTools_SequenceOfShape^ S, bool Build)
    : Macad::Occt::BRepFill_SectionLaw(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepFill_NSections(*(::TopTools_SequenceOfShape*)S->NativeInstance, Build);
}

Macad::Occt::BRepFill_NSections::BRepFill_NSections(Macad::Occt::TopTools_SequenceOfShape^ S)
    : Macad::Occt::BRepFill_SectionLaw(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepFill_NSections(*(::TopTools_SequenceOfShape*)S->NativeInstance, true);
}

bool Macad::Occt::BRepFill_NSections::IsVertex()
{
    bool _result = ((::BRepFill_NSections*)_NativeInstance)->IsVertex();
    return _result;
}

bool Macad::Occt::BRepFill_NSections::IsConstant()
{
    bool _result = ((::BRepFill_NSections*)_NativeInstance)->IsConstant();
    return _result;
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRepFill_NSections::Continuity(int Index, double TolAngular)
{
    ::GeomAbs_Shape _result = ((::BRepFill_NSections*)_NativeInstance)->Continuity(Index, TolAngular);
    return (Macad::Occt::GeomAbs_Shape)_result;
}

double Macad::Occt::BRepFill_NSections::VertexTol(int Index, double Param)
{
    double _result = ((::BRepFill_NSections*)_NativeInstance)->VertexTol(Index, Param);
    return _result;
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepFill_NSections::Vertex(int Index, double Param)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ((::BRepFill_NSections*)_NativeInstance)->Vertex(Index, Param);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

void Macad::Occt::BRepFill_NSections::D0(double Param, Macad::Occt::TopoDS_Shape^ S)
{
    ((::BRepFill_NSections*)_NativeInstance)->D0(Param, *(::TopoDS_Shape*)S->NativeInstance);
}

Macad::Occt::BRepFill_NSections^ Macad::Occt::BRepFill_NSections::CreateDowncasted(::BRepFill_NSections* instance)
{
    return gcnew Macad::Occt::BRepFill_NSections( instance );
}



//---------------------------------------------------------------------
//  Class  BRepFill_OffsetAncestors
//---------------------------------------------------------------------

Macad::Occt::BRepFill_OffsetAncestors::BRepFill_OffsetAncestors()
    : Macad::Occt::BaseClass<::BRepFill_OffsetAncestors>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_OffsetAncestors();
}

Macad::Occt::BRepFill_OffsetAncestors::BRepFill_OffsetAncestors(Macad::Occt::BRepFill_OffsetWire^ Paral)
    : Macad::Occt::BaseClass<::BRepFill_OffsetAncestors>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_OffsetAncestors(*(::BRepFill_OffsetWire*)Paral->NativeInstance);
}

void Macad::Occt::BRepFill_OffsetAncestors::Perform(Macad::Occt::BRepFill_OffsetWire^ Paral)
{
    ((::BRepFill_OffsetAncestors*)_NativeInstance)->Perform(*(::BRepFill_OffsetWire*)Paral->NativeInstance);
}

bool Macad::Occt::BRepFill_OffsetAncestors::IsDone()
{
    bool _result = ((::BRepFill_OffsetAncestors*)_NativeInstance)->IsDone();
    return _result;
}

bool Macad::Occt::BRepFill_OffsetAncestors::HasAncestor(Macad::Occt::TopoDS_Edge^ S1)
{
    bool _result = ((::BRepFill_OffsetAncestors*)_NativeInstance)->HasAncestor(*(::TopoDS_Edge*)S1->NativeInstance);
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepFill_OffsetAncestors::Ancestor(Macad::Occt::TopoDS_Edge^ S1)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepFill_OffsetAncestors*)_NativeInstance)->Ancestor(*(::TopoDS_Edge*)S1->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepFill_Sweep
//---------------------------------------------------------------------

Macad::Occt::BRepFill_Sweep::BRepFill_Sweep(Macad::Occt::BRepFill_SectionLaw^ Section, Macad::Occt::BRepFill_LocationLaw^ Location, bool WithKPart)
    : Macad::Occt::BaseClass<::BRepFill_Sweep>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_Sweep(Handle(::BRepFill_SectionLaw)(Section->NativeInstance), Handle(::BRepFill_LocationLaw)(Location->NativeInstance), WithKPart);
}

void Macad::Occt::BRepFill_Sweep::SetBounds(Macad::Occt::TopoDS_Wire^ FirstShape, Macad::Occt::TopoDS_Wire^ LastShape)
{
    ((::BRepFill_Sweep*)_NativeInstance)->SetBounds(*(::TopoDS_Wire*)FirstShape->NativeInstance, *(::TopoDS_Wire*)LastShape->NativeInstance);
}

void Macad::Occt::BRepFill_Sweep::SetTolerance(double Tol3d, double BoundTol, double Tol2d, double TolAngular)
{
    ((::BRepFill_Sweep*)_NativeInstance)->SetTolerance(Tol3d, BoundTol, Tol2d, TolAngular);
}

void Macad::Occt::BRepFill_Sweep::SetTolerance(double Tol3d, double BoundTol, double Tol2d)
{
    ((::BRepFill_Sweep*)_NativeInstance)->SetTolerance(Tol3d, BoundTol, Tol2d, 0.01);
}

void Macad::Occt::BRepFill_Sweep::SetTolerance(double Tol3d, double BoundTol)
{
    ((::BRepFill_Sweep*)_NativeInstance)->SetTolerance(Tol3d, BoundTol, 1.0000000000000001E-5, 0.01);
}

void Macad::Occt::BRepFill_Sweep::SetTolerance(double Tol3d)
{
    ((::BRepFill_Sweep*)_NativeInstance)->SetTolerance(Tol3d, 1., 1.0000000000000001E-5, 0.01);
}

void Macad::Occt::BRepFill_Sweep::SetAngularControl(double AngleMin, double AngleMax)
{
    ((::BRepFill_Sweep*)_NativeInstance)->SetAngularControl(AngleMin, AngleMax);
}

void Macad::Occt::BRepFill_Sweep::SetAngularControl(double AngleMin)
{
    ((::BRepFill_Sweep*)_NativeInstance)->SetAngularControl(AngleMin, 6.);
}

void Macad::Occt::BRepFill_Sweep::SetAngularControl()
{
    ((::BRepFill_Sweep*)_NativeInstance)->SetAngularControl(0.01, 6.);
}

void Macad::Occt::BRepFill_Sweep::SetForceApproxC1(bool ForceApproxC1)
{
    ((::BRepFill_Sweep*)_NativeInstance)->SetForceApproxC1(ForceApproxC1);
}

void Macad::Occt::BRepFill_Sweep::Build(Macad::Occt::TopTools_MapOfShape^ ReversedEdges, Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape^ Tapes, Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape^ Rails, Macad::Occt::BRepFill_TransitionStyle Transition, Macad::Occt::GeomAbs_Shape Continuity)
{
    ((::BRepFill_Sweep*)_NativeInstance)->Build(*(::TopTools_MapOfShape*)ReversedEdges->NativeInstance, *(::BRepFill_DataMapOfShapeHArray2OfShape*)Tapes->NativeInstance, *(::BRepFill_DataMapOfShapeHArray2OfShape*)Rails->NativeInstance, (::BRepFill_TransitionStyle)Transition, (::GeomAbs_Shape)Continuity, GeomFill_Location, 11, 30);
}

void Macad::Occt::BRepFill_Sweep::Build(Macad::Occt::TopTools_MapOfShape^ ReversedEdges, Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape^ Tapes, Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape^ Rails, Macad::Occt::BRepFill_TransitionStyle Transition)
{
    ((::BRepFill_Sweep*)_NativeInstance)->Build(*(::TopTools_MapOfShape*)ReversedEdges->NativeInstance, *(::BRepFill_DataMapOfShapeHArray2OfShape*)Tapes->NativeInstance, *(::BRepFill_DataMapOfShapeHArray2OfShape*)Rails->NativeInstance, (::BRepFill_TransitionStyle)Transition, GeomAbs_C2, GeomFill_Location, 11, 30);
}

void Macad::Occt::BRepFill_Sweep::Build(Macad::Occt::TopTools_MapOfShape^ ReversedEdges, Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape^ Tapes, Macad::Occt::BRepFill_DataMapOfShapeHArray2OfShape^ Rails)
{
    ((::BRepFill_Sweep*)_NativeInstance)->Build(*(::TopTools_MapOfShape*)ReversedEdges->NativeInstance, *(::BRepFill_DataMapOfShapeHArray2OfShape*)Tapes->NativeInstance, *(::BRepFill_DataMapOfShapeHArray2OfShape*)Rails->NativeInstance, BRepFill_Modified, GeomAbs_C2, GeomFill_Location, 11, 30);
}

bool Macad::Occt::BRepFill_Sweep::IsDone()
{
    bool _result = ((::BRepFill_Sweep*)_NativeInstance)->IsDone();
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepFill_Sweep::Shape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepFill_Sweep*)_NativeInstance)->Shape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

double Macad::Occt::BRepFill_Sweep::ErrorOnSurface()
{
    double _result = ((::BRepFill_Sweep*)_NativeInstance)->ErrorOnSurface();
    return _result;
}

Macad::Occt::TopTools_HArray2OfShape^ Macad::Occt::BRepFill_Sweep::SubShape()
{
    Handle(::TopTools_HArray2OfShape) _result = ((::BRepFill_Sweep*)_NativeInstance)->SubShape();
    return _result.IsNull() ? nullptr : Macad::Occt::TopTools_HArray2OfShape::CreateDowncasted(_result.get());
}

Macad::Occt::TopTools_HArray2OfShape^ Macad::Occt::BRepFill_Sweep::InterFaces()
{
    Handle(::TopTools_HArray2OfShape) _result = ((::BRepFill_Sweep*)_NativeInstance)->InterFaces();
    return _result.IsNull() ? nullptr : Macad::Occt::TopTools_HArray2OfShape::CreateDowncasted(_result.get());
}

Macad::Occt::TopTools_HArray2OfShape^ Macad::Occt::BRepFill_Sweep::Sections()
{
    Handle(::TopTools_HArray2OfShape) _result = ((::BRepFill_Sweep*)_NativeInstance)->Sections();
    return _result.IsNull() ? nullptr : Macad::Occt::TopTools_HArray2OfShape::CreateDowncasted(_result.get());
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepFill_Sweep::Tape(int Index)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepFill_Sweep*)_NativeInstance)->Tape(Index);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}



//---------------------------------------------------------------------
//  Class  BRepFill_Pipe
//---------------------------------------------------------------------

Macad::Occt::BRepFill_Pipe::BRepFill_Pipe()
    : Macad::Occt::BaseClass<::BRepFill_Pipe>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_Pipe();
}

Macad::Occt::BRepFill_Pipe::BRepFill_Pipe(Macad::Occt::TopoDS_Wire^ Spine, Macad::Occt::TopoDS_Shape^ Profile)
    : Macad::Occt::BaseClass<::BRepFill_Pipe>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_Pipe(*(::TopoDS_Wire*)Spine->NativeInstance, *(::TopoDS_Shape*)Profile->NativeInstance, GeomFill_IsCorrectedFrenet, false, false);
}

void Macad::Occt::BRepFill_Pipe::Perform(Macad::Occt::TopoDS_Wire^ Spine, Macad::Occt::TopoDS_Shape^ Profile, bool GeneratePartCase)
{
    ((::BRepFill_Pipe*)_NativeInstance)->Perform(*(::TopoDS_Wire*)Spine->NativeInstance, *(::TopoDS_Shape*)Profile->NativeInstance, GeneratePartCase);
}

void Macad::Occt::BRepFill_Pipe::Perform(Macad::Occt::TopoDS_Wire^ Spine, Macad::Occt::TopoDS_Shape^ Profile)
{
    ((::BRepFill_Pipe*)_NativeInstance)->Perform(*(::TopoDS_Wire*)Spine->NativeInstance, *(::TopoDS_Shape*)Profile->NativeInstance, false);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepFill_Pipe::Spine()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepFill_Pipe*)_NativeInstance)->Spine();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepFill_Pipe::Profile()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepFill_Pipe*)_NativeInstance)->Profile();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepFill_Pipe::Shape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepFill_Pipe*)_NativeInstance)->Shape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

double Macad::Occt::BRepFill_Pipe::ErrorOnSurface()
{
    double _result = ((::BRepFill_Pipe*)_NativeInstance)->ErrorOnSurface();
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepFill_Pipe::FirstShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepFill_Pipe*)_NativeInstance)->FirstShape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepFill_Pipe::LastShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepFill_Pipe*)_NativeInstance)->LastShape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::BRepFill_Pipe::Generated(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ L)
{
    ((::BRepFill_Pipe*)_NativeInstance)->Generated(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_ListOfShape*)L->NativeInstance);
}

Macad::Occt::TopoDS_Face^ Macad::Occt::BRepFill_Pipe::Face(Macad::Occt::TopoDS_Edge^ ESpine, Macad::Occt::TopoDS_Edge^ EProfile)
{
    ::TopoDS_Face* _result = new ::TopoDS_Face();
    *_result = ((::BRepFill_Pipe*)_NativeInstance)->Face(*(::TopoDS_Edge*)ESpine->NativeInstance, *(::TopoDS_Edge*)EProfile->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Face(_result);
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepFill_Pipe::Edge(Macad::Occt::TopoDS_Edge^ ESpine, Macad::Occt::TopoDS_Vertex^ VProfile)
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = ((::BRepFill_Pipe*)_NativeInstance)->Edge(*(::TopoDS_Edge*)ESpine->NativeInstance, *(::TopoDS_Vertex*)VProfile->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepFill_Pipe::Section(Macad::Occt::TopoDS_Vertex^ VSpine)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepFill_Pipe*)_NativeInstance)->Section(*(::TopoDS_Vertex*)VSpine->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Wire^ Macad::Occt::BRepFill_Pipe::PipeLine(Macad::Occt::Pnt Point)
{
    ::TopoDS_Wire* _result = new ::TopoDS_Wire();
    pin_ptr<Macad::Occt::Pnt> pp_Point = &Point;
    *_result = ((::BRepFill_Pipe*)_NativeInstance)->PipeLine(*(gp_Pnt*)pp_Point);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Wire(_result);
}



//---------------------------------------------------------------------
//  Class  BRepFill_Section
//---------------------------------------------------------------------

Macad::Occt::BRepFill_Section::BRepFill_Section()
    : Macad::Occt::BaseClass<::BRepFill_Section>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_Section();
}

Macad::Occt::BRepFill_Section::BRepFill_Section(Macad::Occt::TopoDS_Shape^ Profile, Macad::Occt::TopoDS_Vertex^ V, bool WithContact, bool WithCorrection)
    : Macad::Occt::BaseClass<::BRepFill_Section>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_Section(*(::TopoDS_Shape*)Profile->NativeInstance, *(::TopoDS_Vertex*)V->NativeInstance, WithContact, WithCorrection);
}

void Macad::Occt::BRepFill_Section::Set(bool IsLaw)
{
    ((::BRepFill_Section*)_NativeInstance)->Set(IsLaw);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepFill_Section::OriginalShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepFill_Section*)_NativeInstance)->OriginalShape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Wire^ Macad::Occt::BRepFill_Section::Wire()
{
    ::TopoDS_Wire* _result = new ::TopoDS_Wire();
    *_result = (::TopoDS_Wire)((::BRepFill_Section*)_NativeInstance)->Wire();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Wire(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepFill_Section::Vertex()
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = (::TopoDS_Vertex)((::BRepFill_Section*)_NativeInstance)->Vertex();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepFill_Section::ModifiedShape(Macad::Occt::TopoDS_Shape^ theShape)
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = ((::BRepFill_Section*)_NativeInstance)->ModifiedShape(*(::TopoDS_Shape*)theShape->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

bool Macad::Occt::BRepFill_Section::IsLaw()
{
    bool _result = ((::BRepFill_Section*)_NativeInstance)->IsLaw();
    return _result;
}

bool Macad::Occt::BRepFill_Section::IsPunctual()
{
    bool _result = ((::BRepFill_Section*)_NativeInstance)->IsPunctual();
    return _result;
}

bool Macad::Occt::BRepFill_Section::WithContact()
{
    bool _result = ((::BRepFill_Section*)_NativeInstance)->WithContact();
    return _result;
}

bool Macad::Occt::BRepFill_Section::WithCorrection()
{
    bool _result = ((::BRepFill_Section*)_NativeInstance)->WithCorrection();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepFill_PipeShell
//---------------------------------------------------------------------

Macad::Occt::BRepFill_PipeShell::BRepFill_PipeShell(Macad::Occt::TopoDS_Wire^ Spine)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepFill_PipeShell(*(::TopoDS_Wire*)Spine->NativeInstance);
}

void Macad::Occt::BRepFill_PipeShell::Set(bool Frenet)
{
    ((::BRepFill_PipeShell*)_NativeInstance)->Set(Frenet);
}

void Macad::Occt::BRepFill_PipeShell::Set()
{
    ((::BRepFill_PipeShell*)_NativeInstance)->Set(false);
}

void Macad::Occt::BRepFill_PipeShell::SetDiscrete()
{
    ((::BRepFill_PipeShell*)_NativeInstance)->SetDiscrete();
}

void Macad::Occt::BRepFill_PipeShell::Set(Macad::Occt::Ax2 Axe)
{
    pin_ptr<Macad::Occt::Ax2> pp_Axe = &Axe;
    ((::BRepFill_PipeShell*)_NativeInstance)->Set(*(gp_Ax2*)pp_Axe);
}

void Macad::Occt::BRepFill_PipeShell::Set(Macad::Occt::Dir BiNormal)
{
    pin_ptr<Macad::Occt::Dir> pp_BiNormal = &BiNormal;
    ((::BRepFill_PipeShell*)_NativeInstance)->Set(*(gp_Dir*)pp_BiNormal);
}

bool Macad::Occt::BRepFill_PipeShell::Set(Macad::Occt::TopoDS_Shape^ SpineSupport)
{
    bool _result = ((::BRepFill_PipeShell*)_NativeInstance)->Set(*(::TopoDS_Shape*)SpineSupport->NativeInstance);
    return _result;
}

void Macad::Occt::BRepFill_PipeShell::Set(Macad::Occt::TopoDS_Wire^ AuxiliarySpine, bool CurvilinearEquivalence, Macad::Occt::BRepFill_TypeOfContact KeepContact)
{
    ((::BRepFill_PipeShell*)_NativeInstance)->Set(*(::TopoDS_Wire*)AuxiliarySpine->NativeInstance, CurvilinearEquivalence, (::BRepFill_TypeOfContact)KeepContact);
}

void Macad::Occt::BRepFill_PipeShell::Set(Macad::Occt::TopoDS_Wire^ AuxiliarySpine, bool CurvilinearEquivalence)
{
    ((::BRepFill_PipeShell*)_NativeInstance)->Set(*(::TopoDS_Wire*)AuxiliarySpine->NativeInstance, CurvilinearEquivalence, BRepFill_NoContact);
}

void Macad::Occt::BRepFill_PipeShell::Set(Macad::Occt::TopoDS_Wire^ AuxiliarySpine)
{
    ((::BRepFill_PipeShell*)_NativeInstance)->Set(*(::TopoDS_Wire*)AuxiliarySpine->NativeInstance, true, BRepFill_NoContact);
}

void Macad::Occt::BRepFill_PipeShell::SetMaxDegree(int NewMaxDegree)
{
    ((::BRepFill_PipeShell*)_NativeInstance)->SetMaxDegree(NewMaxDegree);
}

void Macad::Occt::BRepFill_PipeShell::SetMaxSegments(int NewMaxSegments)
{
    ((::BRepFill_PipeShell*)_NativeInstance)->SetMaxSegments(NewMaxSegments);
}

void Macad::Occt::BRepFill_PipeShell::SetForceApproxC1(bool ForceApproxC1)
{
    ((::BRepFill_PipeShell*)_NativeInstance)->SetForceApproxC1(ForceApproxC1);
}

void Macad::Occt::BRepFill_PipeShell::Add(Macad::Occt::TopoDS_Shape^ Profile, bool WithContact, bool WithCorrection)
{
    ((::BRepFill_PipeShell*)_NativeInstance)->Add(*(::TopoDS_Shape*)Profile->NativeInstance, WithContact, WithCorrection);
}

void Macad::Occt::BRepFill_PipeShell::Add(Macad::Occt::TopoDS_Shape^ Profile, bool WithContact)
{
    ((::BRepFill_PipeShell*)_NativeInstance)->Add(*(::TopoDS_Shape*)Profile->NativeInstance, WithContact, false);
}

void Macad::Occt::BRepFill_PipeShell::Add(Macad::Occt::TopoDS_Shape^ Profile)
{
    ((::BRepFill_PipeShell*)_NativeInstance)->Add(*(::TopoDS_Shape*)Profile->NativeInstance, false, false);
}

void Macad::Occt::BRepFill_PipeShell::Add(Macad::Occt::TopoDS_Shape^ Profile, Macad::Occt::TopoDS_Vertex^ Location, bool WithContact, bool WithCorrection)
{
    ((::BRepFill_PipeShell*)_NativeInstance)->Add(*(::TopoDS_Shape*)Profile->NativeInstance, *(::TopoDS_Vertex*)Location->NativeInstance, WithContact, WithCorrection);
}

void Macad::Occt::BRepFill_PipeShell::Add(Macad::Occt::TopoDS_Shape^ Profile, Macad::Occt::TopoDS_Vertex^ Location, bool WithContact)
{
    ((::BRepFill_PipeShell*)_NativeInstance)->Add(*(::TopoDS_Shape*)Profile->NativeInstance, *(::TopoDS_Vertex*)Location->NativeInstance, WithContact, false);
}

void Macad::Occt::BRepFill_PipeShell::Add(Macad::Occt::TopoDS_Shape^ Profile, Macad::Occt::TopoDS_Vertex^ Location)
{
    ((::BRepFill_PipeShell*)_NativeInstance)->Add(*(::TopoDS_Shape*)Profile->NativeInstance, *(::TopoDS_Vertex*)Location->NativeInstance, false, false);
}

void Macad::Occt::BRepFill_PipeShell::DeleteProfile(Macad::Occt::TopoDS_Shape^ Profile)
{
    ((::BRepFill_PipeShell*)_NativeInstance)->DeleteProfile(*(::TopoDS_Shape*)Profile->NativeInstance);
}

bool Macad::Occt::BRepFill_PipeShell::IsReady()
{
    bool _result = ((::BRepFill_PipeShell*)_NativeInstance)->IsReady();
    return _result;
}

void Macad::Occt::BRepFill_PipeShell::SetTolerance(double Tol3d, double BoundTol, double TolAngular)
{
    ((::BRepFill_PipeShell*)_NativeInstance)->SetTolerance(Tol3d, BoundTol, TolAngular);
}

void Macad::Occt::BRepFill_PipeShell::SetTolerance(double Tol3d, double BoundTol)
{
    ((::BRepFill_PipeShell*)_NativeInstance)->SetTolerance(Tol3d, BoundTol, 0.01);
}

void Macad::Occt::BRepFill_PipeShell::SetTolerance(double Tol3d)
{
    ((::BRepFill_PipeShell*)_NativeInstance)->SetTolerance(Tol3d, 1.0E-4, 0.01);
}

void Macad::Occt::BRepFill_PipeShell::SetTolerance()
{
    ((::BRepFill_PipeShell*)_NativeInstance)->SetTolerance(1.0E-4, 1.0E-4, 0.01);
}

void Macad::Occt::BRepFill_PipeShell::SetTransition(Macad::Occt::BRepFill_TransitionStyle Mode, double Angmin, double Angmax)
{
    ((::BRepFill_PipeShell*)_NativeInstance)->SetTransition((::BRepFill_TransitionStyle)Mode, Angmin, Angmax);
}

void Macad::Occt::BRepFill_PipeShell::SetTransition(Macad::Occt::BRepFill_TransitionStyle Mode, double Angmin)
{
    ((::BRepFill_PipeShell*)_NativeInstance)->SetTransition((::BRepFill_TransitionStyle)Mode, Angmin, 6.);
}

void Macad::Occt::BRepFill_PipeShell::SetTransition(Macad::Occt::BRepFill_TransitionStyle Mode)
{
    ((::BRepFill_PipeShell*)_NativeInstance)->SetTransition((::BRepFill_TransitionStyle)Mode, 0.01, 6.);
}

void Macad::Occt::BRepFill_PipeShell::SetTransition()
{
    ((::BRepFill_PipeShell*)_NativeInstance)->SetTransition(BRepFill_Modified, 0.01, 6.);
}

void Macad::Occt::BRepFill_PipeShell::Simulate(int NumberOfSection, Macad::Occt::TopTools_ListOfShape^ Sections)
{
    ((::BRepFill_PipeShell*)_NativeInstance)->Simulate(NumberOfSection, *(::TopTools_ListOfShape*)Sections->NativeInstance);
}

bool Macad::Occt::BRepFill_PipeShell::Build()
{
    bool _result = ((::BRepFill_PipeShell*)_NativeInstance)->Build();
    return _result;
}

bool Macad::Occt::BRepFill_PipeShell::MakeSolid()
{
    bool _result = ((::BRepFill_PipeShell*)_NativeInstance)->MakeSolid();
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepFill_PipeShell::Shape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepFill_PipeShell*)_NativeInstance)->Shape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

double Macad::Occt::BRepFill_PipeShell::ErrorOnSurface()
{
    double _result = ((::BRepFill_PipeShell*)_NativeInstance)->ErrorOnSurface();
    return _result;
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepFill_PipeShell::FirstShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepFill_PipeShell*)_NativeInstance)->FirstShape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::BRepFill_PipeShell::LastShape()
{
    ::TopoDS_Shape* _result = new ::TopoDS_Shape();
    *_result = (::TopoDS_Shape)((::BRepFill_PipeShell*)_NativeInstance)->LastShape();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::BRepFill_PipeShell::Profiles(Macad::Occt::TopTools_ListOfShape^ theProfiles)
{
    ((::BRepFill_PipeShell*)_NativeInstance)->Profiles(*(::TopTools_ListOfShape*)theProfiles->NativeInstance);
}

Macad::Occt::TopoDS_Wire^ Macad::Occt::BRepFill_PipeShell::Spine()
{
    ::TopoDS_Wire* _result = new ::TopoDS_Wire();
    *_result = (::TopoDS_Wire)((::BRepFill_PipeShell*)_NativeInstance)->Spine();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Wire(_result);
}

void Macad::Occt::BRepFill_PipeShell::Generated(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ L)
{
    ((::BRepFill_PipeShell*)_NativeInstance)->Generated(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_ListOfShape*)L->NativeInstance);
}

Macad::Occt::BRepFill_PipeShell^ Macad::Occt::BRepFill_PipeShell::CreateDowncasted(::BRepFill_PipeShell* instance)
{
    return gcnew Macad::Occt::BRepFill_PipeShell( instance );
}



//---------------------------------------------------------------------
//  Class  BRepFill_SectionPlacement
//---------------------------------------------------------------------

Macad::Occt::BRepFill_SectionPlacement::BRepFill_SectionPlacement(Macad::Occt::BRepFill_LocationLaw^ Law, Macad::Occt::TopoDS_Shape^ Section, bool WithContact, bool WithCorrection)
    : Macad::Occt::BaseClass<::BRepFill_SectionPlacement>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_SectionPlacement(Handle(::BRepFill_LocationLaw)(Law->NativeInstance), *(::TopoDS_Shape*)Section->NativeInstance, WithContact, WithCorrection);
}

Macad::Occt::BRepFill_SectionPlacement::BRepFill_SectionPlacement(Macad::Occt::BRepFill_LocationLaw^ Law, Macad::Occt::TopoDS_Shape^ Section, bool WithContact)
    : Macad::Occt::BaseClass<::BRepFill_SectionPlacement>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_SectionPlacement(Handle(::BRepFill_LocationLaw)(Law->NativeInstance), *(::TopoDS_Shape*)Section->NativeInstance, WithContact, false);
}

Macad::Occt::BRepFill_SectionPlacement::BRepFill_SectionPlacement(Macad::Occt::BRepFill_LocationLaw^ Law, Macad::Occt::TopoDS_Shape^ Section)
    : Macad::Occt::BaseClass<::BRepFill_SectionPlacement>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_SectionPlacement(Handle(::BRepFill_LocationLaw)(Law->NativeInstance), *(::TopoDS_Shape*)Section->NativeInstance, false, false);
}

Macad::Occt::BRepFill_SectionPlacement::BRepFill_SectionPlacement(Macad::Occt::BRepFill_LocationLaw^ Law, Macad::Occt::TopoDS_Shape^ Section, Macad::Occt::TopoDS_Shape^ Vertex, bool WithContact, bool WithCorrection)
    : Macad::Occt::BaseClass<::BRepFill_SectionPlacement>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_SectionPlacement(Handle(::BRepFill_LocationLaw)(Law->NativeInstance), *(::TopoDS_Shape*)Section->NativeInstance, *(::TopoDS_Shape*)Vertex->NativeInstance, WithContact, WithCorrection);
}

Macad::Occt::BRepFill_SectionPlacement::BRepFill_SectionPlacement(Macad::Occt::BRepFill_LocationLaw^ Law, Macad::Occt::TopoDS_Shape^ Section, Macad::Occt::TopoDS_Shape^ Vertex, bool WithContact)
    : Macad::Occt::BaseClass<::BRepFill_SectionPlacement>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_SectionPlacement(Handle(::BRepFill_LocationLaw)(Law->NativeInstance), *(::TopoDS_Shape*)Section->NativeInstance, *(::TopoDS_Shape*)Vertex->NativeInstance, WithContact, false);
}

Macad::Occt::BRepFill_SectionPlacement::BRepFill_SectionPlacement(Macad::Occt::BRepFill_LocationLaw^ Law, Macad::Occt::TopoDS_Shape^ Section, Macad::Occt::TopoDS_Shape^ Vertex)
    : Macad::Occt::BaseClass<::BRepFill_SectionPlacement>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_SectionPlacement(Handle(::BRepFill_LocationLaw)(Law->NativeInstance), *(::TopoDS_Shape*)Section->NativeInstance, *(::TopoDS_Shape*)Vertex->NativeInstance, false, false);
}

Macad::Occt::Trsf Macad::Occt::BRepFill_SectionPlacement::Transformation()
{
    ::gp_Trsf _nativeResult = ((::BRepFill_SectionPlacement*)_NativeInstance)->Transformation();
    return Macad::Occt::Trsf(_nativeResult);
}

double Macad::Occt::BRepFill_SectionPlacement::AbscissaOnPath()
{
    double _result = ((::BRepFill_SectionPlacement*)_NativeInstance)->AbscissaOnPath();
    return _result;
}



//---------------------------------------------------------------------
//  Class  BRepFill_ShapeLaw
//---------------------------------------------------------------------

Macad::Occt::BRepFill_ShapeLaw::BRepFill_ShapeLaw(Macad::Occt::TopoDS_Vertex^ V, bool Build)
    : Macad::Occt::BRepFill_SectionLaw(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepFill_ShapeLaw(*(::TopoDS_Vertex*)V->NativeInstance, Build);
}

Macad::Occt::BRepFill_ShapeLaw::BRepFill_ShapeLaw(Macad::Occt::TopoDS_Vertex^ V)
    : Macad::Occt::BRepFill_SectionLaw(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepFill_ShapeLaw(*(::TopoDS_Vertex*)V->NativeInstance, true);
}

Macad::Occt::BRepFill_ShapeLaw::BRepFill_ShapeLaw(Macad::Occt::TopoDS_Wire^ W, bool Build)
    : Macad::Occt::BRepFill_SectionLaw(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepFill_ShapeLaw(*(::TopoDS_Wire*)W->NativeInstance, Build);
}

Macad::Occt::BRepFill_ShapeLaw::BRepFill_ShapeLaw(Macad::Occt::TopoDS_Wire^ W)
    : Macad::Occt::BRepFill_SectionLaw(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::BRepFill_ShapeLaw(*(::TopoDS_Wire*)W->NativeInstance, true);
}

bool Macad::Occt::BRepFill_ShapeLaw::IsVertex()
{
    bool _result = ((::BRepFill_ShapeLaw*)_NativeInstance)->IsVertex();
    return _result;
}

bool Macad::Occt::BRepFill_ShapeLaw::IsConstant()
{
    bool _result = ((::BRepFill_ShapeLaw*)_NativeInstance)->IsConstant();
    return _result;
}

Macad::Occt::GeomAbs_Shape Macad::Occt::BRepFill_ShapeLaw::Continuity(int Index, double TolAngular)
{
    ::GeomAbs_Shape _result = ((::BRepFill_ShapeLaw*)_NativeInstance)->Continuity(Index, TolAngular);
    return (Macad::Occt::GeomAbs_Shape)_result;
}

double Macad::Occt::BRepFill_ShapeLaw::VertexTol(int Index, double Param)
{
    double _result = ((::BRepFill_ShapeLaw*)_NativeInstance)->VertexTol(Index, Param);
    return _result;
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::BRepFill_ShapeLaw::Vertex(int Index, double Param)
{
    ::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
    *_result = ((::BRepFill_ShapeLaw*)_NativeInstance)->Vertex(Index, Param);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

void Macad::Occt::BRepFill_ShapeLaw::D0(double Param, Macad::Occt::TopoDS_Shape^ S)
{
    ((::BRepFill_ShapeLaw*)_NativeInstance)->D0(Param, *(::TopoDS_Shape*)S->NativeInstance);
}

Macad::Occt::TopoDS_Edge^ Macad::Occt::BRepFill_ShapeLaw::Edge(int Index)
{
    ::TopoDS_Edge* _result = new ::TopoDS_Edge();
    *_result = (::TopoDS_Edge)((::BRepFill_ShapeLaw*)_NativeInstance)->Edge(Index);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Edge(_result);
}

Macad::Occt::BRepFill_ShapeLaw^ Macad::Occt::BRepFill_ShapeLaw::CreateDowncasted(::BRepFill_ShapeLaw* instance)
{
    return gcnew Macad::Occt::BRepFill_ShapeLaw( instance );
}



//---------------------------------------------------------------------
//  Class  BRepFill_TrimShellCorner
//---------------------------------------------------------------------

Macad::Occt::BRepFill_TrimShellCorner::BRepFill_TrimShellCorner(Macad::Occt::TopTools_HArray2OfShape^ theFaces, Macad::Occt::BRepFill_TransitionStyle theTransition, Macad::Occt::Ax2 theAxeOfBisPlane, Macad::Occt::Vec theIntPointCrossDir)
    : Macad::Occt::BaseClass<::BRepFill_TrimShellCorner>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2> pp_theAxeOfBisPlane = &theAxeOfBisPlane;
    pin_ptr<Macad::Occt::Vec> pp_theIntPointCrossDir = &theIntPointCrossDir;
    _NativeInstance = new ::BRepFill_TrimShellCorner(Handle(::TopTools_HArray2OfShape)(theFaces->NativeInstance), (::BRepFill_TransitionStyle)theTransition, *(gp_Ax2*)pp_theAxeOfBisPlane, *(gp_Vec*)pp_theIntPointCrossDir);
}

void Macad::Occt::BRepFill_TrimShellCorner::AddBounds(Macad::Occt::TopTools_HArray2OfShape^ Bounds)
{
    ((::BRepFill_TrimShellCorner*)_NativeInstance)->AddBounds(Handle(::TopTools_HArray2OfShape)(Bounds->NativeInstance));
}

void Macad::Occt::BRepFill_TrimShellCorner::AddUEdges(Macad::Occt::TopTools_HArray2OfShape^ theUEdges)
{
    ((::BRepFill_TrimShellCorner*)_NativeInstance)->AddUEdges(Handle(::TopTools_HArray2OfShape)(theUEdges->NativeInstance));
}

void Macad::Occt::BRepFill_TrimShellCorner::AddVEdges(Macad::Occt::TopTools_HArray2OfShape^ theVEdges, int theIndex)
{
    ((::BRepFill_TrimShellCorner*)_NativeInstance)->AddVEdges(Handle(::TopTools_HArray2OfShape)(theVEdges->NativeInstance), theIndex);
}

void Macad::Occt::BRepFill_TrimShellCorner::Perform()
{
    ((::BRepFill_TrimShellCorner*)_NativeInstance)->Perform();
}

bool Macad::Occt::BRepFill_TrimShellCorner::IsDone()
{
    bool _result = ((::BRepFill_TrimShellCorner*)_NativeInstance)->IsDone();
    return _result;
}

bool Macad::Occt::BRepFill_TrimShellCorner::HasSection()
{
    bool _result = ((::BRepFill_TrimShellCorner*)_NativeInstance)->HasSection();
    return _result;
}

void Macad::Occt::BRepFill_TrimShellCorner::Modified(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_ListOfShape^ theModified)
{
    ((::BRepFill_TrimShellCorner*)_NativeInstance)->Modified(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_ListOfShape*)theModified->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  BRepFill_TrimSurfaceTool
//---------------------------------------------------------------------

Macad::Occt::BRepFill_TrimSurfaceTool::BRepFill_TrimSurfaceTool(Macad::Occt::Geom2d_Curve^ Bis, Macad::Occt::TopoDS_Face^ Face1, Macad::Occt::TopoDS_Face^ Face2, Macad::Occt::TopoDS_Edge^ Edge1, Macad::Occt::TopoDS_Edge^ Edge2, bool Inv1, bool Inv2)
    : Macad::Occt::BaseClass<::BRepFill_TrimSurfaceTool>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::BRepFill_TrimSurfaceTool(Handle(::Geom2d_Curve)(Bis->NativeInstance), *(::TopoDS_Face*)Face1->NativeInstance, *(::TopoDS_Face*)Face2->NativeInstance, *(::TopoDS_Edge*)Edge1->NativeInstance, *(::TopoDS_Edge*)Edge2->NativeInstance, Inv1, Inv2);
}

void Macad::Occt::BRepFill_TrimSurfaceTool::IntersectWith(Macad::Occt::TopoDS_Edge^ EdgeOnF1, Macad::Occt::TopoDS_Edge^ EdgeOnF2, Macad::Occt::TColgp_SequenceOfPnt^ Points)
{
    ((::BRepFill_TrimSurfaceTool*)_NativeInstance)->IntersectWith(*(::TopoDS_Edge*)EdgeOnF1->NativeInstance, *(::TopoDS_Edge*)EdgeOnF2->NativeInstance, *(::TColgp_SequenceOfPnt*)Points->NativeInstance);
}

bool Macad::Occt::BRepFill_TrimSurfaceTool::IsOnFace(Macad::Occt::Pnt2d Point)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_Point = &Point;
    bool _result = ((::BRepFill_TrimSurfaceTool*)_NativeInstance)->IsOnFace(*(gp_Pnt2d*)pp_Point);
    return _result;
}

double Macad::Occt::BRepFill_TrimSurfaceTool::ProjOn(Macad::Occt::Pnt2d Point, Macad::Occt::TopoDS_Edge^ Edge)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_Point = &Point;
    double _result = ((::BRepFill_TrimSurfaceTool*)_NativeInstance)->ProjOn(*(gp_Pnt2d*)pp_Point, *(::TopoDS_Edge*)Edge->NativeInstance);
    return _result;
}

void Macad::Occt::BRepFill_TrimSurfaceTool::Project(double U1, double U2, Macad::Occt::Geom_Curve^ Curve, Macad::Occt::Geom2d_Curve^ PCurve1, Macad::Occt::Geom2d_Curve^ PCurve2, Macad::Occt::GeomAbs_Shape% myCont)
{
    Handle(::Geom_Curve) h_Curve = Curve->NativeInstance;
    Handle(::Geom2d_Curve) h_PCurve1 = PCurve1->NativeInstance;
    Handle(::Geom2d_Curve) h_PCurve2 = PCurve2->NativeInstance;
    pin_ptr<Macad::Occt::GeomAbs_Shape> pp_myCont = &myCont;
    ((::BRepFill_TrimSurfaceTool*)_NativeInstance)->Project(U1, U2, h_Curve, h_PCurve1, h_PCurve2, *(::GeomAbs_Shape*)pp_myCont);
    Curve->NativeInstance = h_Curve.get();
    PCurve1->NativeInstance = h_PCurve1.get();
    PCurve2->NativeInstance = h_PCurve2.get();
}


