// Generated wrapper code for package SelectMgr

#include "OcctPCH.h"
#include "SelectMgr.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "Graphic3d.h"
#include "gp.h"
#include "StdSelect.h"
#include "AIS.h"
#include "PrsMgr.h"
#include "Prs3d.h"
#include "TopLoc.h"
#include "V3d.h"
#include "TopAbs.h"
#include "Bnd.h"
#include "SelectBasics.h"
#include "TColgp.h"
#include "TColStd.h"
#include "TCollection.h"
#include "Image.h"


//---------------------------------------------------------------------
//  Class  SelectMgr_ListOfFilter
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_ListOfFilter::SelectMgr_ListOfFilter()
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_ListOfFilter();
}

Macad::Occt::SelectMgr_ListOfFilter::SelectMgr_ListOfFilter(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_ListOfFilter(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::SelectMgr_ListOfFilter::Size()
{
    int _result = ((::SelectMgr_ListOfFilter*)_NativeInstance)->Size();
    return _result;
}

Macad::Occt::SelectMgr_ListOfFilter^ Macad::Occt::SelectMgr_ListOfFilter::Assign(Macad::Occt::SelectMgr_ListOfFilter^ theOther)
{
    ::SelectMgr_ListOfFilter* _result = new ::SelectMgr_ListOfFilter();
    *_result = ((::SelectMgr_ListOfFilter*)_NativeInstance)->Assign(*(::SelectMgr_ListOfFilter*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_ListOfFilter(_result);
}

void Macad::Occt::SelectMgr_ListOfFilter::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::SelectMgr_ListOfFilter*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::SelectMgr_ListOfFilter::Clear()
{
    ((::SelectMgr_ListOfFilter*)_NativeInstance)->Clear(0L);
}

Macad::Occt::SelectMgr_Filter^ Macad::Occt::SelectMgr_ListOfFilter::First()
{
    Handle(::SelectMgr_Filter) _result = ((::SelectMgr_ListOfFilter*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Filter::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_Filter^ Macad::Occt::SelectMgr_ListOfFilter::Last()
{
    Handle(::SelectMgr_Filter) _result = ((::SelectMgr_ListOfFilter*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Filter::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_Filter^ Macad::Occt::SelectMgr_ListOfFilter::Append(Macad::Occt::SelectMgr_Filter^ theItem)
{
    Handle(::SelectMgr_Filter) _result = ((::SelectMgr_ListOfFilter*)_NativeInstance)->Append(Handle(::SelectMgr_Filter)(theItem->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Filter::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_Filter^ Macad::Occt::SelectMgr_ListOfFilter::Prepend(Macad::Occt::SelectMgr_Filter^ theItem)
{
    Handle(::SelectMgr_Filter) _result = ((::SelectMgr_ListOfFilter*)_NativeInstance)->Prepend(Handle(::SelectMgr_Filter)(theItem->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Filter::CreateDowncasted(_result.get());
}

void Macad::Occt::SelectMgr_ListOfFilter::RemoveFirst()
{
    ((::SelectMgr_ListOfFilter*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::SelectMgr_ListOfFilter::Remove(Macad::Occt::SelectMgr_ListOfFilter::Iterator^ theIter)
{
    ((::SelectMgr_ListOfFilter*)_NativeInstance)->Remove(*(::SelectMgr_ListOfFilter::Iterator*)theIter->NativeInstance);
}

Macad::Occt::SelectMgr_Filter^ Macad::Occt::SelectMgr_ListOfFilter::InsertBefore(Macad::Occt::SelectMgr_Filter^ theItem, Macad::Occt::SelectMgr_ListOfFilter::Iterator^ theIter)
{
    Handle(::SelectMgr_Filter) _result = ((::SelectMgr_ListOfFilter*)_NativeInstance)->InsertBefore(Handle(::SelectMgr_Filter)(theItem->NativeInstance), *(::SelectMgr_ListOfFilter::Iterator*)theIter->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Filter::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_Filter^ Macad::Occt::SelectMgr_ListOfFilter::InsertAfter(Macad::Occt::SelectMgr_Filter^ theItem, Macad::Occt::SelectMgr_ListOfFilter::Iterator^ theIter)
{
    Handle(::SelectMgr_Filter) _result = ((::SelectMgr_ListOfFilter*)_NativeInstance)->InsertAfter(Handle(::SelectMgr_Filter)(theItem->NativeInstance), *(::SelectMgr_ListOfFilter::Iterator*)theIter->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Filter::CreateDowncasted(_result.get());
}

void Macad::Occt::SelectMgr_ListOfFilter::Reverse()
{
    ((::SelectMgr_ListOfFilter*)_NativeInstance)->Reverse();
}



//---------------------------------------------------------------------
//  Class  SelectMgr_ListOfFilter::Iterator
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_ListOfFilter::Iterator::Iterator()
    : Macad::Occt::BaseClass<::SelectMgr_ListOfFilter::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_ListOfFilter::Iterator();
}

bool Macad::Occt::SelectMgr_ListOfFilter::Iterator::More()
{
    bool _result = ((::SelectMgr_ListOfFilter::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::SelectMgr_ListOfFilter::Iterator::Next()
{
    ((::SelectMgr_ListOfFilter::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::SelectMgr_Filter^ Macad::Occt::SelectMgr_ListOfFilter::Iterator::Value()
{
    Handle(::SelectMgr_Filter) _result = ((::SelectMgr_ListOfFilter::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Filter::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_Filter^ Macad::Occt::SelectMgr_ListOfFilter::Iterator::ChangeValue()
{
    Handle(::SelectMgr_Filter) _result = ((::SelectMgr_ListOfFilter::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Filter::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  SelectMgr_Vec3
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_Vec3::SelectMgr_Vec3()
    : Macad::Occt::BaseClass<::SelectMgr_Vec3>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_Vec3();
}

Macad::Occt::SelectMgr_Vec3::SelectMgr_Vec3(double theValue)
    : Macad::Occt::BaseClass<::SelectMgr_Vec3>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_Vec3(theValue);
}

Macad::Occt::SelectMgr_Vec3::SelectMgr_Vec3(double theX, double theY, double theZ)
    : Macad::Occt::BaseClass<::SelectMgr_Vec3>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_Vec3(theX, theY, theZ);
}

Macad::Occt::SelectMgr_Vec3::SelectMgr_Vec3(Macad::Occt::Graphic3d_Vec2d^ theVec2, double theZ)
    : Macad::Occt::BaseClass<::SelectMgr_Vec3>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_Vec3(*(::Graphic3d_Vec2d*)theVec2->NativeInstance, theZ);
}

Macad::Occt::SelectMgr_Vec3::SelectMgr_Vec3(Macad::Occt::Graphic3d_Vec2d^ theVec2)
    : Macad::Occt::BaseClass<::SelectMgr_Vec3>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_Vec3(*(::Graphic3d_Vec2d*)theVec2->NativeInstance, 0.0);
}

int Macad::Occt::SelectMgr_Vec3::Length()
{
    int _result = ::SelectMgr_Vec3::Length();
    return _result;
}

void Macad::Occt::SelectMgr_Vec3::SetValues(double theX, double theY, double theZ)
{
    ((::SelectMgr_Vec3*)_NativeInstance)->SetValues(theX, theY, theZ);
}

double Macad::Occt::SelectMgr_Vec3::x()
{
    double _result = ((::SelectMgr_Vec3*)_NativeInstance)->x();
    return _result;
}

double Macad::Occt::SelectMgr_Vec3::r()
{
    double _result = ((::SelectMgr_Vec3*)_NativeInstance)->r();
    return _result;
}

double Macad::Occt::SelectMgr_Vec3::y()
{
    double _result = ((::SelectMgr_Vec3*)_NativeInstance)->y();
    return _result;
}

double Macad::Occt::SelectMgr_Vec3::g()
{
    double _result = ((::SelectMgr_Vec3*)_NativeInstance)->g();
    return _result;
}

double Macad::Occt::SelectMgr_Vec3::z()
{
    double _result = ((::SelectMgr_Vec3*)_NativeInstance)->z();
    return _result;
}

double Macad::Occt::SelectMgr_Vec3::b()
{
    double _result = ((::SelectMgr_Vec3*)_NativeInstance)->b();
    return _result;
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::SelectMgr_Vec3::xy()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::SelectMgr_Vec3*)_NativeInstance)->xy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::SelectMgr_Vec3::yx()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::SelectMgr_Vec3*)_NativeInstance)->yx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::SelectMgr_Vec3::xz()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::SelectMgr_Vec3*)_NativeInstance)->xz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::SelectMgr_Vec3::zx()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::SelectMgr_Vec3*)_NativeInstance)->zx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::SelectMgr_Vec3::yz()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::SelectMgr_Vec3*)_NativeInstance)->yz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::SelectMgr_Vec3::zy()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::SelectMgr_Vec3*)_NativeInstance)->zy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::SelectMgr_Vec3^ Macad::Occt::SelectMgr_Vec3::xyz()
{
    ::SelectMgr_Vec3* _result = new ::SelectMgr_Vec3();
    *_result = (::SelectMgr_Vec3)((::SelectMgr_Vec3*)_NativeInstance)->xyz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_Vec3(_result);
}

Macad::Occt::SelectMgr_Vec3^ Macad::Occt::SelectMgr_Vec3::xzy()
{
    ::SelectMgr_Vec3* _result = new ::SelectMgr_Vec3();
    *_result = (::SelectMgr_Vec3)((::SelectMgr_Vec3*)_NativeInstance)->xzy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_Vec3(_result);
}

Macad::Occt::SelectMgr_Vec3^ Macad::Occt::SelectMgr_Vec3::yxz()
{
    ::SelectMgr_Vec3* _result = new ::SelectMgr_Vec3();
    *_result = (::SelectMgr_Vec3)((::SelectMgr_Vec3*)_NativeInstance)->yxz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_Vec3(_result);
}

Macad::Occt::SelectMgr_Vec3^ Macad::Occt::SelectMgr_Vec3::yzx()
{
    ::SelectMgr_Vec3* _result = new ::SelectMgr_Vec3();
    *_result = (::SelectMgr_Vec3)((::SelectMgr_Vec3*)_NativeInstance)->yzx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_Vec3(_result);
}

Macad::Occt::SelectMgr_Vec3^ Macad::Occt::SelectMgr_Vec3::zyx()
{
    ::SelectMgr_Vec3* _result = new ::SelectMgr_Vec3();
    *_result = (::SelectMgr_Vec3)((::SelectMgr_Vec3*)_NativeInstance)->zyx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_Vec3(_result);
}

Macad::Occt::SelectMgr_Vec3^ Macad::Occt::SelectMgr_Vec3::zxy()
{
    ::SelectMgr_Vec3* _result = new ::SelectMgr_Vec3();
    *_result = (::SelectMgr_Vec3)((::SelectMgr_Vec3*)_NativeInstance)->zxy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_Vec3(_result);
}

bool Macad::Occt::SelectMgr_Vec3::IsEqual(Macad::Occt::SelectMgr_Vec3^ theOther)
{
    bool _result = ((::SelectMgr_Vec3*)_NativeInstance)->IsEqual(*(::SelectMgr_Vec3*)theOther->NativeInstance);
    return _result;
}

double Macad::Occt::SelectMgr_Vec3::GetData()
{
    throw gcnew System::NotImplementedException();
}

double Macad::Occt::SelectMgr_Vec3::ChangeData()
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::SelectMgr_Vec3::Multiply(double theFactor)
{
    ((::SelectMgr_Vec3*)_NativeInstance)->Multiply(theFactor);
}

Macad::Occt::SelectMgr_Vec3^ Macad::Occt::SelectMgr_Vec3::Multiplied(double theFactor)
{
    ::SelectMgr_Vec3* _result = new ::SelectMgr_Vec3();
    *_result = ((::SelectMgr_Vec3*)_NativeInstance)->Multiplied(theFactor);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_Vec3(_result);
}

Macad::Occt::SelectMgr_Vec3^ Macad::Occt::SelectMgr_Vec3::cwiseMin(Macad::Occt::SelectMgr_Vec3^ theVec)
{
    ::SelectMgr_Vec3* _result = new ::SelectMgr_Vec3();
    *_result = ((::SelectMgr_Vec3*)_NativeInstance)->cwiseMin(*(::SelectMgr_Vec3*)theVec->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_Vec3(_result);
}

Macad::Occt::SelectMgr_Vec3^ Macad::Occt::SelectMgr_Vec3::cwiseMax(Macad::Occt::SelectMgr_Vec3^ theVec)
{
    ::SelectMgr_Vec3* _result = new ::SelectMgr_Vec3();
    *_result = ((::SelectMgr_Vec3*)_NativeInstance)->cwiseMax(*(::SelectMgr_Vec3*)theVec->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_Vec3(_result);
}

Macad::Occt::SelectMgr_Vec3^ Macad::Occt::SelectMgr_Vec3::cwiseAbs()
{
    ::SelectMgr_Vec3* _result = new ::SelectMgr_Vec3();
    *_result = ((::SelectMgr_Vec3*)_NativeInstance)->cwiseAbs();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_Vec3(_result);
}

double Macad::Occt::SelectMgr_Vec3::maxComp()
{
    double _result = ((::SelectMgr_Vec3*)_NativeInstance)->maxComp();
    return _result;
}

double Macad::Occt::SelectMgr_Vec3::minComp()
{
    double _result = ((::SelectMgr_Vec3*)_NativeInstance)->minComp();
    return _result;
}

double Macad::Occt::SelectMgr_Vec3::Dot(Macad::Occt::SelectMgr_Vec3^ theOther)
{
    double _result = ((::SelectMgr_Vec3*)_NativeInstance)->Dot(*(::SelectMgr_Vec3*)theOther->NativeInstance);
    return _result;
}

double Macad::Occt::SelectMgr_Vec3::Modulus()
{
    double _result = ((::SelectMgr_Vec3*)_NativeInstance)->Modulus();
    return _result;
}

double Macad::Occt::SelectMgr_Vec3::SquareModulus()
{
    double _result = ((::SelectMgr_Vec3*)_NativeInstance)->SquareModulus();
    return _result;
}

void Macad::Occt::SelectMgr_Vec3::Normalize()
{
    ((::SelectMgr_Vec3*)_NativeInstance)->Normalize();
}

Macad::Occt::SelectMgr_Vec3^ Macad::Occt::SelectMgr_Vec3::Normalized()
{
    ::SelectMgr_Vec3* _result = new ::SelectMgr_Vec3();
    *_result = ((::SelectMgr_Vec3*)_NativeInstance)->Normalized();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_Vec3(_result);
}

Macad::Occt::SelectMgr_Vec3^ Macad::Occt::SelectMgr_Vec3::Cross(Macad::Occt::SelectMgr_Vec3^ theVec1, Macad::Occt::SelectMgr_Vec3^ theVec2)
{
    ::SelectMgr_Vec3* _result = new ::SelectMgr_Vec3();
    *_result = ::SelectMgr_Vec3::Cross(*(::SelectMgr_Vec3*)theVec1->NativeInstance, *(::SelectMgr_Vec3*)theVec2->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_Vec3(_result);
}

Macad::Occt::SelectMgr_Vec3^ Macad::Occt::SelectMgr_Vec3::GetLERP(Macad::Occt::SelectMgr_Vec3^ theFrom, Macad::Occt::SelectMgr_Vec3^ theTo, double theT)
{
    ::SelectMgr_Vec3* _result = new ::SelectMgr_Vec3();
    *_result = ::SelectMgr_Vec3::GetLERP(*(::SelectMgr_Vec3*)theFrom->NativeInstance, *(::SelectMgr_Vec3*)theTo->NativeInstance, theT);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_Vec3(_result);
}

Macad::Occt::SelectMgr_Vec3^ Macad::Occt::SelectMgr_Vec3::DX()
{
    ::SelectMgr_Vec3* _result = new ::SelectMgr_Vec3();
    *_result = ::SelectMgr_Vec3::DX();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_Vec3(_result);
}

Macad::Occt::SelectMgr_Vec3^ Macad::Occt::SelectMgr_Vec3::DY()
{
    ::SelectMgr_Vec3* _result = new ::SelectMgr_Vec3();
    *_result = ::SelectMgr_Vec3::DY();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_Vec3(_result);
}

Macad::Occt::SelectMgr_Vec3^ Macad::Occt::SelectMgr_Vec3::DZ()
{
    ::SelectMgr_Vec3* _result = new ::SelectMgr_Vec3();
    *_result = ::SelectMgr_Vec3::DZ();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_Vec3(_result);
}

bool Macad::Occt::SelectMgr_Vec3::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::SelectMgr_Vec3::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((SelectMgr_Vec3^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  SelectMgr_Vec4
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_Vec4::SelectMgr_Vec4()
    : Macad::Occt::BaseClass<::SelectMgr_Vec4>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_Vec4();
}

Macad::Occt::SelectMgr_Vec4::SelectMgr_Vec4(double theValue)
    : Macad::Occt::BaseClass<::SelectMgr_Vec4>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_Vec4(theValue);
}

Macad::Occt::SelectMgr_Vec4::SelectMgr_Vec4(double theX, double theY, double theZ, double theW)
    : Macad::Occt::BaseClass<::SelectMgr_Vec4>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_Vec4(theX, theY, theZ, theW);
}

Macad::Occt::SelectMgr_Vec4::SelectMgr_Vec4(Macad::Occt::Graphic3d_Vec2d^ theVec2)
    : Macad::Occt::BaseClass<::SelectMgr_Vec4>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_Vec4(*(::Graphic3d_Vec2d*)theVec2->NativeInstance);
}

Macad::Occt::SelectMgr_Vec4::SelectMgr_Vec4(Macad::Occt::Graphic3d_Vec3d^ theVec3, double theW)
    : Macad::Occt::BaseClass<::SelectMgr_Vec4>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_Vec4(*(::Graphic3d_Vec3d*)theVec3->NativeInstance, theW);
}

Macad::Occt::SelectMgr_Vec4::SelectMgr_Vec4(Macad::Occt::Graphic3d_Vec3d^ theVec3)
    : Macad::Occt::BaseClass<::SelectMgr_Vec4>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_Vec4(*(::Graphic3d_Vec3d*)theVec3->NativeInstance, 0.0);
}

int Macad::Occt::SelectMgr_Vec4::Length()
{
    int _result = ::SelectMgr_Vec4::Length();
    return _result;
}

void Macad::Occt::SelectMgr_Vec4::SetValues(double theX, double theY, double theZ, double theW)
{
    ((::SelectMgr_Vec4*)_NativeInstance)->SetValues(theX, theY, theZ, theW);
}

double Macad::Occt::SelectMgr_Vec4::x()
{
    double _result = ((::SelectMgr_Vec4*)_NativeInstance)->x();
    return _result;
}

double Macad::Occt::SelectMgr_Vec4::r()
{
    double _result = ((::SelectMgr_Vec4*)_NativeInstance)->r();
    return _result;
}

double Macad::Occt::SelectMgr_Vec4::y()
{
    double _result = ((::SelectMgr_Vec4*)_NativeInstance)->y();
    return _result;
}

double Macad::Occt::SelectMgr_Vec4::g()
{
    double _result = ((::SelectMgr_Vec4*)_NativeInstance)->g();
    return _result;
}

double Macad::Occt::SelectMgr_Vec4::z()
{
    double _result = ((::SelectMgr_Vec4*)_NativeInstance)->z();
    return _result;
}

double Macad::Occt::SelectMgr_Vec4::b()
{
    double _result = ((::SelectMgr_Vec4*)_NativeInstance)->b();
    return _result;
}

double Macad::Occt::SelectMgr_Vec4::w()
{
    double _result = ((::SelectMgr_Vec4*)_NativeInstance)->w();
    return _result;
}

double Macad::Occt::SelectMgr_Vec4::a()
{
    double _result = ((::SelectMgr_Vec4*)_NativeInstance)->a();
    return _result;
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::SelectMgr_Vec4::xy()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::SelectMgr_Vec4*)_NativeInstance)->xy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::SelectMgr_Vec4::yx()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::SelectMgr_Vec4*)_NativeInstance)->yx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::SelectMgr_Vec4::xz()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::SelectMgr_Vec4*)_NativeInstance)->xz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::SelectMgr_Vec4::zx()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::SelectMgr_Vec4*)_NativeInstance)->zx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::SelectMgr_Vec4::xw()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::SelectMgr_Vec4*)_NativeInstance)->xw();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::SelectMgr_Vec4::wx()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::SelectMgr_Vec4*)_NativeInstance)->wx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::SelectMgr_Vec4::yz()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::SelectMgr_Vec4*)_NativeInstance)->yz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::SelectMgr_Vec4::zy()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::SelectMgr_Vec4*)_NativeInstance)->zy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::SelectMgr_Vec4::yw()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::SelectMgr_Vec4*)_NativeInstance)->yw();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::SelectMgr_Vec4::wy()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::SelectMgr_Vec4*)_NativeInstance)->wy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::SelectMgr_Vec4::zw()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::SelectMgr_Vec4*)_NativeInstance)->zw();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::SelectMgr_Vec4::wz()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::SelectMgr_Vec4*)_NativeInstance)->wz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::SelectMgr_Vec4::xyz()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::SelectMgr_Vec4*)_NativeInstance)->xyz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::SelectMgr_Vec4::xzy()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::SelectMgr_Vec4*)_NativeInstance)->xzy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::SelectMgr_Vec4::yxz()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::SelectMgr_Vec4*)_NativeInstance)->yxz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::SelectMgr_Vec4::yzx()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::SelectMgr_Vec4*)_NativeInstance)->yzx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::SelectMgr_Vec4::zyx()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::SelectMgr_Vec4*)_NativeInstance)->zyx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::SelectMgr_Vec4::zxy()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::SelectMgr_Vec4*)_NativeInstance)->zxy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::SelectMgr_Vec4::xyw()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::SelectMgr_Vec4*)_NativeInstance)->xyw();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::SelectMgr_Vec4::xwy()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::SelectMgr_Vec4*)_NativeInstance)->xwy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::SelectMgr_Vec4::yxw()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::SelectMgr_Vec4*)_NativeInstance)->yxw();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::SelectMgr_Vec4::ywx()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::SelectMgr_Vec4*)_NativeInstance)->ywx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::SelectMgr_Vec4::wyx()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::SelectMgr_Vec4*)_NativeInstance)->wyx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::SelectMgr_Vec4::wxy()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::SelectMgr_Vec4*)_NativeInstance)->wxy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::SelectMgr_Vec4::xzw()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::SelectMgr_Vec4*)_NativeInstance)->xzw();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::SelectMgr_Vec4::xwz()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::SelectMgr_Vec4*)_NativeInstance)->xwz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::SelectMgr_Vec4::zxw()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::SelectMgr_Vec4*)_NativeInstance)->zxw();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::SelectMgr_Vec4::zwx()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::SelectMgr_Vec4*)_NativeInstance)->zwx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::SelectMgr_Vec4::wzx()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::SelectMgr_Vec4*)_NativeInstance)->wzx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::SelectMgr_Vec4::wxz()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::SelectMgr_Vec4*)_NativeInstance)->wxz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::SelectMgr_Vec4::yzw()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::SelectMgr_Vec4*)_NativeInstance)->yzw();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::SelectMgr_Vec4::ywz()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::SelectMgr_Vec4*)_NativeInstance)->ywz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::SelectMgr_Vec4::zyw()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::SelectMgr_Vec4*)_NativeInstance)->zyw();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::SelectMgr_Vec4::zwy()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::SelectMgr_Vec4*)_NativeInstance)->zwy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::SelectMgr_Vec4::wzy()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::SelectMgr_Vec4*)_NativeInstance)->wzy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::SelectMgr_Vec4::wyz()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::SelectMgr_Vec4*)_NativeInstance)->wyz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::SelectMgr_Vec4::rgb()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::SelectMgr_Vec4*)_NativeInstance)->rgb();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::SelectMgr_Vec4::rbg()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::SelectMgr_Vec4*)_NativeInstance)->rbg();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::SelectMgr_Vec4::grb()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::SelectMgr_Vec4*)_NativeInstance)->grb();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::SelectMgr_Vec4::gbr()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::SelectMgr_Vec4*)_NativeInstance)->gbr();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::SelectMgr_Vec4::bgr()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::SelectMgr_Vec4*)_NativeInstance)->bgr();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::SelectMgr_Vec4::brg()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::SelectMgr_Vec4*)_NativeInstance)->brg();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

bool Macad::Occt::SelectMgr_Vec4::IsEqual(Macad::Occt::SelectMgr_Vec4^ theOther)
{
    bool _result = ((::SelectMgr_Vec4*)_NativeInstance)->IsEqual(*(::SelectMgr_Vec4*)theOther->NativeInstance);
    return _result;
}

double Macad::Occt::SelectMgr_Vec4::GetData()
{
    throw gcnew System::NotImplementedException();
}

double Macad::Occt::SelectMgr_Vec4::ChangeData()
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::SelectMgr_Vec4::Multiply(double theFactor)
{
    ((::SelectMgr_Vec4*)_NativeInstance)->Multiply(theFactor);
}

Macad::Occt::SelectMgr_Vec4^ Macad::Occt::SelectMgr_Vec4::Multiplied(double theFactor)
{
    ::SelectMgr_Vec4* _result = new ::SelectMgr_Vec4();
    *_result = ((::SelectMgr_Vec4*)_NativeInstance)->Multiplied(theFactor);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_Vec4(_result);
}

Macad::Occt::SelectMgr_Vec4^ Macad::Occt::SelectMgr_Vec4::cwiseMin(Macad::Occt::SelectMgr_Vec4^ theVec)
{
    ::SelectMgr_Vec4* _result = new ::SelectMgr_Vec4();
    *_result = ((::SelectMgr_Vec4*)_NativeInstance)->cwiseMin(*(::SelectMgr_Vec4*)theVec->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_Vec4(_result);
}

Macad::Occt::SelectMgr_Vec4^ Macad::Occt::SelectMgr_Vec4::cwiseMax(Macad::Occt::SelectMgr_Vec4^ theVec)
{
    ::SelectMgr_Vec4* _result = new ::SelectMgr_Vec4();
    *_result = ((::SelectMgr_Vec4*)_NativeInstance)->cwiseMax(*(::SelectMgr_Vec4*)theVec->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_Vec4(_result);
}

Macad::Occt::SelectMgr_Vec4^ Macad::Occt::SelectMgr_Vec4::cwiseAbs()
{
    ::SelectMgr_Vec4* _result = new ::SelectMgr_Vec4();
    *_result = ((::SelectMgr_Vec4*)_NativeInstance)->cwiseAbs();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_Vec4(_result);
}

double Macad::Occt::SelectMgr_Vec4::maxComp()
{
    double _result = ((::SelectMgr_Vec4*)_NativeInstance)->maxComp();
    return _result;
}

double Macad::Occt::SelectMgr_Vec4::minComp()
{
    double _result = ((::SelectMgr_Vec4*)_NativeInstance)->minComp();
    return _result;
}

double Macad::Occt::SelectMgr_Vec4::Dot(Macad::Occt::SelectMgr_Vec4^ theOther)
{
    double _result = ((::SelectMgr_Vec4*)_NativeInstance)->Dot(*(::SelectMgr_Vec4*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_Vec4::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::SelectMgr_Vec4::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((SelectMgr_Vec4^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  SelectMgr_Mat4
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_Mat4::SelectMgr_Mat4()
    : Macad::Occt::BaseClass<::SelectMgr_Mat4>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_Mat4();
}

long long unsigned int Macad::Occt::SelectMgr_Mat4::Rows()
{
    long long unsigned int _result = ::SelectMgr_Mat4::Rows();
    return _result;
}

long long unsigned int Macad::Occt::SelectMgr_Mat4::Cols()
{
    long long unsigned int _result = ::SelectMgr_Mat4::Cols();
    return _result;
}

Macad::Occt::SelectMgr_Mat4^ Macad::Occt::SelectMgr_Mat4::Identity()
{
    ::SelectMgr_Mat4* _result = new ::SelectMgr_Mat4();
    *_result = ::SelectMgr_Mat4::Identity();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_Mat4(_result);
}

Macad::Occt::SelectMgr_Mat4^ Macad::Occt::SelectMgr_Mat4::Zero()
{
    ::SelectMgr_Mat4* _result = new ::SelectMgr_Mat4();
    *_result = ::SelectMgr_Mat4::Zero();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_Mat4(_result);
}

double Macad::Occt::SelectMgr_Mat4::GetValue(long long unsigned int theRow, long long unsigned int theCol)
{
    double _result = ((::SelectMgr_Mat4*)_NativeInstance)->GetValue(theRow, theCol);
    return _result;
}

double Macad::Occt::SelectMgr_Mat4::ChangeValue(long long unsigned int theRow, long long unsigned int theCol)
{
    double _result = ((::SelectMgr_Mat4*)_NativeInstance)->ChangeValue(theRow, theCol);
    return _result;
}

void Macad::Occt::SelectMgr_Mat4::SetValue(long long unsigned int theRow, long long unsigned int theCol, double theValue)
{
    ((::SelectMgr_Mat4*)_NativeInstance)->SetValue(theRow, theCol, theValue);
}

Macad::Occt::Graphic3d_Vec4d^ Macad::Occt::SelectMgr_Mat4::GetRow(long long unsigned int theRow)
{
    ::Graphic3d_Vec4d* _result = new ::Graphic3d_Vec4d();
    *_result = ((::SelectMgr_Mat4*)_NativeInstance)->GetRow(theRow);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4d(_result);
}

void Macad::Occt::SelectMgr_Mat4::SetRow(long long unsigned int theRow, Macad::Occt::Graphic3d_Vec3d^ theVec)
{
    ((::SelectMgr_Mat4*)_NativeInstance)->SetRow(theRow, *(::Graphic3d_Vec3d*)theVec->NativeInstance);
}

Macad::Occt::Graphic3d_Vec4d^ Macad::Occt::SelectMgr_Mat4::GetColumn(long long unsigned int theCol)
{
    ::Graphic3d_Vec4d* _result = new ::Graphic3d_Vec4d();
    *_result = ((::SelectMgr_Mat4*)_NativeInstance)->GetColumn(theCol);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4d(_result);
}

void Macad::Occt::SelectMgr_Mat4::SetColumn(long long unsigned int theCol, Macad::Occt::Graphic3d_Vec3d^ theVec)
{
    ((::SelectMgr_Mat4*)_NativeInstance)->SetColumn(theCol, *(::Graphic3d_Vec3d*)theVec->NativeInstance);
}

Macad::Occt::Graphic3d_Vec4d^ Macad::Occt::SelectMgr_Mat4::GetDiagonal()
{
    ::Graphic3d_Vec4d* _result = new ::Graphic3d_Vec4d();
    *_result = ((::SelectMgr_Mat4*)_NativeInstance)->GetDiagonal();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4d(_result);
}

void Macad::Occt::SelectMgr_Mat4::SetDiagonal(Macad::Occt::Graphic3d_Vec3d^ theVec)
{
    ((::SelectMgr_Mat4*)_NativeInstance)->SetDiagonal(*(::Graphic3d_Vec3d*)theVec->NativeInstance);
}

void Macad::Occt::SelectMgr_Mat4::InitZero()
{
    ((::SelectMgr_Mat4*)_NativeInstance)->InitZero();
}

bool Macad::Occt::SelectMgr_Mat4::IsZero()
{
    bool _result = ((::SelectMgr_Mat4*)_NativeInstance)->IsZero();
    return _result;
}

void Macad::Occt::SelectMgr_Mat4::InitIdentity()
{
    ((::SelectMgr_Mat4*)_NativeInstance)->InitIdentity();
}

bool Macad::Occt::SelectMgr_Mat4::IsIdentity()
{
    bool _result = ((::SelectMgr_Mat4*)_NativeInstance)->IsIdentity();
    return _result;
}

bool Macad::Occt::SelectMgr_Mat4::IsEqual(Macad::Occt::SelectMgr_Mat4^ theOther)
{
    bool _result = ((::SelectMgr_Mat4*)_NativeInstance)->IsEqual(*(::SelectMgr_Mat4*)theOther->NativeInstance);
    return _result;
}

double Macad::Occt::SelectMgr_Mat4::GetData()
{
    throw gcnew System::NotImplementedException();
}

double Macad::Occt::SelectMgr_Mat4::ChangeData()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::SelectMgr_Mat4^ Macad::Occt::SelectMgr_Mat4::Multiply(Macad::Occt::SelectMgr_Mat4^ theMatA, Macad::Occt::SelectMgr_Mat4^ theMatB)
{
    ::SelectMgr_Mat4* _result = new ::SelectMgr_Mat4();
    *_result = ::SelectMgr_Mat4::Multiply(*(::SelectMgr_Mat4*)theMatA->NativeInstance, *(::SelectMgr_Mat4*)theMatB->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_Mat4(_result);
}

Macad::Occt::SelectMgr_Mat4^ Macad::Occt::SelectMgr_Mat4::Multiplied(Macad::Occt::SelectMgr_Mat4^ theMat)
{
    ::SelectMgr_Mat4* _result = new ::SelectMgr_Mat4();
    *_result = ((::SelectMgr_Mat4*)_NativeInstance)->Multiplied(*(::SelectMgr_Mat4*)theMat->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_Mat4(_result);
}

void Macad::Occt::SelectMgr_Mat4::Divide(double theFactor)
{
    ((::SelectMgr_Mat4*)_NativeInstance)->Divide(theFactor);
}

Macad::Occt::SelectMgr_Mat4^ Macad::Occt::SelectMgr_Mat4::Divided(double theScalar)
{
    ::SelectMgr_Mat4* _result = new ::SelectMgr_Mat4();
    *_result = ((::SelectMgr_Mat4*)_NativeInstance)->Divided(theScalar);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_Mat4(_result);
}

void Macad::Occt::SelectMgr_Mat4::Add(Macad::Occt::SelectMgr_Mat4^ theMat)
{
    ((::SelectMgr_Mat4*)_NativeInstance)->Add(*(::SelectMgr_Mat4*)theMat->NativeInstance);
}

void Macad::Occt::SelectMgr_Mat4::Subtract(Macad::Occt::SelectMgr_Mat4^ theMat)
{
    ((::SelectMgr_Mat4*)_NativeInstance)->Subtract(*(::SelectMgr_Mat4*)theMat->NativeInstance);
}

Macad::Occt::SelectMgr_Mat4^ Macad::Occt::SelectMgr_Mat4::Added(Macad::Occt::SelectMgr_Mat4^ theMat)
{
    ::SelectMgr_Mat4* _result = new ::SelectMgr_Mat4();
    *_result = ((::SelectMgr_Mat4*)_NativeInstance)->Added(*(::SelectMgr_Mat4*)theMat->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_Mat4(_result);
}

Macad::Occt::SelectMgr_Mat4^ Macad::Occt::SelectMgr_Mat4::Subtracted(Macad::Occt::SelectMgr_Mat4^ theMat)
{
    ::SelectMgr_Mat4* _result = new ::SelectMgr_Mat4();
    *_result = ((::SelectMgr_Mat4*)_NativeInstance)->Subtracted(*(::SelectMgr_Mat4*)theMat->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_Mat4(_result);
}

Macad::Occt::SelectMgr_Mat4^ Macad::Occt::SelectMgr_Mat4::Negated()
{
    ::SelectMgr_Mat4* _result = new ::SelectMgr_Mat4();
    *_result = ((::SelectMgr_Mat4*)_NativeInstance)->Negated();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_Mat4(_result);
}

void Macad::Occt::SelectMgr_Mat4::Translate(Macad::Occt::Graphic3d_Vec3d^ theVec)
{
    ((::SelectMgr_Mat4*)_NativeInstance)->Translate(*(::Graphic3d_Vec3d*)theVec->NativeInstance);
}

Macad::Occt::SelectMgr_Mat4^ Macad::Occt::SelectMgr_Mat4::Transposed()
{
    ::SelectMgr_Mat4* _result = new ::SelectMgr_Mat4();
    *_result = ((::SelectMgr_Mat4*)_NativeInstance)->Transposed();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_Mat4(_result);
}

void Macad::Occt::SelectMgr_Mat4::Transpose()
{
    ((::SelectMgr_Mat4*)_NativeInstance)->Transpose();
}

bool Macad::Occt::SelectMgr_Mat4::Inverted(Macad::Occt::SelectMgr_Mat4^ theOutMx, double% theDet)
{
    pin_ptr<double> pp_theDet = &theDet;
    bool _result = ((::SelectMgr_Mat4*)_NativeInstance)->Inverted(*(::SelectMgr_Mat4*)theOutMx->NativeInstance, *(double*)pp_theDet);
    return _result;
}

double Macad::Occt::SelectMgr_Mat4::DeterminantMat3()
{
    double _result = ((::SelectMgr_Mat4*)_NativeInstance)->DeterminantMat3();
    return _result;
}

Macad::Occt::SelectMgr_Mat4^ Macad::Occt::SelectMgr_Mat4::Adjoint()
{
    ::SelectMgr_Mat4* _result = new ::SelectMgr_Mat4();
    *_result = ((::SelectMgr_Mat4*)_NativeInstance)->Adjoint();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_Mat4(_result);
}

Macad::Occt::SelectMgr_Mat4^ Macad::Occt::SelectMgr_Mat4::Map(double% theData)
{
    ::SelectMgr_Mat4* _result = new ::SelectMgr_Mat4();
    pin_ptr<double> pp_theData = &theData;
    *_result = ::SelectMgr_Mat4::Map((double*)pp_theData);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_Mat4(_result);
}

bool Macad::Occt::SelectMgr_Mat4::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::SelectMgr_Mat4::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((SelectMgr_Mat4^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  SelectMgr_SequenceOfSelection
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_SequenceOfSelection::SelectMgr_SequenceOfSelection()
    : Macad::Occt::BaseClass<::SelectMgr_SequenceOfSelection>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_SequenceOfSelection();
}

Macad::Occt::SelectMgr_SequenceOfSelection::SelectMgr_SequenceOfSelection(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::SelectMgr_SequenceOfSelection>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_SequenceOfSelection(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::SelectMgr_SequenceOfSelection::Size()
{
    int _result = ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::SelectMgr_SequenceOfSelection::Length()
{
    int _result = ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::SelectMgr_SequenceOfSelection::Lower()
{
    int _result = ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::SelectMgr_SequenceOfSelection::Upper()
{
    int _result = ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::SelectMgr_SequenceOfSelection::IsEmpty()
{
    bool _result = ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->IsEmpty();
    return _result;
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
    ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
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

void Macad::Occt::SelectMgr_SequenceOfSelection::Remove(Macad::Occt::SelectMgr_SequenceOfSelection::Iterator^ thePosition)
{
    ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Remove(*(::SelectMgr_SequenceOfSelection::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::SelectMgr_SequenceOfSelection::Append(Macad::Occt::SelectMgr_Selection^ theItem)
{
    ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Append(Handle(::SelectMgr_Selection)(theItem->NativeInstance));
}

void Macad::Occt::SelectMgr_SequenceOfSelection::Prepend(Macad::Occt::SelectMgr_Selection^ theItem)
{
    ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Prepend(Handle(::SelectMgr_Selection)(theItem->NativeInstance));
}

void Macad::Occt::SelectMgr_SequenceOfSelection::InsertBefore(int theIndex, Macad::Occt::SelectMgr_Selection^ theItem)
{
    ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->InsertBefore(theIndex, Handle(::SelectMgr_Selection)(theItem->NativeInstance));
}

void Macad::Occt::SelectMgr_SequenceOfSelection::InsertAfter(Macad::Occt::SelectMgr_SequenceOfSelection::Iterator^ thePosition, Macad::Occt::SelectMgr_Selection^ theItem)
{
    ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->InsertAfter(*(::SelectMgr_SequenceOfSelection::Iterator*)thePosition->NativeInstance, Handle(::SelectMgr_Selection)(theItem->NativeInstance));
}

void Macad::Occt::SelectMgr_SequenceOfSelection::Split(int theIndex, Macad::Occt::SelectMgr_SequenceOfSelection^ theSeq)
{
    ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Split(theIndex, *(::SelectMgr_SequenceOfSelection*)theSeq->NativeInstance);
}

Macad::Occt::SelectMgr_Selection^ Macad::Occt::SelectMgr_SequenceOfSelection::First()
{
    Handle(::SelectMgr_Selection) _result = ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Selection::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_Selection^ Macad::Occt::SelectMgr_SequenceOfSelection::ChangeFirst()
{
    Handle(::SelectMgr_Selection) _result = ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->ChangeFirst();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Selection::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_Selection^ Macad::Occt::SelectMgr_SequenceOfSelection::Last()
{
    Handle(::SelectMgr_Selection) _result = ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Selection::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_Selection^ Macad::Occt::SelectMgr_SequenceOfSelection::ChangeLast()
{
    Handle(::SelectMgr_Selection) _result = ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->ChangeLast();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Selection::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_Selection^ Macad::Occt::SelectMgr_SequenceOfSelection::Value(int theIndex)
{
    Handle(::SelectMgr_Selection) _result = ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Value(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Selection::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_Selection^ Macad::Occt::SelectMgr_SequenceOfSelection::ChangeValue(int theIndex)
{
    Handle(::SelectMgr_Selection) _result = ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->ChangeValue(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Selection::CreateDowncasted(_result.get());
}

void Macad::Occt::SelectMgr_SequenceOfSelection::SetValue(int theIndex, Macad::Occt::SelectMgr_Selection^ theItem)
{
    ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->SetValue(theIndex, Handle(::SelectMgr_Selection)(theItem->NativeInstance));
}

System::Collections::Generic::IEnumerator<Macad::Occt::SelectMgr_Selection^>^ Macad::Occt::SelectMgr_SequenceOfSelection::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::SelectMgr_Selection^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::SelectMgr_SequenceOfSelection::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::SelectMgr_Selection^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  SelectMgr_SequenceOfSelection::Iterator
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_SequenceOfSelection::Iterator::Iterator()
    : Macad::Occt::BaseClass<::SelectMgr_SequenceOfSelection::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_SequenceOfSelection::Iterator();
}

bool Macad::Occt::SelectMgr_SequenceOfSelection::Iterator::More()
{
    bool _result = ((::SelectMgr_SequenceOfSelection::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::SelectMgr_SequenceOfSelection::Iterator::Next()
{
    ((::SelectMgr_SequenceOfSelection::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::SelectMgr_Selection^ Macad::Occt::SelectMgr_SequenceOfSelection::Iterator::Value()
{
    Handle(::SelectMgr_Selection) _result = ((::SelectMgr_SequenceOfSelection::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Selection::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_Selection^ Macad::Occt::SelectMgr_SequenceOfSelection::Iterator::ChangeValue()
{
    Handle(::SelectMgr_Selection) _result = ((::SelectMgr_SequenceOfSelection::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Selection::CreateDowncasted(_result.get());
}

bool Macad::Occt::SelectMgr_SequenceOfSelection::Iterator::IsEqual(Macad::Occt::SelectMgr_SequenceOfSelection::Iterator^ theOther)
{
    bool _result = ((::SelectMgr_SequenceOfSelection::Iterator*)_NativeInstance)->IsEqual(*(::SelectMgr_SequenceOfSelection::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_SequenceOfSelection::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::SelectMgr_SequenceOfSelection::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  SelectMgr_SequenceOfOwner
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_SequenceOfOwner::SelectMgr_SequenceOfOwner()
    : Macad::Occt::BaseClass<::SelectMgr_SequenceOfOwner>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_SequenceOfOwner();
}

Macad::Occt::SelectMgr_SequenceOfOwner::SelectMgr_SequenceOfOwner(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::SelectMgr_SequenceOfOwner>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_SequenceOfOwner(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::SelectMgr_SequenceOfOwner::Size()
{
    int _result = ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::SelectMgr_SequenceOfOwner::Length()
{
    int _result = ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::SelectMgr_SequenceOfOwner::Lower()
{
    int _result = ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::SelectMgr_SequenceOfOwner::Upper()
{
    int _result = ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::SelectMgr_SequenceOfOwner::IsEmpty()
{
    bool _result = ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->IsEmpty();
    return _result;
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
    ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
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

void Macad::Occt::SelectMgr_SequenceOfOwner::Remove(Macad::Occt::SelectMgr_SequenceOfOwner::Iterator^ thePosition)
{
    ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Remove(*(::SelectMgr_SequenceOfOwner::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::SelectMgr_SequenceOfOwner::Append(Macad::Occt::SelectMgr_EntityOwner^ theItem)
{
    ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Append(Handle(::SelectMgr_EntityOwner)(theItem->NativeInstance));
}

void Macad::Occt::SelectMgr_SequenceOfOwner::Prepend(Macad::Occt::SelectMgr_EntityOwner^ theItem)
{
    ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Prepend(Handle(::SelectMgr_EntityOwner)(theItem->NativeInstance));
}

void Macad::Occt::SelectMgr_SequenceOfOwner::InsertBefore(int theIndex, Macad::Occt::SelectMgr_EntityOwner^ theItem)
{
    ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->InsertBefore(theIndex, Handle(::SelectMgr_EntityOwner)(theItem->NativeInstance));
}

void Macad::Occt::SelectMgr_SequenceOfOwner::InsertAfter(Macad::Occt::SelectMgr_SequenceOfOwner::Iterator^ thePosition, Macad::Occt::SelectMgr_EntityOwner^ theItem)
{
    ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->InsertAfter(*(::SelectMgr_SequenceOfOwner::Iterator*)thePosition->NativeInstance, Handle(::SelectMgr_EntityOwner)(theItem->NativeInstance));
}

void Macad::Occt::SelectMgr_SequenceOfOwner::Split(int theIndex, Macad::Occt::SelectMgr_SequenceOfOwner^ theSeq)
{
    ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Split(theIndex, *(::SelectMgr_SequenceOfOwner*)theSeq->NativeInstance);
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_SequenceOfOwner::First()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_SequenceOfOwner::ChangeFirst()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->ChangeFirst();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_SequenceOfOwner::Last()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_SequenceOfOwner::ChangeLast()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->ChangeLast();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_SequenceOfOwner::Value(int theIndex)
{
    Handle(::SelectMgr_EntityOwner) _result = ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Value(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_SequenceOfOwner::ChangeValue(int theIndex)
{
    Handle(::SelectMgr_EntityOwner) _result = ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->ChangeValue(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

void Macad::Occt::SelectMgr_SequenceOfOwner::SetValue(int theIndex, Macad::Occt::SelectMgr_EntityOwner^ theItem)
{
    ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->SetValue(theIndex, Handle(::SelectMgr_EntityOwner)(theItem->NativeInstance));
}

System::Collections::Generic::IEnumerator<Macad::Occt::SelectMgr_EntityOwner^>^ Macad::Occt::SelectMgr_SequenceOfOwner::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::SelectMgr_EntityOwner^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::SelectMgr_SequenceOfOwner::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::SelectMgr_EntityOwner^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  SelectMgr_SequenceOfOwner::Iterator
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_SequenceOfOwner::Iterator::Iterator()
    : Macad::Occt::BaseClass<::SelectMgr_SequenceOfOwner::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_SequenceOfOwner::Iterator();
}

bool Macad::Occt::SelectMgr_SequenceOfOwner::Iterator::More()
{
    bool _result = ((::SelectMgr_SequenceOfOwner::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::SelectMgr_SequenceOfOwner::Iterator::Next()
{
    ((::SelectMgr_SequenceOfOwner::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_SequenceOfOwner::Iterator::Value()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::SelectMgr_SequenceOfOwner::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_SequenceOfOwner::Iterator::ChangeValue()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::SelectMgr_SequenceOfOwner::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

bool Macad::Occt::SelectMgr_SequenceOfOwner::Iterator::IsEqual(Macad::Occt::SelectMgr_SequenceOfOwner::Iterator^ theOther)
{
    bool _result = ((::SelectMgr_SequenceOfOwner::Iterator*)_NativeInstance)->IsEqual(*(::SelectMgr_SequenceOfOwner::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_SequenceOfOwner::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::SelectMgr_SequenceOfOwner::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  SelectMgr_IndexedDataMapOfOwnerCriterion
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::SelectMgr_IndexedDataMapOfOwnerCriterion()
    : Macad::Occt::BaseClass<::SelectMgr_IndexedDataMapOfOwnerCriterion>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_IndexedDataMapOfOwnerCriterion();
}

Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::SelectMgr_IndexedDataMapOfOwnerCriterion(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::SelectMgr_IndexedDataMapOfOwnerCriterion>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_IndexedDataMapOfOwnerCriterion(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::SelectMgr_IndexedDataMapOfOwnerCriterion(int theNbBuckets)
    : Macad::Occt::BaseClass<::SelectMgr_IndexedDataMapOfOwnerCriterion>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_IndexedDataMapOfOwnerCriterion(theNbBuckets, 0L);
}

void Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::Exchange(Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion^ theOther)
{
    ((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->Exchange(*(::SelectMgr_IndexedDataMapOfOwnerCriterion*)theOther->NativeInstance);
}

Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion^ Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::Assign(Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion^ theOther)
{
    ::SelectMgr_IndexedDataMapOfOwnerCriterion* _result = new ::SelectMgr_IndexedDataMapOfOwnerCriterion();
    *_result = ((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->Assign(*(::SelectMgr_IndexedDataMapOfOwnerCriterion*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion(_result);
}

void Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::ReSize(int N)
{
    ((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->ReSize(N);
}

int Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::Add(Macad::Occt::SelectMgr_EntityOwner^ theKey1, Macad::Occt::SelectMgr_SortCriterion^ theItem)
{
    int _result = ((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->Add(Handle(::SelectMgr_EntityOwner)(theKey1->NativeInstance), *(::SelectMgr_SortCriterion*)theItem->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::Contains(Macad::Occt::SelectMgr_EntityOwner^ theKey1)
{
    bool _result = ((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->Contains(Handle(::SelectMgr_EntityOwner)(theKey1->NativeInstance));
    return _result;
}

void Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::Substitute(int theIndex, Macad::Occt::SelectMgr_EntityOwner^ theKey1, Macad::Occt::SelectMgr_SortCriterion^ theItem)
{
    ((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->Substitute(theIndex, Handle(::SelectMgr_EntityOwner)(theKey1->NativeInstance), *(::SelectMgr_SortCriterion*)theItem->NativeInstance);
}

void Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::Swap(int theIndex1, int theIndex2)
{
    ((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->Swap(theIndex1, theIndex2);
}

void Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::RemoveLast()
{
    ((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->RemoveLast();
}

void Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::RemoveFromIndex(int theIndex)
{
    ((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->RemoveFromIndex(theIndex);
}

void Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::RemoveKey(Macad::Occt::SelectMgr_EntityOwner^ theKey1)
{
    ((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->RemoveKey(Handle(::SelectMgr_EntityOwner)(theKey1->NativeInstance));
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::FindKey(int theIndex)
{
    Handle(::SelectMgr_EntityOwner) _result = ((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->FindKey(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_SortCriterion^ Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::FindFromIndex(int theIndex)
{
    ::SelectMgr_SortCriterion* _result = new ::SelectMgr_SortCriterion();
    *_result = (::SelectMgr_SortCriterion)((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->FindFromIndex(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_SortCriterion(_result);
}

Macad::Occt::SelectMgr_SortCriterion^ Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::ChangeFromIndex(int theIndex)
{
    ::SelectMgr_SortCriterion* _result = new ::SelectMgr_SortCriterion();
    *_result = ((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->ChangeFromIndex(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_SortCriterion(_result);
}

int Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::FindIndex(Macad::Occt::SelectMgr_EntityOwner^ theKey1)
{
    int _result = ((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->FindIndex(Handle(::SelectMgr_EntityOwner)(theKey1->NativeInstance));
    return _result;
}

Macad::Occt::SelectMgr_SortCriterion^ Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::FindFromKey(Macad::Occt::SelectMgr_EntityOwner^ theKey1)
{
    ::SelectMgr_SortCriterion* _result = new ::SelectMgr_SortCriterion();
    *_result = (::SelectMgr_SortCriterion)((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->FindFromKey(Handle(::SelectMgr_EntityOwner)(theKey1->NativeInstance));
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_SortCriterion(_result);
}

Macad::Occt::SelectMgr_SortCriterion^ Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::ChangeFromKey(Macad::Occt::SelectMgr_EntityOwner^ theKey1)
{
    ::SelectMgr_SortCriterion* _result = new ::SelectMgr_SortCriterion();
    *_result = ((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->ChangeFromKey(Handle(::SelectMgr_EntityOwner)(theKey1->NativeInstance));
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_SortCriterion(_result);
}

Macad::Occt::SelectMgr_SortCriterion^ Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::Seek(Macad::Occt::SelectMgr_EntityOwner^ theKey1)
{
    const ::SelectMgr_SortCriterion* _result = ((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->Seek(Handle(::SelectMgr_EntityOwner)(theKey1->NativeInstance));
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_SortCriterion((::SelectMgr_SortCriterion*)_result);
}

Macad::Occt::SelectMgr_SortCriterion^ Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::ChangeSeek(Macad::Occt::SelectMgr_EntityOwner^ theKey1)
{
    ::SelectMgr_SortCriterion* _result = ((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->ChangeSeek(Handle(::SelectMgr_EntityOwner)(theKey1->NativeInstance));
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_SortCriterion(_result);
}

void Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::Clear(bool doReleaseMemory)
{
    ((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::Clear()
{
    ((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->Clear(false);
}

int Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::Size()
{
    int _result = ((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  SelectMgr_IndexedDataMapOfOwnerCriterion::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  SelectMgr_MapOfObjectSensitives
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_MapOfObjectSensitives::SelectMgr_MapOfObjectSensitives()
    : Macad::Occt::BaseClass<::SelectMgr_MapOfObjectSensitives>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_MapOfObjectSensitives();
}

Macad::Occt::SelectMgr_MapOfObjectSensitives::SelectMgr_MapOfObjectSensitives(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::SelectMgr_MapOfObjectSensitives>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_MapOfObjectSensitives(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::SelectMgr_MapOfObjectSensitives::SelectMgr_MapOfObjectSensitives(int theNbBuckets)
    : Macad::Occt::BaseClass<::SelectMgr_MapOfObjectSensitives>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_MapOfObjectSensitives(theNbBuckets, 0L);
}

void Macad::Occt::SelectMgr_MapOfObjectSensitives::Exchange(Macad::Occt::SelectMgr_MapOfObjectSensitives^ theOther)
{
    ((::SelectMgr_MapOfObjectSensitives*)_NativeInstance)->Exchange(*(::SelectMgr_MapOfObjectSensitives*)theOther->NativeInstance);
}

Macad::Occt::SelectMgr_MapOfObjectSensitives^ Macad::Occt::SelectMgr_MapOfObjectSensitives::Assign(Macad::Occt::SelectMgr_MapOfObjectSensitives^ theOther)
{
    ::SelectMgr_MapOfObjectSensitives* _result = new ::SelectMgr_MapOfObjectSensitives();
    *_result = ((::SelectMgr_MapOfObjectSensitives*)_NativeInstance)->Assign(*(::SelectMgr_MapOfObjectSensitives*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_MapOfObjectSensitives(_result);
}

void Macad::Occt::SelectMgr_MapOfObjectSensitives::ReSize(int N)
{
    ((::SelectMgr_MapOfObjectSensitives*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::SelectMgr_MapOfObjectSensitives::IsBound(Macad::Occt::SelectMgr_SelectableObject^ theKey)
{
    bool _result = ((::SelectMgr_MapOfObjectSensitives*)_NativeInstance)->IsBound(Handle(::SelectMgr_SelectableObject)(theKey->NativeInstance));
    return _result;
}

bool Macad::Occt::SelectMgr_MapOfObjectSensitives::UnBind(Macad::Occt::SelectMgr_SelectableObject^ theKey)
{
    bool _result = ((::SelectMgr_MapOfObjectSensitives*)_NativeInstance)->UnBind(Handle(::SelectMgr_SelectableObject)(theKey->NativeInstance));
    return _result;
}

void Macad::Occt::SelectMgr_MapOfObjectSensitives::Clear(bool doReleaseMemory)
{
    ((::SelectMgr_MapOfObjectSensitives*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::SelectMgr_MapOfObjectSensitives::Clear()
{
    ((::SelectMgr_MapOfObjectSensitives*)_NativeInstance)->Clear(false);
}

int Macad::Occt::SelectMgr_MapOfObjectSensitives::Size()
{
    int _result = ((::SelectMgr_MapOfObjectSensitives*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  SelectMgr_MapOfObjectSensitives::Iterator
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_MapOfObjectSensitives::Iterator::Iterator()
    : Macad::Occt::BaseClass<::SelectMgr_MapOfObjectSensitives::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_MapOfObjectSensitives::Iterator();
}

bool Macad::Occt::SelectMgr_MapOfObjectSensitives::Iterator::More()
{
    bool _result = ((::SelectMgr_MapOfObjectSensitives::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::SelectMgr_MapOfObjectSensitives::Iterator::Next()
{
    ((::SelectMgr_MapOfObjectSensitives::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::SelectMgr_SelectableObject^ Macad::Occt::SelectMgr_MapOfObjectSensitives::Iterator::Key()
{
    Handle(::SelectMgr_SelectableObject) _result = ((::SelectMgr_MapOfObjectSensitives::Iterator*)_NativeInstance)->Key();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_SelectableObject::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  SelectMgr_IndexedMapOfHSensitive
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_IndexedMapOfHSensitive::SelectMgr_IndexedMapOfHSensitive()
    : Macad::Occt::BaseClass<::SelectMgr_IndexedMapOfHSensitive>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_IndexedMapOfHSensitive();
}

Macad::Occt::SelectMgr_IndexedMapOfHSensitive::SelectMgr_IndexedMapOfHSensitive(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::SelectMgr_IndexedMapOfHSensitive>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_IndexedMapOfHSensitive(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::SelectMgr_IndexedMapOfHSensitive::SelectMgr_IndexedMapOfHSensitive(int theNbBuckets)
    : Macad::Occt::BaseClass<::SelectMgr_IndexedMapOfHSensitive>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_IndexedMapOfHSensitive(theNbBuckets, 0L);
}

void Macad::Occt::SelectMgr_IndexedMapOfHSensitive::Exchange(Macad::Occt::SelectMgr_IndexedMapOfHSensitive^ theOther)
{
    ((::SelectMgr_IndexedMapOfHSensitive*)_NativeInstance)->Exchange(*(::SelectMgr_IndexedMapOfHSensitive*)theOther->NativeInstance);
}

Macad::Occt::SelectMgr_IndexedMapOfHSensitive^ Macad::Occt::SelectMgr_IndexedMapOfHSensitive::Assign(Macad::Occt::SelectMgr_IndexedMapOfHSensitive^ theOther)
{
    ::SelectMgr_IndexedMapOfHSensitive* _result = new ::SelectMgr_IndexedMapOfHSensitive();
    *_result = ((::SelectMgr_IndexedMapOfHSensitive*)_NativeInstance)->Assign(*(::SelectMgr_IndexedMapOfHSensitive*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_IndexedMapOfHSensitive(_result);
}

void Macad::Occt::SelectMgr_IndexedMapOfHSensitive::ReSize(int theExtent)
{
    ((::SelectMgr_IndexedMapOfHSensitive*)_NativeInstance)->ReSize(theExtent);
}

int Macad::Occt::SelectMgr_IndexedMapOfHSensitive::Add(Macad::Occt::SelectMgr_SensitiveEntity^ theKey1)
{
    int _result = ((::SelectMgr_IndexedMapOfHSensitive*)_NativeInstance)->Add(Handle(::SelectMgr_SensitiveEntity)(theKey1->NativeInstance));
    return _result;
}

bool Macad::Occt::SelectMgr_IndexedMapOfHSensitive::Contains(Macad::Occt::SelectMgr_SensitiveEntity^ theKey1)
{
    bool _result = ((::SelectMgr_IndexedMapOfHSensitive*)_NativeInstance)->Contains(Handle(::SelectMgr_SensitiveEntity)(theKey1->NativeInstance));
    return _result;
}

void Macad::Occt::SelectMgr_IndexedMapOfHSensitive::Substitute(int theIndex, Macad::Occt::SelectMgr_SensitiveEntity^ theKey1)
{
    ((::SelectMgr_IndexedMapOfHSensitive*)_NativeInstance)->Substitute(theIndex, Handle(::SelectMgr_SensitiveEntity)(theKey1->NativeInstance));
}

void Macad::Occt::SelectMgr_IndexedMapOfHSensitive::Swap(int theIndex1, int theIndex2)
{
    ((::SelectMgr_IndexedMapOfHSensitive*)_NativeInstance)->Swap(theIndex1, theIndex2);
}

void Macad::Occt::SelectMgr_IndexedMapOfHSensitive::RemoveLast()
{
    ((::SelectMgr_IndexedMapOfHSensitive*)_NativeInstance)->RemoveLast();
}

void Macad::Occt::SelectMgr_IndexedMapOfHSensitive::RemoveFromIndex(int theIndex)
{
    ((::SelectMgr_IndexedMapOfHSensitive*)_NativeInstance)->RemoveFromIndex(theIndex);
}

bool Macad::Occt::SelectMgr_IndexedMapOfHSensitive::RemoveKey(Macad::Occt::SelectMgr_SensitiveEntity^ theKey1)
{
    bool _result = ((::SelectMgr_IndexedMapOfHSensitive*)_NativeInstance)->RemoveKey(Handle(::SelectMgr_SensitiveEntity)(theKey1->NativeInstance));
    return _result;
}

Macad::Occt::SelectMgr_SensitiveEntity^ Macad::Occt::SelectMgr_IndexedMapOfHSensitive::FindKey(int theIndex)
{
    Handle(::SelectMgr_SensitiveEntity) _result = ((::SelectMgr_IndexedMapOfHSensitive*)_NativeInstance)->FindKey(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_SensitiveEntity::CreateDowncasted(_result.get());
}

int Macad::Occt::SelectMgr_IndexedMapOfHSensitive::FindIndex(Macad::Occt::SelectMgr_SensitiveEntity^ theKey1)
{
    int _result = ((::SelectMgr_IndexedMapOfHSensitive*)_NativeInstance)->FindIndex(Handle(::SelectMgr_SensitiveEntity)(theKey1->NativeInstance));
    return _result;
}

void Macad::Occt::SelectMgr_IndexedMapOfHSensitive::Clear(bool doReleaseMemory)
{
    ((::SelectMgr_IndexedMapOfHSensitive*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::SelectMgr_IndexedMapOfHSensitive::Clear()
{
    ((::SelectMgr_IndexedMapOfHSensitive*)_NativeInstance)->Clear(false);
}

int Macad::Occt::SelectMgr_IndexedMapOfHSensitive::Size()
{
    int _result = ((::SelectMgr_IndexedMapOfHSensitive*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  SelectMgr_IndexedMapOfHSensitive::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  SelectMgr_MapOfOwners
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_MapOfOwners::SelectMgr_MapOfOwners()
    : Macad::Occt::BaseClass<::SelectMgr_MapOfOwners>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_MapOfOwners();
}

Macad::Occt::SelectMgr_MapOfOwners::SelectMgr_MapOfOwners(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::SelectMgr_MapOfOwners>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_MapOfOwners(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::SelectMgr_MapOfOwners::SelectMgr_MapOfOwners(int theNbBuckets)
    : Macad::Occt::BaseClass<::SelectMgr_MapOfOwners>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_MapOfOwners(theNbBuckets, 0L);
}

void Macad::Occt::SelectMgr_MapOfOwners::Exchange(Macad::Occt::SelectMgr_MapOfOwners^ theOther)
{
    ((::SelectMgr_MapOfOwners*)_NativeInstance)->Exchange(*(::SelectMgr_MapOfOwners*)theOther->NativeInstance);
}

Macad::Occt::SelectMgr_MapOfOwners^ Macad::Occt::SelectMgr_MapOfOwners::Assign(Macad::Occt::SelectMgr_MapOfOwners^ theOther)
{
    ::SelectMgr_MapOfOwners* _result = new ::SelectMgr_MapOfOwners();
    *_result = ((::SelectMgr_MapOfOwners*)_NativeInstance)->Assign(*(::SelectMgr_MapOfOwners*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_MapOfOwners(_result);
}

void Macad::Occt::SelectMgr_MapOfOwners::ReSize(int N)
{
    ((::SelectMgr_MapOfOwners*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::SelectMgr_MapOfOwners::Bind(Macad::Occt::SelectMgr_EntityOwner^ theKey, int theItem)
{
    pin_ptr<int> pp_theItem = &theItem;
    bool _result = ((::SelectMgr_MapOfOwners*)_NativeInstance)->Bind(Handle(::SelectMgr_EntityOwner)(theKey->NativeInstance), *(int*)pp_theItem);
    return _result;
}

int Macad::Occt::SelectMgr_MapOfOwners::Bound(Macad::Occt::SelectMgr_EntityOwner^ theKey, int theItem)
{
    throw gcnew System::NotImplementedException();
}

bool Macad::Occt::SelectMgr_MapOfOwners::IsBound(Macad::Occt::SelectMgr_EntityOwner^ theKey)
{
    bool _result = ((::SelectMgr_MapOfOwners*)_NativeInstance)->IsBound(Handle(::SelectMgr_EntityOwner)(theKey->NativeInstance));
    return _result;
}

bool Macad::Occt::SelectMgr_MapOfOwners::UnBind(Macad::Occt::SelectMgr_EntityOwner^ theKey)
{
    bool _result = ((::SelectMgr_MapOfOwners*)_NativeInstance)->UnBind(Handle(::SelectMgr_EntityOwner)(theKey->NativeInstance));
    return _result;
}

int Macad::Occt::SelectMgr_MapOfOwners::Seek(Macad::Occt::SelectMgr_EntityOwner^ theKey)
{
    throw gcnew System::NotImplementedException();
}

int Macad::Occt::SelectMgr_MapOfOwners::Find(Macad::Occt::SelectMgr_EntityOwner^ theKey)
{
    int _result = ((::SelectMgr_MapOfOwners*)_NativeInstance)->Find(Handle(::SelectMgr_EntityOwner)(theKey->NativeInstance));
    return _result;
}

int Macad::Occt::SelectMgr_MapOfOwners::ChangeSeek(Macad::Occt::SelectMgr_EntityOwner^ theKey)
{
    throw gcnew System::NotImplementedException();
}

int Macad::Occt::SelectMgr_MapOfOwners::ChangeFind(Macad::Occt::SelectMgr_EntityOwner^ theKey)
{
    int _result = ((::SelectMgr_MapOfOwners*)_NativeInstance)->ChangeFind(Handle(::SelectMgr_EntityOwner)(theKey->NativeInstance));
    return _result;
}

void Macad::Occt::SelectMgr_MapOfOwners::Clear(bool doReleaseMemory)
{
    ((::SelectMgr_MapOfOwners*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::SelectMgr_MapOfOwners::Clear()
{
    ((::SelectMgr_MapOfOwners*)_NativeInstance)->Clear(false);
}

int Macad::Occt::SelectMgr_MapOfOwners::Size()
{
    int _result = ((::SelectMgr_MapOfOwners*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  SelectMgr_MapOfOwners::Iterator
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_MapOfOwners::Iterator::Iterator()
    : Macad::Occt::BaseClass<::SelectMgr_MapOfOwners::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_MapOfOwners::Iterator();
}

bool Macad::Occt::SelectMgr_MapOfOwners::Iterator::More()
{
    bool _result = ((::SelectMgr_MapOfOwners::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::SelectMgr_MapOfOwners::Iterator::Next()
{
    ((::SelectMgr_MapOfOwners::Iterator*)_NativeInstance)->Next();
}

int Macad::Occt::SelectMgr_MapOfOwners::Iterator::Value()
{
    int _result = ((::SelectMgr_MapOfOwners::Iterator*)_NativeInstance)->Value();
    return _result;
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_MapOfOwners::Iterator::Key()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::SelectMgr_MapOfOwners::Iterator*)_NativeInstance)->Key();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  SelectMgr_TriangFrustums
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_TriangFrustums::SelectMgr_TriangFrustums()
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_TriangFrustums();
}

Macad::Occt::SelectMgr_TriangFrustums::SelectMgr_TriangFrustums(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_TriangFrustums(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::SelectMgr_TriangFrustums::Size()
{
    int _result = ((::SelectMgr_TriangFrustums*)_NativeInstance)->Size();
    return _result;
}

Macad::Occt::SelectMgr_TriangFrustums^ Macad::Occt::SelectMgr_TriangFrustums::Assign(Macad::Occt::SelectMgr_TriangFrustums^ theOther)
{
    ::SelectMgr_TriangFrustums* _result = new ::SelectMgr_TriangFrustums();
    *_result = ((::SelectMgr_TriangFrustums*)_NativeInstance)->Assign(*(::SelectMgr_TriangFrustums*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_TriangFrustums(_result);
}

void Macad::Occt::SelectMgr_TriangFrustums::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::SelectMgr_TriangFrustums*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::SelectMgr_TriangFrustums::Clear()
{
    ((::SelectMgr_TriangFrustums*)_NativeInstance)->Clear(0L);
}

Macad::Occt::SelectMgr_TriangularFrustum^ Macad::Occt::SelectMgr_TriangFrustums::First()
{
    Handle(::SelectMgr_TriangularFrustum) _result = ((::SelectMgr_TriangFrustums*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_TriangularFrustum::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_TriangularFrustum^ Macad::Occt::SelectMgr_TriangFrustums::Last()
{
    Handle(::SelectMgr_TriangularFrustum) _result = ((::SelectMgr_TriangFrustums*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_TriangularFrustum::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_TriangularFrustum^ Macad::Occt::SelectMgr_TriangFrustums::Append(Macad::Occt::SelectMgr_TriangularFrustum^ theItem)
{
    Handle(::SelectMgr_TriangularFrustum) _result = ((::SelectMgr_TriangFrustums*)_NativeInstance)->Append(Handle(::SelectMgr_TriangularFrustum)(theItem->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_TriangularFrustum::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_TriangularFrustum^ Macad::Occt::SelectMgr_TriangFrustums::Prepend(Macad::Occt::SelectMgr_TriangularFrustum^ theItem)
{
    Handle(::SelectMgr_TriangularFrustum) _result = ((::SelectMgr_TriangFrustums*)_NativeInstance)->Prepend(Handle(::SelectMgr_TriangularFrustum)(theItem->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_TriangularFrustum::CreateDowncasted(_result.get());
}

void Macad::Occt::SelectMgr_TriangFrustums::RemoveFirst()
{
    ((::SelectMgr_TriangFrustums*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::SelectMgr_TriangFrustums::Remove(Macad::Occt::SelectMgr_TriangFrustums::Iterator^ theIter)
{
    ((::SelectMgr_TriangFrustums*)_NativeInstance)->Remove(*(::SelectMgr_TriangFrustums::Iterator*)theIter->NativeInstance);
}

Macad::Occt::SelectMgr_TriangularFrustum^ Macad::Occt::SelectMgr_TriangFrustums::InsertBefore(Macad::Occt::SelectMgr_TriangularFrustum^ theItem, Macad::Occt::SelectMgr_TriangFrustums::Iterator^ theIter)
{
    Handle(::SelectMgr_TriangularFrustum) _result = ((::SelectMgr_TriangFrustums*)_NativeInstance)->InsertBefore(Handle(::SelectMgr_TriangularFrustum)(theItem->NativeInstance), *(::SelectMgr_TriangFrustums::Iterator*)theIter->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_TriangularFrustum::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_TriangularFrustum^ Macad::Occt::SelectMgr_TriangFrustums::InsertAfter(Macad::Occt::SelectMgr_TriangularFrustum^ theItem, Macad::Occt::SelectMgr_TriangFrustums::Iterator^ theIter)
{
    Handle(::SelectMgr_TriangularFrustum) _result = ((::SelectMgr_TriangFrustums*)_NativeInstance)->InsertAfter(Handle(::SelectMgr_TriangularFrustum)(theItem->NativeInstance), *(::SelectMgr_TriangFrustums::Iterator*)theIter->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_TriangularFrustum::CreateDowncasted(_result.get());
}

void Macad::Occt::SelectMgr_TriangFrustums::Reverse()
{
    ((::SelectMgr_TriangFrustums*)_NativeInstance)->Reverse();
}



//---------------------------------------------------------------------
//  Class  SelectMgr_TriangFrustums::Iterator
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_TriangFrustums::Iterator::Iterator()
    : Macad::Occt::BaseClass<::SelectMgr_TriangFrustums::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_TriangFrustums::Iterator();
}

bool Macad::Occt::SelectMgr_TriangFrustums::Iterator::More()
{
    bool _result = ((::SelectMgr_TriangFrustums::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::SelectMgr_TriangFrustums::Iterator::Next()
{
    ((::SelectMgr_TriangFrustums::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::SelectMgr_TriangularFrustum^ Macad::Occt::SelectMgr_TriangFrustums::Iterator::Value()
{
    Handle(::SelectMgr_TriangularFrustum) _result = ((::SelectMgr_TriangFrustums::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_TriangularFrustum::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_TriangularFrustum^ Macad::Occt::SelectMgr_TriangFrustums::Iterator::ChangeValue()
{
    Handle(::SelectMgr_TriangularFrustum) _result = ((::SelectMgr_TriangFrustums::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_TriangularFrustum::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  SelectMgr_Selection
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_Selection::SelectMgr_Selection(int theModeIdx)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::SelectMgr_Selection(theModeIdx);
}

Macad::Occt::SelectMgr_Selection::SelectMgr_Selection()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::SelectMgr_Selection(0);
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
    bool _result = ((::SelectMgr_Selection*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::SelectMgr_Selection::Mode()
{
    int _result = ((::SelectMgr_Selection*)_NativeInstance)->Mode();
    return _result;
}

Macad::Occt::SelectMgr_TypeOfUpdate Macad::Occt::SelectMgr_Selection::UpdateStatus()
{
    ::SelectMgr_TypeOfUpdate _result = ((::SelectMgr_Selection*)_NativeInstance)->UpdateStatus();
    return (Macad::Occt::SelectMgr_TypeOfUpdate)_result;
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
    ::SelectMgr_TypeOfBVHUpdate _result = ((::SelectMgr_Selection*)_NativeInstance)->BVHUpdateStatus();
    return (Macad::Occt::SelectMgr_TypeOfBVHUpdate)_result;
}

Macad::Occt::SelectMgr_StateOfSelection Macad::Occt::SelectMgr_Selection::GetSelectionState()
{
    ::SelectMgr_StateOfSelection _result = ((::SelectMgr_Selection*)_NativeInstance)->GetSelectionState();
    return (Macad::Occt::SelectMgr_StateOfSelection)_result;
}

void Macad::Occt::SelectMgr_Selection::SetSelectionState(Macad::Occt::SelectMgr_StateOfSelection theState)
{
    ((::SelectMgr_Selection*)_NativeInstance)->SetSelectionState((::SelectMgr_StateOfSelection)theState);
}

int Macad::Occt::SelectMgr_Selection::Sensitivity()
{
    int _result = ((::SelectMgr_Selection*)_NativeInstance)->Sensitivity();
    return _result;
}

void Macad::Occt::SelectMgr_Selection::SetSensitivity(int theNewSens)
{
    ((::SelectMgr_Selection*)_NativeInstance)->SetSensitivity(theNewSens);
}

void Macad::Occt::SelectMgr_Selection::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::SelectMgr_Selection*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::SelectMgr_Selection::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::SelectMgr_Selection*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::SelectMgr_Selection^ Macad::Occt::SelectMgr_Selection::CreateDowncasted(::SelectMgr_Selection* instance)
{
    return gcnew Macad::Occt::SelectMgr_Selection( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr
//---------------------------------------------------------------------

Macad::Occt::SelectMgr::SelectMgr()
    : Macad::Occt::BaseClass<::SelectMgr>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr();
}

void Macad::Occt::SelectMgr::ComputeSensitivePrs(Macad::Occt::Graphic3d_Structure^ theStructure, Macad::Occt::SelectMgr_Selection^ theSel, Macad::Occt::Trsf theLoc, Macad::Occt::Graphic3d_TransformPers^ theTrsfPers)
{
    pin_ptr<Macad::Occt::Trsf> pp_theLoc = &theLoc;
    ::SelectMgr::ComputeSensitivePrs(Handle(::Graphic3d_Structure)(theStructure->NativeInstance), Handle(::SelectMgr_Selection)(theSel->NativeInstance), *(gp_Trsf*)pp_theLoc, Handle(::Graphic3d_TransformPers)(theTrsfPers->NativeInstance));
}



//---------------------------------------------------------------------
//  Class  SelectMgr_EntityOwner
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_EntityOwner::SelectMgr_EntityOwner(int aPriority)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::SelectMgr_EntityOwner(aPriority);
}

Macad::Occt::SelectMgr_EntityOwner::SelectMgr_EntityOwner()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::SelectMgr_EntityOwner(0);
}

Macad::Occt::SelectMgr_EntityOwner::SelectMgr_EntityOwner(Macad::Occt::SelectMgr_SelectableObject^ aSO, int aPriority)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::SelectMgr_EntityOwner(Handle(::SelectMgr_SelectableObject)(aSO->NativeInstance), aPriority);
}

Macad::Occt::SelectMgr_EntityOwner::SelectMgr_EntityOwner(Macad::Occt::SelectMgr_SelectableObject^ aSO)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::SelectMgr_EntityOwner(Handle(::SelectMgr_SelectableObject)(aSO->NativeInstance), 0);
}

Macad::Occt::SelectMgr_EntityOwner::SelectMgr_EntityOwner(Macad::Occt::SelectMgr_EntityOwner^ theOwner, int aPriority)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::SelectMgr_EntityOwner(Handle(::SelectMgr_EntityOwner)(theOwner->NativeInstance), aPriority);
}

int Macad::Occt::SelectMgr_EntityOwner::Priority()
{
    int _result = ((::SelectMgr_EntityOwner*)_NativeInstance)->Priority();
    return _result;
}

void Macad::Occt::SelectMgr_EntityOwner::SetPriority(int thePriority)
{
    ((::SelectMgr_EntityOwner*)_NativeInstance)->SetPriority(thePriority);
}

bool Macad::Occt::SelectMgr_EntityOwner::HasSelectable()
{
    bool _result = ((::SelectMgr_EntityOwner*)_NativeInstance)->HasSelectable();
    return _result;
}

Macad::Occt::SelectMgr_SelectableObject^ Macad::Occt::SelectMgr_EntityOwner::Selectable()
{
    Handle(::SelectMgr_SelectableObject) _result = ((::SelectMgr_EntityOwner*)_NativeInstance)->Selectable();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_SelectableObject::CreateDowncasted(_result.get());
}

void Macad::Occt::SelectMgr_EntityOwner::SetSelectable(Macad::Occt::SelectMgr_SelectableObject^ theSelObj)
{
    ((::SelectMgr_EntityOwner*)_NativeInstance)->SetSelectable(Handle(::SelectMgr_SelectableObject)(theSelObj->NativeInstance));
}

bool Macad::Occt::SelectMgr_EntityOwner::HandleMouseClick(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButton, unsigned int theModifiers, bool theIsDoubleClick)
{
    bool _result = ((::SelectMgr_EntityOwner*)_NativeInstance)->HandleMouseClick(*(::Graphic3d_Vec2i*)thePoint->NativeInstance, theButton, theModifiers, theIsDoubleClick);
    return _result;
}

bool Macad::Occt::SelectMgr_EntityOwner::IsHilighted(Macad::Occt::PrsMgr_PresentationManager^ thePrsMgr, int theMode)
{
    bool _result = ((::SelectMgr_EntityOwner*)_NativeInstance)->IsHilighted(Handle(::PrsMgr_PresentationManager)(thePrsMgr->NativeInstance), theMode);
    return _result;
}

bool Macad::Occt::SelectMgr_EntityOwner::IsHilighted(Macad::Occt::PrsMgr_PresentationManager^ thePrsMgr)
{
    bool _result = ((::SelectMgr_EntityOwner*)_NativeInstance)->IsHilighted(Handle(::PrsMgr_PresentationManager)(thePrsMgr->NativeInstance), 0);
    return _result;
}

void Macad::Occt::SelectMgr_EntityOwner::HilightWithColor(Macad::Occt::PrsMgr_PresentationManager^ thePrsMgr, Macad::Occt::Prs3d_Drawer^ theStyle, int theMode)
{
    ((::SelectMgr_EntityOwner*)_NativeInstance)->HilightWithColor(Handle(::PrsMgr_PresentationManager)(thePrsMgr->NativeInstance), Handle(::Prs3d_Drawer)(theStyle->NativeInstance), theMode);
}

void Macad::Occt::SelectMgr_EntityOwner::HilightWithColor(Macad::Occt::PrsMgr_PresentationManager^ thePrsMgr, Macad::Occt::Prs3d_Drawer^ theStyle)
{
    ((::SelectMgr_EntityOwner*)_NativeInstance)->HilightWithColor(Handle(::PrsMgr_PresentationManager)(thePrsMgr->NativeInstance), Handle(::Prs3d_Drawer)(theStyle->NativeInstance), 0);
}

void Macad::Occt::SelectMgr_EntityOwner::Unhilight(Macad::Occt::PrsMgr_PresentationManager^ thePrsMgr, int theMode)
{
    ((::SelectMgr_EntityOwner*)_NativeInstance)->Unhilight(Handle(::PrsMgr_PresentationManager)(thePrsMgr->NativeInstance), theMode);
}

void Macad::Occt::SelectMgr_EntityOwner::Unhilight(Macad::Occt::PrsMgr_PresentationManager^ thePrsMgr)
{
    ((::SelectMgr_EntityOwner*)_NativeInstance)->Unhilight(Handle(::PrsMgr_PresentationManager)(thePrsMgr->NativeInstance), 0);
}

void Macad::Occt::SelectMgr_EntityOwner::Clear(Macad::Occt::PrsMgr_PresentationManager^ thePrsMgr, int theMode)
{
    ((::SelectMgr_EntityOwner*)_NativeInstance)->Clear(Handle(::PrsMgr_PresentationManager)(thePrsMgr->NativeInstance), theMode);
}

void Macad::Occt::SelectMgr_EntityOwner::Clear(Macad::Occt::PrsMgr_PresentationManager^ thePrsMgr)
{
    ((::SelectMgr_EntityOwner*)_NativeInstance)->Clear(Handle(::PrsMgr_PresentationManager)(thePrsMgr->NativeInstance), 0);
}

bool Macad::Occt::SelectMgr_EntityOwner::HasLocation()
{
    bool _result = ((::SelectMgr_EntityOwner*)_NativeInstance)->HasLocation();
    return _result;
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
    bool _result = ((::SelectMgr_EntityOwner*)_NativeInstance)->IsSelected();
    return _result;
}

void Macad::Occt::SelectMgr_EntityOwner::SetSelected(bool theIsSelected)
{
    ((::SelectMgr_EntityOwner*)_NativeInstance)->SetSelected(theIsSelected);
}

bool Macad::Occt::SelectMgr_EntityOwner::Select(Macad::Occt::AIS_SelectionScheme theSelScheme, bool theIsDetected)
{
    bool _result = ((::SelectMgr_EntityOwner*)_NativeInstance)->Select((::AIS_SelectionScheme)theSelScheme, theIsDetected);
    return _result;
}

int Macad::Occt::SelectMgr_EntityOwner::State()
{
    int _result = ((::SelectMgr_EntityOwner*)_NativeInstance)->State();
    return _result;
}

void Macad::Occt::SelectMgr_EntityOwner::State(int theStatus)
{
    ((::SelectMgr_EntityOwner*)_NativeInstance)->State(theStatus);
}

bool Macad::Occt::SelectMgr_EntityOwner::IsAutoHilight()
{
    bool _result = ((::SelectMgr_EntityOwner*)_NativeInstance)->IsAutoHilight();
    return _result;
}

bool Macad::Occt::SelectMgr_EntityOwner::IsForcedHilight()
{
    bool _result = ((::SelectMgr_EntityOwner*)_NativeInstance)->IsForcedHilight();
    return _result;
}

void Macad::Occt::SelectMgr_EntityOwner::SetZLayer(int theLayerId)
{
    ((::SelectMgr_EntityOwner*)_NativeInstance)->SetZLayer(theLayerId);
}

void Macad::Occt::SelectMgr_EntityOwner::UpdateHighlightTrsf(Macad::Occt::V3d_Viewer^ theViewer, Macad::Occt::PrsMgr_PresentationManager^ theManager, int theDispMode)
{
    ((::SelectMgr_EntityOwner*)_NativeInstance)->UpdateHighlightTrsf(Handle(::V3d_Viewer)(theViewer->NativeInstance), Handle(::PrsMgr_PresentationManager)(theManager->NativeInstance), theDispMode);
}

bool Macad::Occt::SelectMgr_EntityOwner::IsSameSelectable(Macad::Occt::SelectMgr_SelectableObject^ theOther)
{
    bool _result = ((::SelectMgr_EntityOwner*)_NativeInstance)->IsSameSelectable(Handle(::SelectMgr_SelectableObject)(theOther->NativeInstance));
    return _result;
}

bool Macad::Occt::SelectMgr_EntityOwner::ComesFromDecomposition()
{
    bool _result = ((::SelectMgr_EntityOwner*)_NativeInstance)->ComesFromDecomposition();
    return _result;
}

void Macad::Occt::SelectMgr_EntityOwner::SetComesFromDecomposition(bool theIsFromDecomposition)
{
    ((::SelectMgr_EntityOwner*)_NativeInstance)->SetComesFromDecomposition(theIsFromDecomposition);
}

void Macad::Occt::SelectMgr_EntityOwner::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::SelectMgr_EntityOwner*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::SelectMgr_EntityOwner::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::SelectMgr_EntityOwner*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::SelectMgr_EntityOwner::Set(Macad::Occt::SelectMgr_SelectableObject^ theSelObj)
{
    ((::SelectMgr_EntityOwner*)_NativeInstance)->Set(Handle(::SelectMgr_SelectableObject)(theSelObj->NativeInstance));
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
    if (instance->IsKind(STANDARD_TYPE(::AIS_LightSourceOwner)))
        return Macad::Occt::AIS_LightSourceOwner::CreateDowncasted((::AIS_LightSourceOwner*)instance);
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

Macad::Occt::SelectMgr_Filter::SelectMgr_Filter()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

bool Macad::Occt::SelectMgr_Filter::IsOk(Macad::Occt::SelectMgr_EntityOwner^ anObj)
{
    bool _result = ((::SelectMgr_Filter*)_NativeInstance)->IsOk(Handle(::SelectMgr_EntityOwner)(anObj->NativeInstance));
    return _result;
}

bool Macad::Occt::SelectMgr_Filter::ActsOn(Macad::Occt::TopAbs_ShapeEnum aStandardMode)
{
    bool _result = ((::SelectMgr_Filter*)_NativeInstance)->ActsOn((::TopAbs_ShapeEnum)aStandardMode);
    return _result;
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

Macad::Occt::SelectMgr_CompositionFilter::SelectMgr_CompositionFilter()
    : Macad::Occt::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

void Macad::Occt::SelectMgr_CompositionFilter::Add(Macad::Occt::SelectMgr_Filter^ afilter)
{
    ((::SelectMgr_CompositionFilter*)_NativeInstance)->Add(Handle(::SelectMgr_Filter)(afilter->NativeInstance));
}

void Macad::Occt::SelectMgr_CompositionFilter::Remove(Macad::Occt::SelectMgr_Filter^ aFilter)
{
    ((::SelectMgr_CompositionFilter*)_NativeInstance)->Remove(Handle(::SelectMgr_Filter)(aFilter->NativeInstance));
}

bool Macad::Occt::SelectMgr_CompositionFilter::IsEmpty()
{
    bool _result = ((::SelectMgr_CompositionFilter*)_NativeInstance)->IsEmpty();
    return _result;
}

bool Macad::Occt::SelectMgr_CompositionFilter::IsIn(Macad::Occt::SelectMgr_Filter^ aFilter)
{
    bool _result = ((::SelectMgr_CompositionFilter*)_NativeInstance)->IsIn(Handle(::SelectMgr_Filter)(aFilter->NativeInstance));
    return _result;
}

Macad::Occt::SelectMgr_ListOfFilter^ Macad::Occt::SelectMgr_CompositionFilter::StoredFilters()
{
    ::SelectMgr_ListOfFilter* _result = new ::SelectMgr_ListOfFilter();
    *_result = (::SelectMgr_ListOfFilter)((::SelectMgr_CompositionFilter*)_NativeInstance)->StoredFilters();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_ListOfFilter(_result);
}

void Macad::Occt::SelectMgr_CompositionFilter::Clear()
{
    ((::SelectMgr_CompositionFilter*)_NativeInstance)->Clear();
}

bool Macad::Occt::SelectMgr_CompositionFilter::ActsOn(Macad::Occt::TopAbs_ShapeEnum aStandardMode)
{
    bool _result = ((::SelectMgr_CompositionFilter*)_NativeInstance)->ActsOn((::TopAbs_ShapeEnum)aStandardMode);
    return _result;
}

Macad::Occt::SelectMgr_CompositionFilter^ Macad::Occt::SelectMgr_CompositionFilter::CreateDowncasted(::SelectMgr_CompositionFilter* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::SelectMgr_AndFilter)))
        return Macad::Occt::SelectMgr_AndFilter::CreateDowncasted((::SelectMgr_AndFilter*)instance);
    if (instance->IsKind(STANDARD_TYPE(::SelectMgr_AndOrFilter)))
        return Macad::Occt::SelectMgr_AndOrFilter::CreateDowncasted((::SelectMgr_AndOrFilter*)instance);
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

bool Macad::Occt::SelectMgr_AndFilter::IsOk(Macad::Occt::SelectMgr_EntityOwner^ anobj)
{
    bool _result = ((::SelectMgr_AndFilter*)_NativeInstance)->IsOk(Handle(::SelectMgr_EntityOwner)(anobj->NativeInstance));
    return _result;
}

Macad::Occt::SelectMgr_AndFilter^ Macad::Occt::SelectMgr_AndFilter::CreateDowncasted(::SelectMgr_AndFilter* instance)
{
    return gcnew Macad::Occt::SelectMgr_AndFilter( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr_AndOrFilter
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_AndOrFilter::SelectMgr_AndOrFilter(Macad::Occt::SelectMgr_FilterType theFilterType)
    : Macad::Occt::SelectMgr_CompositionFilter(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::SelectMgr_AndOrFilter((::SelectMgr_FilterType)theFilterType);
}

bool Macad::Occt::SelectMgr_AndOrFilter::IsOk(Macad::Occt::SelectMgr_EntityOwner^ theObj)
{
    bool _result = ((::SelectMgr_AndOrFilter*)_NativeInstance)->IsOk(Handle(::SelectMgr_EntityOwner)(theObj->NativeInstance));
    return _result;
}

Macad::Occt::SelectMgr_FilterType Macad::Occt::SelectMgr_AndOrFilter::FilterType()
{
    ::SelectMgr_FilterType _result = ((::SelectMgr_AndOrFilter*)_NativeInstance)->FilterType();
    return (Macad::Occt::SelectMgr_FilterType)_result;
}

void Macad::Occt::SelectMgr_AndOrFilter::SetFilterType(Macad::Occt::SelectMgr_FilterType theFilterType)
{
    ((::SelectMgr_AndOrFilter*)_NativeInstance)->SetFilterType((::SelectMgr_FilterType)theFilterType);
}

Macad::Occt::SelectMgr_AndOrFilter^ Macad::Occt::SelectMgr_AndOrFilter::CreateDowncasted(::SelectMgr_AndOrFilter* instance)
{
    return gcnew Macad::Occt::SelectMgr_AndOrFilter( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr_FrustumBuilder
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_FrustumBuilder::SelectMgr_FrustumBuilder()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::SelectMgr_FrustumBuilder();
}

Macad::Occt::Graphic3d_Camera^ Macad::Occt::SelectMgr_FrustumBuilder::Camera()
{
    Handle(::Graphic3d_Camera) _result = ((::SelectMgr_FrustumBuilder*)_NativeInstance)->Camera();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Camera::CreateDowncasted(_result.get());
}

void Macad::Occt::SelectMgr_FrustumBuilder::SetCamera(Macad::Occt::Graphic3d_Camera^ theCamera)
{
    ((::SelectMgr_FrustumBuilder*)_NativeInstance)->SetCamera(Handle(::Graphic3d_Camera)(theCamera->NativeInstance));
}

void Macad::Occt::SelectMgr_FrustumBuilder::SetWindowSize(int theWidth, int theHeight)
{
    ((::SelectMgr_FrustumBuilder*)_NativeInstance)->SetWindowSize(theWidth, theHeight);
}

void Macad::Occt::SelectMgr_FrustumBuilder::SetViewport(double theX, double theY, double theWidth, double theHeight)
{
    ((::SelectMgr_FrustumBuilder*)_NativeInstance)->SetViewport(theX, theY, theWidth, theHeight);
}

void Macad::Occt::SelectMgr_FrustumBuilder::InvalidateViewport()
{
    ((::SelectMgr_FrustumBuilder*)_NativeInstance)->InvalidateViewport();
}

void Macad::Occt::SelectMgr_FrustumBuilder::WindowSize(int% theWidth, int% theHeight)
{
    pin_ptr<int> pp_theWidth = &theWidth;
    pin_ptr<int> pp_theHeight = &theHeight;
    ((::SelectMgr_FrustumBuilder*)_NativeInstance)->WindowSize(*(int*)pp_theWidth, *(int*)pp_theHeight);
}

double Macad::Occt::SelectMgr_FrustumBuilder::SignedPlanePntDist(Macad::Occt::SelectMgr_Vec3^ theEq, Macad::Occt::SelectMgr_Vec3^ thePnt)
{
    double _result = ((::SelectMgr_FrustumBuilder*)_NativeInstance)->SignedPlanePntDist(*(::SelectMgr_Vec3*)theEq->NativeInstance, *(::SelectMgr_Vec3*)thePnt->NativeInstance);
    return _result;
}

Macad::Occt::Pnt Macad::Occt::SelectMgr_FrustumBuilder::ProjectPntOnViewPlane(double theX, double theY, double theZ)
{
    pin_ptr<double> pp_theX = &theX;
    pin_ptr<double> pp_theY = &theY;
    pin_ptr<double> pp_theZ = &theZ;
    ::gp_Pnt _nativeResult = ((::SelectMgr_FrustumBuilder*)_NativeInstance)->ProjectPntOnViewPlane(*(double*)pp_theX, *(double*)pp_theY, *(double*)pp_theZ);
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::SelectMgr_FrustumBuilder^ Macad::Occt::SelectMgr_FrustumBuilder::CreateDowncasted(::SelectMgr_FrustumBuilder* instance)
{
    return gcnew Macad::Occt::SelectMgr_FrustumBuilder( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr_ViewClipRange
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_ViewClipRange::SelectMgr_ViewClipRange()
    : Macad::Occt::BaseClass<::SelectMgr_ViewClipRange>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_ViewClipRange();
}

bool Macad::Occt::SelectMgr_ViewClipRange::IsClipped(double theDepth)
{
    bool _result = ((::SelectMgr_ViewClipRange*)_NativeInstance)->IsClipped(theDepth);
    return _result;
}

bool Macad::Occt::SelectMgr_ViewClipRange::GetNearestDepth(Macad::Occt::Bnd_Range^ theRange, double% theDepth)
{
    pin_ptr<double> pp_theDepth = &theDepth;
    bool _result = ((::SelectMgr_ViewClipRange*)_NativeInstance)->GetNearestDepth(*(::Bnd_Range*)theRange->NativeInstance, *(double*)pp_theDepth);
    return _result;
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

void Macad::Occt::SelectMgr_ViewClipRange::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::SelectMgr_ViewClipRange*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::SelectMgr_ViewClipRange::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::SelectMgr_ViewClipRange*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  SelectMgr_BaseIntersector
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_BaseIntersector::SelectMgr_BaseIntersector()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

void Macad::Occt::SelectMgr_BaseIntersector::Build()
{
    ((::SelectMgr_BaseIntersector*)_NativeInstance)->Build();
}

Macad::Occt::SelectMgr_SelectionType Macad::Occt::SelectMgr_BaseIntersector::GetSelectionType()
{
    ::SelectMgr_SelectionType _result = ((::SelectMgr_BaseIntersector*)_NativeInstance)->GetSelectionType();
    return (Macad::Occt::SelectMgr_SelectionType)_result;
}

bool Macad::Occt::SelectMgr_BaseIntersector::IsScalable()
{
    bool _result = ((::SelectMgr_BaseIntersector*)_NativeInstance)->IsScalable();
    return _result;
}

void Macad::Occt::SelectMgr_BaseIntersector::SetPixelTolerance(int theTol)
{
    ((::SelectMgr_BaseIntersector*)_NativeInstance)->SetPixelTolerance(theTol);
}

Macad::Occt::SelectMgr_BaseIntersector^ Macad::Occt::SelectMgr_BaseIntersector::ScaleAndTransform(int theScaleFactor, Macad::Occt::gp_GTrsf^ theTrsf, Macad::Occt::SelectMgr_FrustumBuilder^ theBuilder)
{
    Handle(::SelectMgr_BaseIntersector) _result = ((::SelectMgr_BaseIntersector*)_NativeInstance)->ScaleAndTransform(theScaleFactor, *(::gp_GTrsf*)theTrsf->NativeInstance, Handle(::SelectMgr_FrustumBuilder)(theBuilder->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_BaseIntersector::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_BaseIntersector^ Macad::Occt::SelectMgr_BaseIntersector::CopyWithBuilder(Macad::Occt::SelectMgr_FrustumBuilder^ theBuilder)
{
    Handle(::SelectMgr_BaseIntersector) _result = ((::SelectMgr_BaseIntersector*)_NativeInstance)->CopyWithBuilder(Handle(::SelectMgr_FrustumBuilder)(theBuilder->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_BaseIntersector::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_Camera^ Macad::Occt::SelectMgr_BaseIntersector::Camera()
{
    Handle(::Graphic3d_Camera) _result = ((::SelectMgr_BaseIntersector*)_NativeInstance)->Camera();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Camera::CreateDowncasted(_result.get());
}

void Macad::Occt::SelectMgr_BaseIntersector::SetCamera(Macad::Occt::Graphic3d_Camera^ theCamera)
{
    ((::SelectMgr_BaseIntersector*)_NativeInstance)->SetCamera(Handle(::Graphic3d_Camera)(theCamera->NativeInstance));
}

void Macad::Occt::SelectMgr_BaseIntersector::WindowSize(int% theWidth, int% theHeight)
{
    pin_ptr<int> pp_theWidth = &theWidth;
    pin_ptr<int> pp_theHeight = &theHeight;
    ((::SelectMgr_BaseIntersector*)_NativeInstance)->WindowSize(*(int*)pp_theWidth, *(int*)pp_theHeight);
}

void Macad::Occt::SelectMgr_BaseIntersector::SetWindowSize(int theWidth, int theHeight)
{
    ((::SelectMgr_BaseIntersector*)_NativeInstance)->SetWindowSize(theWidth, theHeight);
}

void Macad::Occt::SelectMgr_BaseIntersector::SetViewport(double theX, double theY, double theWidth, double theHeight)
{
    ((::SelectMgr_BaseIntersector*)_NativeInstance)->SetViewport(theX, theY, theWidth, theHeight);
}

Macad::Occt::Pnt Macad::Occt::SelectMgr_BaseIntersector::GetNearPnt()
{
    ::gp_Pnt _nativeResult = ((::SelectMgr_BaseIntersector*)_NativeInstance)->GetNearPnt();
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Pnt Macad::Occt::SelectMgr_BaseIntersector::GetFarPnt()
{
    ::gp_Pnt _nativeResult = ((::SelectMgr_BaseIntersector*)_NativeInstance)->GetFarPnt();
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Dir Macad::Occt::SelectMgr_BaseIntersector::GetViewRayDirection()
{
    ::gp_Dir _nativeResult = ((::SelectMgr_BaseIntersector*)_NativeInstance)->GetViewRayDirection();
    return Macad::Occt::Dir(_nativeResult);
}

Macad::Occt::Pnt2d Macad::Occt::SelectMgr_BaseIntersector::GetMousePosition()
{
    ::gp_Pnt2d _nativeResult = ((::SelectMgr_BaseIntersector*)_NativeInstance)->GetMousePosition();
    return Macad::Occt::Pnt2d(_nativeResult);
}

bool Macad::Occt::SelectMgr_BaseIntersector::OverlapsBox(Macad::Occt::SelectMgr_Vec3^ theBoxMin, Macad::Occt::SelectMgr_Vec3^ theBoxMax, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    bool _result = ((::SelectMgr_BaseIntersector*)_NativeInstance)->OverlapsBox(*(::SelectMgr_Vec3*)theBoxMin->NativeInstance, *(::SelectMgr_Vec3*)theBoxMax->NativeInstance, *(::SelectMgr_ViewClipRange*)theClipRange->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_BaseIntersector::OverlapsBox(Macad::Occt::SelectMgr_Vec3^ theBoxMin, Macad::Occt::SelectMgr_Vec3^ theBoxMax, bool% theInside)
{
    pin_ptr<bool> pp_theInside = &theInside;
    bool _result = ((::SelectMgr_BaseIntersector*)_NativeInstance)->OverlapsBox(*(::SelectMgr_Vec3*)theBoxMin->NativeInstance, *(::SelectMgr_Vec3*)theBoxMax->NativeInstance, (bool*)pp_theInside);
    return _result;
}

bool Macad::Occt::SelectMgr_BaseIntersector::OverlapsBox(Macad::Occt::SelectMgr_Vec3^ theBoxMin, Macad::Occt::SelectMgr_Vec3^ theBoxMax)
{
    bool _result = ((::SelectMgr_BaseIntersector*)_NativeInstance)->OverlapsBox(*(::SelectMgr_Vec3*)theBoxMin->NativeInstance, *(::SelectMgr_Vec3*)theBoxMax->NativeInstance, nullptr);
    return _result;
}

bool Macad::Occt::SelectMgr_BaseIntersector::OverlapsPoint(Macad::Occt::Pnt thePnt, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
    bool _result = ((::SelectMgr_BaseIntersector*)_NativeInstance)->OverlapsPoint(*(gp_Pnt*)pp_thePnt, *(::SelectMgr_ViewClipRange*)theClipRange->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_BaseIntersector::OverlapsPoint(Macad::Occt::Pnt thePnt)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
    bool _result = ((::SelectMgr_BaseIntersector*)_NativeInstance)->OverlapsPoint(*(gp_Pnt*)pp_thePnt);
    return _result;
}

bool Macad::Occt::SelectMgr_BaseIntersector::OverlapsSegment(Macad::Occt::Pnt thePnt1, Macad::Occt::Pnt thePnt2, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt1 = &thePnt1;
    pin_ptr<Macad::Occt::Pnt> pp_thePnt2 = &thePnt2;
    bool _result = ((::SelectMgr_BaseIntersector*)_NativeInstance)->OverlapsSegment(*(gp_Pnt*)pp_thePnt1, *(gp_Pnt*)pp_thePnt2, *(::SelectMgr_ViewClipRange*)theClipRange->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_BaseIntersector::OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius, bool% theInside)
{
    pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
    pin_ptr<bool> pp_theInside = &theInside;
    bool _result = ((::SelectMgr_BaseIntersector*)_NativeInstance)->OverlapsSphere(*(gp_Pnt*)pp_theCenter, theRadius, (bool*)pp_theInside);
    return _result;
}

bool Macad::Occt::SelectMgr_BaseIntersector::OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius)
{
    pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
    bool _result = ((::SelectMgr_BaseIntersector*)_NativeInstance)->OverlapsSphere(*(gp_Pnt*)pp_theCenter, theRadius, nullptr);
    return _result;
}

bool Macad::Occt::SelectMgr_BaseIntersector::OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
    bool _result = ((::SelectMgr_BaseIntersector*)_NativeInstance)->OverlapsSphere(*(gp_Pnt*)pp_theCenter, theRadius, *(::SelectMgr_ViewClipRange*)theClipRange->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_BaseIntersector::OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf, bool theIsHollow, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    bool _result = ((::SelectMgr_BaseIntersector*)_NativeInstance)->OverlapsCylinder(theBottomRad, theTopRad, theHeight, *(gp_Trsf*)pp_theTrsf, theIsHollow, *(::SelectMgr_ViewClipRange*)theClipRange->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_BaseIntersector::OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf, bool theIsHollow, bool% theInside)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    pin_ptr<bool> pp_theInside = &theInside;
    bool _result = ((::SelectMgr_BaseIntersector*)_NativeInstance)->OverlapsCylinder(theBottomRad, theTopRad, theHeight, *(gp_Trsf*)pp_theTrsf, theIsHollow, (bool*)pp_theInside);
    return _result;
}

bool Macad::Occt::SelectMgr_BaseIntersector::OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf, bool theIsHollow)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    bool _result = ((::SelectMgr_BaseIntersector*)_NativeInstance)->OverlapsCylinder(theBottomRad, theTopRad, theHeight, *(gp_Trsf*)pp_theTrsf, theIsHollow, nullptr);
    return _result;
}

bool Macad::Occt::SelectMgr_BaseIntersector::OverlapsCircle(double theBottomRad, Macad::Occt::Trsf theTrsf, bool theIsFilled, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    bool _result = ((::SelectMgr_BaseIntersector*)_NativeInstance)->OverlapsCircle(theBottomRad, *(gp_Trsf*)pp_theTrsf, theIsFilled, *(::SelectMgr_ViewClipRange*)theClipRange->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_BaseIntersector::OverlapsCircle(double theBottomRad, Macad::Occt::Trsf theTrsf, bool theIsFilled, bool% theInside)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    pin_ptr<bool> pp_theInside = &theInside;
    bool _result = ((::SelectMgr_BaseIntersector*)_NativeInstance)->OverlapsCircle(theBottomRad, *(gp_Trsf*)pp_theTrsf, theIsFilled, (bool*)pp_theInside);
    return _result;
}

bool Macad::Occt::SelectMgr_BaseIntersector::OverlapsCircle(double theBottomRad, Macad::Occt::Trsf theTrsf, bool theIsFilled)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    bool _result = ((::SelectMgr_BaseIntersector*)_NativeInstance)->OverlapsCircle(theBottomRad, *(gp_Trsf*)pp_theTrsf, theIsFilled, nullptr);
    return _result;
}

double Macad::Occt::SelectMgr_BaseIntersector::DistToGeometryCenter(Macad::Occt::Pnt theCOG)
{
    pin_ptr<Macad::Occt::Pnt> pp_theCOG = &theCOG;
    double _result = ((::SelectMgr_BaseIntersector*)_NativeInstance)->DistToGeometryCenter(*(gp_Pnt*)pp_theCOG);
    return _result;
}

Macad::Occt::Pnt Macad::Occt::SelectMgr_BaseIntersector::DetectedPoint(double theDepth)
{
    ::gp_Pnt _nativeResult = ((::SelectMgr_BaseIntersector*)_NativeInstance)->DetectedPoint(theDepth);
    return Macad::Occt::Pnt(_nativeResult);
}

void Macad::Occt::SelectMgr_BaseIntersector::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::SelectMgr_BaseIntersector*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::SelectMgr_BaseIntersector::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::SelectMgr_BaseIntersector*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

bool Macad::Occt::SelectMgr_BaseIntersector::RaySphereIntersection(Macad::Occt::Pnt theCenter, double theRadius, Macad::Occt::Pnt theLoc, Macad::Occt::Dir theRayDir, double% theTimeEnter, double% theTimeLeave)
{
    pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
    pin_ptr<Macad::Occt::Pnt> pp_theLoc = &theLoc;
    pin_ptr<Macad::Occt::Dir> pp_theRayDir = &theRayDir;
    pin_ptr<double> pp_theTimeEnter = &theTimeEnter;
    pin_ptr<double> pp_theTimeLeave = &theTimeLeave;
    bool _result = ((::SelectMgr_BaseIntersector*)_NativeInstance)->RaySphereIntersection(*(gp_Pnt*)pp_theCenter, theRadius, *(gp_Pnt*)pp_theLoc, *(gp_Dir*)pp_theRayDir, *(double*)pp_theTimeEnter, *(double*)pp_theTimeLeave);
    return _result;
}

bool Macad::Occt::SelectMgr_BaseIntersector::RayCylinderIntersection(double theBottomRadius, double theTopRadius, double theHeight, Macad::Occt::Pnt theLoc, Macad::Occt::Dir theRayDir, bool theIsHollow, double% theTimeEnter, double% theTimeLeave)
{
    pin_ptr<Macad::Occt::Pnt> pp_theLoc = &theLoc;
    pin_ptr<Macad::Occt::Dir> pp_theRayDir = &theRayDir;
    pin_ptr<double> pp_theTimeEnter = &theTimeEnter;
    pin_ptr<double> pp_theTimeLeave = &theTimeLeave;
    bool _result = ((::SelectMgr_BaseIntersector*)_NativeInstance)->RayCylinderIntersection(theBottomRadius, theTopRadius, theHeight, *(gp_Pnt*)pp_theLoc, *(gp_Dir*)pp_theRayDir, theIsHollow, *(double*)pp_theTimeEnter, *(double*)pp_theTimeLeave);
    return _result;
}

bool Macad::Occt::SelectMgr_BaseIntersector::RayCircleIntersection(double theRadius, Macad::Occt::Pnt theLoc, Macad::Occt::Dir theRayDir, bool theIsFilled, double% theTime)
{
    pin_ptr<Macad::Occt::Pnt> pp_theLoc = &theLoc;
    pin_ptr<Macad::Occt::Dir> pp_theRayDir = &theRayDir;
    pin_ptr<double> pp_theTime = &theTime;
    bool _result = ((::SelectMgr_BaseIntersector*)_NativeInstance)->RayCircleIntersection(theRadius, *(gp_Pnt*)pp_theLoc, *(gp_Dir*)pp_theRayDir, theIsFilled, *(double*)pp_theTime);
    return _result;
}

Macad::Occt::SelectMgr_BaseIntersector^ Macad::Occt::SelectMgr_BaseIntersector::CreateDowncasted(::SelectMgr_BaseIntersector* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::SelectMgr_AxisIntersector)))
        return Macad::Occt::SelectMgr_AxisIntersector::CreateDowncasted((::SelectMgr_AxisIntersector*)instance);
    if (instance->IsKind(STANDARD_TYPE(::SelectMgr_BaseFrustum)))
        return Macad::Occt::SelectMgr_BaseFrustum::CreateDowncasted((::SelectMgr_BaseFrustum*)instance);
    
    return gcnew Macad::Occt::SelectMgr_BaseIntersector( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr_AxisIntersector
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_AxisIntersector::SelectMgr_AxisIntersector()
    : Macad::Occt::SelectMgr_BaseIntersector(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::SelectMgr_AxisIntersector();
}

void Macad::Occt::SelectMgr_AxisIntersector::Init(Macad::Occt::Ax1 theAxis)
{
    pin_ptr<Macad::Occt::Ax1> pp_theAxis = &theAxis;
    ((::SelectMgr_AxisIntersector*)_NativeInstance)->Init(*(gp_Ax1*)pp_theAxis);
}

void Macad::Occt::SelectMgr_AxisIntersector::Build()
{
    ((::SelectMgr_AxisIntersector*)_NativeInstance)->Build();
}

void Macad::Occt::SelectMgr_AxisIntersector::SetCamera(Macad::Occt::Graphic3d_Camera^ theCamera)
{
    ((::SelectMgr_AxisIntersector*)_NativeInstance)->SetCamera(Handle(::Graphic3d_Camera)(theCamera->NativeInstance));
}

bool Macad::Occt::SelectMgr_AxisIntersector::IsScalable()
{
    bool _result = ((::SelectMgr_AxisIntersector*)_NativeInstance)->IsScalable();
    return _result;
}

Macad::Occt::SelectMgr_BaseIntersector^ Macad::Occt::SelectMgr_AxisIntersector::ScaleAndTransform(int theScaleFactor, Macad::Occt::gp_GTrsf^ theTrsf, Macad::Occt::SelectMgr_FrustumBuilder^ theBuilder)
{
    Handle(::SelectMgr_BaseIntersector) _result = ((::SelectMgr_AxisIntersector*)_NativeInstance)->ScaleAndTransform(theScaleFactor, *(::gp_GTrsf*)theTrsf->NativeInstance, Handle(::SelectMgr_FrustumBuilder)(theBuilder->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_BaseIntersector::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_BaseIntersector^ Macad::Occt::SelectMgr_AxisIntersector::CopyWithBuilder(Macad::Occt::SelectMgr_FrustumBuilder^ theBuilder)
{
    Handle(::SelectMgr_BaseIntersector) _result = ((::SelectMgr_AxisIntersector*)_NativeInstance)->CopyWithBuilder(Handle(::SelectMgr_FrustumBuilder)(theBuilder->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_BaseIntersector::CreateDowncasted(_result.get());
}

bool Macad::Occt::SelectMgr_AxisIntersector::OverlapsBox(Macad::Occt::SelectMgr_Vec3^ theBoxMin, Macad::Occt::SelectMgr_Vec3^ theBoxMax, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    bool _result = ((::SelectMgr_AxisIntersector*)_NativeInstance)->OverlapsBox(*(::SelectMgr_Vec3*)theBoxMin->NativeInstance, *(::SelectMgr_Vec3*)theBoxMax->NativeInstance, *(::SelectMgr_ViewClipRange*)theClipRange->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_AxisIntersector::OverlapsBox(Macad::Occt::SelectMgr_Vec3^ theBoxMin, Macad::Occt::SelectMgr_Vec3^ theBoxMax, bool% theInside)
{
    pin_ptr<bool> pp_theInside = &theInside;
    bool _result = ((::SelectMgr_AxisIntersector*)_NativeInstance)->OverlapsBox(*(::SelectMgr_Vec3*)theBoxMin->NativeInstance, *(::SelectMgr_Vec3*)theBoxMax->NativeInstance, (bool*)pp_theInside);
    return _result;
}

bool Macad::Occt::SelectMgr_AxisIntersector::OverlapsPoint(Macad::Occt::Pnt thePnt, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
    bool _result = ((::SelectMgr_AxisIntersector*)_NativeInstance)->OverlapsPoint(*(gp_Pnt*)pp_thePnt, *(::SelectMgr_ViewClipRange*)theClipRange->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_AxisIntersector::OverlapsPoint(Macad::Occt::Pnt thePnt)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
    bool _result = ((::SelectMgr_AxisIntersector*)_NativeInstance)->OverlapsPoint(*(gp_Pnt*)pp_thePnt);
    return _result;
}

bool Macad::Occt::SelectMgr_AxisIntersector::OverlapsSegment(Macad::Occt::Pnt thePnt1, Macad::Occt::Pnt thePnt2, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt1 = &thePnt1;
    pin_ptr<Macad::Occt::Pnt> pp_thePnt2 = &thePnt2;
    bool _result = ((::SelectMgr_AxisIntersector*)_NativeInstance)->OverlapsSegment(*(gp_Pnt*)pp_thePnt1, *(gp_Pnt*)pp_thePnt2, *(::SelectMgr_ViewClipRange*)theClipRange->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_AxisIntersector::OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius, bool% theInside)
{
    pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
    pin_ptr<bool> pp_theInside = &theInside;
    bool _result = ((::SelectMgr_AxisIntersector*)_NativeInstance)->OverlapsSphere(*(gp_Pnt*)pp_theCenter, theRadius, (bool*)pp_theInside);
    return _result;
}

bool Macad::Occt::SelectMgr_AxisIntersector::OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius)
{
    pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
    bool _result = ((::SelectMgr_AxisIntersector*)_NativeInstance)->OverlapsSphere(*(gp_Pnt*)pp_theCenter, theRadius, nullptr);
    return _result;
}

bool Macad::Occt::SelectMgr_AxisIntersector::OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
    bool _result = ((::SelectMgr_AxisIntersector*)_NativeInstance)->OverlapsSphere(*(gp_Pnt*)pp_theCenter, theRadius, *(::SelectMgr_ViewClipRange*)theClipRange->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_AxisIntersector::OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf, bool theIsHollow, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    bool _result = ((::SelectMgr_AxisIntersector*)_NativeInstance)->OverlapsCylinder(theBottomRad, theTopRad, theHeight, *(gp_Trsf*)pp_theTrsf, theIsHollow, *(::SelectMgr_ViewClipRange*)theClipRange->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_AxisIntersector::OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf, bool theIsHollow, bool% theInside)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    pin_ptr<bool> pp_theInside = &theInside;
    bool _result = ((::SelectMgr_AxisIntersector*)_NativeInstance)->OverlapsCylinder(theBottomRad, theTopRad, theHeight, *(gp_Trsf*)pp_theTrsf, theIsHollow, (bool*)pp_theInside);
    return _result;
}

bool Macad::Occt::SelectMgr_AxisIntersector::OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf, bool theIsHollow)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    bool _result = ((::SelectMgr_AxisIntersector*)_NativeInstance)->OverlapsCylinder(theBottomRad, theTopRad, theHeight, *(gp_Trsf*)pp_theTrsf, theIsHollow, nullptr);
    return _result;
}

bool Macad::Occt::SelectMgr_AxisIntersector::OverlapsCircle(double theRadius, Macad::Occt::Trsf theTrsf, bool theIsFilled, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    bool _result = ((::SelectMgr_AxisIntersector*)_NativeInstance)->OverlapsCircle(theRadius, *(gp_Trsf*)pp_theTrsf, theIsFilled, *(::SelectMgr_ViewClipRange*)theClipRange->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_AxisIntersector::OverlapsCircle(double theRadius, Macad::Occt::Trsf theTrsf, bool theIsFilled, bool% theInside)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    pin_ptr<bool> pp_theInside = &theInside;
    bool _result = ((::SelectMgr_AxisIntersector*)_NativeInstance)->OverlapsCircle(theRadius, *(gp_Trsf*)pp_theTrsf, theIsFilled, (bool*)pp_theInside);
    return _result;
}

bool Macad::Occt::SelectMgr_AxisIntersector::OverlapsCircle(double theRadius, Macad::Occt::Trsf theTrsf, bool theIsFilled)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    bool _result = ((::SelectMgr_AxisIntersector*)_NativeInstance)->OverlapsCircle(theRadius, *(gp_Trsf*)pp_theTrsf, theIsFilled, nullptr);
    return _result;
}

double Macad::Occt::SelectMgr_AxisIntersector::DistToGeometryCenter(Macad::Occt::Pnt theCOG)
{
    pin_ptr<Macad::Occt::Pnt> pp_theCOG = &theCOG;
    double _result = ((::SelectMgr_AxisIntersector*)_NativeInstance)->DistToGeometryCenter(*(gp_Pnt*)pp_theCOG);
    return _result;
}

Macad::Occt::Pnt Macad::Occt::SelectMgr_AxisIntersector::DetectedPoint(double theDepth)
{
    ::gp_Pnt _nativeResult = ((::SelectMgr_AxisIntersector*)_NativeInstance)->DetectedPoint(theDepth);
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Pnt Macad::Occt::SelectMgr_AxisIntersector::GetNearPnt()
{
    ::gp_Pnt _nativeResult = ((::SelectMgr_AxisIntersector*)_NativeInstance)->GetNearPnt();
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Pnt Macad::Occt::SelectMgr_AxisIntersector::GetFarPnt()
{
    ::gp_Pnt _nativeResult = ((::SelectMgr_AxisIntersector*)_NativeInstance)->GetFarPnt();
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Dir Macad::Occt::SelectMgr_AxisIntersector::GetViewRayDirection()
{
    ::gp_Dir _nativeResult = ((::SelectMgr_AxisIntersector*)_NativeInstance)->GetViewRayDirection();
    return Macad::Occt::Dir(_nativeResult);
}

void Macad::Occt::SelectMgr_AxisIntersector::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::SelectMgr_AxisIntersector*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::SelectMgr_AxisIntersector::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::SelectMgr_AxisIntersector*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::SelectMgr_AxisIntersector^ Macad::Occt::SelectMgr_AxisIntersector::CreateDowncasted(::SelectMgr_AxisIntersector* instance)
{
    return gcnew Macad::Occt::SelectMgr_AxisIntersector( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr_BaseFrustum
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_BaseFrustum::SelectMgr_BaseFrustum()
    : Macad::Occt::SelectMgr_BaseIntersector(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

void Macad::Occt::SelectMgr_BaseFrustum::SetBuilder(Macad::Occt::SelectMgr_FrustumBuilder^ theBuilder)
{
    ((::SelectMgr_BaseFrustum*)_NativeInstance)->SetBuilder(Handle(::SelectMgr_FrustumBuilder)(theBuilder->NativeInstance));
}

void Macad::Occt::SelectMgr_BaseFrustum::SetCamera(Macad::Occt::Graphic3d_Camera^ theCamera)
{
    ((::SelectMgr_BaseFrustum*)_NativeInstance)->SetCamera(Handle(::Graphic3d_Camera)(theCamera->NativeInstance));
}

void Macad::Occt::SelectMgr_BaseFrustum::SetPixelTolerance(int theTol)
{
    ((::SelectMgr_BaseFrustum*)_NativeInstance)->SetPixelTolerance(theTol);
}

void Macad::Occt::SelectMgr_BaseFrustum::SetWindowSize(int theWidth, int theHeight)
{
    ((::SelectMgr_BaseFrustum*)_NativeInstance)->SetWindowSize(theWidth, theHeight);
}

void Macad::Occt::SelectMgr_BaseFrustum::WindowSize(int% theWidth, int% theHeight)
{
    pin_ptr<int> pp_theWidth = &theWidth;
    pin_ptr<int> pp_theHeight = &theHeight;
    ((::SelectMgr_BaseFrustum*)_NativeInstance)->WindowSize(*(int*)pp_theWidth, *(int*)pp_theHeight);
}

void Macad::Occt::SelectMgr_BaseFrustum::SetViewport(double theX, double theY, double theWidth, double theHeight)
{
    ((::SelectMgr_BaseFrustum*)_NativeInstance)->SetViewport(theX, theY, theWidth, theHeight);
}

bool Macad::Occt::SelectMgr_BaseFrustum::IsBoundaryIntersectSphere(Macad::Occt::Pnt theCenter, double theRadius, Macad::Occt::Dir thePlaneNormal, Macad::Occt::TColgp_Array1OfPnt^ theBoundaries, bool% theBoundaryInside)
{
    pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
    pin_ptr<Macad::Occt::Dir> pp_thePlaneNormal = &thePlaneNormal;
    pin_ptr<bool> pp_theBoundaryInside = &theBoundaryInside;
    bool _result = ((::SelectMgr_BaseFrustum*)_NativeInstance)->IsBoundaryIntersectSphere(*(gp_Pnt*)pp_theCenter, theRadius, *(gp_Dir*)pp_thePlaneNormal, *(::TColgp_Array1OfPnt*)theBoundaries->NativeInstance, *(bool*)pp_theBoundaryInside);
    return _result;
}

void Macad::Occt::SelectMgr_BaseFrustum::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::SelectMgr_BaseFrustum*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::SelectMgr_BaseFrustum::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::SelectMgr_BaseFrustum*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::SelectMgr_BaseFrustum^ Macad::Occt::SelectMgr_BaseFrustum::CreateDowncasted(::SelectMgr_BaseFrustum* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::SelectMgr_RectangularFrustum)))
        return Macad::Occt::SelectMgr_RectangularFrustum::CreateDowncasted((::SelectMgr_RectangularFrustum*)instance);
    if (instance->IsKind(STANDARD_TYPE(::SelectMgr_TriangularFrustum)))
        return Macad::Occt::SelectMgr_TriangularFrustum::CreateDowncasted((::SelectMgr_TriangularFrustum*)instance);
    
    return gcnew Macad::Occt::SelectMgr_BaseFrustum( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr_SelectingVolumeManager
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_SelectingVolumeManager::SelectMgr_SelectingVolumeManager()
    : Macad::Occt::SelectBasics_SelectingVolumeManager(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

void Macad::Occt::SelectMgr_SelectingVolumeManager::InitPointSelectingVolume(Macad::Occt::Pnt2d thePoint)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_thePoint = &thePoint;
    ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->InitPointSelectingVolume(*(gp_Pnt2d*)pp_thePoint);
}

void Macad::Occt::SelectMgr_SelectingVolumeManager::InitBoxSelectingVolume(Macad::Occt::Pnt2d theMinPt, Macad::Occt::Pnt2d theMaxPt)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theMinPt = &theMinPt;
    pin_ptr<Macad::Occt::Pnt2d> pp_theMaxPt = &theMaxPt;
    ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->InitBoxSelectingVolume(*(gp_Pnt2d*)pp_theMinPt, *(gp_Pnt2d*)pp_theMaxPt);
}

void Macad::Occt::SelectMgr_SelectingVolumeManager::InitPolylineSelectingVolume(Macad::Occt::TColgp_Array1OfPnt2d^ thePoints)
{
    ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->InitPolylineSelectingVolume(*(::TColgp_Array1OfPnt2d*)thePoints->NativeInstance);
}

void Macad::Occt::SelectMgr_SelectingVolumeManager::InitAxisSelectingVolume(Macad::Occt::Ax1 theAxis)
{
    pin_ptr<Macad::Occt::Ax1> pp_theAxis = &theAxis;
    ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->InitAxisSelectingVolume(*(gp_Ax1*)pp_theAxis);
}

void Macad::Occt::SelectMgr_SelectingVolumeManager::InitSelectingVolume(Macad::Occt::SelectMgr_BaseIntersector^ theVolume)
{
    ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->InitSelectingVolume(Handle(::SelectMgr_BaseIntersector)(theVolume->NativeInstance));
}

void Macad::Occt::SelectMgr_SelectingVolumeManager::BuildSelectingVolume()
{
    ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->BuildSelectingVolume();
}

Macad::Occt::SelectMgr_BaseIntersector^ Macad::Occt::SelectMgr_SelectingVolumeManager::ActiveVolume()
{
    Handle(::SelectMgr_BaseIntersector) _result = ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->ActiveVolume();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_BaseIntersector::CreateDowncasted(_result.get());
}

int Macad::Occt::SelectMgr_SelectingVolumeManager::GetActiveSelectionType()
{
    int _result = ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->GetActiveSelectionType();
    return _result;
}

Macad::Occt::SelectMgr_SelectingVolumeManager^ Macad::Occt::SelectMgr_SelectingVolumeManager::ScaleAndTransform(int theScaleFactor, Macad::Occt::gp_GTrsf^ theTrsf, Macad::Occt::SelectMgr_FrustumBuilder^ theBuilder)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::SelectMgr_SelectingVolumeManager^ Macad::Occt::SelectMgr_SelectingVolumeManager::CopyWithBuilder(Macad::Occt::SelectMgr_FrustumBuilder^ theBuilder)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Camera^ Macad::Occt::SelectMgr_SelectingVolumeManager::Camera()
{
    Handle(::Graphic3d_Camera) _result = ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->Camera();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Camera::CreateDowncasted(_result.get());
}

void Macad::Occt::SelectMgr_SelectingVolumeManager::SetCamera(Macad::Occt::Graphic3d_Camera^ theCamera)
{
    ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->SetCamera(Handle(::Graphic3d_Camera)(theCamera->NativeInstance));
}

void Macad::Occt::SelectMgr_SelectingVolumeManager::SetViewport(double theX, double theY, double theWidth, double theHeight)
{
    ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->SetViewport(theX, theY, theWidth, theHeight);
}

void Macad::Occt::SelectMgr_SelectingVolumeManager::SetPixelTolerance(int theTolerance)
{
    ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->SetPixelTolerance(theTolerance);
}

void Macad::Occt::SelectMgr_SelectingVolumeManager::WindowSize(int% theWidth, int% theHeight)
{
    pin_ptr<int> pp_theWidth = &theWidth;
    pin_ptr<int> pp_theHeight = &theHeight;
    ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->WindowSize(*(int*)pp_theWidth, *(int*)pp_theHeight);
}

void Macad::Occt::SelectMgr_SelectingVolumeManager::SetWindowSize(int theWidth, int theHeight)
{
    ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->SetWindowSize(theWidth, theHeight);
}

bool Macad::Occt::SelectMgr_SelectingVolumeManager::OverlapsBox(Macad::Occt::SelectMgr_Vec3^ theBoxMin, Macad::Occt::SelectMgr_Vec3^ theBoxMax, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    bool _result = ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->OverlapsBox(*(::SelectMgr_Vec3*)theBoxMin->NativeInstance, *(::SelectMgr_Vec3*)theBoxMax->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_SelectingVolumeManager::OverlapsBox(Macad::Occt::SelectMgr_Vec3^ theBoxMin, Macad::Occt::SelectMgr_Vec3^ theBoxMax, bool% theInside)
{
    pin_ptr<bool> pp_theInside = &theInside;
    bool _result = ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->OverlapsBox(*(::SelectMgr_Vec3*)theBoxMin->NativeInstance, *(::SelectMgr_Vec3*)theBoxMax->NativeInstance, (bool*)pp_theInside);
    return _result;
}

bool Macad::Occt::SelectMgr_SelectingVolumeManager::OverlapsBox(Macad::Occt::SelectMgr_Vec3^ theBoxMin, Macad::Occt::SelectMgr_Vec3^ theBoxMax)
{
    bool _result = ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->OverlapsBox(*(::SelectMgr_Vec3*)theBoxMin->NativeInstance, *(::SelectMgr_Vec3*)theBoxMax->NativeInstance, nullptr);
    return _result;
}

bool Macad::Occt::SelectMgr_SelectingVolumeManager::OverlapsPoint(Macad::Occt::Pnt thePnt, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
    bool _result = ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->OverlapsPoint(*(gp_Pnt*)pp_thePnt, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_SelectingVolumeManager::OverlapsPoint(Macad::Occt::Pnt thePnt)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
    bool _result = ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->OverlapsPoint(*(gp_Pnt*)pp_thePnt);
    return _result;
}

bool Macad::Occt::SelectMgr_SelectingVolumeManager::OverlapsPolygon(Macad::Occt::TColgp_Array1OfPnt^ theArrayOfPts, int theSensType, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    bool _result = ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->OverlapsPolygon(*(::TColgp_Array1OfPnt*)theArrayOfPts->NativeInstance, theSensType, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_SelectingVolumeManager::OverlapsSegment(Macad::Occt::Pnt thePnt1, Macad::Occt::Pnt thePnt2, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt1 = &thePnt1;
    pin_ptr<Macad::Occt::Pnt> pp_thePnt2 = &thePnt2;
    bool _result = ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->OverlapsSegment(*(gp_Pnt*)pp_thePnt1, *(gp_Pnt*)pp_thePnt2, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_SelectingVolumeManager::OverlapsTriangle(Macad::Occt::Pnt thePnt1, Macad::Occt::Pnt thePnt2, Macad::Occt::Pnt thePnt3, int theSensType, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt1 = &thePnt1;
    pin_ptr<Macad::Occt::Pnt> pp_thePnt2 = &thePnt2;
    pin_ptr<Macad::Occt::Pnt> pp_thePnt3 = &thePnt3;
    bool _result = ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->OverlapsTriangle(*(gp_Pnt*)pp_thePnt1, *(gp_Pnt*)pp_thePnt2, *(gp_Pnt*)pp_thePnt3, theSensType, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_SelectingVolumeManager::OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
    bool _result = ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->OverlapsSphere(*(gp_Pnt*)pp_theCenter, theRadius, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_SelectingVolumeManager::OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius, bool% theInside)
{
    pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
    pin_ptr<bool> pp_theInside = &theInside;
    bool _result = ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->OverlapsSphere(*(gp_Pnt*)pp_theCenter, theRadius, (bool*)pp_theInside);
    return _result;
}

bool Macad::Occt::SelectMgr_SelectingVolumeManager::OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius)
{
    pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
    bool _result = ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->OverlapsSphere(*(gp_Pnt*)pp_theCenter, theRadius, nullptr);
    return _result;
}

bool Macad::Occt::SelectMgr_SelectingVolumeManager::OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf, bool theIsHollow, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    bool _result = ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->OverlapsCylinder(theBottomRad, theTopRad, theHeight, *(gp_Trsf*)pp_theTrsf, theIsHollow, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_SelectingVolumeManager::OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf, bool theIsHollow, bool% theInside)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    pin_ptr<bool> pp_theInside = &theInside;
    bool _result = ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->OverlapsCylinder(theBottomRad, theTopRad, theHeight, *(gp_Trsf*)pp_theTrsf, theIsHollow, (bool*)pp_theInside);
    return _result;
}

bool Macad::Occt::SelectMgr_SelectingVolumeManager::OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf, bool theIsHollow)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    bool _result = ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->OverlapsCylinder(theBottomRad, theTopRad, theHeight, *(gp_Trsf*)pp_theTrsf, theIsHollow, nullptr);
    return _result;
}

bool Macad::Occt::SelectMgr_SelectingVolumeManager::OverlapsCircle(double theBottomRad, Macad::Occt::Trsf theTrsf, bool theIsFilled, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    bool _result = ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->OverlapsCircle(theBottomRad, *(gp_Trsf*)pp_theTrsf, theIsFilled, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_SelectingVolumeManager::OverlapsCircle(double theBottomRad, Macad::Occt::Trsf theTrsf, bool theIsFilled, bool% theInside)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    pin_ptr<bool> pp_theInside = &theInside;
    bool _result = ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->OverlapsCircle(theBottomRad, *(gp_Trsf*)pp_theTrsf, theIsFilled, (bool*)pp_theInside);
    return _result;
}

bool Macad::Occt::SelectMgr_SelectingVolumeManager::OverlapsCircle(double theBottomRad, Macad::Occt::Trsf theTrsf, bool theIsFilled)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    bool _result = ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->OverlapsCircle(theBottomRad, *(gp_Trsf*)pp_theTrsf, theIsFilled, nullptr);
    return _result;
}

double Macad::Occt::SelectMgr_SelectingVolumeManager::DistToGeometryCenter(Macad::Occt::Pnt theCOG)
{
    pin_ptr<Macad::Occt::Pnt> pp_theCOG = &theCOG;
    double _result = ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->DistToGeometryCenter(*(gp_Pnt*)pp_theCOG);
    return _result;
}

Macad::Occt::Pnt Macad::Occt::SelectMgr_SelectingVolumeManager::DetectedPoint(double theDepth)
{
    ::gp_Pnt _nativeResult = ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->DetectedPoint(theDepth);
    return Macad::Occt::Pnt(_nativeResult);
}

void Macad::Occt::SelectMgr_SelectingVolumeManager::AllowOverlapDetection(bool theIsToAllow)
{
    ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->AllowOverlapDetection(theIsToAllow);
}

bool Macad::Occt::SelectMgr_SelectingVolumeManager::IsOverlapAllowed()
{
    bool _result = ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->IsOverlapAllowed();
    return _result;
}

Macad::Occt::Graphic3d_SequenceOfHClipPlane^ Macad::Occt::SelectMgr_SelectingVolumeManager::ViewClipping()
{
    Handle(::Graphic3d_SequenceOfHClipPlane) _result = ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->ViewClipping();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_SequenceOfHClipPlane::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_SequenceOfHClipPlane^ Macad::Occt::SelectMgr_SelectingVolumeManager::ObjectClipping()
{
    Handle(::Graphic3d_SequenceOfHClipPlane) _result = ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->ObjectClipping();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_SequenceOfHClipPlane::CreateDowncasted(_result.get());
}

void Macad::Occt::SelectMgr_SelectingVolumeManager::SetViewClipping(Macad::Occt::Graphic3d_SequenceOfHClipPlane^ theViewPlanes, Macad::Occt::Graphic3d_SequenceOfHClipPlane^ theObjPlanes, Macad::Occt::SelectMgr_SelectingVolumeManager^ theWorldSelMgr)
{
    ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->SetViewClipping(Handle(::Graphic3d_SequenceOfHClipPlane)(theViewPlanes->NativeInstance), Handle(::Graphic3d_SequenceOfHClipPlane)(theObjPlanes->NativeInstance), (::SelectMgr_SelectingVolumeManager*)theWorldSelMgr->NativeInstance);
}

void Macad::Occt::SelectMgr_SelectingVolumeManager::SetViewClipping(Macad::Occt::SelectMgr_SelectingVolumeManager^ theOther)
{
    ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->SetViewClipping(*(::SelectMgr_SelectingVolumeManager*)theOther->NativeInstance);
}

Macad::Occt::SelectMgr_ViewClipRange^ Macad::Occt::SelectMgr_SelectingVolumeManager::ViewClipRanges()
{
    ::SelectMgr_ViewClipRange* _result = new ::SelectMgr_ViewClipRange();
    *_result = (::SelectMgr_ViewClipRange)((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->ViewClipRanges();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_ViewClipRange(_result);
}

void Macad::Occt::SelectMgr_SelectingVolumeManager::SetViewClipRanges(Macad::Occt::SelectMgr_ViewClipRange^ theRange)
{
    ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->SetViewClipRanges(*(::SelectMgr_ViewClipRange*)theRange->NativeInstance);
}

Macad::Occt::Pnt Macad::Occt::SelectMgr_SelectingVolumeManager::GetVertices()
{
    const ::gp_Pnt* _constResult = ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->GetVertices();
    ::gp_Pnt* _nativeResult = (::gp_Pnt*)_constResult;
    return _nativeResult != nullptr ? Macad::Occt::Pnt(*_nativeResult) : Macad::Occt::Pnt();
}

Macad::Occt::Pnt Macad::Occt::SelectMgr_SelectingVolumeManager::GetNearPickedPnt()
{
    ::gp_Pnt _nativeResult = ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->GetNearPickedPnt();
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Pnt Macad::Occt::SelectMgr_SelectingVolumeManager::GetFarPickedPnt()
{
    ::gp_Pnt _nativeResult = ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->GetFarPickedPnt();
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Dir Macad::Occt::SelectMgr_SelectingVolumeManager::GetViewRayDirection()
{
    ::gp_Dir _nativeResult = ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->GetViewRayDirection();
    return Macad::Occt::Dir(_nativeResult);
}

bool Macad::Occt::SelectMgr_SelectingVolumeManager::IsScalableActiveVolume()
{
    bool _result = ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->IsScalableActiveVolume();
    return _result;
}

Macad::Occt::Pnt2d Macad::Occt::SelectMgr_SelectingVolumeManager::GetMousePosition()
{
    ::gp_Pnt2d _nativeResult = ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->GetMousePosition();
    return Macad::Occt::Pnt2d(_nativeResult);
}

void Macad::Occt::SelectMgr_SelectingVolumeManager::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::SelectMgr_SelectingVolumeManager::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::SelectMgr_SelectingVolumeManager::BuildSelectingVolume(Macad::Occt::Pnt2d thePoint)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_thePoint = &thePoint;
    ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->BuildSelectingVolume(*(gp_Pnt2d*)pp_thePoint);
}

void Macad::Occt::SelectMgr_SelectingVolumeManager::BuildSelectingVolume(Macad::Occt::Pnt2d theMinPt, Macad::Occt::Pnt2d theMaxPt)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theMinPt = &theMinPt;
    pin_ptr<Macad::Occt::Pnt2d> pp_theMaxPt = &theMaxPt;
    ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->BuildSelectingVolume(*(gp_Pnt2d*)pp_theMinPt, *(gp_Pnt2d*)pp_theMaxPt);
}

void Macad::Occt::SelectMgr_SelectingVolumeManager::BuildSelectingVolume(Macad::Occt::TColgp_Array1OfPnt2d^ thePoints)
{
    ((::SelectMgr_SelectingVolumeManager*)_NativeInstance)->BuildSelectingVolume(*(::TColgp_Array1OfPnt2d*)thePoints->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  SelectMgr_BVHThreadPool
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_BVHThreadPool::SelectMgr_BVHThreadPool(int theNbThreads)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::SelectMgr_BVHThreadPool(theNbThreads);
}

void Macad::Occt::SelectMgr_BVHThreadPool::StopThreads()
{
    ((::SelectMgr_BVHThreadPool*)_NativeInstance)->StopThreads();
}

void Macad::Occt::SelectMgr_BVHThreadPool::WaitThreads()
{
    ((::SelectMgr_BVHThreadPool*)_NativeInstance)->WaitThreads();
}

Macad::Occt::SelectMgr_BVHThreadPool^ Macad::Occt::SelectMgr_BVHThreadPool::CreateDowncasted(::SelectMgr_BVHThreadPool* instance)
{
    return gcnew Macad::Occt::SelectMgr_BVHThreadPool( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr_SensitiveEntity
//---------------------------------------------------------------------

void Macad::Occt::SelectMgr_SensitiveEntity::Clear()
{
    ((::SelectMgr_SensitiveEntity*)_NativeInstance)->Clear();
}

bool Macad::Occt::SelectMgr_SensitiveEntity::IsActiveForSelection()
{
    bool _result = ((::SelectMgr_SensitiveEntity*)_NativeInstance)->IsActiveForSelection();
    return _result;
}

void Macad::Occt::SelectMgr_SensitiveEntity::ResetSelectionActiveStatus()
{
    ((::SelectMgr_SensitiveEntity*)_NativeInstance)->ResetSelectionActiveStatus();
}

void Macad::Occt::SelectMgr_SensitiveEntity::SetActiveForSelection()
{
    ((::SelectMgr_SensitiveEntity*)_NativeInstance)->SetActiveForSelection();
}

void Macad::Occt::SelectMgr_SensitiveEntity::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::SelectMgr_SensitiveEntity*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::SelectMgr_SensitiveEntity::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::SelectMgr_SensitiveEntity*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::SelectMgr_SensitiveEntity^ Macad::Occt::SelectMgr_SensitiveEntity::CreateDowncasted(::SelectMgr_SensitiveEntity* instance)
{
    return gcnew Macad::Occt::SelectMgr_SensitiveEntity( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr_SelectableObject
//---------------------------------------------------------------------

void Macad::Occt::SelectMgr_SelectableObject::ComputeSelection(Macad::Occt::SelectMgr_Selection^ theSelection, int theMode)
{
    ((::SelectMgr_SelectableObject*)_NativeInstance)->ComputeSelection(Handle(::SelectMgr_Selection)(theSelection->NativeInstance), theMode);
}

bool Macad::Occt::SelectMgr_SelectableObject::AcceptShapeDecomposition()
{
    bool _result = ((::SelectMgr_SelectableObject*)_NativeInstance)->AcceptShapeDecomposition();
    return _result;
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
    ((::SelectMgr_SelectableObject*)_NativeInstance)->AddSelection(Handle(::SelectMgr_Selection)(aSelection->NativeInstance), aMode);
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
    Handle(::SelectMgr_Selection) _result = ((::SelectMgr_SelectableObject*)_NativeInstance)->Selection(theMode);
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Selection::CreateDowncasted(_result.get());
}

bool Macad::Occt::SelectMgr_SelectableObject::HasSelection(int theMode)
{
    bool _result = ((::SelectMgr_SelectableObject*)_NativeInstance)->HasSelection(theMode);
    return _result;
}

Macad::Occt::SelectMgr_SequenceOfSelection^ Macad::Occt::SelectMgr_SelectableObject::Selections()
{
    ::SelectMgr_SequenceOfSelection* _result = new ::SelectMgr_SequenceOfSelection();
    *_result = (::SelectMgr_SequenceOfSelection)((::SelectMgr_SelectableObject*)_NativeInstance)->Selections();
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
    ((::SelectMgr_SelectableObject*)_NativeInstance)->UpdateTransformations(Handle(::SelectMgr_Selection)(aSelection->NativeInstance));
}

void Macad::Occt::SelectMgr_SelectableObject::HilightSelected(Macad::Occt::PrsMgr_PresentationManager^ thePrsMgr, Macad::Occt::SelectMgr_SequenceOfOwner^ theSeq)
{
    ((::SelectMgr_SelectableObject*)_NativeInstance)->HilightSelected(Handle(::PrsMgr_PresentationManager)(thePrsMgr->NativeInstance), *(::SelectMgr_SequenceOfOwner*)theSeq->NativeInstance);
}

void Macad::Occt::SelectMgr_SelectableObject::ClearSelected()
{
    ((::SelectMgr_SelectableObject*)_NativeInstance)->ClearSelected();
}

void Macad::Occt::SelectMgr_SelectableObject::ClearDynamicHighlight(Macad::Occt::PrsMgr_PresentationManager^ theMgr)
{
    ((::SelectMgr_SelectableObject*)_NativeInstance)->ClearDynamicHighlight(Handle(::PrsMgr_PresentationManager)(theMgr->NativeInstance));
}

void Macad::Occt::SelectMgr_SelectableObject::HilightOwnerWithColor(Macad::Occt::PrsMgr_PresentationManager^ thePM, Macad::Occt::Prs3d_Drawer^ theStyle, Macad::Occt::SelectMgr_EntityOwner^ theOwner)
{
    ((::SelectMgr_SelectableObject*)_NativeInstance)->HilightOwnerWithColor(Handle(::PrsMgr_PresentationManager)(thePM->NativeInstance), Handle(::Prs3d_Drawer)(theStyle->NativeInstance), Handle(::SelectMgr_EntityOwner)(theOwner->NativeInstance));
}

bool Macad::Occt::SelectMgr_SelectableObject::IsAutoHilight()
{
    bool _result = ((::SelectMgr_SelectableObject*)_NativeInstance)->IsAutoHilight();
    return _result;
}

void Macad::Occt::SelectMgr_SelectableObject::SetAutoHilight(bool theAutoHilight)
{
    ((::SelectMgr_SelectableObject*)_NativeInstance)->SetAutoHilight(theAutoHilight);
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::SelectMgr_SelectableObject::GetHilightPresentation(Macad::Occt::PrsMgr_PresentationManager^ thePrsMgr)
{
    Handle(::Graphic3d_Structure) _result = ((::SelectMgr_SelectableObject*)_NativeInstance)->GetHilightPresentation(Handle(::PrsMgr_PresentationManager)(thePrsMgr->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::SelectMgr_SelectableObject::GetSelectPresentation(Macad::Occt::PrsMgr_PresentationManager^ thePrsMgr)
{
    Handle(::Graphic3d_Structure) _result = ((::SelectMgr_SelectableObject*)_NativeInstance)->GetSelectPresentation(Handle(::PrsMgr_PresentationManager)(thePrsMgr->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted(_result.get());
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
    ((::SelectMgr_SelectableObject*)_NativeInstance)->SetAssemblyOwner(Handle(::SelectMgr_EntityOwner)(theOwner->NativeInstance), theMode);
}

void Macad::Occt::SelectMgr_SelectableObject::SetAssemblyOwner(Macad::Occt::SelectMgr_EntityOwner^ theOwner)
{
    ((::SelectMgr_SelectableObject*)_NativeInstance)->SetAssemblyOwner(Handle(::SelectMgr_EntityOwner)(theOwner->NativeInstance), -1);
}

int Macad::Occt::SelectMgr_SelectableObject::GlobalSelectionMode()
{
    int _result = ((::SelectMgr_SelectableObject*)_NativeInstance)->GlobalSelectionMode();
    return _result;
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_SelectableObject::GlobalSelOwner()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::SelectMgr_SelectableObject*)_NativeInstance)->GlobalSelOwner();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_SelectableObject::GetAssemblyOwner()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::SelectMgr_SelectableObject*)_NativeInstance)->GetAssemblyOwner();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

void Macad::Occt::SelectMgr_SelectableObject::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::SelectMgr_SelectableObject*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::SelectMgr_SelectableObject::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::SelectMgr_SelectableObject*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
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
    : Macad::Occt::BaseClass<::SelectMgr_SortCriterion>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_SortCriterion();
}

bool Macad::Occt::SelectMgr_SortCriterion::IsCloserDepth(Macad::Occt::SelectMgr_SortCriterion^ theOther)
{
    bool _result = ((::SelectMgr_SortCriterion*)_NativeInstance)->IsCloserDepth(*(::SelectMgr_SortCriterion*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_SortCriterion::IsHigherPriority(Macad::Occt::SelectMgr_SortCriterion^ theOther)
{
    bool _result = ((::SelectMgr_SortCriterion*)_NativeInstance)->IsHigherPriority(*(::SelectMgr_SortCriterion*)theOther->NativeInstance);
    return _result;
}



//---------------------------------------------------------------------
//  Class  SelectMgr_OrFilter
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_OrFilter::SelectMgr_OrFilter()
    : Macad::Occt::SelectMgr_CompositionFilter(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::SelectMgr_OrFilter();
}

bool Macad::Occt::SelectMgr_OrFilter::IsOk(Macad::Occt::SelectMgr_EntityOwner^ anobj)
{
    bool _result = ((::SelectMgr_OrFilter*)_NativeInstance)->IsOk(Handle(::SelectMgr_EntityOwner)(anobj->NativeInstance));
    return _result;
}

Macad::Occt::SelectMgr_OrFilter^ Macad::Occt::SelectMgr_OrFilter::CreateDowncasted(::SelectMgr_OrFilter* instance)
{
    return gcnew Macad::Occt::SelectMgr_OrFilter( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr_RectangularFrustum
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_RectangularFrustum::SelectMgr_RectangularFrustum()
    : Macad::Occt::SelectMgr_BaseFrustum(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::SelectMgr_RectangularFrustum();
}

void Macad::Occt::SelectMgr_RectangularFrustum::Init(Macad::Occt::Pnt2d thePoint)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_thePoint = &thePoint;
    ((::SelectMgr_RectangularFrustum*)_NativeInstance)->Init(*(gp_Pnt2d*)pp_thePoint);
}

void Macad::Occt::SelectMgr_RectangularFrustum::Init(Macad::Occt::Pnt2d theMinPnt, Macad::Occt::Pnt2d theMaxPnt)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theMinPnt = &theMinPnt;
    pin_ptr<Macad::Occt::Pnt2d> pp_theMaxPnt = &theMaxPnt;
    ((::SelectMgr_RectangularFrustum*)_NativeInstance)->Init(*(gp_Pnt2d*)pp_theMinPnt, *(gp_Pnt2d*)pp_theMaxPnt);
}

bool Macad::Occt::SelectMgr_RectangularFrustum::isIntersectCircle(double theRadius, Macad::Occt::Pnt theCenter, Macad::Occt::Trsf theTrsf, Macad::Occt::TColgp_Array1OfPnt^ theVertices)
{
    pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    bool _result = ((::SelectMgr_RectangularFrustum*)_NativeInstance)->isIntersectCircle(theRadius, *(gp_Pnt*)pp_theCenter, *(gp_Trsf*)pp_theTrsf, *(::TColgp_Array1OfPnt*)theVertices->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_RectangularFrustum::isSegmentsIntersect(Macad::Occt::Pnt thePnt1Seg1, Macad::Occt::Pnt thePnt2Seg1, Macad::Occt::Pnt thePnt1Seg2, Macad::Occt::Pnt thePnt2Seg2)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt1Seg1 = &thePnt1Seg1;
    pin_ptr<Macad::Occt::Pnt> pp_thePnt2Seg1 = &thePnt2Seg1;
    pin_ptr<Macad::Occt::Pnt> pp_thePnt1Seg2 = &thePnt1Seg2;
    pin_ptr<Macad::Occt::Pnt> pp_thePnt2Seg2 = &thePnt2Seg2;
    bool _result = ((::SelectMgr_RectangularFrustum*)_NativeInstance)->isSegmentsIntersect(*(gp_Pnt*)pp_thePnt1Seg1, *(gp_Pnt*)pp_thePnt2Seg1, *(gp_Pnt*)pp_thePnt1Seg2, *(gp_Pnt*)pp_thePnt2Seg2);
    return _result;
}

void Macad::Occt::SelectMgr_RectangularFrustum::Build()
{
    ((::SelectMgr_RectangularFrustum*)_NativeInstance)->Build();
}

bool Macad::Occt::SelectMgr_RectangularFrustum::IsScalable()
{
    bool _result = ((::SelectMgr_RectangularFrustum*)_NativeInstance)->IsScalable();
    return _result;
}

Macad::Occt::SelectMgr_BaseIntersector^ Macad::Occt::SelectMgr_RectangularFrustum::ScaleAndTransform(int theScaleFactor, Macad::Occt::gp_GTrsf^ theTrsf, Macad::Occt::SelectMgr_FrustumBuilder^ theBuilder)
{
    Handle(::SelectMgr_BaseIntersector) _result = ((::SelectMgr_RectangularFrustum*)_NativeInstance)->ScaleAndTransform(theScaleFactor, *(::gp_GTrsf*)theTrsf->NativeInstance, Handle(::SelectMgr_FrustumBuilder)(theBuilder->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_BaseIntersector::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_BaseIntersector^ Macad::Occt::SelectMgr_RectangularFrustum::CopyWithBuilder(Macad::Occt::SelectMgr_FrustumBuilder^ theBuilder)
{
    Handle(::SelectMgr_BaseIntersector) _result = ((::SelectMgr_RectangularFrustum*)_NativeInstance)->CopyWithBuilder(Handle(::SelectMgr_FrustumBuilder)(theBuilder->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_BaseIntersector::CreateDowncasted(_result.get());
}

bool Macad::Occt::SelectMgr_RectangularFrustum::OverlapsBox(Macad::Occt::SelectMgr_Vec3^ theBoxMin, Macad::Occt::SelectMgr_Vec3^ theBoxMax, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    bool _result = ((::SelectMgr_RectangularFrustum*)_NativeInstance)->OverlapsBox(*(::SelectMgr_Vec3*)theBoxMin->NativeInstance, *(::SelectMgr_Vec3*)theBoxMax->NativeInstance, *(::SelectMgr_ViewClipRange*)theClipRange->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_RectangularFrustum::OverlapsBox(Macad::Occt::SelectMgr_Vec3^ theBoxMin, Macad::Occt::SelectMgr_Vec3^ theBoxMax, bool% theInside)
{
    pin_ptr<bool> pp_theInside = &theInside;
    bool _result = ((::SelectMgr_RectangularFrustum*)_NativeInstance)->OverlapsBox(*(::SelectMgr_Vec3*)theBoxMin->NativeInstance, *(::SelectMgr_Vec3*)theBoxMax->NativeInstance, (bool*)pp_theInside);
    return _result;
}

bool Macad::Occt::SelectMgr_RectangularFrustum::OverlapsPoint(Macad::Occt::Pnt thePnt, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
    bool _result = ((::SelectMgr_RectangularFrustum*)_NativeInstance)->OverlapsPoint(*(gp_Pnt*)pp_thePnt, *(::SelectMgr_ViewClipRange*)theClipRange->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_RectangularFrustum::OverlapsPoint(Macad::Occt::Pnt thePnt)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
    bool _result = ((::SelectMgr_RectangularFrustum*)_NativeInstance)->OverlapsPoint(*(gp_Pnt*)pp_thePnt);
    return _result;
}

bool Macad::Occt::SelectMgr_RectangularFrustum::OverlapsSegment(Macad::Occt::Pnt thePnt1, Macad::Occt::Pnt thePnt2, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt1 = &thePnt1;
    pin_ptr<Macad::Occt::Pnt> pp_thePnt2 = &thePnt2;
    bool _result = ((::SelectMgr_RectangularFrustum*)_NativeInstance)->OverlapsSegment(*(gp_Pnt*)pp_thePnt1, *(gp_Pnt*)pp_thePnt2, *(::SelectMgr_ViewClipRange*)theClipRange->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_RectangularFrustum::OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
    bool _result = ((::SelectMgr_RectangularFrustum*)_NativeInstance)->OverlapsSphere(*(gp_Pnt*)pp_theCenter, theRadius, *(::SelectMgr_ViewClipRange*)theClipRange->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_RectangularFrustum::OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius, bool% theInside)
{
    pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
    pin_ptr<bool> pp_theInside = &theInside;
    bool _result = ((::SelectMgr_RectangularFrustum*)_NativeInstance)->OverlapsSphere(*(gp_Pnt*)pp_theCenter, theRadius, (bool*)pp_theInside);
    return _result;
}

bool Macad::Occt::SelectMgr_RectangularFrustum::OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf, bool theIsHollow, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    bool _result = ((::SelectMgr_RectangularFrustum*)_NativeInstance)->OverlapsCylinder(theBottomRad, theTopRad, theHeight, *(gp_Trsf*)pp_theTrsf, theIsHollow, *(::SelectMgr_ViewClipRange*)theClipRange->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_RectangularFrustum::OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf, bool theIsHollow, bool% theInside)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    pin_ptr<bool> pp_theInside = &theInside;
    bool _result = ((::SelectMgr_RectangularFrustum*)_NativeInstance)->OverlapsCylinder(theBottomRad, theTopRad, theHeight, *(gp_Trsf*)pp_theTrsf, theIsHollow, (bool*)pp_theInside);
    return _result;
}

bool Macad::Occt::SelectMgr_RectangularFrustum::OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf, bool theIsHollow)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    bool _result = ((::SelectMgr_RectangularFrustum*)_NativeInstance)->OverlapsCylinder(theBottomRad, theTopRad, theHeight, *(gp_Trsf*)pp_theTrsf, theIsHollow, nullptr);
    return _result;
}

bool Macad::Occt::SelectMgr_RectangularFrustum::OverlapsCircle(double theBottomRad, Macad::Occt::Trsf theTrsf, bool theIsFilled, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    bool _result = ((::SelectMgr_RectangularFrustum*)_NativeInstance)->OverlapsCircle(theBottomRad, *(gp_Trsf*)pp_theTrsf, theIsFilled, *(::SelectMgr_ViewClipRange*)theClipRange->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_RectangularFrustum::OverlapsCircle(double theBottomRad, Macad::Occt::Trsf theTrsf, bool theIsFilled, bool% theInside)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    pin_ptr<bool> pp_theInside = &theInside;
    bool _result = ((::SelectMgr_RectangularFrustum*)_NativeInstance)->OverlapsCircle(theBottomRad, *(gp_Trsf*)pp_theTrsf, theIsFilled, (bool*)pp_theInside);
    return _result;
}

bool Macad::Occt::SelectMgr_RectangularFrustum::OverlapsCircle(double theBottomRad, Macad::Occt::Trsf theTrsf, bool theIsFilled)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    bool _result = ((::SelectMgr_RectangularFrustum*)_NativeInstance)->OverlapsCircle(theBottomRad, *(gp_Trsf*)pp_theTrsf, theIsFilled, nullptr);
    return _result;
}

double Macad::Occt::SelectMgr_RectangularFrustum::DistToGeometryCenter(Macad::Occt::Pnt theCOG)
{
    pin_ptr<Macad::Occt::Pnt> pp_theCOG = &theCOG;
    double _result = ((::SelectMgr_RectangularFrustum*)_NativeInstance)->DistToGeometryCenter(*(gp_Pnt*)pp_theCOG);
    return _result;
}

Macad::Occt::Pnt Macad::Occt::SelectMgr_RectangularFrustum::DetectedPoint(double theDepth)
{
    ::gp_Pnt _nativeResult = ((::SelectMgr_RectangularFrustum*)_NativeInstance)->DetectedPoint(theDepth);
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Pnt Macad::Occt::SelectMgr_RectangularFrustum::GetVertices()
{
    const ::gp_Pnt* _constResult = ((::SelectMgr_RectangularFrustum*)_NativeInstance)->GetVertices();
    ::gp_Pnt* _nativeResult = (::gp_Pnt*)_constResult;
    return _nativeResult != nullptr ? Macad::Occt::Pnt(*_nativeResult) : Macad::Occt::Pnt();
}

Macad::Occt::Pnt Macad::Occt::SelectMgr_RectangularFrustum::GetNearPnt()
{
    ::gp_Pnt _nativeResult = ((::SelectMgr_RectangularFrustum*)_NativeInstance)->GetNearPnt();
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Pnt Macad::Occt::SelectMgr_RectangularFrustum::GetFarPnt()
{
    ::gp_Pnt _nativeResult = ((::SelectMgr_RectangularFrustum*)_NativeInstance)->GetFarPnt();
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Dir Macad::Occt::SelectMgr_RectangularFrustum::GetViewRayDirection()
{
    ::gp_Dir _nativeResult = ((::SelectMgr_RectangularFrustum*)_NativeInstance)->GetViewRayDirection();
    return Macad::Occt::Dir(_nativeResult);
}

Macad::Occt::Pnt2d Macad::Occt::SelectMgr_RectangularFrustum::GetMousePosition()
{
    ::gp_Pnt2d _nativeResult = ((::SelectMgr_RectangularFrustum*)_NativeInstance)->GetMousePosition();
    return Macad::Occt::Pnt2d(_nativeResult);
}

void Macad::Occt::SelectMgr_RectangularFrustum::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::SelectMgr_RectangularFrustum*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::SelectMgr_RectangularFrustum::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::SelectMgr_RectangularFrustum*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::SelectMgr_RectangularFrustum^ Macad::Occt::SelectMgr_RectangularFrustum::CreateDowncasted(::SelectMgr_RectangularFrustum* instance)
{
    return gcnew Macad::Occt::SelectMgr_RectangularFrustum( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr_SelectableObjectSet
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_SelectableObjectSet::SelectMgr_SelectableObjectSet()
    : Macad::Occt::BaseClass<::SelectMgr_SelectableObjectSet>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_SelectableObjectSet();
}

bool Macad::Occt::SelectMgr_SelectableObjectSet::Append(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
    bool _result = ((::SelectMgr_SelectableObjectSet*)_NativeInstance)->Append(Handle(::SelectMgr_SelectableObject)(theObject->NativeInstance));
    return _result;
}

bool Macad::Occt::SelectMgr_SelectableObjectSet::Remove(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
    bool _result = ((::SelectMgr_SelectableObjectSet*)_NativeInstance)->Remove(Handle(::SelectMgr_SelectableObject)(theObject->NativeInstance));
    return _result;
}

void Macad::Occt::SelectMgr_SelectableObjectSet::ChangeSubset(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
    ((::SelectMgr_SelectableObjectSet*)_NativeInstance)->ChangeSubset(Handle(::SelectMgr_SelectableObject)(theObject->NativeInstance));
}

void Macad::Occt::SelectMgr_SelectableObjectSet::UpdateBVH(Macad::Occt::Graphic3d_Camera^ theCam, Macad::Occt::Graphic3d_Vec2i^ theWinSize)
{
    ((::SelectMgr_SelectableObjectSet*)_NativeInstance)->UpdateBVH(Handle(::Graphic3d_Camera)(theCam->NativeInstance), *(::Graphic3d_Vec2i*)theWinSize->NativeInstance);
}

void Macad::Occt::SelectMgr_SelectableObjectSet::MarkDirty()
{
    ((::SelectMgr_SelectableObjectSet*)_NativeInstance)->MarkDirty();
}

bool Macad::Occt::SelectMgr_SelectableObjectSet::Contains(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
    bool _result = ((::SelectMgr_SelectableObjectSet*)_NativeInstance)->Contains(Handle(::SelectMgr_SelectableObject)(theObject->NativeInstance));
    return _result;
}

bool Macad::Occt::SelectMgr_SelectableObjectSet::IsEmpty()
{
    bool _result = ((::SelectMgr_SelectableObjectSet*)_NativeInstance)->IsEmpty();
    return _result;
}

bool Macad::Occt::SelectMgr_SelectableObjectSet::IsEmpty(Macad::Occt::SelectMgr_SelectableObjectSet::BVHSubset theSubset)
{
    bool _result = ((::SelectMgr_SelectableObjectSet*)_NativeInstance)->IsEmpty((::SelectMgr_SelectableObjectSet::BVHSubset)theSubset);
    return _result;
}

Macad::Occt::SelectMgr_SelectableObject^ Macad::Occt::SelectMgr_SelectableObjectSet::GetObjectById(Macad::Occt::SelectMgr_SelectableObjectSet::BVHSubset theSubset, int theIndex)
{
    Handle(::SelectMgr_SelectableObject) _result = ((::SelectMgr_SelectableObjectSet*)_NativeInstance)->GetObjectById((::SelectMgr_SelectableObjectSet::BVHSubset)theSubset, theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_SelectableObject::CreateDowncasted(_result.get());
}

void Macad::Occt::SelectMgr_SelectableObjectSet::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::SelectMgr_SelectableObjectSet*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::SelectMgr_SelectableObjectSet::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::SelectMgr_SelectableObjectSet*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  SelectMgr_SelectableObjectSet::Iterator
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_SelectableObjectSet::Iterator::Iterator()
    : Macad::Occt::BaseClass<::SelectMgr_SelectableObjectSet::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_SelectableObjectSet::Iterator();
}

Macad::Occt::SelectMgr_SelectableObjectSet::Iterator::Iterator(Macad::Occt::SelectMgr_SelectableObjectSet^ theSet)
    : Macad::Occt::BaseClass<::SelectMgr_SelectableObjectSet::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_SelectableObjectSet::Iterator(*(::SelectMgr_SelectableObjectSet*)theSet->NativeInstance);
}

void Macad::Occt::SelectMgr_SelectableObjectSet::Iterator::Init(Macad::Occt::SelectMgr_SelectableObjectSet^ theSet)
{
    ((::SelectMgr_SelectableObjectSet::Iterator*)_NativeInstance)->Init(*(::SelectMgr_SelectableObjectSet*)theSet->NativeInstance);
}

bool Macad::Occt::SelectMgr_SelectableObjectSet::Iterator::More()
{
    bool _result = ((::SelectMgr_SelectableObjectSet::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::SelectMgr_SelectableObjectSet::Iterator::Next()
{
    ((::SelectMgr_SelectableObjectSet::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::SelectMgr_SelectableObject^ Macad::Occt::SelectMgr_SelectableObjectSet::Iterator::Value()
{
    Handle(::SelectMgr_SelectableObject) _result = ((::SelectMgr_SelectableObjectSet::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_SelectableObject::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  SelectMgr_ViewerSelector
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_ViewerSelector::SelectMgr_ViewerSelector()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::SelectMgr_ViewerSelector();
}

int Macad::Occt::SelectMgr_ViewerSelector::CustomPixelTolerance()
{
    int _result = ((::SelectMgr_ViewerSelector*)_NativeInstance)->CustomPixelTolerance();
    return _result;
}

void Macad::Occt::SelectMgr_ViewerSelector::SetPixelTolerance(int theTolerance)
{
    ((::SelectMgr_ViewerSelector*)_NativeInstance)->SetPixelTolerance(theTolerance);
}

double Macad::Occt::SelectMgr_ViewerSelector::Sensitivity()
{
    double _result = ((::SelectMgr_ViewerSelector*)_NativeInstance)->Sensitivity();
    return _result;
}

int Macad::Occt::SelectMgr_ViewerSelector::PixelTolerance()
{
    int _result = ((::SelectMgr_ViewerSelector*)_NativeInstance)->PixelTolerance();
    return _result;
}

void Macad::Occt::SelectMgr_ViewerSelector::SortResult()
{
    ((::SelectMgr_ViewerSelector*)_NativeInstance)->SortResult();
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_ViewerSelector::OnePicked()
{
    Handle(::SelectMgr_EntityOwner) _result = ((::SelectMgr_ViewerSelector*)_NativeInstance)->OnePicked();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

bool Macad::Occt::SelectMgr_ViewerSelector::ToPickClosest()
{
    bool _result = ((::SelectMgr_ViewerSelector*)_NativeInstance)->ToPickClosest();
    return _result;
}

void Macad::Occt::SelectMgr_ViewerSelector::SetPickClosest(bool theToPreferClosest)
{
    ((::SelectMgr_ViewerSelector*)_NativeInstance)->SetPickClosest(theToPreferClosest);
}

Macad::Occt::SelectMgr_TypeOfDepthTolerance Macad::Occt::SelectMgr_ViewerSelector::DepthToleranceType()
{
    ::SelectMgr_TypeOfDepthTolerance _result = ((::SelectMgr_ViewerSelector*)_NativeInstance)->DepthToleranceType();
    return (Macad::Occt::SelectMgr_TypeOfDepthTolerance)_result;
}

double Macad::Occt::SelectMgr_ViewerSelector::DepthTolerance()
{
    double _result = ((::SelectMgr_ViewerSelector*)_NativeInstance)->DepthTolerance();
    return _result;
}

void Macad::Occt::SelectMgr_ViewerSelector::SetDepthTolerance(Macad::Occt::SelectMgr_TypeOfDepthTolerance theType, double theTolerance)
{
    ((::SelectMgr_ViewerSelector*)_NativeInstance)->SetDepthTolerance((::SelectMgr_TypeOfDepthTolerance)theType, theTolerance);
}

int Macad::Occt::SelectMgr_ViewerSelector::NbPicked()
{
    int _result = ((::SelectMgr_ViewerSelector*)_NativeInstance)->NbPicked();
    return _result;
}

void Macad::Occt::SelectMgr_ViewerSelector::ClearPicked()
{
    ((::SelectMgr_ViewerSelector*)_NativeInstance)->ClearPicked();
}

void Macad::Occt::SelectMgr_ViewerSelector::Clear()
{
    ((::SelectMgr_ViewerSelector*)_NativeInstance)->Clear();
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_ViewerSelector::Picked(int theRank)
{
    Handle(::SelectMgr_EntityOwner) _result = ((::SelectMgr_ViewerSelector*)_NativeInstance)->Picked(theRank);
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_SortCriterion^ Macad::Occt::SelectMgr_ViewerSelector::PickedData(int theRank)
{
    ::SelectMgr_SortCriterion* _result = new ::SelectMgr_SortCriterion();
    *_result = (::SelectMgr_SortCriterion)((::SelectMgr_ViewerSelector*)_NativeInstance)->PickedData(theRank);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_SortCriterion(_result);
}

Macad::Occt::Pnt Macad::Occt::SelectMgr_ViewerSelector::PickedPoint(int theRank)
{
    ::gp_Pnt _nativeResult = ((::SelectMgr_ViewerSelector*)_NativeInstance)->PickedPoint(theRank);
    return Macad::Occt::Pnt(_nativeResult);
}

bool Macad::Occt::SelectMgr_ViewerSelector::RemovePicked(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
    bool _result = ((::SelectMgr_ViewerSelector*)_NativeInstance)->RemovePicked(Handle(::SelectMgr_SelectableObject)(theObject->NativeInstance));
    return _result;
}

bool Macad::Occt::SelectMgr_ViewerSelector::Contains(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
    bool _result = ((::SelectMgr_ViewerSelector*)_NativeInstance)->Contains(Handle(::SelectMgr_SelectableObject)(theObject->NativeInstance));
    return _result;
}

bool Macad::Occt::SelectMgr_ViewerSelector::Modes(Macad::Occt::SelectMgr_SelectableObject^ theSelectableObject, Macad::Occt::TColStd_ListOfInteger^ theModeList, Macad::Occt::SelectMgr_StateOfSelection theWantedState)
{
    bool _result = ((::SelectMgr_ViewerSelector*)_NativeInstance)->Modes(Handle(::SelectMgr_SelectableObject)(theSelectableObject->NativeInstance), *(::TColStd_ListOfInteger*)theModeList->NativeInstance, (::SelectMgr_StateOfSelection)theWantedState);
    return _result;
}

bool Macad::Occt::SelectMgr_ViewerSelector::Modes(Macad::Occt::SelectMgr_SelectableObject^ theSelectableObject, Macad::Occt::TColStd_ListOfInteger^ theModeList)
{
    bool _result = ((::SelectMgr_ViewerSelector*)_NativeInstance)->Modes(Handle(::SelectMgr_SelectableObject)(theSelectableObject->NativeInstance), *(::TColStd_ListOfInteger*)theModeList->NativeInstance, SelectMgr_SOS_Any);
    return _result;
}

bool Macad::Occt::SelectMgr_ViewerSelector::IsActive(Macad::Occt::SelectMgr_SelectableObject^ theSelectableObject, int theMode)
{
    bool _result = ((::SelectMgr_ViewerSelector*)_NativeInstance)->IsActive(Handle(::SelectMgr_SelectableObject)(theSelectableObject->NativeInstance), theMode);
    return _result;
}

bool Macad::Occt::SelectMgr_ViewerSelector::IsInside(Macad::Occt::SelectMgr_SelectableObject^ theSelectableObject, int theMode)
{
    bool _result = ((::SelectMgr_ViewerSelector*)_NativeInstance)->IsInside(Handle(::SelectMgr_SelectableObject)(theSelectableObject->NativeInstance), theMode);
    return _result;
}

Macad::Occt::SelectMgr_StateOfSelection Macad::Occt::SelectMgr_ViewerSelector::Status(Macad::Occt::SelectMgr_Selection^ theSelection)
{
    ::SelectMgr_StateOfSelection _result = ((::SelectMgr_ViewerSelector*)_NativeInstance)->Status(Handle(::SelectMgr_Selection)(theSelection->NativeInstance));
    return (Macad::Occt::SelectMgr_StateOfSelection)_result;
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::SelectMgr_ViewerSelector::Status(Macad::Occt::SelectMgr_SelectableObject^ theSelectableObject)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::SelectMgr_ViewerSelector*)_NativeInstance)->Status(Handle(::SelectMgr_SelectableObject)(theSelectableObject->NativeInstance));
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::SelectMgr_ViewerSelector::ActiveOwners(Macad::Occt::AIS_NListOfEntityOwner^ theOwners)
{
    ((::SelectMgr_ViewerSelector*)_NativeInstance)->ActiveOwners(*(::AIS_NListOfEntityOwner*)theOwners->NativeInstance);
}

void Macad::Occt::SelectMgr_ViewerSelector::AddSelectableObject(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
    ((::SelectMgr_ViewerSelector*)_NativeInstance)->AddSelectableObject(Handle(::SelectMgr_SelectableObject)(theObject->NativeInstance));
}

void Macad::Occt::SelectMgr_ViewerSelector::AddSelectionToObject(Macad::Occt::SelectMgr_SelectableObject^ theObject, Macad::Occt::SelectMgr_Selection^ theSelection)
{
    ((::SelectMgr_ViewerSelector*)_NativeInstance)->AddSelectionToObject(Handle(::SelectMgr_SelectableObject)(theObject->NativeInstance), Handle(::SelectMgr_Selection)(theSelection->NativeInstance));
}

void Macad::Occt::SelectMgr_ViewerSelector::MoveSelectableObject(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
    ((::SelectMgr_ViewerSelector*)_NativeInstance)->MoveSelectableObject(Handle(::SelectMgr_SelectableObject)(theObject->NativeInstance));
}

void Macad::Occt::SelectMgr_ViewerSelector::RemoveSelectableObject(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
    ((::SelectMgr_ViewerSelector*)_NativeInstance)->RemoveSelectableObject(Handle(::SelectMgr_SelectableObject)(theObject->NativeInstance));
}

void Macad::Occt::SelectMgr_ViewerSelector::RemoveSelectionOfObject(Macad::Occt::SelectMgr_SelectableObject^ theObject, Macad::Occt::SelectMgr_Selection^ theSelection)
{
    ((::SelectMgr_ViewerSelector*)_NativeInstance)->RemoveSelectionOfObject(Handle(::SelectMgr_SelectableObject)(theObject->NativeInstance), Handle(::SelectMgr_Selection)(theSelection->NativeInstance));
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
    ((::SelectMgr_ViewerSelector*)_NativeInstance)->RebuildSensitivesTree(Handle(::SelectMgr_SelectableObject)(theObject->NativeInstance), theIsForce);
}

void Macad::Occt::SelectMgr_ViewerSelector::RebuildSensitivesTree(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
    ((::SelectMgr_ViewerSelector*)_NativeInstance)->RebuildSensitivesTree(Handle(::SelectMgr_SelectableObject)(theObject->NativeInstance), false);
}

Macad::Occt::SelectMgr_SelectingVolumeManager^ Macad::Occt::SelectMgr_ViewerSelector::GetManager()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::SelectMgr_SelectableObjectSet^ Macad::Occt::SelectMgr_ViewerSelector::SelectableObjects()
{
    ::SelectMgr_SelectableObjectSet* _result = new ::SelectMgr_SelectableObjectSet();
    *_result = (::SelectMgr_SelectableObjectSet)((::SelectMgr_ViewerSelector*)_NativeInstance)->SelectableObjects();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_SelectableObjectSet(_result);
}

void Macad::Occt::SelectMgr_ViewerSelector::ResetSelectionActivationStatus()
{
    ((::SelectMgr_ViewerSelector*)_NativeInstance)->ResetSelectionActivationStatus();
}

void Macad::Occt::SelectMgr_ViewerSelector::AllowOverlapDetection(bool theIsToAllow)
{
    ((::SelectMgr_ViewerSelector*)_NativeInstance)->AllowOverlapDetection(theIsToAllow);
}

void Macad::Occt::SelectMgr_ViewerSelector::Pick(int theXPix, int theYPix, Macad::Occt::V3d_View^ theView)
{
    ((::SelectMgr_ViewerSelector*)_NativeInstance)->Pick(theXPix, theYPix, Handle(::V3d_View)(theView->NativeInstance));
}

void Macad::Occt::SelectMgr_ViewerSelector::Pick(int theXPMin, int theYPMin, int theXPMax, int theYPMax, Macad::Occt::V3d_View^ theView)
{
    ((::SelectMgr_ViewerSelector*)_NativeInstance)->Pick(theXPMin, theYPMin, theXPMax, theYPMax, Handle(::V3d_View)(theView->NativeInstance));
}

void Macad::Occt::SelectMgr_ViewerSelector::Pick(Macad::Occt::TColgp_Array1OfPnt2d^ thePolyline, Macad::Occt::V3d_View^ theView)
{
    ((::SelectMgr_ViewerSelector*)_NativeInstance)->Pick(*(::TColgp_Array1OfPnt2d*)thePolyline->NativeInstance, Handle(::V3d_View)(theView->NativeInstance));
}

void Macad::Occt::SelectMgr_ViewerSelector::Pick(Macad::Occt::Ax1 theAxis, Macad::Occt::V3d_View^ theView)
{
    pin_ptr<Macad::Occt::Ax1> pp_theAxis = &theAxis;
    ((::SelectMgr_ViewerSelector*)_NativeInstance)->Pick(*(gp_Ax1*)pp_theAxis, Handle(::V3d_View)(theView->NativeInstance));
}

bool Macad::Occt::SelectMgr_ViewerSelector::ToPixMap(Macad::Occt::Image_PixMap^ theImage, Macad::Occt::V3d_View^ theView, Macad::Occt::StdSelect_TypeOfSelectionImage theType, int thePickedIndex)
{
    bool _result = ((::SelectMgr_ViewerSelector*)_NativeInstance)->ToPixMap(*(::Image_PixMap*)theImage->NativeInstance, Handle(::V3d_View)(theView->NativeInstance), (::StdSelect_TypeOfSelectionImage)theType, thePickedIndex);
    return _result;
}

bool Macad::Occt::SelectMgr_ViewerSelector::ToPixMap(Macad::Occt::Image_PixMap^ theImage, Macad::Occt::V3d_View^ theView, Macad::Occt::StdSelect_TypeOfSelectionImage theType)
{
    bool _result = ((::SelectMgr_ViewerSelector*)_NativeInstance)->ToPixMap(*(::Image_PixMap*)theImage->NativeInstance, Handle(::V3d_View)(theView->NativeInstance), (::StdSelect_TypeOfSelectionImage)theType, 1);
    return _result;
}

void Macad::Occt::SelectMgr_ViewerSelector::DisplaySensitive(Macad::Occt::V3d_View^ theView)
{
    ((::SelectMgr_ViewerSelector*)_NativeInstance)->DisplaySensitive(Handle(::V3d_View)(theView->NativeInstance));
}

void Macad::Occt::SelectMgr_ViewerSelector::ClearSensitive(Macad::Occt::V3d_View^ theView)
{
    ((::SelectMgr_ViewerSelector*)_NativeInstance)->ClearSensitive(Handle(::V3d_View)(theView->NativeInstance));
}

void Macad::Occt::SelectMgr_ViewerSelector::DisplaySensitive(Macad::Occt::SelectMgr_Selection^ theSel, Macad::Occt::Trsf theTrsf, Macad::Occt::V3d_View^ theView, bool theToClearOthers)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    ((::SelectMgr_ViewerSelector*)_NativeInstance)->DisplaySensitive(Handle(::SelectMgr_Selection)(theSel->NativeInstance), *(gp_Trsf*)pp_theTrsf, Handle(::V3d_View)(theView->NativeInstance), theToClearOthers);
}

void Macad::Occt::SelectMgr_ViewerSelector::DisplaySensitive(Macad::Occt::SelectMgr_Selection^ theSel, Macad::Occt::Trsf theTrsf, Macad::Occt::V3d_View^ theView)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    ((::SelectMgr_ViewerSelector*)_NativeInstance)->DisplaySensitive(Handle(::SelectMgr_Selection)(theSel->NativeInstance), *(gp_Trsf*)pp_theTrsf, Handle(::V3d_View)(theView->NativeInstance), true);
}

void Macad::Occt::SelectMgr_ViewerSelector::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::SelectMgr_ViewerSelector*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::SelectMgr_ViewerSelector::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::SelectMgr_ViewerSelector*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::SelectMgr_ViewerSelector::SetToPrebuildBVH(bool theToPrebuild, int theThreadsNum)
{
    ((::SelectMgr_ViewerSelector*)_NativeInstance)->SetToPrebuildBVH(theToPrebuild, theThreadsNum);
}

void Macad::Occt::SelectMgr_ViewerSelector::SetToPrebuildBVH(bool theToPrebuild)
{
    ((::SelectMgr_ViewerSelector*)_NativeInstance)->SetToPrebuildBVH(theToPrebuild, -1);
}

void Macad::Occt::SelectMgr_ViewerSelector::WaitForBVHBuild()
{
    ((::SelectMgr_ViewerSelector*)_NativeInstance)->WaitForBVHBuild();
}

bool Macad::Occt::SelectMgr_ViewerSelector::ToPrebuildBVH()
{
    bool _result = ((::SelectMgr_ViewerSelector*)_NativeInstance)->ToPrebuildBVH();
    return _result;
}

Macad::Occt::SelectMgr_ViewerSelector^ Macad::Occt::SelectMgr_ViewerSelector::CreateDowncasted(::SelectMgr_ViewerSelector* instance)
{
    return gcnew Macad::Occt::SelectMgr_ViewerSelector( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr_ToleranceMap
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_ToleranceMap::SelectMgr_ToleranceMap()
    : Macad::Occt::BaseClass<::SelectMgr_ToleranceMap>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::SelectMgr_ToleranceMap();
}

void Macad::Occt::SelectMgr_ToleranceMap::Add(int theTolerance)
{
    pin_ptr<int> pp_theTolerance = &theTolerance;
    ((::SelectMgr_ToleranceMap*)_NativeInstance)->Add(*(int*)pp_theTolerance);
}

void Macad::Occt::SelectMgr_ToleranceMap::Decrement(int theTolerance)
{
    pin_ptr<int> pp_theTolerance = &theTolerance;
    ((::SelectMgr_ToleranceMap*)_NativeInstance)->Decrement(*(int*)pp_theTolerance);
}

int Macad::Occt::SelectMgr_ToleranceMap::Tolerance()
{
    int _result = ((::SelectMgr_ToleranceMap*)_NativeInstance)->Tolerance();
    return _result;
}

void Macad::Occt::SelectMgr_ToleranceMap::SetCustomTolerance(int theTolerance)
{
    ((::SelectMgr_ToleranceMap*)_NativeInstance)->SetCustomTolerance(theTolerance);
}

void Macad::Occt::SelectMgr_ToleranceMap::ResetDefaults()
{
    ((::SelectMgr_ToleranceMap*)_NativeInstance)->ResetDefaults();
}

int Macad::Occt::SelectMgr_ToleranceMap::CustomTolerance()
{
    int _result = ((::SelectMgr_ToleranceMap*)_NativeInstance)->CustomTolerance();
    return _result;
}

bool Macad::Occt::SelectMgr_ToleranceMap::IsCustomTolSet()
{
    bool _result = ((::SelectMgr_ToleranceMap*)_NativeInstance)->IsCustomTolSet();
    return _result;
}



//---------------------------------------------------------------------
//  Class  SelectMgr_SelectionManager
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_SelectionManager::SelectMgr_SelectionManager(Macad::Occt::SelectMgr_ViewerSelector^ theSelector)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::SelectMgr_SelectionManager(Handle(::SelectMgr_ViewerSelector)(theSelector->NativeInstance));
}

Macad::Occt::SelectMgr_ViewerSelector^ Macad::Occt::SelectMgr_SelectionManager::Selector()
{
    Handle(::SelectMgr_ViewerSelector) _result = ((::SelectMgr_SelectionManager*)_NativeInstance)->Selector();
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_ViewerSelector::CreateDowncasted(_result.get());
}

bool Macad::Occt::SelectMgr_SelectionManager::Contains(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
    bool _result = ((::SelectMgr_SelectionManager*)_NativeInstance)->Contains(Handle(::SelectMgr_SelectableObject)(theObject->NativeInstance));
    return _result;
}

void Macad::Occt::SelectMgr_SelectionManager::Load(Macad::Occt::SelectMgr_SelectableObject^ theObject, int theMode)
{
    ((::SelectMgr_SelectionManager*)_NativeInstance)->Load(Handle(::SelectMgr_SelectableObject)(theObject->NativeInstance), theMode);
}

void Macad::Occt::SelectMgr_SelectionManager::Load(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
    ((::SelectMgr_SelectionManager*)_NativeInstance)->Load(Handle(::SelectMgr_SelectableObject)(theObject->NativeInstance), -1);
}

void Macad::Occt::SelectMgr_SelectionManager::Remove(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
    ((::SelectMgr_SelectionManager*)_NativeInstance)->Remove(Handle(::SelectMgr_SelectableObject)(theObject->NativeInstance));
}

void Macad::Occt::SelectMgr_SelectionManager::Activate(Macad::Occt::SelectMgr_SelectableObject^ theObject, int theMode)
{
    ((::SelectMgr_SelectionManager*)_NativeInstance)->Activate(Handle(::SelectMgr_SelectableObject)(theObject->NativeInstance), theMode);
}

void Macad::Occt::SelectMgr_SelectionManager::Activate(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
    ((::SelectMgr_SelectionManager*)_NativeInstance)->Activate(Handle(::SelectMgr_SelectableObject)(theObject->NativeInstance), 0);
}

void Macad::Occt::SelectMgr_SelectionManager::Deactivate(Macad::Occt::SelectMgr_SelectableObject^ theObject, int theMode)
{
    ((::SelectMgr_SelectionManager*)_NativeInstance)->Deactivate(Handle(::SelectMgr_SelectableObject)(theObject->NativeInstance), theMode);
}

void Macad::Occt::SelectMgr_SelectionManager::Deactivate(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
    ((::SelectMgr_SelectionManager*)_NativeInstance)->Deactivate(Handle(::SelectMgr_SelectableObject)(theObject->NativeInstance), -1);
}

bool Macad::Occt::SelectMgr_SelectionManager::IsActivated(Macad::Occt::SelectMgr_SelectableObject^ theObject, int theMode)
{
    bool _result = ((::SelectMgr_SelectionManager*)_NativeInstance)->IsActivated(Handle(::SelectMgr_SelectableObject)(theObject->NativeInstance), theMode);
    return _result;
}

bool Macad::Occt::SelectMgr_SelectionManager::IsActivated(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
    bool _result = ((::SelectMgr_SelectionManager*)_NativeInstance)->IsActivated(Handle(::SelectMgr_SelectableObject)(theObject->NativeInstance), -1);
    return _result;
}

void Macad::Occt::SelectMgr_SelectionManager::ClearSelectionStructures(Macad::Occt::SelectMgr_SelectableObject^ theObj, int theMode)
{
    ((::SelectMgr_SelectionManager*)_NativeInstance)->ClearSelectionStructures(Handle(::SelectMgr_SelectableObject)(theObj->NativeInstance), theMode);
}

void Macad::Occt::SelectMgr_SelectionManager::ClearSelectionStructures(Macad::Occt::SelectMgr_SelectableObject^ theObj)
{
    ((::SelectMgr_SelectionManager*)_NativeInstance)->ClearSelectionStructures(Handle(::SelectMgr_SelectableObject)(theObj->NativeInstance), -1);
}

void Macad::Occt::SelectMgr_SelectionManager::RestoreSelectionStructures(Macad::Occt::SelectMgr_SelectableObject^ theObj, int theMode)
{
    ((::SelectMgr_SelectionManager*)_NativeInstance)->RestoreSelectionStructures(Handle(::SelectMgr_SelectableObject)(theObj->NativeInstance), theMode);
}

void Macad::Occt::SelectMgr_SelectionManager::RestoreSelectionStructures(Macad::Occt::SelectMgr_SelectableObject^ theObj)
{
    ((::SelectMgr_SelectionManager*)_NativeInstance)->RestoreSelectionStructures(Handle(::SelectMgr_SelectableObject)(theObj->NativeInstance), -1);
}

void Macad::Occt::SelectMgr_SelectionManager::RecomputeSelection(Macad::Occt::SelectMgr_SelectableObject^ theObject, bool theIsForce, int theMode)
{
    ((::SelectMgr_SelectionManager*)_NativeInstance)->RecomputeSelection(Handle(::SelectMgr_SelectableObject)(theObject->NativeInstance), theIsForce, theMode);
}

void Macad::Occt::SelectMgr_SelectionManager::RecomputeSelection(Macad::Occt::SelectMgr_SelectableObject^ theObject, bool theIsForce)
{
    ((::SelectMgr_SelectionManager*)_NativeInstance)->RecomputeSelection(Handle(::SelectMgr_SelectableObject)(theObject->NativeInstance), theIsForce, -1);
}

void Macad::Occt::SelectMgr_SelectionManager::RecomputeSelection(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
    ((::SelectMgr_SelectionManager*)_NativeInstance)->RecomputeSelection(Handle(::SelectMgr_SelectableObject)(theObject->NativeInstance), false, -1);
}

void Macad::Occt::SelectMgr_SelectionManager::Update(Macad::Occt::SelectMgr_SelectableObject^ theObject, bool theIsForce)
{
    ((::SelectMgr_SelectionManager*)_NativeInstance)->Update(Handle(::SelectMgr_SelectableObject)(theObject->NativeInstance), theIsForce);
}

void Macad::Occt::SelectMgr_SelectionManager::Update(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
    ((::SelectMgr_SelectionManager*)_NativeInstance)->Update(Handle(::SelectMgr_SelectableObject)(theObject->NativeInstance), true);
}

void Macad::Occt::SelectMgr_SelectionManager::SetUpdateMode(Macad::Occt::SelectMgr_SelectableObject^ theObject, Macad::Occt::SelectMgr_TypeOfUpdate theType)
{
    ((::SelectMgr_SelectionManager*)_NativeInstance)->SetUpdateMode(Handle(::SelectMgr_SelectableObject)(theObject->NativeInstance), (::SelectMgr_TypeOfUpdate)theType);
}

void Macad::Occt::SelectMgr_SelectionManager::SetUpdateMode(Macad::Occt::SelectMgr_SelectableObject^ theObject, int theMode, Macad::Occt::SelectMgr_TypeOfUpdate theType)
{
    ((::SelectMgr_SelectionManager*)_NativeInstance)->SetUpdateMode(Handle(::SelectMgr_SelectableObject)(theObject->NativeInstance), theMode, (::SelectMgr_TypeOfUpdate)theType);
}

void Macad::Occt::SelectMgr_SelectionManager::SetSelectionSensitivity(Macad::Occt::SelectMgr_SelectableObject^ theObject, int theMode, int theNewSens)
{
    ((::SelectMgr_SelectionManager*)_NativeInstance)->SetSelectionSensitivity(Handle(::SelectMgr_SelectableObject)(theObject->NativeInstance), theMode, theNewSens);
}

void Macad::Occt::SelectMgr_SelectionManager::UpdateSelection(Macad::Occt::SelectMgr_SelectableObject^ theObj)
{
    ((::SelectMgr_SelectionManager*)_NativeInstance)->UpdateSelection(Handle(::SelectMgr_SelectableObject)(theObj->NativeInstance));
}

Macad::Occt::SelectMgr_SelectionManager^ Macad::Occt::SelectMgr_SelectionManager::CreateDowncasted(::SelectMgr_SelectionManager* instance)
{
    return gcnew Macad::Occt::SelectMgr_SelectionManager( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr_TriangularFrustum
//---------------------------------------------------------------------

void Macad::Occt::SelectMgr_TriangularFrustum::Init(Macad::Occt::Pnt2d theP1, Macad::Occt::Pnt2d theP2, Macad::Occt::Pnt2d theP3)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP1 = &theP1;
    pin_ptr<Macad::Occt::Pnt2d> pp_theP2 = &theP2;
    pin_ptr<Macad::Occt::Pnt2d> pp_theP3 = &theP3;
    ((::SelectMgr_TriangularFrustum*)_NativeInstance)->Init(*(gp_Pnt2d*)pp_theP1, *(gp_Pnt2d*)pp_theP2, *(gp_Pnt2d*)pp_theP3);
}

void Macad::Occt::SelectMgr_TriangularFrustum::Build()
{
    ((::SelectMgr_TriangularFrustum*)_NativeInstance)->Build();
}

bool Macad::Occt::SelectMgr_TriangularFrustum::IsScalable()
{
    bool _result = ((::SelectMgr_TriangularFrustum*)_NativeInstance)->IsScalable();
    return _result;
}

Macad::Occt::SelectMgr_BaseIntersector^ Macad::Occt::SelectMgr_TriangularFrustum::ScaleAndTransform(int theScale, Macad::Occt::gp_GTrsf^ theTrsf, Macad::Occt::SelectMgr_FrustumBuilder^ theBuilder)
{
    Handle(::SelectMgr_BaseIntersector) _result = ((::SelectMgr_TriangularFrustum*)_NativeInstance)->ScaleAndTransform(theScale, *(::gp_GTrsf*)theTrsf->NativeInstance, Handle(::SelectMgr_FrustumBuilder)(theBuilder->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_BaseIntersector::CreateDowncasted(_result.get());
}

Macad::Occt::SelectMgr_BaseIntersector^ Macad::Occt::SelectMgr_TriangularFrustum::CopyWithBuilder(Macad::Occt::SelectMgr_FrustumBuilder^ theBuilder)
{
    Handle(::SelectMgr_BaseIntersector) _result = ((::SelectMgr_TriangularFrustum*)_NativeInstance)->CopyWithBuilder(Handle(::SelectMgr_FrustumBuilder)(theBuilder->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_BaseIntersector::CreateDowncasted(_result.get());
}

bool Macad::Occt::SelectMgr_TriangularFrustum::OverlapsBox(Macad::Occt::SelectMgr_Vec3^ theMinPnt, Macad::Occt::SelectMgr_Vec3^ theMaxPnt, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    bool _result = ((::SelectMgr_TriangularFrustum*)_NativeInstance)->OverlapsBox(*(::SelectMgr_Vec3*)theMinPnt->NativeInstance, *(::SelectMgr_Vec3*)theMaxPnt->NativeInstance, *(::SelectMgr_ViewClipRange*)theClipRange->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_TriangularFrustum::OverlapsBox(Macad::Occt::SelectMgr_Vec3^ theMinPt, Macad::Occt::SelectMgr_Vec3^ theMaxPt, bool% theInside)
{
    pin_ptr<bool> pp_theInside = &theInside;
    bool _result = ((::SelectMgr_TriangularFrustum*)_NativeInstance)->OverlapsBox(*(::SelectMgr_Vec3*)theMinPt->NativeInstance, *(::SelectMgr_Vec3*)theMaxPt->NativeInstance, (bool*)pp_theInside);
    return _result;
}

bool Macad::Occt::SelectMgr_TriangularFrustum::OverlapsPoint(Macad::Occt::Pnt thePnt, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
    bool _result = ((::SelectMgr_TriangularFrustum*)_NativeInstance)->OverlapsPoint(*(gp_Pnt*)pp_thePnt, *(::SelectMgr_ViewClipRange*)theClipRange->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_TriangularFrustum::OverlapsPoint(Macad::Occt::Pnt parameter1)
{
    pin_ptr<Macad::Occt::Pnt> pp_parameter1 = &parameter1;
    bool _result = ((::SelectMgr_TriangularFrustum*)_NativeInstance)->OverlapsPoint(*(gp_Pnt*)pp_parameter1);
    return _result;
}

bool Macad::Occt::SelectMgr_TriangularFrustum::OverlapsSegment(Macad::Occt::Pnt thePnt1, Macad::Occt::Pnt thePnt2, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt1 = &thePnt1;
    pin_ptr<Macad::Occt::Pnt> pp_thePnt2 = &thePnt2;
    bool _result = ((::SelectMgr_TriangularFrustum*)_NativeInstance)->OverlapsSegment(*(gp_Pnt*)pp_thePnt1, *(gp_Pnt*)pp_thePnt2, *(::SelectMgr_ViewClipRange*)theClipRange->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_TriangularFrustum::OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius, bool% theInside)
{
    pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
    pin_ptr<bool> pp_theInside = &theInside;
    bool _result = ((::SelectMgr_TriangularFrustum*)_NativeInstance)->OverlapsSphere(*(gp_Pnt*)pp_theCenter, theRadius, (bool*)pp_theInside);
    return _result;
}

bool Macad::Occt::SelectMgr_TriangularFrustum::OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius)
{
    pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
    bool _result = ((::SelectMgr_TriangularFrustum*)_NativeInstance)->OverlapsSphere(*(gp_Pnt*)pp_theCenter, theRadius, nullptr);
    return _result;
}

bool Macad::Occt::SelectMgr_TriangularFrustum::OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
    bool _result = ((::SelectMgr_TriangularFrustum*)_NativeInstance)->OverlapsSphere(*(gp_Pnt*)pp_theCenter, theRadius, *(::SelectMgr_ViewClipRange*)theClipRange->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_TriangularFrustum::OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf, bool theIsHollow, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    bool _result = ((::SelectMgr_TriangularFrustum*)_NativeInstance)->OverlapsCylinder(theBottomRad, theTopRad, theHeight, *(gp_Trsf*)pp_theTrsf, theIsHollow, *(::SelectMgr_ViewClipRange*)theClipRange->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_TriangularFrustum::OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf, bool theIsHollow, bool% theInside)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    pin_ptr<bool> pp_theInside = &theInside;
    bool _result = ((::SelectMgr_TriangularFrustum*)_NativeInstance)->OverlapsCylinder(theBottomRad, theTopRad, theHeight, *(gp_Trsf*)pp_theTrsf, theIsHollow, (bool*)pp_theInside);
    return _result;
}

bool Macad::Occt::SelectMgr_TriangularFrustum::OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf, bool theIsHollow)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    bool _result = ((::SelectMgr_TriangularFrustum*)_NativeInstance)->OverlapsCylinder(theBottomRad, theTopRad, theHeight, *(gp_Trsf*)pp_theTrsf, theIsHollow, nullptr);
    return _result;
}

bool Macad::Occt::SelectMgr_TriangularFrustum::OverlapsCircle(double theRadius, Macad::Occt::Trsf theTrsf, bool theIsFilled, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    bool _result = ((::SelectMgr_TriangularFrustum*)_NativeInstance)->OverlapsCircle(theRadius, *(gp_Trsf*)pp_theTrsf, theIsFilled, *(::SelectMgr_ViewClipRange*)theClipRange->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
    return _result;
}

bool Macad::Occt::SelectMgr_TriangularFrustum::OverlapsCircle(double theRadius, Macad::Occt::Trsf theTrsf, bool theIsFilled, bool% theInside)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    pin_ptr<bool> pp_theInside = &theInside;
    bool _result = ((::SelectMgr_TriangularFrustum*)_NativeInstance)->OverlapsCircle(theRadius, *(gp_Trsf*)pp_theTrsf, theIsFilled, (bool*)pp_theInside);
    return _result;
}

bool Macad::Occt::SelectMgr_TriangularFrustum::OverlapsCircle(double theRadius, Macad::Occt::Trsf theTrsf, bool theIsFilled)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    bool _result = ((::SelectMgr_TriangularFrustum*)_NativeInstance)->OverlapsCircle(theRadius, *(gp_Trsf*)pp_theTrsf, theIsFilled, nullptr);
    return _result;
}

void Macad::Occt::SelectMgr_TriangularFrustum::Clear()
{
    ((::SelectMgr_TriangularFrustum*)_NativeInstance)->Clear();
}

void Macad::Occt::SelectMgr_TriangularFrustum::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::SelectMgr_TriangularFrustum*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::SelectMgr_TriangularFrustum::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::SelectMgr_TriangularFrustum*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::SelectMgr_TriangularFrustum^ Macad::Occt::SelectMgr_TriangularFrustum::CreateDowncasted(::SelectMgr_TriangularFrustum* instance)
{
    return gcnew Macad::Occt::SelectMgr_TriangularFrustum( instance );
}


