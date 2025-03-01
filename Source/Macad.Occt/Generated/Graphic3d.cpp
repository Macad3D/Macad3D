// Generated wrapper code for package Graphic3d

#include "OcctPCH.h"
#include "Graphic3d.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "gp.h"
#include "NCollection.h"
#include "Standard.h"
#include "TCollection.h"
#include "TopLoc.h"
#include "Quantity.h"
#include "Image.h"
#include "TColStd.h"
#include "Aspect.h"
#include "Bnd.h"
#include "V3d.h"
#include "Prs3d.h"
#include "PrsMgr.h"


//---------------------------------------------------------------------
//  Class  Graphic3d_Vec2
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Vec2::Graphic3d_Vec2(float theXY)
    : Macad::Occt::BaseClass<::Graphic3d_Vec2>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec2(theXY);
}

Macad::Occt::Graphic3d_Vec2::Graphic3d_Vec2(float theX, float theY)
    : Macad::Occt::BaseClass<::Graphic3d_Vec2>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec2(theX, theY);
}

int Macad::Occt::Graphic3d_Vec2::Length()
{
    int _result = ::Graphic3d_Vec2::Length();
    return _result;
}

void Macad::Occt::Graphic3d_Vec2::SetValues(float theX, float theY)
{
    ((::Graphic3d_Vec2*)_NativeInstance)->SetValues(theX, theY);
}

float Macad::Occt::Graphic3d_Vec2::x()
{
    float _result = ((::Graphic3d_Vec2*)_NativeInstance)->x();
    return _result;
}

float Macad::Occt::Graphic3d_Vec2::y()
{
    float _result = ((::Graphic3d_Vec2*)_NativeInstance)->y();
    return _result;
}

Macad::Occt::Graphic3d_Vec2^ Macad::Occt::Graphic3d_Vec2::xy()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Vec2^ Macad::Occt::Graphic3d_Vec2::yx()
{
    throw gcnew System::NotImplementedException();
}

bool Macad::Occt::Graphic3d_Vec2::IsEqual(Macad::Occt::Graphic3d_Vec2^ theOther)
{
    bool _result = ((::Graphic3d_Vec2*)_NativeInstance)->IsEqual(*(::Graphic3d_Vec2*)theOther->NativeInstance);
    return _result;
}

float Macad::Occt::Graphic3d_Vec2::GetData()
{
    throw gcnew System::NotImplementedException();
}

float Macad::Occt::Graphic3d_Vec2::ChangeData()
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::Graphic3d_Vec2::Multiply(float theFactor)
{
    ((::Graphic3d_Vec2*)_NativeInstance)->Multiply(theFactor);
}

Macad::Occt::Graphic3d_Vec2^ Macad::Occt::Graphic3d_Vec2::Multiplied(float theFactor)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Vec2^ Macad::Occt::Graphic3d_Vec2::cwiseMin(Macad::Occt::Graphic3d_Vec2^ theVec)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Vec2^ Macad::Occt::Graphic3d_Vec2::cwiseMax(Macad::Occt::Graphic3d_Vec2^ theVec)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Vec2^ Macad::Occt::Graphic3d_Vec2::cwiseAbs()
{
    throw gcnew System::NotImplementedException();
}

float Macad::Occt::Graphic3d_Vec2::maxComp()
{
    float _result = ((::Graphic3d_Vec2*)_NativeInstance)->maxComp();
    return _result;
}

float Macad::Occt::Graphic3d_Vec2::minComp()
{
    float _result = ((::Graphic3d_Vec2*)_NativeInstance)->minComp();
    return _result;
}

float Macad::Occt::Graphic3d_Vec2::Dot(Macad::Occt::Graphic3d_Vec2^ theOther)
{
    float _result = ((::Graphic3d_Vec2*)_NativeInstance)->Dot(*(::Graphic3d_Vec2*)theOther->NativeInstance);
    return _result;
}

float Macad::Occt::Graphic3d_Vec2::Modulus()
{
    float _result = ((::Graphic3d_Vec2*)_NativeInstance)->Modulus();
    return _result;
}

float Macad::Occt::Graphic3d_Vec2::SquareModulus()
{
    float _result = ((::Graphic3d_Vec2*)_NativeInstance)->SquareModulus();
    return _result;
}

Macad::Occt::Graphic3d_Vec2^ Macad::Occt::Graphic3d_Vec2::DX()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Vec2^ Macad::Occt::Graphic3d_Vec2::DY()
{
    throw gcnew System::NotImplementedException();
}

bool Macad::Occt::Graphic3d_Vec2::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Graphic3d_Vec2::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Graphic3d_Vec2^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Vec2d
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Vec2d::Graphic3d_Vec2d()
    : Macad::Occt::BaseClass<::Graphic3d_Vec2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec2d();
}

Macad::Occt::Graphic3d_Vec2d::Graphic3d_Vec2d(double theXY)
    : Macad::Occt::BaseClass<::Graphic3d_Vec2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec2d(theXY);
}

Macad::Occt::Graphic3d_Vec2d::Graphic3d_Vec2d(double theX, double theY)
    : Macad::Occt::BaseClass<::Graphic3d_Vec2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec2d(theX, theY);
}

int Macad::Occt::Graphic3d_Vec2d::Length()
{
    int _result = ::Graphic3d_Vec2d::Length();
    return _result;
}

void Macad::Occt::Graphic3d_Vec2d::SetValues(double theX, double theY)
{
    ((::Graphic3d_Vec2d*)_NativeInstance)->SetValues(theX, theY);
}

double Macad::Occt::Graphic3d_Vec2d::x()
{
    double _result = ((::Graphic3d_Vec2d*)_NativeInstance)->x();
    return _result;
}

double Macad::Occt::Graphic3d_Vec2d::y()
{
    double _result = ((::Graphic3d_Vec2d*)_NativeInstance)->y();
    return _result;
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_Vec2d::xy()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::Graphic3d_Vec2d*)_NativeInstance)->xy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_Vec2d::yx()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::Graphic3d_Vec2d*)_NativeInstance)->yx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

bool Macad::Occt::Graphic3d_Vec2d::IsEqual(Macad::Occt::Graphic3d_Vec2d^ theOther)
{
    bool _result = ((::Graphic3d_Vec2d*)_NativeInstance)->IsEqual(*(::Graphic3d_Vec2d*)theOther->NativeInstance);
    return _result;
}

double Macad::Occt::Graphic3d_Vec2d::GetData()
{
    throw gcnew System::NotImplementedException();
}

double Macad::Occt::Graphic3d_Vec2d::ChangeData()
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::Graphic3d_Vec2d::Multiply(double theFactor)
{
    ((::Graphic3d_Vec2d*)_NativeInstance)->Multiply(theFactor);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_Vec2d::Multiplied(double theFactor)
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = ((::Graphic3d_Vec2d*)_NativeInstance)->Multiplied(theFactor);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_Vec2d::cwiseMin(Macad::Occt::Graphic3d_Vec2d^ theVec)
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = ((::Graphic3d_Vec2d*)_NativeInstance)->cwiseMin(*(::Graphic3d_Vec2d*)theVec->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_Vec2d::cwiseMax(Macad::Occt::Graphic3d_Vec2d^ theVec)
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = ((::Graphic3d_Vec2d*)_NativeInstance)->cwiseMax(*(::Graphic3d_Vec2d*)theVec->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_Vec2d::cwiseAbs()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = ((::Graphic3d_Vec2d*)_NativeInstance)->cwiseAbs();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

double Macad::Occt::Graphic3d_Vec2d::maxComp()
{
    double _result = ((::Graphic3d_Vec2d*)_NativeInstance)->maxComp();
    return _result;
}

double Macad::Occt::Graphic3d_Vec2d::minComp()
{
    double _result = ((::Graphic3d_Vec2d*)_NativeInstance)->minComp();
    return _result;
}

double Macad::Occt::Graphic3d_Vec2d::Dot(Macad::Occt::Graphic3d_Vec2d^ theOther)
{
    double _result = ((::Graphic3d_Vec2d*)_NativeInstance)->Dot(*(::Graphic3d_Vec2d*)theOther->NativeInstance);
    return _result;
}

double Macad::Occt::Graphic3d_Vec2d::Modulus()
{
    double _result = ((::Graphic3d_Vec2d*)_NativeInstance)->Modulus();
    return _result;
}

double Macad::Occt::Graphic3d_Vec2d::SquareModulus()
{
    double _result = ((::Graphic3d_Vec2d*)_NativeInstance)->SquareModulus();
    return _result;
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_Vec2d::DX()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = ::Graphic3d_Vec2d::DX();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_Vec2d::DY()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = ::Graphic3d_Vec2d::DY();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

bool Macad::Occt::Graphic3d_Vec2d::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Graphic3d_Vec2d::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Graphic3d_Vec2d^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Vec2i
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Vec2i::Graphic3d_Vec2i()
    : Macad::Occt::BaseClass<::Graphic3d_Vec2i>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec2i();
}

Macad::Occt::Graphic3d_Vec2i::Graphic3d_Vec2i(int theXY)
    : Macad::Occt::BaseClass<::Graphic3d_Vec2i>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec2i(theXY);
}

Macad::Occt::Graphic3d_Vec2i::Graphic3d_Vec2i(int theX, int theY)
    : Macad::Occt::BaseClass<::Graphic3d_Vec2i>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec2i(theX, theY);
}

int Macad::Occt::Graphic3d_Vec2i::Length()
{
    int _result = ::Graphic3d_Vec2i::Length();
    return _result;
}

void Macad::Occt::Graphic3d_Vec2i::SetValues(int theX, int theY)
{
    ((::Graphic3d_Vec2i*)_NativeInstance)->SetValues(theX, theY);
}

int Macad::Occt::Graphic3d_Vec2i::x()
{
    int _result = ((::Graphic3d_Vec2i*)_NativeInstance)->x();
    return _result;
}

int Macad::Occt::Graphic3d_Vec2i::y()
{
    int _result = ((::Graphic3d_Vec2i*)_NativeInstance)->y();
    return _result;
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_Vec2i::xy()
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = (::Graphic3d_Vec2i)((::Graphic3d_Vec2i*)_NativeInstance)->xy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_Vec2i::yx()
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = (::Graphic3d_Vec2i)((::Graphic3d_Vec2i*)_NativeInstance)->yx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

bool Macad::Occt::Graphic3d_Vec2i::IsEqual(Macad::Occt::Graphic3d_Vec2i^ theOther)
{
    bool _result = ((::Graphic3d_Vec2i*)_NativeInstance)->IsEqual(*(::Graphic3d_Vec2i*)theOther->NativeInstance);
    return _result;
}

int Macad::Occt::Graphic3d_Vec2i::GetData()
{
    throw gcnew System::NotImplementedException();
}

int Macad::Occt::Graphic3d_Vec2i::ChangeData()
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::Graphic3d_Vec2i::Multiply(int theFactor)
{
    ((::Graphic3d_Vec2i*)_NativeInstance)->Multiply(theFactor);
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_Vec2i::Multiplied(int theFactor)
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = ((::Graphic3d_Vec2i*)_NativeInstance)->Multiplied(theFactor);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_Vec2i::cwiseMin(Macad::Occt::Graphic3d_Vec2i^ theVec)
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = ((::Graphic3d_Vec2i*)_NativeInstance)->cwiseMin(*(::Graphic3d_Vec2i*)theVec->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_Vec2i::cwiseMax(Macad::Occt::Graphic3d_Vec2i^ theVec)
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = ((::Graphic3d_Vec2i*)_NativeInstance)->cwiseMax(*(::Graphic3d_Vec2i*)theVec->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_Vec2i::cwiseAbs()
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = ((::Graphic3d_Vec2i*)_NativeInstance)->cwiseAbs();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

int Macad::Occt::Graphic3d_Vec2i::maxComp()
{
    int _result = ((::Graphic3d_Vec2i*)_NativeInstance)->maxComp();
    return _result;
}

int Macad::Occt::Graphic3d_Vec2i::minComp()
{
    int _result = ((::Graphic3d_Vec2i*)_NativeInstance)->minComp();
    return _result;
}

int Macad::Occt::Graphic3d_Vec2i::Dot(Macad::Occt::Graphic3d_Vec2i^ theOther)
{
    int _result = ((::Graphic3d_Vec2i*)_NativeInstance)->Dot(*(::Graphic3d_Vec2i*)theOther->NativeInstance);
    return _result;
}

int Macad::Occt::Graphic3d_Vec2i::Modulus()
{
    int _result = ((::Graphic3d_Vec2i*)_NativeInstance)->Modulus();
    return _result;
}

int Macad::Occt::Graphic3d_Vec2i::SquareModulus()
{
    int _result = ((::Graphic3d_Vec2i*)_NativeInstance)->SquareModulus();
    return _result;
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_Vec2i::DX()
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = ::Graphic3d_Vec2i::DX();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_Vec2i::DY()
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = ::Graphic3d_Vec2i::DY();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

bool Macad::Occt::Graphic3d_Vec2i::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Graphic3d_Vec2i::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Graphic3d_Vec2i^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Vec2u
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Vec2u::Graphic3d_Vec2u(unsigned int theXY)
    : Macad::Occt::BaseClass<::Graphic3d_Vec2u>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec2u(theXY);
}

Macad::Occt::Graphic3d_Vec2u::Graphic3d_Vec2u(unsigned int theX, unsigned int theY)
    : Macad::Occt::BaseClass<::Graphic3d_Vec2u>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec2u(theX, theY);
}

int Macad::Occt::Graphic3d_Vec2u::Length()
{
    int _result = ::Graphic3d_Vec2u::Length();
    return _result;
}

void Macad::Occt::Graphic3d_Vec2u::SetValues(unsigned int theX, unsigned int theY)
{
    ((::Graphic3d_Vec2u*)_NativeInstance)->SetValues(theX, theY);
}

unsigned int Macad::Occt::Graphic3d_Vec2u::x()
{
    unsigned int _result = ((::Graphic3d_Vec2u*)_NativeInstance)->x();
    return _result;
}

unsigned int Macad::Occt::Graphic3d_Vec2u::y()
{
    unsigned int _result = ((::Graphic3d_Vec2u*)_NativeInstance)->y();
    return _result;
}

Macad::Occt::Graphic3d_Vec2u^ Macad::Occt::Graphic3d_Vec2u::xy()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Vec2u^ Macad::Occt::Graphic3d_Vec2u::yx()
{
    throw gcnew System::NotImplementedException();
}

bool Macad::Occt::Graphic3d_Vec2u::IsEqual(Macad::Occt::Graphic3d_Vec2u^ theOther)
{
    bool _result = ((::Graphic3d_Vec2u*)_NativeInstance)->IsEqual(*(::Graphic3d_Vec2u*)theOther->NativeInstance);
    return _result;
}

unsigned int Macad::Occt::Graphic3d_Vec2u::GetData()
{
    throw gcnew System::NotImplementedException();
}

unsigned int Macad::Occt::Graphic3d_Vec2u::ChangeData()
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::Graphic3d_Vec2u::Multiply(unsigned int theFactor)
{
    ((::Graphic3d_Vec2u*)_NativeInstance)->Multiply(theFactor);
}

Macad::Occt::Graphic3d_Vec2u^ Macad::Occt::Graphic3d_Vec2u::Multiplied(unsigned int theFactor)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Vec2u^ Macad::Occt::Graphic3d_Vec2u::cwiseMin(Macad::Occt::Graphic3d_Vec2u^ theVec)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Vec2u^ Macad::Occt::Graphic3d_Vec2u::cwiseMax(Macad::Occt::Graphic3d_Vec2u^ theVec)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Vec2u^ Macad::Occt::Graphic3d_Vec2u::cwiseAbs()
{
    throw gcnew System::NotImplementedException();
}

unsigned int Macad::Occt::Graphic3d_Vec2u::maxComp()
{
    unsigned int _result = ((::Graphic3d_Vec2u*)_NativeInstance)->maxComp();
    return _result;
}

unsigned int Macad::Occt::Graphic3d_Vec2u::minComp()
{
    unsigned int _result = ((::Graphic3d_Vec2u*)_NativeInstance)->minComp();
    return _result;
}

unsigned int Macad::Occt::Graphic3d_Vec2u::Dot(Macad::Occt::Graphic3d_Vec2u^ theOther)
{
    unsigned int _result = ((::Graphic3d_Vec2u*)_NativeInstance)->Dot(*(::Graphic3d_Vec2u*)theOther->NativeInstance);
    return _result;
}

unsigned int Macad::Occt::Graphic3d_Vec2u::Modulus()
{
    unsigned int _result = ((::Graphic3d_Vec2u*)_NativeInstance)->Modulus();
    return _result;
}

unsigned int Macad::Occt::Graphic3d_Vec2u::SquareModulus()
{
    unsigned int _result = ((::Graphic3d_Vec2u*)_NativeInstance)->SquareModulus();
    return _result;
}

Macad::Occt::Graphic3d_Vec2u^ Macad::Occt::Graphic3d_Vec2u::DX()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Vec2u^ Macad::Occt::Graphic3d_Vec2u::DY()
{
    throw gcnew System::NotImplementedException();
}

bool Macad::Occt::Graphic3d_Vec2u::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Graphic3d_Vec2u::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Graphic3d_Vec2u^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Vec2ub
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Vec2ub::Graphic3d_Vec2ub(unsigned char theXY)
    : Macad::Occt::BaseClass<::Graphic3d_Vec2ub>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec2ub(theXY);
}

Macad::Occt::Graphic3d_Vec2ub::Graphic3d_Vec2ub(unsigned char theX, unsigned char theY)
    : Macad::Occt::BaseClass<::Graphic3d_Vec2ub>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec2ub(theX, theY);
}

int Macad::Occt::Graphic3d_Vec2ub::Length()
{
    int _result = ::Graphic3d_Vec2ub::Length();
    return _result;
}

void Macad::Occt::Graphic3d_Vec2ub::SetValues(unsigned char theX, unsigned char theY)
{
    ((::Graphic3d_Vec2ub*)_NativeInstance)->SetValues(theX, theY);
}

unsigned char Macad::Occt::Graphic3d_Vec2ub::x()
{
    unsigned char _result = ((::Graphic3d_Vec2ub*)_NativeInstance)->x();
    return _result;
}

unsigned char Macad::Occt::Graphic3d_Vec2ub::y()
{
    unsigned char _result = ((::Graphic3d_Vec2ub*)_NativeInstance)->y();
    return _result;
}

Macad::Occt::Graphic3d_Vec2ub^ Macad::Occt::Graphic3d_Vec2ub::xy()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Vec2ub^ Macad::Occt::Graphic3d_Vec2ub::yx()
{
    throw gcnew System::NotImplementedException();
}

bool Macad::Occt::Graphic3d_Vec2ub::IsEqual(Macad::Occt::Graphic3d_Vec2ub^ theOther)
{
    bool _result = ((::Graphic3d_Vec2ub*)_NativeInstance)->IsEqual(*(::Graphic3d_Vec2ub*)theOther->NativeInstance);
    return _result;
}

unsigned char Macad::Occt::Graphic3d_Vec2ub::GetData()
{
    throw gcnew System::NotImplementedException();
}

unsigned char Macad::Occt::Graphic3d_Vec2ub::ChangeData()
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::Graphic3d_Vec2ub::Multiply(unsigned char theFactor)
{
    ((::Graphic3d_Vec2ub*)_NativeInstance)->Multiply(theFactor);
}

Macad::Occt::Graphic3d_Vec2ub^ Macad::Occt::Graphic3d_Vec2ub::Multiplied(unsigned char theFactor)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Vec2ub^ Macad::Occt::Graphic3d_Vec2ub::cwiseMin(Macad::Occt::Graphic3d_Vec2ub^ theVec)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Vec2ub^ Macad::Occt::Graphic3d_Vec2ub::cwiseMax(Macad::Occt::Graphic3d_Vec2ub^ theVec)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Vec2ub^ Macad::Occt::Graphic3d_Vec2ub::cwiseAbs()
{
    throw gcnew System::NotImplementedException();
}

unsigned char Macad::Occt::Graphic3d_Vec2ub::maxComp()
{
    unsigned char _result = ((::Graphic3d_Vec2ub*)_NativeInstance)->maxComp();
    return _result;
}

unsigned char Macad::Occt::Graphic3d_Vec2ub::minComp()
{
    unsigned char _result = ((::Graphic3d_Vec2ub*)_NativeInstance)->minComp();
    return _result;
}

unsigned char Macad::Occt::Graphic3d_Vec2ub::Dot(Macad::Occt::Graphic3d_Vec2ub^ theOther)
{
    unsigned char _result = ((::Graphic3d_Vec2ub*)_NativeInstance)->Dot(*(::Graphic3d_Vec2ub*)theOther->NativeInstance);
    return _result;
}

unsigned char Macad::Occt::Graphic3d_Vec2ub::Modulus()
{
    unsigned char _result = ((::Graphic3d_Vec2ub*)_NativeInstance)->Modulus();
    return _result;
}

unsigned char Macad::Occt::Graphic3d_Vec2ub::SquareModulus()
{
    unsigned char _result = ((::Graphic3d_Vec2ub*)_NativeInstance)->SquareModulus();
    return _result;
}

Macad::Occt::Graphic3d_Vec2ub^ Macad::Occt::Graphic3d_Vec2ub::DX()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Vec2ub^ Macad::Occt::Graphic3d_Vec2ub::DY()
{
    throw gcnew System::NotImplementedException();
}

bool Macad::Occt::Graphic3d_Vec2ub::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Graphic3d_Vec2ub::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Graphic3d_Vec2ub^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Vec2b
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Vec2b::Graphic3d_Vec2b(char theXY)
    : Macad::Occt::BaseClass<::Graphic3d_Vec2b>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec2b(theXY);
}

Macad::Occt::Graphic3d_Vec2b::Graphic3d_Vec2b(char theX, char theY)
    : Macad::Occt::BaseClass<::Graphic3d_Vec2b>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec2b(theX, theY);
}

int Macad::Occt::Graphic3d_Vec2b::Length()
{
    int _result = ::Graphic3d_Vec2b::Length();
    return _result;
}

void Macad::Occt::Graphic3d_Vec2b::SetValues(char theX, char theY)
{
    ((::Graphic3d_Vec2b*)_NativeInstance)->SetValues(theX, theY);
}

char Macad::Occt::Graphic3d_Vec2b::x()
{
    char _result = ((::Graphic3d_Vec2b*)_NativeInstance)->x();
    return _result;
}

char Macad::Occt::Graphic3d_Vec2b::y()
{
    char _result = ((::Graphic3d_Vec2b*)_NativeInstance)->y();
    return _result;
}

Macad::Occt::Graphic3d_Vec2b^ Macad::Occt::Graphic3d_Vec2b::xy()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Vec2b^ Macad::Occt::Graphic3d_Vec2b::yx()
{
    throw gcnew System::NotImplementedException();
}

bool Macad::Occt::Graphic3d_Vec2b::IsEqual(Macad::Occt::Graphic3d_Vec2b^ theOther)
{
    bool _result = ((::Graphic3d_Vec2b*)_NativeInstance)->IsEqual(*(::Graphic3d_Vec2b*)theOther->NativeInstance);
    return _result;
}

char Macad::Occt::Graphic3d_Vec2b::GetData()
{
    throw gcnew System::NotImplementedException();
}

char Macad::Occt::Graphic3d_Vec2b::ChangeData()
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::Graphic3d_Vec2b::Multiply(char theFactor)
{
    ((::Graphic3d_Vec2b*)_NativeInstance)->Multiply(theFactor);
}

Macad::Occt::Graphic3d_Vec2b^ Macad::Occt::Graphic3d_Vec2b::Multiplied(char theFactor)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Vec2b^ Macad::Occt::Graphic3d_Vec2b::cwiseMin(Macad::Occt::Graphic3d_Vec2b^ theVec)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Vec2b^ Macad::Occt::Graphic3d_Vec2b::cwiseMax(Macad::Occt::Graphic3d_Vec2b^ theVec)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Vec2b^ Macad::Occt::Graphic3d_Vec2b::cwiseAbs()
{
    throw gcnew System::NotImplementedException();
}

char Macad::Occt::Graphic3d_Vec2b::maxComp()
{
    char _result = ((::Graphic3d_Vec2b*)_NativeInstance)->maxComp();
    return _result;
}

char Macad::Occt::Graphic3d_Vec2b::minComp()
{
    char _result = ((::Graphic3d_Vec2b*)_NativeInstance)->minComp();
    return _result;
}

char Macad::Occt::Graphic3d_Vec2b::Dot(Macad::Occt::Graphic3d_Vec2b^ theOther)
{
    char _result = ((::Graphic3d_Vec2b*)_NativeInstance)->Dot(*(::Graphic3d_Vec2b*)theOther->NativeInstance);
    return _result;
}

char Macad::Occt::Graphic3d_Vec2b::Modulus()
{
    char _result = ((::Graphic3d_Vec2b*)_NativeInstance)->Modulus();
    return _result;
}

char Macad::Occt::Graphic3d_Vec2b::SquareModulus()
{
    char _result = ((::Graphic3d_Vec2b*)_NativeInstance)->SquareModulus();
    return _result;
}

Macad::Occt::Graphic3d_Vec2b^ Macad::Occt::Graphic3d_Vec2b::DX()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Vec2b^ Macad::Occt::Graphic3d_Vec2b::DY()
{
    throw gcnew System::NotImplementedException();
}

bool Macad::Occt::Graphic3d_Vec2b::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Graphic3d_Vec2b::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Graphic3d_Vec2b^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Vec3
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Vec3::Graphic3d_Vec3()
    : Macad::Occt::BaseClass<::Graphic3d_Vec3>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec3();
}

Macad::Occt::Graphic3d_Vec3::Graphic3d_Vec3(float theValue)
    : Macad::Occt::BaseClass<::Graphic3d_Vec3>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec3(theValue);
}

Macad::Occt::Graphic3d_Vec3::Graphic3d_Vec3(float theX, float theY, float theZ)
    : Macad::Occt::BaseClass<::Graphic3d_Vec3>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec3(theX, theY, theZ);
}

Macad::Occt::Graphic3d_Vec3::Graphic3d_Vec3(Macad::Occt::gp_Vec2f^ theVec2, float theZ)
    : Macad::Occt::BaseClass<::Graphic3d_Vec3>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec3(*(::gp_Vec2f*)theVec2->NativeInstance, theZ);
}

Macad::Occt::Graphic3d_Vec3::Graphic3d_Vec3(Macad::Occt::gp_Vec2f^ theVec2)
    : Macad::Occt::BaseClass<::Graphic3d_Vec3>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec3(*(::gp_Vec2f*)theVec2->NativeInstance, 0.0f);
}

int Macad::Occt::Graphic3d_Vec3::Length()
{
    int _result = ::Graphic3d_Vec3::Length();
    return _result;
}

void Macad::Occt::Graphic3d_Vec3::SetValues(float theX, float theY, float theZ)
{
    ((::Graphic3d_Vec3*)_NativeInstance)->SetValues(theX, theY, theZ);
}

float Macad::Occt::Graphic3d_Vec3::x()
{
    float _result = ((::Graphic3d_Vec3*)_NativeInstance)->x();
    return _result;
}

float Macad::Occt::Graphic3d_Vec3::r()
{
    float _result = ((::Graphic3d_Vec3*)_NativeInstance)->r();
    return _result;
}

float Macad::Occt::Graphic3d_Vec3::y()
{
    float _result = ((::Graphic3d_Vec3*)_NativeInstance)->y();
    return _result;
}

float Macad::Occt::Graphic3d_Vec3::g()
{
    float _result = ((::Graphic3d_Vec3*)_NativeInstance)->g();
    return _result;
}

float Macad::Occt::Graphic3d_Vec3::z()
{
    float _result = ((::Graphic3d_Vec3*)_NativeInstance)->z();
    return _result;
}

float Macad::Occt::Graphic3d_Vec3::b()
{
    float _result = ((::Graphic3d_Vec3*)_NativeInstance)->b();
    return _result;
}

Macad::Occt::gp_Vec2f^ Macad::Occt::Graphic3d_Vec3::xy()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::gp_Vec2f^ Macad::Occt::Graphic3d_Vec3::yx()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::gp_Vec2f^ Macad::Occt::Graphic3d_Vec3::xz()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::gp_Vec2f^ Macad::Occt::Graphic3d_Vec3::zx()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::gp_Vec2f^ Macad::Occt::Graphic3d_Vec3::yz()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::gp_Vec2f^ Macad::Occt::Graphic3d_Vec3::zy()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Vec3^ Macad::Occt::Graphic3d_Vec3::xyz()
{
    ::Graphic3d_Vec3* _result = new ::Graphic3d_Vec3();
    *_result = (::Graphic3d_Vec3)((::Graphic3d_Vec3*)_NativeInstance)->xyz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3(_result);
}

Macad::Occt::Graphic3d_Vec3^ Macad::Occt::Graphic3d_Vec3::xzy()
{
    ::Graphic3d_Vec3* _result = new ::Graphic3d_Vec3();
    *_result = (::Graphic3d_Vec3)((::Graphic3d_Vec3*)_NativeInstance)->xzy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3(_result);
}

Macad::Occt::Graphic3d_Vec3^ Macad::Occt::Graphic3d_Vec3::yxz()
{
    ::Graphic3d_Vec3* _result = new ::Graphic3d_Vec3();
    *_result = (::Graphic3d_Vec3)((::Graphic3d_Vec3*)_NativeInstance)->yxz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3(_result);
}

Macad::Occt::Graphic3d_Vec3^ Macad::Occt::Graphic3d_Vec3::yzx()
{
    ::Graphic3d_Vec3* _result = new ::Graphic3d_Vec3();
    *_result = (::Graphic3d_Vec3)((::Graphic3d_Vec3*)_NativeInstance)->yzx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3(_result);
}

Macad::Occt::Graphic3d_Vec3^ Macad::Occt::Graphic3d_Vec3::zyx()
{
    ::Graphic3d_Vec3* _result = new ::Graphic3d_Vec3();
    *_result = (::Graphic3d_Vec3)((::Graphic3d_Vec3*)_NativeInstance)->zyx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3(_result);
}

Macad::Occt::Graphic3d_Vec3^ Macad::Occt::Graphic3d_Vec3::zxy()
{
    ::Graphic3d_Vec3* _result = new ::Graphic3d_Vec3();
    *_result = (::Graphic3d_Vec3)((::Graphic3d_Vec3*)_NativeInstance)->zxy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3(_result);
}

bool Macad::Occt::Graphic3d_Vec3::IsEqual(Macad::Occt::Graphic3d_Vec3^ theOther)
{
    bool _result = ((::Graphic3d_Vec3*)_NativeInstance)->IsEqual(*(::Graphic3d_Vec3*)theOther->NativeInstance);
    return _result;
}

float Macad::Occt::Graphic3d_Vec3::GetData()
{
    throw gcnew System::NotImplementedException();
}

float Macad::Occt::Graphic3d_Vec3::ChangeData()
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::Graphic3d_Vec3::Multiply(float theFactor)
{
    ((::Graphic3d_Vec3*)_NativeInstance)->Multiply(theFactor);
}

Macad::Occt::Graphic3d_Vec3^ Macad::Occt::Graphic3d_Vec3::Multiplied(float theFactor)
{
    ::Graphic3d_Vec3* _result = new ::Graphic3d_Vec3();
    *_result = ((::Graphic3d_Vec3*)_NativeInstance)->Multiplied(theFactor);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3(_result);
}

Macad::Occt::Graphic3d_Vec3^ Macad::Occt::Graphic3d_Vec3::cwiseMin(Macad::Occt::Graphic3d_Vec3^ theVec)
{
    ::Graphic3d_Vec3* _result = new ::Graphic3d_Vec3();
    *_result = ((::Graphic3d_Vec3*)_NativeInstance)->cwiseMin(*(::Graphic3d_Vec3*)theVec->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3(_result);
}

Macad::Occt::Graphic3d_Vec3^ Macad::Occt::Graphic3d_Vec3::cwiseMax(Macad::Occt::Graphic3d_Vec3^ theVec)
{
    ::Graphic3d_Vec3* _result = new ::Graphic3d_Vec3();
    *_result = ((::Graphic3d_Vec3*)_NativeInstance)->cwiseMax(*(::Graphic3d_Vec3*)theVec->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3(_result);
}

Macad::Occt::Graphic3d_Vec3^ Macad::Occt::Graphic3d_Vec3::cwiseAbs()
{
    ::Graphic3d_Vec3* _result = new ::Graphic3d_Vec3();
    *_result = ((::Graphic3d_Vec3*)_NativeInstance)->cwiseAbs();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3(_result);
}

float Macad::Occt::Graphic3d_Vec3::maxComp()
{
    float _result = ((::Graphic3d_Vec3*)_NativeInstance)->maxComp();
    return _result;
}

float Macad::Occt::Graphic3d_Vec3::minComp()
{
    float _result = ((::Graphic3d_Vec3*)_NativeInstance)->minComp();
    return _result;
}

float Macad::Occt::Graphic3d_Vec3::Dot(Macad::Occt::Graphic3d_Vec3^ theOther)
{
    float _result = ((::Graphic3d_Vec3*)_NativeInstance)->Dot(*(::Graphic3d_Vec3*)theOther->NativeInstance);
    return _result;
}

float Macad::Occt::Graphic3d_Vec3::Modulus()
{
    float _result = ((::Graphic3d_Vec3*)_NativeInstance)->Modulus();
    return _result;
}

float Macad::Occt::Graphic3d_Vec3::SquareModulus()
{
    float _result = ((::Graphic3d_Vec3*)_NativeInstance)->SquareModulus();
    return _result;
}

void Macad::Occt::Graphic3d_Vec3::Normalize()
{
    ((::Graphic3d_Vec3*)_NativeInstance)->Normalize();
}

Macad::Occt::Graphic3d_Vec3^ Macad::Occt::Graphic3d_Vec3::Normalized()
{
    ::Graphic3d_Vec3* _result = new ::Graphic3d_Vec3();
    *_result = ((::Graphic3d_Vec3*)_NativeInstance)->Normalized();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3(_result);
}

Macad::Occt::Graphic3d_Vec3^ Macad::Occt::Graphic3d_Vec3::Cross(Macad::Occt::Graphic3d_Vec3^ theVec1, Macad::Occt::Graphic3d_Vec3^ theVec2)
{
    ::Graphic3d_Vec3* _result = new ::Graphic3d_Vec3();
    *_result = ::Graphic3d_Vec3::Cross(*(::Graphic3d_Vec3*)theVec1->NativeInstance, *(::Graphic3d_Vec3*)theVec2->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3(_result);
}

Macad::Occt::Graphic3d_Vec3^ Macad::Occt::Graphic3d_Vec3::GetLERP(Macad::Occt::Graphic3d_Vec3^ theFrom, Macad::Occt::Graphic3d_Vec3^ theTo, float theT)
{
    ::Graphic3d_Vec3* _result = new ::Graphic3d_Vec3();
    *_result = ::Graphic3d_Vec3::GetLERP(*(::Graphic3d_Vec3*)theFrom->NativeInstance, *(::Graphic3d_Vec3*)theTo->NativeInstance, theT);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3(_result);
}

Macad::Occt::Graphic3d_Vec3^ Macad::Occt::Graphic3d_Vec3::DX()
{
    ::Graphic3d_Vec3* _result = new ::Graphic3d_Vec3();
    *_result = ::Graphic3d_Vec3::DX();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3(_result);
}

Macad::Occt::Graphic3d_Vec3^ Macad::Occt::Graphic3d_Vec3::DY()
{
    ::Graphic3d_Vec3* _result = new ::Graphic3d_Vec3();
    *_result = ::Graphic3d_Vec3::DY();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3(_result);
}

Macad::Occt::Graphic3d_Vec3^ Macad::Occt::Graphic3d_Vec3::DZ()
{
    ::Graphic3d_Vec3* _result = new ::Graphic3d_Vec3();
    *_result = ::Graphic3d_Vec3::DZ();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3(_result);
}

bool Macad::Occt::Graphic3d_Vec3::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Graphic3d_Vec3::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Graphic3d_Vec3^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Vec3d
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Vec3d::Graphic3d_Vec3d()
    : Macad::Occt::BaseClass<::Graphic3d_Vec3d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec3d();
}

Macad::Occt::Graphic3d_Vec3d::Graphic3d_Vec3d(double theValue)
    : Macad::Occt::BaseClass<::Graphic3d_Vec3d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec3d(theValue);
}

Macad::Occt::Graphic3d_Vec3d::Graphic3d_Vec3d(double theX, double theY, double theZ)
    : Macad::Occt::BaseClass<::Graphic3d_Vec3d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec3d(theX, theY, theZ);
}

Macad::Occt::Graphic3d_Vec3d::Graphic3d_Vec3d(Macad::Occt::Graphic3d_Vec2d^ theVec2, double theZ)
    : Macad::Occt::BaseClass<::Graphic3d_Vec3d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec3d(*(::Graphic3d_Vec2d*)theVec2->NativeInstance, theZ);
}

Macad::Occt::Graphic3d_Vec3d::Graphic3d_Vec3d(Macad::Occt::Graphic3d_Vec2d^ theVec2)
    : Macad::Occt::BaseClass<::Graphic3d_Vec3d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec3d(*(::Graphic3d_Vec2d*)theVec2->NativeInstance, 0.0);
}

int Macad::Occt::Graphic3d_Vec3d::Length()
{
    int _result = ::Graphic3d_Vec3d::Length();
    return _result;
}

void Macad::Occt::Graphic3d_Vec3d::SetValues(double theX, double theY, double theZ)
{
    ((::Graphic3d_Vec3d*)_NativeInstance)->SetValues(theX, theY, theZ);
}

double Macad::Occt::Graphic3d_Vec3d::x()
{
    double _result = ((::Graphic3d_Vec3d*)_NativeInstance)->x();
    return _result;
}

double Macad::Occt::Graphic3d_Vec3d::r()
{
    double _result = ((::Graphic3d_Vec3d*)_NativeInstance)->r();
    return _result;
}

double Macad::Occt::Graphic3d_Vec3d::y()
{
    double _result = ((::Graphic3d_Vec3d*)_NativeInstance)->y();
    return _result;
}

double Macad::Occt::Graphic3d_Vec3d::g()
{
    double _result = ((::Graphic3d_Vec3d*)_NativeInstance)->g();
    return _result;
}

double Macad::Occt::Graphic3d_Vec3d::z()
{
    double _result = ((::Graphic3d_Vec3d*)_NativeInstance)->z();
    return _result;
}

double Macad::Occt::Graphic3d_Vec3d::b()
{
    double _result = ((::Graphic3d_Vec3d*)_NativeInstance)->b();
    return _result;
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_Vec3d::xy()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::Graphic3d_Vec3d*)_NativeInstance)->xy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_Vec3d::yx()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::Graphic3d_Vec3d*)_NativeInstance)->yx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_Vec3d::xz()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::Graphic3d_Vec3d*)_NativeInstance)->xz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_Vec3d::zx()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::Graphic3d_Vec3d*)_NativeInstance)->zx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_Vec3d::yz()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::Graphic3d_Vec3d*)_NativeInstance)->yz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_Vec3d::zy()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::Graphic3d_Vec3d*)_NativeInstance)->zy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec3d::xyz()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec3d*)_NativeInstance)->xyz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec3d::xzy()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec3d*)_NativeInstance)->xzy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec3d::yxz()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec3d*)_NativeInstance)->yxz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec3d::yzx()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec3d*)_NativeInstance)->yzx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec3d::zyx()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec3d*)_NativeInstance)->zyx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec3d::zxy()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec3d*)_NativeInstance)->zxy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

bool Macad::Occt::Graphic3d_Vec3d::IsEqual(Macad::Occt::Graphic3d_Vec3d^ theOther)
{
    bool _result = ((::Graphic3d_Vec3d*)_NativeInstance)->IsEqual(*(::Graphic3d_Vec3d*)theOther->NativeInstance);
    return _result;
}

double Macad::Occt::Graphic3d_Vec3d::GetData()
{
    throw gcnew System::NotImplementedException();
}

double Macad::Occt::Graphic3d_Vec3d::ChangeData()
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::Graphic3d_Vec3d::Multiply(double theFactor)
{
    ((::Graphic3d_Vec3d*)_NativeInstance)->Multiply(theFactor);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec3d::Multiplied(double theFactor)
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = ((::Graphic3d_Vec3d*)_NativeInstance)->Multiplied(theFactor);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec3d::cwiseMin(Macad::Occt::Graphic3d_Vec3d^ theVec)
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = ((::Graphic3d_Vec3d*)_NativeInstance)->cwiseMin(*(::Graphic3d_Vec3d*)theVec->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec3d::cwiseMax(Macad::Occt::Graphic3d_Vec3d^ theVec)
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = ((::Graphic3d_Vec3d*)_NativeInstance)->cwiseMax(*(::Graphic3d_Vec3d*)theVec->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec3d::cwiseAbs()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = ((::Graphic3d_Vec3d*)_NativeInstance)->cwiseAbs();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

double Macad::Occt::Graphic3d_Vec3d::maxComp()
{
    double _result = ((::Graphic3d_Vec3d*)_NativeInstance)->maxComp();
    return _result;
}

double Macad::Occt::Graphic3d_Vec3d::minComp()
{
    double _result = ((::Graphic3d_Vec3d*)_NativeInstance)->minComp();
    return _result;
}

double Macad::Occt::Graphic3d_Vec3d::Dot(Macad::Occt::Graphic3d_Vec3d^ theOther)
{
    double _result = ((::Graphic3d_Vec3d*)_NativeInstance)->Dot(*(::Graphic3d_Vec3d*)theOther->NativeInstance);
    return _result;
}

double Macad::Occt::Graphic3d_Vec3d::Modulus()
{
    double _result = ((::Graphic3d_Vec3d*)_NativeInstance)->Modulus();
    return _result;
}

double Macad::Occt::Graphic3d_Vec3d::SquareModulus()
{
    double _result = ((::Graphic3d_Vec3d*)_NativeInstance)->SquareModulus();
    return _result;
}

void Macad::Occt::Graphic3d_Vec3d::Normalize()
{
    ((::Graphic3d_Vec3d*)_NativeInstance)->Normalize();
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec3d::Normalized()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = ((::Graphic3d_Vec3d*)_NativeInstance)->Normalized();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec3d::Cross(Macad::Occt::Graphic3d_Vec3d^ theVec1, Macad::Occt::Graphic3d_Vec3d^ theVec2)
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = ::Graphic3d_Vec3d::Cross(*(::Graphic3d_Vec3d*)theVec1->NativeInstance, *(::Graphic3d_Vec3d*)theVec2->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec3d::GetLERP(Macad::Occt::Graphic3d_Vec3d^ theFrom, Macad::Occt::Graphic3d_Vec3d^ theTo, double theT)
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = ::Graphic3d_Vec3d::GetLERP(*(::Graphic3d_Vec3d*)theFrom->NativeInstance, *(::Graphic3d_Vec3d*)theTo->NativeInstance, theT);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec3d::DX()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = ::Graphic3d_Vec3d::DX();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec3d::DY()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = ::Graphic3d_Vec3d::DY();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec3d::DZ()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = ::Graphic3d_Vec3d::DZ();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

bool Macad::Occt::Graphic3d_Vec3d::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Graphic3d_Vec3d::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Graphic3d_Vec3d^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Vec3i
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Vec3i::Graphic3d_Vec3i()
    : Macad::Occt::BaseClass<::Graphic3d_Vec3i>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec3i();
}

Macad::Occt::Graphic3d_Vec3i::Graphic3d_Vec3i(int theValue)
    : Macad::Occt::BaseClass<::Graphic3d_Vec3i>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec3i(theValue);
}

Macad::Occt::Graphic3d_Vec3i::Graphic3d_Vec3i(int theX, int theY, int theZ)
    : Macad::Occt::BaseClass<::Graphic3d_Vec3i>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec3i(theX, theY, theZ);
}

Macad::Occt::Graphic3d_Vec3i::Graphic3d_Vec3i(Macad::Occt::Graphic3d_Vec2i^ theVec2, int theZ)
    : Macad::Occt::BaseClass<::Graphic3d_Vec3i>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec3i(*(::Graphic3d_Vec2i*)theVec2->NativeInstance, theZ);
}

Macad::Occt::Graphic3d_Vec3i::Graphic3d_Vec3i(Macad::Occt::Graphic3d_Vec2i^ theVec2)
    : Macad::Occt::BaseClass<::Graphic3d_Vec3i>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec3i(*(::Graphic3d_Vec2i*)theVec2->NativeInstance, 0);
}

Macad::Occt::Graphic3d_Vec3i::Graphic3d_Vec3i(Macad::Occt::gp_Vec3f^ theOtherVec3)
    : Macad::Occt::BaseClass<::Graphic3d_Vec3i>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec3i(*(::gp_Vec3f*)theOtherVec3->NativeInstance);
}

int Macad::Occt::Graphic3d_Vec3i::Length()
{
    int _result = ::Graphic3d_Vec3i::Length();
    return _result;
}

void Macad::Occt::Graphic3d_Vec3i::SetValues(int theX, int theY, int theZ)
{
    ((::Graphic3d_Vec3i*)_NativeInstance)->SetValues(theX, theY, theZ);
}

int Macad::Occt::Graphic3d_Vec3i::x()
{
    int _result = ((::Graphic3d_Vec3i*)_NativeInstance)->x();
    return _result;
}

int Macad::Occt::Graphic3d_Vec3i::r()
{
    int _result = ((::Graphic3d_Vec3i*)_NativeInstance)->r();
    return _result;
}

int Macad::Occt::Graphic3d_Vec3i::y()
{
    int _result = ((::Graphic3d_Vec3i*)_NativeInstance)->y();
    return _result;
}

int Macad::Occt::Graphic3d_Vec3i::g()
{
    int _result = ((::Graphic3d_Vec3i*)_NativeInstance)->g();
    return _result;
}

int Macad::Occt::Graphic3d_Vec3i::z()
{
    int _result = ((::Graphic3d_Vec3i*)_NativeInstance)->z();
    return _result;
}

int Macad::Occt::Graphic3d_Vec3i::b()
{
    int _result = ((::Graphic3d_Vec3i*)_NativeInstance)->b();
    return _result;
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_Vec3i::xy()
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = (::Graphic3d_Vec2i)((::Graphic3d_Vec3i*)_NativeInstance)->xy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_Vec3i::yx()
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = (::Graphic3d_Vec2i)((::Graphic3d_Vec3i*)_NativeInstance)->yx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_Vec3i::xz()
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = (::Graphic3d_Vec2i)((::Graphic3d_Vec3i*)_NativeInstance)->xz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_Vec3i::zx()
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = (::Graphic3d_Vec2i)((::Graphic3d_Vec3i*)_NativeInstance)->zx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_Vec3i::yz()
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = (::Graphic3d_Vec2i)((::Graphic3d_Vec3i*)_NativeInstance)->yz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_Vec3i::zy()
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = (::Graphic3d_Vec2i)((::Graphic3d_Vec3i*)_NativeInstance)->zy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec3i::xyz()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec3i*)_NativeInstance)->xyz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec3i::xzy()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec3i*)_NativeInstance)->xzy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec3i::yxz()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec3i*)_NativeInstance)->yxz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec3i::yzx()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec3i*)_NativeInstance)->yzx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec3i::zyx()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec3i*)_NativeInstance)->zyx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec3i::zxy()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec3i*)_NativeInstance)->zxy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

bool Macad::Occt::Graphic3d_Vec3i::IsEqual(Macad::Occt::Graphic3d_Vec3i^ theOther)
{
    bool _result = ((::Graphic3d_Vec3i*)_NativeInstance)->IsEqual(*(::Graphic3d_Vec3i*)theOther->NativeInstance);
    return _result;
}

int Macad::Occt::Graphic3d_Vec3i::GetData()
{
    throw gcnew System::NotImplementedException();
}

int Macad::Occt::Graphic3d_Vec3i::ChangeData()
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::Graphic3d_Vec3i::Multiply(int theFactor)
{
    ((::Graphic3d_Vec3i*)_NativeInstance)->Multiply(theFactor);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec3i::Multiplied(int theFactor)
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = ((::Graphic3d_Vec3i*)_NativeInstance)->Multiplied(theFactor);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec3i::cwiseMin(Macad::Occt::Graphic3d_Vec3i^ theVec)
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = ((::Graphic3d_Vec3i*)_NativeInstance)->cwiseMin(*(::Graphic3d_Vec3i*)theVec->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec3i::cwiseMax(Macad::Occt::Graphic3d_Vec3i^ theVec)
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = ((::Graphic3d_Vec3i*)_NativeInstance)->cwiseMax(*(::Graphic3d_Vec3i*)theVec->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec3i::cwiseAbs()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = ((::Graphic3d_Vec3i*)_NativeInstance)->cwiseAbs();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

int Macad::Occt::Graphic3d_Vec3i::maxComp()
{
    int _result = ((::Graphic3d_Vec3i*)_NativeInstance)->maxComp();
    return _result;
}

int Macad::Occt::Graphic3d_Vec3i::minComp()
{
    int _result = ((::Graphic3d_Vec3i*)_NativeInstance)->minComp();
    return _result;
}

int Macad::Occt::Graphic3d_Vec3i::Dot(Macad::Occt::Graphic3d_Vec3i^ theOther)
{
    int _result = ((::Graphic3d_Vec3i*)_NativeInstance)->Dot(*(::Graphic3d_Vec3i*)theOther->NativeInstance);
    return _result;
}

int Macad::Occt::Graphic3d_Vec3i::Modulus()
{
    int _result = ((::Graphic3d_Vec3i*)_NativeInstance)->Modulus();
    return _result;
}

int Macad::Occt::Graphic3d_Vec3i::SquareModulus()
{
    int _result = ((::Graphic3d_Vec3i*)_NativeInstance)->SquareModulus();
    return _result;
}

void Macad::Occt::Graphic3d_Vec3i::Normalize()
{
    ((::Graphic3d_Vec3i*)_NativeInstance)->Normalize();
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec3i::Normalized()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = ((::Graphic3d_Vec3i*)_NativeInstance)->Normalized();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec3i::Cross(Macad::Occt::Graphic3d_Vec3i^ theVec1, Macad::Occt::Graphic3d_Vec3i^ theVec2)
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = ::Graphic3d_Vec3i::Cross(*(::Graphic3d_Vec3i*)theVec1->NativeInstance, *(::Graphic3d_Vec3i*)theVec2->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec3i::GetLERP(Macad::Occt::Graphic3d_Vec3i^ theFrom, Macad::Occt::Graphic3d_Vec3i^ theTo, int theT)
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = ::Graphic3d_Vec3i::GetLERP(*(::Graphic3d_Vec3i*)theFrom->NativeInstance, *(::Graphic3d_Vec3i*)theTo->NativeInstance, theT);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec3i::DX()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = ::Graphic3d_Vec3i::DX();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec3i::DY()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = ::Graphic3d_Vec3i::DY();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec3i::DZ()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = ::Graphic3d_Vec3i::DZ();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

bool Macad::Occt::Graphic3d_Vec3i::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Graphic3d_Vec3i::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Graphic3d_Vec3i^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Vec4
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Vec4::Graphic3d_Vec4()
    : Macad::Occt::BaseClass<::Graphic3d_Vec4>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec4();
}

Macad::Occt::Graphic3d_Vec4::Graphic3d_Vec4(float theValue)
    : Macad::Occt::BaseClass<::Graphic3d_Vec4>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec4(theValue);
}

Macad::Occt::Graphic3d_Vec4::Graphic3d_Vec4(float theX, float theY, float theZ, float theW)
    : Macad::Occt::BaseClass<::Graphic3d_Vec4>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec4(theX, theY, theZ, theW);
}

Macad::Occt::Graphic3d_Vec4::Graphic3d_Vec4(Macad::Occt::gp_Vec2f^ theVec2)
    : Macad::Occt::BaseClass<::Graphic3d_Vec4>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec4(*(::gp_Vec2f*)theVec2->NativeInstance);
}

Macad::Occt::Graphic3d_Vec4::Graphic3d_Vec4(Macad::Occt::gp_Vec3f^ theVec3, float theW)
    : Macad::Occt::BaseClass<::Graphic3d_Vec4>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec4(*(::gp_Vec3f*)theVec3->NativeInstance, theW);
}

Macad::Occt::Graphic3d_Vec4::Graphic3d_Vec4(Macad::Occt::gp_Vec3f^ theVec3)
    : Macad::Occt::BaseClass<::Graphic3d_Vec4>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec4(*(::gp_Vec3f*)theVec3->NativeInstance, 0.0f);
}

int Macad::Occt::Graphic3d_Vec4::Length()
{
    int _result = ::Graphic3d_Vec4::Length();
    return _result;
}

void Macad::Occt::Graphic3d_Vec4::SetValues(float theX, float theY, float theZ, float theW)
{
    ((::Graphic3d_Vec4*)_NativeInstance)->SetValues(theX, theY, theZ, theW);
}

float Macad::Occt::Graphic3d_Vec4::x()
{
    float _result = ((::Graphic3d_Vec4*)_NativeInstance)->x();
    return _result;
}

float Macad::Occt::Graphic3d_Vec4::r()
{
    float _result = ((::Graphic3d_Vec4*)_NativeInstance)->r();
    return _result;
}

float Macad::Occt::Graphic3d_Vec4::y()
{
    float _result = ((::Graphic3d_Vec4*)_NativeInstance)->y();
    return _result;
}

float Macad::Occt::Graphic3d_Vec4::g()
{
    float _result = ((::Graphic3d_Vec4*)_NativeInstance)->g();
    return _result;
}

float Macad::Occt::Graphic3d_Vec4::z()
{
    float _result = ((::Graphic3d_Vec4*)_NativeInstance)->z();
    return _result;
}

float Macad::Occt::Graphic3d_Vec4::b()
{
    float _result = ((::Graphic3d_Vec4*)_NativeInstance)->b();
    return _result;
}

float Macad::Occt::Graphic3d_Vec4::w()
{
    float _result = ((::Graphic3d_Vec4*)_NativeInstance)->w();
    return _result;
}

float Macad::Occt::Graphic3d_Vec4::a()
{
    float _result = ((::Graphic3d_Vec4*)_NativeInstance)->a();
    return _result;
}

Macad::Occt::gp_Vec2f^ Macad::Occt::Graphic3d_Vec4::xy()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::gp_Vec2f^ Macad::Occt::Graphic3d_Vec4::yx()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::gp_Vec2f^ Macad::Occt::Graphic3d_Vec4::xz()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::gp_Vec2f^ Macad::Occt::Graphic3d_Vec4::zx()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::gp_Vec2f^ Macad::Occt::Graphic3d_Vec4::xw()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::gp_Vec2f^ Macad::Occt::Graphic3d_Vec4::wx()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::gp_Vec2f^ Macad::Occt::Graphic3d_Vec4::yz()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::gp_Vec2f^ Macad::Occt::Graphic3d_Vec4::zy()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::gp_Vec2f^ Macad::Occt::Graphic3d_Vec4::yw()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::gp_Vec2f^ Macad::Occt::Graphic3d_Vec4::wy()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::gp_Vec2f^ Macad::Occt::Graphic3d_Vec4::zw()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::gp_Vec2f^ Macad::Occt::Graphic3d_Vec4::wz()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Graphic3d_Vec4::xyz()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::Graphic3d_Vec4*)_NativeInstance)->xyz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Graphic3d_Vec4::xzy()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::Graphic3d_Vec4*)_NativeInstance)->xzy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Graphic3d_Vec4::yxz()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::Graphic3d_Vec4*)_NativeInstance)->yxz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Graphic3d_Vec4::yzx()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::Graphic3d_Vec4*)_NativeInstance)->yzx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Graphic3d_Vec4::zyx()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::Graphic3d_Vec4*)_NativeInstance)->zyx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Graphic3d_Vec4::zxy()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::Graphic3d_Vec4*)_NativeInstance)->zxy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Graphic3d_Vec4::xyw()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::Graphic3d_Vec4*)_NativeInstance)->xyw();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Graphic3d_Vec4::xwy()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::Graphic3d_Vec4*)_NativeInstance)->xwy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Graphic3d_Vec4::yxw()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::Graphic3d_Vec4*)_NativeInstance)->yxw();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Graphic3d_Vec4::ywx()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::Graphic3d_Vec4*)_NativeInstance)->ywx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Graphic3d_Vec4::wyx()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::Graphic3d_Vec4*)_NativeInstance)->wyx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Graphic3d_Vec4::wxy()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::Graphic3d_Vec4*)_NativeInstance)->wxy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Graphic3d_Vec4::xzw()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::Graphic3d_Vec4*)_NativeInstance)->xzw();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Graphic3d_Vec4::xwz()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::Graphic3d_Vec4*)_NativeInstance)->xwz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Graphic3d_Vec4::zxw()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::Graphic3d_Vec4*)_NativeInstance)->zxw();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Graphic3d_Vec4::zwx()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::Graphic3d_Vec4*)_NativeInstance)->zwx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Graphic3d_Vec4::wzx()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::Graphic3d_Vec4*)_NativeInstance)->wzx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Graphic3d_Vec4::wxz()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::Graphic3d_Vec4*)_NativeInstance)->wxz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Graphic3d_Vec4::yzw()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::Graphic3d_Vec4*)_NativeInstance)->yzw();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Graphic3d_Vec4::ywz()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::Graphic3d_Vec4*)_NativeInstance)->ywz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Graphic3d_Vec4::zyw()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::Graphic3d_Vec4*)_NativeInstance)->zyw();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Graphic3d_Vec4::zwy()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::Graphic3d_Vec4*)_NativeInstance)->zwy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Graphic3d_Vec4::wzy()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::Graphic3d_Vec4*)_NativeInstance)->wzy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Graphic3d_Vec4::wyz()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::Graphic3d_Vec4*)_NativeInstance)->wyz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Graphic3d_Vec4::rgb()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::Graphic3d_Vec4*)_NativeInstance)->rgb();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Graphic3d_Vec4::rbg()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::Graphic3d_Vec4*)_NativeInstance)->rbg();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Graphic3d_Vec4::grb()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::Graphic3d_Vec4*)_NativeInstance)->grb();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Graphic3d_Vec4::gbr()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::Graphic3d_Vec4*)_NativeInstance)->gbr();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Graphic3d_Vec4::bgr()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::Graphic3d_Vec4*)_NativeInstance)->bgr();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::Graphic3d_Vec4::brg()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::Graphic3d_Vec4*)_NativeInstance)->brg();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

bool Macad::Occt::Graphic3d_Vec4::IsEqual(Macad::Occt::Graphic3d_Vec4^ theOther)
{
    bool _result = ((::Graphic3d_Vec4*)_NativeInstance)->IsEqual(*(::Graphic3d_Vec4*)theOther->NativeInstance);
    return _result;
}

float Macad::Occt::Graphic3d_Vec4::GetData()
{
    throw gcnew System::NotImplementedException();
}

float Macad::Occt::Graphic3d_Vec4::ChangeData()
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::Graphic3d_Vec4::Multiply(float theFactor)
{
    ((::Graphic3d_Vec4*)_NativeInstance)->Multiply(theFactor);
}

Macad::Occt::Graphic3d_Vec4^ Macad::Occt::Graphic3d_Vec4::Multiplied(float theFactor)
{
    ::Graphic3d_Vec4* _result = new ::Graphic3d_Vec4();
    *_result = ((::Graphic3d_Vec4*)_NativeInstance)->Multiplied(theFactor);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4(_result);
}

Macad::Occt::Graphic3d_Vec4^ Macad::Occt::Graphic3d_Vec4::cwiseMin(Macad::Occt::Graphic3d_Vec4^ theVec)
{
    ::Graphic3d_Vec4* _result = new ::Graphic3d_Vec4();
    *_result = ((::Graphic3d_Vec4*)_NativeInstance)->cwiseMin(*(::Graphic3d_Vec4*)theVec->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4(_result);
}

Macad::Occt::Graphic3d_Vec4^ Macad::Occt::Graphic3d_Vec4::cwiseMax(Macad::Occt::Graphic3d_Vec4^ theVec)
{
    ::Graphic3d_Vec4* _result = new ::Graphic3d_Vec4();
    *_result = ((::Graphic3d_Vec4*)_NativeInstance)->cwiseMax(*(::Graphic3d_Vec4*)theVec->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4(_result);
}

Macad::Occt::Graphic3d_Vec4^ Macad::Occt::Graphic3d_Vec4::cwiseAbs()
{
    ::Graphic3d_Vec4* _result = new ::Graphic3d_Vec4();
    *_result = ((::Graphic3d_Vec4*)_NativeInstance)->cwiseAbs();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4(_result);
}

float Macad::Occt::Graphic3d_Vec4::maxComp()
{
    float _result = ((::Graphic3d_Vec4*)_NativeInstance)->maxComp();
    return _result;
}

float Macad::Occt::Graphic3d_Vec4::minComp()
{
    float _result = ((::Graphic3d_Vec4*)_NativeInstance)->minComp();
    return _result;
}

float Macad::Occt::Graphic3d_Vec4::Dot(Macad::Occt::Graphic3d_Vec4^ theOther)
{
    float _result = ((::Graphic3d_Vec4*)_NativeInstance)->Dot(*(::Graphic3d_Vec4*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::Graphic3d_Vec4::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Graphic3d_Vec4::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Graphic3d_Vec4^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Vec4d
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Vec4d::Graphic3d_Vec4d()
    : Macad::Occt::BaseClass<::Graphic3d_Vec4d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec4d();
}

Macad::Occt::Graphic3d_Vec4d::Graphic3d_Vec4d(double theValue)
    : Macad::Occt::BaseClass<::Graphic3d_Vec4d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec4d(theValue);
}

Macad::Occt::Graphic3d_Vec4d::Graphic3d_Vec4d(double theX, double theY, double theZ, double theW)
    : Macad::Occt::BaseClass<::Graphic3d_Vec4d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec4d(theX, theY, theZ, theW);
}

Macad::Occt::Graphic3d_Vec4d::Graphic3d_Vec4d(Macad::Occt::Graphic3d_Vec2d^ theVec2)
    : Macad::Occt::BaseClass<::Graphic3d_Vec4d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec4d(*(::Graphic3d_Vec2d*)theVec2->NativeInstance);
}

Macad::Occt::Graphic3d_Vec4d::Graphic3d_Vec4d(Macad::Occt::Graphic3d_Vec3d^ theVec3, double theW)
    : Macad::Occt::BaseClass<::Graphic3d_Vec4d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec4d(*(::Graphic3d_Vec3d*)theVec3->NativeInstance, theW);
}

Macad::Occt::Graphic3d_Vec4d::Graphic3d_Vec4d(Macad::Occt::Graphic3d_Vec3d^ theVec3)
    : Macad::Occt::BaseClass<::Graphic3d_Vec4d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec4d(*(::Graphic3d_Vec3d*)theVec3->NativeInstance, 0.0);
}

int Macad::Occt::Graphic3d_Vec4d::Length()
{
    int _result = ::Graphic3d_Vec4d::Length();
    return _result;
}

void Macad::Occt::Graphic3d_Vec4d::SetValues(double theX, double theY, double theZ, double theW)
{
    ((::Graphic3d_Vec4d*)_NativeInstance)->SetValues(theX, theY, theZ, theW);
}

double Macad::Occt::Graphic3d_Vec4d::x()
{
    double _result = ((::Graphic3d_Vec4d*)_NativeInstance)->x();
    return _result;
}

double Macad::Occt::Graphic3d_Vec4d::r()
{
    double _result = ((::Graphic3d_Vec4d*)_NativeInstance)->r();
    return _result;
}

double Macad::Occt::Graphic3d_Vec4d::y()
{
    double _result = ((::Graphic3d_Vec4d*)_NativeInstance)->y();
    return _result;
}

double Macad::Occt::Graphic3d_Vec4d::g()
{
    double _result = ((::Graphic3d_Vec4d*)_NativeInstance)->g();
    return _result;
}

double Macad::Occt::Graphic3d_Vec4d::z()
{
    double _result = ((::Graphic3d_Vec4d*)_NativeInstance)->z();
    return _result;
}

double Macad::Occt::Graphic3d_Vec4d::b()
{
    double _result = ((::Graphic3d_Vec4d*)_NativeInstance)->b();
    return _result;
}

double Macad::Occt::Graphic3d_Vec4d::w()
{
    double _result = ((::Graphic3d_Vec4d*)_NativeInstance)->w();
    return _result;
}

double Macad::Occt::Graphic3d_Vec4d::a()
{
    double _result = ((::Graphic3d_Vec4d*)_NativeInstance)->a();
    return _result;
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_Vec4d::xy()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::Graphic3d_Vec4d*)_NativeInstance)->xy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_Vec4d::yx()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::Graphic3d_Vec4d*)_NativeInstance)->yx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_Vec4d::xz()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::Graphic3d_Vec4d*)_NativeInstance)->xz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_Vec4d::zx()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::Graphic3d_Vec4d*)_NativeInstance)->zx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_Vec4d::xw()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::Graphic3d_Vec4d*)_NativeInstance)->xw();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_Vec4d::wx()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::Graphic3d_Vec4d*)_NativeInstance)->wx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_Vec4d::yz()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::Graphic3d_Vec4d*)_NativeInstance)->yz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_Vec4d::zy()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::Graphic3d_Vec4d*)_NativeInstance)->zy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_Vec4d::yw()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::Graphic3d_Vec4d*)_NativeInstance)->yw();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_Vec4d::wy()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::Graphic3d_Vec4d*)_NativeInstance)->wy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_Vec4d::zw()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::Graphic3d_Vec4d*)_NativeInstance)->zw();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_Vec4d::wz()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::Graphic3d_Vec4d*)_NativeInstance)->wz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec4d::xyz()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec4d*)_NativeInstance)->xyz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec4d::xzy()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec4d*)_NativeInstance)->xzy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec4d::yxz()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec4d*)_NativeInstance)->yxz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec4d::yzx()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec4d*)_NativeInstance)->yzx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec4d::zyx()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec4d*)_NativeInstance)->zyx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec4d::zxy()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec4d*)_NativeInstance)->zxy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec4d::xyw()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec4d*)_NativeInstance)->xyw();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec4d::xwy()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec4d*)_NativeInstance)->xwy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec4d::yxw()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec4d*)_NativeInstance)->yxw();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec4d::ywx()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec4d*)_NativeInstance)->ywx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec4d::wyx()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec4d*)_NativeInstance)->wyx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec4d::wxy()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec4d*)_NativeInstance)->wxy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec4d::xzw()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec4d*)_NativeInstance)->xzw();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec4d::xwz()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec4d*)_NativeInstance)->xwz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec4d::zxw()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec4d*)_NativeInstance)->zxw();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec4d::zwx()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec4d*)_NativeInstance)->zwx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec4d::wzx()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec4d*)_NativeInstance)->wzx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec4d::wxz()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec4d*)_NativeInstance)->wxz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec4d::yzw()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec4d*)_NativeInstance)->yzw();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec4d::ywz()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec4d*)_NativeInstance)->ywz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec4d::zyw()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec4d*)_NativeInstance)->zyw();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec4d::zwy()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec4d*)_NativeInstance)->zwy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec4d::wzy()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec4d*)_NativeInstance)->wzy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec4d::wyz()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec4d*)_NativeInstance)->wyz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec4d::rgb()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec4d*)_NativeInstance)->rgb();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec4d::rbg()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec4d*)_NativeInstance)->rbg();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec4d::grb()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec4d*)_NativeInstance)->grb();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec4d::gbr()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec4d*)_NativeInstance)->gbr();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec4d::bgr()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec4d*)_NativeInstance)->bgr();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_Vec4d::brg()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_Vec4d*)_NativeInstance)->brg();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

bool Macad::Occt::Graphic3d_Vec4d::IsEqual(Macad::Occt::Graphic3d_Vec4d^ theOther)
{
    bool _result = ((::Graphic3d_Vec4d*)_NativeInstance)->IsEqual(*(::Graphic3d_Vec4d*)theOther->NativeInstance);
    return _result;
}

double Macad::Occt::Graphic3d_Vec4d::GetData()
{
    throw gcnew System::NotImplementedException();
}

double Macad::Occt::Graphic3d_Vec4d::ChangeData()
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::Graphic3d_Vec4d::Multiply(double theFactor)
{
    ((::Graphic3d_Vec4d*)_NativeInstance)->Multiply(theFactor);
}

Macad::Occt::Graphic3d_Vec4d^ Macad::Occt::Graphic3d_Vec4d::Multiplied(double theFactor)
{
    ::Graphic3d_Vec4d* _result = new ::Graphic3d_Vec4d();
    *_result = ((::Graphic3d_Vec4d*)_NativeInstance)->Multiplied(theFactor);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4d(_result);
}

Macad::Occt::Graphic3d_Vec4d^ Macad::Occt::Graphic3d_Vec4d::cwiseMin(Macad::Occt::Graphic3d_Vec4d^ theVec)
{
    ::Graphic3d_Vec4d* _result = new ::Graphic3d_Vec4d();
    *_result = ((::Graphic3d_Vec4d*)_NativeInstance)->cwiseMin(*(::Graphic3d_Vec4d*)theVec->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4d(_result);
}

Macad::Occt::Graphic3d_Vec4d^ Macad::Occt::Graphic3d_Vec4d::cwiseMax(Macad::Occt::Graphic3d_Vec4d^ theVec)
{
    ::Graphic3d_Vec4d* _result = new ::Graphic3d_Vec4d();
    *_result = ((::Graphic3d_Vec4d*)_NativeInstance)->cwiseMax(*(::Graphic3d_Vec4d*)theVec->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4d(_result);
}

Macad::Occt::Graphic3d_Vec4d^ Macad::Occt::Graphic3d_Vec4d::cwiseAbs()
{
    ::Graphic3d_Vec4d* _result = new ::Graphic3d_Vec4d();
    *_result = ((::Graphic3d_Vec4d*)_NativeInstance)->cwiseAbs();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4d(_result);
}

double Macad::Occt::Graphic3d_Vec4d::maxComp()
{
    double _result = ((::Graphic3d_Vec4d*)_NativeInstance)->maxComp();
    return _result;
}

double Macad::Occt::Graphic3d_Vec4d::minComp()
{
    double _result = ((::Graphic3d_Vec4d*)_NativeInstance)->minComp();
    return _result;
}

double Macad::Occt::Graphic3d_Vec4d::Dot(Macad::Occt::Graphic3d_Vec4d^ theOther)
{
    double _result = ((::Graphic3d_Vec4d*)_NativeInstance)->Dot(*(::Graphic3d_Vec4d*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::Graphic3d_Vec4d::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Graphic3d_Vec4d::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Graphic3d_Vec4d^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Vec4i
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Vec4i::Graphic3d_Vec4i()
    : Macad::Occt::BaseClass<::Graphic3d_Vec4i>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec4i();
}

Macad::Occt::Graphic3d_Vec4i::Graphic3d_Vec4i(int theValue)
    : Macad::Occt::BaseClass<::Graphic3d_Vec4i>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec4i(theValue);
}

Macad::Occt::Graphic3d_Vec4i::Graphic3d_Vec4i(int theX, int theY, int theZ, int theW)
    : Macad::Occt::BaseClass<::Graphic3d_Vec4i>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec4i(theX, theY, theZ, theW);
}

Macad::Occt::Graphic3d_Vec4i::Graphic3d_Vec4i(Macad::Occt::Graphic3d_Vec2i^ theVec2)
    : Macad::Occt::BaseClass<::Graphic3d_Vec4i>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec4i(*(::Graphic3d_Vec2i*)theVec2->NativeInstance);
}

Macad::Occt::Graphic3d_Vec4i::Graphic3d_Vec4i(Macad::Occt::Graphic3d_Vec3i^ theVec3, int theW)
    : Macad::Occt::BaseClass<::Graphic3d_Vec4i>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec4i(*(::Graphic3d_Vec3i*)theVec3->NativeInstance, theW);
}

Macad::Occt::Graphic3d_Vec4i::Graphic3d_Vec4i(Macad::Occt::Graphic3d_Vec3i^ theVec3)
    : Macad::Occt::BaseClass<::Graphic3d_Vec4i>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec4i(*(::Graphic3d_Vec3i*)theVec3->NativeInstance, 0);
}

Macad::Occt::Graphic3d_Vec4i::Graphic3d_Vec4i(Macad::Occt::Graphic3d_Vec4^ theOtherVec4)
    : Macad::Occt::BaseClass<::Graphic3d_Vec4i>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec4i(*(::Graphic3d_Vec4*)theOtherVec4->NativeInstance);
}

int Macad::Occt::Graphic3d_Vec4i::Length()
{
    int _result = ::Graphic3d_Vec4i::Length();
    return _result;
}

void Macad::Occt::Graphic3d_Vec4i::SetValues(int theX, int theY, int theZ, int theW)
{
    ((::Graphic3d_Vec4i*)_NativeInstance)->SetValues(theX, theY, theZ, theW);
}

int Macad::Occt::Graphic3d_Vec4i::x()
{
    int _result = ((::Graphic3d_Vec4i*)_NativeInstance)->x();
    return _result;
}

int Macad::Occt::Graphic3d_Vec4i::r()
{
    int _result = ((::Graphic3d_Vec4i*)_NativeInstance)->r();
    return _result;
}

int Macad::Occt::Graphic3d_Vec4i::y()
{
    int _result = ((::Graphic3d_Vec4i*)_NativeInstance)->y();
    return _result;
}

int Macad::Occt::Graphic3d_Vec4i::g()
{
    int _result = ((::Graphic3d_Vec4i*)_NativeInstance)->g();
    return _result;
}

int Macad::Occt::Graphic3d_Vec4i::z()
{
    int _result = ((::Graphic3d_Vec4i*)_NativeInstance)->z();
    return _result;
}

int Macad::Occt::Graphic3d_Vec4i::b()
{
    int _result = ((::Graphic3d_Vec4i*)_NativeInstance)->b();
    return _result;
}

int Macad::Occt::Graphic3d_Vec4i::w()
{
    int _result = ((::Graphic3d_Vec4i*)_NativeInstance)->w();
    return _result;
}

int Macad::Occt::Graphic3d_Vec4i::a()
{
    int _result = ((::Graphic3d_Vec4i*)_NativeInstance)->a();
    return _result;
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_Vec4i::xy()
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = (::Graphic3d_Vec2i)((::Graphic3d_Vec4i*)_NativeInstance)->xy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_Vec4i::yx()
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = (::Graphic3d_Vec2i)((::Graphic3d_Vec4i*)_NativeInstance)->yx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_Vec4i::xz()
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = (::Graphic3d_Vec2i)((::Graphic3d_Vec4i*)_NativeInstance)->xz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_Vec4i::zx()
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = (::Graphic3d_Vec2i)((::Graphic3d_Vec4i*)_NativeInstance)->zx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_Vec4i::xw()
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = (::Graphic3d_Vec2i)((::Graphic3d_Vec4i*)_NativeInstance)->xw();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_Vec4i::wx()
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = (::Graphic3d_Vec2i)((::Graphic3d_Vec4i*)_NativeInstance)->wx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_Vec4i::yz()
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = (::Graphic3d_Vec2i)((::Graphic3d_Vec4i*)_NativeInstance)->yz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_Vec4i::zy()
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = (::Graphic3d_Vec2i)((::Graphic3d_Vec4i*)_NativeInstance)->zy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_Vec4i::yw()
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = (::Graphic3d_Vec2i)((::Graphic3d_Vec4i*)_NativeInstance)->yw();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_Vec4i::wy()
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = (::Graphic3d_Vec2i)((::Graphic3d_Vec4i*)_NativeInstance)->wy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_Vec4i::zw()
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = (::Graphic3d_Vec2i)((::Graphic3d_Vec4i*)_NativeInstance)->zw();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_Vec4i::wz()
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = (::Graphic3d_Vec2i)((::Graphic3d_Vec4i*)_NativeInstance)->wz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec4i::xyz()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec4i*)_NativeInstance)->xyz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec4i::xzy()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec4i*)_NativeInstance)->xzy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec4i::yxz()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec4i*)_NativeInstance)->yxz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec4i::yzx()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec4i*)_NativeInstance)->yzx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec4i::zyx()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec4i*)_NativeInstance)->zyx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec4i::zxy()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec4i*)_NativeInstance)->zxy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec4i::xyw()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec4i*)_NativeInstance)->xyw();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec4i::xwy()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec4i*)_NativeInstance)->xwy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec4i::yxw()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec4i*)_NativeInstance)->yxw();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec4i::ywx()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec4i*)_NativeInstance)->ywx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec4i::wyx()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec4i*)_NativeInstance)->wyx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec4i::wxy()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec4i*)_NativeInstance)->wxy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec4i::xzw()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec4i*)_NativeInstance)->xzw();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec4i::xwz()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec4i*)_NativeInstance)->xwz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec4i::zxw()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec4i*)_NativeInstance)->zxw();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec4i::zwx()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec4i*)_NativeInstance)->zwx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec4i::wzx()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec4i*)_NativeInstance)->wzx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec4i::wxz()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec4i*)_NativeInstance)->wxz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec4i::yzw()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec4i*)_NativeInstance)->yzw();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec4i::ywz()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec4i*)_NativeInstance)->ywz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec4i::zyw()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec4i*)_NativeInstance)->zyw();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec4i::zwy()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec4i*)_NativeInstance)->zwy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec4i::wzy()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec4i*)_NativeInstance)->wzy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec4i::wyz()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec4i*)_NativeInstance)->wyz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec4i::rgb()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec4i*)_NativeInstance)->rgb();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec4i::rbg()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec4i*)_NativeInstance)->rbg();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec4i::grb()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec4i*)_NativeInstance)->grb();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec4i::gbr()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec4i*)_NativeInstance)->gbr();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec4i::bgr()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec4i*)_NativeInstance)->bgr();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

Macad::Occt::Graphic3d_Vec3i^ Macad::Occt::Graphic3d_Vec4i::brg()
{
    ::Graphic3d_Vec3i* _result = new ::Graphic3d_Vec3i();
    *_result = (::Graphic3d_Vec3i)((::Graphic3d_Vec4i*)_NativeInstance)->brg();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3i(_result);
}

bool Macad::Occt::Graphic3d_Vec4i::IsEqual(Macad::Occt::Graphic3d_Vec4i^ theOther)
{
    bool _result = ((::Graphic3d_Vec4i*)_NativeInstance)->IsEqual(*(::Graphic3d_Vec4i*)theOther->NativeInstance);
    return _result;
}

int Macad::Occt::Graphic3d_Vec4i::GetData()
{
    throw gcnew System::NotImplementedException();
}

int Macad::Occt::Graphic3d_Vec4i::ChangeData()
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::Graphic3d_Vec4i::Multiply(int theFactor)
{
    ((::Graphic3d_Vec4i*)_NativeInstance)->Multiply(theFactor);
}

Macad::Occt::Graphic3d_Vec4i^ Macad::Occt::Graphic3d_Vec4i::Multiplied(int theFactor)
{
    ::Graphic3d_Vec4i* _result = new ::Graphic3d_Vec4i();
    *_result = ((::Graphic3d_Vec4i*)_NativeInstance)->Multiplied(theFactor);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4i(_result);
}

Macad::Occt::Graphic3d_Vec4i^ Macad::Occt::Graphic3d_Vec4i::cwiseMin(Macad::Occt::Graphic3d_Vec4i^ theVec)
{
    ::Graphic3d_Vec4i* _result = new ::Graphic3d_Vec4i();
    *_result = ((::Graphic3d_Vec4i*)_NativeInstance)->cwiseMin(*(::Graphic3d_Vec4i*)theVec->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4i(_result);
}

Macad::Occt::Graphic3d_Vec4i^ Macad::Occt::Graphic3d_Vec4i::cwiseMax(Macad::Occt::Graphic3d_Vec4i^ theVec)
{
    ::Graphic3d_Vec4i* _result = new ::Graphic3d_Vec4i();
    *_result = ((::Graphic3d_Vec4i*)_NativeInstance)->cwiseMax(*(::Graphic3d_Vec4i*)theVec->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4i(_result);
}

Macad::Occt::Graphic3d_Vec4i^ Macad::Occt::Graphic3d_Vec4i::cwiseAbs()
{
    ::Graphic3d_Vec4i* _result = new ::Graphic3d_Vec4i();
    *_result = ((::Graphic3d_Vec4i*)_NativeInstance)->cwiseAbs();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4i(_result);
}

int Macad::Occt::Graphic3d_Vec4i::maxComp()
{
    int _result = ((::Graphic3d_Vec4i*)_NativeInstance)->maxComp();
    return _result;
}

int Macad::Occt::Graphic3d_Vec4i::minComp()
{
    int _result = ((::Graphic3d_Vec4i*)_NativeInstance)->minComp();
    return _result;
}

int Macad::Occt::Graphic3d_Vec4i::Dot(Macad::Occt::Graphic3d_Vec4i^ theOther)
{
    int _result = ((::Graphic3d_Vec4i*)_NativeInstance)->Dot(*(::Graphic3d_Vec4i*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::Graphic3d_Vec4i::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Graphic3d_Vec4i::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Graphic3d_Vec4i^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Vec4ub
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Vec4ub::Graphic3d_Vec4ub()
    : Macad::Occt::BaseClass<::Graphic3d_Vec4ub>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec4ub();
}

Macad::Occt::Graphic3d_Vec4ub::Graphic3d_Vec4ub(unsigned char theValue)
    : Macad::Occt::BaseClass<::Graphic3d_Vec4ub>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec4ub(theValue);
}

Macad::Occt::Graphic3d_Vec4ub::Graphic3d_Vec4ub(unsigned char theX, unsigned char theY, unsigned char theZ, unsigned char theW)
    : Macad::Occt::BaseClass<::Graphic3d_Vec4ub>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec4ub(theX, theY, theZ, theW);
}

Macad::Occt::Graphic3d_Vec4ub::Graphic3d_Vec4ub(Macad::Occt::Graphic3d_Vec2ub^ theVec2)
    : Macad::Occt::BaseClass<::Graphic3d_Vec4ub>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vec4ub(*(::Graphic3d_Vec2ub*)theVec2->NativeInstance);
}

int Macad::Occt::Graphic3d_Vec4ub::Length()
{
    int _result = ::Graphic3d_Vec4ub::Length();
    return _result;
}

void Macad::Occt::Graphic3d_Vec4ub::SetValues(unsigned char theX, unsigned char theY, unsigned char theZ, unsigned char theW)
{
    ((::Graphic3d_Vec4ub*)_NativeInstance)->SetValues(theX, theY, theZ, theW);
}

unsigned char Macad::Occt::Graphic3d_Vec4ub::x()
{
    unsigned char _result = ((::Graphic3d_Vec4ub*)_NativeInstance)->x();
    return _result;
}

unsigned char Macad::Occt::Graphic3d_Vec4ub::r()
{
    unsigned char _result = ((::Graphic3d_Vec4ub*)_NativeInstance)->r();
    return _result;
}

unsigned char Macad::Occt::Graphic3d_Vec4ub::y()
{
    unsigned char _result = ((::Graphic3d_Vec4ub*)_NativeInstance)->y();
    return _result;
}

unsigned char Macad::Occt::Graphic3d_Vec4ub::g()
{
    unsigned char _result = ((::Graphic3d_Vec4ub*)_NativeInstance)->g();
    return _result;
}

unsigned char Macad::Occt::Graphic3d_Vec4ub::z()
{
    unsigned char _result = ((::Graphic3d_Vec4ub*)_NativeInstance)->z();
    return _result;
}

unsigned char Macad::Occt::Graphic3d_Vec4ub::b()
{
    unsigned char _result = ((::Graphic3d_Vec4ub*)_NativeInstance)->b();
    return _result;
}

unsigned char Macad::Occt::Graphic3d_Vec4ub::w()
{
    unsigned char _result = ((::Graphic3d_Vec4ub*)_NativeInstance)->w();
    return _result;
}

unsigned char Macad::Occt::Graphic3d_Vec4ub::a()
{
    unsigned char _result = ((::Graphic3d_Vec4ub*)_NativeInstance)->a();
    return _result;
}

Macad::Occt::Graphic3d_Vec2ub^ Macad::Occt::Graphic3d_Vec4ub::xy()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Vec2ub^ Macad::Occt::Graphic3d_Vec4ub::yx()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Vec2ub^ Macad::Occt::Graphic3d_Vec4ub::xz()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Vec2ub^ Macad::Occt::Graphic3d_Vec4ub::zx()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Vec2ub^ Macad::Occt::Graphic3d_Vec4ub::xw()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Vec2ub^ Macad::Occt::Graphic3d_Vec4ub::wx()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Vec2ub^ Macad::Occt::Graphic3d_Vec4ub::yz()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Vec2ub^ Macad::Occt::Graphic3d_Vec4ub::zy()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Vec2ub^ Macad::Occt::Graphic3d_Vec4ub::yw()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Vec2ub^ Macad::Occt::Graphic3d_Vec4ub::wy()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Vec2ub^ Macad::Occt::Graphic3d_Vec4ub::zw()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Vec2ub^ Macad::Occt::Graphic3d_Vec4ub::wz()
{
    throw gcnew System::NotImplementedException();
}

bool Macad::Occt::Graphic3d_Vec4ub::IsEqual(Macad::Occt::Graphic3d_Vec4ub^ theOther)
{
    bool _result = ((::Graphic3d_Vec4ub*)_NativeInstance)->IsEqual(*(::Graphic3d_Vec4ub*)theOther->NativeInstance);
    return _result;
}

unsigned char Macad::Occt::Graphic3d_Vec4ub::GetData()
{
    throw gcnew System::NotImplementedException();
}

unsigned char Macad::Occt::Graphic3d_Vec4ub::ChangeData()
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::Graphic3d_Vec4ub::Multiply(unsigned char theFactor)
{
    ((::Graphic3d_Vec4ub*)_NativeInstance)->Multiply(theFactor);
}

Macad::Occt::Graphic3d_Vec4ub^ Macad::Occt::Graphic3d_Vec4ub::Multiplied(unsigned char theFactor)
{
    ::Graphic3d_Vec4ub* _result = new ::Graphic3d_Vec4ub();
    *_result = ((::Graphic3d_Vec4ub*)_NativeInstance)->Multiplied(theFactor);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4ub(_result);
}

Macad::Occt::Graphic3d_Vec4ub^ Macad::Occt::Graphic3d_Vec4ub::cwiseMin(Macad::Occt::Graphic3d_Vec4ub^ theVec)
{
    ::Graphic3d_Vec4ub* _result = new ::Graphic3d_Vec4ub();
    *_result = ((::Graphic3d_Vec4ub*)_NativeInstance)->cwiseMin(*(::Graphic3d_Vec4ub*)theVec->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4ub(_result);
}

Macad::Occt::Graphic3d_Vec4ub^ Macad::Occt::Graphic3d_Vec4ub::cwiseMax(Macad::Occt::Graphic3d_Vec4ub^ theVec)
{
    ::Graphic3d_Vec4ub* _result = new ::Graphic3d_Vec4ub();
    *_result = ((::Graphic3d_Vec4ub*)_NativeInstance)->cwiseMax(*(::Graphic3d_Vec4ub*)theVec->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4ub(_result);
}

Macad::Occt::Graphic3d_Vec4ub^ Macad::Occt::Graphic3d_Vec4ub::cwiseAbs()
{
    ::Graphic3d_Vec4ub* _result = new ::Graphic3d_Vec4ub();
    *_result = ((::Graphic3d_Vec4ub*)_NativeInstance)->cwiseAbs();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4ub(_result);
}

unsigned char Macad::Occt::Graphic3d_Vec4ub::maxComp()
{
    unsigned char _result = ((::Graphic3d_Vec4ub*)_NativeInstance)->maxComp();
    return _result;
}

unsigned char Macad::Occt::Graphic3d_Vec4ub::minComp()
{
    unsigned char _result = ((::Graphic3d_Vec4ub*)_NativeInstance)->minComp();
    return _result;
}

unsigned char Macad::Occt::Graphic3d_Vec4ub::Dot(Macad::Occt::Graphic3d_Vec4ub^ theOther)
{
    unsigned char _result = ((::Graphic3d_Vec4ub*)_NativeInstance)->Dot(*(::Graphic3d_Vec4ub*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::Graphic3d_Vec4ub::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Graphic3d_Vec4ub::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Graphic3d_Vec4ub^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Mat4
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Mat4::Graphic3d_Mat4()
    : Macad::Occt::BaseClass<::Graphic3d_Mat4>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Mat4();
}

long long unsigned int Macad::Occt::Graphic3d_Mat4::Rows()
{
    long long unsigned int _result = ::Graphic3d_Mat4::Rows();
    return _result;
}

long long unsigned int Macad::Occt::Graphic3d_Mat4::Cols()
{
    long long unsigned int _result = ::Graphic3d_Mat4::Cols();
    return _result;
}

Macad::Occt::Graphic3d_Mat4^ Macad::Occt::Graphic3d_Mat4::Identity()
{
    ::Graphic3d_Mat4* _result = new ::Graphic3d_Mat4();
    *_result = ::Graphic3d_Mat4::Identity();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Mat4(_result);
}

Macad::Occt::Graphic3d_Mat4^ Macad::Occt::Graphic3d_Mat4::Zero()
{
    ::Graphic3d_Mat4* _result = new ::Graphic3d_Mat4();
    *_result = ::Graphic3d_Mat4::Zero();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Mat4(_result);
}

float Macad::Occt::Graphic3d_Mat4::GetValue(long long unsigned int theRow, long long unsigned int theCol)
{
    float _result = ((::Graphic3d_Mat4*)_NativeInstance)->GetValue(theRow, theCol);
    return _result;
}

float Macad::Occt::Graphic3d_Mat4::ChangeValue(long long unsigned int theRow, long long unsigned int theCol)
{
    float _result = ((::Graphic3d_Mat4*)_NativeInstance)->ChangeValue(theRow, theCol);
    return _result;
}

void Macad::Occt::Graphic3d_Mat4::SetValue(long long unsigned int theRow, long long unsigned int theCol, float theValue)
{
    ((::Graphic3d_Mat4*)_NativeInstance)->SetValue(theRow, theCol, theValue);
}

Macad::Occt::Graphic3d_Vec4^ Macad::Occt::Graphic3d_Mat4::GetRow(long long unsigned int theRow)
{
    ::Graphic3d_Vec4* _result = new ::Graphic3d_Vec4();
    *_result = ((::Graphic3d_Mat4*)_NativeInstance)->GetRow(theRow);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4(_result);
}

void Macad::Occt::Graphic3d_Mat4::SetRow(long long unsigned int theRow, Macad::Occt::gp_Vec3f^ theVec)
{
    ((::Graphic3d_Mat4*)_NativeInstance)->SetRow(theRow, *(::gp_Vec3f*)theVec->NativeInstance);
}

Macad::Occt::Graphic3d_Vec4^ Macad::Occt::Graphic3d_Mat4::GetColumn(long long unsigned int theCol)
{
    ::Graphic3d_Vec4* _result = new ::Graphic3d_Vec4();
    *_result = ((::Graphic3d_Mat4*)_NativeInstance)->GetColumn(theCol);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4(_result);
}

void Macad::Occt::Graphic3d_Mat4::SetColumn(long long unsigned int theCol, Macad::Occt::gp_Vec3f^ theVec)
{
    ((::Graphic3d_Mat4*)_NativeInstance)->SetColumn(theCol, *(::gp_Vec3f*)theVec->NativeInstance);
}

Macad::Occt::Graphic3d_Vec4^ Macad::Occt::Graphic3d_Mat4::GetDiagonal()
{
    ::Graphic3d_Vec4* _result = new ::Graphic3d_Vec4();
    *_result = ((::Graphic3d_Mat4*)_NativeInstance)->GetDiagonal();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4(_result);
}

void Macad::Occt::Graphic3d_Mat4::SetDiagonal(Macad::Occt::gp_Vec3f^ theVec)
{
    ((::Graphic3d_Mat4*)_NativeInstance)->SetDiagonal(*(::gp_Vec3f*)theVec->NativeInstance);
}

void Macad::Occt::Graphic3d_Mat4::InitZero()
{
    ((::Graphic3d_Mat4*)_NativeInstance)->InitZero();
}

bool Macad::Occt::Graphic3d_Mat4::IsZero()
{
    bool _result = ((::Graphic3d_Mat4*)_NativeInstance)->IsZero();
    return _result;
}

void Macad::Occt::Graphic3d_Mat4::InitIdentity()
{
    ((::Graphic3d_Mat4*)_NativeInstance)->InitIdentity();
}

bool Macad::Occt::Graphic3d_Mat4::IsIdentity()
{
    bool _result = ((::Graphic3d_Mat4*)_NativeInstance)->IsIdentity();
    return _result;
}

bool Macad::Occt::Graphic3d_Mat4::IsEqual(Macad::Occt::Graphic3d_Mat4^ theOther)
{
    bool _result = ((::Graphic3d_Mat4*)_NativeInstance)->IsEqual(*(::Graphic3d_Mat4*)theOther->NativeInstance);
    return _result;
}

float Macad::Occt::Graphic3d_Mat4::GetData()
{
    throw gcnew System::NotImplementedException();
}

float Macad::Occt::Graphic3d_Mat4::ChangeData()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Mat4^ Macad::Occt::Graphic3d_Mat4::Multiply(Macad::Occt::Graphic3d_Mat4^ theMatA, Macad::Occt::Graphic3d_Mat4^ theMatB)
{
    ::Graphic3d_Mat4* _result = new ::Graphic3d_Mat4();
    *_result = ::Graphic3d_Mat4::Multiply(*(::Graphic3d_Mat4*)theMatA->NativeInstance, *(::Graphic3d_Mat4*)theMatB->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Mat4(_result);
}

Macad::Occt::Graphic3d_Mat4^ Macad::Occt::Graphic3d_Mat4::Multiplied(Macad::Occt::Graphic3d_Mat4^ theMat)
{
    ::Graphic3d_Mat4* _result = new ::Graphic3d_Mat4();
    *_result = ((::Graphic3d_Mat4*)_NativeInstance)->Multiplied(*(::Graphic3d_Mat4*)theMat->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Mat4(_result);
}

void Macad::Occt::Graphic3d_Mat4::Divide(float theFactor)
{
    ((::Graphic3d_Mat4*)_NativeInstance)->Divide(theFactor);
}

Macad::Occt::Graphic3d_Mat4^ Macad::Occt::Graphic3d_Mat4::Divided(float theScalar)
{
    ::Graphic3d_Mat4* _result = new ::Graphic3d_Mat4();
    *_result = ((::Graphic3d_Mat4*)_NativeInstance)->Divided(theScalar);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Mat4(_result);
}

void Macad::Occt::Graphic3d_Mat4::Add(Macad::Occt::Graphic3d_Mat4^ theMat)
{
    ((::Graphic3d_Mat4*)_NativeInstance)->Add(*(::Graphic3d_Mat4*)theMat->NativeInstance);
}

void Macad::Occt::Graphic3d_Mat4::Subtract(Macad::Occt::Graphic3d_Mat4^ theMat)
{
    ((::Graphic3d_Mat4*)_NativeInstance)->Subtract(*(::Graphic3d_Mat4*)theMat->NativeInstance);
}

Macad::Occt::Graphic3d_Mat4^ Macad::Occt::Graphic3d_Mat4::Added(Macad::Occt::Graphic3d_Mat4^ theMat)
{
    ::Graphic3d_Mat4* _result = new ::Graphic3d_Mat4();
    *_result = ((::Graphic3d_Mat4*)_NativeInstance)->Added(*(::Graphic3d_Mat4*)theMat->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Mat4(_result);
}

Macad::Occt::Graphic3d_Mat4^ Macad::Occt::Graphic3d_Mat4::Subtracted(Macad::Occt::Graphic3d_Mat4^ theMat)
{
    ::Graphic3d_Mat4* _result = new ::Graphic3d_Mat4();
    *_result = ((::Graphic3d_Mat4*)_NativeInstance)->Subtracted(*(::Graphic3d_Mat4*)theMat->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Mat4(_result);
}

Macad::Occt::Graphic3d_Mat4^ Macad::Occt::Graphic3d_Mat4::Negated()
{
    ::Graphic3d_Mat4* _result = new ::Graphic3d_Mat4();
    *_result = ((::Graphic3d_Mat4*)_NativeInstance)->Negated();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Mat4(_result);
}

void Macad::Occt::Graphic3d_Mat4::Translate(Macad::Occt::gp_Vec3f^ theVec)
{
    ((::Graphic3d_Mat4*)_NativeInstance)->Translate(*(::gp_Vec3f*)theVec->NativeInstance);
}

Macad::Occt::Graphic3d_Mat4^ Macad::Occt::Graphic3d_Mat4::Transposed()
{
    ::Graphic3d_Mat4* _result = new ::Graphic3d_Mat4();
    *_result = ((::Graphic3d_Mat4*)_NativeInstance)->Transposed();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Mat4(_result);
}

void Macad::Occt::Graphic3d_Mat4::Transpose()
{
    ((::Graphic3d_Mat4*)_NativeInstance)->Transpose();
}

bool Macad::Occt::Graphic3d_Mat4::Inverted(Macad::Occt::Graphic3d_Mat4^ theOutMx, float% theDet)
{
    pin_ptr<float> pp_theDet = &theDet;
    bool _result = ((::Graphic3d_Mat4*)_NativeInstance)->Inverted(*(::Graphic3d_Mat4*)theOutMx->NativeInstance, *(float*)pp_theDet);
    return _result;
}

float Macad::Occt::Graphic3d_Mat4::DeterminantMat3()
{
    float _result = ((::Graphic3d_Mat4*)_NativeInstance)->DeterminantMat3();
    return _result;
}

Macad::Occt::Graphic3d_Mat4^ Macad::Occt::Graphic3d_Mat4::Adjoint()
{
    ::Graphic3d_Mat4* _result = new ::Graphic3d_Mat4();
    *_result = ((::Graphic3d_Mat4*)_NativeInstance)->Adjoint();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Mat4(_result);
}

Macad::Occt::Graphic3d_Mat4^ Macad::Occt::Graphic3d_Mat4::Map(float% theData)
{
    ::Graphic3d_Mat4* _result = new ::Graphic3d_Mat4();
    pin_ptr<float> pp_theData = &theData;
    *_result = ::Graphic3d_Mat4::Map((float*)pp_theData);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Mat4(_result);
}

bool Macad::Occt::Graphic3d_Mat4::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Graphic3d_Mat4::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Graphic3d_Mat4^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Mat4d
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Mat4d::Graphic3d_Mat4d()
    : Macad::Occt::BaseClass<::Graphic3d_Mat4d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Mat4d();
}

long long unsigned int Macad::Occt::Graphic3d_Mat4d::Rows()
{
    long long unsigned int _result = ::Graphic3d_Mat4d::Rows();
    return _result;
}

long long unsigned int Macad::Occt::Graphic3d_Mat4d::Cols()
{
    long long unsigned int _result = ::Graphic3d_Mat4d::Cols();
    return _result;
}

Macad::Occt::Graphic3d_Mat4d^ Macad::Occt::Graphic3d_Mat4d::Identity()
{
    ::Graphic3d_Mat4d* _result = new ::Graphic3d_Mat4d();
    *_result = ::Graphic3d_Mat4d::Identity();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Mat4d(_result);
}

Macad::Occt::Graphic3d_Mat4d^ Macad::Occt::Graphic3d_Mat4d::Zero()
{
    ::Graphic3d_Mat4d* _result = new ::Graphic3d_Mat4d();
    *_result = ::Graphic3d_Mat4d::Zero();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Mat4d(_result);
}

double Macad::Occt::Graphic3d_Mat4d::GetValue(long long unsigned int theRow, long long unsigned int theCol)
{
    double _result = ((::Graphic3d_Mat4d*)_NativeInstance)->GetValue(theRow, theCol);
    return _result;
}

double Macad::Occt::Graphic3d_Mat4d::ChangeValue(long long unsigned int theRow, long long unsigned int theCol)
{
    double _result = ((::Graphic3d_Mat4d*)_NativeInstance)->ChangeValue(theRow, theCol);
    return _result;
}

void Macad::Occt::Graphic3d_Mat4d::SetValue(long long unsigned int theRow, long long unsigned int theCol, double theValue)
{
    ((::Graphic3d_Mat4d*)_NativeInstance)->SetValue(theRow, theCol, theValue);
}

Macad::Occt::Graphic3d_Vec4d^ Macad::Occt::Graphic3d_Mat4d::GetRow(long long unsigned int theRow)
{
    ::Graphic3d_Vec4d* _result = new ::Graphic3d_Vec4d();
    *_result = ((::Graphic3d_Mat4d*)_NativeInstance)->GetRow(theRow);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4d(_result);
}

void Macad::Occt::Graphic3d_Mat4d::SetRow(long long unsigned int theRow, Macad::Occt::Graphic3d_Vec3d^ theVec)
{
    ((::Graphic3d_Mat4d*)_NativeInstance)->SetRow(theRow, *(::Graphic3d_Vec3d*)theVec->NativeInstance);
}

Macad::Occt::Graphic3d_Vec4d^ Macad::Occt::Graphic3d_Mat4d::GetColumn(long long unsigned int theCol)
{
    ::Graphic3d_Vec4d* _result = new ::Graphic3d_Vec4d();
    *_result = ((::Graphic3d_Mat4d*)_NativeInstance)->GetColumn(theCol);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4d(_result);
}

void Macad::Occt::Graphic3d_Mat4d::SetColumn(long long unsigned int theCol, Macad::Occt::Graphic3d_Vec3d^ theVec)
{
    ((::Graphic3d_Mat4d*)_NativeInstance)->SetColumn(theCol, *(::Graphic3d_Vec3d*)theVec->NativeInstance);
}

Macad::Occt::Graphic3d_Vec4d^ Macad::Occt::Graphic3d_Mat4d::GetDiagonal()
{
    ::Graphic3d_Vec4d* _result = new ::Graphic3d_Vec4d();
    *_result = ((::Graphic3d_Mat4d*)_NativeInstance)->GetDiagonal();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4d(_result);
}

void Macad::Occt::Graphic3d_Mat4d::SetDiagonal(Macad::Occt::Graphic3d_Vec3d^ theVec)
{
    ((::Graphic3d_Mat4d*)_NativeInstance)->SetDiagonal(*(::Graphic3d_Vec3d*)theVec->NativeInstance);
}

void Macad::Occt::Graphic3d_Mat4d::InitZero()
{
    ((::Graphic3d_Mat4d*)_NativeInstance)->InitZero();
}

bool Macad::Occt::Graphic3d_Mat4d::IsZero()
{
    bool _result = ((::Graphic3d_Mat4d*)_NativeInstance)->IsZero();
    return _result;
}

void Macad::Occt::Graphic3d_Mat4d::InitIdentity()
{
    ((::Graphic3d_Mat4d*)_NativeInstance)->InitIdentity();
}

bool Macad::Occt::Graphic3d_Mat4d::IsIdentity()
{
    bool _result = ((::Graphic3d_Mat4d*)_NativeInstance)->IsIdentity();
    return _result;
}

bool Macad::Occt::Graphic3d_Mat4d::IsEqual(Macad::Occt::Graphic3d_Mat4d^ theOther)
{
    bool _result = ((::Graphic3d_Mat4d*)_NativeInstance)->IsEqual(*(::Graphic3d_Mat4d*)theOther->NativeInstance);
    return _result;
}

double Macad::Occt::Graphic3d_Mat4d::GetData()
{
    throw gcnew System::NotImplementedException();
}

double Macad::Occt::Graphic3d_Mat4d::ChangeData()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_Mat4d^ Macad::Occt::Graphic3d_Mat4d::Multiply(Macad::Occt::Graphic3d_Mat4d^ theMatA, Macad::Occt::Graphic3d_Mat4d^ theMatB)
{
    ::Graphic3d_Mat4d* _result = new ::Graphic3d_Mat4d();
    *_result = ::Graphic3d_Mat4d::Multiply(*(::Graphic3d_Mat4d*)theMatA->NativeInstance, *(::Graphic3d_Mat4d*)theMatB->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Mat4d(_result);
}

Macad::Occt::Graphic3d_Mat4d^ Macad::Occt::Graphic3d_Mat4d::Multiplied(Macad::Occt::Graphic3d_Mat4d^ theMat)
{
    ::Graphic3d_Mat4d* _result = new ::Graphic3d_Mat4d();
    *_result = ((::Graphic3d_Mat4d*)_NativeInstance)->Multiplied(*(::Graphic3d_Mat4d*)theMat->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Mat4d(_result);
}

void Macad::Occt::Graphic3d_Mat4d::Divide(double theFactor)
{
    ((::Graphic3d_Mat4d*)_NativeInstance)->Divide(theFactor);
}

Macad::Occt::Graphic3d_Mat4d^ Macad::Occt::Graphic3d_Mat4d::Divided(double theScalar)
{
    ::Graphic3d_Mat4d* _result = new ::Graphic3d_Mat4d();
    *_result = ((::Graphic3d_Mat4d*)_NativeInstance)->Divided(theScalar);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Mat4d(_result);
}

void Macad::Occt::Graphic3d_Mat4d::Add(Macad::Occt::Graphic3d_Mat4d^ theMat)
{
    ((::Graphic3d_Mat4d*)_NativeInstance)->Add(*(::Graphic3d_Mat4d*)theMat->NativeInstance);
}

void Macad::Occt::Graphic3d_Mat4d::Subtract(Macad::Occt::Graphic3d_Mat4d^ theMat)
{
    ((::Graphic3d_Mat4d*)_NativeInstance)->Subtract(*(::Graphic3d_Mat4d*)theMat->NativeInstance);
}

Macad::Occt::Graphic3d_Mat4d^ Macad::Occt::Graphic3d_Mat4d::Added(Macad::Occt::Graphic3d_Mat4d^ theMat)
{
    ::Graphic3d_Mat4d* _result = new ::Graphic3d_Mat4d();
    *_result = ((::Graphic3d_Mat4d*)_NativeInstance)->Added(*(::Graphic3d_Mat4d*)theMat->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Mat4d(_result);
}

Macad::Occt::Graphic3d_Mat4d^ Macad::Occt::Graphic3d_Mat4d::Subtracted(Macad::Occt::Graphic3d_Mat4d^ theMat)
{
    ::Graphic3d_Mat4d* _result = new ::Graphic3d_Mat4d();
    *_result = ((::Graphic3d_Mat4d*)_NativeInstance)->Subtracted(*(::Graphic3d_Mat4d*)theMat->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Mat4d(_result);
}

Macad::Occt::Graphic3d_Mat4d^ Macad::Occt::Graphic3d_Mat4d::Negated()
{
    ::Graphic3d_Mat4d* _result = new ::Graphic3d_Mat4d();
    *_result = ((::Graphic3d_Mat4d*)_NativeInstance)->Negated();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Mat4d(_result);
}

void Macad::Occt::Graphic3d_Mat4d::Translate(Macad::Occt::Graphic3d_Vec3d^ theVec)
{
    ((::Graphic3d_Mat4d*)_NativeInstance)->Translate(*(::Graphic3d_Vec3d*)theVec->NativeInstance);
}

Macad::Occt::Graphic3d_Mat4d^ Macad::Occt::Graphic3d_Mat4d::Transposed()
{
    ::Graphic3d_Mat4d* _result = new ::Graphic3d_Mat4d();
    *_result = ((::Graphic3d_Mat4d*)_NativeInstance)->Transposed();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Mat4d(_result);
}

void Macad::Occt::Graphic3d_Mat4d::Transpose()
{
    ((::Graphic3d_Mat4d*)_NativeInstance)->Transpose();
}

bool Macad::Occt::Graphic3d_Mat4d::Inverted(Macad::Occt::Graphic3d_Mat4d^ theOutMx, double% theDet)
{
    pin_ptr<double> pp_theDet = &theDet;
    bool _result = ((::Graphic3d_Mat4d*)_NativeInstance)->Inverted(*(::Graphic3d_Mat4d*)theOutMx->NativeInstance, *(double*)pp_theDet);
    return _result;
}

double Macad::Occt::Graphic3d_Mat4d::DeterminantMat3()
{
    double _result = ((::Graphic3d_Mat4d*)_NativeInstance)->DeterminantMat3();
    return _result;
}

Macad::Occt::Graphic3d_Mat4d^ Macad::Occt::Graphic3d_Mat4d::Adjoint()
{
    ::Graphic3d_Mat4d* _result = new ::Graphic3d_Mat4d();
    *_result = ((::Graphic3d_Mat4d*)_NativeInstance)->Adjoint();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Mat4d(_result);
}

Macad::Occt::Graphic3d_Mat4d^ Macad::Occt::Graphic3d_Mat4d::Map(double% theData)
{
    ::Graphic3d_Mat4d* _result = new ::Graphic3d_Mat4d();
    pin_ptr<double> pp_theData = &theData;
    *_result = ::Graphic3d_Mat4d::Map((double*)pp_theData);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Mat4d(_result);
}

bool Macad::Occt::Graphic3d_Mat4d::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Graphic3d_Mat4d::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Graphic3d_Mat4d^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Array1OfAttribute
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Array1OfAttribute::Graphic3d_Array1OfAttribute()
    : Macad::Occt::BaseClass<::Graphic3d_Array1OfAttribute>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Array1OfAttribute();
}

Macad::Occt::Graphic3d_Array1OfAttribute::Graphic3d_Array1OfAttribute(int theLower, int theUpper)
    : Macad::Occt::BaseClass<::Graphic3d_Array1OfAttribute>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Array1OfAttribute(theLower, theUpper);
}

Macad::Occt::Graphic3d_Array1OfAttribute::Graphic3d_Array1OfAttribute(Macad::Occt::Graphic3d_Attribute^ theBegin, int theLower, int theUpper, bool theUseBuffer)
    : Macad::Occt::BaseClass<::Graphic3d_Array1OfAttribute>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Array1OfAttribute(*(::Graphic3d_Attribute*)theBegin->NativeInstance, theLower, theUpper, theUseBuffer);
}

Macad::Occt::Graphic3d_Array1OfAttribute::Graphic3d_Array1OfAttribute(Macad::Occt::Graphic3d_Attribute^ theBegin, int theLower, int theUpper)
    : Macad::Occt::BaseClass<::Graphic3d_Array1OfAttribute>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Array1OfAttribute(*(::Graphic3d_Attribute*)theBegin->NativeInstance, theLower, theUpper, true);
}

void Macad::Occt::Graphic3d_Array1OfAttribute::Init(Macad::Occt::Graphic3d_Attribute^ theValue)
{
    ((::Graphic3d_Array1OfAttribute*)_NativeInstance)->Init(*(::Graphic3d_Attribute*)theValue->NativeInstance);
}

int Macad::Occt::Graphic3d_Array1OfAttribute::Size()
{
    int _result = ((::Graphic3d_Array1OfAttribute*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::Graphic3d_Array1OfAttribute::Length()
{
    int _result = ((::Graphic3d_Array1OfAttribute*)_NativeInstance)->Length();
    return _result;
}

bool Macad::Occt::Graphic3d_Array1OfAttribute::IsEmpty()
{
    bool _result = ((::Graphic3d_Array1OfAttribute*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::Graphic3d_Array1OfAttribute::Lower()
{
    int _result = ((::Graphic3d_Array1OfAttribute*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::Graphic3d_Array1OfAttribute::Upper()
{
    int _result = ((::Graphic3d_Array1OfAttribute*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::Graphic3d_Array1OfAttribute^ Macad::Occt::Graphic3d_Array1OfAttribute::Assign(Macad::Occt::Graphic3d_Array1OfAttribute^ theOther)
{
    ::Graphic3d_Array1OfAttribute* _result = new ::Graphic3d_Array1OfAttribute();
    *_result = ((::Graphic3d_Array1OfAttribute*)_NativeInstance)->Assign(*(::Graphic3d_Array1OfAttribute*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Array1OfAttribute(_result);
}

Macad::Occt::Graphic3d_Array1OfAttribute^ Macad::Occt::Graphic3d_Array1OfAttribute::Move(Macad::Occt::Graphic3d_Array1OfAttribute^ theOther)
{
    ::Graphic3d_Array1OfAttribute* _result = new ::Graphic3d_Array1OfAttribute();
    *_result = ((::Graphic3d_Array1OfAttribute*)_NativeInstance)->Move(*(::Graphic3d_Array1OfAttribute*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Array1OfAttribute(_result);
}

Macad::Occt::Graphic3d_Attribute^ Macad::Occt::Graphic3d_Array1OfAttribute::First()
{
    ::Graphic3d_Attribute* _result = new ::Graphic3d_Attribute();
    *_result = (::Graphic3d_Attribute)((::Graphic3d_Array1OfAttribute*)_NativeInstance)->First();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Attribute(_result);
}

Macad::Occt::Graphic3d_Attribute^ Macad::Occt::Graphic3d_Array1OfAttribute::ChangeFirst()
{
    ::Graphic3d_Attribute* _result = new ::Graphic3d_Attribute();
    *_result = ((::Graphic3d_Array1OfAttribute*)_NativeInstance)->ChangeFirst();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Attribute(_result);
}

Macad::Occt::Graphic3d_Attribute^ Macad::Occt::Graphic3d_Array1OfAttribute::Last()
{
    ::Graphic3d_Attribute* _result = new ::Graphic3d_Attribute();
    *_result = (::Graphic3d_Attribute)((::Graphic3d_Array1OfAttribute*)_NativeInstance)->Last();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Attribute(_result);
}

Macad::Occt::Graphic3d_Attribute^ Macad::Occt::Graphic3d_Array1OfAttribute::ChangeLast()
{
    ::Graphic3d_Attribute* _result = new ::Graphic3d_Attribute();
    *_result = ((::Graphic3d_Array1OfAttribute*)_NativeInstance)->ChangeLast();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Attribute(_result);
}

Macad::Occt::Graphic3d_Attribute^ Macad::Occt::Graphic3d_Array1OfAttribute::Value(int theIndex)
{
    ::Graphic3d_Attribute* _result = new ::Graphic3d_Attribute();
    *_result = (::Graphic3d_Attribute)((::Graphic3d_Array1OfAttribute*)_NativeInstance)->Value(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Attribute(_result);
}

Macad::Occt::Graphic3d_Attribute^ Macad::Occt::Graphic3d_Array1OfAttribute::ChangeValue(int theIndex)
{
    ::Graphic3d_Attribute* _result = new ::Graphic3d_Attribute();
    *_result = ((::Graphic3d_Array1OfAttribute*)_NativeInstance)->ChangeValue(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Attribute(_result);
}

void Macad::Occt::Graphic3d_Array1OfAttribute::SetValue(int theIndex, Macad::Occt::Graphic3d_Attribute^ theItem)
{
    ((::Graphic3d_Array1OfAttribute*)_NativeInstance)->SetValue(theIndex, *(::Graphic3d_Attribute*)theItem->NativeInstance);
}

void Macad::Occt::Graphic3d_Array1OfAttribute::UpdateLowerBound(int theLower)
{
    ((::Graphic3d_Array1OfAttribute*)_NativeInstance)->UpdateLowerBound(theLower);
}

void Macad::Occt::Graphic3d_Array1OfAttribute::UpdateUpperBound(int theUpper)
{
    ((::Graphic3d_Array1OfAttribute*)_NativeInstance)->UpdateUpperBound(theUpper);
}

void Macad::Occt::Graphic3d_Array1OfAttribute::Resize(int theLower, int theUpper, bool theToCopyData)
{
    ((::Graphic3d_Array1OfAttribute*)_NativeInstance)->Resize(theLower, theUpper, theToCopyData);
}

bool Macad::Occt::Graphic3d_Array1OfAttribute::IsDeletable()
{
    bool _result = ((::Graphic3d_Array1OfAttribute*)_NativeInstance)->IsDeletable();
    return _result;
}

System::Collections::Generic::IEnumerator<Macad::Occt::Graphic3d_Attribute^>^ Macad::Occt::Graphic3d_Array1OfAttribute::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::Graphic3d_Attribute^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::Graphic3d_Array1OfAttribute::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::Graphic3d_Attribute^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Array1OfAttribute::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderObjectList
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ShaderObjectList::Graphic3d_ShaderObjectList()
    : Macad::Occt::BaseClass<::Graphic3d_ShaderObjectList>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_ShaderObjectList();
}

Macad::Occt::Graphic3d_ShaderObjectList::Graphic3d_ShaderObjectList(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::Graphic3d_ShaderObjectList>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_ShaderObjectList(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::Graphic3d_ShaderObjectList::Size()
{
    int _result = ((::Graphic3d_ShaderObjectList*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::Graphic3d_ShaderObjectList::Length()
{
    int _result = ((::Graphic3d_ShaderObjectList*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::Graphic3d_ShaderObjectList::Lower()
{
    int _result = ((::Graphic3d_ShaderObjectList*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::Graphic3d_ShaderObjectList::Upper()
{
    int _result = ((::Graphic3d_ShaderObjectList*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::Graphic3d_ShaderObjectList::IsEmpty()
{
    bool _result = ((::Graphic3d_ShaderObjectList*)_NativeInstance)->IsEmpty();
    return _result;
}

void Macad::Occt::Graphic3d_ShaderObjectList::Reverse()
{
    ((::Graphic3d_ShaderObjectList*)_NativeInstance)->Reverse();
}

void Macad::Occt::Graphic3d_ShaderObjectList::Exchange(int I, int J)
{
    ((::Graphic3d_ShaderObjectList*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::Graphic3d_ShaderObjectList::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::Graphic3d_ShaderObjectList*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::Graphic3d_ShaderObjectList::Clear()
{
    ((::Graphic3d_ShaderObjectList*)_NativeInstance)->Clear(0L);
}

Macad::Occt::Graphic3d_ShaderObjectList^ Macad::Occt::Graphic3d_ShaderObjectList::Assign(Macad::Occt::Graphic3d_ShaderObjectList^ theOther)
{
    ::Graphic3d_ShaderObjectList* _result = new ::Graphic3d_ShaderObjectList();
    *_result = ((::Graphic3d_ShaderObjectList*)_NativeInstance)->Assign(*(::Graphic3d_ShaderObjectList*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_ShaderObjectList(_result);
}

void Macad::Occt::Graphic3d_ShaderObjectList::Remove(Macad::Occt::Graphic3d_ShaderObjectList::Iterator^ thePosition)
{
    ((::Graphic3d_ShaderObjectList*)_NativeInstance)->Remove(*(::Graphic3d_ShaderObjectList::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::Graphic3d_ShaderObjectList::Append(Macad::Occt::Graphic3d_ShaderObject^ theItem)
{
    ((::Graphic3d_ShaderObjectList*)_NativeInstance)->Append(Handle(::Graphic3d_ShaderObject)(theItem->NativeInstance));
}

void Macad::Occt::Graphic3d_ShaderObjectList::Prepend(Macad::Occt::Graphic3d_ShaderObject^ theItem)
{
    ((::Graphic3d_ShaderObjectList*)_NativeInstance)->Prepend(Handle(::Graphic3d_ShaderObject)(theItem->NativeInstance));
}

void Macad::Occt::Graphic3d_ShaderObjectList::InsertBefore(int theIndex, Macad::Occt::Graphic3d_ShaderObject^ theItem)
{
    ((::Graphic3d_ShaderObjectList*)_NativeInstance)->InsertBefore(theIndex, Handle(::Graphic3d_ShaderObject)(theItem->NativeInstance));
}

void Macad::Occt::Graphic3d_ShaderObjectList::InsertAfter(Macad::Occt::Graphic3d_ShaderObjectList::Iterator^ thePosition, Macad::Occt::Graphic3d_ShaderObject^ theItem)
{
    ((::Graphic3d_ShaderObjectList*)_NativeInstance)->InsertAfter(*(::Graphic3d_ShaderObjectList::Iterator*)thePosition->NativeInstance, Handle(::Graphic3d_ShaderObject)(theItem->NativeInstance));
}

void Macad::Occt::Graphic3d_ShaderObjectList::Split(int theIndex, Macad::Occt::Graphic3d_ShaderObjectList^ theSeq)
{
    ((::Graphic3d_ShaderObjectList*)_NativeInstance)->Split(theIndex, *(::Graphic3d_ShaderObjectList*)theSeq->NativeInstance);
}

Macad::Occt::Graphic3d_ShaderObject^ Macad::Occt::Graphic3d_ShaderObjectList::First()
{
    Handle(::Graphic3d_ShaderObject) _result = ((::Graphic3d_ShaderObjectList*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderObject::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_ShaderObject^ Macad::Occt::Graphic3d_ShaderObjectList::ChangeFirst()
{
    Handle(::Graphic3d_ShaderObject) _result = ((::Graphic3d_ShaderObjectList*)_NativeInstance)->ChangeFirst();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderObject::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_ShaderObject^ Macad::Occt::Graphic3d_ShaderObjectList::Last()
{
    Handle(::Graphic3d_ShaderObject) _result = ((::Graphic3d_ShaderObjectList*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderObject::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_ShaderObject^ Macad::Occt::Graphic3d_ShaderObjectList::ChangeLast()
{
    Handle(::Graphic3d_ShaderObject) _result = ((::Graphic3d_ShaderObjectList*)_NativeInstance)->ChangeLast();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderObject::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_ShaderObject^ Macad::Occt::Graphic3d_ShaderObjectList::Value(int theIndex)
{
    Handle(::Graphic3d_ShaderObject) _result = ((::Graphic3d_ShaderObjectList*)_NativeInstance)->Value(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderObject::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_ShaderObject^ Macad::Occt::Graphic3d_ShaderObjectList::ChangeValue(int theIndex)
{
    Handle(::Graphic3d_ShaderObject) _result = ((::Graphic3d_ShaderObjectList*)_NativeInstance)->ChangeValue(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderObject::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_ShaderObjectList::SetValue(int theIndex, Macad::Occt::Graphic3d_ShaderObject^ theItem)
{
    ((::Graphic3d_ShaderObjectList*)_NativeInstance)->SetValue(theIndex, Handle(::Graphic3d_ShaderObject)(theItem->NativeInstance));
}

System::Collections::Generic::IEnumerator<Macad::Occt::Graphic3d_ShaderObject^>^ Macad::Occt::Graphic3d_ShaderObjectList::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::Graphic3d_ShaderObject^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::Graphic3d_ShaderObjectList::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::Graphic3d_ShaderObject^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderObjectList::Iterator
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ShaderObjectList::Iterator::Iterator()
    : Macad::Occt::BaseClass<::Graphic3d_ShaderObjectList::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_ShaderObjectList::Iterator();
}

bool Macad::Occt::Graphic3d_ShaderObjectList::Iterator::More()
{
    bool _result = ((::Graphic3d_ShaderObjectList::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Graphic3d_ShaderObjectList::Iterator::Next()
{
    ((::Graphic3d_ShaderObjectList::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Graphic3d_ShaderObject^ Macad::Occt::Graphic3d_ShaderObjectList::Iterator::Value()
{
    Handle(::Graphic3d_ShaderObject) _result = ((::Graphic3d_ShaderObjectList::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderObject::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_ShaderObject^ Macad::Occt::Graphic3d_ShaderObjectList::Iterator::ChangeValue()
{
    Handle(::Graphic3d_ShaderObject) _result = ((::Graphic3d_ShaderObjectList::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderObject::CreateDowncasted(_result.get());
}

bool Macad::Occt::Graphic3d_ShaderObjectList::Iterator::IsEqual(Macad::Occt::Graphic3d_ShaderObjectList::Iterator^ theOther)
{
    bool _result = ((::Graphic3d_ShaderObjectList::Iterator*)_NativeInstance)->IsEqual(*(::Graphic3d_ShaderObjectList::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::Graphic3d_ShaderObjectList::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Graphic3d_ShaderObjectList::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderVariableList
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ShaderVariableList::Graphic3d_ShaderVariableList()
    : Macad::Occt::BaseClass<::Graphic3d_ShaderVariableList>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_ShaderVariableList();
}

Macad::Occt::Graphic3d_ShaderVariableList::Graphic3d_ShaderVariableList(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::Graphic3d_ShaderVariableList>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_ShaderVariableList(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::Graphic3d_ShaderVariableList::Size()
{
    int _result = ((::Graphic3d_ShaderVariableList*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::Graphic3d_ShaderVariableList::Length()
{
    int _result = ((::Graphic3d_ShaderVariableList*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::Graphic3d_ShaderVariableList::Lower()
{
    int _result = ((::Graphic3d_ShaderVariableList*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::Graphic3d_ShaderVariableList::Upper()
{
    int _result = ((::Graphic3d_ShaderVariableList*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::Graphic3d_ShaderVariableList::IsEmpty()
{
    bool _result = ((::Graphic3d_ShaderVariableList*)_NativeInstance)->IsEmpty();
    return _result;
}

void Macad::Occt::Graphic3d_ShaderVariableList::Reverse()
{
    ((::Graphic3d_ShaderVariableList*)_NativeInstance)->Reverse();
}

void Macad::Occt::Graphic3d_ShaderVariableList::Exchange(int I, int J)
{
    ((::Graphic3d_ShaderVariableList*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::Graphic3d_ShaderVariableList::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::Graphic3d_ShaderVariableList*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::Graphic3d_ShaderVariableList::Clear()
{
    ((::Graphic3d_ShaderVariableList*)_NativeInstance)->Clear(0L);
}

Macad::Occt::Graphic3d_ShaderVariableList^ Macad::Occt::Graphic3d_ShaderVariableList::Assign(Macad::Occt::Graphic3d_ShaderVariableList^ theOther)
{
    ::Graphic3d_ShaderVariableList* _result = new ::Graphic3d_ShaderVariableList();
    *_result = ((::Graphic3d_ShaderVariableList*)_NativeInstance)->Assign(*(::Graphic3d_ShaderVariableList*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_ShaderVariableList(_result);
}

void Macad::Occt::Graphic3d_ShaderVariableList::Remove(Macad::Occt::Graphic3d_ShaderVariableList::Iterator^ thePosition)
{
    ((::Graphic3d_ShaderVariableList*)_NativeInstance)->Remove(*(::Graphic3d_ShaderVariableList::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::Graphic3d_ShaderVariableList::Append(Macad::Occt::Graphic3d_ShaderVariable^ theItem)
{
    ((::Graphic3d_ShaderVariableList*)_NativeInstance)->Append(Handle(::Graphic3d_ShaderVariable)(theItem->NativeInstance));
}

void Macad::Occt::Graphic3d_ShaderVariableList::Prepend(Macad::Occt::Graphic3d_ShaderVariable^ theItem)
{
    ((::Graphic3d_ShaderVariableList*)_NativeInstance)->Prepend(Handle(::Graphic3d_ShaderVariable)(theItem->NativeInstance));
}

void Macad::Occt::Graphic3d_ShaderVariableList::InsertBefore(int theIndex, Macad::Occt::Graphic3d_ShaderVariable^ theItem)
{
    ((::Graphic3d_ShaderVariableList*)_NativeInstance)->InsertBefore(theIndex, Handle(::Graphic3d_ShaderVariable)(theItem->NativeInstance));
}

void Macad::Occt::Graphic3d_ShaderVariableList::InsertAfter(Macad::Occt::Graphic3d_ShaderVariableList::Iterator^ thePosition, Macad::Occt::Graphic3d_ShaderVariable^ theItem)
{
    ((::Graphic3d_ShaderVariableList*)_NativeInstance)->InsertAfter(*(::Graphic3d_ShaderVariableList::Iterator*)thePosition->NativeInstance, Handle(::Graphic3d_ShaderVariable)(theItem->NativeInstance));
}

void Macad::Occt::Graphic3d_ShaderVariableList::Split(int theIndex, Macad::Occt::Graphic3d_ShaderVariableList^ theSeq)
{
    ((::Graphic3d_ShaderVariableList*)_NativeInstance)->Split(theIndex, *(::Graphic3d_ShaderVariableList*)theSeq->NativeInstance);
}

Macad::Occt::Graphic3d_ShaderVariable^ Macad::Occt::Graphic3d_ShaderVariableList::First()
{
    Handle(::Graphic3d_ShaderVariable) _result = ((::Graphic3d_ShaderVariableList*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderVariable::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_ShaderVariable^ Macad::Occt::Graphic3d_ShaderVariableList::ChangeFirst()
{
    Handle(::Graphic3d_ShaderVariable) _result = ((::Graphic3d_ShaderVariableList*)_NativeInstance)->ChangeFirst();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderVariable::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_ShaderVariable^ Macad::Occt::Graphic3d_ShaderVariableList::Last()
{
    Handle(::Graphic3d_ShaderVariable) _result = ((::Graphic3d_ShaderVariableList*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderVariable::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_ShaderVariable^ Macad::Occt::Graphic3d_ShaderVariableList::ChangeLast()
{
    Handle(::Graphic3d_ShaderVariable) _result = ((::Graphic3d_ShaderVariableList*)_NativeInstance)->ChangeLast();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderVariable::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_ShaderVariable^ Macad::Occt::Graphic3d_ShaderVariableList::Value(int theIndex)
{
    Handle(::Graphic3d_ShaderVariable) _result = ((::Graphic3d_ShaderVariableList*)_NativeInstance)->Value(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderVariable::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_ShaderVariable^ Macad::Occt::Graphic3d_ShaderVariableList::ChangeValue(int theIndex)
{
    Handle(::Graphic3d_ShaderVariable) _result = ((::Graphic3d_ShaderVariableList*)_NativeInstance)->ChangeValue(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderVariable::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_ShaderVariableList::SetValue(int theIndex, Macad::Occt::Graphic3d_ShaderVariable^ theItem)
{
    ((::Graphic3d_ShaderVariableList*)_NativeInstance)->SetValue(theIndex, Handle(::Graphic3d_ShaderVariable)(theItem->NativeInstance));
}

System::Collections::Generic::IEnumerator<Macad::Occt::Graphic3d_ShaderVariable^>^ Macad::Occt::Graphic3d_ShaderVariableList::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::Graphic3d_ShaderVariable^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::Graphic3d_ShaderVariableList::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::Graphic3d_ShaderVariable^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderVariableList::Iterator
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ShaderVariableList::Iterator::Iterator()
    : Macad::Occt::BaseClass<::Graphic3d_ShaderVariableList::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_ShaderVariableList::Iterator();
}

bool Macad::Occt::Graphic3d_ShaderVariableList::Iterator::More()
{
    bool _result = ((::Graphic3d_ShaderVariableList::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Graphic3d_ShaderVariableList::Iterator::Next()
{
    ((::Graphic3d_ShaderVariableList::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Graphic3d_ShaderVariable^ Macad::Occt::Graphic3d_ShaderVariableList::Iterator::Value()
{
    Handle(::Graphic3d_ShaderVariable) _result = ((::Graphic3d_ShaderVariableList::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderVariable::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_ShaderVariable^ Macad::Occt::Graphic3d_ShaderVariableList::Iterator::ChangeValue()
{
    Handle(::Graphic3d_ShaderVariable) _result = ((::Graphic3d_ShaderVariableList::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderVariable::CreateDowncasted(_result.get());
}

bool Macad::Occt::Graphic3d_ShaderVariableList::Iterator::IsEqual(Macad::Occt::Graphic3d_ShaderVariableList::Iterator^ theOther)
{
    bool _result = ((::Graphic3d_ShaderVariableList::Iterator*)_NativeInstance)->IsEqual(*(::Graphic3d_ShaderVariableList::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::Graphic3d_ShaderVariableList::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Graphic3d_ShaderVariableList::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderAttributeList
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ShaderAttributeList::Graphic3d_ShaderAttributeList()
    : Macad::Occt::BaseClass<::Graphic3d_ShaderAttributeList>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_ShaderAttributeList();
}

Macad::Occt::Graphic3d_ShaderAttributeList::Graphic3d_ShaderAttributeList(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::Graphic3d_ShaderAttributeList>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_ShaderAttributeList(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::Graphic3d_ShaderAttributeList::Size()
{
    int _result = ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::Graphic3d_ShaderAttributeList::Length()
{
    int _result = ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::Graphic3d_ShaderAttributeList::Lower()
{
    int _result = ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::Graphic3d_ShaderAttributeList::Upper()
{
    int _result = ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::Graphic3d_ShaderAttributeList::IsEmpty()
{
    bool _result = ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->IsEmpty();
    return _result;
}

void Macad::Occt::Graphic3d_ShaderAttributeList::Reverse()
{
    ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->Reverse();
}

void Macad::Occt::Graphic3d_ShaderAttributeList::Exchange(int I, int J)
{
    ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::Graphic3d_ShaderAttributeList::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::Graphic3d_ShaderAttributeList::Clear()
{
    ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->Clear(0L);
}

Macad::Occt::Graphic3d_ShaderAttributeList^ Macad::Occt::Graphic3d_ShaderAttributeList::Assign(Macad::Occt::Graphic3d_ShaderAttributeList^ theOther)
{
    ::Graphic3d_ShaderAttributeList* _result = new ::Graphic3d_ShaderAttributeList();
    *_result = ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->Assign(*(::Graphic3d_ShaderAttributeList*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_ShaderAttributeList(_result);
}

void Macad::Occt::Graphic3d_ShaderAttributeList::Remove(Macad::Occt::Graphic3d_ShaderAttributeList::Iterator^ thePosition)
{
    ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->Remove(*(::Graphic3d_ShaderAttributeList::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::Graphic3d_ShaderAttributeList::Append(Macad::Occt::Graphic3d_ShaderAttribute^ theItem)
{
    ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->Append(Handle(::Graphic3d_ShaderAttribute)(theItem->NativeInstance));
}

void Macad::Occt::Graphic3d_ShaderAttributeList::Prepend(Macad::Occt::Graphic3d_ShaderAttribute^ theItem)
{
    ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->Prepend(Handle(::Graphic3d_ShaderAttribute)(theItem->NativeInstance));
}

void Macad::Occt::Graphic3d_ShaderAttributeList::InsertBefore(int theIndex, Macad::Occt::Graphic3d_ShaderAttribute^ theItem)
{
    ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->InsertBefore(theIndex, Handle(::Graphic3d_ShaderAttribute)(theItem->NativeInstance));
}

void Macad::Occt::Graphic3d_ShaderAttributeList::InsertAfter(Macad::Occt::Graphic3d_ShaderAttributeList::Iterator^ thePosition, Macad::Occt::Graphic3d_ShaderAttribute^ theItem)
{
    ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->InsertAfter(*(::Graphic3d_ShaderAttributeList::Iterator*)thePosition->NativeInstance, Handle(::Graphic3d_ShaderAttribute)(theItem->NativeInstance));
}

void Macad::Occt::Graphic3d_ShaderAttributeList::Split(int theIndex, Macad::Occt::Graphic3d_ShaderAttributeList^ theSeq)
{
    ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->Split(theIndex, *(::Graphic3d_ShaderAttributeList*)theSeq->NativeInstance);
}

Macad::Occt::Graphic3d_ShaderAttribute^ Macad::Occt::Graphic3d_ShaderAttributeList::First()
{
    Handle(::Graphic3d_ShaderAttribute) _result = ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderAttribute::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_ShaderAttribute^ Macad::Occt::Graphic3d_ShaderAttributeList::ChangeFirst()
{
    Handle(::Graphic3d_ShaderAttribute) _result = ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->ChangeFirst();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderAttribute::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_ShaderAttribute^ Macad::Occt::Graphic3d_ShaderAttributeList::Last()
{
    Handle(::Graphic3d_ShaderAttribute) _result = ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderAttribute::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_ShaderAttribute^ Macad::Occt::Graphic3d_ShaderAttributeList::ChangeLast()
{
    Handle(::Graphic3d_ShaderAttribute) _result = ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->ChangeLast();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderAttribute::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_ShaderAttribute^ Macad::Occt::Graphic3d_ShaderAttributeList::Value(int theIndex)
{
    Handle(::Graphic3d_ShaderAttribute) _result = ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->Value(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderAttribute::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_ShaderAttribute^ Macad::Occt::Graphic3d_ShaderAttributeList::ChangeValue(int theIndex)
{
    Handle(::Graphic3d_ShaderAttribute) _result = ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->ChangeValue(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderAttribute::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_ShaderAttributeList::SetValue(int theIndex, Macad::Occt::Graphic3d_ShaderAttribute^ theItem)
{
    ((::Graphic3d_ShaderAttributeList*)_NativeInstance)->SetValue(theIndex, Handle(::Graphic3d_ShaderAttribute)(theItem->NativeInstance));
}

System::Collections::Generic::IEnumerator<Macad::Occt::Graphic3d_ShaderAttribute^>^ Macad::Occt::Graphic3d_ShaderAttributeList::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::Graphic3d_ShaderAttribute^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::Graphic3d_ShaderAttributeList::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::Graphic3d_ShaderAttribute^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderAttributeList::Iterator
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ShaderAttributeList::Iterator::Iterator()
    : Macad::Occt::BaseClass<::Graphic3d_ShaderAttributeList::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_ShaderAttributeList::Iterator();
}

bool Macad::Occt::Graphic3d_ShaderAttributeList::Iterator::More()
{
    bool _result = ((::Graphic3d_ShaderAttributeList::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Graphic3d_ShaderAttributeList::Iterator::Next()
{
    ((::Graphic3d_ShaderAttributeList::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Graphic3d_ShaderAttribute^ Macad::Occt::Graphic3d_ShaderAttributeList::Iterator::Value()
{
    Handle(::Graphic3d_ShaderAttribute) _result = ((::Graphic3d_ShaderAttributeList::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderAttribute::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_ShaderAttribute^ Macad::Occt::Graphic3d_ShaderAttributeList::Iterator::ChangeValue()
{
    Handle(::Graphic3d_ShaderAttribute) _result = ((::Graphic3d_ShaderAttributeList::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderAttribute::CreateDowncasted(_result.get());
}

bool Macad::Occt::Graphic3d_ShaderAttributeList::Iterator::IsEqual(Macad::Occt::Graphic3d_ShaderAttributeList::Iterator^ theOther)
{
    bool _result = ((::Graphic3d_ShaderAttributeList::Iterator*)_NativeInstance)->IsEqual(*(::Graphic3d_ShaderAttributeList::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::Graphic3d_ShaderAttributeList::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Graphic3d_ShaderAttributeList::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Graphic3d_CameraLerp
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_CameraLerp::Graphic3d_CameraLerp()
    : Macad::Occt::BaseClass<::Graphic3d_CameraLerp>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_CameraLerp();
}

Macad::Occt::Graphic3d_CameraLerp::Graphic3d_CameraLerp(Macad::Occt::Graphic3d_Camera^ theStart, Macad::Occt::Graphic3d_Camera^ theEnd)
    : Macad::Occt::BaseClass<::Graphic3d_CameraLerp>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_CameraLerp(Handle(::Graphic3d_Camera)(theStart->NativeInstance), Handle(::Graphic3d_Camera)(theEnd->NativeInstance));
}

Macad::Occt::Graphic3d_Camera^ Macad::Occt::Graphic3d_CameraLerp::Interpolate(Macad::Occt::Graphic3d_Camera^ theStart, Macad::Occt::Graphic3d_Camera^ theEnd, double theT)
{
    Handle(::Graphic3d_Camera) _result = ::Graphic3d_CameraLerp::Interpolate(Handle(::Graphic3d_Camera)(theStart->NativeInstance), Handle(::Graphic3d_Camera)(theEnd->NativeInstance), theT);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Camera::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_CameraLerp::Init(Macad::Occt::Graphic3d_Camera^ theStart, Macad::Occt::Graphic3d_Camera^ theEnd)
{
    ((::Graphic3d_CameraLerp*)_NativeInstance)->Init(Handle(::Graphic3d_Camera)(theStart->NativeInstance), Handle(::Graphic3d_Camera)(theEnd->NativeInstance));
}



//---------------------------------------------------------------------
//  Class  Graphic3d_SequenceOfGroup
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_SequenceOfGroup::Graphic3d_SequenceOfGroup()
    : Macad::Occt::BaseClass<::Graphic3d_SequenceOfGroup>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_SequenceOfGroup();
}

Macad::Occt::Graphic3d_SequenceOfGroup::Graphic3d_SequenceOfGroup(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::Graphic3d_SequenceOfGroup>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_SequenceOfGroup(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::Graphic3d_SequenceOfGroup::Size()
{
    int _result = ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::Graphic3d_SequenceOfGroup::Length()
{
    int _result = ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::Graphic3d_SequenceOfGroup::Lower()
{
    int _result = ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::Graphic3d_SequenceOfGroup::Upper()
{
    int _result = ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::Graphic3d_SequenceOfGroup::IsEmpty()
{
    bool _result = ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->IsEmpty();
    return _result;
}

void Macad::Occt::Graphic3d_SequenceOfGroup::Reverse()
{
    ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->Reverse();
}

void Macad::Occt::Graphic3d_SequenceOfGroup::Exchange(int I, int J)
{
    ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::Graphic3d_SequenceOfGroup::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::Graphic3d_SequenceOfGroup::Clear()
{
    ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->Clear(0L);
}

Macad::Occt::Graphic3d_SequenceOfGroup^ Macad::Occt::Graphic3d_SequenceOfGroup::Assign(Macad::Occt::Graphic3d_SequenceOfGroup^ theOther)
{
    ::Graphic3d_SequenceOfGroup* _result = new ::Graphic3d_SequenceOfGroup();
    *_result = ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->Assign(*(::Graphic3d_SequenceOfGroup*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_SequenceOfGroup(_result);
}

void Macad::Occt::Graphic3d_SequenceOfGroup::Remove(Macad::Occt::Graphic3d_SequenceOfGroup::Iterator^ thePosition)
{
    ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->Remove(*(::Graphic3d_SequenceOfGroup::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::Graphic3d_SequenceOfGroup::Append(Macad::Occt::Graphic3d_Group^ theItem)
{
    ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->Append(Handle(::Graphic3d_Group)(theItem->NativeInstance));
}

void Macad::Occt::Graphic3d_SequenceOfGroup::Prepend(Macad::Occt::Graphic3d_Group^ theItem)
{
    ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->Prepend(Handle(::Graphic3d_Group)(theItem->NativeInstance));
}

void Macad::Occt::Graphic3d_SequenceOfGroup::InsertBefore(int theIndex, Macad::Occt::Graphic3d_Group^ theItem)
{
    ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->InsertBefore(theIndex, Handle(::Graphic3d_Group)(theItem->NativeInstance));
}

void Macad::Occt::Graphic3d_SequenceOfGroup::InsertAfter(Macad::Occt::Graphic3d_SequenceOfGroup::Iterator^ thePosition, Macad::Occt::Graphic3d_Group^ theItem)
{
    ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->InsertAfter(*(::Graphic3d_SequenceOfGroup::Iterator*)thePosition->NativeInstance, Handle(::Graphic3d_Group)(theItem->NativeInstance));
}

void Macad::Occt::Graphic3d_SequenceOfGroup::Split(int theIndex, Macad::Occt::Graphic3d_SequenceOfGroup^ theSeq)
{
    ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->Split(theIndex, *(::Graphic3d_SequenceOfGroup*)theSeq->NativeInstance);
}

Macad::Occt::Graphic3d_Group^ Macad::Occt::Graphic3d_SequenceOfGroup::First()
{
    Handle(::Graphic3d_Group) _result = ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Group::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_Group^ Macad::Occt::Graphic3d_SequenceOfGroup::ChangeFirst()
{
    Handle(::Graphic3d_Group) _result = ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->ChangeFirst();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Group::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_Group^ Macad::Occt::Graphic3d_SequenceOfGroup::Last()
{
    Handle(::Graphic3d_Group) _result = ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Group::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_Group^ Macad::Occt::Graphic3d_SequenceOfGroup::ChangeLast()
{
    Handle(::Graphic3d_Group) _result = ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->ChangeLast();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Group::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_Group^ Macad::Occt::Graphic3d_SequenceOfGroup::Value(int theIndex)
{
    Handle(::Graphic3d_Group) _result = ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->Value(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Group::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_Group^ Macad::Occt::Graphic3d_SequenceOfGroup::ChangeValue(int theIndex)
{
    Handle(::Graphic3d_Group) _result = ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->ChangeValue(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Group::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_SequenceOfGroup::SetValue(int theIndex, Macad::Occt::Graphic3d_Group^ theItem)
{
    ((::Graphic3d_SequenceOfGroup*)_NativeInstance)->SetValue(theIndex, Handle(::Graphic3d_Group)(theItem->NativeInstance));
}

System::Collections::Generic::IEnumerator<Macad::Occt::Graphic3d_Group^>^ Macad::Occt::Graphic3d_SequenceOfGroup::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::Graphic3d_Group^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::Graphic3d_SequenceOfGroup::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::Graphic3d_Group^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Graphic3d_SequenceOfGroup::Iterator
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_SequenceOfGroup::Iterator::Iterator()
    : Macad::Occt::BaseClass<::Graphic3d_SequenceOfGroup::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_SequenceOfGroup::Iterator();
}

bool Macad::Occt::Graphic3d_SequenceOfGroup::Iterator::More()
{
    bool _result = ((::Graphic3d_SequenceOfGroup::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Graphic3d_SequenceOfGroup::Iterator::Next()
{
    ((::Graphic3d_SequenceOfGroup::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Graphic3d_Group^ Macad::Occt::Graphic3d_SequenceOfGroup::Iterator::Value()
{
    Handle(::Graphic3d_Group) _result = ((::Graphic3d_SequenceOfGroup::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Group::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_Group^ Macad::Occt::Graphic3d_SequenceOfGroup::Iterator::ChangeValue()
{
    Handle(::Graphic3d_Group) _result = ((::Graphic3d_SequenceOfGroup::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Group::CreateDowncasted(_result.get());
}

bool Macad::Occt::Graphic3d_SequenceOfGroup::Iterator::IsEqual(Macad::Occt::Graphic3d_SequenceOfGroup::Iterator^ theOther)
{
    bool _result = ((::Graphic3d_SequenceOfGroup::Iterator*)_NativeInstance)->IsEqual(*(::Graphic3d_SequenceOfGroup::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::Graphic3d_SequenceOfGroup::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Graphic3d_SequenceOfGroup::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Graphic3d_MapOfStructure
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_MapOfStructure::Graphic3d_MapOfStructure()
    : Macad::Occt::BaseClass<::Graphic3d_MapOfStructure>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_MapOfStructure();
}

Macad::Occt::Graphic3d_MapOfStructure::Graphic3d_MapOfStructure(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::Graphic3d_MapOfStructure>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_MapOfStructure(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::Graphic3d_MapOfStructure::Graphic3d_MapOfStructure(int theNbBuckets)
    : Macad::Occt::BaseClass<::Graphic3d_MapOfStructure>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_MapOfStructure(theNbBuckets, 0L);
}

void Macad::Occt::Graphic3d_MapOfStructure::Exchange(Macad::Occt::Graphic3d_MapOfStructure^ theOther)
{
    ((::Graphic3d_MapOfStructure*)_NativeInstance)->Exchange(*(::Graphic3d_MapOfStructure*)theOther->NativeInstance);
}

Macad::Occt::Graphic3d_MapOfStructure^ Macad::Occt::Graphic3d_MapOfStructure::Assign(Macad::Occt::Graphic3d_MapOfStructure^ theOther)
{
    ::Graphic3d_MapOfStructure* _result = new ::Graphic3d_MapOfStructure();
    *_result = ((::Graphic3d_MapOfStructure*)_NativeInstance)->Assign(*(::Graphic3d_MapOfStructure*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_MapOfStructure(_result);
}

void Macad::Occt::Graphic3d_MapOfStructure::ReSize(int N)
{
    ((::Graphic3d_MapOfStructure*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::Graphic3d_MapOfStructure::Add(Macad::Occt::Graphic3d_Structure^ theKey)
{
    bool _result = ((::Graphic3d_MapOfStructure*)_NativeInstance)->Add(Handle(::Graphic3d_Structure)(theKey->NativeInstance));
    return _result;
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::Graphic3d_MapOfStructure::Added(Macad::Occt::Graphic3d_Structure^ theKey)
{
    Handle(::Graphic3d_Structure) _result = ((::Graphic3d_MapOfStructure*)_NativeInstance)->Added(Handle(::Graphic3d_Structure)(theKey->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted(_result.get());
}

bool Macad::Occt::Graphic3d_MapOfStructure::Contains(Macad::Occt::Graphic3d_Structure^ theKey)
{
    bool _result = ((::Graphic3d_MapOfStructure*)_NativeInstance)->Contains(Handle(::Graphic3d_Structure)(theKey->NativeInstance));
    return _result;
}

bool Macad::Occt::Graphic3d_MapOfStructure::Remove(Macad::Occt::Graphic3d_Structure^ K)
{
    bool _result = ((::Graphic3d_MapOfStructure*)_NativeInstance)->Remove(Handle(::Graphic3d_Structure)(K->NativeInstance));
    return _result;
}

void Macad::Occt::Graphic3d_MapOfStructure::Clear(bool doReleaseMemory)
{
    ((::Graphic3d_MapOfStructure*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::Graphic3d_MapOfStructure::Clear()
{
    ((::Graphic3d_MapOfStructure*)_NativeInstance)->Clear(false);
}

int Macad::Occt::Graphic3d_MapOfStructure::Size()
{
    int _result = ((::Graphic3d_MapOfStructure*)_NativeInstance)->Size();
    return _result;
}

bool Macad::Occt::Graphic3d_MapOfStructure::IsEqual(Macad::Occt::Graphic3d_MapOfStructure^ theOther)
{
    bool _result = ((::Graphic3d_MapOfStructure*)_NativeInstance)->IsEqual(*(::Graphic3d_MapOfStructure*)theOther->NativeInstance);
    return _result;
}

void Macad::Occt::Graphic3d_MapOfStructure::Union(Macad::Occt::Graphic3d_MapOfStructure^ theLeft, Macad::Occt::Graphic3d_MapOfStructure^ theRight)
{
    ((::Graphic3d_MapOfStructure*)_NativeInstance)->Union(*(::Graphic3d_MapOfStructure*)theLeft->NativeInstance, *(::Graphic3d_MapOfStructure*)theRight->NativeInstance);
}

bool Macad::Occt::Graphic3d_MapOfStructure::Unite(Macad::Occt::Graphic3d_MapOfStructure^ theOther)
{
    bool _result = ((::Graphic3d_MapOfStructure*)_NativeInstance)->Unite(*(::Graphic3d_MapOfStructure*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::Graphic3d_MapOfStructure::HasIntersection(Macad::Occt::Graphic3d_MapOfStructure^ theMap)
{
    bool _result = ((::Graphic3d_MapOfStructure*)_NativeInstance)->HasIntersection(*(::Graphic3d_MapOfStructure*)theMap->NativeInstance);
    return _result;
}

void Macad::Occt::Graphic3d_MapOfStructure::Intersection(Macad::Occt::Graphic3d_MapOfStructure^ theLeft, Macad::Occt::Graphic3d_MapOfStructure^ theRight)
{
    ((::Graphic3d_MapOfStructure*)_NativeInstance)->Intersection(*(::Graphic3d_MapOfStructure*)theLeft->NativeInstance, *(::Graphic3d_MapOfStructure*)theRight->NativeInstance);
}

bool Macad::Occt::Graphic3d_MapOfStructure::Intersect(Macad::Occt::Graphic3d_MapOfStructure^ theOther)
{
    bool _result = ((::Graphic3d_MapOfStructure*)_NativeInstance)->Intersect(*(::Graphic3d_MapOfStructure*)theOther->NativeInstance);
    return _result;
}

void Macad::Occt::Graphic3d_MapOfStructure::Subtraction(Macad::Occt::Graphic3d_MapOfStructure^ theLeft, Macad::Occt::Graphic3d_MapOfStructure^ theRight)
{
    ((::Graphic3d_MapOfStructure*)_NativeInstance)->Subtraction(*(::Graphic3d_MapOfStructure*)theLeft->NativeInstance, *(::Graphic3d_MapOfStructure*)theRight->NativeInstance);
}

bool Macad::Occt::Graphic3d_MapOfStructure::Subtract(Macad::Occt::Graphic3d_MapOfStructure^ theOther)
{
    bool _result = ((::Graphic3d_MapOfStructure*)_NativeInstance)->Subtract(*(::Graphic3d_MapOfStructure*)theOther->NativeInstance);
    return _result;
}

void Macad::Occt::Graphic3d_MapOfStructure::Difference(Macad::Occt::Graphic3d_MapOfStructure^ theLeft, Macad::Occt::Graphic3d_MapOfStructure^ theRight)
{
    ((::Graphic3d_MapOfStructure*)_NativeInstance)->Difference(*(::Graphic3d_MapOfStructure*)theLeft->NativeInstance, *(::Graphic3d_MapOfStructure*)theRight->NativeInstance);
}

bool Macad::Occt::Graphic3d_MapOfStructure::Differ(Macad::Occt::Graphic3d_MapOfStructure^ theOther)
{
    bool _result = ((::Graphic3d_MapOfStructure*)_NativeInstance)->Differ(*(::Graphic3d_MapOfStructure*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::Graphic3d_MapOfStructure::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Graphic3d_MapOfStructure::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Graphic3d_MapOfStructure^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Graphic3d_MapOfStructure::Iterator
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_MapOfStructure::Iterator::Iterator()
    : Macad::Occt::BaseClass<::Graphic3d_MapOfStructure::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_MapOfStructure::Iterator();
}

bool Macad::Occt::Graphic3d_MapOfStructure::Iterator::More()
{
    bool _result = ((::Graphic3d_MapOfStructure::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Graphic3d_MapOfStructure::Iterator::Next()
{
    ((::Graphic3d_MapOfStructure::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::Graphic3d_MapOfStructure::Iterator::Value()
{
    Handle(::Graphic3d_Structure) _result = ((::Graphic3d_MapOfStructure::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::Graphic3d_MapOfStructure::Iterator::Key()
{
    Handle(::Graphic3d_Structure) _result = ((::Graphic3d_MapOfStructure::Iterator*)_NativeInstance)->Key();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  Graphic3d_SequenceOfStructure
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_SequenceOfStructure::Graphic3d_SequenceOfStructure()
    : Macad::Occt::BaseClass<::Graphic3d_SequenceOfStructure>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_SequenceOfStructure();
}

Macad::Occt::Graphic3d_SequenceOfStructure::Graphic3d_SequenceOfStructure(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::Graphic3d_SequenceOfStructure>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_SequenceOfStructure(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::Graphic3d_SequenceOfStructure::Size()
{
    int _result = ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::Graphic3d_SequenceOfStructure::Length()
{
    int _result = ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->Length();
    return _result;
}

int Macad::Occt::Graphic3d_SequenceOfStructure::Lower()
{
    int _result = ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::Graphic3d_SequenceOfStructure::Upper()
{
    int _result = ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::Graphic3d_SequenceOfStructure::IsEmpty()
{
    bool _result = ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->IsEmpty();
    return _result;
}

void Macad::Occt::Graphic3d_SequenceOfStructure::Reverse()
{
    ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->Reverse();
}

void Macad::Occt::Graphic3d_SequenceOfStructure::Exchange(int I, int J)
{
    ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::Graphic3d_SequenceOfStructure::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::Graphic3d_SequenceOfStructure::Clear()
{
    ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->Clear(0L);
}

Macad::Occt::Graphic3d_SequenceOfStructure^ Macad::Occt::Graphic3d_SequenceOfStructure::Assign(Macad::Occt::Graphic3d_SequenceOfStructure^ theOther)
{
    ::Graphic3d_SequenceOfStructure* _result = new ::Graphic3d_SequenceOfStructure();
    *_result = ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->Assign(*(::Graphic3d_SequenceOfStructure*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_SequenceOfStructure(_result);
}

void Macad::Occt::Graphic3d_SequenceOfStructure::Remove(Macad::Occt::Graphic3d_SequenceOfStructure::Iterator^ thePosition)
{
    ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->Remove(*(::Graphic3d_SequenceOfStructure::Iterator*)thePosition->NativeInstance);
}

void Macad::Occt::Graphic3d_SequenceOfStructure::Append(Macad::Occt::Graphic3d_Structure^ theItem)
{
    ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->Append(Handle(::Graphic3d_Structure)(theItem->NativeInstance));
}

void Macad::Occt::Graphic3d_SequenceOfStructure::Prepend(Macad::Occt::Graphic3d_Structure^ theItem)
{
    ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->Prepend(Handle(::Graphic3d_Structure)(theItem->NativeInstance));
}

void Macad::Occt::Graphic3d_SequenceOfStructure::InsertBefore(int theIndex, Macad::Occt::Graphic3d_Structure^ theItem)
{
    ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->InsertBefore(theIndex, Handle(::Graphic3d_Structure)(theItem->NativeInstance));
}

void Macad::Occt::Graphic3d_SequenceOfStructure::InsertAfter(Macad::Occt::Graphic3d_SequenceOfStructure::Iterator^ thePosition, Macad::Occt::Graphic3d_Structure^ theItem)
{
    ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->InsertAfter(*(::Graphic3d_SequenceOfStructure::Iterator*)thePosition->NativeInstance, Handle(::Graphic3d_Structure)(theItem->NativeInstance));
}

void Macad::Occt::Graphic3d_SequenceOfStructure::Split(int theIndex, Macad::Occt::Graphic3d_SequenceOfStructure^ theSeq)
{
    ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->Split(theIndex, *(::Graphic3d_SequenceOfStructure*)theSeq->NativeInstance);
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::Graphic3d_SequenceOfStructure::First()
{
    Handle(::Graphic3d_Structure) _result = ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::Graphic3d_SequenceOfStructure::ChangeFirst()
{
    Handle(::Graphic3d_Structure) _result = ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->ChangeFirst();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::Graphic3d_SequenceOfStructure::Last()
{
    Handle(::Graphic3d_Structure) _result = ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::Graphic3d_SequenceOfStructure::ChangeLast()
{
    Handle(::Graphic3d_Structure) _result = ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->ChangeLast();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::Graphic3d_SequenceOfStructure::Value(int theIndex)
{
    Handle(::Graphic3d_Structure) _result = ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->Value(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::Graphic3d_SequenceOfStructure::ChangeValue(int theIndex)
{
    Handle(::Graphic3d_Structure) _result = ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->ChangeValue(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_SequenceOfStructure::SetValue(int theIndex, Macad::Occt::Graphic3d_Structure^ theItem)
{
    ((::Graphic3d_SequenceOfStructure*)_NativeInstance)->SetValue(theIndex, Handle(::Graphic3d_Structure)(theItem->NativeInstance));
}

System::Collections::Generic::IEnumerator<Macad::Occt::Graphic3d_Structure^>^ Macad::Occt::Graphic3d_SequenceOfStructure::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::Graphic3d_Structure^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::Graphic3d_SequenceOfStructure::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::Graphic3d_Structure^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Graphic3d_SequenceOfStructure::Iterator
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_SequenceOfStructure::Iterator::Iterator()
    : Macad::Occt::BaseClass<::Graphic3d_SequenceOfStructure::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_SequenceOfStructure::Iterator();
}

bool Macad::Occt::Graphic3d_SequenceOfStructure::Iterator::More()
{
    bool _result = ((::Graphic3d_SequenceOfStructure::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Graphic3d_SequenceOfStructure::Iterator::Next()
{
    ((::Graphic3d_SequenceOfStructure::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::Graphic3d_SequenceOfStructure::Iterator::Value()
{
    Handle(::Graphic3d_Structure) _result = ((::Graphic3d_SequenceOfStructure::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::Graphic3d_SequenceOfStructure::Iterator::ChangeValue()
{
    Handle(::Graphic3d_Structure) _result = ((::Graphic3d_SequenceOfStructure::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted(_result.get());
}

bool Macad::Occt::Graphic3d_SequenceOfStructure::Iterator::IsEqual(Macad::Occt::Graphic3d_SequenceOfStructure::Iterator^ theOther)
{
    bool _result = ((::Graphic3d_SequenceOfStructure::Iterator*)_NativeInstance)->IsEqual(*(::Graphic3d_SequenceOfStructure::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::Graphic3d_SequenceOfStructure::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Graphic3d_SequenceOfStructure::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Graphic3d_GraphicDriverFactoryList
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_GraphicDriverFactoryList::Graphic3d_GraphicDriverFactoryList()
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_GraphicDriverFactoryList();
}

Macad::Occt::Graphic3d_GraphicDriverFactoryList::Graphic3d_GraphicDriverFactoryList(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_GraphicDriverFactoryList(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::Graphic3d_GraphicDriverFactoryList::Size()
{
    int _result = ((::Graphic3d_GraphicDriverFactoryList*)_NativeInstance)->Size();
    return _result;
}

Macad::Occt::Graphic3d_GraphicDriverFactoryList^ Macad::Occt::Graphic3d_GraphicDriverFactoryList::Assign(Macad::Occt::Graphic3d_GraphicDriverFactoryList^ theOther)
{
    ::Graphic3d_GraphicDriverFactoryList* _result = new ::Graphic3d_GraphicDriverFactoryList();
    *_result = ((::Graphic3d_GraphicDriverFactoryList*)_NativeInstance)->Assign(*(::Graphic3d_GraphicDriverFactoryList*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_GraphicDriverFactoryList(_result);
}

void Macad::Occt::Graphic3d_GraphicDriverFactoryList::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::Graphic3d_GraphicDriverFactoryList*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::Graphic3d_GraphicDriverFactoryList::Clear()
{
    ((::Graphic3d_GraphicDriverFactoryList*)_NativeInstance)->Clear(0L);
}

Macad::Occt::Graphic3d_GraphicDriverFactory^ Macad::Occt::Graphic3d_GraphicDriverFactoryList::First()
{
    Handle(::Graphic3d_GraphicDriverFactory) _result = ((::Graphic3d_GraphicDriverFactoryList*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_GraphicDriverFactory::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_GraphicDriverFactory^ Macad::Occt::Graphic3d_GraphicDriverFactoryList::Last()
{
    Handle(::Graphic3d_GraphicDriverFactory) _result = ((::Graphic3d_GraphicDriverFactoryList*)_NativeInstance)->Last();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_GraphicDriverFactory::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_GraphicDriverFactory^ Macad::Occt::Graphic3d_GraphicDriverFactoryList::Append(Macad::Occt::Graphic3d_GraphicDriverFactory^ theItem)
{
    Handle(::Graphic3d_GraphicDriverFactory) _result = ((::Graphic3d_GraphicDriverFactoryList*)_NativeInstance)->Append(Handle(::Graphic3d_GraphicDriverFactory)(theItem->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_GraphicDriverFactory::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_GraphicDriverFactory^ Macad::Occt::Graphic3d_GraphicDriverFactoryList::Prepend(Macad::Occt::Graphic3d_GraphicDriverFactory^ theItem)
{
    Handle(::Graphic3d_GraphicDriverFactory) _result = ((::Graphic3d_GraphicDriverFactoryList*)_NativeInstance)->Prepend(Handle(::Graphic3d_GraphicDriverFactory)(theItem->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_GraphicDriverFactory::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_GraphicDriverFactoryList::RemoveFirst()
{
    ((::Graphic3d_GraphicDriverFactoryList*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::Graphic3d_GraphicDriverFactoryList::Remove(Macad::Occt::Graphic3d_GraphicDriverFactoryList::Iterator^ theIter)
{
    ((::Graphic3d_GraphicDriverFactoryList*)_NativeInstance)->Remove(*(::Graphic3d_GraphicDriverFactoryList::Iterator*)theIter->NativeInstance);
}

Macad::Occt::Graphic3d_GraphicDriverFactory^ Macad::Occt::Graphic3d_GraphicDriverFactoryList::InsertBefore(Macad::Occt::Graphic3d_GraphicDriverFactory^ theItem, Macad::Occt::Graphic3d_GraphicDriverFactoryList::Iterator^ theIter)
{
    Handle(::Graphic3d_GraphicDriverFactory) _result = ((::Graphic3d_GraphicDriverFactoryList*)_NativeInstance)->InsertBefore(Handle(::Graphic3d_GraphicDriverFactory)(theItem->NativeInstance), *(::Graphic3d_GraphicDriverFactoryList::Iterator*)theIter->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_GraphicDriverFactory::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_GraphicDriverFactory^ Macad::Occt::Graphic3d_GraphicDriverFactoryList::InsertAfter(Macad::Occt::Graphic3d_GraphicDriverFactory^ theItem, Macad::Occt::Graphic3d_GraphicDriverFactoryList::Iterator^ theIter)
{
    Handle(::Graphic3d_GraphicDriverFactory) _result = ((::Graphic3d_GraphicDriverFactoryList*)_NativeInstance)->InsertAfter(Handle(::Graphic3d_GraphicDriverFactory)(theItem->NativeInstance), *(::Graphic3d_GraphicDriverFactoryList::Iterator*)theIter->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_GraphicDriverFactory::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_GraphicDriverFactoryList::Reverse()
{
    ((::Graphic3d_GraphicDriverFactoryList*)_NativeInstance)->Reverse();
}



//---------------------------------------------------------------------
//  Class  Graphic3d_GraphicDriverFactoryList::Iterator
//---------------------------------------------------------------------

bool Macad::Occt::Graphic3d_GraphicDriverFactoryList::Iterator::More()
{
    bool _result = ((::Graphic3d_GraphicDriverFactoryList::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Graphic3d_GraphicDriverFactoryList::Iterator::Next()
{
    ((::Graphic3d_GraphicDriverFactoryList::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Graphic3d_GraphicDriverFactory^ Macad::Occt::Graphic3d_GraphicDriverFactoryList::Iterator::Value()
{
    Handle(::Graphic3d_GraphicDriverFactory) _result = ((::Graphic3d_GraphicDriverFactoryList::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_GraphicDriverFactory::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_GraphicDriverFactory^ Macad::Occt::Graphic3d_GraphicDriverFactoryList::Iterator::ChangeValue()
{
    Handle(::Graphic3d_GraphicDriverFactory) _result = ((::Graphic3d_GraphicDriverFactoryList::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_GraphicDriverFactory::CreateDowncasted(_result.get());
}



//---------------------------------------------------------------------
//  Class  Graphic3d_IndexedMapOfStructure
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_IndexedMapOfStructure::Graphic3d_IndexedMapOfStructure()
    : Macad::Occt::BaseClass<::Graphic3d_IndexedMapOfStructure>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_IndexedMapOfStructure();
}

Macad::Occt::Graphic3d_IndexedMapOfStructure::Graphic3d_IndexedMapOfStructure(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::Graphic3d_IndexedMapOfStructure>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_IndexedMapOfStructure(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::Graphic3d_IndexedMapOfStructure::Graphic3d_IndexedMapOfStructure(int theNbBuckets)
    : Macad::Occt::BaseClass<::Graphic3d_IndexedMapOfStructure>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_IndexedMapOfStructure(theNbBuckets, 0L);
}

void Macad::Occt::Graphic3d_IndexedMapOfStructure::Exchange(Macad::Occt::Graphic3d_IndexedMapOfStructure^ theOther)
{
    ((::Graphic3d_IndexedMapOfStructure*)_NativeInstance)->Exchange(*(::Graphic3d_IndexedMapOfStructure*)theOther->NativeInstance);
}

Macad::Occt::Graphic3d_IndexedMapOfStructure^ Macad::Occt::Graphic3d_IndexedMapOfStructure::Assign(Macad::Occt::Graphic3d_IndexedMapOfStructure^ theOther)
{
    ::Graphic3d_IndexedMapOfStructure* _result = new ::Graphic3d_IndexedMapOfStructure();
    *_result = ((::Graphic3d_IndexedMapOfStructure*)_NativeInstance)->Assign(*(::Graphic3d_IndexedMapOfStructure*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_IndexedMapOfStructure(_result);
}

void Macad::Occt::Graphic3d_IndexedMapOfStructure::ReSize(int theExtent)
{
    ((::Graphic3d_IndexedMapOfStructure*)_NativeInstance)->ReSize(theExtent);
}

int Macad::Occt::Graphic3d_IndexedMapOfStructure::Add(Macad::Occt::Graphic3d_CStructure^ theKey1)
{
    int _result = ((::Graphic3d_IndexedMapOfStructure*)_NativeInstance)->Add((::Graphic3d_CStructure*)theKey1->NativeInstance);
    return _result;
}

bool Macad::Occt::Graphic3d_IndexedMapOfStructure::Contains(Macad::Occt::Graphic3d_CStructure^ theKey1)
{
    bool _result = ((::Graphic3d_IndexedMapOfStructure*)_NativeInstance)->Contains((::Graphic3d_CStructure*)theKey1->NativeInstance);
    return _result;
}

void Macad::Occt::Graphic3d_IndexedMapOfStructure::Substitute(int theIndex, Macad::Occt::Graphic3d_CStructure^ theKey1)
{
    ((::Graphic3d_IndexedMapOfStructure*)_NativeInstance)->Substitute(theIndex, (::Graphic3d_CStructure*)theKey1->NativeInstance);
}

void Macad::Occt::Graphic3d_IndexedMapOfStructure::Swap(int theIndex1, int theIndex2)
{
    ((::Graphic3d_IndexedMapOfStructure*)_NativeInstance)->Swap(theIndex1, theIndex2);
}

void Macad::Occt::Graphic3d_IndexedMapOfStructure::RemoveLast()
{
    ((::Graphic3d_IndexedMapOfStructure*)_NativeInstance)->RemoveLast();
}

void Macad::Occt::Graphic3d_IndexedMapOfStructure::RemoveFromIndex(int theIndex)
{
    ((::Graphic3d_IndexedMapOfStructure*)_NativeInstance)->RemoveFromIndex(theIndex);
}

bool Macad::Occt::Graphic3d_IndexedMapOfStructure::RemoveKey(Macad::Occt::Graphic3d_CStructure^ theKey1)
{
    bool _result = ((::Graphic3d_IndexedMapOfStructure*)_NativeInstance)->RemoveKey((::Graphic3d_CStructure*)theKey1->NativeInstance);
    return _result;
}

Macad::Occt::Graphic3d_CStructure^ Macad::Occt::Graphic3d_IndexedMapOfStructure::FindKey(int theIndex)
{
    throw gcnew System::NotImplementedException();
}

int Macad::Occt::Graphic3d_IndexedMapOfStructure::FindIndex(Macad::Occt::Graphic3d_CStructure^ theKey1)
{
    int _result = ((::Graphic3d_IndexedMapOfStructure*)_NativeInstance)->FindIndex((::Graphic3d_CStructure*)theKey1->NativeInstance);
    return _result;
}

void Macad::Occt::Graphic3d_IndexedMapOfStructure::Clear(bool doReleaseMemory)
{
    ((::Graphic3d_IndexedMapOfStructure*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::Graphic3d_IndexedMapOfStructure::Clear()
{
    ((::Graphic3d_IndexedMapOfStructure*)_NativeInstance)->Clear(false);
}

int Macad::Occt::Graphic3d_IndexedMapOfStructure::Size()
{
    int _result = ((::Graphic3d_IndexedMapOfStructure*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  Graphic3d_IndexedMapOfStructure::Iterator
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_IndexedMapOfStructure::Iterator::Iterator()
    : Macad::Occt::BaseClass<::Graphic3d_IndexedMapOfStructure::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_IndexedMapOfStructure::Iterator();
}

bool Macad::Occt::Graphic3d_IndexedMapOfStructure::Iterator::More()
{
    bool _result = ((::Graphic3d_IndexedMapOfStructure::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Graphic3d_IndexedMapOfStructure::Iterator::Next()
{
    ((::Graphic3d_IndexedMapOfStructure::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Graphic3d_CStructure^ Macad::Occt::Graphic3d_IndexedMapOfStructure::Iterator::Value()
{
    throw gcnew System::NotImplementedException();
}

bool Macad::Occt::Graphic3d_IndexedMapOfStructure::Iterator::IsEqual(Macad::Occt::Graphic3d_IndexedMapOfStructure::Iterator^ theOther)
{
    bool _result = ((::Graphic3d_IndexedMapOfStructure::Iterator*)_NativeInstance)->IsEqual(*(::Graphic3d_IndexedMapOfStructure::Iterator*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::Graphic3d_IndexedMapOfStructure::Iterator::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Graphic3d_IndexedMapOfStructure::Iterator::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Iterator^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Graphic3d_MapOfObject
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_MapOfObject::Graphic3d_MapOfObject()
    : Macad::Occt::BaseClass<::Graphic3d_MapOfObject>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_MapOfObject();
}

Macad::Occt::Graphic3d_MapOfObject::Graphic3d_MapOfObject(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::Graphic3d_MapOfObject>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_MapOfObject(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::Graphic3d_MapOfObject::Graphic3d_MapOfObject(int theNbBuckets)
    : Macad::Occt::BaseClass<::Graphic3d_MapOfObject>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_MapOfObject(theNbBuckets, 0L);
}

void Macad::Occt::Graphic3d_MapOfObject::Exchange(Macad::Occt::Graphic3d_MapOfObject^ theOther)
{
    ((::Graphic3d_MapOfObject*)_NativeInstance)->Exchange(*(::Graphic3d_MapOfObject*)theOther->NativeInstance);
}

Macad::Occt::Graphic3d_MapOfObject^ Macad::Occt::Graphic3d_MapOfObject::Assign(Macad::Occt::Graphic3d_MapOfObject^ theOther)
{
    ::Graphic3d_MapOfObject* _result = new ::Graphic3d_MapOfObject();
    *_result = ((::Graphic3d_MapOfObject*)_NativeInstance)->Assign(*(::Graphic3d_MapOfObject*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_MapOfObject(_result);
}

void Macad::Occt::Graphic3d_MapOfObject::ReSize(int N)
{
    ((::Graphic3d_MapOfObject*)_NativeInstance)->ReSize(N);
}

bool Macad::Occt::Graphic3d_MapOfObject::Bind(Macad::Occt::Standard_Transient^ theKey, Macad::Occt::Graphic3d_ViewAffinity^ theItem)
{
    bool _result = ((::Graphic3d_MapOfObject*)_NativeInstance)->Bind((::Standard_Transient*)theKey->NativeInstance, Handle(::Graphic3d_ViewAffinity)(theItem->NativeInstance));
    return _result;
}

Macad::Occt::Graphic3d_ViewAffinity^ Macad::Occt::Graphic3d_MapOfObject::Bound(Macad::Occt::Standard_Transient^ theKey, Macad::Occt::Graphic3d_ViewAffinity^ theItem)
{
    throw gcnew System::NotImplementedException();
}

bool Macad::Occt::Graphic3d_MapOfObject::IsBound(Macad::Occt::Standard_Transient^ theKey)
{
    bool _result = ((::Graphic3d_MapOfObject*)_NativeInstance)->IsBound((::Standard_Transient*)theKey->NativeInstance);
    return _result;
}

bool Macad::Occt::Graphic3d_MapOfObject::UnBind(Macad::Occt::Standard_Transient^ theKey)
{
    bool _result = ((::Graphic3d_MapOfObject*)_NativeInstance)->UnBind((::Standard_Transient*)theKey->NativeInstance);
    return _result;
}

Macad::Occt::Graphic3d_ViewAffinity^ Macad::Occt::Graphic3d_MapOfObject::Seek(Macad::Occt::Standard_Transient^ theKey)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_ViewAffinity^ Macad::Occt::Graphic3d_MapOfObject::Find(Macad::Occt::Standard_Transient^ theKey)
{
    Handle(::Graphic3d_ViewAffinity) _result = ((::Graphic3d_MapOfObject*)_NativeInstance)->Find((::Standard_Transient*)theKey->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ViewAffinity::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_ViewAffinity^ Macad::Occt::Graphic3d_MapOfObject::ChangeSeek(Macad::Occt::Standard_Transient^ theKey)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_ViewAffinity^ Macad::Occt::Graphic3d_MapOfObject::ChangeFind(Macad::Occt::Standard_Transient^ theKey)
{
    Handle(::Graphic3d_ViewAffinity) _result = ((::Graphic3d_MapOfObject*)_NativeInstance)->ChangeFind((::Standard_Transient*)theKey->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ViewAffinity::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_MapOfObject::Clear(bool doReleaseMemory)
{
    ((::Graphic3d_MapOfObject*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::Graphic3d_MapOfObject::Clear()
{
    ((::Graphic3d_MapOfObject*)_NativeInstance)->Clear(false);
}

int Macad::Occt::Graphic3d_MapOfObject::Size()
{
    int _result = ((::Graphic3d_MapOfObject*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  Graphic3d_MapOfObject::Iterator
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_MapOfObject::Iterator::Iterator()
    : Macad::Occt::BaseClass<::Graphic3d_MapOfObject::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_MapOfObject::Iterator();
}

bool Macad::Occt::Graphic3d_MapOfObject::Iterator::More()
{
    bool _result = ((::Graphic3d_MapOfObject::Iterator*)_NativeInstance)->More();
    return _result;
}

void Macad::Occt::Graphic3d_MapOfObject::Iterator::Next()
{
    ((::Graphic3d_MapOfObject::Iterator*)_NativeInstance)->Next();
}

Macad::Occt::Graphic3d_ViewAffinity^ Macad::Occt::Graphic3d_MapOfObject::Iterator::Value()
{
    Handle(::Graphic3d_ViewAffinity) _result = ((::Graphic3d_MapOfObject::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ViewAffinity::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_ViewAffinity^ Macad::Occt::Graphic3d_MapOfObject::Iterator::ChangeValue()
{
    Handle(::Graphic3d_ViewAffinity) _result = ((::Graphic3d_MapOfObject::Iterator*)_NativeInstance)->ChangeValue();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ViewAffinity::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Transient^ Macad::Occt::Graphic3d_MapOfObject::Iterator::Key()
{
    const ::Standard_Transient* _result = ((::Graphic3d_MapOfObject::Iterator*)_NativeInstance)->Key();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Standard_Transient((::Standard_Transient*)_result);
}



//---------------------------------------------------------------------
//  Class  Graphic3d_IndexedMapOfView
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_IndexedMapOfView::Graphic3d_IndexedMapOfView()
    : Macad::Occt::BaseClass<::Graphic3d_IndexedMapOfView>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_IndexedMapOfView();
}

Macad::Occt::Graphic3d_IndexedMapOfView::Graphic3d_IndexedMapOfView(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::BaseClass<::Graphic3d_IndexedMapOfView>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_IndexedMapOfView(theNbBuckets, Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

Macad::Occt::Graphic3d_IndexedMapOfView::Graphic3d_IndexedMapOfView(int theNbBuckets)
    : Macad::Occt::BaseClass<::Graphic3d_IndexedMapOfView>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_IndexedMapOfView(theNbBuckets, 0L);
}

void Macad::Occt::Graphic3d_IndexedMapOfView::Exchange(Macad::Occt::Graphic3d_IndexedMapOfView^ theOther)
{
    ((::Graphic3d_IndexedMapOfView*)_NativeInstance)->Exchange(*(::Graphic3d_IndexedMapOfView*)theOther->NativeInstance);
}

Macad::Occt::Graphic3d_IndexedMapOfView^ Macad::Occt::Graphic3d_IndexedMapOfView::Assign(Macad::Occt::Graphic3d_IndexedMapOfView^ theOther)
{
    ::Graphic3d_IndexedMapOfView* _result = new ::Graphic3d_IndexedMapOfView();
    *_result = ((::Graphic3d_IndexedMapOfView*)_NativeInstance)->Assign(*(::Graphic3d_IndexedMapOfView*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_IndexedMapOfView(_result);
}

void Macad::Occt::Graphic3d_IndexedMapOfView::ReSize(int theExtent)
{
    ((::Graphic3d_IndexedMapOfView*)_NativeInstance)->ReSize(theExtent);
}

int Macad::Occt::Graphic3d_IndexedMapOfView::Add(Macad::Occt::Graphic3d_CView^ theKey1)
{
    int _result = ((::Graphic3d_IndexedMapOfView*)_NativeInstance)->Add((::Graphic3d_CView*)theKey1->NativeInstance);
    return _result;
}

bool Macad::Occt::Graphic3d_IndexedMapOfView::Contains(Macad::Occt::Graphic3d_CView^ theKey1)
{
    bool _result = ((::Graphic3d_IndexedMapOfView*)_NativeInstance)->Contains((::Graphic3d_CView*)theKey1->NativeInstance);
    return _result;
}

void Macad::Occt::Graphic3d_IndexedMapOfView::Substitute(int theIndex, Macad::Occt::Graphic3d_CView^ theKey1)
{
    ((::Graphic3d_IndexedMapOfView*)_NativeInstance)->Substitute(theIndex, (::Graphic3d_CView*)theKey1->NativeInstance);
}

void Macad::Occt::Graphic3d_IndexedMapOfView::Swap(int theIndex1, int theIndex2)
{
    ((::Graphic3d_IndexedMapOfView*)_NativeInstance)->Swap(theIndex1, theIndex2);
}

void Macad::Occt::Graphic3d_IndexedMapOfView::RemoveLast()
{
    ((::Graphic3d_IndexedMapOfView*)_NativeInstance)->RemoveLast();
}

void Macad::Occt::Graphic3d_IndexedMapOfView::RemoveFromIndex(int theIndex)
{
    ((::Graphic3d_IndexedMapOfView*)_NativeInstance)->RemoveFromIndex(theIndex);
}

bool Macad::Occt::Graphic3d_IndexedMapOfView::RemoveKey(Macad::Occt::Graphic3d_CView^ theKey1)
{
    bool _result = ((::Graphic3d_IndexedMapOfView*)_NativeInstance)->RemoveKey((::Graphic3d_CView*)theKey1->NativeInstance);
    return _result;
}

Macad::Occt::Graphic3d_CView^ Macad::Occt::Graphic3d_IndexedMapOfView::FindKey(int theIndex)
{
    throw gcnew System::NotImplementedException();
}

int Macad::Occt::Graphic3d_IndexedMapOfView::FindIndex(Macad::Occt::Graphic3d_CView^ theKey1)
{
    int _result = ((::Graphic3d_IndexedMapOfView*)_NativeInstance)->FindIndex((::Graphic3d_CView*)theKey1->NativeInstance);
    return _result;
}

void Macad::Occt::Graphic3d_IndexedMapOfView::Clear(bool doReleaseMemory)
{
    ((::Graphic3d_IndexedMapOfView*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::Graphic3d_IndexedMapOfView::Clear()
{
    ((::Graphic3d_IndexedMapOfView*)_NativeInstance)->Clear(false);
}

int Macad::Occt::Graphic3d_IndexedMapOfView::Size()
{
    int _result = ((::Graphic3d_IndexedMapOfView*)_NativeInstance)->Size();
    return _result;
}



//---------------------------------------------------------------------
//  Class  Graphic3d_IndexedMapOfView::Iterator
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  Graphic3d_BufferRange
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_BufferRange::Graphic3d_BufferRange()
    : Macad::Occt::BaseClass<::Graphic3d_BufferRange>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_BufferRange();
}

Macad::Occt::Graphic3d_BufferRange::Graphic3d_BufferRange(int theStart, int theLength)
    : Macad::Occt::BaseClass<::Graphic3d_BufferRange>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_BufferRange(theStart, theLength);
}

bool Macad::Occt::Graphic3d_BufferRange::IsEmpty()
{
    bool _result = ((::Graphic3d_BufferRange*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::Graphic3d_BufferRange::Upper()
{
    int _result = ((::Graphic3d_BufferRange*)_NativeInstance)->Upper();
    return _result;
}

void Macad::Occt::Graphic3d_BufferRange::Clear()
{
    ((::Graphic3d_BufferRange*)_NativeInstance)->Clear();
}

void Macad::Occt::Graphic3d_BufferRange::Unite(Macad::Occt::Graphic3d_BufferRange^ theRange)
{
    ((::Graphic3d_BufferRange*)_NativeInstance)->Unite(*(::Graphic3d_BufferRange*)theRange->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Attribute
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Attribute::Graphic3d_Attribute()
    : Macad::Occt::BaseClass<::Graphic3d_Attribute>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Attribute();
}

int Macad::Occt::Graphic3d_Attribute::Stride()
{
    int _result = ((::Graphic3d_Attribute*)_NativeInstance)->Stride();
    return _result;
}

int Macad::Occt::Graphic3d_Attribute::Stride(Macad::Occt::Graphic3d_TypeOfData theType)
{
    int _result = ::Graphic3d_Attribute::Stride((::Graphic3d_TypeOfData)theType);
    return _result;
}



//---------------------------------------------------------------------
//  Class  Graphic3d_PolygonOffset
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_PolygonOffset::Graphic3d_PolygonOffset()
    : Macad::Occt::BaseClass<::Graphic3d_PolygonOffset>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_PolygonOffset();
}

void Macad::Occt::Graphic3d_PolygonOffset::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_PolygonOffset*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Graphic3d_PolygonOffset::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_PolygonOffset*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ValueInterface
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ValueInterface::Graphic3d_ValueInterface()
    : Macad::Occt::BaseClass<::Graphic3d_ValueInterface>(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

long long unsigned int Macad::Occt::Graphic3d_ValueInterface::TypeID()
{
    long long unsigned int _result = ((::Graphic3d_ValueInterface*)_NativeInstance)->TypeID();
    return _result;
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ZLayerSettings
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ZLayerSettings::Graphic3d_ZLayerSettings()
    : Macad::Occt::BaseClass<::Graphic3d_ZLayerSettings>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_ZLayerSettings();
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_ZLayerSettings::Name()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Graphic3d_ZLayerSettings*)_NativeInstance)->Name();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::Graphic3d_ZLayerSettings::SetName(Macad::Occt::TCollection_AsciiString^ theName)
{
    ((::Graphic3d_ZLayerSettings*)_NativeInstance)->SetName(*(::TCollection_AsciiString*)theName->NativeInstance);
}

Macad::Occt::Graphic3d_LightSet^ Macad::Occt::Graphic3d_ZLayerSettings::Lights()
{
    Handle(::Graphic3d_LightSet) _result = ((::Graphic3d_ZLayerSettings*)_NativeInstance)->Lights();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_LightSet::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_ZLayerSettings::SetLights(Macad::Occt::Graphic3d_LightSet^ theLights)
{
    ((::Graphic3d_ZLayerSettings*)_NativeInstance)->SetLights(Handle(::Graphic3d_LightSet)(theLights->NativeInstance));
}

Macad::Occt::XYZ Macad::Occt::Graphic3d_ZLayerSettings::Origin()
{
    ::gp_XYZ _nativeResult = ((::Graphic3d_ZLayerSettings*)_NativeInstance)->Origin();
    return Macad::Occt::XYZ(_nativeResult);
}

Macad::Occt::TopLoc_Datum3D^ Macad::Occt::Graphic3d_ZLayerSettings::OriginTransformation()
{
    Handle(::TopLoc_Datum3D) _result = ((::Graphic3d_ZLayerSettings*)_NativeInstance)->OriginTransformation();
    return _result.IsNull() ? nullptr : Macad::Occt::TopLoc_Datum3D::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_ZLayerSettings::SetOrigin(Macad::Occt::XYZ theOrigin)
{
    pin_ptr<Macad::Occt::XYZ> pp_theOrigin = &theOrigin;
    ((::Graphic3d_ZLayerSettings*)_NativeInstance)->SetOrigin(*(gp_XYZ*)pp_theOrigin);
}

bool Macad::Occt::Graphic3d_ZLayerSettings::HasCullingDistance()
{
    bool _result = ((::Graphic3d_ZLayerSettings*)_NativeInstance)->HasCullingDistance();
    return _result;
}

double Macad::Occt::Graphic3d_ZLayerSettings::CullingDistance()
{
    double _result = ((::Graphic3d_ZLayerSettings*)_NativeInstance)->CullingDistance();
    return _result;
}

void Macad::Occt::Graphic3d_ZLayerSettings::SetCullingDistance(double theDistance)
{
    ((::Graphic3d_ZLayerSettings*)_NativeInstance)->SetCullingDistance(theDistance);
}

bool Macad::Occt::Graphic3d_ZLayerSettings::HasCullingSize()
{
    bool _result = ((::Graphic3d_ZLayerSettings*)_NativeInstance)->HasCullingSize();
    return _result;
}

double Macad::Occt::Graphic3d_ZLayerSettings::CullingSize()
{
    double _result = ((::Graphic3d_ZLayerSettings*)_NativeInstance)->CullingSize();
    return _result;
}

void Macad::Occt::Graphic3d_ZLayerSettings::SetCullingSize(double theSize)
{
    ((::Graphic3d_ZLayerSettings*)_NativeInstance)->SetCullingSize(theSize);
}

bool Macad::Occt::Graphic3d_ZLayerSettings::IsImmediate()
{
    bool _result = ((::Graphic3d_ZLayerSettings*)_NativeInstance)->IsImmediate();
    return _result;
}

void Macad::Occt::Graphic3d_ZLayerSettings::SetImmediate(bool theValue)
{
    ((::Graphic3d_ZLayerSettings*)_NativeInstance)->SetImmediate(theValue);
}

bool Macad::Occt::Graphic3d_ZLayerSettings::IsRaytracable()
{
    bool _result = ((::Graphic3d_ZLayerSettings*)_NativeInstance)->IsRaytracable();
    return _result;
}

void Macad::Occt::Graphic3d_ZLayerSettings::SetRaytracable(bool theToRaytrace)
{
    ((::Graphic3d_ZLayerSettings*)_NativeInstance)->SetRaytracable(theToRaytrace);
}

bool Macad::Occt::Graphic3d_ZLayerSettings::UseEnvironmentTexture()
{
    bool _result = ((::Graphic3d_ZLayerSettings*)_NativeInstance)->UseEnvironmentTexture();
    return _result;
}

void Macad::Occt::Graphic3d_ZLayerSettings::SetEnvironmentTexture(bool theValue)
{
    ((::Graphic3d_ZLayerSettings*)_NativeInstance)->SetEnvironmentTexture(theValue);
}

bool Macad::Occt::Graphic3d_ZLayerSettings::ToEnableDepthTest()
{
    bool _result = ((::Graphic3d_ZLayerSettings*)_NativeInstance)->ToEnableDepthTest();
    return _result;
}

void Macad::Occt::Graphic3d_ZLayerSettings::SetEnableDepthTest(bool theValue)
{
    ((::Graphic3d_ZLayerSettings*)_NativeInstance)->SetEnableDepthTest(theValue);
}

bool Macad::Occt::Graphic3d_ZLayerSettings::ToEnableDepthWrite()
{
    bool _result = ((::Graphic3d_ZLayerSettings*)_NativeInstance)->ToEnableDepthWrite();
    return _result;
}

void Macad::Occt::Graphic3d_ZLayerSettings::SetEnableDepthWrite(bool theValue)
{
    ((::Graphic3d_ZLayerSettings*)_NativeInstance)->SetEnableDepthWrite(theValue);
}

bool Macad::Occt::Graphic3d_ZLayerSettings::ToClearDepth()
{
    bool _result = ((::Graphic3d_ZLayerSettings*)_NativeInstance)->ToClearDepth();
    return _result;
}

void Macad::Occt::Graphic3d_ZLayerSettings::SetClearDepth(bool theValue)
{
    ((::Graphic3d_ZLayerSettings*)_NativeInstance)->SetClearDepth(theValue);
}

bool Macad::Occt::Graphic3d_ZLayerSettings::ToRenderInDepthPrepass()
{
    bool _result = ((::Graphic3d_ZLayerSettings*)_NativeInstance)->ToRenderInDepthPrepass();
    return _result;
}

void Macad::Occt::Graphic3d_ZLayerSettings::SetRenderInDepthPrepass(bool theToRender)
{
    ((::Graphic3d_ZLayerSettings*)_NativeInstance)->SetRenderInDepthPrepass(theToRender);
}

Macad::Occt::Graphic3d_PolygonOffset^ Macad::Occt::Graphic3d_ZLayerSettings::PolygonOffset()
{
    ::Graphic3d_PolygonOffset* _result = new ::Graphic3d_PolygonOffset();
    *_result = (::Graphic3d_PolygonOffset)((::Graphic3d_ZLayerSettings*)_NativeInstance)->PolygonOffset();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_PolygonOffset(_result);
}

void Macad::Occt::Graphic3d_ZLayerSettings::SetPolygonOffset(Macad::Occt::Graphic3d_PolygonOffset^ theParams)
{
    ((::Graphic3d_ZLayerSettings*)_NativeInstance)->SetPolygonOffset(*(::Graphic3d_PolygonOffset*)theParams->NativeInstance);
}

Macad::Occt::Graphic3d_PolygonOffset^ Macad::Occt::Graphic3d_ZLayerSettings::ChangePolygonOffset()
{
    ::Graphic3d_PolygonOffset* _result = new ::Graphic3d_PolygonOffset();
    *_result = ((::Graphic3d_ZLayerSettings*)_NativeInstance)->ChangePolygonOffset();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_PolygonOffset(_result);
}

void Macad::Occt::Graphic3d_ZLayerSettings::SetDepthOffsetPositive()
{
    ((::Graphic3d_ZLayerSettings*)_NativeInstance)->SetDepthOffsetPositive();
}

void Macad::Occt::Graphic3d_ZLayerSettings::SetDepthOffsetNegative()
{
    ((::Graphic3d_ZLayerSettings*)_NativeInstance)->SetDepthOffsetNegative();
}

void Macad::Occt::Graphic3d_ZLayerSettings::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_ZLayerSettings*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Graphic3d_ZLayerSettings::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_ZLayerSettings*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  Graphic3d_BoundBuffer
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_BoundBuffer::Graphic3d_BoundBuffer(Macad::Occt::NCollection_BaseAllocator^ theAlloc)
    : Macad::Occt::NCollection_Buffer(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_BoundBuffer(Handle(::NCollection_BaseAllocator)(theAlloc->NativeInstance));
}

bool Macad::Occt::Graphic3d_BoundBuffer::Init(int theNbBounds, bool theHasColors)
{
    bool _result = ((::Graphic3d_BoundBuffer*)_NativeInstance)->Init(theNbBounds, theHasColors);
    return _result;
}

void Macad::Occt::Graphic3d_BoundBuffer::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_BoundBuffer*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Graphic3d_BoundBuffer::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_BoundBuffer*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::Graphic3d_BoundBuffer^ Macad::Occt::Graphic3d_BoundBuffer::CreateDowncasted(::Graphic3d_BoundBuffer* instance)
{
    return gcnew Macad::Occt::Graphic3d_BoundBuffer( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfPrimitives
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ArrayOfPrimitives^ Macad::Occt::Graphic3d_ArrayOfPrimitives::CreateArray(Macad::Occt::Graphic3d_TypeOfPrimitiveArray theType, int theMaxVertexs, int theMaxEdges, int theArrayFlags)
{
    Handle(::Graphic3d_ArrayOfPrimitives) _result = ::Graphic3d_ArrayOfPrimitives::CreateArray((::Graphic3d_TypeOfPrimitiveArray)theType, theMaxVertexs, theMaxEdges, theArrayFlags);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfPrimitives::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_ArrayOfPrimitives^ Macad::Occt::Graphic3d_ArrayOfPrimitives::CreateArray(Macad::Occt::Graphic3d_TypeOfPrimitiveArray theType, int theMaxVertexs, int theMaxBounds, int theMaxEdges, int theArrayFlags)
{
    Handle(::Graphic3d_ArrayOfPrimitives) _result = ::Graphic3d_ArrayOfPrimitives::CreateArray((::Graphic3d_TypeOfPrimitiveArray)theType, theMaxVertexs, theMaxBounds, theMaxEdges, theArrayFlags);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ArrayOfPrimitives::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_TypeOfPrimitiveArray Macad::Occt::Graphic3d_ArrayOfPrimitives::Type()
{
    ::Graphic3d_TypeOfPrimitiveArray _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->Type();
    return (Macad::Occt::Graphic3d_TypeOfPrimitiveArray)_result;
}

System::String^ Macad::Occt::Graphic3d_ArrayOfPrimitives::StringType()
{
    Standard_CString _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->StringType();
    return gcnew System::String(_result);
}

bool Macad::Occt::Graphic3d_ArrayOfPrimitives::HasVertexNormals()
{
    bool _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->HasVertexNormals();
    return _result;
}

bool Macad::Occt::Graphic3d_ArrayOfPrimitives::HasVertexColors()
{
    bool _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->HasVertexColors();
    return _result;
}

bool Macad::Occt::Graphic3d_ArrayOfPrimitives::HasVertexTexels()
{
    bool _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->HasVertexTexels();
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::VertexNumber()
{
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->VertexNumber();
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::VertexNumberAllocated()
{
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->VertexNumberAllocated();
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::ItemNumber()
{
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->ItemNumber();
    return _result;
}

bool Macad::Occt::Graphic3d_ArrayOfPrimitives::IsValid()
{
    bool _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->IsValid();
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddVertex(Macad::Occt::Pnt theVertex)
{
    pin_ptr<Macad::Occt::Pnt> pp_theVertex = &theVertex;
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddVertex(*(gp_Pnt*)pp_theVertex);
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddVertex(Macad::Occt::Graphic3d_Vec3^ theVertex)
{
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddVertex(*(::Graphic3d_Vec3*)theVertex->NativeInstance);
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddVertex(double theX, double theY, double theZ)
{
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddVertex(theX, theY, theZ);
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddVertex(float theX, float theY, float theZ)
{
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddVertex(theX, theY, theZ);
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddVertex(Macad::Occt::Pnt theVertex, Macad::Occt::Quantity_Color^ theColor)
{
    pin_ptr<Macad::Occt::Pnt> pp_theVertex = &theVertex;
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddVertex(*(gp_Pnt*)pp_theVertex, *(::Quantity_Color*)theColor->NativeInstance);
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddVertex(Macad::Occt::Pnt theVertex, int theColor32)
{
    pin_ptr<Macad::Occt::Pnt> pp_theVertex = &theVertex;
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddVertex(*(gp_Pnt*)pp_theVertex, theColor32);
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddVertex(Macad::Occt::Pnt theVertex, Macad::Occt::Graphic3d_Vec4ub^ theColor)
{
    pin_ptr<Macad::Occt::Pnt> pp_theVertex = &theVertex;
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddVertex(*(gp_Pnt*)pp_theVertex, *(::Graphic3d_Vec4ub*)theColor->NativeInstance);
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddVertex(Macad::Occt::Pnt theVertex, Macad::Occt::Dir theNormal)
{
    pin_ptr<Macad::Occt::Pnt> pp_theVertex = &theVertex;
    pin_ptr<Macad::Occt::Dir> pp_theNormal = &theNormal;
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddVertex(*(gp_Pnt*)pp_theVertex, *(gp_Dir*)pp_theNormal);
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddVertex(double theX, double theY, double theZ, double theNX, double theNY, double theNZ)
{
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddVertex(theX, theY, theZ, theNX, theNY, theNZ);
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddVertex(float theX, float theY, float theZ, float theNX, float theNY, float theNZ)
{
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddVertex(theX, theY, theZ, theNX, theNY, theNZ);
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddVertex(Macad::Occt::Pnt theVertex, Macad::Occt::Dir theNormal, Macad::Occt::Quantity_Color^ theColor)
{
    pin_ptr<Macad::Occt::Pnt> pp_theVertex = &theVertex;
    pin_ptr<Macad::Occt::Dir> pp_theNormal = &theNormal;
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddVertex(*(gp_Pnt*)pp_theVertex, *(gp_Dir*)pp_theNormal, *(::Quantity_Color*)theColor->NativeInstance);
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddVertex(Macad::Occt::Pnt theVertex, Macad::Occt::Dir theNormal, int theColor32)
{
    pin_ptr<Macad::Occt::Pnt> pp_theVertex = &theVertex;
    pin_ptr<Macad::Occt::Dir> pp_theNormal = &theNormal;
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddVertex(*(gp_Pnt*)pp_theVertex, *(gp_Dir*)pp_theNormal, theColor32);
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddVertex(Macad::Occt::Pnt theVertex, Macad::Occt::Pnt2d theTexel)
{
    pin_ptr<Macad::Occt::Pnt> pp_theVertex = &theVertex;
    pin_ptr<Macad::Occt::Pnt2d> pp_theTexel = &theTexel;
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddVertex(*(gp_Pnt*)pp_theVertex, *(gp_Pnt2d*)pp_theTexel);
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddVertex(double theX, double theY, double theZ, double theTX, double theTY)
{
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddVertex(theX, theY, theZ, theTX, theTY);
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddVertex(float theX, float theY, float theZ, float theTX, float theTY)
{
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddVertex(theX, theY, theZ, theTX, theTY);
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddVertex(Macad::Occt::Pnt theVertex, Macad::Occt::Dir theNormal, Macad::Occt::Pnt2d theTexel)
{
    pin_ptr<Macad::Occt::Pnt> pp_theVertex = &theVertex;
    pin_ptr<Macad::Occt::Dir> pp_theNormal = &theNormal;
    pin_ptr<Macad::Occt::Pnt2d> pp_theTexel = &theTexel;
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddVertex(*(gp_Pnt*)pp_theVertex, *(gp_Dir*)pp_theNormal, *(gp_Pnt2d*)pp_theTexel);
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddVertex(double theX, double theY, double theZ, double theNX, double theNY, double theNZ, double theTX, double theTY)
{
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddVertex(theX, theY, theZ, theNX, theNY, theNZ, theTX, theTY);
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddVertex(float theX, float theY, float theZ, float theNX, float theNY, float theNZ, float theTX, float theTY)
{
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddVertex(theX, theY, theZ, theNX, theNY, theNZ, theTX, theTY);
    return _result;
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::SetVertice(int theIndex, Macad::Occt::Pnt theVertex)
{
    pin_ptr<Macad::Occt::Pnt> pp_theVertex = &theVertex;
    ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->SetVertice(theIndex, *(gp_Pnt*)pp_theVertex);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::SetVertice(int theIndex, float theX, float theY, float theZ)
{
    ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->SetVertice(theIndex, theX, theY, theZ);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::SetVertexColor(int theIndex, Macad::Occt::Quantity_Color^ theColor)
{
    ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->SetVertexColor(theIndex, *(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::SetVertexColor(int theIndex, double theR, double theG, double theB)
{
    ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->SetVertexColor(theIndex, theR, theG, theB);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::SetVertexColor(int theIndex, Macad::Occt::Graphic3d_Vec4ub^ theColor)
{
    ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->SetVertexColor(theIndex, *(::Graphic3d_Vec4ub*)theColor->NativeInstance);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::SetVertexColor(int theIndex, int theColor32)
{
    ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->SetVertexColor(theIndex, theColor32);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::SetVertexNormal(int theIndex, Macad::Occt::Dir theNormal)
{
    pin_ptr<Macad::Occt::Dir> pp_theNormal = &theNormal;
    ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->SetVertexNormal(theIndex, *(gp_Dir*)pp_theNormal);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::SetVertexNormal(int theIndex, double theNX, double theNY, double theNZ)
{
    ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->SetVertexNormal(theIndex, theNX, theNY, theNZ);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::SetVertexTexel(int theIndex, Macad::Occt::Pnt2d theTexel)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theTexel = &theTexel;
    ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->SetVertexTexel(theIndex, *(gp_Pnt2d*)pp_theTexel);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::SetVertexTexel(int theIndex, double theTX, double theTY)
{
    ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->SetVertexTexel(theIndex, theTX, theTY);
}

Macad::Occt::Pnt Macad::Occt::Graphic3d_ArrayOfPrimitives::Vertice(int theRank)
{
    ::gp_Pnt _nativeResult = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->Vertice(theRank);
    return Macad::Occt::Pnt(_nativeResult);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::Vertice(int theRank, double% theX, double% theY, double% theZ)
{
    pin_ptr<double> pp_theX = &theX;
    pin_ptr<double> pp_theY = &theY;
    pin_ptr<double> pp_theZ = &theZ;
    ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->Vertice(theRank, *(double*)pp_theX, *(double*)pp_theY, *(double*)pp_theZ);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_ArrayOfPrimitives::VertexColor(int theRank)
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->VertexColor(theRank);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::VertexColor(int theIndex, Macad::Occt::Graphic3d_Vec4ub^ theColor)
{
    ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->VertexColor(theIndex, *(::Graphic3d_Vec4ub*)theColor->NativeInstance);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::VertexColor(int theRank, double% theR, double% theG, double% theB)
{
    pin_ptr<double> pp_theR = &theR;
    pin_ptr<double> pp_theG = &theG;
    pin_ptr<double> pp_theB = &theB;
    ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->VertexColor(theRank, *(double*)pp_theR, *(double*)pp_theG, *(double*)pp_theB);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::VertexColor(int theRank, int% theColor)
{
    pin_ptr<int> pp_theColor = &theColor;
    ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->VertexColor(theRank, *(int*)pp_theColor);
}

Macad::Occt::Dir Macad::Occt::Graphic3d_ArrayOfPrimitives::VertexNormal(int theRank)
{
    ::gp_Dir _nativeResult = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->VertexNormal(theRank);
    return Macad::Occt::Dir(_nativeResult);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::VertexNormal(int theRank, double% theNX, double% theNY, double% theNZ)
{
    pin_ptr<double> pp_theNX = &theNX;
    pin_ptr<double> pp_theNY = &theNY;
    pin_ptr<double> pp_theNZ = &theNZ;
    ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->VertexNormal(theRank, *(double*)pp_theNX, *(double*)pp_theNY, *(double*)pp_theNZ);
}

Macad::Occt::Pnt2d Macad::Occt::Graphic3d_ArrayOfPrimitives::VertexTexel(int theRank)
{
    ::gp_Pnt2d _nativeResult = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->VertexTexel(theRank);
    return Macad::Occt::Pnt2d(_nativeResult);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::VertexTexel(int theRank, double% theTX, double% theTY)
{
    pin_ptr<double> pp_theTX = &theTX;
    pin_ptr<double> pp_theTY = &theTY;
    ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->VertexTexel(theRank, *(double*)pp_theTX, *(double*)pp_theTY);
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::EdgeNumber()
{
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->EdgeNumber();
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::EdgeNumberAllocated()
{
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->EdgeNumberAllocated();
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::Edge(int theRank)
{
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->Edge(theRank);
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddEdge(int theVertexIndex)
{
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddEdge(theVertexIndex);
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddEdges(int theVertexIndex1, int theVertexIndex2)
{
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddEdges(theVertexIndex1, theVertexIndex2);
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddSegmentEdges(int theVertexIndex1, int theVertexIndex2)
{
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddSegmentEdges(theVertexIndex1, theVertexIndex2);
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddEdges(int theVertexIndex1, int theVertexIndex2, int theVertexIndex3)
{
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddEdges(theVertexIndex1, theVertexIndex2, theVertexIndex3);
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddTriangleEdges(int theVertexIndex1, int theVertexIndex2, int theVertexIndex3)
{
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddTriangleEdges(theVertexIndex1, theVertexIndex2, theVertexIndex3);
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddTriangleEdges(Macad::Occt::Graphic3d_Vec3i^ theIndexes)
{
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddTriangleEdges(*(::Graphic3d_Vec3i*)theIndexes->NativeInstance);
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddTriangleEdges(Macad::Occt::Graphic3d_Vec4i^ theIndexes)
{
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddTriangleEdges(*(::Graphic3d_Vec4i*)theIndexes->NativeInstance);
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddEdges(int theVertexIndex1, int theVertexIndex2, int theVertexIndex3, int theVertexIndex4)
{
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddEdges(theVertexIndex1, theVertexIndex2, theVertexIndex3, theVertexIndex4);
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddQuadEdges(int theVertexIndex1, int theVertexIndex2, int theVertexIndex3, int theVertexIndex4)
{
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddQuadEdges(theVertexIndex1, theVertexIndex2, theVertexIndex3, theVertexIndex4);
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddQuadTriangleEdges(int theVertexIndex1, int theVertexIndex2, int theVertexIndex3, int theVertexIndex4)
{
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddQuadTriangleEdges(theVertexIndex1, theVertexIndex2, theVertexIndex3, theVertexIndex4);
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddQuadTriangleEdges(Macad::Occt::Graphic3d_Vec4i^ theIndexes)
{
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddQuadTriangleEdges(*(::Graphic3d_Vec4i*)theIndexes->NativeInstance);
    return _result;
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::AddTriangleStripEdges(int theVertexLower, int theVertexUpper)
{
    ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddTriangleStripEdges(theVertexLower, theVertexUpper);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::AddTriangleFanEdges(int theVertexLower, int theVertexUpper, bool theToClose)
{
    ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddTriangleFanEdges(theVertexLower, theVertexUpper, theToClose);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::AddPolylineEdges(int theVertexLower, int theVertexUpper, bool theToClose)
{
    ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddPolylineEdges(theVertexLower, theVertexUpper, theToClose);
}

Macad::Occt::Graphic3d_BoundBuffer^ Macad::Occt::Graphic3d_ArrayOfPrimitives::Bounds()
{
    Handle(::Graphic3d_BoundBuffer) _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->Bounds();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_BoundBuffer::CreateDowncasted(_result.get());
}

bool Macad::Occt::Graphic3d_ArrayOfPrimitives::HasBoundColors()
{
    bool _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->HasBoundColors();
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::BoundNumber()
{
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->BoundNumber();
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::BoundNumberAllocated()
{
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->BoundNumberAllocated();
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::Bound(int theRank)
{
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->Bound(theRank);
    return _result;
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_ArrayOfPrimitives::BoundColor(int theRank)
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->BoundColor(theRank);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::BoundColor(int theRank, double% theR, double% theG, double% theB)
{
    pin_ptr<double> pp_theR = &theR;
    pin_ptr<double> pp_theG = &theG;
    pin_ptr<double> pp_theB = &theB;
    ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->BoundColor(theRank, *(double*)pp_theR, *(double*)pp_theG, *(double*)pp_theB);
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddBound(int theEdgeNumber)
{
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddBound(theEdgeNumber);
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddBound(int theEdgeNumber, Macad::Occt::Quantity_Color^ theBColor)
{
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddBound(theEdgeNumber, *(::Quantity_Color*)theBColor->NativeInstance);
    return _result;
}

int Macad::Occt::Graphic3d_ArrayOfPrimitives::AddBound(int theEdgeNumber, double theR, double theG, double theB)
{
    int _result = ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->AddBound(theEdgeNumber, theR, theG, theB);
    return _result;
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::SetBoundColor(int theIndex, Macad::Occt::Quantity_Color^ theColor)
{
    ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->SetBoundColor(theIndex, *(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::Graphic3d_ArrayOfPrimitives::SetBoundColor(int theIndex, double theR, double theG, double theB)
{
    ((::Graphic3d_ArrayOfPrimitives*)_NativeInstance)->SetBoundColor(theIndex, theR, theG, theB);
}

Macad::Occt::Graphic3d_ArrayOfPrimitives^ Macad::Occt::Graphic3d_ArrayOfPrimitives::CreateDowncasted(::Graphic3d_ArrayOfPrimitives* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::Graphic3d_ArrayOfPoints)))
        return Macad::Occt::Graphic3d_ArrayOfPoints::CreateDowncasted((::Graphic3d_ArrayOfPoints*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Graphic3d_ArrayOfPolygons)))
        return Macad::Occt::Graphic3d_ArrayOfPolygons::CreateDowncasted((::Graphic3d_ArrayOfPolygons*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Graphic3d_ArrayOfPolylines)))
        return Macad::Occt::Graphic3d_ArrayOfPolylines::CreateDowncasted((::Graphic3d_ArrayOfPolylines*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Graphic3d_ArrayOfQuadrangles)))
        return Macad::Occt::Graphic3d_ArrayOfQuadrangles::CreateDowncasted((::Graphic3d_ArrayOfQuadrangles*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Graphic3d_ArrayOfQuadrangleStrips)))
        return Macad::Occt::Graphic3d_ArrayOfQuadrangleStrips::CreateDowncasted((::Graphic3d_ArrayOfQuadrangleStrips*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Graphic3d_ArrayOfSegments)))
        return Macad::Occt::Graphic3d_ArrayOfSegments::CreateDowncasted((::Graphic3d_ArrayOfSegments*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Graphic3d_ArrayOfTriangleFans)))
        return Macad::Occt::Graphic3d_ArrayOfTriangleFans::CreateDowncasted((::Graphic3d_ArrayOfTriangleFans*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Graphic3d_ArrayOfTriangles)))
        return Macad::Occt::Graphic3d_ArrayOfTriangles::CreateDowncasted((::Graphic3d_ArrayOfTriangles*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Graphic3d_ArrayOfTriangleStrips)))
        return Macad::Occt::Graphic3d_ArrayOfTriangleStrips::CreateDowncasted((::Graphic3d_ArrayOfTriangleStrips*)instance);
    
    return gcnew Macad::Occt::Graphic3d_ArrayOfPrimitives( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfPoints
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ArrayOfPoints::Graphic3d_ArrayOfPoints(int theMaxVertexs, int theArrayFlags)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfPoints(theMaxVertexs, theArrayFlags);
}

Macad::Occt::Graphic3d_ArrayOfPoints::Graphic3d_ArrayOfPoints(int theMaxVertexs, bool theHasVColors, bool theHasVNormals)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfPoints(theMaxVertexs, theHasVColors, theHasVNormals);
}

Macad::Occt::Graphic3d_ArrayOfPoints::Graphic3d_ArrayOfPoints(int theMaxVertexs, bool theHasVColors)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfPoints(theMaxVertexs, theHasVColors, false);
}

Macad::Occt::Graphic3d_ArrayOfPoints::Graphic3d_ArrayOfPoints(int theMaxVertexs)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfPoints(theMaxVertexs, false, false);
}

Macad::Occt::Graphic3d_ArrayOfPoints^ Macad::Occt::Graphic3d_ArrayOfPoints::CreateDowncasted(::Graphic3d_ArrayOfPoints* instance)
{
    return gcnew Macad::Occt::Graphic3d_ArrayOfPoints( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfPolygons
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ArrayOfPolygons::Graphic3d_ArrayOfPolygons(int theMaxVertexs, int theMaxBounds, int theMaxEdges, int theArrayFlags)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfPolygons(theMaxVertexs, theMaxBounds, theMaxEdges, theArrayFlags);
}

Macad::Occt::Graphic3d_ArrayOfPolygons::Graphic3d_ArrayOfPolygons(int theMaxVertexs, int theMaxBounds, int theMaxEdges, bool theHasVNormals, bool theHasVColors, bool theHasBColors, bool theHasVTexels)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfPolygons(theMaxVertexs, theMaxBounds, theMaxEdges, theHasVNormals, theHasVColors, theHasBColors, theHasVTexels);
}

Macad::Occt::Graphic3d_ArrayOfPolygons::Graphic3d_ArrayOfPolygons(int theMaxVertexs, int theMaxBounds, int theMaxEdges, bool theHasVNormals, bool theHasVColors, bool theHasBColors)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfPolygons(theMaxVertexs, theMaxBounds, theMaxEdges, theHasVNormals, theHasVColors, theHasBColors, false);
}

Macad::Occt::Graphic3d_ArrayOfPolygons::Graphic3d_ArrayOfPolygons(int theMaxVertexs, int theMaxBounds, int theMaxEdges, bool theHasVNormals, bool theHasVColors)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfPolygons(theMaxVertexs, theMaxBounds, theMaxEdges, theHasVNormals, theHasVColors, false, false);
}

Macad::Occt::Graphic3d_ArrayOfPolygons::Graphic3d_ArrayOfPolygons(int theMaxVertexs, int theMaxBounds, int theMaxEdges, bool theHasVNormals)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfPolygons(theMaxVertexs, theMaxBounds, theMaxEdges, theHasVNormals, false, false, false);
}

Macad::Occt::Graphic3d_ArrayOfPolygons::Graphic3d_ArrayOfPolygons(int theMaxVertexs, int theMaxBounds, int theMaxEdges)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfPolygons(theMaxVertexs, theMaxBounds, theMaxEdges, false, false, false, false);
}

Macad::Occt::Graphic3d_ArrayOfPolygons::Graphic3d_ArrayOfPolygons(int theMaxVertexs, int theMaxBounds)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfPolygons(theMaxVertexs, theMaxBounds, 0, false, false, false, false);
}

Macad::Occt::Graphic3d_ArrayOfPolygons::Graphic3d_ArrayOfPolygons(int theMaxVertexs)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfPolygons(theMaxVertexs, 0, 0, false, false, false, false);
}

Macad::Occt::Graphic3d_ArrayOfPolygons^ Macad::Occt::Graphic3d_ArrayOfPolygons::CreateDowncasted(::Graphic3d_ArrayOfPolygons* instance)
{
    return gcnew Macad::Occt::Graphic3d_ArrayOfPolygons( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfPolylines
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ArrayOfPolylines::Graphic3d_ArrayOfPolylines(int theMaxVertexs, int theMaxBounds, int theMaxEdges, int theArrayFlags)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfPolylines(theMaxVertexs, theMaxBounds, theMaxEdges, theArrayFlags);
}

Macad::Occt::Graphic3d_ArrayOfPolylines::Graphic3d_ArrayOfPolylines(int theMaxVertexs, int theMaxBounds, int theMaxEdges, bool theHasVColors, bool theHasBColors)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfPolylines(theMaxVertexs, theMaxBounds, theMaxEdges, theHasVColors, theHasBColors);
}

Macad::Occt::Graphic3d_ArrayOfPolylines::Graphic3d_ArrayOfPolylines(int theMaxVertexs, int theMaxBounds, int theMaxEdges, bool theHasVColors)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfPolylines(theMaxVertexs, theMaxBounds, theMaxEdges, theHasVColors, false);
}

Macad::Occt::Graphic3d_ArrayOfPolylines::Graphic3d_ArrayOfPolylines(int theMaxVertexs, int theMaxBounds, int theMaxEdges)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfPolylines(theMaxVertexs, theMaxBounds, theMaxEdges, false, false);
}

Macad::Occt::Graphic3d_ArrayOfPolylines::Graphic3d_ArrayOfPolylines(int theMaxVertexs, int theMaxBounds)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfPolylines(theMaxVertexs, theMaxBounds, 0, false, false);
}

Macad::Occt::Graphic3d_ArrayOfPolylines::Graphic3d_ArrayOfPolylines(int theMaxVertexs)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfPolylines(theMaxVertexs, 0, 0, false, false);
}

Macad::Occt::Graphic3d_ArrayOfPolylines^ Macad::Occt::Graphic3d_ArrayOfPolylines::CreateDowncasted(::Graphic3d_ArrayOfPolylines* instance)
{
    return gcnew Macad::Occt::Graphic3d_ArrayOfPolylines( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfQuadrangles
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ArrayOfQuadrangles::Graphic3d_ArrayOfQuadrangles(int theMaxVertexs, int theMaxEdges, int theArrayFlags)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfQuadrangles(theMaxVertexs, theMaxEdges, theArrayFlags);
}

Macad::Occt::Graphic3d_ArrayOfQuadrangles::Graphic3d_ArrayOfQuadrangles(int theMaxVertexs, int theMaxEdges, bool theHasVNormals, bool theHasVColors, bool theHasVTexels)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfQuadrangles(theMaxVertexs, theMaxEdges, theHasVNormals, theHasVColors, theHasVTexels);
}

Macad::Occt::Graphic3d_ArrayOfQuadrangles::Graphic3d_ArrayOfQuadrangles(int theMaxVertexs, int theMaxEdges, bool theHasVNormals, bool theHasVColors)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfQuadrangles(theMaxVertexs, theMaxEdges, theHasVNormals, theHasVColors, false);
}

Macad::Occt::Graphic3d_ArrayOfQuadrangles::Graphic3d_ArrayOfQuadrangles(int theMaxVertexs, int theMaxEdges, bool theHasVNormals)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfQuadrangles(theMaxVertexs, theMaxEdges, theHasVNormals, false, false);
}

Macad::Occt::Graphic3d_ArrayOfQuadrangles::Graphic3d_ArrayOfQuadrangles(int theMaxVertexs, int theMaxEdges)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfQuadrangles(theMaxVertexs, theMaxEdges, false, false, false);
}

Macad::Occt::Graphic3d_ArrayOfQuadrangles::Graphic3d_ArrayOfQuadrangles(int theMaxVertexs)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfQuadrangles(theMaxVertexs, 0, false, false, false);
}

Macad::Occt::Graphic3d_ArrayOfQuadrangles^ Macad::Occt::Graphic3d_ArrayOfQuadrangles::CreateDowncasted(::Graphic3d_ArrayOfQuadrangles* instance)
{
    return gcnew Macad::Occt::Graphic3d_ArrayOfQuadrangles( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfQuadrangleStrips
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ArrayOfQuadrangleStrips::Graphic3d_ArrayOfQuadrangleStrips(int theMaxVertexs, int theMaxStrips, int theArrayFlags)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfQuadrangleStrips(theMaxVertexs, theMaxStrips, theArrayFlags);
}

Macad::Occt::Graphic3d_ArrayOfQuadrangleStrips::Graphic3d_ArrayOfQuadrangleStrips(int theMaxVertexs, int theMaxStrips, bool theHasVNormals, bool theHasVColors, bool theHasSColors, bool theHasVTexels)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfQuadrangleStrips(theMaxVertexs, theMaxStrips, theHasVNormals, theHasVColors, theHasSColors, theHasVTexels);
}

Macad::Occt::Graphic3d_ArrayOfQuadrangleStrips::Graphic3d_ArrayOfQuadrangleStrips(int theMaxVertexs, int theMaxStrips, bool theHasVNormals, bool theHasVColors, bool theHasSColors)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfQuadrangleStrips(theMaxVertexs, theMaxStrips, theHasVNormals, theHasVColors, theHasSColors, false);
}

Macad::Occt::Graphic3d_ArrayOfQuadrangleStrips::Graphic3d_ArrayOfQuadrangleStrips(int theMaxVertexs, int theMaxStrips, bool theHasVNormals, bool theHasVColors)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfQuadrangleStrips(theMaxVertexs, theMaxStrips, theHasVNormals, theHasVColors, false, false);
}

Macad::Occt::Graphic3d_ArrayOfQuadrangleStrips::Graphic3d_ArrayOfQuadrangleStrips(int theMaxVertexs, int theMaxStrips, bool theHasVNormals)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfQuadrangleStrips(theMaxVertexs, theMaxStrips, theHasVNormals, false, false, false);
}

Macad::Occt::Graphic3d_ArrayOfQuadrangleStrips::Graphic3d_ArrayOfQuadrangleStrips(int theMaxVertexs, int theMaxStrips)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfQuadrangleStrips(theMaxVertexs, theMaxStrips, false, false, false, false);
}

Macad::Occt::Graphic3d_ArrayOfQuadrangleStrips::Graphic3d_ArrayOfQuadrangleStrips(int theMaxVertexs)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfQuadrangleStrips(theMaxVertexs, 0, false, false, false, false);
}

Macad::Occt::Graphic3d_ArrayOfQuadrangleStrips^ Macad::Occt::Graphic3d_ArrayOfQuadrangleStrips::CreateDowncasted(::Graphic3d_ArrayOfQuadrangleStrips* instance)
{
    return gcnew Macad::Occt::Graphic3d_ArrayOfQuadrangleStrips( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfSegments
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ArrayOfSegments::Graphic3d_ArrayOfSegments(int theMaxVertexs, int theMaxEdges, int theArrayFlags)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfSegments(theMaxVertexs, theMaxEdges, theArrayFlags);
}

Macad::Occt::Graphic3d_ArrayOfSegments::Graphic3d_ArrayOfSegments(int theMaxVertexs, int theMaxEdges, bool theHasVColors)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfSegments(theMaxVertexs, theMaxEdges, theHasVColors);
}

Macad::Occt::Graphic3d_ArrayOfSegments::Graphic3d_ArrayOfSegments(int theMaxVertexs, int theMaxEdges)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfSegments(theMaxVertexs, theMaxEdges, false);
}

Macad::Occt::Graphic3d_ArrayOfSegments::Graphic3d_ArrayOfSegments(int theMaxVertexs)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfSegments(theMaxVertexs, 0, false);
}

Macad::Occt::Graphic3d_ArrayOfSegments^ Macad::Occt::Graphic3d_ArrayOfSegments::CreateDowncasted(::Graphic3d_ArrayOfSegments* instance)
{
    return gcnew Macad::Occt::Graphic3d_ArrayOfSegments( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfTriangleFans
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ArrayOfTriangleFans::Graphic3d_ArrayOfTriangleFans(int theMaxVertexs, int theMaxFans, int theArrayFlags)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfTriangleFans(theMaxVertexs, theMaxFans, theArrayFlags);
}

Macad::Occt::Graphic3d_ArrayOfTriangleFans::Graphic3d_ArrayOfTriangleFans(int theMaxVertexs, int theMaxFans, bool theHasVNormals, bool theHasVColors, bool theHasBColors, bool theHasVTexels)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfTriangleFans(theMaxVertexs, theMaxFans, theHasVNormals, theHasVColors, theHasBColors, theHasVTexels);
}

Macad::Occt::Graphic3d_ArrayOfTriangleFans::Graphic3d_ArrayOfTriangleFans(int theMaxVertexs, int theMaxFans, bool theHasVNormals, bool theHasVColors, bool theHasBColors)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfTriangleFans(theMaxVertexs, theMaxFans, theHasVNormals, theHasVColors, theHasBColors, false);
}

Macad::Occt::Graphic3d_ArrayOfTriangleFans::Graphic3d_ArrayOfTriangleFans(int theMaxVertexs, int theMaxFans, bool theHasVNormals, bool theHasVColors)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfTriangleFans(theMaxVertexs, theMaxFans, theHasVNormals, theHasVColors, false, false);
}

Macad::Occt::Graphic3d_ArrayOfTriangleFans::Graphic3d_ArrayOfTriangleFans(int theMaxVertexs, int theMaxFans, bool theHasVNormals)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfTriangleFans(theMaxVertexs, theMaxFans, theHasVNormals, false, false, false);
}

Macad::Occt::Graphic3d_ArrayOfTriangleFans::Graphic3d_ArrayOfTriangleFans(int theMaxVertexs, int theMaxFans)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfTriangleFans(theMaxVertexs, theMaxFans, false, false, false, false);
}

Macad::Occt::Graphic3d_ArrayOfTriangleFans::Graphic3d_ArrayOfTriangleFans(int theMaxVertexs)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfTriangleFans(theMaxVertexs, 0, false, false, false, false);
}

Macad::Occt::Graphic3d_ArrayOfTriangleFans^ Macad::Occt::Graphic3d_ArrayOfTriangleFans::CreateDowncasted(::Graphic3d_ArrayOfTriangleFans* instance)
{
    return gcnew Macad::Occt::Graphic3d_ArrayOfTriangleFans( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfTriangles
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ArrayOfTriangles::Graphic3d_ArrayOfTriangles(int theMaxVertexs, int theMaxEdges, int theArrayFlags)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfTriangles(theMaxVertexs, theMaxEdges, theArrayFlags);
}

Macad::Occt::Graphic3d_ArrayOfTriangles::Graphic3d_ArrayOfTriangles(int theMaxVertexs, int theMaxEdges, bool theHasVNormals, bool theHasVColors, bool theHasVTexels)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfTriangles(theMaxVertexs, theMaxEdges, theHasVNormals, theHasVColors, theHasVTexels);
}

Macad::Occt::Graphic3d_ArrayOfTriangles::Graphic3d_ArrayOfTriangles(int theMaxVertexs, int theMaxEdges, bool theHasVNormals, bool theHasVColors)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfTriangles(theMaxVertexs, theMaxEdges, theHasVNormals, theHasVColors, false);
}

Macad::Occt::Graphic3d_ArrayOfTriangles::Graphic3d_ArrayOfTriangles(int theMaxVertexs, int theMaxEdges, bool theHasVNormals)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfTriangles(theMaxVertexs, theMaxEdges, theHasVNormals, false, false);
}

Macad::Occt::Graphic3d_ArrayOfTriangles::Graphic3d_ArrayOfTriangles(int theMaxVertexs, int theMaxEdges)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfTriangles(theMaxVertexs, theMaxEdges, false, false, false);
}

Macad::Occt::Graphic3d_ArrayOfTriangles::Graphic3d_ArrayOfTriangles(int theMaxVertexs)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfTriangles(theMaxVertexs, 0, false, false, false);
}

Macad::Occt::Graphic3d_ArrayOfTriangles^ Macad::Occt::Graphic3d_ArrayOfTriangles::CreateDowncasted(::Graphic3d_ArrayOfTriangles* instance)
{
    return gcnew Macad::Occt::Graphic3d_ArrayOfTriangles( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ArrayOfTriangleStrips
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ArrayOfTriangleStrips::Graphic3d_ArrayOfTriangleStrips(int theMaxVertexs, int theMaxStrips, int theArrayFlags)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfTriangleStrips(theMaxVertexs, theMaxStrips, theArrayFlags);
}

Macad::Occt::Graphic3d_ArrayOfTriangleStrips::Graphic3d_ArrayOfTriangleStrips(int theMaxVertexs, int theMaxStrips, bool theHasVNormals, bool theHasVColors, bool theHasBColors, bool theHasVTexels)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfTriangleStrips(theMaxVertexs, theMaxStrips, theHasVNormals, theHasVColors, theHasBColors, theHasVTexels);
}

Macad::Occt::Graphic3d_ArrayOfTriangleStrips::Graphic3d_ArrayOfTriangleStrips(int theMaxVertexs, int theMaxStrips, bool theHasVNormals, bool theHasVColors, bool theHasBColors)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfTriangleStrips(theMaxVertexs, theMaxStrips, theHasVNormals, theHasVColors, theHasBColors, false);
}

Macad::Occt::Graphic3d_ArrayOfTriangleStrips::Graphic3d_ArrayOfTriangleStrips(int theMaxVertexs, int theMaxStrips, bool theHasVNormals, bool theHasVColors)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfTriangleStrips(theMaxVertexs, theMaxStrips, theHasVNormals, theHasVColors, false, false);
}

Macad::Occt::Graphic3d_ArrayOfTriangleStrips::Graphic3d_ArrayOfTriangleStrips(int theMaxVertexs, int theMaxStrips, bool theHasVNormals)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfTriangleStrips(theMaxVertexs, theMaxStrips, theHasVNormals, false, false, false);
}

Macad::Occt::Graphic3d_ArrayOfTriangleStrips::Graphic3d_ArrayOfTriangleStrips(int theMaxVertexs, int theMaxStrips)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfTriangleStrips(theMaxVertexs, theMaxStrips, false, false, false, false);
}

Macad::Occt::Graphic3d_ArrayOfTriangleStrips::Graphic3d_ArrayOfTriangleStrips(int theMaxVertexs)
    : Macad::Occt::Graphic3d_ArrayOfPrimitives(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ArrayOfTriangleStrips(theMaxVertexs, 0, false, false, false, false);
}

Macad::Occt::Graphic3d_ArrayOfTriangleStrips^ Macad::Occt::Graphic3d_ArrayOfTriangleStrips::CreateDowncasted(::Graphic3d_ArrayOfTriangleStrips* instance)
{
    return gcnew Macad::Occt::Graphic3d_ArrayOfTriangleStrips( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_MarkerImage
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_MarkerImage::Graphic3d_MarkerImage(Macad::Occt::Image_PixMap^ theImage, Macad::Occt::Image_PixMap^ theImageAlpha)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_MarkerImage(Handle(::Image_PixMap)(theImage->NativeInstance), Handle(::Image_PixMap)(theImageAlpha->NativeInstance));
}

Macad::Occt::Graphic3d_MarkerImage::Graphic3d_MarkerImage(Macad::Occt::Image_PixMap^ theImage)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_MarkerImage(Handle(::Image_PixMap)(theImage->NativeInstance), ::opencascade::handle<::Image_PixMap>());
}

Macad::Occt::Graphic3d_MarkerImage::Graphic3d_MarkerImage(Macad::Occt::TColStd_HArray1OfByte^ theBitMap, int theWidth, int theHeight)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_MarkerImage(Handle(::TColStd_HArray1OfByte)(theBitMap->NativeInstance), theWidth, theHeight);
}

Macad::Occt::Graphic3d_MarkerImage^ Macad::Occt::Graphic3d_MarkerImage::StandardMarker(Macad::Occt::Aspect_TypeOfMarker theMarkerType, float theScale, Macad::Occt::Graphic3d_Vec4^ theColor)
{
    Handle(::Graphic3d_MarkerImage) _result = ::Graphic3d_MarkerImage::StandardMarker((::Aspect_TypeOfMarker)theMarkerType, theScale, *(::Graphic3d_Vec4*)theColor->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_MarkerImage::CreateDowncasted(_result.get());
}

Macad::Occt::Image_PixMap^ Macad::Occt::Graphic3d_MarkerImage::GetImage()
{
    Handle(::Image_PixMap) _result = ((::Graphic3d_MarkerImage*)_NativeInstance)->GetImage();
    return _result.IsNull() ? nullptr : Macad::Occt::Image_PixMap::CreateDowncasted(_result.get());
}

Macad::Occt::Image_PixMap^ Macad::Occt::Graphic3d_MarkerImage::GetImageAlpha()
{
    Handle(::Image_PixMap) _result = ((::Graphic3d_MarkerImage*)_NativeInstance)->GetImageAlpha();
    return _result.IsNull() ? nullptr : Macad::Occt::Image_PixMap::CreateDowncasted(_result.get());
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_MarkerImage::GetImageId()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Graphic3d_MarkerImage*)_NativeInstance)->GetImageId();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_MarkerImage::GetImageAlphaId()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Graphic3d_MarkerImage*)_NativeInstance)->GetImageAlphaId();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::Graphic3d_MarkerImage::GetTextureSize(int% theWidth, int% theHeight)
{
    pin_ptr<int> pp_theWidth = &theWidth;
    pin_ptr<int> pp_theHeight = &theHeight;
    ((::Graphic3d_MarkerImage*)_NativeInstance)->GetTextureSize(*(int*)pp_theWidth, *(int*)pp_theHeight);
}

bool Macad::Occt::Graphic3d_MarkerImage::IsColoredImage()
{
    bool _result = ((::Graphic3d_MarkerImage*)_NativeInstance)->IsColoredImage();
    return _result;
}

Macad::Occt::TColStd_HArray1OfByte^ Macad::Occt::Graphic3d_MarkerImage::GetBitMapArray(double theAlphaValue, bool theIsTopDown)
{
    Handle(::TColStd_HArray1OfByte) _result = ((::Graphic3d_MarkerImage*)_NativeInstance)->GetBitMapArray(theAlphaValue, theIsTopDown);
    return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HArray1OfByte::CreateDowncasted(_result.get());
}

Macad::Occt::TColStd_HArray1OfByte^ Macad::Occt::Graphic3d_MarkerImage::GetBitMapArray(double theAlphaValue)
{
    Handle(::TColStd_HArray1OfByte) _result = ((::Graphic3d_MarkerImage*)_NativeInstance)->GetBitMapArray(theAlphaValue, false);
    return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HArray1OfByte::CreateDowncasted(_result.get());
}

Macad::Occt::TColStd_HArray1OfByte^ Macad::Occt::Graphic3d_MarkerImage::GetBitMapArray()
{
    Handle(::TColStd_HArray1OfByte) _result = ((::Graphic3d_MarkerImage*)_NativeInstance)->GetBitMapArray(0.5, false);
    return _result.IsNull() ? nullptr : Macad::Occt::TColStd_HArray1OfByte::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_MarkerImage^ Macad::Occt::Graphic3d_MarkerImage::CreateDowncasted(::Graphic3d_MarkerImage* instance)
{
    return gcnew Macad::Occt::Graphic3d_MarkerImage( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_PBRMaterial
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_PBRMaterial::Graphic3d_PBRMaterial()
    : Macad::Occt::BaseClass<::Graphic3d_PBRMaterial>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_PBRMaterial();
}

Macad::Occt::Graphic3d_PBRMaterial::Graphic3d_PBRMaterial(Macad::Occt::Graphic3d_BSDF^ theBSDF)
    : Macad::Occt::BaseClass<::Graphic3d_PBRMaterial>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_PBRMaterial(*(::Graphic3d_BSDF*)theBSDF->NativeInstance);
}

float Macad::Occt::Graphic3d_PBRMaterial::Metallic()
{
    float _result = ((::Graphic3d_PBRMaterial*)_NativeInstance)->Metallic();
    return _result;
}

void Macad::Occt::Graphic3d_PBRMaterial::SetMetallic(float theMetallic)
{
    ((::Graphic3d_PBRMaterial*)_NativeInstance)->SetMetallic(theMetallic);
}

float Macad::Occt::Graphic3d_PBRMaterial::Roughness(float theNormalizedRoughness)
{
    float _result = ::Graphic3d_PBRMaterial::Roughness(theNormalizedRoughness);
    return _result;
}

float Macad::Occt::Graphic3d_PBRMaterial::Roughness()
{
    float _result = ((::Graphic3d_PBRMaterial*)_NativeInstance)->Roughness();
    return _result;
}

float Macad::Occt::Graphic3d_PBRMaterial::NormalizedRoughness()
{
    float _result = ((::Graphic3d_PBRMaterial*)_NativeInstance)->NormalizedRoughness();
    return _result;
}

void Macad::Occt::Graphic3d_PBRMaterial::SetRoughness(float theRoughness)
{
    ((::Graphic3d_PBRMaterial*)_NativeInstance)->SetRoughness(theRoughness);
}

float Macad::Occt::Graphic3d_PBRMaterial::IOR()
{
    float _result = ((::Graphic3d_PBRMaterial*)_NativeInstance)->IOR();
    return _result;
}

void Macad::Occt::Graphic3d_PBRMaterial::SetIOR(float theIOR)
{
    ((::Graphic3d_PBRMaterial*)_NativeInstance)->SetIOR(theIOR);
}

Macad::Occt::Quantity_ColorRGBA^ Macad::Occt::Graphic3d_PBRMaterial::Color()
{
    ::Quantity_ColorRGBA* _result = new ::Quantity_ColorRGBA();
    *_result = (::Quantity_ColorRGBA)((::Graphic3d_PBRMaterial*)_NativeInstance)->Color();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_ColorRGBA(_result);
}

void Macad::Occt::Graphic3d_PBRMaterial::SetColor(Macad::Occt::Quantity_ColorRGBA^ theColor)
{
    ((::Graphic3d_PBRMaterial*)_NativeInstance)->SetColor(*(::Quantity_ColorRGBA*)theColor->NativeInstance);
}

void Macad::Occt::Graphic3d_PBRMaterial::SetColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::Graphic3d_PBRMaterial*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

float Macad::Occt::Graphic3d_PBRMaterial::Alpha()
{
    float _result = ((::Graphic3d_PBRMaterial*)_NativeInstance)->Alpha();
    return _result;
}

void Macad::Occt::Graphic3d_PBRMaterial::SetAlpha(float theAlpha)
{
    ((::Graphic3d_PBRMaterial*)_NativeInstance)->SetAlpha(theAlpha);
}

Macad::Occt::Graphic3d_Vec3^ Macad::Occt::Graphic3d_PBRMaterial::Emission()
{
    ::Graphic3d_Vec3* _result = new ::Graphic3d_Vec3();
    *_result = ((::Graphic3d_PBRMaterial*)_NativeInstance)->Emission();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3(_result);
}

void Macad::Occt::Graphic3d_PBRMaterial::SetEmission(Macad::Occt::Graphic3d_Vec3^ theEmission)
{
    ((::Graphic3d_PBRMaterial*)_NativeInstance)->SetEmission(*(::Graphic3d_Vec3*)theEmission->NativeInstance);
}

void Macad::Occt::Graphic3d_PBRMaterial::SetBSDF(Macad::Occt::Graphic3d_BSDF^ theBSDF)
{
    ((::Graphic3d_PBRMaterial*)_NativeInstance)->SetBSDF(*(::Graphic3d_BSDF*)theBSDF->NativeInstance);
}

void Macad::Occt::Graphic3d_PBRMaterial::GenerateEnvLUT(Macad::Occt::Image_PixMap^ theLUT, unsigned int theNbIntegralSamples)
{
    ::Graphic3d_PBRMaterial::GenerateEnvLUT(Handle(::Image_PixMap)(theLUT->NativeInstance), theNbIntegralSamples);
}

void Macad::Occt::Graphic3d_PBRMaterial::GenerateEnvLUT(Macad::Occt::Image_PixMap^ theLUT)
{
    ::Graphic3d_PBRMaterial::GenerateEnvLUT(Handle(::Image_PixMap)(theLUT->NativeInstance), 1024);
}

float Macad::Occt::Graphic3d_PBRMaterial::RoughnessFromSpecular(Macad::Occt::Quantity_Color^ theSpecular, double theShiness)
{
    float _result = ::Graphic3d_PBRMaterial::RoughnessFromSpecular(*(::Quantity_Color*)theSpecular->NativeInstance, theShiness);
    return _result;
}

float Macad::Occt::Graphic3d_PBRMaterial::MetallicFromSpecular(Macad::Occt::Quantity_Color^ theSpecular)
{
    float _result = ::Graphic3d_PBRMaterial::MetallicFromSpecular(*(::Quantity_Color*)theSpecular->NativeInstance);
    return _result;
}

float Macad::Occt::Graphic3d_PBRMaterial::MinRoughness()
{
    float _result = ::Graphic3d_PBRMaterial::MinRoughness();
    return _result;
}

float Macad::Occt::Graphic3d_PBRMaterial::SpecIBLMapSamplesFactor(float theProbability, float theRoughness)
{
    float _result = ::Graphic3d_PBRMaterial::SpecIBLMapSamplesFactor(theProbability, theRoughness);
    return _result;
}

void Macad::Occt::Graphic3d_PBRMaterial::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_PBRMaterial*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Graphic3d_PBRMaterial::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_PBRMaterial*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Fresnel
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Fresnel::Graphic3d_Fresnel()
    : Macad::Occt::BaseClass<::Graphic3d_Fresnel>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Fresnel();
}

Macad::Occt::Graphic3d_Fresnel^ Macad::Occt::Graphic3d_Fresnel::CreateSchlick(Macad::Occt::Graphic3d_Vec3^ theSpecularColor)
{
    ::Graphic3d_Fresnel* _result = new ::Graphic3d_Fresnel();
    *_result = ::Graphic3d_Fresnel::CreateSchlick(*(::Graphic3d_Vec3*)theSpecularColor->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Fresnel(_result);
}

Macad::Occt::Graphic3d_Fresnel^ Macad::Occt::Graphic3d_Fresnel::CreateConstant(float theReflection)
{
    ::Graphic3d_Fresnel* _result = new ::Graphic3d_Fresnel();
    *_result = ::Graphic3d_Fresnel::CreateConstant(theReflection);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Fresnel(_result);
}

Macad::Occt::Graphic3d_Fresnel^ Macad::Occt::Graphic3d_Fresnel::CreateDielectric(float theRefractionIndex)
{
    ::Graphic3d_Fresnel* _result = new ::Graphic3d_Fresnel();
    *_result = ::Graphic3d_Fresnel::CreateDielectric(theRefractionIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Fresnel(_result);
}

Macad::Occt::Graphic3d_Fresnel^ Macad::Occt::Graphic3d_Fresnel::CreateConductor(float theRefractionIndex, float theAbsorptionIndex)
{
    ::Graphic3d_Fresnel* _result = new ::Graphic3d_Fresnel();
    *_result = ::Graphic3d_Fresnel::CreateConductor(theRefractionIndex, theAbsorptionIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Fresnel(_result);
}

Macad::Occt::Graphic3d_Fresnel^ Macad::Occt::Graphic3d_Fresnel::CreateConductor(Macad::Occt::Graphic3d_Vec3^ theRefractionIndex, Macad::Occt::Graphic3d_Vec3^ theAbsorptionIndex)
{
    ::Graphic3d_Fresnel* _result = new ::Graphic3d_Fresnel();
    *_result = ::Graphic3d_Fresnel::CreateConductor(*(::Graphic3d_Vec3*)theRefractionIndex->NativeInstance, *(::Graphic3d_Vec3*)theAbsorptionIndex->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Fresnel(_result);
}

Macad::Occt::Graphic3d_Vec4^ Macad::Occt::Graphic3d_Fresnel::Serialize()
{
    ::Graphic3d_Vec4* _result = new ::Graphic3d_Vec4();
    *_result = ((::Graphic3d_Fresnel*)_NativeInstance)->Serialize();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4(_result);
}

Macad::Occt::Graphic3d_FresnelModel Macad::Occt::Graphic3d_Fresnel::FresnelType()
{
    ::Graphic3d_FresnelModel _result = ((::Graphic3d_Fresnel*)_NativeInstance)->FresnelType();
    return (Macad::Occt::Graphic3d_FresnelModel)_result;
}

void Macad::Occt::Graphic3d_Fresnel::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_Fresnel*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Graphic3d_Fresnel::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_Fresnel*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  Graphic3d_BSDF
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_BSDF::Graphic3d_BSDF()
    : Macad::Occt::BaseClass<::Graphic3d_BSDF>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_BSDF();
}

Macad::Occt::Graphic3d_BSDF^ Macad::Occt::Graphic3d_BSDF::CreateDiffuse(Macad::Occt::Graphic3d_Vec3^ theWeight)
{
    ::Graphic3d_BSDF* _result = new ::Graphic3d_BSDF();
    *_result = ::Graphic3d_BSDF::CreateDiffuse(*(::Graphic3d_Vec3*)theWeight->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_BSDF(_result);
}

Macad::Occt::Graphic3d_BSDF^ Macad::Occt::Graphic3d_BSDF::CreateMetallic(Macad::Occt::Graphic3d_Vec3^ theWeight, Macad::Occt::Graphic3d_Fresnel^ theFresnel, float theRoughness)
{
    ::Graphic3d_BSDF* _result = new ::Graphic3d_BSDF();
    *_result = ::Graphic3d_BSDF::CreateMetallic(*(::Graphic3d_Vec3*)theWeight->NativeInstance, *(::Graphic3d_Fresnel*)theFresnel->NativeInstance, theRoughness);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_BSDF(_result);
}

Macad::Occt::Graphic3d_BSDF^ Macad::Occt::Graphic3d_BSDF::CreateTransparent(Macad::Occt::Graphic3d_Vec3^ theWeight, Macad::Occt::Graphic3d_Vec3^ theAbsorptionColor, float theAbsorptionCoeff)
{
    ::Graphic3d_BSDF* _result = new ::Graphic3d_BSDF();
    *_result = ::Graphic3d_BSDF::CreateTransparent(*(::Graphic3d_Vec3*)theWeight->NativeInstance, *(::Graphic3d_Vec3*)theAbsorptionColor->NativeInstance, theAbsorptionCoeff);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_BSDF(_result);
}

Macad::Occt::Graphic3d_BSDF^ Macad::Occt::Graphic3d_BSDF::CreateGlass(Macad::Occt::Graphic3d_Vec3^ theWeight, Macad::Occt::Graphic3d_Vec3^ theAbsorptionColor, float theAbsorptionCoeff, float theRefractionIndex)
{
    ::Graphic3d_BSDF* _result = new ::Graphic3d_BSDF();
    *_result = ::Graphic3d_BSDF::CreateGlass(*(::Graphic3d_Vec3*)theWeight->NativeInstance, *(::Graphic3d_Vec3*)theAbsorptionColor->NativeInstance, theAbsorptionCoeff, theRefractionIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_BSDF(_result);
}

Macad::Occt::Graphic3d_BSDF^ Macad::Occt::Graphic3d_BSDF::CreateMetallicRoughness(Macad::Occt::Graphic3d_PBRMaterial^ thePbr)
{
    ::Graphic3d_BSDF* _result = new ::Graphic3d_BSDF();
    *_result = ::Graphic3d_BSDF::CreateMetallicRoughness(*(::Graphic3d_PBRMaterial*)thePbr->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_BSDF(_result);
}

void Macad::Occt::Graphic3d_BSDF::Normalize()
{
    ((::Graphic3d_BSDF*)_NativeInstance)->Normalize();
}

void Macad::Occt::Graphic3d_BSDF::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_BSDF*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Graphic3d_BSDF::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_BSDF*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  Graphic3d_MaterialAspect
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_MaterialAspect::Graphic3d_MaterialAspect()
    : Macad::Occt::BaseClass<::Graphic3d_MaterialAspect>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_MaterialAspect();
}

Macad::Occt::Graphic3d_MaterialAspect::Graphic3d_MaterialAspect(Macad::Occt::Graphic3d_NameOfMaterial theName)
    : Macad::Occt::BaseClass<::Graphic3d_MaterialAspect>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_MaterialAspect((::Graphic3d_NameOfMaterial)theName);
}

int Macad::Occt::Graphic3d_MaterialAspect::NumberOfMaterials()
{
    int _result = ::Graphic3d_MaterialAspect::NumberOfMaterials();
    return _result;
}

System::String^ Macad::Occt::Graphic3d_MaterialAspect::MaterialName(int theRank)
{
    Standard_CString _result = ::Graphic3d_MaterialAspect::MaterialName(theRank);
    return gcnew System::String(_result);
}

Macad::Occt::Graphic3d_TypeOfMaterial Macad::Occt::Graphic3d_MaterialAspect::MaterialType(int theRank)
{
    ::Graphic3d_TypeOfMaterial _result = ::Graphic3d_MaterialAspect::MaterialType(theRank);
    return (Macad::Occt::Graphic3d_TypeOfMaterial)_result;
}

bool Macad::Occt::Graphic3d_MaterialAspect::MaterialFromName(System::String^ theName, Macad::Occt::Graphic3d_NameOfMaterial% theMat)
{
    const char* sz_theName = (char*)(void*)Marshal::StringToHGlobalAnsi(theName);
    pin_ptr<Macad::Occt::Graphic3d_NameOfMaterial> pp_theMat = &theMat;
    bool _result = ::Graphic3d_MaterialAspect::MaterialFromName(sz_theName, *(::Graphic3d_NameOfMaterial*)pp_theMat);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theName);
    return _result;
}

Macad::Occt::Graphic3d_NameOfMaterial Macad::Occt::Graphic3d_MaterialAspect::MaterialFromName(System::String^ theName)
{
    const char* sz_theName = (char*)(void*)Marshal::StringToHGlobalAnsi(theName);
    ::Graphic3d_NameOfMaterial _result = ::Graphic3d_MaterialAspect::MaterialFromName(sz_theName);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theName);
    return (Macad::Occt::Graphic3d_NameOfMaterial)_result;
}

Macad::Occt::Graphic3d_NameOfMaterial Macad::Occt::Graphic3d_MaterialAspect::Name()
{
    ::Graphic3d_NameOfMaterial _result = ((::Graphic3d_MaterialAspect*)_NativeInstance)->Name();
    return (Macad::Occt::Graphic3d_NameOfMaterial)_result;
}

Macad::Occt::Graphic3d_NameOfMaterial Macad::Occt::Graphic3d_MaterialAspect::RequestedName()
{
    ::Graphic3d_NameOfMaterial _result = ((::Graphic3d_MaterialAspect*)_NativeInstance)->RequestedName();
    return (Macad::Occt::Graphic3d_NameOfMaterial)_result;
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_MaterialAspect::StringName()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Graphic3d_MaterialAspect*)_NativeInstance)->StringName();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

System::String^ Macad::Occt::Graphic3d_MaterialAspect::MaterialName()
{
    Standard_CString _result = ((::Graphic3d_MaterialAspect*)_NativeInstance)->MaterialName();
    return gcnew System::String(_result);
}

void Macad::Occt::Graphic3d_MaterialAspect::SetMaterialName(Macad::Occt::TCollection_AsciiString^ theName)
{
    ((::Graphic3d_MaterialAspect*)_NativeInstance)->SetMaterialName(*(::TCollection_AsciiString*)theName->NativeInstance);
}

void Macad::Occt::Graphic3d_MaterialAspect::Reset()
{
    ((::Graphic3d_MaterialAspect*)_NativeInstance)->Reset();
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_MaterialAspect::Color()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::Graphic3d_MaterialAspect*)_NativeInstance)->Color();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Graphic3d_MaterialAspect::SetColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::Graphic3d_MaterialAspect*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

float Macad::Occt::Graphic3d_MaterialAspect::Transparency()
{
    float _result = ((::Graphic3d_MaterialAspect*)_NativeInstance)->Transparency();
    return _result;
}

float Macad::Occt::Graphic3d_MaterialAspect::Alpha()
{
    float _result = ((::Graphic3d_MaterialAspect*)_NativeInstance)->Alpha();
    return _result;
}

void Macad::Occt::Graphic3d_MaterialAspect::SetTransparency(float theValue)
{
    ((::Graphic3d_MaterialAspect*)_NativeInstance)->SetTransparency(theValue);
}

void Macad::Occt::Graphic3d_MaterialAspect::SetAlpha(float theValue)
{
    ((::Graphic3d_MaterialAspect*)_NativeInstance)->SetAlpha(theValue);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_MaterialAspect::AmbientColor()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::Graphic3d_MaterialAspect*)_NativeInstance)->AmbientColor();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Graphic3d_MaterialAspect::SetAmbientColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::Graphic3d_MaterialAspect*)_NativeInstance)->SetAmbientColor(*(::Quantity_Color*)theColor->NativeInstance);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_MaterialAspect::DiffuseColor()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::Graphic3d_MaterialAspect*)_NativeInstance)->DiffuseColor();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Graphic3d_MaterialAspect::SetDiffuseColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::Graphic3d_MaterialAspect*)_NativeInstance)->SetDiffuseColor(*(::Quantity_Color*)theColor->NativeInstance);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_MaterialAspect::SpecularColor()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::Graphic3d_MaterialAspect*)_NativeInstance)->SpecularColor();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Graphic3d_MaterialAspect::SetSpecularColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::Graphic3d_MaterialAspect*)_NativeInstance)->SetSpecularColor(*(::Quantity_Color*)theColor->NativeInstance);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_MaterialAspect::EmissiveColor()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::Graphic3d_MaterialAspect*)_NativeInstance)->EmissiveColor();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Graphic3d_MaterialAspect::SetEmissiveColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::Graphic3d_MaterialAspect*)_NativeInstance)->SetEmissiveColor(*(::Quantity_Color*)theColor->NativeInstance);
}

float Macad::Occt::Graphic3d_MaterialAspect::Shininess()
{
    float _result = ((::Graphic3d_MaterialAspect*)_NativeInstance)->Shininess();
    return _result;
}

void Macad::Occt::Graphic3d_MaterialAspect::SetShininess(float theValue)
{
    ((::Graphic3d_MaterialAspect*)_NativeInstance)->SetShininess(theValue);
}

void Macad::Occt::Graphic3d_MaterialAspect::IncreaseShine(float theDelta)
{
    ((::Graphic3d_MaterialAspect*)_NativeInstance)->IncreaseShine(theDelta);
}

float Macad::Occt::Graphic3d_MaterialAspect::RefractionIndex()
{
    float _result = ((::Graphic3d_MaterialAspect*)_NativeInstance)->RefractionIndex();
    return _result;
}

void Macad::Occt::Graphic3d_MaterialAspect::SetRefractionIndex(float theValue)
{
    ((::Graphic3d_MaterialAspect*)_NativeInstance)->SetRefractionIndex(theValue);
}

Macad::Occt::Graphic3d_BSDF^ Macad::Occt::Graphic3d_MaterialAspect::BSDF()
{
    ::Graphic3d_BSDF* _result = new ::Graphic3d_BSDF();
    *_result = (::Graphic3d_BSDF)((::Graphic3d_MaterialAspect*)_NativeInstance)->BSDF();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_BSDF(_result);
}

void Macad::Occt::Graphic3d_MaterialAspect::SetBSDF(Macad::Occt::Graphic3d_BSDF^ theBSDF)
{
    ((::Graphic3d_MaterialAspect*)_NativeInstance)->SetBSDF(*(::Graphic3d_BSDF*)theBSDF->NativeInstance);
}

Macad::Occt::Graphic3d_PBRMaterial^ Macad::Occt::Graphic3d_MaterialAspect::PBRMaterial()
{
    ::Graphic3d_PBRMaterial* _result = new ::Graphic3d_PBRMaterial();
    *_result = (::Graphic3d_PBRMaterial)((::Graphic3d_MaterialAspect*)_NativeInstance)->PBRMaterial();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_PBRMaterial(_result);
}

void Macad::Occt::Graphic3d_MaterialAspect::SetPBRMaterial(Macad::Occt::Graphic3d_PBRMaterial^ thePBRMaterial)
{
    ((::Graphic3d_MaterialAspect*)_NativeInstance)->SetPBRMaterial(*(::Graphic3d_PBRMaterial*)thePBRMaterial->NativeInstance);
}

bool Macad::Occt::Graphic3d_MaterialAspect::ReflectionMode(Macad::Occt::Graphic3d_TypeOfReflection theType)
{
    bool _result = ((::Graphic3d_MaterialAspect*)_NativeInstance)->ReflectionMode((::Graphic3d_TypeOfReflection)theType);
    return _result;
}

Macad::Occt::Graphic3d_TypeOfMaterial Macad::Occt::Graphic3d_MaterialAspect::MaterialType()
{
    ::Graphic3d_TypeOfMaterial _result = ((::Graphic3d_MaterialAspect*)_NativeInstance)->MaterialType();
    return (Macad::Occt::Graphic3d_TypeOfMaterial)_result;
}

bool Macad::Occt::Graphic3d_MaterialAspect::MaterialType(Macad::Occt::Graphic3d_TypeOfMaterial theType)
{
    bool _result = ((::Graphic3d_MaterialAspect*)_NativeInstance)->MaterialType((::Graphic3d_TypeOfMaterial)theType);
    return _result;
}

void Macad::Occt::Graphic3d_MaterialAspect::SetMaterialType(Macad::Occt::Graphic3d_TypeOfMaterial theType)
{
    ((::Graphic3d_MaterialAspect*)_NativeInstance)->SetMaterialType((::Graphic3d_TypeOfMaterial)theType);
}

bool Macad::Occt::Graphic3d_MaterialAspect::IsDifferent(Macad::Occt::Graphic3d_MaterialAspect^ theOther)
{
    bool _result = ((::Graphic3d_MaterialAspect*)_NativeInstance)->IsDifferent(*(::Graphic3d_MaterialAspect*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::Graphic3d_MaterialAspect::IsEqual(Macad::Occt::Graphic3d_MaterialAspect^ theOther)
{
    bool _result = ((::Graphic3d_MaterialAspect*)_NativeInstance)->IsEqual(*(::Graphic3d_MaterialAspect*)theOther->NativeInstance);
    return _result;
}

void Macad::Occt::Graphic3d_MaterialAspect::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_MaterialAspect*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Graphic3d_MaterialAspect::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_MaterialAspect*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Graphic3d_MaterialAspect::SetReflectionModeOff(Macad::Occt::Graphic3d_TypeOfReflection theType)
{
    ((::Graphic3d_MaterialAspect*)_NativeInstance)->SetReflectionModeOff((::Graphic3d_TypeOfReflection)theType);
}

bool Macad::Occt::Graphic3d_MaterialAspect::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Graphic3d_MaterialAspect::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Graphic3d_MaterialAspect^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Graphic3d_HatchStyle
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_HatchStyle::Graphic3d_HatchStyle(Macad::Occt::Image_PixMap^ thePattern)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_HatchStyle(Handle(::Image_PixMap)(thePattern->NativeInstance));
}

Macad::Occt::Graphic3d_HatchStyle::Graphic3d_HatchStyle(Macad::Occt::Aspect_HatchStyle theType)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_HatchStyle((::Aspect_HatchStyle)theType);
}

unsigned char Macad::Occt::Graphic3d_HatchStyle::Pattern()
{
    throw gcnew System::NotImplementedException();
}

int Macad::Occt::Graphic3d_HatchStyle::HatchType()
{
    int _result = ((::Graphic3d_HatchStyle*)_NativeInstance)->HatchType();
    return _result;
}

void Macad::Occt::Graphic3d_HatchStyle::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_HatchStyle*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Graphic3d_HatchStyle::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_HatchStyle*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::Graphic3d_HatchStyle^ Macad::Occt::Graphic3d_HatchStyle::CreateDowncasted(::Graphic3d_HatchStyle* instance)
{
    return gcnew Macad::Occt::Graphic3d_HatchStyle( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderAttribute
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ShaderAttribute::Graphic3d_ShaderAttribute(Macad::Occt::TCollection_AsciiString^ theName, int theLocation)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ShaderAttribute(*(::TCollection_AsciiString*)theName->NativeInstance, theLocation);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_ShaderAttribute::Name()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Graphic3d_ShaderAttribute*)_NativeInstance)->Name();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

int Macad::Occt::Graphic3d_ShaderAttribute::Location()
{
    int _result = ((::Graphic3d_ShaderAttribute*)_NativeInstance)->Location();
    return _result;
}

Macad::Occt::Graphic3d_ShaderAttribute^ Macad::Occt::Graphic3d_ShaderAttribute::CreateDowncasted(::Graphic3d_ShaderAttribute* instance)
{
    return gcnew Macad::Occt::Graphic3d_ShaderAttribute( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderObject
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ShaderObject^ Macad::Occt::Graphic3d_ShaderObject::CreateFromFile(Macad::Occt::Graphic3d_TypeOfShaderObject theType, Macad::Occt::TCollection_AsciiString^ thePath)
{
    Handle(::Graphic3d_ShaderObject) _result = ::Graphic3d_ShaderObject::CreateFromFile((::Graphic3d_TypeOfShaderObject)theType, *(::TCollection_AsciiString*)thePath->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderObject::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_ShaderObject^ Macad::Occt::Graphic3d_ShaderObject::CreateFromSource(Macad::Occt::Graphic3d_TypeOfShaderObject theType, Macad::Occt::TCollection_AsciiString^ theSource)
{
    Handle(::Graphic3d_ShaderObject) _result = ::Graphic3d_ShaderObject::CreateFromSource((::Graphic3d_TypeOfShaderObject)theType, *(::TCollection_AsciiString*)theSource->NativeInstance);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderObject::CreateDowncasted(_result.get());
}

bool Macad::Occt::Graphic3d_ShaderObject::IsDone()
{
    bool _result = ((::Graphic3d_ShaderObject*)_NativeInstance)->IsDone();
    return _result;
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_ShaderObject::Source()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Graphic3d_ShaderObject*)_NativeInstance)->Source();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::Graphic3d_TypeOfShaderObject Macad::Occt::Graphic3d_ShaderObject::Type()
{
    ::Graphic3d_TypeOfShaderObject _result = ((::Graphic3d_ShaderObject*)_NativeInstance)->Type();
    return (Macad::Occt::Graphic3d_TypeOfShaderObject)_result;
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_ShaderObject::GetId()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Graphic3d_ShaderObject*)_NativeInstance)->GetId();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::Graphic3d_ShaderObject^ Macad::Occt::Graphic3d_ShaderObject::CreateDowncasted(::Graphic3d_ShaderObject* instance)
{
    return gcnew Macad::Occt::Graphic3d_ShaderObject( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderVariable
//---------------------------------------------------------------------

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_ShaderVariable::Name()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Graphic3d_ShaderVariable*)_NativeInstance)->Name();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

bool Macad::Occt::Graphic3d_ShaderVariable::IsDone()
{
    bool _result = ((::Graphic3d_ShaderVariable*)_NativeInstance)->IsDone();
    return _result;
}

Macad::Occt::Graphic3d_ValueInterface^ Macad::Occt::Graphic3d_ShaderVariable::Value()
{
    ::Graphic3d_ValueInterface* _result = ((::Graphic3d_ShaderVariable*)_NativeInstance)->Value();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_ValueInterface(_result);
}

Macad::Occt::Graphic3d_ShaderVariable^ Macad::Occt::Graphic3d_ShaderVariable::Create(Macad::Occt::TCollection_AsciiString^ theName, float theValue)
{
    pin_ptr<float> pp_theValue = &theValue;
    ::Graphic3d_ShaderVariable* _result = ::Graphic3d_ShaderVariable::Create(*(::TCollection_AsciiString*)theName->NativeInstance, *(float*)pp_theValue);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_ShaderVariable(_result);
}

Macad::Occt::Graphic3d_ShaderVariable^ Macad::Occt::Graphic3d_ShaderVariable::Create(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::gp_Vec2f^ theValue)
{
    ::Graphic3d_ShaderVariable* _result = ::Graphic3d_ShaderVariable::Create(*(::TCollection_AsciiString*)theName->NativeInstance, *(::gp_Vec2f*)theValue->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_ShaderVariable(_result);
}

Macad::Occt::Graphic3d_ShaderVariable^ Macad::Occt::Graphic3d_ShaderVariable::Create(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::gp_Vec3f^ theValue)
{
    ::Graphic3d_ShaderVariable* _result = ::Graphic3d_ShaderVariable::Create(*(::TCollection_AsciiString*)theName->NativeInstance, *(::gp_Vec3f*)theValue->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_ShaderVariable(_result);
}

Macad::Occt::Graphic3d_ShaderVariable^ Macad::Occt::Graphic3d_ShaderVariable::Create(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::Graphic3d_Vec4^ theValue)
{
    ::Graphic3d_ShaderVariable* _result = ::Graphic3d_ShaderVariable::Create(*(::TCollection_AsciiString*)theName->NativeInstance, *(::Graphic3d_Vec4*)theValue->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_ShaderVariable(_result);
}

Macad::Occt::Graphic3d_ShaderVariable^ Macad::Occt::Graphic3d_ShaderVariable::Create(Macad::Occt::TCollection_AsciiString^ theName, int theValue)
{
    pin_ptr<int> pp_theValue = &theValue;
    ::Graphic3d_ShaderVariable* _result = ::Graphic3d_ShaderVariable::Create(*(::TCollection_AsciiString*)theName->NativeInstance, *(int*)pp_theValue);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_ShaderVariable(_result);
}

Macad::Occt::Graphic3d_ShaderVariable^ Macad::Occt::Graphic3d_ShaderVariable::Create(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::Graphic3d_Vec2i^ theValue)
{
    ::Graphic3d_ShaderVariable* _result = ::Graphic3d_ShaderVariable::Create(*(::TCollection_AsciiString*)theName->NativeInstance, *(::Graphic3d_Vec2i*)theValue->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_ShaderVariable(_result);
}

Macad::Occt::Graphic3d_ShaderVariable^ Macad::Occt::Graphic3d_ShaderVariable::Create(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::Graphic3d_Vec3i^ theValue)
{
    ::Graphic3d_ShaderVariable* _result = ::Graphic3d_ShaderVariable::Create(*(::TCollection_AsciiString*)theName->NativeInstance, *(::Graphic3d_Vec3i*)theValue->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_ShaderVariable(_result);
}

Macad::Occt::Graphic3d_ShaderVariable^ Macad::Occt::Graphic3d_ShaderVariable::Create(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::Graphic3d_Vec4i^ theValue)
{
    ::Graphic3d_ShaderVariable* _result = ::Graphic3d_ShaderVariable::Create(*(::TCollection_AsciiString*)theName->NativeInstance, *(::Graphic3d_Vec4i*)theValue->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_ShaderVariable(_result);
}

Macad::Occt::Graphic3d_ShaderVariable^ Macad::Occt::Graphic3d_ShaderVariable::CreateDowncasted(::Graphic3d_ShaderVariable* instance)
{
    return gcnew Macad::Occt::Graphic3d_ShaderVariable( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_TextureParams
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_TextureParams::Graphic3d_TextureParams()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_TextureParams();
}

Macad::Occt::Graphic3d_TextureUnit Macad::Occt::Graphic3d_TextureParams::TextureUnit()
{
    ::Graphic3d_TextureUnit _result = ((::Graphic3d_TextureParams*)_NativeInstance)->TextureUnit();
    return (Macad::Occt::Graphic3d_TextureUnit)_result;
}

void Macad::Occt::Graphic3d_TextureParams::SetTextureUnit(Macad::Occt::Graphic3d_TextureUnit theUnit)
{
    ((::Graphic3d_TextureParams*)_NativeInstance)->SetTextureUnit((::Graphic3d_TextureUnit)theUnit);
}

bool Macad::Occt::Graphic3d_TextureParams::IsModulate()
{
    bool _result = ((::Graphic3d_TextureParams*)_NativeInstance)->IsModulate();
    return _result;
}

void Macad::Occt::Graphic3d_TextureParams::SetModulate(bool theToModulate)
{
    ((::Graphic3d_TextureParams*)_NativeInstance)->SetModulate(theToModulate);
}

bool Macad::Occt::Graphic3d_TextureParams::IsRepeat()
{
    bool _result = ((::Graphic3d_TextureParams*)_NativeInstance)->IsRepeat();
    return _result;
}

void Macad::Occt::Graphic3d_TextureParams::SetRepeat(bool theToRepeat)
{
    ((::Graphic3d_TextureParams*)_NativeInstance)->SetRepeat(theToRepeat);
}

Macad::Occt::Graphic3d_TypeOfTextureFilter Macad::Occt::Graphic3d_TextureParams::Filter()
{
    ::Graphic3d_TypeOfTextureFilter _result = ((::Graphic3d_TextureParams*)_NativeInstance)->Filter();
    return (Macad::Occt::Graphic3d_TypeOfTextureFilter)_result;
}

void Macad::Occt::Graphic3d_TextureParams::SetFilter(Macad::Occt::Graphic3d_TypeOfTextureFilter theFilter)
{
    ((::Graphic3d_TextureParams*)_NativeInstance)->SetFilter((::Graphic3d_TypeOfTextureFilter)theFilter);
}

Macad::Occt::Graphic3d_LevelOfTextureAnisotropy Macad::Occt::Graphic3d_TextureParams::AnisoFilter()
{
    ::Graphic3d_LevelOfTextureAnisotropy _result = ((::Graphic3d_TextureParams*)_NativeInstance)->AnisoFilter();
    return (Macad::Occt::Graphic3d_LevelOfTextureAnisotropy)_result;
}

void Macad::Occt::Graphic3d_TextureParams::SetAnisoFilter(Macad::Occt::Graphic3d_LevelOfTextureAnisotropy theLevel)
{
    ((::Graphic3d_TextureParams*)_NativeInstance)->SetAnisoFilter((::Graphic3d_LevelOfTextureAnisotropy)theLevel);
}

float Macad::Occt::Graphic3d_TextureParams::Rotation()
{
    float _result = ((::Graphic3d_TextureParams*)_NativeInstance)->Rotation();
    return _result;
}

void Macad::Occt::Graphic3d_TextureParams::SetRotation(float theAngleDegrees)
{
    ((::Graphic3d_TextureParams*)_NativeInstance)->SetRotation(theAngleDegrees);
}

Macad::Occt::Graphic3d_Vec2^ Macad::Occt::Graphic3d_TextureParams::Scale()
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::Graphic3d_TextureParams::SetScale(Macad::Occt::Graphic3d_Vec2^ theScale)
{
    ((::Graphic3d_TextureParams*)_NativeInstance)->SetScale(*(::Graphic3d_Vec2*)theScale->NativeInstance);
}

Macad::Occt::Graphic3d_Vec2^ Macad::Occt::Graphic3d_TextureParams::Translation()
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::Graphic3d_TextureParams::SetTranslation(Macad::Occt::Graphic3d_Vec2^ theVec)
{
    ((::Graphic3d_TextureParams*)_NativeInstance)->SetTranslation(*(::Graphic3d_Vec2*)theVec->NativeInstance);
}

Macad::Occt::Graphic3d_TypeOfTextureMode Macad::Occt::Graphic3d_TextureParams::GenMode()
{
    ::Graphic3d_TypeOfTextureMode _result = ((::Graphic3d_TextureParams*)_NativeInstance)->GenMode();
    return (Macad::Occt::Graphic3d_TypeOfTextureMode)_result;
}

Macad::Occt::Graphic3d_Vec4^ Macad::Occt::Graphic3d_TextureParams::GenPlaneS()
{
    ::Graphic3d_Vec4* _result = new ::Graphic3d_Vec4();
    *_result = (::Graphic3d_Vec4)((::Graphic3d_TextureParams*)_NativeInstance)->GenPlaneS();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4(_result);
}

Macad::Occt::Graphic3d_Vec4^ Macad::Occt::Graphic3d_TextureParams::GenPlaneT()
{
    ::Graphic3d_Vec4* _result = new ::Graphic3d_Vec4();
    *_result = (::Graphic3d_Vec4)((::Graphic3d_TextureParams*)_NativeInstance)->GenPlaneT();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4(_result);
}

void Macad::Occt::Graphic3d_TextureParams::SetGenMode(Macad::Occt::Graphic3d_TypeOfTextureMode theMode, Macad::Occt::Graphic3d_Vec4^ thePlaneS, Macad::Occt::Graphic3d_Vec4^ thePlaneT)
{
    ((::Graphic3d_TextureParams*)_NativeInstance)->SetGenMode((::Graphic3d_TypeOfTextureMode)theMode, *(::Graphic3d_Vec4*)thePlaneS->NativeInstance, *(::Graphic3d_Vec4*)thePlaneT->NativeInstance);
}

int Macad::Occt::Graphic3d_TextureParams::BaseLevel()
{
    int _result = ((::Graphic3d_TextureParams*)_NativeInstance)->BaseLevel();
    return _result;
}

int Macad::Occt::Graphic3d_TextureParams::MaxLevel()
{
    int _result = ((::Graphic3d_TextureParams*)_NativeInstance)->MaxLevel();
    return _result;
}

void Macad::Occt::Graphic3d_TextureParams::SetLevelsRange(int theFirstLevel, int theSecondLevel)
{
    ((::Graphic3d_TextureParams*)_NativeInstance)->SetLevelsRange(theFirstLevel, theSecondLevel);
}

void Macad::Occt::Graphic3d_TextureParams::SetLevelsRange(int theFirstLevel)
{
    ((::Graphic3d_TextureParams*)_NativeInstance)->SetLevelsRange(theFirstLevel, 0);
}

unsigned int Macad::Occt::Graphic3d_TextureParams::SamplerRevision()
{
    unsigned int _result = ((::Graphic3d_TextureParams*)_NativeInstance)->SamplerRevision();
    return _result;
}

Macad::Occt::Graphic3d_TextureParams^ Macad::Occt::Graphic3d_TextureParams::CreateDowncasted(::Graphic3d_TextureParams* instance)
{
    return gcnew Macad::Occt::Graphic3d_TextureParams( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderProgram
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ShaderProgram::Graphic3d_ShaderProgram()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ShaderProgram();
}

bool Macad::Occt::Graphic3d_ShaderProgram::IsDone()
{
    bool _result = ((::Graphic3d_ShaderProgram*)_NativeInstance)->IsDone();
    return _result;
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_ShaderProgram::GetId()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Graphic3d_ShaderProgram*)_NativeInstance)->GetId();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::Graphic3d_ShaderProgram::SetId(Macad::Occt::TCollection_AsciiString^ theId)
{
    ((::Graphic3d_ShaderProgram*)_NativeInstance)->SetId(*(::TCollection_AsciiString*)theId->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_ShaderProgram::Header()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Graphic3d_ShaderProgram*)_NativeInstance)->Header();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::Graphic3d_ShaderProgram::SetHeader(Macad::Occt::TCollection_AsciiString^ theHeader)
{
    ((::Graphic3d_ShaderProgram*)_NativeInstance)->SetHeader(*(::TCollection_AsciiString*)theHeader->NativeInstance);
}

void Macad::Occt::Graphic3d_ShaderProgram::AppendToHeader(Macad::Occt::TCollection_AsciiString^ theHeaderLine)
{
    ((::Graphic3d_ShaderProgram*)_NativeInstance)->AppendToHeader(*(::TCollection_AsciiString*)theHeaderLine->NativeInstance);
}

int Macad::Occt::Graphic3d_ShaderProgram::NbLightsMax()
{
    int _result = ((::Graphic3d_ShaderProgram*)_NativeInstance)->NbLightsMax();
    return _result;
}

void Macad::Occt::Graphic3d_ShaderProgram::SetNbLightsMax(int theNbLights)
{
    ((::Graphic3d_ShaderProgram*)_NativeInstance)->SetNbLightsMax(theNbLights);
}

int Macad::Occt::Graphic3d_ShaderProgram::NbShadowMaps()
{
    int _result = ((::Graphic3d_ShaderProgram*)_NativeInstance)->NbShadowMaps();
    return _result;
}

void Macad::Occt::Graphic3d_ShaderProgram::SetNbShadowMaps(int theNbMaps)
{
    ((::Graphic3d_ShaderProgram*)_NativeInstance)->SetNbShadowMaps(theNbMaps);
}

int Macad::Occt::Graphic3d_ShaderProgram::NbClipPlanesMax()
{
    int _result = ((::Graphic3d_ShaderProgram*)_NativeInstance)->NbClipPlanesMax();
    return _result;
}

void Macad::Occt::Graphic3d_ShaderProgram::SetNbClipPlanesMax(int theNbPlanes)
{
    ((::Graphic3d_ShaderProgram*)_NativeInstance)->SetNbClipPlanesMax(theNbPlanes);
}

bool Macad::Occt::Graphic3d_ShaderProgram::AttachShader(Macad::Occt::Graphic3d_ShaderObject^ theShader)
{
    bool _result = ((::Graphic3d_ShaderProgram*)_NativeInstance)->AttachShader(Handle(::Graphic3d_ShaderObject)(theShader->NativeInstance));
    return _result;
}

bool Macad::Occt::Graphic3d_ShaderProgram::DetachShader(Macad::Occt::Graphic3d_ShaderObject^ theShader)
{
    bool _result = ((::Graphic3d_ShaderProgram*)_NativeInstance)->DetachShader(Handle(::Graphic3d_ShaderObject)(theShader->NativeInstance));
    return _result;
}

Macad::Occt::Graphic3d_ShaderObjectList^ Macad::Occt::Graphic3d_ShaderProgram::ShaderObjects()
{
    ::Graphic3d_ShaderObjectList* _result = new ::Graphic3d_ShaderObjectList();
    *_result = (::Graphic3d_ShaderObjectList)((::Graphic3d_ShaderProgram*)_NativeInstance)->ShaderObjects();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_ShaderObjectList(_result);
}

Macad::Occt::Graphic3d_ShaderVariableList^ Macad::Occt::Graphic3d_ShaderProgram::Variables()
{
    ::Graphic3d_ShaderVariableList* _result = new ::Graphic3d_ShaderVariableList();
    *_result = (::Graphic3d_ShaderVariableList)((::Graphic3d_ShaderProgram*)_NativeInstance)->Variables();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_ShaderVariableList(_result);
}

Macad::Occt::Graphic3d_ShaderAttributeList^ Macad::Occt::Graphic3d_ShaderProgram::VertexAttributes()
{
    ::Graphic3d_ShaderAttributeList* _result = new ::Graphic3d_ShaderAttributeList();
    *_result = (::Graphic3d_ShaderAttributeList)((::Graphic3d_ShaderProgram*)_NativeInstance)->VertexAttributes();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_ShaderAttributeList(_result);
}

void Macad::Occt::Graphic3d_ShaderProgram::SetVertexAttributes(Macad::Occt::Graphic3d_ShaderAttributeList^ theAttributes)
{
    ((::Graphic3d_ShaderProgram*)_NativeInstance)->SetVertexAttributes(*(::Graphic3d_ShaderAttributeList*)theAttributes->NativeInstance);
}

int Macad::Occt::Graphic3d_ShaderProgram::NbFragmentOutputs()
{
    int _result = ((::Graphic3d_ShaderProgram*)_NativeInstance)->NbFragmentOutputs();
    return _result;
}

void Macad::Occt::Graphic3d_ShaderProgram::SetNbFragmentOutputs(int theNbOutputs)
{
    ((::Graphic3d_ShaderProgram*)_NativeInstance)->SetNbFragmentOutputs(theNbOutputs);
}

bool Macad::Occt::Graphic3d_ShaderProgram::HasAlphaTest()
{
    bool _result = ((::Graphic3d_ShaderProgram*)_NativeInstance)->HasAlphaTest();
    return _result;
}

void Macad::Occt::Graphic3d_ShaderProgram::SetAlphaTest(bool theAlphaTest)
{
    ((::Graphic3d_ShaderProgram*)_NativeInstance)->SetAlphaTest(theAlphaTest);
}

bool Macad::Occt::Graphic3d_ShaderProgram::HasDefaultSampler()
{
    bool _result = ((::Graphic3d_ShaderProgram*)_NativeInstance)->HasDefaultSampler();
    return _result;
}

void Macad::Occt::Graphic3d_ShaderProgram::SetDefaultSampler(bool theHasDefSampler)
{
    ((::Graphic3d_ShaderProgram*)_NativeInstance)->SetDefaultSampler(theHasDefSampler);
}

Macad::Occt::Graphic3d_RenderTransparentMethod Macad::Occt::Graphic3d_ShaderProgram::OitOutput()
{
    ::Graphic3d_RenderTransparentMethod _result = ((::Graphic3d_ShaderProgram*)_NativeInstance)->OitOutput();
    return (Macad::Occt::Graphic3d_RenderTransparentMethod)_result;
}

void Macad::Occt::Graphic3d_ShaderProgram::SetOitOutput(Macad::Occt::Graphic3d_RenderTransparentMethod theOutput)
{
    ((::Graphic3d_ShaderProgram*)_NativeInstance)->SetOitOutput((::Graphic3d_RenderTransparentMethod)theOutput);
}

bool Macad::Occt::Graphic3d_ShaderProgram::IsPBR()
{
    bool _result = ((::Graphic3d_ShaderProgram*)_NativeInstance)->IsPBR();
    return _result;
}

void Macad::Occt::Graphic3d_ShaderProgram::SetPBR(bool theIsPBR)
{
    ((::Graphic3d_ShaderProgram*)_NativeInstance)->SetPBR(theIsPBR);
}

int Macad::Occt::Graphic3d_ShaderProgram::TextureSetBits()
{
    int _result = ((::Graphic3d_ShaderProgram*)_NativeInstance)->TextureSetBits();
    return _result;
}

void Macad::Occt::Graphic3d_ShaderProgram::SetTextureSetBits(int theBits)
{
    ((::Graphic3d_ShaderProgram*)_NativeInstance)->SetTextureSetBits(theBits);
}

bool Macad::Occt::Graphic3d_ShaderProgram::PushVariable(Macad::Occt::TCollection_AsciiString^ theName, float theValue)
{
    pin_ptr<float> pp_theValue = &theValue;
    bool _result = ((::Graphic3d_ShaderProgram*)_NativeInstance)->PushVariable(*(::TCollection_AsciiString*)theName->NativeInstance, *(float*)pp_theValue);
    return _result;
}

bool Macad::Occt::Graphic3d_ShaderProgram::PushVariable(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::gp_Vec2f^ theValue)
{
    bool _result = ((::Graphic3d_ShaderProgram*)_NativeInstance)->PushVariable(*(::TCollection_AsciiString*)theName->NativeInstance, *(::gp_Vec2f*)theValue->NativeInstance);
    return _result;
}

bool Macad::Occt::Graphic3d_ShaderProgram::PushVariable(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::gp_Vec3f^ theValue)
{
    bool _result = ((::Graphic3d_ShaderProgram*)_NativeInstance)->PushVariable(*(::TCollection_AsciiString*)theName->NativeInstance, *(::gp_Vec3f*)theValue->NativeInstance);
    return _result;
}

bool Macad::Occt::Graphic3d_ShaderProgram::PushVariable(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::Graphic3d_Vec4^ theValue)
{
    bool _result = ((::Graphic3d_ShaderProgram*)_NativeInstance)->PushVariable(*(::TCollection_AsciiString*)theName->NativeInstance, *(::Graphic3d_Vec4*)theValue->NativeInstance);
    return _result;
}

bool Macad::Occt::Graphic3d_ShaderProgram::PushVariable(Macad::Occt::TCollection_AsciiString^ theName, int theValue)
{
    pin_ptr<int> pp_theValue = &theValue;
    bool _result = ((::Graphic3d_ShaderProgram*)_NativeInstance)->PushVariable(*(::TCollection_AsciiString*)theName->NativeInstance, *(int*)pp_theValue);
    return _result;
}

bool Macad::Occt::Graphic3d_ShaderProgram::PushVariable(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::Graphic3d_Vec2i^ theValue)
{
    bool _result = ((::Graphic3d_ShaderProgram*)_NativeInstance)->PushVariable(*(::TCollection_AsciiString*)theName->NativeInstance, *(::Graphic3d_Vec2i*)theValue->NativeInstance);
    return _result;
}

bool Macad::Occt::Graphic3d_ShaderProgram::PushVariable(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::Graphic3d_Vec3i^ theValue)
{
    bool _result = ((::Graphic3d_ShaderProgram*)_NativeInstance)->PushVariable(*(::TCollection_AsciiString*)theName->NativeInstance, *(::Graphic3d_Vec3i*)theValue->NativeInstance);
    return _result;
}

bool Macad::Occt::Graphic3d_ShaderProgram::PushVariable(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::Graphic3d_Vec4i^ theValue)
{
    bool _result = ((::Graphic3d_ShaderProgram*)_NativeInstance)->PushVariable(*(::TCollection_AsciiString*)theName->NativeInstance, *(::Graphic3d_Vec4i*)theValue->NativeInstance);
    return _result;
}

void Macad::Occt::Graphic3d_ShaderProgram::ClearVariables()
{
    ((::Graphic3d_ShaderProgram*)_NativeInstance)->ClearVariables();
}

bool Macad::Occt::Graphic3d_ShaderProgram::PushVariableFloat(Macad::Occt::TCollection_AsciiString^ theName, float theValue)
{
    bool _result = ((::Graphic3d_ShaderProgram*)_NativeInstance)->PushVariableFloat(*(::TCollection_AsciiString*)theName->NativeInstance, theValue);
    return _result;
}

bool Macad::Occt::Graphic3d_ShaderProgram::PushVariableVec2(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::Graphic3d_Vec2^ theValue)
{
    bool _result = ((::Graphic3d_ShaderProgram*)_NativeInstance)->PushVariableVec2(*(::TCollection_AsciiString*)theName->NativeInstance, *(::Graphic3d_Vec2*)theValue->NativeInstance);
    return _result;
}

bool Macad::Occt::Graphic3d_ShaderProgram::PushVariableVec3(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::Graphic3d_Vec3^ theValue)
{
    bool _result = ((::Graphic3d_ShaderProgram*)_NativeInstance)->PushVariableVec3(*(::TCollection_AsciiString*)theName->NativeInstance, *(::Graphic3d_Vec3*)theValue->NativeInstance);
    return _result;
}

bool Macad::Occt::Graphic3d_ShaderProgram::PushVariableVec4(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::Graphic3d_Vec4^ theValue)
{
    bool _result = ((::Graphic3d_ShaderProgram*)_NativeInstance)->PushVariableVec4(*(::TCollection_AsciiString*)theName->NativeInstance, *(::Graphic3d_Vec4*)theValue->NativeInstance);
    return _result;
}

bool Macad::Occt::Graphic3d_ShaderProgram::PushVariableInt(Macad::Occt::TCollection_AsciiString^ theName, int theValue)
{
    bool _result = ((::Graphic3d_ShaderProgram*)_NativeInstance)->PushVariableInt(*(::TCollection_AsciiString*)theName->NativeInstance, theValue);
    return _result;
}

bool Macad::Occt::Graphic3d_ShaderProgram::PushVariableVec2i(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::Graphic3d_Vec2i^ theValue)
{
    bool _result = ((::Graphic3d_ShaderProgram*)_NativeInstance)->PushVariableVec2i(*(::TCollection_AsciiString*)theName->NativeInstance, *(::Graphic3d_Vec2i*)theValue->NativeInstance);
    return _result;
}

bool Macad::Occt::Graphic3d_ShaderProgram::PushVariableVec3i(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::Graphic3d_Vec3i^ theValue)
{
    bool _result = ((::Graphic3d_ShaderProgram*)_NativeInstance)->PushVariableVec3i(*(::TCollection_AsciiString*)theName->NativeInstance, *(::Graphic3d_Vec3i*)theValue->NativeInstance);
    return _result;
}

bool Macad::Occt::Graphic3d_ShaderProgram::PushVariableVec4i(Macad::Occt::TCollection_AsciiString^ theName, Macad::Occt::Graphic3d_Vec4i^ theValue)
{
    bool _result = ((::Graphic3d_ShaderProgram*)_NativeInstance)->PushVariableVec4i(*(::TCollection_AsciiString*)theName->NativeInstance, *(::Graphic3d_Vec4i*)theValue->NativeInstance);
    return _result;
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_ShaderProgram::ShadersFolder()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)::Graphic3d_ShaderProgram::ShadersFolder();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::Graphic3d_ShaderProgram^ Macad::Occt::Graphic3d_ShaderProgram::CreateDowncasted(::Graphic3d_ShaderProgram* instance)
{
    return gcnew Macad::Occt::Graphic3d_ShaderProgram( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_TextureRoot
//---------------------------------------------------------------------

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_TextureRoot::TexturesFolder()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ::Graphic3d_TextureRoot::TexturesFolder();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

bool Macad::Occt::Graphic3d_TextureRoot::IsDone()
{
    bool _result = ((::Graphic3d_TextureRoot*)_NativeInstance)->IsDone();
    return _result;
}

Macad::Occt::Graphic3d_TypeOfTexture Macad::Occt::Graphic3d_TextureRoot::Type()
{
    ::Graphic3d_TypeOfTexture _result = ((::Graphic3d_TextureRoot*)_NativeInstance)->Type();
    return (Macad::Occt::Graphic3d_TypeOfTexture)_result;
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_TextureRoot::GetId()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Graphic3d_TextureRoot*)_NativeInstance)->GetId();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

long long unsigned int Macad::Occt::Graphic3d_TextureRoot::Revision()
{
    long long unsigned int _result = ((::Graphic3d_TextureRoot*)_NativeInstance)->Revision();
    return _result;
}

void Macad::Occt::Graphic3d_TextureRoot::UpdateRevision()
{
    ((::Graphic3d_TextureRoot*)_NativeInstance)->UpdateRevision();
}

Macad::Occt::Image_CompressedPixMap^ Macad::Occt::Graphic3d_TextureRoot::GetCompressedImage(Macad::Occt::Image_SupportedFormats^ theSupported)
{
    Handle(::Image_CompressedPixMap) _result = ((::Graphic3d_TextureRoot*)_NativeInstance)->GetCompressedImage(Handle(::Image_SupportedFormats)(theSupported->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Image_CompressedPixMap::CreateDowncasted(_result.get());
}

Macad::Occt::Image_PixMap^ Macad::Occt::Graphic3d_TextureRoot::GetImage(Macad::Occt::Image_SupportedFormats^ theSupported)
{
    Handle(::Image_PixMap) _result = ((::Graphic3d_TextureRoot*)_NativeInstance)->GetImage(Handle(::Image_SupportedFormats)(theSupported->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Image_PixMap::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_TextureParams^ Macad::Occt::Graphic3d_TextureRoot::GetParams()
{
    Handle(::Graphic3d_TextureParams) _result = ((::Graphic3d_TextureRoot*)_NativeInstance)->GetParams();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_TextureParams::CreateDowncasted(_result.get());
}

bool Macad::Occt::Graphic3d_TextureRoot::IsColorMap()
{
    bool _result = ((::Graphic3d_TextureRoot*)_NativeInstance)->IsColorMap();
    return _result;
}

void Macad::Occt::Graphic3d_TextureRoot::SetColorMap(bool theIsColor)
{
    ((::Graphic3d_TextureRoot*)_NativeInstance)->SetColorMap(theIsColor);
}

bool Macad::Occt::Graphic3d_TextureRoot::HasMipmaps()
{
    bool _result = ((::Graphic3d_TextureRoot*)_NativeInstance)->HasMipmaps();
    return _result;
}

void Macad::Occt::Graphic3d_TextureRoot::SetMipmapsGeneration(bool theToGenerateMipmaps)
{
    ((::Graphic3d_TextureRoot*)_NativeInstance)->SetMipmapsGeneration(theToGenerateMipmaps);
}

bool Macad::Occt::Graphic3d_TextureRoot::IsTopDown()
{
    bool _result = ((::Graphic3d_TextureRoot*)_NativeInstance)->IsTopDown();
    return _result;
}

Macad::Occt::Graphic3d_TextureRoot^ Macad::Occt::Graphic3d_TextureRoot::CreateDowncasted(::Graphic3d_TextureRoot* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::Graphic3d_TextureMap)))
        return Macad::Occt::Graphic3d_TextureMap::CreateDowncasted((::Graphic3d_TextureMap*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Graphic3d_TextureEnv)))
        return Macad::Occt::Graphic3d_TextureEnv::CreateDowncasted((::Graphic3d_TextureEnv*)instance);
    
    return gcnew Macad::Occt::Graphic3d_TextureRoot( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_TextureMap
//---------------------------------------------------------------------

void Macad::Occt::Graphic3d_TextureMap::EnableSmooth()
{
    ((::Graphic3d_TextureMap*)_NativeInstance)->EnableSmooth();
}

bool Macad::Occt::Graphic3d_TextureMap::IsSmoothed()
{
    bool _result = ((::Graphic3d_TextureMap*)_NativeInstance)->IsSmoothed();
    return _result;
}

void Macad::Occt::Graphic3d_TextureMap::DisableSmooth()
{
    ((::Graphic3d_TextureMap*)_NativeInstance)->DisableSmooth();
}

void Macad::Occt::Graphic3d_TextureMap::EnableModulate()
{
    ((::Graphic3d_TextureMap*)_NativeInstance)->EnableModulate();
}

void Macad::Occt::Graphic3d_TextureMap::DisableModulate()
{
    ((::Graphic3d_TextureMap*)_NativeInstance)->DisableModulate();
}

bool Macad::Occt::Graphic3d_TextureMap::IsModulate()
{
    bool _result = ((::Graphic3d_TextureMap*)_NativeInstance)->IsModulate();
    return _result;
}

void Macad::Occt::Graphic3d_TextureMap::EnableRepeat()
{
    ((::Graphic3d_TextureMap*)_NativeInstance)->EnableRepeat();
}

void Macad::Occt::Graphic3d_TextureMap::DisableRepeat()
{
    ((::Graphic3d_TextureMap*)_NativeInstance)->DisableRepeat();
}

bool Macad::Occt::Graphic3d_TextureMap::IsRepeat()
{
    bool _result = ((::Graphic3d_TextureMap*)_NativeInstance)->IsRepeat();
    return _result;
}

Macad::Occt::Graphic3d_LevelOfTextureAnisotropy Macad::Occt::Graphic3d_TextureMap::AnisoFilter()
{
    ::Graphic3d_LevelOfTextureAnisotropy _result = ((::Graphic3d_TextureMap*)_NativeInstance)->AnisoFilter();
    return (Macad::Occt::Graphic3d_LevelOfTextureAnisotropy)_result;
}

void Macad::Occt::Graphic3d_TextureMap::SetAnisoFilter(Macad::Occt::Graphic3d_LevelOfTextureAnisotropy theLevel)
{
    ((::Graphic3d_TextureMap*)_NativeInstance)->SetAnisoFilter((::Graphic3d_LevelOfTextureAnisotropy)theLevel);
}

Macad::Occt::Graphic3d_TextureMap^ Macad::Occt::Graphic3d_TextureMap::CreateDowncasted(::Graphic3d_TextureMap* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::Graphic3d_CubeMap)))
        return Macad::Occt::Graphic3d_CubeMap::CreateDowncasted((::Graphic3d_CubeMap*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Graphic3d_Texture2D)))
        return Macad::Occt::Graphic3d_Texture2D::CreateDowncasted((::Graphic3d_Texture2D*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Graphic3d_Texture1D)))
        return Macad::Occt::Graphic3d_Texture1D::CreateDowncasted((::Graphic3d_Texture1D*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Graphic3d_Texture3D)))
        return Macad::Occt::Graphic3d_Texture3D::CreateDowncasted((::Graphic3d_Texture3D*)instance);
    
    return gcnew Macad::Occt::Graphic3d_TextureMap( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_TextureSet
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_TextureSet::Graphic3d_TextureSet()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_TextureSet();
}

Macad::Occt::Graphic3d_TextureSet::Graphic3d_TextureSet(int theNbTextures)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_TextureSet(theNbTextures);
}

Macad::Occt::Graphic3d_TextureSet::Graphic3d_TextureSet(Macad::Occt::Graphic3d_TextureMap^ theTexture)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_TextureSet(Handle(::Graphic3d_TextureMap)(theTexture->NativeInstance));
}

bool Macad::Occt::Graphic3d_TextureSet::IsEmpty()
{
    bool _result = ((::Graphic3d_TextureSet*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::Graphic3d_TextureSet::Size()
{
    int _result = ((::Graphic3d_TextureSet*)_NativeInstance)->Size();
    return _result;
}

int Macad::Occt::Graphic3d_TextureSet::Lower()
{
    int _result = ((::Graphic3d_TextureSet*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::Graphic3d_TextureSet::Upper()
{
    int _result = ((::Graphic3d_TextureSet*)_NativeInstance)->Upper();
    return _result;
}

Macad::Occt::Graphic3d_TextureMap^ Macad::Occt::Graphic3d_TextureSet::First()
{
    Handle(::Graphic3d_TextureMap) _result = ((::Graphic3d_TextureSet*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_TextureMap::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_TextureSet::SetFirst(Macad::Occt::Graphic3d_TextureMap^ theTexture)
{
    ((::Graphic3d_TextureSet*)_NativeInstance)->SetFirst(Handle(::Graphic3d_TextureMap)(theTexture->NativeInstance));
}

Macad::Occt::Graphic3d_TextureMap^ Macad::Occt::Graphic3d_TextureSet::Value(int theIndex)
{
    Handle(::Graphic3d_TextureMap) _result = ((::Graphic3d_TextureSet*)_NativeInstance)->Value(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_TextureMap::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_TextureSet::SetValue(int theIndex, Macad::Occt::Graphic3d_TextureMap^ theTexture)
{
    ((::Graphic3d_TextureSet*)_NativeInstance)->SetValue(theIndex, Handle(::Graphic3d_TextureMap)(theTexture->NativeInstance));
}

Macad::Occt::Graphic3d_TextureSet^ Macad::Occt::Graphic3d_TextureSet::CreateDowncasted(::Graphic3d_TextureSet* instance)
{
    return gcnew Macad::Occt::Graphic3d_TextureSet( instance );
}

System::Collections::Generic::IEnumerator<Macad::Occt::Graphic3d_TextureMap^>^ Macad::Occt::Graphic3d_TextureSet::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::Graphic3d_TextureMap^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::Graphic3d_TextureSet::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::Graphic3d_TextureMap^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Aspects
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Aspects::Graphic3d_Aspects()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_Aspects();
}

Macad::Occt::Aspect_InteriorStyle Macad::Occt::Graphic3d_Aspects::InteriorStyle()
{
    ::Aspect_InteriorStyle _result = ((::Graphic3d_Aspects*)_NativeInstance)->InteriorStyle();
    return (Macad::Occt::Aspect_InteriorStyle)_result;
}

void Macad::Occt::Graphic3d_Aspects::SetInteriorStyle(Macad::Occt::Aspect_InteriorStyle theStyle)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetInteriorStyle((::Aspect_InteriorStyle)theStyle);
}

Macad::Occt::Graphic3d_TypeOfShadingModel Macad::Occt::Graphic3d_Aspects::ShadingModel()
{
    ::Graphic3d_TypeOfShadingModel _result = ((::Graphic3d_Aspects*)_NativeInstance)->ShadingModel();
    return (Macad::Occt::Graphic3d_TypeOfShadingModel)_result;
}

void Macad::Occt::Graphic3d_Aspects::SetShadingModel(Macad::Occt::Graphic3d_TypeOfShadingModel theShadingModel)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetShadingModel((::Graphic3d_TypeOfShadingModel)theShadingModel);
}

Macad::Occt::Graphic3d_AlphaMode Macad::Occt::Graphic3d_Aspects::AlphaMode()
{
    ::Graphic3d_AlphaMode _result = ((::Graphic3d_Aspects*)_NativeInstance)->AlphaMode();
    return (Macad::Occt::Graphic3d_AlphaMode)_result;
}

float Macad::Occt::Graphic3d_Aspects::AlphaCutoff()
{
    float _result = ((::Graphic3d_Aspects*)_NativeInstance)->AlphaCutoff();
    return _result;
}

void Macad::Occt::Graphic3d_Aspects::SetAlphaMode(Macad::Occt::Graphic3d_AlphaMode theMode, float theAlphaCutoff)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetAlphaMode((::Graphic3d_AlphaMode)theMode, theAlphaCutoff);
}

void Macad::Occt::Graphic3d_Aspects::SetAlphaMode(Macad::Occt::Graphic3d_AlphaMode theMode)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetAlphaMode((::Graphic3d_AlphaMode)theMode, 0.5F);
}

Macad::Occt::Quantity_ColorRGBA^ Macad::Occt::Graphic3d_Aspects::ColorRGBA()
{
    ::Quantity_ColorRGBA* _result = new ::Quantity_ColorRGBA();
    *_result = (::Quantity_ColorRGBA)((::Graphic3d_Aspects*)_NativeInstance)->ColorRGBA();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_ColorRGBA(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_Aspects::Color()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::Graphic3d_Aspects*)_NativeInstance)->Color();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Graphic3d_Aspects::SetColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_Aspects::InteriorColor()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::Graphic3d_Aspects*)_NativeInstance)->InteriorColor();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_ColorRGBA^ Macad::Occt::Graphic3d_Aspects::InteriorColorRGBA()
{
    ::Quantity_ColorRGBA* _result = new ::Quantity_ColorRGBA();
    *_result = (::Quantity_ColorRGBA)((::Graphic3d_Aspects*)_NativeInstance)->InteriorColorRGBA();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_ColorRGBA(_result);
}

void Macad::Occt::Graphic3d_Aspects::SetInteriorColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetInteriorColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::Graphic3d_Aspects::SetInteriorColor(Macad::Occt::Quantity_ColorRGBA^ theColor)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetInteriorColor(*(::Quantity_ColorRGBA*)theColor->NativeInstance);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_Aspects::BackInteriorColor()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::Graphic3d_Aspects*)_NativeInstance)->BackInteriorColor();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_ColorRGBA^ Macad::Occt::Graphic3d_Aspects::BackInteriorColorRGBA()
{
    ::Quantity_ColorRGBA* _result = new ::Quantity_ColorRGBA();
    *_result = (::Quantity_ColorRGBA)((::Graphic3d_Aspects*)_NativeInstance)->BackInteriorColorRGBA();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_ColorRGBA(_result);
}

void Macad::Occt::Graphic3d_Aspects::SetBackInteriorColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetBackInteriorColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::Graphic3d_Aspects::SetBackInteriorColor(Macad::Occt::Quantity_ColorRGBA^ theColor)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetBackInteriorColor(*(::Quantity_ColorRGBA*)theColor->NativeInstance);
}

Macad::Occt::Graphic3d_MaterialAspect^ Macad::Occt::Graphic3d_Aspects::FrontMaterial()
{
    ::Graphic3d_MaterialAspect* _result = new ::Graphic3d_MaterialAspect();
    *_result = (::Graphic3d_MaterialAspect)((::Graphic3d_Aspects*)_NativeInstance)->FrontMaterial();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_MaterialAspect(_result);
}

Macad::Occt::Graphic3d_MaterialAspect^ Macad::Occt::Graphic3d_Aspects::ChangeFrontMaterial()
{
    ::Graphic3d_MaterialAspect* _result = new ::Graphic3d_MaterialAspect();
    *_result = ((::Graphic3d_Aspects*)_NativeInstance)->ChangeFrontMaterial();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_MaterialAspect(_result);
}

void Macad::Occt::Graphic3d_Aspects::SetFrontMaterial(Macad::Occt::Graphic3d_MaterialAspect^ theMaterial)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetFrontMaterial(*(::Graphic3d_MaterialAspect*)theMaterial->NativeInstance);
}

Macad::Occt::Graphic3d_MaterialAspect^ Macad::Occt::Graphic3d_Aspects::BackMaterial()
{
    ::Graphic3d_MaterialAspect* _result = new ::Graphic3d_MaterialAspect();
    *_result = (::Graphic3d_MaterialAspect)((::Graphic3d_Aspects*)_NativeInstance)->BackMaterial();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_MaterialAspect(_result);
}

Macad::Occt::Graphic3d_MaterialAspect^ Macad::Occt::Graphic3d_Aspects::ChangeBackMaterial()
{
    ::Graphic3d_MaterialAspect* _result = new ::Graphic3d_MaterialAspect();
    *_result = ((::Graphic3d_Aspects*)_NativeInstance)->ChangeBackMaterial();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_MaterialAspect(_result);
}

void Macad::Occt::Graphic3d_Aspects::SetBackMaterial(Macad::Occt::Graphic3d_MaterialAspect^ theMaterial)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetBackMaterial(*(::Graphic3d_MaterialAspect*)theMaterial->NativeInstance);
}

Macad::Occt::Graphic3d_TypeOfBackfacingModel Macad::Occt::Graphic3d_Aspects::FaceCulling()
{
    ::Graphic3d_TypeOfBackfacingModel _result = ((::Graphic3d_Aspects*)_NativeInstance)->FaceCulling();
    return (Macad::Occt::Graphic3d_TypeOfBackfacingModel)_result;
}

void Macad::Occt::Graphic3d_Aspects::SetFaceCulling(Macad::Occt::Graphic3d_TypeOfBackfacingModel theCulling)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetFaceCulling((::Graphic3d_TypeOfBackfacingModel)theCulling);
}

bool Macad::Occt::Graphic3d_Aspects::Distinguish()
{
    bool _result = ((::Graphic3d_Aspects*)_NativeInstance)->Distinguish();
    return _result;
}

void Macad::Occt::Graphic3d_Aspects::SetDistinguish(bool toDistinguish)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetDistinguish(toDistinguish);
}

void Macad::Occt::Graphic3d_Aspects::SetDistinguishOn()
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetDistinguishOn();
}

void Macad::Occt::Graphic3d_Aspects::SetDistinguishOff()
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetDistinguishOff();
}

Macad::Occt::Graphic3d_ShaderProgram^ Macad::Occt::Graphic3d_Aspects::ShaderProgram()
{
    Handle(::Graphic3d_ShaderProgram) _result = ((::Graphic3d_Aspects*)_NativeInstance)->ShaderProgram();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ShaderProgram::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_Aspects::SetShaderProgram(Macad::Occt::Graphic3d_ShaderProgram^ theProgram)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetShaderProgram(Handle(::Graphic3d_ShaderProgram)(theProgram->NativeInstance));
}

Macad::Occt::Graphic3d_TextureSet^ Macad::Occt::Graphic3d_Aspects::TextureSet()
{
    Handle(::Graphic3d_TextureSet) _result = ((::Graphic3d_Aspects*)_NativeInstance)->TextureSet();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_TextureSet::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_Aspects::SetTextureSet(Macad::Occt::Graphic3d_TextureSet^ theTextures)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetTextureSet(Handle(::Graphic3d_TextureSet)(theTextures->NativeInstance));
}

Macad::Occt::Graphic3d_TextureMap^ Macad::Occt::Graphic3d_Aspects::TextureMap()
{
    Handle(::Graphic3d_TextureMap) _result = ((::Graphic3d_Aspects*)_NativeInstance)->TextureMap();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_TextureMap::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_Aspects::SetTextureMap(Macad::Occt::Graphic3d_TextureMap^ theTexture)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetTextureMap(Handle(::Graphic3d_TextureMap)(theTexture->NativeInstance));
}

bool Macad::Occt::Graphic3d_Aspects::ToMapTexture()
{
    bool _result = ((::Graphic3d_Aspects*)_NativeInstance)->ToMapTexture();
    return _result;
}

bool Macad::Occt::Graphic3d_Aspects::TextureMapState()
{
    bool _result = ((::Graphic3d_Aspects*)_NativeInstance)->TextureMapState();
    return _result;
}

void Macad::Occt::Graphic3d_Aspects::SetTextureMapOn(bool theToMap)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetTextureMapOn(theToMap);
}

void Macad::Occt::Graphic3d_Aspects::SetTextureMapOn()
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetTextureMapOn();
}

void Macad::Occt::Graphic3d_Aspects::SetTextureMapOff()
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetTextureMapOff();
}

Macad::Occt::Graphic3d_PolygonOffset^ Macad::Occt::Graphic3d_Aspects::PolygonOffset()
{
    ::Graphic3d_PolygonOffset* _result = new ::Graphic3d_PolygonOffset();
    *_result = (::Graphic3d_PolygonOffset)((::Graphic3d_Aspects*)_NativeInstance)->PolygonOffset();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_PolygonOffset(_result);
}

void Macad::Occt::Graphic3d_Aspects::SetPolygonOffset(Macad::Occt::Graphic3d_PolygonOffset^ theOffset)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetPolygonOffset(*(::Graphic3d_PolygonOffset*)theOffset->NativeInstance);
}

void Macad::Occt::Graphic3d_Aspects::PolygonOffsets(int% theMode, float% theFactor, float% theUnits)
{
    pin_ptr<int> pp_theMode = &theMode;
    pin_ptr<float> pp_theFactor = &theFactor;
    pin_ptr<float> pp_theUnits = &theUnits;
    ((::Graphic3d_Aspects*)_NativeInstance)->PolygonOffsets(*(int*)pp_theMode, *(float*)pp_theFactor, *(float*)pp_theUnits);
}

void Macad::Occt::Graphic3d_Aspects::SetPolygonOffsets(int theMode, float theFactor, float theUnits)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetPolygonOffsets(theMode, theFactor, theUnits);
}

void Macad::Occt::Graphic3d_Aspects::SetPolygonOffsets(int theMode, float theFactor)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetPolygonOffsets(theMode, theFactor, 0.F);
}

void Macad::Occt::Graphic3d_Aspects::SetPolygonOffsets(int theMode)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetPolygonOffsets(theMode, 1.F, 0.F);
}

Macad::Occt::Aspect_TypeOfLine Macad::Occt::Graphic3d_Aspects::LineType()
{
    ::Aspect_TypeOfLine _result = ((::Graphic3d_Aspects*)_NativeInstance)->LineType();
    return (Macad::Occt::Aspect_TypeOfLine)_result;
}

void Macad::Occt::Graphic3d_Aspects::SetLineType(Macad::Occt::Aspect_TypeOfLine theType)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetLineType((::Aspect_TypeOfLine)theType);
}

short unsigned int Macad::Occt::Graphic3d_Aspects::LinePattern()
{
    short unsigned int _result = ((::Graphic3d_Aspects*)_NativeInstance)->LinePattern();
    return _result;
}

void Macad::Occt::Graphic3d_Aspects::SetLinePattern(short unsigned int thePattern)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetLinePattern(thePattern);
}

short unsigned int Macad::Occt::Graphic3d_Aspects::LineStippleFactor()
{
    short unsigned int _result = ((::Graphic3d_Aspects*)_NativeInstance)->LineStippleFactor();
    return _result;
}

void Macad::Occt::Graphic3d_Aspects::SetLineStippleFactor(short unsigned int theFactor)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetLineStippleFactor(theFactor);
}

float Macad::Occt::Graphic3d_Aspects::LineWidth()
{
    float _result = ((::Graphic3d_Aspects*)_NativeInstance)->LineWidth();
    return _result;
}

void Macad::Occt::Graphic3d_Aspects::SetLineWidth(float theWidth)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetLineWidth(theWidth);
}

short unsigned int Macad::Occt::Graphic3d_Aspects::DefaultLinePatternForType(Macad::Occt::Aspect_TypeOfLine theType)
{
    short unsigned int _result = ::Graphic3d_Aspects::DefaultLinePatternForType((::Aspect_TypeOfLine)theType);
    return _result;
}

Macad::Occt::Aspect_TypeOfLine Macad::Occt::Graphic3d_Aspects::DefaultLineTypeForPattern(short unsigned int thePattern)
{
    ::Aspect_TypeOfLine _result = ::Graphic3d_Aspects::DefaultLineTypeForPattern(thePattern);
    return (Macad::Occt::Aspect_TypeOfLine)_result;
}

Macad::Occt::Aspect_TypeOfMarker Macad::Occt::Graphic3d_Aspects::MarkerType()
{
    ::Aspect_TypeOfMarker _result = ((::Graphic3d_Aspects*)_NativeInstance)->MarkerType();
    return (Macad::Occt::Aspect_TypeOfMarker)_result;
}

void Macad::Occt::Graphic3d_Aspects::SetMarkerType(Macad::Occt::Aspect_TypeOfMarker theType)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetMarkerType((::Aspect_TypeOfMarker)theType);
}

float Macad::Occt::Graphic3d_Aspects::MarkerScale()
{
    float _result = ((::Graphic3d_Aspects*)_NativeInstance)->MarkerScale();
    return _result;
}

void Macad::Occt::Graphic3d_Aspects::SetMarkerScale(float theScale)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetMarkerScale(theScale);
}

Macad::Occt::Graphic3d_MarkerImage^ Macad::Occt::Graphic3d_Aspects::MarkerImage()
{
    Handle(::Graphic3d_MarkerImage) _result = ((::Graphic3d_Aspects*)_NativeInstance)->MarkerImage();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_MarkerImage::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_Aspects::SetMarkerImage(Macad::Occt::Graphic3d_MarkerImage^ theImage)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetMarkerImage(Handle(::Graphic3d_MarkerImage)(theImage->NativeInstance));
}

bool Macad::Occt::Graphic3d_Aspects::IsMarkerSprite()
{
    bool _result = ((::Graphic3d_Aspects*)_NativeInstance)->IsMarkerSprite();
    return _result;
}

Macad::Occt::TCollection_HAsciiString^ Macad::Occt::Graphic3d_Aspects::TextFont()
{
    Handle(::TCollection_HAsciiString) _result = ((::Graphic3d_Aspects*)_NativeInstance)->TextFont();
    return _result.IsNull() ? nullptr : Macad::Occt::TCollection_HAsciiString::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_Aspects::SetTextFont(Macad::Occt::TCollection_HAsciiString^ theFont)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetTextFont(Handle(::TCollection_HAsciiString)(theFont->NativeInstance));
}

Macad::Occt::Aspect_TypeOfDisplayText Macad::Occt::Graphic3d_Aspects::TextDisplayType()
{
    ::Aspect_TypeOfDisplayText _result = ((::Graphic3d_Aspects*)_NativeInstance)->TextDisplayType();
    return (Macad::Occt::Aspect_TypeOfDisplayText)_result;
}

void Macad::Occt::Graphic3d_Aspects::SetTextDisplayType(Macad::Occt::Aspect_TypeOfDisplayText theType)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetTextDisplayType((::Aspect_TypeOfDisplayText)theType);
}

Macad::Occt::Quantity_ColorRGBA^ Macad::Occt::Graphic3d_Aspects::ColorSubTitleRGBA()
{
    ::Quantity_ColorRGBA* _result = new ::Quantity_ColorRGBA();
    *_result = (::Quantity_ColorRGBA)((::Graphic3d_Aspects*)_NativeInstance)->ColorSubTitleRGBA();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_ColorRGBA(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_Aspects::ColorSubTitle()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::Graphic3d_Aspects*)_NativeInstance)->ColorSubTitle();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Graphic3d_Aspects::SetColorSubTitle(Macad::Occt::Quantity_Color^ theColor)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetColorSubTitle(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::Graphic3d_Aspects::SetColorSubTitle(Macad::Occt::Quantity_ColorRGBA^ theColor)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetColorSubTitle(*(::Quantity_ColorRGBA*)theColor->NativeInstance);
}

bool Macad::Occt::Graphic3d_Aspects::IsTextZoomable()
{
    bool _result = ((::Graphic3d_Aspects*)_NativeInstance)->IsTextZoomable();
    return _result;
}

void Macad::Occt::Graphic3d_Aspects::SetTextZoomable(bool theFlag)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetTextZoomable(theFlag);
}

Macad::Occt::Aspect_TypeOfStyleText Macad::Occt::Graphic3d_Aspects::TextStyle()
{
    ::Aspect_TypeOfStyleText _result = ((::Graphic3d_Aspects*)_NativeInstance)->TextStyle();
    return (Macad::Occt::Aspect_TypeOfStyleText)_result;
}

void Macad::Occt::Graphic3d_Aspects::SetTextStyle(Macad::Occt::Aspect_TypeOfStyleText theStyle)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetTextStyle((::Aspect_TypeOfStyleText)theStyle);
}

float Macad::Occt::Graphic3d_Aspects::TextAngle()
{
    float _result = ((::Graphic3d_Aspects*)_NativeInstance)->TextAngle();
    return _result;
}

void Macad::Occt::Graphic3d_Aspects::SetTextAngle(float theAngle)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetTextAngle(theAngle);
}

bool Macad::Occt::Graphic3d_Aspects::ToDrawEdges()
{
    bool _result = ((::Graphic3d_Aspects*)_NativeInstance)->ToDrawEdges();
    return _result;
}

void Macad::Occt::Graphic3d_Aspects::SetDrawEdges(bool theToDraw)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetDrawEdges(theToDraw);
}

void Macad::Occt::Graphic3d_Aspects::SetEdgeOn()
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetEdgeOn();
}

void Macad::Occt::Graphic3d_Aspects::SetEdgeOff()
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetEdgeOff();
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_Aspects::EdgeColor()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::Graphic3d_Aspects*)_NativeInstance)->EdgeColor();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_ColorRGBA^ Macad::Occt::Graphic3d_Aspects::EdgeColorRGBA()
{
    ::Quantity_ColorRGBA* _result = new ::Quantity_ColorRGBA();
    *_result = (::Quantity_ColorRGBA)((::Graphic3d_Aspects*)_NativeInstance)->EdgeColorRGBA();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_ColorRGBA(_result);
}

void Macad::Occt::Graphic3d_Aspects::SetEdgeColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetEdgeColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::Graphic3d_Aspects::SetEdgeColor(Macad::Occt::Quantity_ColorRGBA^ theColor)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetEdgeColor(*(::Quantity_ColorRGBA*)theColor->NativeInstance);
}

Macad::Occt::Aspect_TypeOfLine Macad::Occt::Graphic3d_Aspects::EdgeLineType()
{
    ::Aspect_TypeOfLine _result = ((::Graphic3d_Aspects*)_NativeInstance)->EdgeLineType();
    return (Macad::Occt::Aspect_TypeOfLine)_result;
}

void Macad::Occt::Graphic3d_Aspects::SetEdgeLineType(Macad::Occt::Aspect_TypeOfLine theType)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetEdgeLineType((::Aspect_TypeOfLine)theType);
}

float Macad::Occt::Graphic3d_Aspects::EdgeWidth()
{
    float _result = ((::Graphic3d_Aspects*)_NativeInstance)->EdgeWidth();
    return _result;
}

void Macad::Occt::Graphic3d_Aspects::SetEdgeWidth(double theWidth)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetEdgeWidth(theWidth);
}

bool Macad::Occt::Graphic3d_Aspects::ToSkipFirstEdge()
{
    bool _result = ((::Graphic3d_Aspects*)_NativeInstance)->ToSkipFirstEdge();
    return _result;
}

void Macad::Occt::Graphic3d_Aspects::SetSkipFirstEdge(bool theToSkipFirstEdge)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetSkipFirstEdge(theToSkipFirstEdge);
}

bool Macad::Occt::Graphic3d_Aspects::ToDrawSilhouette()
{
    bool _result = ((::Graphic3d_Aspects*)_NativeInstance)->ToDrawSilhouette();
    return _result;
}

void Macad::Occt::Graphic3d_Aspects::SetDrawSilhouette(bool theToDraw)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetDrawSilhouette(theToDraw);
}

Macad::Occt::Graphic3d_HatchStyle^ Macad::Occt::Graphic3d_Aspects::HatchStyle()
{
    Handle(::Graphic3d_HatchStyle) _result = ((::Graphic3d_Aspects*)_NativeInstance)->HatchStyle();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_HatchStyle::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_Aspects::SetHatchStyle(Macad::Occt::Graphic3d_HatchStyle^ theStyle)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetHatchStyle(Handle(::Graphic3d_HatchStyle)(theStyle->NativeInstance));
}

void Macad::Occt::Graphic3d_Aspects::SetHatchStyle(Macad::Occt::Aspect_HatchStyle theStyle)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetHatchStyle((::Aspect_HatchStyle)theStyle);
}

bool Macad::Occt::Graphic3d_Aspects::IsEqual(Macad::Occt::Graphic3d_Aspects^ theOther)
{
    bool _result = ((::Graphic3d_Aspects*)_NativeInstance)->IsEqual(*(::Graphic3d_Aspects*)theOther->NativeInstance);
    return _result;
}

void Macad::Occt::Graphic3d_Aspects::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_Aspects*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Graphic3d_Aspects::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_Aspects*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

bool Macad::Occt::Graphic3d_Aspects::ToSuppressBackFaces()
{
    bool _result = ((::Graphic3d_Aspects*)_NativeInstance)->ToSuppressBackFaces();
    return _result;
}

void Macad::Occt::Graphic3d_Aspects::SetSuppressBackFaces(bool theToSuppress)
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SetSuppressBackFaces(theToSuppress);
}

bool Macad::Occt::Graphic3d_Aspects::BackFace()
{
    bool _result = ((::Graphic3d_Aspects*)_NativeInstance)->BackFace();
    return _result;
}

void Macad::Occt::Graphic3d_Aspects::AllowBackFace()
{
    ((::Graphic3d_Aspects*)_NativeInstance)->AllowBackFace();
}

void Macad::Occt::Graphic3d_Aspects::SuppressBackFace()
{
    ((::Graphic3d_Aspects*)_NativeInstance)->SuppressBackFace();
}

Macad::Occt::Graphic3d_Aspects^ Macad::Occt::Graphic3d_Aspects::CreateDowncasted(::Graphic3d_Aspects* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::Graphic3d_AspectFillArea3d)))
        return Macad::Occt::Graphic3d_AspectFillArea3d::CreateDowncasted((::Graphic3d_AspectFillArea3d*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Graphic3d_AspectLine3d)))
        return Macad::Occt::Graphic3d_AspectLine3d::CreateDowncasted((::Graphic3d_AspectLine3d*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Graphic3d_AspectMarker3d)))
        return Macad::Occt::Graphic3d_AspectMarker3d::CreateDowncasted((::Graphic3d_AspectMarker3d*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Graphic3d_AspectText3d)))
        return Macad::Occt::Graphic3d_AspectText3d::CreateDowncasted((::Graphic3d_AspectText3d*)instance);
    
    return gcnew Macad::Occt::Graphic3d_Aspects( instance );
}

bool Macad::Occt::Graphic3d_Aspects::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::Graphic3d_Aspects::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((Graphic3d_Aspects^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  Graphic3d_AspectFillArea3d
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_AspectFillArea3d::Graphic3d_AspectFillArea3d()
    : Macad::Occt::Graphic3d_Aspects(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_AspectFillArea3d();
}

Macad::Occt::Graphic3d_AspectFillArea3d::Graphic3d_AspectFillArea3d(Macad::Occt::Aspect_InteriorStyle theInterior, Macad::Occt::Quantity_Color^ theInteriorColor, Macad::Occt::Quantity_Color^ theEdgeColor, Macad::Occt::Aspect_TypeOfLine theEdgeLineType, double theEdgeWidth, Macad::Occt::Graphic3d_MaterialAspect^ theFrontMaterial, Macad::Occt::Graphic3d_MaterialAspect^ theBackMaterial)
    : Macad::Occt::Graphic3d_Aspects(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_AspectFillArea3d((::Aspect_InteriorStyle)theInterior, *(::Quantity_Color*)theInteriorColor->NativeInstance, *(::Quantity_Color*)theEdgeColor->NativeInstance, (::Aspect_TypeOfLine)theEdgeLineType, theEdgeWidth, *(::Graphic3d_MaterialAspect*)theFrontMaterial->NativeInstance, *(::Graphic3d_MaterialAspect*)theBackMaterial->NativeInstance);
}

bool Macad::Occt::Graphic3d_AspectFillArea3d::Edge()
{
    bool _result = ((::Graphic3d_AspectFillArea3d*)_NativeInstance)->Edge();
    return _result;
}

Macad::Occt::Graphic3d_AspectFillArea3d^ Macad::Occt::Graphic3d_AspectFillArea3d::CreateDowncasted(::Graphic3d_AspectFillArea3d* instance)
{
    return gcnew Macad::Occt::Graphic3d_AspectFillArea3d( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_AspectLine3d
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_AspectLine3d::Graphic3d_AspectLine3d()
    : Macad::Occt::Graphic3d_Aspects(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_AspectLine3d();
}

Macad::Occt::Graphic3d_AspectLine3d::Graphic3d_AspectLine3d(Macad::Occt::Quantity_Color^ theColor, Macad::Occt::Aspect_TypeOfLine theType, double theWidth)
    : Macad::Occt::Graphic3d_Aspects(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_AspectLine3d(*(::Quantity_Color*)theColor->NativeInstance, (::Aspect_TypeOfLine)theType, theWidth);
}

Macad::Occt::Aspect_TypeOfLine Macad::Occt::Graphic3d_AspectLine3d::Type()
{
    ::Aspect_TypeOfLine _result = ((::Graphic3d_AspectLine3d*)_NativeInstance)->Type();
    return (Macad::Occt::Aspect_TypeOfLine)_result;
}

void Macad::Occt::Graphic3d_AspectLine3d::SetType(Macad::Occt::Aspect_TypeOfLine theType)
{
    ((::Graphic3d_AspectLine3d*)_NativeInstance)->SetType((::Aspect_TypeOfLine)theType);
}

float Macad::Occt::Graphic3d_AspectLine3d::Width()
{
    float _result = ((::Graphic3d_AspectLine3d*)_NativeInstance)->Width();
    return _result;
}

void Macad::Occt::Graphic3d_AspectLine3d::SetWidth(double theWidth)
{
    ((::Graphic3d_AspectLine3d*)_NativeInstance)->SetWidth(theWidth);
}

void Macad::Occt::Graphic3d_AspectLine3d::SetWidth(float theWidth)
{
    ((::Graphic3d_AspectLine3d*)_NativeInstance)->SetWidth(theWidth);
}

Macad::Occt::Graphic3d_AspectLine3d^ Macad::Occt::Graphic3d_AspectLine3d::CreateDowncasted(::Graphic3d_AspectLine3d* instance)
{
    return gcnew Macad::Occt::Graphic3d_AspectLine3d( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_AspectMarker3d
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_AspectMarker3d::Graphic3d_AspectMarker3d()
    : Macad::Occt::Graphic3d_Aspects(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_AspectMarker3d();
}

Macad::Occt::Graphic3d_AspectMarker3d::Graphic3d_AspectMarker3d(Macad::Occt::Aspect_TypeOfMarker theType, Macad::Occt::Quantity_Color^ theColor, double theScale)
    : Macad::Occt::Graphic3d_Aspects(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_AspectMarker3d((::Aspect_TypeOfMarker)theType, *(::Quantity_Color*)theColor->NativeInstance, theScale);
}

Macad::Occt::Graphic3d_AspectMarker3d::Graphic3d_AspectMarker3d(Macad::Occt::Quantity_Color^ theColor, int theWidth, int theHeight, Macad::Occt::TColStd_HArray1OfByte^ theTextureBitmap)
    : Macad::Occt::Graphic3d_Aspects(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_AspectMarker3d(*(::Quantity_Color*)theColor->NativeInstance, theWidth, theHeight, Handle(::TColStd_HArray1OfByte)(theTextureBitmap->NativeInstance));
}

Macad::Occt::Graphic3d_AspectMarker3d::Graphic3d_AspectMarker3d(Macad::Occt::Image_PixMap^ theTextureImage)
    : Macad::Occt::Graphic3d_Aspects(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_AspectMarker3d(Handle(::Image_PixMap)(theTextureImage->NativeInstance));
}

float Macad::Occt::Graphic3d_AspectMarker3d::Scale()
{
    float _result = ((::Graphic3d_AspectMarker3d*)_NativeInstance)->Scale();
    return _result;
}

void Macad::Occt::Graphic3d_AspectMarker3d::SetScale(float theScale)
{
    ((::Graphic3d_AspectMarker3d*)_NativeInstance)->SetScale(theScale);
}

void Macad::Occt::Graphic3d_AspectMarker3d::SetScale(double theScale)
{
    ((::Graphic3d_AspectMarker3d*)_NativeInstance)->SetScale(theScale);
}

Macad::Occt::Aspect_TypeOfMarker Macad::Occt::Graphic3d_AspectMarker3d::Type()
{
    ::Aspect_TypeOfMarker _result = ((::Graphic3d_AspectMarker3d*)_NativeInstance)->Type();
    return (Macad::Occt::Aspect_TypeOfMarker)_result;
}

void Macad::Occt::Graphic3d_AspectMarker3d::SetType(Macad::Occt::Aspect_TypeOfMarker theType)
{
    ((::Graphic3d_AspectMarker3d*)_NativeInstance)->SetType((::Aspect_TypeOfMarker)theType);
}

void Macad::Occt::Graphic3d_AspectMarker3d::GetTextureSize(int% theWidth, int% theHeight)
{
    pin_ptr<int> pp_theWidth = &theWidth;
    pin_ptr<int> pp_theHeight = &theHeight;
    ((::Graphic3d_AspectMarker3d*)_NativeInstance)->GetTextureSize(*(int*)pp_theWidth, *(int*)pp_theHeight);
}

Macad::Occt::Graphic3d_MarkerImage^ Macad::Occt::Graphic3d_AspectMarker3d::GetMarkerImage()
{
    Handle(::Graphic3d_MarkerImage) _result = ((::Graphic3d_AspectMarker3d*)_NativeInstance)->GetMarkerImage();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_MarkerImage::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_AspectMarker3d::SetBitMap(int theWidth, int theHeight, Macad::Occt::TColStd_HArray1OfByte^ theTexture)
{
    ((::Graphic3d_AspectMarker3d*)_NativeInstance)->SetBitMap(theWidth, theHeight, Handle(::TColStd_HArray1OfByte)(theTexture->NativeInstance));
}

Macad::Occt::Graphic3d_AspectMarker3d^ Macad::Occt::Graphic3d_AspectMarker3d::CreateDowncasted(::Graphic3d_AspectMarker3d* instance)
{
    return gcnew Macad::Occt::Graphic3d_AspectMarker3d( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_AspectText3d
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_AspectText3d::Graphic3d_AspectText3d()
    : Macad::Occt::Graphic3d_Aspects(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_AspectText3d();
}

Macad::Occt::Graphic3d_AspectText3d::Graphic3d_AspectText3d(Macad::Occt::Quantity_Color^ theColor, System::String^ theFont, double theExpansionFactor, double theSpace, Macad::Occt::Aspect_TypeOfStyleText theStyle, Macad::Occt::Aspect_TypeOfDisplayText theDisplayType)
    : Macad::Occt::Graphic3d_Aspects(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theFont = (char*)(void*)Marshal::StringToHGlobalAnsi(theFont);
    NativeInstance = new ::Graphic3d_AspectText3d(*(::Quantity_Color*)theColor->NativeInstance, sz_theFont, theExpansionFactor, theSpace, (::Aspect_TypeOfStyleText)theStyle, (::Aspect_TypeOfDisplayText)theDisplayType);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFont);
}

Macad::Occt::Graphic3d_AspectText3d::Graphic3d_AspectText3d(Macad::Occt::Quantity_Color^ theColor, System::String^ theFont, double theExpansionFactor, double theSpace, Macad::Occt::Aspect_TypeOfStyleText theStyle)
    : Macad::Occt::Graphic3d_Aspects(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theFont = (char*)(void*)Marshal::StringToHGlobalAnsi(theFont);
    NativeInstance = new ::Graphic3d_AspectText3d(*(::Quantity_Color*)theColor->NativeInstance, sz_theFont, theExpansionFactor, theSpace, (::Aspect_TypeOfStyleText)theStyle, Aspect_TODT_NORMAL);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFont);
}

Macad::Occt::Graphic3d_AspectText3d::Graphic3d_AspectText3d(Macad::Occt::Quantity_Color^ theColor, System::String^ theFont, double theExpansionFactor, double theSpace)
    : Macad::Occt::Graphic3d_Aspects(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theFont = (char*)(void*)Marshal::StringToHGlobalAnsi(theFont);
    NativeInstance = new ::Graphic3d_AspectText3d(*(::Quantity_Color*)theColor->NativeInstance, sz_theFont, theExpansionFactor, theSpace, Aspect_TOST_NORMAL, Aspect_TODT_NORMAL);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFont);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_AspectText3d::Color()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::Graphic3d_AspectText3d*)_NativeInstance)->Color();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

Macad::Occt::Quantity_ColorRGBA^ Macad::Occt::Graphic3d_AspectText3d::ColorRGBA()
{
    ::Quantity_ColorRGBA* _result = new ::Quantity_ColorRGBA();
    *_result = (::Quantity_ColorRGBA)((::Graphic3d_AspectText3d*)_NativeInstance)->ColorRGBA();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_ColorRGBA(_result);
}

void Macad::Occt::Graphic3d_AspectText3d::SetColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::Graphic3d_AspectText3d*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::Graphic3d_AspectText3d::SetColor(Macad::Occt::Quantity_ColorRGBA^ theColor)
{
    ((::Graphic3d_AspectText3d*)_NativeInstance)->SetColor(*(::Quantity_ColorRGBA*)theColor->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_AspectText3d::Font()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Graphic3d_AspectText3d*)_NativeInstance)->Font();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::Graphic3d_AspectText3d::SetFont(Macad::Occt::TCollection_AsciiString^ theFont)
{
    ((::Graphic3d_AspectText3d*)_NativeInstance)->SetFont(*(::TCollection_AsciiString*)theFont->NativeInstance);
}

void Macad::Occt::Graphic3d_AspectText3d::SetFont(System::String^ theFont)
{
    const char* sz_theFont = (char*)(void*)Marshal::StringToHGlobalAnsi(theFont);
    ((::Graphic3d_AspectText3d*)_NativeInstance)->SetFont(sz_theFont);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theFont);
}

Macad::Occt::Aspect_TypeOfStyleText Macad::Occt::Graphic3d_AspectText3d::Style()
{
    ::Aspect_TypeOfStyleText _result = ((::Graphic3d_AspectText3d*)_NativeInstance)->Style();
    return (Macad::Occt::Aspect_TypeOfStyleText)_result;
}

void Macad::Occt::Graphic3d_AspectText3d::SetStyle(Macad::Occt::Aspect_TypeOfStyleText theStyle)
{
    ((::Graphic3d_AspectText3d*)_NativeInstance)->SetStyle((::Aspect_TypeOfStyleText)theStyle);
}

Macad::Occt::Aspect_TypeOfDisplayText Macad::Occt::Graphic3d_AspectText3d::DisplayType()
{
    ::Aspect_TypeOfDisplayText _result = ((::Graphic3d_AspectText3d*)_NativeInstance)->DisplayType();
    return (Macad::Occt::Aspect_TypeOfDisplayText)_result;
}

void Macad::Occt::Graphic3d_AspectText3d::SetDisplayType(Macad::Occt::Aspect_TypeOfDisplayText theDisplayType)
{
    ((::Graphic3d_AspectText3d*)_NativeInstance)->SetDisplayType((::Aspect_TypeOfDisplayText)theDisplayType);
}

bool Macad::Occt::Graphic3d_AspectText3d::GetTextZoomable()
{
    bool _result = ((::Graphic3d_AspectText3d*)_NativeInstance)->GetTextZoomable();
    return _result;
}

float Macad::Occt::Graphic3d_AspectText3d::GetTextAngle()
{
    float _result = ((::Graphic3d_AspectText3d*)_NativeInstance)->GetTextAngle();
    return _result;
}

void Macad::Occt::Graphic3d_AspectText3d::SetTextAngle(double theAngle)
{
    ((::Graphic3d_AspectText3d*)_NativeInstance)->SetTextAngle(theAngle);
}

void Macad::Occt::Graphic3d_AspectText3d::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_AspectText3d*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Graphic3d_AspectText3d::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_AspectText3d*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::Graphic3d_AspectText3d^ Macad::Occt::Graphic3d_AspectText3d::CreateDowncasted(::Graphic3d_AspectText3d* instance)
{
    return gcnew Macad::Occt::Graphic3d_AspectText3d( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_CStructure
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_GraphicDriver^ Macad::Occt::Graphic3d_CStructure::GraphicDriver()
{
    Handle(::Graphic3d_GraphicDriver) _result = ((::Graphic3d_CStructure*)_NativeInstance)->GraphicDriver();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_GraphicDriver::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_SequenceOfGroup^ Macad::Occt::Graphic3d_CStructure::Groups()
{
    ::Graphic3d_SequenceOfGroup* _result = new ::Graphic3d_SequenceOfGroup();
    *_result = (::Graphic3d_SequenceOfGroup)((::Graphic3d_CStructure*)_NativeInstance)->Groups();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_SequenceOfGroup(_result);
}

Macad::Occt::TopLoc_Datum3D^ Macad::Occt::Graphic3d_CStructure::Transformation()
{
    Handle(::TopLoc_Datum3D) _result = ((::Graphic3d_CStructure*)_NativeInstance)->Transformation();
    return _result.IsNull() ? nullptr : Macad::Occt::TopLoc_Datum3D::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_CStructure::SetTransformation(Macad::Occt::TopLoc_Datum3D^ theTrsf)
{
    ((::Graphic3d_CStructure*)_NativeInstance)->SetTransformation(Handle(::TopLoc_Datum3D)(theTrsf->NativeInstance));
}

Macad::Occt::Graphic3d_TransformPers^ Macad::Occt::Graphic3d_CStructure::TransformPersistence()
{
    Handle(::Graphic3d_TransformPers) _result = ((::Graphic3d_CStructure*)_NativeInstance)->TransformPersistence();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_TransformPers::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_CStructure::SetTransformPersistence(Macad::Occt::Graphic3d_TransformPers^ theTrsfPers)
{
    ((::Graphic3d_CStructure*)_NativeInstance)->SetTransformPersistence(Handle(::Graphic3d_TransformPers)(theTrsfPers->NativeInstance));
}

bool Macad::Occt::Graphic3d_CStructure::HasGroupTransformPersistence()
{
    bool _result = ((::Graphic3d_CStructure*)_NativeInstance)->HasGroupTransformPersistence();
    return _result;
}

void Macad::Occt::Graphic3d_CStructure::SetGroupTransformPersistence(bool theValue)
{
    ((::Graphic3d_CStructure*)_NativeInstance)->SetGroupTransformPersistence(theValue);
}

Macad::Occt::Graphic3d_SequenceOfHClipPlane^ Macad::Occt::Graphic3d_CStructure::ClipPlanes()
{
    Handle(::Graphic3d_SequenceOfHClipPlane) _result = ((::Graphic3d_CStructure*)_NativeInstance)->ClipPlanes();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_SequenceOfHClipPlane::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_CStructure::SetClipPlanes(Macad::Occt::Graphic3d_SequenceOfHClipPlane^ thePlanes)
{
    ((::Graphic3d_CStructure*)_NativeInstance)->SetClipPlanes(Handle(::Graphic3d_SequenceOfHClipPlane)(thePlanes->NativeInstance));
}

bool Macad::Occt::Graphic3d_CStructure::IsVisible()
{
    bool _result = ((::Graphic3d_CStructure*)_NativeInstance)->IsVisible();
    return _result;
}

bool Macad::Occt::Graphic3d_CStructure::IsVisible(int theViewId)
{
    bool _result = ((::Graphic3d_CStructure*)_NativeInstance)->IsVisible(theViewId);
    return _result;
}

void Macad::Occt::Graphic3d_CStructure::SetZLayer(int theLayerIndex)
{
    ((::Graphic3d_CStructure*)_NativeInstance)->SetZLayer(theLayerIndex);
}

int Macad::Occt::Graphic3d_CStructure::ZLayer()
{
    int _result = ((::Graphic3d_CStructure*)_NativeInstance)->ZLayer();
    return _result;
}

Macad::Occt::Graphic3d_PresentationAttributes^ Macad::Occt::Graphic3d_CStructure::HighlightStyle()
{
    Handle(::Graphic3d_PresentationAttributes) _result = ((::Graphic3d_CStructure*)_NativeInstance)->HighlightStyle();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_PresentationAttributes::CreateDowncasted(_result.get());
}

int Macad::Occt::Graphic3d_CStructure::Identification()
{
    int _result = ((::Graphic3d_CStructure*)_NativeInstance)->Identification();
    return _result;
}

Macad::Occt::Graphic3d_DisplayPriority Macad::Occt::Graphic3d_CStructure::Priority()
{
    ::Graphic3d_DisplayPriority _result = ((::Graphic3d_CStructure*)_NativeInstance)->Priority();
    return (Macad::Occt::Graphic3d_DisplayPriority)_result;
}

void Macad::Occt::Graphic3d_CStructure::SetPriority(Macad::Occt::Graphic3d_DisplayPriority thePriority)
{
    ((::Graphic3d_CStructure*)_NativeInstance)->SetPriority((::Graphic3d_DisplayPriority)thePriority);
}

Macad::Occt::Graphic3d_DisplayPriority Macad::Occt::Graphic3d_CStructure::PreviousPriority()
{
    ::Graphic3d_DisplayPriority _result = ((::Graphic3d_CStructure*)_NativeInstance)->PreviousPriority();
    return (Macad::Occt::Graphic3d_DisplayPriority)_result;
}

void Macad::Occt::Graphic3d_CStructure::SetPreviousPriority(Macad::Occt::Graphic3d_DisplayPriority thePriority)
{
    ((::Graphic3d_CStructure*)_NativeInstance)->SetPreviousPriority((::Graphic3d_DisplayPriority)thePriority);
}

bool Macad::Occt::Graphic3d_CStructure::IsCulled()
{
    bool _result = ((::Graphic3d_CStructure*)_NativeInstance)->IsCulled();
    return _result;
}

void Macad::Occt::Graphic3d_CStructure::SetCulled(bool theIsCulled)
{
    ((::Graphic3d_CStructure*)_NativeInstance)->SetCulled(theIsCulled);
}

void Macad::Occt::Graphic3d_CStructure::MarkAsNotCulled()
{
    ((::Graphic3d_CStructure*)_NativeInstance)->MarkAsNotCulled();
}

bool Macad::Occt::Graphic3d_CStructure::BndBoxClipCheck()
{
    bool _result = ((::Graphic3d_CStructure*)_NativeInstance)->BndBoxClipCheck();
    return _result;
}

void Macad::Occt::Graphic3d_CStructure::SetBndBoxClipCheck(bool theBndBoxClipCheck)
{
    ((::Graphic3d_CStructure*)_NativeInstance)->SetBndBoxClipCheck(theBndBoxClipCheck);
}

bool Macad::Occt::Graphic3d_CStructure::IsAlwaysRendered()
{
    bool _result = ((::Graphic3d_CStructure*)_NativeInstance)->IsAlwaysRendered();
    return _result;
}

void Macad::Occt::Graphic3d_CStructure::OnVisibilityChanged()
{
    ((::Graphic3d_CStructure*)_NativeInstance)->OnVisibilityChanged();
}

void Macad::Occt::Graphic3d_CStructure::Clear()
{
    ((::Graphic3d_CStructure*)_NativeInstance)->Clear();
}

void Macad::Occt::Graphic3d_CStructure::Connect(Macad::Occt::Graphic3d_CStructure^ theStructure)
{
    ((::Graphic3d_CStructure*)_NativeInstance)->Connect(*(::Graphic3d_CStructure*)theStructure->NativeInstance);
}

void Macad::Occt::Graphic3d_CStructure::Disconnect(Macad::Occt::Graphic3d_CStructure^ theStructure)
{
    ((::Graphic3d_CStructure*)_NativeInstance)->Disconnect(*(::Graphic3d_CStructure*)theStructure->NativeInstance);
}

void Macad::Occt::Graphic3d_CStructure::GraphicHighlight(Macad::Occt::Graphic3d_PresentationAttributes^ theStyle)
{
    ((::Graphic3d_CStructure*)_NativeInstance)->GraphicHighlight(Handle(::Graphic3d_PresentationAttributes)(theStyle->NativeInstance));
}

void Macad::Occt::Graphic3d_CStructure::GraphicUnhighlight()
{
    ((::Graphic3d_CStructure*)_NativeInstance)->GraphicUnhighlight();
}

Macad::Occt::Graphic3d_CStructure^ Macad::Occt::Graphic3d_CStructure::ShadowLink(Macad::Occt::Graphic3d_StructureManager^ theManager)
{
    Handle(::Graphic3d_CStructure) _result = ((::Graphic3d_CStructure*)_NativeInstance)->ShadowLink(Handle(::Graphic3d_StructureManager)(theManager->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_CStructure::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_Group^ Macad::Occt::Graphic3d_CStructure::NewGroup(Macad::Occt::Graphic3d_Structure^ theStruct)
{
    Handle(::Graphic3d_Group) _result = ((::Graphic3d_CStructure*)_NativeInstance)->NewGroup(Handle(::Graphic3d_Structure)(theStruct->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Group::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_CStructure::RemoveGroup(Macad::Occt::Graphic3d_Group^ theGroup)
{
    ((::Graphic3d_CStructure*)_NativeInstance)->RemoveGroup(Handle(::Graphic3d_Group)(theGroup->NativeInstance));
}

void Macad::Occt::Graphic3d_CStructure::updateLayerTransformation()
{
    ((::Graphic3d_CStructure*)_NativeInstance)->updateLayerTransformation();
}

void Macad::Occt::Graphic3d_CStructure::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_CStructure*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Graphic3d_CStructure::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_CStructure*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::Graphic3d_CStructure^ Macad::Occt::Graphic3d_CStructure::CreateDowncasted(::Graphic3d_CStructure* instance)
{
    return gcnew Macad::Occt::Graphic3d_CStructure( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_WorldViewProjState
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_WorldViewProjState::Graphic3d_WorldViewProjState()
    : Macad::Occt::BaseClass<::Graphic3d_WorldViewProjState>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_WorldViewProjState();
}

Macad::Occt::Graphic3d_WorldViewProjState::Graphic3d_WorldViewProjState(long long unsigned int theProjectionState, long long unsigned int theWorldViewState, Macad::Occt::Standard_Transient^ theCamera)
    : Macad::Occt::BaseClass<::Graphic3d_WorldViewProjState>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_WorldViewProjState(theProjectionState, theWorldViewState, (::Standard_Transient*)theCamera->NativeInstance);
}

Macad::Occt::Graphic3d_WorldViewProjState::Graphic3d_WorldViewProjState(long long unsigned int theProjectionState, long long unsigned int theWorldViewState)
    : Macad::Occt::BaseClass<::Graphic3d_WorldViewProjState>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_WorldViewProjState(theProjectionState, theWorldViewState, nullptr);
}

bool Macad::Occt::Graphic3d_WorldViewProjState::IsValid()
{
    bool _result = ((::Graphic3d_WorldViewProjState*)_NativeInstance)->IsValid();
    return _result;
}

void Macad::Occt::Graphic3d_WorldViewProjState::Reset()
{
    ((::Graphic3d_WorldViewProjState*)_NativeInstance)->Reset();
}

void Macad::Occt::Graphic3d_WorldViewProjState::Initialize(long long unsigned int theProjectionState, long long unsigned int theWorldViewState, Macad::Occt::Standard_Transient^ theCamera)
{
    ((::Graphic3d_WorldViewProjState*)_NativeInstance)->Initialize(theProjectionState, theWorldViewState, (::Standard_Transient*)theCamera->NativeInstance);
}

void Macad::Occt::Graphic3d_WorldViewProjState::Initialize(long long unsigned int theProjectionState, long long unsigned int theWorldViewState)
{
    ((::Graphic3d_WorldViewProjState*)_NativeInstance)->Initialize(theProjectionState, theWorldViewState, nullptr);
}

void Macad::Occt::Graphic3d_WorldViewProjState::Initialize(Macad::Occt::Standard_Transient^ theCamera)
{
    ((::Graphic3d_WorldViewProjState*)_NativeInstance)->Initialize((::Standard_Transient*)theCamera->NativeInstance);
}

void Macad::Occt::Graphic3d_WorldViewProjState::Initialize()
{
    ((::Graphic3d_WorldViewProjState*)_NativeInstance)->Initialize(nullptr);
}

bool Macad::Occt::Graphic3d_WorldViewProjState::IsProjectionChanged(Macad::Occt::Graphic3d_WorldViewProjState^ theState)
{
    bool _result = ((::Graphic3d_WorldViewProjState*)_NativeInstance)->IsProjectionChanged(*(::Graphic3d_WorldViewProjState*)theState->NativeInstance);
    return _result;
}

bool Macad::Occt::Graphic3d_WorldViewProjState::IsWorldViewChanged(Macad::Occt::Graphic3d_WorldViewProjState^ theState)
{
    bool _result = ((::Graphic3d_WorldViewProjState*)_NativeInstance)->IsWorldViewChanged(*(::Graphic3d_WorldViewProjState*)theState->NativeInstance);
    return _result;
}

bool Macad::Occt::Graphic3d_WorldViewProjState::IsChanged(Macad::Occt::Graphic3d_WorldViewProjState^ theState)
{
    bool _result = ((::Graphic3d_WorldViewProjState*)_NativeInstance)->IsChanged(*(::Graphic3d_WorldViewProjState*)theState->NativeInstance);
    return _result;
}

void Macad::Occt::Graphic3d_WorldViewProjState::DumpJson(System::IO::TextWriter^ theOStream, int parameter1)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_WorldViewProjState*)_NativeInstance)->DumpJson(oss_theOStream, parameter1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Camera
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Camera::Graphic3d_Camera()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_Camera();
}

void Macad::Occt::Graphic3d_Camera::Interpolate(Macad::Occt::Graphic3d_Camera^ theStart, Macad::Occt::Graphic3d_Camera^ theEnd, double theT, Macad::Occt::Graphic3d_Camera^ theCamera)
{
    Handle(::Graphic3d_Camera) h_theCamera = theCamera->NativeInstance;
    ::Graphic3d_Camera::Interpolate(Handle(::Graphic3d_Camera)(theStart->NativeInstance), Handle(::Graphic3d_Camera)(theEnd->NativeInstance), theT, h_theCamera);
    theCamera->NativeInstance = h_theCamera.get();
}

void Macad::Occt::Graphic3d_Camera::CopyMappingData(Macad::Occt::Graphic3d_Camera^ theOtherCamera)
{
    ((::Graphic3d_Camera*)_NativeInstance)->CopyMappingData(Handle(::Graphic3d_Camera)(theOtherCamera->NativeInstance));
}

void Macad::Occt::Graphic3d_Camera::CopyOrientationData(Macad::Occt::Graphic3d_Camera^ theOtherCamera)
{
    ((::Graphic3d_Camera*)_NativeInstance)->CopyOrientationData(Handle(::Graphic3d_Camera)(theOtherCamera->NativeInstance));
}

void Macad::Occt::Graphic3d_Camera::Copy(Macad::Occt::Graphic3d_Camera^ theOther)
{
    ((::Graphic3d_Camera*)_NativeInstance)->Copy(Handle(::Graphic3d_Camera)(theOther->NativeInstance));
}

Macad::Occt::Dir Macad::Occt::Graphic3d_Camera::Direction()
{
    ::gp_Dir _nativeResult = ((::Graphic3d_Camera*)_NativeInstance)->Direction();
    return Macad::Occt::Dir(_nativeResult);
}

void Macad::Occt::Graphic3d_Camera::SetDirectionFromEye(Macad::Occt::Dir theDir)
{
    pin_ptr<Macad::Occt::Dir> pp_theDir = &theDir;
    ((::Graphic3d_Camera*)_NativeInstance)->SetDirectionFromEye(*(gp_Dir*)pp_theDir);
}

void Macad::Occt::Graphic3d_Camera::SetDirection(Macad::Occt::Dir theDir)
{
    pin_ptr<Macad::Occt::Dir> pp_theDir = &theDir;
    ((::Graphic3d_Camera*)_NativeInstance)->SetDirection(*(gp_Dir*)pp_theDir);
}

Macad::Occt::Dir Macad::Occt::Graphic3d_Camera::Up()
{
    ::gp_Dir _nativeResult = ((::Graphic3d_Camera*)_NativeInstance)->Up();
    return Macad::Occt::Dir(_nativeResult);
}

void Macad::Occt::Graphic3d_Camera::SetUp(Macad::Occt::Dir theUp)
{
    pin_ptr<Macad::Occt::Dir> pp_theUp = &theUp;
    ((::Graphic3d_Camera*)_NativeInstance)->SetUp(*(gp_Dir*)pp_theUp);
}

void Macad::Occt::Graphic3d_Camera::OrthogonalizeUp()
{
    ((::Graphic3d_Camera*)_NativeInstance)->OrthogonalizeUp();
}

Macad::Occt::Dir Macad::Occt::Graphic3d_Camera::OrthogonalizedUp()
{
    ::gp_Dir _nativeResult = ((::Graphic3d_Camera*)_NativeInstance)->OrthogonalizedUp();
    return Macad::Occt::Dir(_nativeResult);
}

Macad::Occt::Dir Macad::Occt::Graphic3d_Camera::SideRight()
{
    ::gp_Dir _nativeResult = ((::Graphic3d_Camera*)_NativeInstance)->SideRight();
    return Macad::Occt::Dir(_nativeResult);
}

Macad::Occt::Pnt Macad::Occt::Graphic3d_Camera::Eye()
{
    ::gp_Pnt _nativeResult = ((::Graphic3d_Camera*)_NativeInstance)->Eye();
    return Macad::Occt::Pnt(_nativeResult);
}

void Macad::Occt::Graphic3d_Camera::MoveEyeTo(Macad::Occt::Pnt theEye)
{
    pin_ptr<Macad::Occt::Pnt> pp_theEye = &theEye;
    ((::Graphic3d_Camera*)_NativeInstance)->MoveEyeTo(*(gp_Pnt*)pp_theEye);
}

void Macad::Occt::Graphic3d_Camera::SetEyeAndCenter(Macad::Occt::Pnt theEye, Macad::Occt::Pnt theCenter)
{
    pin_ptr<Macad::Occt::Pnt> pp_theEye = &theEye;
    pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
    ((::Graphic3d_Camera*)_NativeInstance)->SetEyeAndCenter(*(gp_Pnt*)pp_theEye, *(gp_Pnt*)pp_theCenter);
}

void Macad::Occt::Graphic3d_Camera::SetEye(Macad::Occt::Pnt theEye)
{
    pin_ptr<Macad::Occt::Pnt> pp_theEye = &theEye;
    ((::Graphic3d_Camera*)_NativeInstance)->SetEye(*(gp_Pnt*)pp_theEye);
}

Macad::Occt::Pnt Macad::Occt::Graphic3d_Camera::Center()
{
    ::gp_Pnt _nativeResult = ((::Graphic3d_Camera*)_NativeInstance)->Center();
    return Macad::Occt::Pnt(_nativeResult);
}

void Macad::Occt::Graphic3d_Camera::SetCenter(Macad::Occt::Pnt theCenter)
{
    pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
    ((::Graphic3d_Camera*)_NativeInstance)->SetCenter(*(gp_Pnt*)pp_theCenter);
}

double Macad::Occt::Graphic3d_Camera::Distance()
{
    double _result = ((::Graphic3d_Camera*)_NativeInstance)->Distance();
    return _result;
}

void Macad::Occt::Graphic3d_Camera::SetDistance(double theDistance)
{
    ((::Graphic3d_Camera*)_NativeInstance)->SetDistance(theDistance);
}

double Macad::Occt::Graphic3d_Camera::Scale()
{
    double _result = ((::Graphic3d_Camera*)_NativeInstance)->Scale();
    return _result;
}

void Macad::Occt::Graphic3d_Camera::SetScale(double theScale)
{
    ((::Graphic3d_Camera*)_NativeInstance)->SetScale(theScale);
}

Macad::Occt::XYZ Macad::Occt::Graphic3d_Camera::AxialScale()
{
    ::gp_XYZ _nativeResult = ((::Graphic3d_Camera*)_NativeInstance)->AxialScale();
    return Macad::Occt::XYZ(_nativeResult);
}

void Macad::Occt::Graphic3d_Camera::SetAxialScale(Macad::Occt::XYZ theAxialScale)
{
    pin_ptr<Macad::Occt::XYZ> pp_theAxialScale = &theAxialScale;
    ((::Graphic3d_Camera*)_NativeInstance)->SetAxialScale(*(gp_XYZ*)pp_theAxialScale);
}

void Macad::Occt::Graphic3d_Camera::SetProjectionType(Macad::Occt::Graphic3d_Camera::Projection theProjection)
{
    ((::Graphic3d_Camera*)_NativeInstance)->SetProjectionType((::Graphic3d_Camera::Projection)theProjection);
}

Macad::Occt::Graphic3d_Camera::Projection Macad::Occt::Graphic3d_Camera::ProjectionType()
{
    ::Graphic3d_Camera::Projection _result = ((::Graphic3d_Camera*)_NativeInstance)->ProjectionType();
    return (Macad::Occt::Graphic3d_Camera::Projection)_result;
}

bool Macad::Occt::Graphic3d_Camera::IsOrthographic()
{
    bool _result = ((::Graphic3d_Camera*)_NativeInstance)->IsOrthographic();
    return _result;
}

bool Macad::Occt::Graphic3d_Camera::IsStereo()
{
    bool _result = ((::Graphic3d_Camera*)_NativeInstance)->IsStereo();
    return _result;
}

void Macad::Occt::Graphic3d_Camera::SetFOVy(double theFOVy)
{
    ((::Graphic3d_Camera*)_NativeInstance)->SetFOVy(theFOVy);
}

double Macad::Occt::Graphic3d_Camera::FOVy()
{
    double _result = ((::Graphic3d_Camera*)_NativeInstance)->FOVy();
    return _result;
}

double Macad::Occt::Graphic3d_Camera::FOVx()
{
    double _result = ((::Graphic3d_Camera*)_NativeInstance)->FOVx();
    return _result;
}

double Macad::Occt::Graphic3d_Camera::FOV2d()
{
    double _result = ((::Graphic3d_Camera*)_NativeInstance)->FOV2d();
    return _result;
}

void Macad::Occt::Graphic3d_Camera::SetFOV2d(double theFOV)
{
    ((::Graphic3d_Camera*)_NativeInstance)->SetFOV2d(theFOV);
}

bool Macad::Occt::Graphic3d_Camera::FitMinMax(Macad::Occt::Bnd_Box^ theBox, double theResolution, bool theToEnlargeIfLine)
{
    bool _result = ((::Graphic3d_Camera*)_NativeInstance)->FitMinMax(*(::Bnd_Box*)theBox->NativeInstance, theResolution, theToEnlargeIfLine);
    return _result;
}

bool Macad::Occt::Graphic3d_Camera::ZFitAll(double theScaleFactor, Macad::Occt::Bnd_Box^ theMinMax, Macad::Occt::Bnd_Box^ theGraphicBB, double% theZNear, double% theZFar)
{
    pin_ptr<double> pp_theZNear = &theZNear;
    pin_ptr<double> pp_theZFar = &theZFar;
    bool _result = ((::Graphic3d_Camera*)_NativeInstance)->ZFitAll(theScaleFactor, *(::Bnd_Box*)theMinMax->NativeInstance, *(::Bnd_Box*)theGraphicBB->NativeInstance, *(double*)pp_theZNear, *(double*)pp_theZFar);
    return _result;
}

void Macad::Occt::Graphic3d_Camera::ZFitAll(double theScaleFactor, Macad::Occt::Bnd_Box^ theMinMax, Macad::Occt::Bnd_Box^ theGraphicBB)
{
    ((::Graphic3d_Camera*)_NativeInstance)->ZFitAll(theScaleFactor, *(::Bnd_Box*)theMinMax->NativeInstance, *(::Bnd_Box*)theGraphicBB->NativeInstance);
}

void Macad::Occt::Graphic3d_Camera::SetZRange(double theZNear, double theZFar)
{
    ((::Graphic3d_Camera*)_NativeInstance)->SetZRange(theZNear, theZFar);
}

double Macad::Occt::Graphic3d_Camera::ZNear()
{
    double _result = ((::Graphic3d_Camera*)_NativeInstance)->ZNear();
    return _result;
}

double Macad::Occt::Graphic3d_Camera::ZFar()
{
    double _result = ((::Graphic3d_Camera*)_NativeInstance)->ZFar();
    return _result;
}

bool Macad::Occt::Graphic3d_Camera::IsZeroToOneDepth()
{
    bool _result = ((::Graphic3d_Camera*)_NativeInstance)->IsZeroToOneDepth();
    return _result;
}

void Macad::Occt::Graphic3d_Camera::SetZeroToOneDepth(bool theIsZeroToOne)
{
    ((::Graphic3d_Camera*)_NativeInstance)->SetZeroToOneDepth(theIsZeroToOne);
}

void Macad::Occt::Graphic3d_Camera::SetAspect(double theAspect)
{
    ((::Graphic3d_Camera*)_NativeInstance)->SetAspect(theAspect);
}

double Macad::Occt::Graphic3d_Camera::Aspect()
{
    double _result = ((::Graphic3d_Camera*)_NativeInstance)->Aspect();
    return _result;
}

void Macad::Occt::Graphic3d_Camera::SetZFocus(Macad::Occt::Graphic3d_Camera::FocusType theType, double theZFocus)
{
    ((::Graphic3d_Camera*)_NativeInstance)->SetZFocus((::Graphic3d_Camera::FocusType)theType, theZFocus);
}

double Macad::Occt::Graphic3d_Camera::ZFocus()
{
    double _result = ((::Graphic3d_Camera*)_NativeInstance)->ZFocus();
    return _result;
}

Macad::Occt::Graphic3d_Camera::FocusType Macad::Occt::Graphic3d_Camera::ZFocusType()
{
    ::Graphic3d_Camera::FocusType _result = ((::Graphic3d_Camera*)_NativeInstance)->ZFocusType();
    return (Macad::Occt::Graphic3d_Camera::FocusType)_result;
}

void Macad::Occt::Graphic3d_Camera::SetIOD(Macad::Occt::Graphic3d_Camera::IODType theType, double theIOD)
{
    ((::Graphic3d_Camera*)_NativeInstance)->SetIOD((::Graphic3d_Camera::IODType)theType, theIOD);
}

double Macad::Occt::Graphic3d_Camera::IOD()
{
    double _result = ((::Graphic3d_Camera*)_NativeInstance)->IOD();
    return _result;
}

Macad::Occt::Graphic3d_Camera::IODType Macad::Occt::Graphic3d_Camera::GetIODType()
{
    ::Graphic3d_Camera::IODType _result = ((::Graphic3d_Camera*)_NativeInstance)->GetIODType();
    return (Macad::Occt::Graphic3d_Camera::IODType)_result;
}

Macad::Occt::Graphic3d_CameraTile^ Macad::Occt::Graphic3d_Camera::Tile()
{
    ::Graphic3d_CameraTile* _result = new ::Graphic3d_CameraTile();
    *_result = (::Graphic3d_CameraTile)((::Graphic3d_Camera*)_NativeInstance)->Tile();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_CameraTile(_result);
}

void Macad::Occt::Graphic3d_Camera::SetTile(Macad::Occt::Graphic3d_CameraTile^ theTile)
{
    ((::Graphic3d_Camera*)_NativeInstance)->SetTile(*(::Graphic3d_CameraTile*)theTile->NativeInstance);
}

void Macad::Occt::Graphic3d_Camera::SetIdentityOrientation()
{
    ((::Graphic3d_Camera*)_NativeInstance)->SetIdentityOrientation();
}

void Macad::Occt::Graphic3d_Camera::Transform(Macad::Occt::Trsf theTrsf)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    ((::Graphic3d_Camera*)_NativeInstance)->Transform(*(gp_Trsf*)pp_theTrsf);
}

Macad::Occt::XYZ Macad::Occt::Graphic3d_Camera::ViewDimensions()
{
    ::gp_XYZ _nativeResult = ((::Graphic3d_Camera*)_NativeInstance)->ViewDimensions();
    return Macad::Occt::XYZ(_nativeResult);
}

Macad::Occt::XYZ Macad::Occt::Graphic3d_Camera::ViewDimensions(double theZValue)
{
    ::gp_XYZ _nativeResult = ((::Graphic3d_Camera*)_NativeInstance)->ViewDimensions(theZValue);
    return Macad::Occt::XYZ(_nativeResult);
}

double Macad::Occt::Graphic3d_Camera::NDC2dOffsetX()
{
    double _result = ((::Graphic3d_Camera*)_NativeInstance)->NDC2dOffsetX();
    return _result;
}

double Macad::Occt::Graphic3d_Camera::NDC2dOffsetY()
{
    double _result = ((::Graphic3d_Camera*)_NativeInstance)->NDC2dOffsetY();
    return _result;
}

void Macad::Occt::Graphic3d_Camera::Frustum(Macad::Occt::Pln% theLeft, Macad::Occt::Pln% theRight, Macad::Occt::Pln% theBottom, Macad::Occt::Pln% theTop, Macad::Occt::Pln% theNear, Macad::Occt::Pln% theFar)
{
    pin_ptr<Macad::Occt::Pln> pp_theLeft = &theLeft;
    pin_ptr<Macad::Occt::Pln> pp_theRight = &theRight;
    pin_ptr<Macad::Occt::Pln> pp_theBottom = &theBottom;
    pin_ptr<Macad::Occt::Pln> pp_theTop = &theTop;
    pin_ptr<Macad::Occt::Pln> pp_theNear = &theNear;
    pin_ptr<Macad::Occt::Pln> pp_theFar = &theFar;
    ((::Graphic3d_Camera*)_NativeInstance)->Frustum(*(gp_Pln*)pp_theLeft, *(gp_Pln*)pp_theRight, *(gp_Pln*)pp_theBottom, *(gp_Pln*)pp_theTop, *(gp_Pln*)pp_theNear, *(gp_Pln*)pp_theFar);
}

Macad::Occt::Pnt Macad::Occt::Graphic3d_Camera::Project(Macad::Occt::Pnt thePnt)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
    ::gp_Pnt _nativeResult = ((::Graphic3d_Camera*)_NativeInstance)->Project(*(gp_Pnt*)pp_thePnt);
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Pnt Macad::Occt::Graphic3d_Camera::UnProject(Macad::Occt::Pnt thePnt)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
    ::gp_Pnt _nativeResult = ((::Graphic3d_Camera*)_NativeInstance)->UnProject(*(gp_Pnt*)pp_thePnt);
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Pnt Macad::Occt::Graphic3d_Camera::ConvertView2Proj(Macad::Occt::Pnt thePnt)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
    ::gp_Pnt _nativeResult = ((::Graphic3d_Camera*)_NativeInstance)->ConvertView2Proj(*(gp_Pnt*)pp_thePnt);
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Pnt Macad::Occt::Graphic3d_Camera::ConvertProj2View(Macad::Occt::Pnt thePnt)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
    ::gp_Pnt _nativeResult = ((::Graphic3d_Camera*)_NativeInstance)->ConvertProj2View(*(gp_Pnt*)pp_thePnt);
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Pnt Macad::Occt::Graphic3d_Camera::ConvertWorld2View(Macad::Occt::Pnt thePnt)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
    ::gp_Pnt _nativeResult = ((::Graphic3d_Camera*)_NativeInstance)->ConvertWorld2View(*(gp_Pnt*)pp_thePnt);
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Pnt Macad::Occt::Graphic3d_Camera::ConvertView2World(Macad::Occt::Pnt thePnt)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
    ::gp_Pnt _nativeResult = ((::Graphic3d_Camera*)_NativeInstance)->ConvertView2World(*(gp_Pnt*)pp_thePnt);
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Graphic3d_WorldViewProjState^ Macad::Occt::Graphic3d_Camera::WorldViewProjState()
{
    ::Graphic3d_WorldViewProjState* _result = new ::Graphic3d_WorldViewProjState();
    *_result = (::Graphic3d_WorldViewProjState)((::Graphic3d_Camera*)_NativeInstance)->WorldViewProjState();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_WorldViewProjState(_result);
}

long long unsigned int Macad::Occt::Graphic3d_Camera::ProjectionState()
{
    long long unsigned int _result = ((::Graphic3d_Camera*)_NativeInstance)->ProjectionState();
    return _result;
}

long long unsigned int Macad::Occt::Graphic3d_Camera::WorldViewState()
{
    long long unsigned int _result = ((::Graphic3d_Camera*)_NativeInstance)->WorldViewState();
    return _result;
}

Macad::Occt::Graphic3d_Mat4d^ Macad::Occt::Graphic3d_Camera::OrientationMatrix()
{
    ::Graphic3d_Mat4d* _result = new ::Graphic3d_Mat4d();
    *_result = (::Graphic3d_Mat4d)((::Graphic3d_Camera*)_NativeInstance)->OrientationMatrix();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Mat4d(_result);
}

Macad::Occt::Graphic3d_Mat4^ Macad::Occt::Graphic3d_Camera::OrientationMatrixF()
{
    ::Graphic3d_Mat4* _result = new ::Graphic3d_Mat4();
    *_result = (::Graphic3d_Mat4)((::Graphic3d_Camera*)_NativeInstance)->OrientationMatrixF();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Mat4(_result);
}

Macad::Occt::Graphic3d_Mat4d^ Macad::Occt::Graphic3d_Camera::ProjectionMatrix()
{
    ::Graphic3d_Mat4d* _result = new ::Graphic3d_Mat4d();
    *_result = (::Graphic3d_Mat4d)((::Graphic3d_Camera*)_NativeInstance)->ProjectionMatrix();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Mat4d(_result);
}

Macad::Occt::Graphic3d_Mat4^ Macad::Occt::Graphic3d_Camera::ProjectionMatrixF()
{
    ::Graphic3d_Mat4* _result = new ::Graphic3d_Mat4();
    *_result = (::Graphic3d_Mat4)((::Graphic3d_Camera*)_NativeInstance)->ProjectionMatrixF();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Mat4(_result);
}

Macad::Occt::Graphic3d_Mat4d^ Macad::Occt::Graphic3d_Camera::ProjectionStereoLeft()
{
    ::Graphic3d_Mat4d* _result = new ::Graphic3d_Mat4d();
    *_result = (::Graphic3d_Mat4d)((::Graphic3d_Camera*)_NativeInstance)->ProjectionStereoLeft();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Mat4d(_result);
}

Macad::Occt::Graphic3d_Mat4^ Macad::Occt::Graphic3d_Camera::ProjectionStereoLeftF()
{
    ::Graphic3d_Mat4* _result = new ::Graphic3d_Mat4();
    *_result = (::Graphic3d_Mat4)((::Graphic3d_Camera*)_NativeInstance)->ProjectionStereoLeftF();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Mat4(_result);
}

Macad::Occt::Graphic3d_Mat4d^ Macad::Occt::Graphic3d_Camera::ProjectionStereoRight()
{
    ::Graphic3d_Mat4d* _result = new ::Graphic3d_Mat4d();
    *_result = (::Graphic3d_Mat4d)((::Graphic3d_Camera*)_NativeInstance)->ProjectionStereoRight();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Mat4d(_result);
}

Macad::Occt::Graphic3d_Mat4^ Macad::Occt::Graphic3d_Camera::ProjectionStereoRightF()
{
    ::Graphic3d_Mat4* _result = new ::Graphic3d_Mat4();
    *_result = (::Graphic3d_Mat4)((::Graphic3d_Camera*)_NativeInstance)->ProjectionStereoRightF();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Mat4(_result);
}

void Macad::Occt::Graphic3d_Camera::InvalidateProjection()
{
    ((::Graphic3d_Camera*)_NativeInstance)->InvalidateProjection();
}

void Macad::Occt::Graphic3d_Camera::InvalidateOrientation()
{
    ((::Graphic3d_Camera*)_NativeInstance)->InvalidateOrientation();
}

void Macad::Occt::Graphic3d_Camera::StereoProjection(Macad::Occt::Graphic3d_Mat4d^ theProjL, Macad::Occt::Graphic3d_Mat4d^ theHeadToEyeL, Macad::Occt::Graphic3d_Mat4d^ theProjR, Macad::Occt::Graphic3d_Mat4d^ theHeadToEyeR)
{
    ((::Graphic3d_Camera*)_NativeInstance)->StereoProjection(*(::Graphic3d_Mat4d*)theProjL->NativeInstance, *(::Graphic3d_Mat4d*)theHeadToEyeL->NativeInstance, *(::Graphic3d_Mat4d*)theProjR->NativeInstance, *(::Graphic3d_Mat4d*)theHeadToEyeR->NativeInstance);
}

void Macad::Occt::Graphic3d_Camera::StereoProjectionF(Macad::Occt::Graphic3d_Mat4^ theProjL, Macad::Occt::Graphic3d_Mat4^ theHeadToEyeL, Macad::Occt::Graphic3d_Mat4^ theProjR, Macad::Occt::Graphic3d_Mat4^ theHeadToEyeR)
{
    ((::Graphic3d_Camera*)_NativeInstance)->StereoProjectionF(*(::Graphic3d_Mat4*)theProjL->NativeInstance, *(::Graphic3d_Mat4*)theHeadToEyeL->NativeInstance, *(::Graphic3d_Mat4*)theProjR->NativeInstance, *(::Graphic3d_Mat4*)theHeadToEyeR->NativeInstance);
}

void Macad::Occt::Graphic3d_Camera::ResetCustomProjection()
{
    ((::Graphic3d_Camera*)_NativeInstance)->ResetCustomProjection();
}

bool Macad::Occt::Graphic3d_Camera::IsCustomStereoFrustum()
{
    bool _result = ((::Graphic3d_Camera*)_NativeInstance)->IsCustomStereoFrustum();
    return _result;
}

bool Macad::Occt::Graphic3d_Camera::IsCustomStereoProjection()
{
    bool _result = ((::Graphic3d_Camera*)_NativeInstance)->IsCustomStereoProjection();
    return _result;
}

void Macad::Occt::Graphic3d_Camera::SetCustomStereoProjection(Macad::Occt::Graphic3d_Mat4d^ theProjL, Macad::Occt::Graphic3d_Mat4d^ theHeadToEyeL, Macad::Occt::Graphic3d_Mat4d^ theProjR, Macad::Occt::Graphic3d_Mat4d^ theHeadToEyeR)
{
    ((::Graphic3d_Camera*)_NativeInstance)->SetCustomStereoProjection(*(::Graphic3d_Mat4d*)theProjL->NativeInstance, *(::Graphic3d_Mat4d*)theHeadToEyeL->NativeInstance, *(::Graphic3d_Mat4d*)theProjR->NativeInstance, *(::Graphic3d_Mat4d*)theHeadToEyeR->NativeInstance);
}

bool Macad::Occt::Graphic3d_Camera::IsCustomMonoProjection()
{
    bool _result = ((::Graphic3d_Camera*)_NativeInstance)->IsCustomMonoProjection();
    return _result;
}

void Macad::Occt::Graphic3d_Camera::SetCustomMonoProjection(Macad::Occt::Graphic3d_Mat4d^ theProj)
{
    ((::Graphic3d_Camera*)_NativeInstance)->SetCustomMonoProjection(*(::Graphic3d_Mat4d*)theProj->NativeInstance);
}

void Macad::Occt::Graphic3d_Camera::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_Camera*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Graphic3d_Camera::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_Camera*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::Graphic3d_Camera^ Macad::Occt::Graphic3d_Camera::CreateDowncasted(::Graphic3d_Camera* instance)
{
    return gcnew Macad::Occt::Graphic3d_Camera( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_CameraTile
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_CameraTile::Graphic3d_CameraTile()
    : Macad::Occt::BaseClass<::Graphic3d_CameraTile>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_CameraTile();
}

bool Macad::Occt::Graphic3d_CameraTile::IsValid()
{
    bool _result = ((::Graphic3d_CameraTile*)_NativeInstance)->IsValid();
    return _result;
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_CameraTile::OffsetLowerLeft()
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = ((::Graphic3d_CameraTile*)_NativeInstance)->OffsetLowerLeft();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

Macad::Occt::Graphic3d_CameraTile^ Macad::Occt::Graphic3d_CameraTile::Cropped()
{
    ::Graphic3d_CameraTile* _result = new ::Graphic3d_CameraTile();
    *_result = ((::Graphic3d_CameraTile*)_NativeInstance)->Cropped();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_CameraTile(_result);
}

void Macad::Occt::Graphic3d_CameraTile::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_CameraTile*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Graphic3d_CameraTile::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_CameraTile*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  Graphic3d_CLight
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_CLight::Graphic3d_CLight(Macad::Occt::Graphic3d_TypeOfLightSource theType)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_CLight((::Graphic3d_TypeOfLightSource)theType);
}

void Macad::Occt::Graphic3d_CLight::CopyFrom(Macad::Occt::Graphic3d_CLight^ theLight)
{
    ((::Graphic3d_CLight*)_NativeInstance)->CopyFrom(Handle(::Graphic3d_CLight)(theLight->NativeInstance));
}

Macad::Occt::Graphic3d_TypeOfLightSource Macad::Occt::Graphic3d_CLight::Type()
{
    ::Graphic3d_TypeOfLightSource _result = ((::Graphic3d_CLight*)_NativeInstance)->Type();
    return (Macad::Occt::Graphic3d_TypeOfLightSource)_result;
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_CLight::Name()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Graphic3d_CLight*)_NativeInstance)->Name();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::Graphic3d_CLight::SetName(Macad::Occt::TCollection_AsciiString^ theName)
{
    ((::Graphic3d_CLight*)_NativeInstance)->SetName(*(::TCollection_AsciiString*)theName->NativeInstance);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_CLight::Color()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::Graphic3d_CLight*)_NativeInstance)->Color();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Graphic3d_CLight::SetColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::Graphic3d_CLight*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

bool Macad::Occt::Graphic3d_CLight::IsEnabled()
{
    bool _result = ((::Graphic3d_CLight*)_NativeInstance)->IsEnabled();
    return _result;
}

void Macad::Occt::Graphic3d_CLight::SetEnabled(bool theIsOn)
{
    ((::Graphic3d_CLight*)_NativeInstance)->SetEnabled(theIsOn);
}

bool Macad::Occt::Graphic3d_CLight::ToCastShadows()
{
    bool _result = ((::Graphic3d_CLight*)_NativeInstance)->ToCastShadows();
    return _result;
}

void Macad::Occt::Graphic3d_CLight::SetCastShadows(bool theToCast)
{
    ((::Graphic3d_CLight*)_NativeInstance)->SetCastShadows(theToCast);
}

bool Macad::Occt::Graphic3d_CLight::IsHeadlight()
{
    bool _result = ((::Graphic3d_CLight*)_NativeInstance)->IsHeadlight();
    return _result;
}

bool Macad::Occt::Graphic3d_CLight::Headlight()
{
    bool _result = ((::Graphic3d_CLight*)_NativeInstance)->Headlight();
    return _result;
}

void Macad::Occt::Graphic3d_CLight::SetHeadlight(bool theValue)
{
    ((::Graphic3d_CLight*)_NativeInstance)->SetHeadlight(theValue);
}

Macad::Occt::Pnt Macad::Occt::Graphic3d_CLight::Position()
{
    ::gp_Pnt _nativeResult = ((::Graphic3d_CLight*)_NativeInstance)->Position();
    return Macad::Occt::Pnt(_nativeResult);
}

void Macad::Occt::Graphic3d_CLight::SetPosition(Macad::Occt::Pnt thePosition)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePosition = &thePosition;
    ((::Graphic3d_CLight*)_NativeInstance)->SetPosition(*(gp_Pnt*)pp_thePosition);
}

void Macad::Occt::Graphic3d_CLight::Position(double% theX, double% theY, double% theZ)
{
    pin_ptr<double> pp_theX = &theX;
    pin_ptr<double> pp_theY = &theY;
    pin_ptr<double> pp_theZ = &theZ;
    ((::Graphic3d_CLight*)_NativeInstance)->Position(*(double*)pp_theX, *(double*)pp_theY, *(double*)pp_theZ);
}

void Macad::Occt::Graphic3d_CLight::SetPosition(double theX, double theY, double theZ)
{
    ((::Graphic3d_CLight*)_NativeInstance)->SetPosition(theX, theY, theZ);
}

float Macad::Occt::Graphic3d_CLight::ConstAttenuation()
{
    float _result = ((::Graphic3d_CLight*)_NativeInstance)->ConstAttenuation();
    return _result;
}

float Macad::Occt::Graphic3d_CLight::LinearAttenuation()
{
    float _result = ((::Graphic3d_CLight*)_NativeInstance)->LinearAttenuation();
    return _result;
}

void Macad::Occt::Graphic3d_CLight::Attenuation(double% theConstAttenuation, double% theLinearAttenuation)
{
    pin_ptr<double> pp_theConstAttenuation = &theConstAttenuation;
    pin_ptr<double> pp_theLinearAttenuation = &theLinearAttenuation;
    ((::Graphic3d_CLight*)_NativeInstance)->Attenuation(*(double*)pp_theConstAttenuation, *(double*)pp_theLinearAttenuation);
}

void Macad::Occt::Graphic3d_CLight::SetAttenuation(float theConstAttenuation, float theLinearAttenuation)
{
    ((::Graphic3d_CLight*)_NativeInstance)->SetAttenuation(theConstAttenuation, theLinearAttenuation);
}

Macad::Occt::Dir Macad::Occt::Graphic3d_CLight::Direction()
{
    ::gp_Dir _nativeResult = ((::Graphic3d_CLight*)_NativeInstance)->Direction();
    return Macad::Occt::Dir(_nativeResult);
}

void Macad::Occt::Graphic3d_CLight::SetDirection(Macad::Occt::Dir theDir)
{
    pin_ptr<Macad::Occt::Dir> pp_theDir = &theDir;
    ((::Graphic3d_CLight*)_NativeInstance)->SetDirection(*(gp_Dir*)pp_theDir);
}

void Macad::Occt::Graphic3d_CLight::Direction(double% theVx, double% theVy, double% theVz)
{
    pin_ptr<double> pp_theVx = &theVx;
    pin_ptr<double> pp_theVy = &theVy;
    pin_ptr<double> pp_theVz = &theVz;
    ((::Graphic3d_CLight*)_NativeInstance)->Direction(*(double*)pp_theVx, *(double*)pp_theVy, *(double*)pp_theVz);
}

void Macad::Occt::Graphic3d_CLight::SetDirection(double theVx, double theVy, double theVz)
{
    ((::Graphic3d_CLight*)_NativeInstance)->SetDirection(theVx, theVy, theVz);
}

Macad::Occt::Pnt Macad::Occt::Graphic3d_CLight::DisplayPosition()
{
    ::gp_Pnt _nativeResult = ((::Graphic3d_CLight*)_NativeInstance)->DisplayPosition();
    return Macad::Occt::Pnt(_nativeResult);
}

void Macad::Occt::Graphic3d_CLight::SetDisplayPosition(Macad::Occt::Pnt thePosition)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePosition = &thePosition;
    ((::Graphic3d_CLight*)_NativeInstance)->SetDisplayPosition(*(gp_Pnt*)pp_thePosition);
}

float Macad::Occt::Graphic3d_CLight::Angle()
{
    float _result = ((::Graphic3d_CLight*)_NativeInstance)->Angle();
    return _result;
}

void Macad::Occt::Graphic3d_CLight::SetAngle(float theAngle)
{
    ((::Graphic3d_CLight*)_NativeInstance)->SetAngle(theAngle);
}

float Macad::Occt::Graphic3d_CLight::Concentration()
{
    float _result = ((::Graphic3d_CLight*)_NativeInstance)->Concentration();
    return _result;
}

void Macad::Occt::Graphic3d_CLight::SetConcentration(float theConcentration)
{
    ((::Graphic3d_CLight*)_NativeInstance)->SetConcentration(theConcentration);
}

float Macad::Occt::Graphic3d_CLight::Intensity()
{
    float _result = ((::Graphic3d_CLight*)_NativeInstance)->Intensity();
    return _result;
}

void Macad::Occt::Graphic3d_CLight::SetIntensity(float theValue)
{
    ((::Graphic3d_CLight*)_NativeInstance)->SetIntensity(theValue);
}

float Macad::Occt::Graphic3d_CLight::Smoothness()
{
    float _result = ((::Graphic3d_CLight*)_NativeInstance)->Smoothness();
    return _result;
}

void Macad::Occt::Graphic3d_CLight::SetSmoothRadius(float theValue)
{
    ((::Graphic3d_CLight*)_NativeInstance)->SetSmoothRadius(theValue);
}

void Macad::Occt::Graphic3d_CLight::SetSmoothAngle(float theValue)
{
    ((::Graphic3d_CLight*)_NativeInstance)->SetSmoothAngle(theValue);
}

bool Macad::Occt::Graphic3d_CLight::HasRange()
{
    bool _result = ((::Graphic3d_CLight*)_NativeInstance)->HasRange();
    return _result;
}

float Macad::Occt::Graphic3d_CLight::Range()
{
    float _result = ((::Graphic3d_CLight*)_NativeInstance)->Range();
    return _result;
}

void Macad::Occt::Graphic3d_CLight::SetRange(float theValue)
{
    ((::Graphic3d_CLight*)_NativeInstance)->SetRange(theValue);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_CLight::GetId()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Graphic3d_CLight*)_NativeInstance)->GetId();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::Graphic3d_Vec4^ Macad::Occt::Graphic3d_CLight::PackedParams()
{
    ::Graphic3d_Vec4* _result = new ::Graphic3d_Vec4();
    *_result = (::Graphic3d_Vec4)((::Graphic3d_CLight*)_NativeInstance)->PackedParams();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4(_result);
}

Macad::Occt::Graphic3d_Vec4^ Macad::Occt::Graphic3d_CLight::PackedColor()
{
    ::Graphic3d_Vec4* _result = new ::Graphic3d_Vec4();
    *_result = (::Graphic3d_Vec4)((::Graphic3d_CLight*)_NativeInstance)->PackedColor();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4(_result);
}

Macad::Occt::Graphic3d_Vec4^ Macad::Occt::Graphic3d_CLight::PackedDirectionRange()
{
    ::Graphic3d_Vec4* _result = new ::Graphic3d_Vec4();
    *_result = (::Graphic3d_Vec4)((::Graphic3d_CLight*)_NativeInstance)->PackedDirectionRange();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4(_result);
}

Macad::Occt::Graphic3d_Vec3^ Macad::Occt::Graphic3d_CLight::PackedDirection()
{
    ::Graphic3d_Vec3* _result = new ::Graphic3d_Vec3();
    *_result = ((::Graphic3d_CLight*)_NativeInstance)->PackedDirection();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3(_result);
}

long long unsigned int Macad::Occt::Graphic3d_CLight::Revision()
{
    long long unsigned int _result = ((::Graphic3d_CLight*)_NativeInstance)->Revision();
    return _result;
}

void Macad::Occt::Graphic3d_CLight::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_CLight*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Graphic3d_CLight::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_CLight*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::Graphic3d_CLight^ Macad::Occt::Graphic3d_CLight::CreateDowncasted(::Graphic3d_CLight* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::V3d_AmbientLight)))
        return Macad::Occt::V3d_AmbientLight::CreateDowncasted((::V3d_AmbientLight*)instance);
    if (instance->IsKind(STANDARD_TYPE(::V3d_PositionLight)))
        return Macad::Occt::V3d_PositionLight::CreateDowncasted((::V3d_PositionLight*)instance);
    
    return gcnew Macad::Occt::Graphic3d_CLight( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ClipPlane
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ClipPlane::Graphic3d_ClipPlane()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ClipPlane();
}

Macad::Occt::Graphic3d_ClipPlane::Graphic3d_ClipPlane(Macad::Occt::Graphic3d_Vec4d^ theEquation)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ClipPlane(*(::Graphic3d_Vec4d*)theEquation->NativeInstance);
}

Macad::Occt::Graphic3d_ClipPlane::Graphic3d_ClipPlane(Macad::Occt::Pln thePlane)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pln> pp_thePlane = &thePlane;
    NativeInstance = new ::Graphic3d_ClipPlane(*(gp_Pln*)pp_thePlane);
}

void Macad::Occt::Graphic3d_ClipPlane::SetEquation(Macad::Occt::Pln thePlane)
{
    pin_ptr<Macad::Occt::Pln> pp_thePlane = &thePlane;
    ((::Graphic3d_ClipPlane*)_NativeInstance)->SetEquation(*(gp_Pln*)pp_thePlane);
}

void Macad::Occt::Graphic3d_ClipPlane::SetEquation(Macad::Occt::Graphic3d_Vec4d^ theEquation)
{
    ((::Graphic3d_ClipPlane*)_NativeInstance)->SetEquation(*(::Graphic3d_Vec4d*)theEquation->NativeInstance);
}

Macad::Occt::Graphic3d_Vec4d^ Macad::Occt::Graphic3d_ClipPlane::GetEquation()
{
    ::Graphic3d_Vec4d* _result = new ::Graphic3d_Vec4d();
    *_result = (::Graphic3d_Vec4d)((::Graphic3d_ClipPlane*)_NativeInstance)->GetEquation();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4d(_result);
}

Macad::Occt::Graphic3d_Vec4d^ Macad::Occt::Graphic3d_ClipPlane::ReversedEquation()
{
    ::Graphic3d_Vec4d* _result = new ::Graphic3d_Vec4d();
    *_result = (::Graphic3d_Vec4d)((::Graphic3d_ClipPlane*)_NativeInstance)->ReversedEquation();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4d(_result);
}

bool Macad::Occt::Graphic3d_ClipPlane::IsOn()
{
    bool _result = ((::Graphic3d_ClipPlane*)_NativeInstance)->IsOn();
    return _result;
}

void Macad::Occt::Graphic3d_ClipPlane::SetOn(bool theIsOn)
{
    ((::Graphic3d_ClipPlane*)_NativeInstance)->SetOn(theIsOn);
}

void Macad::Occt::Graphic3d_ClipPlane::SetCapping(bool theIsOn)
{
    ((::Graphic3d_ClipPlane*)_NativeInstance)->SetCapping(theIsOn);
}

bool Macad::Occt::Graphic3d_ClipPlane::IsCapping()
{
    bool _result = ((::Graphic3d_ClipPlane*)_NativeInstance)->IsCapping();
    return _result;
}

Macad::Occt::Pln Macad::Occt::Graphic3d_ClipPlane::ToPlane()
{
    ::gp_Pln _nativeResult = ((::Graphic3d_ClipPlane*)_NativeInstance)->ToPlane();
    return Macad::Occt::Pln(_nativeResult);
}

Macad::Occt::Graphic3d_ClipPlane^ Macad::Occt::Graphic3d_ClipPlane::Clone()
{
    Handle(::Graphic3d_ClipPlane) _result = ((::Graphic3d_ClipPlane*)_NativeInstance)->Clone();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ClipPlane::CreateDowncasted(_result.get());
}

bool Macad::Occt::Graphic3d_ClipPlane::IsChain()
{
    bool _result = ((::Graphic3d_ClipPlane*)_NativeInstance)->IsChain();
    return _result;
}

Macad::Occt::Graphic3d_ClipPlane^ Macad::Occt::Graphic3d_ClipPlane::ChainPreviousPlane()
{
    Handle(::Graphic3d_ClipPlane) _result = ((::Graphic3d_ClipPlane*)_NativeInstance)->ChainPreviousPlane();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ClipPlane::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_ClipPlane^ Macad::Occt::Graphic3d_ClipPlane::ChainNextPlane()
{
    Handle(::Graphic3d_ClipPlane) _result = ((::Graphic3d_ClipPlane*)_NativeInstance)->ChainNextPlane();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ClipPlane::CreateDowncasted(_result.get());
}

int Macad::Occt::Graphic3d_ClipPlane::NbChainNextPlanes()
{
    int _result = ((::Graphic3d_ClipPlane*)_NativeInstance)->NbChainNextPlanes();
    return _result;
}

void Macad::Occt::Graphic3d_ClipPlane::SetChainNextPlane(Macad::Occt::Graphic3d_ClipPlane^ thePlane)
{
    ((::Graphic3d_ClipPlane*)_NativeInstance)->SetChainNextPlane(Handle(::Graphic3d_ClipPlane)(thePlane->NativeInstance));
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_ClipPlane::CappingColor()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = ((::Graphic3d_ClipPlane*)_NativeInstance)->CappingColor();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Graphic3d_ClipPlane::SetCappingColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::Graphic3d_ClipPlane*)_NativeInstance)->SetCappingColor(*(::Quantity_Color*)theColor->NativeInstance);
}

void Macad::Occt::Graphic3d_ClipPlane::SetCappingMaterial(Macad::Occt::Graphic3d_MaterialAspect^ theMat)
{
    ((::Graphic3d_ClipPlane*)_NativeInstance)->SetCappingMaterial(*(::Graphic3d_MaterialAspect*)theMat->NativeInstance);
}

Macad::Occt::Graphic3d_MaterialAspect^ Macad::Occt::Graphic3d_ClipPlane::CappingMaterial()
{
    ::Graphic3d_MaterialAspect* _result = new ::Graphic3d_MaterialAspect();
    *_result = (::Graphic3d_MaterialAspect)((::Graphic3d_ClipPlane*)_NativeInstance)->CappingMaterial();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_MaterialAspect(_result);
}

void Macad::Occt::Graphic3d_ClipPlane::SetCappingTexture(Macad::Occt::Graphic3d_TextureMap^ theTexture)
{
    ((::Graphic3d_ClipPlane*)_NativeInstance)->SetCappingTexture(Handle(::Graphic3d_TextureMap)(theTexture->NativeInstance));
}

Macad::Occt::Graphic3d_TextureMap^ Macad::Occt::Graphic3d_ClipPlane::CappingTexture()
{
    Handle(::Graphic3d_TextureMap) _result = ((::Graphic3d_ClipPlane*)_NativeInstance)->CappingTexture();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_TextureMap::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_ClipPlane::SetCappingHatch(Macad::Occt::Aspect_HatchStyle theStyle)
{
    ((::Graphic3d_ClipPlane*)_NativeInstance)->SetCappingHatch((::Aspect_HatchStyle)theStyle);
}

Macad::Occt::Aspect_HatchStyle Macad::Occt::Graphic3d_ClipPlane::CappingHatch()
{
    ::Aspect_HatchStyle _result = ((::Graphic3d_ClipPlane*)_NativeInstance)->CappingHatch();
    return (Macad::Occt::Aspect_HatchStyle)_result;
}

void Macad::Occt::Graphic3d_ClipPlane::SetCappingCustomHatch(Macad::Occt::Graphic3d_HatchStyle^ theStyle)
{
    ((::Graphic3d_ClipPlane*)_NativeInstance)->SetCappingCustomHatch(Handle(::Graphic3d_HatchStyle)(theStyle->NativeInstance));
}

Macad::Occt::Graphic3d_HatchStyle^ Macad::Occt::Graphic3d_ClipPlane::CappingCustomHatch()
{
    Handle(::Graphic3d_HatchStyle) _result = ((::Graphic3d_ClipPlane*)_NativeInstance)->CappingCustomHatch();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_HatchStyle::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_ClipPlane::SetCappingHatchOn()
{
    ((::Graphic3d_ClipPlane*)_NativeInstance)->SetCappingHatchOn();
}

void Macad::Occt::Graphic3d_ClipPlane::SetCappingHatchOff()
{
    ((::Graphic3d_ClipPlane*)_NativeInstance)->SetCappingHatchOff();
}

bool Macad::Occt::Graphic3d_ClipPlane::IsHatchOn()
{
    bool _result = ((::Graphic3d_ClipPlane*)_NativeInstance)->IsHatchOn();
    return _result;
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_ClipPlane::GetId()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Graphic3d_ClipPlane*)_NativeInstance)->GetId();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::Graphic3d_AspectFillArea3d^ Macad::Occt::Graphic3d_ClipPlane::CappingAspect()
{
    Handle(::Graphic3d_AspectFillArea3d) _result = ((::Graphic3d_ClipPlane*)_NativeInstance)->CappingAspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_AspectFillArea3d::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_ClipPlane::SetCappingAspect(Macad::Occt::Graphic3d_AspectFillArea3d^ theAspect)
{
    ((::Graphic3d_ClipPlane*)_NativeInstance)->SetCappingAspect(Handle(::Graphic3d_AspectFillArea3d)(theAspect->NativeInstance));
}

bool Macad::Occt::Graphic3d_ClipPlane::ToUseObjectMaterial()
{
    bool _result = ((::Graphic3d_ClipPlane*)_NativeInstance)->ToUseObjectMaterial();
    return _result;
}

void Macad::Occt::Graphic3d_ClipPlane::SetUseObjectMaterial(bool theToUse)
{
    ((::Graphic3d_ClipPlane*)_NativeInstance)->SetUseObjectMaterial(theToUse);
}

bool Macad::Occt::Graphic3d_ClipPlane::ToUseObjectTexture()
{
    bool _result = ((::Graphic3d_ClipPlane*)_NativeInstance)->ToUseObjectTexture();
    return _result;
}

void Macad::Occt::Graphic3d_ClipPlane::SetUseObjectTexture(bool theToUse)
{
    ((::Graphic3d_ClipPlane*)_NativeInstance)->SetUseObjectTexture(theToUse);
}

bool Macad::Occt::Graphic3d_ClipPlane::ToUseObjectShader()
{
    bool _result = ((::Graphic3d_ClipPlane*)_NativeInstance)->ToUseObjectShader();
    return _result;
}

void Macad::Occt::Graphic3d_ClipPlane::SetUseObjectShader(bool theToUse)
{
    ((::Graphic3d_ClipPlane*)_NativeInstance)->SetUseObjectShader(theToUse);
}

bool Macad::Occt::Graphic3d_ClipPlane::ToUseObjectProperties()
{
    bool _result = ((::Graphic3d_ClipPlane*)_NativeInstance)->ToUseObjectProperties();
    return _result;
}

Macad::Occt::Graphic3d_ClipState Macad::Occt::Graphic3d_ClipPlane::ProbePoint(Macad::Occt::Graphic3d_Vec4d^ thePoint)
{
    ::Graphic3d_ClipState _result = ((::Graphic3d_ClipPlane*)_NativeInstance)->ProbePoint(*(::Graphic3d_Vec4d*)thePoint->NativeInstance);
    return (Macad::Occt::Graphic3d_ClipState)_result;
}

Macad::Occt::Graphic3d_ClipState Macad::Occt::Graphic3d_ClipPlane::ProbePointHalfspace(Macad::Occt::Graphic3d_Vec4d^ thePoint)
{
    ::Graphic3d_ClipState _result = ((::Graphic3d_ClipPlane*)_NativeInstance)->ProbePointHalfspace(*(::Graphic3d_Vec4d*)thePoint->NativeInstance);
    return (Macad::Occt::Graphic3d_ClipState)_result;
}

bool Macad::Occt::Graphic3d_ClipPlane::IsPointOutHalfspace(Macad::Occt::Graphic3d_Vec4d^ thePoint)
{
    bool _result = ((::Graphic3d_ClipPlane*)_NativeInstance)->IsPointOutHalfspace(*(::Graphic3d_Vec4d*)thePoint->NativeInstance);
    return _result;
}

void Macad::Occt::Graphic3d_ClipPlane::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_ClipPlane*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Graphic3d_ClipPlane::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_ClipPlane*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

unsigned int Macad::Occt::Graphic3d_ClipPlane::MCountEquation()
{
    unsigned int _result = ((::Graphic3d_ClipPlane*)_NativeInstance)->MCountEquation();
    return _result;
}

unsigned int Macad::Occt::Graphic3d_ClipPlane::MCountAspect()
{
    unsigned int _result = ((::Graphic3d_ClipPlane*)_NativeInstance)->MCountAspect();
    return _result;
}

Macad::Occt::Graphic3d_ClipPlane^ Macad::Occt::Graphic3d_ClipPlane::CreateDowncasted(::Graphic3d_ClipPlane* instance)
{
    return gcnew Macad::Occt::Graphic3d_ClipPlane( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_PresentationAttributes
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_PresentationAttributes::Graphic3d_PresentationAttributes()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_PresentationAttributes();
}

Macad::Occt::Aspect_TypeOfHighlightMethod Macad::Occt::Graphic3d_PresentationAttributes::Method()
{
    ::Aspect_TypeOfHighlightMethod _result = ((::Graphic3d_PresentationAttributes*)_NativeInstance)->Method();
    return (Macad::Occt::Aspect_TypeOfHighlightMethod)_result;
}

void Macad::Occt::Graphic3d_PresentationAttributes::SetMethod(Macad::Occt::Aspect_TypeOfHighlightMethod theMethod)
{
    ((::Graphic3d_PresentationAttributes*)_NativeInstance)->SetMethod((::Aspect_TypeOfHighlightMethod)theMethod);
}

Macad::Occt::Quantity_ColorRGBA^ Macad::Occt::Graphic3d_PresentationAttributes::ColorRGBA()
{
    ::Quantity_ColorRGBA* _result = new ::Quantity_ColorRGBA();
    *_result = (::Quantity_ColorRGBA)((::Graphic3d_PresentationAttributes*)_NativeInstance)->ColorRGBA();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_ColorRGBA(_result);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_PresentationAttributes::Color()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::Graphic3d_PresentationAttributes*)_NativeInstance)->Color();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Graphic3d_PresentationAttributes::SetColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::Graphic3d_PresentationAttributes*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

float Macad::Occt::Graphic3d_PresentationAttributes::Transparency()
{
    float _result = ((::Graphic3d_PresentationAttributes*)_NativeInstance)->Transparency();
    return _result;
}

void Macad::Occt::Graphic3d_PresentationAttributes::SetTransparency(float theTranspCoef)
{
    ((::Graphic3d_PresentationAttributes*)_NativeInstance)->SetTransparency(theTranspCoef);
}

int Macad::Occt::Graphic3d_PresentationAttributes::ZLayer()
{
    int _result = ((::Graphic3d_PresentationAttributes*)_NativeInstance)->ZLayer();
    return _result;
}

void Macad::Occt::Graphic3d_PresentationAttributes::SetZLayer(int theLayer)
{
    ((::Graphic3d_PresentationAttributes*)_NativeInstance)->SetZLayer(theLayer);
}

int Macad::Occt::Graphic3d_PresentationAttributes::DisplayMode()
{
    int _result = ((::Graphic3d_PresentationAttributes*)_NativeInstance)->DisplayMode();
    return _result;
}

void Macad::Occt::Graphic3d_PresentationAttributes::SetDisplayMode(int theMode)
{
    ((::Graphic3d_PresentationAttributes*)_NativeInstance)->SetDisplayMode(theMode);
}

Macad::Occt::Graphic3d_AspectFillArea3d^ Macad::Occt::Graphic3d_PresentationAttributes::BasicFillAreaAspect()
{
    Handle(::Graphic3d_AspectFillArea3d) _result = ((::Graphic3d_PresentationAttributes*)_NativeInstance)->BasicFillAreaAspect();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_AspectFillArea3d::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_PresentationAttributes::SetBasicFillAreaAspect(Macad::Occt::Graphic3d_AspectFillArea3d^ theAspect)
{
    ((::Graphic3d_PresentationAttributes*)_NativeInstance)->SetBasicFillAreaAspect(Handle(::Graphic3d_AspectFillArea3d)(theAspect->NativeInstance));
}

void Macad::Occt::Graphic3d_PresentationAttributes::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_PresentationAttributes*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Graphic3d_PresentationAttributes::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_PresentationAttributes*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::Graphic3d_PresentationAttributes^ Macad::Occt::Graphic3d_PresentationAttributes::CreateDowncasted(::Graphic3d_PresentationAttributes* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::Prs3d_Drawer)))
        return Macad::Occt::Prs3d_Drawer::CreateDowncasted((::Prs3d_Drawer*)instance);
    
    return gcnew Macad::Occt::Graphic3d_PresentationAttributes( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Vertex
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Vertex::Graphic3d_Vertex()
    : Macad::Occt::BaseClass<::Graphic3d_Vertex>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vertex();
}

Macad::Occt::Graphic3d_Vertex::Graphic3d_Vertex(float theX, float theY, float theZ)
    : Macad::Occt::BaseClass<::Graphic3d_Vertex>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vertex(theX, theY, theZ);
}

Macad::Occt::Graphic3d_Vertex::Graphic3d_Vertex(double theX, double theY, double theZ)
    : Macad::Occt::BaseClass<::Graphic3d_Vertex>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_Vertex(theX, theY, theZ);
}

void Macad::Occt::Graphic3d_Vertex::SetCoord(float theX, float theY, float theZ)
{
    ((::Graphic3d_Vertex*)_NativeInstance)->SetCoord(theX, theY, theZ);
}

void Macad::Occt::Graphic3d_Vertex::SetCoord(double theX, double theY, double theZ)
{
    ((::Graphic3d_Vertex*)_NativeInstance)->SetCoord(theX, theY, theZ);
}

void Macad::Occt::Graphic3d_Vertex::Coord(float% theX, float% theY, float% theZ)
{
    pin_ptr<float> pp_theX = &theX;
    pin_ptr<float> pp_theY = &theY;
    pin_ptr<float> pp_theZ = &theZ;
    ((::Graphic3d_Vertex*)_NativeInstance)->Coord(*(float*)pp_theX, *(float*)pp_theY, *(float*)pp_theZ);
}

void Macad::Occt::Graphic3d_Vertex::Coord(double% theX, double% theY, double% theZ)
{
    pin_ptr<double> pp_theX = &theX;
    pin_ptr<double> pp_theY = &theY;
    pin_ptr<double> pp_theZ = &theZ;
    ((::Graphic3d_Vertex*)_NativeInstance)->Coord(*(double*)pp_theX, *(double*)pp_theY, *(double*)pp_theZ);
}

float Macad::Occt::Graphic3d_Vertex::X()
{
    float _result = ((::Graphic3d_Vertex*)_NativeInstance)->X();
    return _result;
}

float Macad::Occt::Graphic3d_Vertex::Y()
{
    float _result = ((::Graphic3d_Vertex*)_NativeInstance)->Y();
    return _result;
}

float Macad::Occt::Graphic3d_Vertex::Z()
{
    float _result = ((::Graphic3d_Vertex*)_NativeInstance)->Z();
    return _result;
}

float Macad::Occt::Graphic3d_Vertex::Distance(Macad::Occt::Graphic3d_Vertex^ theOther)
{
    float _result = ((::Graphic3d_Vertex*)_NativeInstance)->Distance(*(::Graphic3d_Vertex*)theOther->NativeInstance);
    return _result;
}

void Macad::Occt::Graphic3d_Vertex::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_Vertex*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Graphic3d_Vertex::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_Vertex*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Structure
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Structure::Graphic3d_Structure(Macad::Occt::Graphic3d_StructureManager^ theManager, Macad::Occt::Graphic3d_Structure^ theLinkPrs)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_Structure(Handle(::Graphic3d_StructureManager)(theManager->NativeInstance), Handle(::Graphic3d_Structure)(theLinkPrs->NativeInstance));
}

Macad::Occt::Graphic3d_Structure::Graphic3d_Structure(Macad::Occt::Graphic3d_StructureManager^ theManager)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_Structure(Handle(::Graphic3d_StructureManager)(theManager->NativeInstance), ::opencascade::handle<::Graphic3d_Structure>());
}

void Macad::Occt::Graphic3d_Structure::Clear(bool WithDestruction)
{
    ((::Graphic3d_Structure*)_NativeInstance)->Clear(WithDestruction);
}

void Macad::Occt::Graphic3d_Structure::Clear()
{
    ((::Graphic3d_Structure*)_NativeInstance)->Clear(true);
}

void Macad::Occt::Graphic3d_Structure::Display()
{
    ((::Graphic3d_Structure*)_NativeInstance)->Display();
}

Macad::Occt::Graphic3d_DisplayPriority Macad::Occt::Graphic3d_Structure::DisplayPriority()
{
    ::Graphic3d_DisplayPriority _result = ((::Graphic3d_Structure*)_NativeInstance)->DisplayPriority();
    return (Macad::Occt::Graphic3d_DisplayPriority)_result;
}

void Macad::Occt::Graphic3d_Structure::SetDisplayPriority(Macad::Occt::Graphic3d_DisplayPriority thePriority)
{
    ((::Graphic3d_Structure*)_NativeInstance)->SetDisplayPriority((::Graphic3d_DisplayPriority)thePriority);
}

void Macad::Occt::Graphic3d_Structure::SetDisplayPriority(int thePriority)
{
    ((::Graphic3d_Structure*)_NativeInstance)->SetDisplayPriority(thePriority);
}

void Macad::Occt::Graphic3d_Structure::ResetDisplayPriority()
{
    ((::Graphic3d_Structure*)_NativeInstance)->ResetDisplayPriority();
}

void Macad::Occt::Graphic3d_Structure::Erase()
{
    ((::Graphic3d_Structure*)_NativeInstance)->Erase();
}

void Macad::Occt::Graphic3d_Structure::Highlight(Macad::Occt::Graphic3d_PresentationAttributes^ theStyle, bool theToUpdateMgr)
{
    ((::Graphic3d_Structure*)_NativeInstance)->Highlight(Handle(::Graphic3d_PresentationAttributes)(theStyle->NativeInstance), theToUpdateMgr);
}

void Macad::Occt::Graphic3d_Structure::Highlight(Macad::Occt::Graphic3d_PresentationAttributes^ theStyle)
{
    ((::Graphic3d_Structure*)_NativeInstance)->Highlight(Handle(::Graphic3d_PresentationAttributes)(theStyle->NativeInstance), true);
}

void Macad::Occt::Graphic3d_Structure::Remove()
{
    ((::Graphic3d_Structure*)_NativeInstance)->Remove();
}

void Macad::Occt::Graphic3d_Structure::CalculateBoundBox()
{
    ((::Graphic3d_Structure*)_NativeInstance)->CalculateBoundBox();
}

void Macad::Occt::Graphic3d_Structure::SetInfiniteState(bool theToSet)
{
    ((::Graphic3d_Structure*)_NativeInstance)->SetInfiniteState(theToSet);
}

void Macad::Occt::Graphic3d_Structure::SetZLayer(int theLayerId)
{
    ((::Graphic3d_Structure*)_NativeInstance)->SetZLayer(theLayerId);
}

int Macad::Occt::Graphic3d_Structure::GetZLayer()
{
    int _result = ((::Graphic3d_Structure*)_NativeInstance)->GetZLayer();
    return _result;
}

void Macad::Occt::Graphic3d_Structure::SetClipPlanes(Macad::Occt::Graphic3d_SequenceOfHClipPlane^ thePlanes)
{
    ((::Graphic3d_Structure*)_NativeInstance)->SetClipPlanes(Handle(::Graphic3d_SequenceOfHClipPlane)(thePlanes->NativeInstance));
}

Macad::Occt::Graphic3d_SequenceOfHClipPlane^ Macad::Occt::Graphic3d_Structure::ClipPlanes()
{
    Handle(::Graphic3d_SequenceOfHClipPlane) _result = ((::Graphic3d_Structure*)_NativeInstance)->ClipPlanes();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_SequenceOfHClipPlane::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_Structure::SetVisible(bool AValue)
{
    ((::Graphic3d_Structure*)_NativeInstance)->SetVisible(AValue);
}

void Macad::Occt::Graphic3d_Structure::SetVisual(Macad::Occt::Graphic3d_TypeOfStructure AVisual)
{
    ((::Graphic3d_Structure*)_NativeInstance)->SetVisual((::Graphic3d_TypeOfStructure)AVisual);
}

void Macad::Occt::Graphic3d_Structure::SetZoomLimit(double LimitInf, double LimitSup)
{
    ((::Graphic3d_Structure*)_NativeInstance)->SetZoomLimit(LimitInf, LimitSup);
}

void Macad::Occt::Graphic3d_Structure::SetIsForHighlight(bool isForHighlight)
{
    ((::Graphic3d_Structure*)_NativeInstance)->SetIsForHighlight(isForHighlight);
}

void Macad::Occt::Graphic3d_Structure::UnHighlight()
{
    ((::Graphic3d_Structure*)_NativeInstance)->UnHighlight();
}

void Macad::Occt::Graphic3d_Structure::Compute()
{
    ((::Graphic3d_Structure*)_NativeInstance)->Compute();
}

void Macad::Occt::Graphic3d_Structure::computeHLR(Macad::Occt::Graphic3d_Camera^ theProjector, Macad::Occt::Graphic3d_Structure^ theStructure)
{
    Handle(::Graphic3d_Structure) h_theStructure = theStructure->NativeInstance;
    ((::Graphic3d_Structure*)_NativeInstance)->computeHLR(Handle(::Graphic3d_Camera)(theProjector->NativeInstance), h_theStructure);
    theStructure->NativeInstance = h_theStructure.get();
}

void Macad::Occt::Graphic3d_Structure::RecomputeTransformation(Macad::Occt::Graphic3d_Camera^ theProjector)
{
    ((::Graphic3d_Structure*)_NativeInstance)->RecomputeTransformation(Handle(::Graphic3d_Camera)(theProjector->NativeInstance));
}

void Macad::Occt::Graphic3d_Structure::ReCompute()
{
    ((::Graphic3d_Structure*)_NativeInstance)->ReCompute();
}

void Macad::Occt::Graphic3d_Structure::ReCompute(Macad::Occt::Graphic3d_DataStructureManager^ aProjector)
{
    ((::Graphic3d_Structure*)_NativeInstance)->ReCompute(Handle(::Graphic3d_DataStructureManager)(aProjector->NativeInstance));
}

Macad::Occt::Graphic3d_SequenceOfGroup^ Macad::Occt::Graphic3d_Structure::Groups()
{
    ::Graphic3d_SequenceOfGroup* _result = new ::Graphic3d_SequenceOfGroup();
    *_result = (::Graphic3d_SequenceOfGroup)((::Graphic3d_Structure*)_NativeInstance)->Groups();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_SequenceOfGroup(_result);
}

int Macad::Occt::Graphic3d_Structure::NumberOfGroups()
{
    int _result = ((::Graphic3d_Structure*)_NativeInstance)->NumberOfGroups();
    return _result;
}

Macad::Occt::Graphic3d_Group^ Macad::Occt::Graphic3d_Structure::NewGroup()
{
    Handle(::Graphic3d_Group) _result = ((::Graphic3d_Structure*)_NativeInstance)->NewGroup();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Group::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_Group^ Macad::Occt::Graphic3d_Structure::CurrentGroup()
{
    Handle(::Graphic3d_Group) _result = ((::Graphic3d_Structure*)_NativeInstance)->CurrentGroup();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Group::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_PresentationAttributes^ Macad::Occt::Graphic3d_Structure::HighlightStyle()
{
    Handle(::Graphic3d_PresentationAttributes) _result = ((::Graphic3d_Structure*)_NativeInstance)->HighlightStyle();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_PresentationAttributes::CreateDowncasted(_result.get());
}

bool Macad::Occt::Graphic3d_Structure::IsDeleted()
{
    bool _result = ((::Graphic3d_Structure*)_NativeInstance)->IsDeleted();
    return _result;
}

bool Macad::Occt::Graphic3d_Structure::IsDisplayed()
{
    bool _result = ((::Graphic3d_Structure*)_NativeInstance)->IsDisplayed();
    return _result;
}

bool Macad::Occt::Graphic3d_Structure::IsEmpty()
{
    bool _result = ((::Graphic3d_Structure*)_NativeInstance)->IsEmpty();
    return _result;
}

bool Macad::Occt::Graphic3d_Structure::IsInfinite()
{
    bool _result = ((::Graphic3d_Structure*)_NativeInstance)->IsInfinite();
    return _result;
}

bool Macad::Occt::Graphic3d_Structure::IsHighlighted()
{
    bool _result = ((::Graphic3d_Structure*)_NativeInstance)->IsHighlighted();
    return _result;
}

bool Macad::Occt::Graphic3d_Structure::IsTransformed()
{
    bool _result = ((::Graphic3d_Structure*)_NativeInstance)->IsTransformed();
    return _result;
}

bool Macad::Occt::Graphic3d_Structure::IsVisible()
{
    bool _result = ((::Graphic3d_Structure*)_NativeInstance)->IsVisible();
    return _result;
}

Macad::Occt::Bnd_Box^ Macad::Occt::Graphic3d_Structure::MinMaxValues(bool theToIgnoreInfiniteFlag)
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = ((::Graphic3d_Structure*)_NativeInstance)->MinMaxValues(theToIgnoreInfiniteFlag);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Graphic3d_Structure::MinMaxValues()
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = ((::Graphic3d_Structure*)_NativeInstance)->MinMaxValues(false);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Graphic3d_TypeOfStructure Macad::Occt::Graphic3d_Structure::Visual()
{
    ::Graphic3d_TypeOfStructure _result = ((::Graphic3d_Structure*)_NativeInstance)->Visual();
    return (Macad::Occt::Graphic3d_TypeOfStructure)_result;
}

bool Macad::Occt::Graphic3d_Structure::AcceptConnection(Macad::Occt::Graphic3d_Structure^ theStructure1, Macad::Occt::Graphic3d_Structure^ theStructure2, Macad::Occt::Graphic3d_TypeOfConnection theType)
{
    bool _result = ::Graphic3d_Structure::AcceptConnection((::Graphic3d_Structure*)theStructure1->NativeInstance, (::Graphic3d_Structure*)theStructure2->NativeInstance, (::Graphic3d_TypeOfConnection)theType);
    return _result;
}

void Macad::Occt::Graphic3d_Structure::Ancestors(Macad::Occt::Graphic3d_MapOfStructure^ SG)
{
    ((::Graphic3d_Structure*)_NativeInstance)->Ancestors(*(::Graphic3d_MapOfStructure*)SG->NativeInstance);
}

void Macad::Occt::Graphic3d_Structure::Connect(Macad::Occt::Graphic3d_Structure^ theStructure, Macad::Occt::Graphic3d_TypeOfConnection theType, bool theWithCheck)
{
    ((::Graphic3d_Structure*)_NativeInstance)->Connect((::Graphic3d_Structure*)theStructure->NativeInstance, (::Graphic3d_TypeOfConnection)theType, theWithCheck);
}

void Macad::Occt::Graphic3d_Structure::Connect(Macad::Occt::Graphic3d_Structure^ theStructure, Macad::Occt::Graphic3d_TypeOfConnection theType)
{
    ((::Graphic3d_Structure*)_NativeInstance)->Connect((::Graphic3d_Structure*)theStructure->NativeInstance, (::Graphic3d_TypeOfConnection)theType, false);
}

void Macad::Occt::Graphic3d_Structure::Connect(Macad::Occt::Graphic3d_Structure^ thePrs)
{
    ((::Graphic3d_Structure*)_NativeInstance)->Connect(Handle(::Graphic3d_Structure)(thePrs->NativeInstance));
}

void Macad::Occt::Graphic3d_Structure::Descendants(Macad::Occt::Graphic3d_MapOfStructure^ SG)
{
    ((::Graphic3d_Structure*)_NativeInstance)->Descendants(*(::Graphic3d_MapOfStructure*)SG->NativeInstance);
}

void Macad::Occt::Graphic3d_Structure::Disconnect(Macad::Occt::Graphic3d_Structure^ theStructure)
{
    ((::Graphic3d_Structure*)_NativeInstance)->Disconnect((::Graphic3d_Structure*)theStructure->NativeInstance);
}

void Macad::Occt::Graphic3d_Structure::Remove(Macad::Occt::Graphic3d_Structure^ thePrs)
{
    ((::Graphic3d_Structure*)_NativeInstance)->Remove(Handle(::Graphic3d_Structure)(thePrs->NativeInstance));
}

void Macad::Occt::Graphic3d_Structure::DisconnectAll(Macad::Occt::Graphic3d_TypeOfConnection AType)
{
    ((::Graphic3d_Structure*)_NativeInstance)->DisconnectAll((::Graphic3d_TypeOfConnection)AType);
}

void Macad::Occt::Graphic3d_Structure::RemoveAll()
{
    ((::Graphic3d_Structure*)_NativeInstance)->RemoveAll();
}

void Macad::Occt::Graphic3d_Structure::SetOwner(System::IntPtr theOwner)
{
    ((::Graphic3d_Structure*)_NativeInstance)->SetOwner(theOwner.ToPointer());
}

System::IntPtr Macad::Occt::Graphic3d_Structure::Owner()
{
    void* _result = ((::Graphic3d_Structure*)_NativeInstance)->Owner();
    return System::IntPtr(_result);
}

void Macad::Occt::Graphic3d_Structure::SetHLRValidation(bool theFlag)
{
    ((::Graphic3d_Structure*)_NativeInstance)->SetHLRValidation(theFlag);
}

bool Macad::Occt::Graphic3d_Structure::HLRValidation()
{
    bool _result = ((::Graphic3d_Structure*)_NativeInstance)->HLRValidation();
    return _result;
}

Macad::Occt::TopLoc_Datum3D^ Macad::Occt::Graphic3d_Structure::Transformation()
{
    Handle(::TopLoc_Datum3D) _result = ((::Graphic3d_Structure*)_NativeInstance)->Transformation();
    return _result.IsNull() ? nullptr : Macad::Occt::TopLoc_Datum3D::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_Structure::SetTransformation(Macad::Occt::TopLoc_Datum3D^ theTrsf)
{
    ((::Graphic3d_Structure*)_NativeInstance)->SetTransformation(Handle(::TopLoc_Datum3D)(theTrsf->NativeInstance));
}

void Macad::Occt::Graphic3d_Structure::SetTransformPersistence(Macad::Occt::Graphic3d_TransformPers^ theTrsfPers)
{
    ((::Graphic3d_Structure*)_NativeInstance)->SetTransformPersistence(Handle(::Graphic3d_TransformPers)(theTrsfPers->NativeInstance));
}

Macad::Occt::Graphic3d_TransformPers^ Macad::Occt::Graphic3d_Structure::TransformPersistence()
{
    Handle(::Graphic3d_TransformPers) _result = ((::Graphic3d_Structure*)_NativeInstance)->TransformPersistence();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_TransformPers::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_Structure::SetMutable(bool theIsMutable)
{
    ((::Graphic3d_Structure*)_NativeInstance)->SetMutable(theIsMutable);
}

bool Macad::Occt::Graphic3d_Structure::IsMutable()
{
    bool _result = ((::Graphic3d_Structure*)_NativeInstance)->IsMutable();
    return _result;
}

Macad::Occt::Graphic3d_TypeOfStructure Macad::Occt::Graphic3d_Structure::ComputeVisual()
{
    ::Graphic3d_TypeOfStructure _result = ((::Graphic3d_Structure*)_NativeInstance)->ComputeVisual();
    return (Macad::Occt::Graphic3d_TypeOfStructure)_result;
}

void Macad::Occt::Graphic3d_Structure::GraphicClear(bool WithDestruction)
{
    ((::Graphic3d_Structure*)_NativeInstance)->GraphicClear(WithDestruction);
}

void Macad::Occt::Graphic3d_Structure::GraphicConnect(Macad::Occt::Graphic3d_Structure^ theDaughter)
{
    ((::Graphic3d_Structure*)_NativeInstance)->GraphicConnect(Handle(::Graphic3d_Structure)(theDaughter->NativeInstance));
}

void Macad::Occt::Graphic3d_Structure::GraphicDisconnect(Macad::Occt::Graphic3d_Structure^ theDaughter)
{
    ((::Graphic3d_Structure*)_NativeInstance)->GraphicDisconnect(Handle(::Graphic3d_Structure)(theDaughter->NativeInstance));
}

void Macad::Occt::Graphic3d_Structure::GraphicTransform(Macad::Occt::TopLoc_Datum3D^ theTrsf)
{
    ((::Graphic3d_Structure*)_NativeInstance)->GraphicTransform(Handle(::TopLoc_Datum3D)(theTrsf->NativeInstance));
}

int Macad::Occt::Graphic3d_Structure::Identification()
{
    int _result = ((::Graphic3d_Structure*)_NativeInstance)->Identification();
    return _result;
}

void Macad::Occt::Graphic3d_Structure::PrintNetwork(Macad::Occt::Graphic3d_Structure^ AStructure, Macad::Occt::Graphic3d_TypeOfConnection AType)
{
    ::Graphic3d_Structure::PrintNetwork(Handle(::Graphic3d_Structure)(AStructure->NativeInstance), (::Graphic3d_TypeOfConnection)AType);
}

void Macad::Occt::Graphic3d_Structure::Remove(Macad::Occt::Graphic3d_Structure^ thePtr, Macad::Occt::Graphic3d_TypeOfConnection theType)
{
    ((::Graphic3d_Structure*)_NativeInstance)->Remove((::Graphic3d_Structure*)thePtr->NativeInstance, (::Graphic3d_TypeOfConnection)theType);
}

void Macad::Occt::Graphic3d_Structure::SetComputeVisual(Macad::Occt::Graphic3d_TypeOfStructure theVisual)
{
    ((::Graphic3d_Structure*)_NativeInstance)->SetComputeVisual((::Graphic3d_TypeOfStructure)theVisual);
}

void Macad::Occt::Graphic3d_Structure::Transforms(Macad::Occt::Trsf theTrsf, double theX, double theY, double theZ, double% theNewX, double% theNewY, double% theNewZ)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    pin_ptr<double> pp_theNewX = &theNewX;
    pin_ptr<double> pp_theNewY = &theNewY;
    pin_ptr<double> pp_theNewZ = &theNewZ;
    ::Graphic3d_Structure::Transforms(*(gp_Trsf*)pp_theTrsf, theX, theY, theZ, *(double*)pp_theNewX, *(double*)pp_theNewY, *(double*)pp_theNewZ);
}

Macad::Occt::Graphic3d_CStructure^ Macad::Occt::Graphic3d_Structure::CStructure()
{
    Handle(::Graphic3d_CStructure) _result = ((::Graphic3d_Structure*)_NativeInstance)->CStructure();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_CStructure::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_Structure::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_Structure*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Graphic3d_Structure::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_Structure*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::Graphic3d_Structure::CreateDowncasted(::Graphic3d_Structure* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::PrsMgr_Presentation)))
        return Macad::Occt::PrsMgr_Presentation::CreateDowncasted((::PrsMgr_Presentation*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Prs3d_PresentationShadow)))
        return Macad::Occt::Prs3d_PresentationShadow::CreateDowncasted((::Prs3d_PresentationShadow*)instance);
    
    return gcnew Macad::Occt::Graphic3d_Structure( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Text
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Text::Graphic3d_Text(float theHeight)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_Text(theHeight);
}

void Macad::Occt::Graphic3d_Text::SetText(Macad::Occt::TCollection_AsciiString^ theText)
{
    ((::Graphic3d_Text*)_NativeInstance)->SetText(*(::TCollection_AsciiString*)theText->NativeInstance);
}

void Macad::Occt::Graphic3d_Text::SetText(System::String^ theText)
{
    const char* sz_theText = (char*)(void*)Marshal::StringToHGlobalAnsi(theText);
    ((::Graphic3d_Text*)_NativeInstance)->SetText(sz_theText);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theText);
}

Macad::Occt::Pnt Macad::Occt::Graphic3d_Text::Position()
{
    ::gp_Pnt _nativeResult = ((::Graphic3d_Text*)_NativeInstance)->Position();
    return Macad::Occt::Pnt(_nativeResult);
}

void Macad::Occt::Graphic3d_Text::SetPosition(Macad::Occt::Pnt thePoint)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePoint = &thePoint;
    ((::Graphic3d_Text*)_NativeInstance)->SetPosition(*(gp_Pnt*)pp_thePoint);
}

Macad::Occt::Ax2 Macad::Occt::Graphic3d_Text::Orientation()
{
    ::gp_Ax2 _nativeResult = ((::Graphic3d_Text*)_NativeInstance)->Orientation();
    return Macad::Occt::Ax2(_nativeResult);
}

bool Macad::Occt::Graphic3d_Text::HasPlane()
{
    bool _result = ((::Graphic3d_Text*)_NativeInstance)->HasPlane();
    return _result;
}

void Macad::Occt::Graphic3d_Text::SetOrientation(Macad::Occt::Ax2 theOrientation)
{
    pin_ptr<Macad::Occt::Ax2> pp_theOrientation = &theOrientation;
    ((::Graphic3d_Text*)_NativeInstance)->SetOrientation(*(gp_Ax2*)pp_theOrientation);
}

void Macad::Occt::Graphic3d_Text::ResetOrientation()
{
    ((::Graphic3d_Text*)_NativeInstance)->ResetOrientation();
}

bool Macad::Occt::Graphic3d_Text::HasOwnAnchorPoint()
{
    bool _result = ((::Graphic3d_Text*)_NativeInstance)->HasOwnAnchorPoint();
    return _result;
}

void Macad::Occt::Graphic3d_Text::SetOwnAnchorPoint(bool theHasOwnAnchor)
{
    ((::Graphic3d_Text*)_NativeInstance)->SetOwnAnchorPoint(theHasOwnAnchor);
}

float Macad::Occt::Graphic3d_Text::Height()
{
    float _result = ((::Graphic3d_Text*)_NativeInstance)->Height();
    return _result;
}

void Macad::Occt::Graphic3d_Text::SetHeight(float theHeight)
{
    ((::Graphic3d_Text*)_NativeInstance)->SetHeight(theHeight);
}

Macad::Occt::Graphic3d_HorizontalTextAlignment Macad::Occt::Graphic3d_Text::HorizontalAlignment()
{
    ::Graphic3d_HorizontalTextAlignment _result = ((::Graphic3d_Text*)_NativeInstance)->HorizontalAlignment();
    return (Macad::Occt::Graphic3d_HorizontalTextAlignment)_result;
}

void Macad::Occt::Graphic3d_Text::SetHorizontalAlignment(Macad::Occt::Graphic3d_HorizontalTextAlignment theJustification)
{
    ((::Graphic3d_Text*)_NativeInstance)->SetHorizontalAlignment((::Graphic3d_HorizontalTextAlignment)theJustification);
}

Macad::Occt::Graphic3d_VerticalTextAlignment Macad::Occt::Graphic3d_Text::VerticalAlignment()
{
    ::Graphic3d_VerticalTextAlignment _result = ((::Graphic3d_Text*)_NativeInstance)->VerticalAlignment();
    return (Macad::Occt::Graphic3d_VerticalTextAlignment)_result;
}

void Macad::Occt::Graphic3d_Text::SetVerticalAlignment(Macad::Occt::Graphic3d_VerticalTextAlignment theJustification)
{
    ((::Graphic3d_Text*)_NativeInstance)->SetVerticalAlignment((::Graphic3d_VerticalTextAlignment)theJustification);
}

Macad::Occt::Graphic3d_Text^ Macad::Occt::Graphic3d_Text::CreateDowncasted(::Graphic3d_Text* instance)
{
    return gcnew Macad::Occt::Graphic3d_Text( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_TransformPers
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_TransformPers::Graphic3d_TransformPers(Macad::Occt::Graphic3d_TransModeFlags theMode)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_TransformPers((::Graphic3d_TransModeFlags)theMode);
}

Macad::Occt::Graphic3d_TransformPers::Graphic3d_TransformPers(Macad::Occt::Graphic3d_TransModeFlags theMode, Macad::Occt::Pnt thePnt)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
    NativeInstance = new ::Graphic3d_TransformPers((::Graphic3d_TransModeFlags)theMode, *(gp_Pnt*)pp_thePnt);
}

Macad::Occt::Graphic3d_TransformPers::Graphic3d_TransformPers(Macad::Occt::Graphic3d_TransModeFlags theMode, Macad::Occt::Aspect_TypeOfTriedronPosition theCorner, Macad::Occt::Graphic3d_Vec2i^ theOffset)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_TransformPers((::Graphic3d_TransModeFlags)theMode, (::Aspect_TypeOfTriedronPosition)theCorner, *(::Graphic3d_Vec2i*)theOffset->NativeInstance);
}

Macad::Occt::Graphic3d_TransformPers::Graphic3d_TransformPers(Macad::Occt::Graphic3d_TransModeFlags theMode, Macad::Occt::Aspect_TypeOfTriedronPosition theCorner)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_TransformPers((::Graphic3d_TransModeFlags)theMode, (::Aspect_TypeOfTriedronPosition)theCorner, ::Graphic3d_Vec2i(0, 0));
}

bool Macad::Occt::Graphic3d_TransformPers::IsZoomOrRotate(Macad::Occt::Graphic3d_TransModeFlags theMode)
{
    bool _result = ::Graphic3d_TransformPers::IsZoomOrRotate((::Graphic3d_TransModeFlags)theMode);
    return _result;
}

bool Macad::Occt::Graphic3d_TransformPers::IsTrihedronOr2d(Macad::Occt::Graphic3d_TransModeFlags theMode)
{
    bool _result = ::Graphic3d_TransformPers::IsTrihedronOr2d((::Graphic3d_TransModeFlags)theMode);
    return _result;
}

bool Macad::Occt::Graphic3d_TransformPers::IsOrthoPers(Macad::Occt::Graphic3d_TransModeFlags theMode)
{
    bool _result = ::Graphic3d_TransformPers::IsOrthoPers((::Graphic3d_TransModeFlags)theMode);
    return _result;
}

bool Macad::Occt::Graphic3d_TransformPers::IsAxial(Macad::Occt::Graphic3d_TransModeFlags theMode)
{
    bool _result = ::Graphic3d_TransformPers::IsAxial((::Graphic3d_TransModeFlags)theMode);
    return _result;
}

bool Macad::Occt::Graphic3d_TransformPers::IsZoomOrRotate()
{
    bool _result = ((::Graphic3d_TransformPers*)_NativeInstance)->IsZoomOrRotate();
    return _result;
}

bool Macad::Occt::Graphic3d_TransformPers::IsTrihedronOr2d()
{
    bool _result = ((::Graphic3d_TransformPers*)_NativeInstance)->IsTrihedronOr2d();
    return _result;
}

bool Macad::Occt::Graphic3d_TransformPers::IsOrthoPers()
{
    bool _result = ((::Graphic3d_TransformPers*)_NativeInstance)->IsOrthoPers();
    return _result;
}

bool Macad::Occt::Graphic3d_TransformPers::IsAxial()
{
    bool _result = ((::Graphic3d_TransformPers*)_NativeInstance)->IsAxial();
    return _result;
}

Macad::Occt::Graphic3d_TransModeFlags Macad::Occt::Graphic3d_TransformPers::Mode()
{
    ::Graphic3d_TransModeFlags _result = ((::Graphic3d_TransformPers*)_NativeInstance)->Mode();
    return (Macad::Occt::Graphic3d_TransModeFlags)_result;
}

Macad::Occt::Graphic3d_TransModeFlags Macad::Occt::Graphic3d_TransformPers::Flags()
{
    ::Graphic3d_TransModeFlags _result = ((::Graphic3d_TransformPers*)_NativeInstance)->Flags();
    return (Macad::Occt::Graphic3d_TransModeFlags)_result;
}

void Macad::Occt::Graphic3d_TransformPers::SetPersistence(Macad::Occt::Graphic3d_TransModeFlags theMode, Macad::Occt::Pnt thePnt)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
    ((::Graphic3d_TransformPers*)_NativeInstance)->SetPersistence((::Graphic3d_TransModeFlags)theMode, *(gp_Pnt*)pp_thePnt);
}

void Macad::Occt::Graphic3d_TransformPers::SetPersistence(Macad::Occt::Graphic3d_TransModeFlags theMode, Macad::Occt::Aspect_TypeOfTriedronPosition theCorner, Macad::Occt::Graphic3d_Vec2i^ theOffset)
{
    ((::Graphic3d_TransformPers*)_NativeInstance)->SetPersistence((::Graphic3d_TransModeFlags)theMode, (::Aspect_TypeOfTriedronPosition)theCorner, *(::Graphic3d_Vec2i*)theOffset->NativeInstance);
}

Macad::Occt::Pnt Macad::Occt::Graphic3d_TransformPers::AnchorPoint()
{
    ::gp_Pnt _nativeResult = ((::Graphic3d_TransformPers*)_NativeInstance)->AnchorPoint();
    return Macad::Occt::Pnt(_nativeResult);
}

void Macad::Occt::Graphic3d_TransformPers::SetAnchorPoint(Macad::Occt::Pnt thePnt)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
    ((::Graphic3d_TransformPers*)_NativeInstance)->SetAnchorPoint(*(gp_Pnt*)pp_thePnt);
}

Macad::Occt::Aspect_TypeOfTriedronPosition Macad::Occt::Graphic3d_TransformPers::Corner2d()
{
    ::Aspect_TypeOfTriedronPosition _result = ((::Graphic3d_TransformPers*)_NativeInstance)->Corner2d();
    return (Macad::Occt::Aspect_TypeOfTriedronPosition)_result;
}

void Macad::Occt::Graphic3d_TransformPers::SetCorner2d(Macad::Occt::Aspect_TypeOfTriedronPosition thePos)
{
    ((::Graphic3d_TransformPers*)_NativeInstance)->SetCorner2d((::Aspect_TypeOfTriedronPosition)thePos);
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_TransformPers::Offset2d()
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = ((::Graphic3d_TransformPers*)_NativeInstance)->Offset2d();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

void Macad::Occt::Graphic3d_TransformPers::SetOffset2d(Macad::Occt::Graphic3d_Vec2i^ theOffset)
{
    ((::Graphic3d_TransformPers*)_NativeInstance)->SetOffset2d(*(::Graphic3d_Vec2i*)theOffset->NativeInstance);
}

double Macad::Occt::Graphic3d_TransformPers::persistentScale(Macad::Occt::Graphic3d_Camera^ theCamera, int theViewportWidth, int theViewportHeight)
{
    double _result = ((::Graphic3d_TransformPers*)_NativeInstance)->persistentScale(Handle(::Graphic3d_Camera)(theCamera->NativeInstance), theViewportWidth, theViewportHeight);
    return _result;
}

Macad::Occt::Graphic3d_Mat4d^ Macad::Occt::Graphic3d_TransformPers::ComputeApply(Macad::Occt::Graphic3d_Camera^ theCamera, int theViewportWidth, int theViewportHeight, Macad::Occt::Pnt theAnchor)
{
    ::Graphic3d_Mat4d* _result = new ::Graphic3d_Mat4d();
    Handle(::Graphic3d_Camera) h_theCamera = theCamera->NativeInstance;
    pin_ptr<Macad::Occt::Pnt> pp_theAnchor = &theAnchor;
    *_result = ((::Graphic3d_TransformPers*)_NativeInstance)->ComputeApply(h_theCamera, theViewportWidth, theViewportHeight, (gp_Pnt*)pp_theAnchor);
    theCamera->NativeInstance = h_theCamera.get();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Mat4d(_result);
}

Macad::Occt::Graphic3d_Mat4d^ Macad::Occt::Graphic3d_TransformPers::ComputeApply(Macad::Occt::Graphic3d_Camera^ theCamera, int theViewportWidth, int theViewportHeight)
{
    ::Graphic3d_Mat4d* _result = new ::Graphic3d_Mat4d();
    Handle(::Graphic3d_Camera) h_theCamera = theCamera->NativeInstance;
    *_result = ((::Graphic3d_TransformPers*)_NativeInstance)->ComputeApply(h_theCamera, theViewportWidth, theViewportHeight, nullptr);
    theCamera->NativeInstance = h_theCamera.get();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Mat4d(_result);
}

void Macad::Occt::Graphic3d_TransformPers::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_TransformPers*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Graphic3d_TransformPers::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_TransformPers*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::Graphic3d_TransformPers^ Macad::Occt::Graphic3d_TransformPers::CreateDowncasted(::Graphic3d_TransformPers* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::Graphic3d_TransformPersScaledAbove)))
        return Macad::Occt::Graphic3d_TransformPersScaledAbove::CreateDowncasted((::Graphic3d_TransformPersScaledAbove*)instance);
    
    return gcnew Macad::Occt::Graphic3d_TransformPers( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Group
//---------------------------------------------------------------------

void Macad::Occt::Graphic3d_Group::Clear(bool theUpdateStructureMgr)
{
    ((::Graphic3d_Group*)_NativeInstance)->Clear(theUpdateStructureMgr);
}

void Macad::Occt::Graphic3d_Group::Clear()
{
    ((::Graphic3d_Group*)_NativeInstance)->Clear(true);
}

void Macad::Occt::Graphic3d_Group::Remove()
{
    ((::Graphic3d_Group*)_NativeInstance)->Remove();
}

Macad::Occt::Graphic3d_Aspects^ Macad::Occt::Graphic3d_Group::Aspects()
{
    Handle(::Graphic3d_Aspects) _result = ((::Graphic3d_Group*)_NativeInstance)->Aspects();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Aspects::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_Group::SetGroupPrimitivesAspect(Macad::Occt::Graphic3d_Aspects^ theAspect)
{
    ((::Graphic3d_Group*)_NativeInstance)->SetGroupPrimitivesAspect(Handle(::Graphic3d_Aspects)(theAspect->NativeInstance));
}

void Macad::Occt::Graphic3d_Group::SetPrimitivesAspect(Macad::Occt::Graphic3d_Aspects^ theAspect)
{
    ((::Graphic3d_Group*)_NativeInstance)->SetPrimitivesAspect(Handle(::Graphic3d_Aspects)(theAspect->NativeInstance));
}

void Macad::Occt::Graphic3d_Group::SynchronizeAspects()
{
    ((::Graphic3d_Group*)_NativeInstance)->SynchronizeAspects();
}

void Macad::Occt::Graphic3d_Group::AddText(Macad::Occt::Graphic3d_Text^ theTextParams, bool theToEvalMinMax)
{
    ((::Graphic3d_Group*)_NativeInstance)->AddText(Handle(::Graphic3d_Text)(theTextParams->NativeInstance), theToEvalMinMax);
}

void Macad::Occt::Graphic3d_Group::AddText(Macad::Occt::Graphic3d_Text^ theTextParams)
{
    ((::Graphic3d_Group*)_NativeInstance)->AddText(Handle(::Graphic3d_Text)(theTextParams->NativeInstance), true);
}

void Macad::Occt::Graphic3d_Group::AddPrimitiveArray(Macad::Occt::Graphic3d_ArrayOfPrimitives^ thePrim, bool theToEvalMinMax)
{
    ((::Graphic3d_Group*)_NativeInstance)->AddPrimitiveArray(Handle(::Graphic3d_ArrayOfPrimitives)(thePrim->NativeInstance), theToEvalMinMax);
}

void Macad::Occt::Graphic3d_Group::AddPrimitiveArray(Macad::Occt::Graphic3d_ArrayOfPrimitives^ thePrim)
{
    ((::Graphic3d_Group*)_NativeInstance)->AddPrimitiveArray(Handle(::Graphic3d_ArrayOfPrimitives)(thePrim->NativeInstance), true);
}

void Macad::Occt::Graphic3d_Group::SetStencilTestOptions(bool theIsEnabled)
{
    ((::Graphic3d_Group*)_NativeInstance)->SetStencilTestOptions(theIsEnabled);
}

void Macad::Occt::Graphic3d_Group::SetFlippingOptions(bool theIsEnabled, Macad::Occt::Ax2 theRefPlane)
{
    pin_ptr<Macad::Occt::Ax2> pp_theRefPlane = &theRefPlane;
    ((::Graphic3d_Group*)_NativeInstance)->SetFlippingOptions(theIsEnabled, *(gp_Ax2*)pp_theRefPlane);
}

Macad::Occt::Trsf Macad::Occt::Graphic3d_Group::Transformation()
{
    ::gp_Trsf _nativeResult = ((::Graphic3d_Group*)_NativeInstance)->Transformation();
    return Macad::Occt::Trsf(_nativeResult);
}

void Macad::Occt::Graphic3d_Group::SetTransformation(Macad::Occt::Trsf theTrsf)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
    ((::Graphic3d_Group*)_NativeInstance)->SetTransformation(*(gp_Trsf*)pp_theTrsf);
}

Macad::Occt::Graphic3d_TransformPers^ Macad::Occt::Graphic3d_Group::TransformPersistence()
{
    Handle(::Graphic3d_TransformPers) _result = ((::Graphic3d_Group*)_NativeInstance)->TransformPersistence();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_TransformPers::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_Group::SetTransformPersistence(Macad::Occt::Graphic3d_TransformPers^ theTrsfPers)
{
    ((::Graphic3d_Group*)_NativeInstance)->SetTransformPersistence(Handle(::Graphic3d_TransformPers)(theTrsfPers->NativeInstance));
}

bool Macad::Occt::Graphic3d_Group::IsDeleted()
{
    bool _result = ((::Graphic3d_Group*)_NativeInstance)->IsDeleted();
    return _result;
}

bool Macad::Occt::Graphic3d_Group::IsEmpty()
{
    bool _result = ((::Graphic3d_Group*)_NativeInstance)->IsEmpty();
    return _result;
}

void Macad::Occt::Graphic3d_Group::MinMaxValues(double% theXMin, double% theYMin, double% theZMin, double% theXMax, double% theYMax, double% theZMax)
{
    pin_ptr<double> pp_theXMin = &theXMin;
    pin_ptr<double> pp_theYMin = &theYMin;
    pin_ptr<double> pp_theZMin = &theZMin;
    pin_ptr<double> pp_theXMax = &theXMax;
    pin_ptr<double> pp_theYMax = &theYMax;
    pin_ptr<double> pp_theZMax = &theZMax;
    ((::Graphic3d_Group*)_NativeInstance)->MinMaxValues(*(double*)pp_theXMin, *(double*)pp_theYMin, *(double*)pp_theZMin, *(double*)pp_theXMax, *(double*)pp_theYMax, *(double*)pp_theZMax);
}

void Macad::Occt::Graphic3d_Group::SetMinMaxValues(double theXMin, double theYMin, double theZMin, double theXMax, double theYMax, double theZMax)
{
    ((::Graphic3d_Group*)_NativeInstance)->SetMinMaxValues(theXMin, theYMin, theZMin, theXMax, theYMax, theZMax);
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::Graphic3d_Group::Structure()
{
    Handle(::Graphic3d_Structure) _result = ((::Graphic3d_Group*)_NativeInstance)->Structure();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_Group::SetClosed(bool theIsClosed)
{
    ((::Graphic3d_Group*)_NativeInstance)->SetClosed(theIsClosed);
}

bool Macad::Occt::Graphic3d_Group::IsClosed()
{
    bool _result = ((::Graphic3d_Group*)_NativeInstance)->IsClosed();
    return _result;
}

void Macad::Occt::Graphic3d_Group::Marker(Macad::Occt::Graphic3d_Vertex^ thePoint, bool theToEvalMinMax)
{
    ((::Graphic3d_Group*)_NativeInstance)->Marker(*(::Graphic3d_Vertex*)thePoint->NativeInstance, theToEvalMinMax);
}

void Macad::Occt::Graphic3d_Group::Marker(Macad::Occt::Graphic3d_Vertex^ thePoint)
{
    ((::Graphic3d_Group*)_NativeInstance)->Marker(*(::Graphic3d_Vertex*)thePoint->NativeInstance, true);
}

void Macad::Occt::Graphic3d_Group::Text(System::String^ AText, Macad::Occt::Graphic3d_Vertex^ APoint, double AHeight, double AAngle, Macad::Occt::Graphic3d_TextPath ATp, Macad::Occt::Graphic3d_HorizontalTextAlignment AHta, Macad::Occt::Graphic3d_VerticalTextAlignment AVta, bool EvalMinMax)
{
    const char* sz_AText = (char*)(void*)Marshal::StringToHGlobalAnsi(AText);
    ((::Graphic3d_Group*)_NativeInstance)->Text(sz_AText, *(::Graphic3d_Vertex*)APoint->NativeInstance, AHeight, AAngle, (::Graphic3d_TextPath)ATp, (::Graphic3d_HorizontalTextAlignment)AHta, (::Graphic3d_VerticalTextAlignment)AVta, EvalMinMax);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_AText);
}

void Macad::Occt::Graphic3d_Group::Text(System::String^ AText, Macad::Occt::Graphic3d_Vertex^ APoint, double AHeight, double AAngle, Macad::Occt::Graphic3d_TextPath ATp, Macad::Occt::Graphic3d_HorizontalTextAlignment AHta, Macad::Occt::Graphic3d_VerticalTextAlignment AVta)
{
    const char* sz_AText = (char*)(void*)Marshal::StringToHGlobalAnsi(AText);
    ((::Graphic3d_Group*)_NativeInstance)->Text(sz_AText, *(::Graphic3d_Vertex*)APoint->NativeInstance, AHeight, AAngle, (::Graphic3d_TextPath)ATp, (::Graphic3d_HorizontalTextAlignment)AHta, (::Graphic3d_VerticalTextAlignment)AVta, true);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_AText);
}

void Macad::Occt::Graphic3d_Group::Text(System::String^ AText, Macad::Occt::Graphic3d_Vertex^ APoint, double AHeight, bool EvalMinMax)
{
    const char* sz_AText = (char*)(void*)Marshal::StringToHGlobalAnsi(AText);
    ((::Graphic3d_Group*)_NativeInstance)->Text(sz_AText, *(::Graphic3d_Vertex*)APoint->NativeInstance, AHeight, EvalMinMax);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_AText);
}

void Macad::Occt::Graphic3d_Group::Text(System::String^ AText, Macad::Occt::Graphic3d_Vertex^ APoint, double AHeight)
{
    const char* sz_AText = (char*)(void*)Marshal::StringToHGlobalAnsi(AText);
    ((::Graphic3d_Group*)_NativeInstance)->Text(sz_AText, *(::Graphic3d_Vertex*)APoint->NativeInstance, AHeight, true);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_AText);
}

void Macad::Occt::Graphic3d_Group::Text(Macad::Occt::TCollection_ExtendedString^ AText, Macad::Occt::Graphic3d_Vertex^ APoint, double AHeight, double AAngle, Macad::Occt::Graphic3d_TextPath ATp, Macad::Occt::Graphic3d_HorizontalTextAlignment AHta, Macad::Occt::Graphic3d_VerticalTextAlignment AVta, bool EvalMinMax)
{
    ((::Graphic3d_Group*)_NativeInstance)->Text(*(::TCollection_ExtendedString*)AText->NativeInstance, *(::Graphic3d_Vertex*)APoint->NativeInstance, AHeight, AAngle, (::Graphic3d_TextPath)ATp, (::Graphic3d_HorizontalTextAlignment)AHta, (::Graphic3d_VerticalTextAlignment)AVta, EvalMinMax);
}

void Macad::Occt::Graphic3d_Group::Text(Macad::Occt::TCollection_ExtendedString^ AText, Macad::Occt::Graphic3d_Vertex^ APoint, double AHeight, double AAngle, Macad::Occt::Graphic3d_TextPath ATp, Macad::Occt::Graphic3d_HorizontalTextAlignment AHta, Macad::Occt::Graphic3d_VerticalTextAlignment AVta)
{
    ((::Graphic3d_Group*)_NativeInstance)->Text(*(::TCollection_ExtendedString*)AText->NativeInstance, *(::Graphic3d_Vertex*)APoint->NativeInstance, AHeight, AAngle, (::Graphic3d_TextPath)ATp, (::Graphic3d_HorizontalTextAlignment)AHta, (::Graphic3d_VerticalTextAlignment)AVta, true);
}

void Macad::Occt::Graphic3d_Group::Text(Macad::Occt::TCollection_ExtendedString^ AText, Macad::Occt::Graphic3d_Vertex^ APoint, double AHeight, bool EvalMinMax)
{
    ((::Graphic3d_Group*)_NativeInstance)->Text(*(::TCollection_ExtendedString*)AText->NativeInstance, *(::Graphic3d_Vertex*)APoint->NativeInstance, AHeight, EvalMinMax);
}

void Macad::Occt::Graphic3d_Group::Text(Macad::Occt::TCollection_ExtendedString^ AText, Macad::Occt::Graphic3d_Vertex^ APoint, double AHeight)
{
    ((::Graphic3d_Group*)_NativeInstance)->Text(*(::TCollection_ExtendedString*)AText->NativeInstance, *(::Graphic3d_Vertex*)APoint->NativeInstance, AHeight, true);
}

void Macad::Occt::Graphic3d_Group::Text(System::String^ theTextUtf, Macad::Occt::Ax2 theOrientation, double theHeight, double theAngle, Macad::Occt::Graphic3d_TextPath theTp, Macad::Occt::Graphic3d_HorizontalTextAlignment theHTA, Macad::Occt::Graphic3d_VerticalTextAlignment theVTA, bool theToEvalMinMax, bool theHasOwnAnchor)
{
    const char* sz_theTextUtf = (char*)(void*)Marshal::StringToHGlobalAnsi(theTextUtf);
    pin_ptr<Macad::Occt::Ax2> pp_theOrientation = &theOrientation;
    ((::Graphic3d_Group*)_NativeInstance)->Text(sz_theTextUtf, *(gp_Ax2*)pp_theOrientation, theHeight, theAngle, (::Graphic3d_TextPath)theTp, (::Graphic3d_HorizontalTextAlignment)theHTA, (::Graphic3d_VerticalTextAlignment)theVTA, theToEvalMinMax, theHasOwnAnchor);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theTextUtf);
}

void Macad::Occt::Graphic3d_Group::Text(System::String^ theTextUtf, Macad::Occt::Ax2 theOrientation, double theHeight, double theAngle, Macad::Occt::Graphic3d_TextPath theTp, Macad::Occt::Graphic3d_HorizontalTextAlignment theHTA, Macad::Occt::Graphic3d_VerticalTextAlignment theVTA, bool theToEvalMinMax)
{
    const char* sz_theTextUtf = (char*)(void*)Marshal::StringToHGlobalAnsi(theTextUtf);
    pin_ptr<Macad::Occt::Ax2> pp_theOrientation = &theOrientation;
    ((::Graphic3d_Group*)_NativeInstance)->Text(sz_theTextUtf, *(gp_Ax2*)pp_theOrientation, theHeight, theAngle, (::Graphic3d_TextPath)theTp, (::Graphic3d_HorizontalTextAlignment)theHTA, (::Graphic3d_VerticalTextAlignment)theVTA, theToEvalMinMax, true);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theTextUtf);
}

void Macad::Occt::Graphic3d_Group::Text(System::String^ theTextUtf, Macad::Occt::Ax2 theOrientation, double theHeight, double theAngle, Macad::Occt::Graphic3d_TextPath theTp, Macad::Occt::Graphic3d_HorizontalTextAlignment theHTA, Macad::Occt::Graphic3d_VerticalTextAlignment theVTA)
{
    const char* sz_theTextUtf = (char*)(void*)Marshal::StringToHGlobalAnsi(theTextUtf);
    pin_ptr<Macad::Occt::Ax2> pp_theOrientation = &theOrientation;
    ((::Graphic3d_Group*)_NativeInstance)->Text(sz_theTextUtf, *(gp_Ax2*)pp_theOrientation, theHeight, theAngle, (::Graphic3d_TextPath)theTp, (::Graphic3d_HorizontalTextAlignment)theHTA, (::Graphic3d_VerticalTextAlignment)theVTA, true, true);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theTextUtf);
}

void Macad::Occt::Graphic3d_Group::Text(Macad::Occt::TCollection_ExtendedString^ theText, Macad::Occt::Ax2 theOrientation, double theHeight, double theAngle, Macad::Occt::Graphic3d_TextPath theTp, Macad::Occt::Graphic3d_HorizontalTextAlignment theHTA, Macad::Occt::Graphic3d_VerticalTextAlignment theVTA, bool theToEvalMinMax, bool theHasOwnAnchor)
{
    pin_ptr<Macad::Occt::Ax2> pp_theOrientation = &theOrientation;
    ((::Graphic3d_Group*)_NativeInstance)->Text(*(::TCollection_ExtendedString*)theText->NativeInstance, *(gp_Ax2*)pp_theOrientation, theHeight, theAngle, (::Graphic3d_TextPath)theTp, (::Graphic3d_HorizontalTextAlignment)theHTA, (::Graphic3d_VerticalTextAlignment)theVTA, theToEvalMinMax, theHasOwnAnchor);
}

void Macad::Occt::Graphic3d_Group::Text(Macad::Occt::TCollection_ExtendedString^ theText, Macad::Occt::Ax2 theOrientation, double theHeight, double theAngle, Macad::Occt::Graphic3d_TextPath theTp, Macad::Occt::Graphic3d_HorizontalTextAlignment theHTA, Macad::Occt::Graphic3d_VerticalTextAlignment theVTA, bool theToEvalMinMax)
{
    pin_ptr<Macad::Occt::Ax2> pp_theOrientation = &theOrientation;
    ((::Graphic3d_Group*)_NativeInstance)->Text(*(::TCollection_ExtendedString*)theText->NativeInstance, *(gp_Ax2*)pp_theOrientation, theHeight, theAngle, (::Graphic3d_TextPath)theTp, (::Graphic3d_HorizontalTextAlignment)theHTA, (::Graphic3d_VerticalTextAlignment)theVTA, theToEvalMinMax, true);
}

void Macad::Occt::Graphic3d_Group::Text(Macad::Occt::TCollection_ExtendedString^ theText, Macad::Occt::Ax2 theOrientation, double theHeight, double theAngle, Macad::Occt::Graphic3d_TextPath theTp, Macad::Occt::Graphic3d_HorizontalTextAlignment theHTA, Macad::Occt::Graphic3d_VerticalTextAlignment theVTA)
{
    pin_ptr<Macad::Occt::Ax2> pp_theOrientation = &theOrientation;
    ((::Graphic3d_Group*)_NativeInstance)->Text(*(::TCollection_ExtendedString*)theText->NativeInstance, *(gp_Ax2*)pp_theOrientation, theHeight, theAngle, (::Graphic3d_TextPath)theTp, (::Graphic3d_HorizontalTextAlignment)theHTA, (::Graphic3d_VerticalTextAlignment)theVTA, true, true);
}

void Macad::Occt::Graphic3d_Group::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_Group*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Graphic3d_Group::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_Group*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::Graphic3d_Group^ Macad::Occt::Graphic3d_Group::CreateDowncasted(::Graphic3d_Group* instance)
{
    return gcnew Macad::Occt::Graphic3d_Group( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_SequenceOfHClipPlane
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_SequenceOfHClipPlane::Graphic3d_SequenceOfHClipPlane()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_SequenceOfHClipPlane();
}

bool Macad::Occt::Graphic3d_SequenceOfHClipPlane::ToOverrideGlobal()
{
    bool _result = ((::Graphic3d_SequenceOfHClipPlane*)_NativeInstance)->ToOverrideGlobal();
    return _result;
}

void Macad::Occt::Graphic3d_SequenceOfHClipPlane::SetOverrideGlobal(bool theToOverride)
{
    ((::Graphic3d_SequenceOfHClipPlane*)_NativeInstance)->SetOverrideGlobal(theToOverride);
}

bool Macad::Occt::Graphic3d_SequenceOfHClipPlane::IsEmpty()
{
    bool _result = ((::Graphic3d_SequenceOfHClipPlane*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::Graphic3d_SequenceOfHClipPlane::Size()
{
    int _result = ((::Graphic3d_SequenceOfHClipPlane*)_NativeInstance)->Size();
    return _result;
}

bool Macad::Occt::Graphic3d_SequenceOfHClipPlane::Append(Macad::Occt::Graphic3d_ClipPlane^ theItem)
{
    bool _result = ((::Graphic3d_SequenceOfHClipPlane*)_NativeInstance)->Append(Handle(::Graphic3d_ClipPlane)(theItem->NativeInstance));
    return _result;
}

bool Macad::Occt::Graphic3d_SequenceOfHClipPlane::Remove(Macad::Occt::Graphic3d_ClipPlane^ theItem)
{
    bool _result = ((::Graphic3d_SequenceOfHClipPlane*)_NativeInstance)->Remove(Handle(::Graphic3d_ClipPlane)(theItem->NativeInstance));
    return _result;
}

void Macad::Occt::Graphic3d_SequenceOfHClipPlane::Clear()
{
    ((::Graphic3d_SequenceOfHClipPlane*)_NativeInstance)->Clear();
}

Macad::Occt::Graphic3d_ClipPlane^ Macad::Occt::Graphic3d_SequenceOfHClipPlane::First()
{
    Handle(::Graphic3d_ClipPlane) _result = ((::Graphic3d_SequenceOfHClipPlane*)_NativeInstance)->First();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ClipPlane::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_SequenceOfHClipPlane::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_SequenceOfHClipPlane*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Graphic3d_SequenceOfHClipPlane::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_SequenceOfHClipPlane*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::Graphic3d_SequenceOfHClipPlane^ Macad::Occt::Graphic3d_SequenceOfHClipPlane::CreateDowncasted(::Graphic3d_SequenceOfHClipPlane* instance)
{
    return gcnew Macad::Occt::Graphic3d_SequenceOfHClipPlane( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ViewAffinity
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ViewAffinity::Graphic3d_ViewAffinity()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ViewAffinity();
}

bool Macad::Occt::Graphic3d_ViewAffinity::IsVisible(int theViewId)
{
    bool _result = ((::Graphic3d_ViewAffinity*)_NativeInstance)->IsVisible(theViewId);
    return _result;
}

void Macad::Occt::Graphic3d_ViewAffinity::SetVisible(bool theIsVisible)
{
    ((::Graphic3d_ViewAffinity*)_NativeInstance)->SetVisible(theIsVisible);
}

void Macad::Occt::Graphic3d_ViewAffinity::SetVisible(int theViewId, bool theIsVisible)
{
    ((::Graphic3d_ViewAffinity*)_NativeInstance)->SetVisible(theViewId, theIsVisible);
}

void Macad::Occt::Graphic3d_ViewAffinity::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_ViewAffinity*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Graphic3d_ViewAffinity::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_ViewAffinity*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::Graphic3d_ViewAffinity^ Macad::Occt::Graphic3d_ViewAffinity::CreateDowncasted(::Graphic3d_ViewAffinity* instance)
{
    return gcnew Macad::Occt::Graphic3d_ViewAffinity( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_GraphicDriver
//---------------------------------------------------------------------

int Macad::Occt::Graphic3d_GraphicDriver::InquireLimit(Macad::Occt::Graphic3d_TypeOfLimit theType)
{
    int _result = ((::Graphic3d_GraphicDriver*)_NativeInstance)->InquireLimit((::Graphic3d_TypeOfLimit)theType);
    return _result;
}

int Macad::Occt::Graphic3d_GraphicDriver::InquireLightLimit()
{
    int _result = ((::Graphic3d_GraphicDriver*)_NativeInstance)->InquireLightLimit();
    return _result;
}

int Macad::Occt::Graphic3d_GraphicDriver::InquirePlaneLimit()
{
    int _result = ((::Graphic3d_GraphicDriver*)_NativeInstance)->InquirePlaneLimit();
    return _result;
}

int Macad::Occt::Graphic3d_GraphicDriver::InquireViewLimit()
{
    int _result = ((::Graphic3d_GraphicDriver*)_NativeInstance)->InquireViewLimit();
    return _result;
}

Macad::Occt::Graphic3d_CStructure^ Macad::Occt::Graphic3d_GraphicDriver::CreateStructure(Macad::Occt::Graphic3d_StructureManager^ theManager)
{
    Handle(::Graphic3d_CStructure) _result = ((::Graphic3d_GraphicDriver*)_NativeInstance)->CreateStructure(Handle(::Graphic3d_StructureManager)(theManager->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_CStructure::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_GraphicDriver::RemoveStructure(Macad::Occt::Graphic3d_CStructure^ theCStructure)
{
    Handle(::Graphic3d_CStructure) h_theCStructure = theCStructure->NativeInstance;
    ((::Graphic3d_GraphicDriver*)_NativeInstance)->RemoveStructure(h_theCStructure);
    theCStructure->NativeInstance = h_theCStructure.get();
}

Macad::Occt::Graphic3d_CView^ Macad::Occt::Graphic3d_GraphicDriver::CreateView(Macad::Occt::Graphic3d_StructureManager^ theMgr)
{
    Handle(::Graphic3d_CView) _result = ((::Graphic3d_GraphicDriver*)_NativeInstance)->CreateView(Handle(::Graphic3d_StructureManager)(theMgr->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_CView::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_GraphicDriver::RemoveView(Macad::Occt::Graphic3d_CView^ theView)
{
    ((::Graphic3d_GraphicDriver*)_NativeInstance)->RemoveView(Handle(::Graphic3d_CView)(theView->NativeInstance));
}

void Macad::Occt::Graphic3d_GraphicDriver::EnableVBO(bool status)
{
    ((::Graphic3d_GraphicDriver*)_NativeInstance)->EnableVBO(status);
}

bool Macad::Occt::Graphic3d_GraphicDriver::IsVerticalSync()
{
    bool _result = ((::Graphic3d_GraphicDriver*)_NativeInstance)->IsVerticalSync();
    return _result;
}

void Macad::Occt::Graphic3d_GraphicDriver::SetVerticalSync(bool theToEnable)
{
    ((::Graphic3d_GraphicDriver*)_NativeInstance)->SetVerticalSync(theToEnable);
}

bool Macad::Occt::Graphic3d_GraphicDriver::MemoryInfo(long long unsigned int% theFreeBytes, Macad::Occt::TCollection_AsciiString^ theInfo)
{
    pin_ptr<long long unsigned int> pp_theFreeBytes = &theFreeBytes;
    bool _result = ((::Graphic3d_GraphicDriver*)_NativeInstance)->MemoryInfo(*(long long unsigned int*)pp_theFreeBytes, *(::TCollection_AsciiString*)theInfo->NativeInstance);
    return _result;
}

float Macad::Occt::Graphic3d_GraphicDriver::DefaultTextHeight()
{
    float _result = ((::Graphic3d_GraphicDriver*)_NativeInstance)->DefaultTextHeight();
    return _result;
}

void Macad::Occt::Graphic3d_GraphicDriver::TextSize(Macad::Occt::Graphic3d_CView^ theView, System::String^ theText, float theHeight, float% theWidth, float% theAscent, float% theDescent)
{
    const char* sz_theText = (char*)(void*)Marshal::StringToHGlobalAnsi(theText);
    pin_ptr<float> pp_theWidth = &theWidth;
    pin_ptr<float> pp_theAscent = &theAscent;
    pin_ptr<float> pp_theDescent = &theDescent;
    ((::Graphic3d_GraphicDriver*)_NativeInstance)->TextSize(Handle(::Graphic3d_CView)(theView->NativeInstance), sz_theText, theHeight, *(float*)pp_theWidth, *(float*)pp_theAscent, *(float*)pp_theDescent);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theText);
}

void Macad::Occt::Graphic3d_GraphicDriver::InsertLayerBefore(int theNewLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings, int theLayerAfter)
{
    ((::Graphic3d_GraphicDriver*)_NativeInstance)->InsertLayerBefore(theNewLayerId, *(::Graphic3d_ZLayerSettings*)theSettings->NativeInstance, theLayerAfter);
}

void Macad::Occt::Graphic3d_GraphicDriver::InsertLayerAfter(int theNewLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings, int theLayerBefore)
{
    ((::Graphic3d_GraphicDriver*)_NativeInstance)->InsertLayerAfter(theNewLayerId, *(::Graphic3d_ZLayerSettings*)theSettings->NativeInstance, theLayerBefore);
}

void Macad::Occt::Graphic3d_GraphicDriver::RemoveZLayer(int theLayerId)
{
    ((::Graphic3d_GraphicDriver*)_NativeInstance)->RemoveZLayer(theLayerId);
}

void Macad::Occt::Graphic3d_GraphicDriver::ZLayers(Macad::Occt::TColStd_SequenceOfInteger^ theLayerSeq)
{
    ((::Graphic3d_GraphicDriver*)_NativeInstance)->ZLayers(*(::TColStd_SequenceOfInteger*)theLayerSeq->NativeInstance);
}

void Macad::Occt::Graphic3d_GraphicDriver::SetZLayerSettings(int theLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings)
{
    ((::Graphic3d_GraphicDriver*)_NativeInstance)->SetZLayerSettings(theLayerId, *(::Graphic3d_ZLayerSettings*)theSettings->NativeInstance);
}

Macad::Occt::Graphic3d_ZLayerSettings^ Macad::Occt::Graphic3d_GraphicDriver::ZLayerSettings(int theLayerId)
{
    ::Graphic3d_ZLayerSettings* _result = new ::Graphic3d_ZLayerSettings();
    *_result = (::Graphic3d_ZLayerSettings)((::Graphic3d_GraphicDriver*)_NativeInstance)->ZLayerSettings(theLayerId);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_ZLayerSettings(_result);
}

bool Macad::Occt::Graphic3d_GraphicDriver::ViewExists(Macad::Occt::Aspect_Window^ theWindow, Macad::Occt::Graphic3d_CView^ theView)
{
    Handle(::Graphic3d_CView) h_theView = theView->NativeInstance;
    bool _result = ((::Graphic3d_GraphicDriver*)_NativeInstance)->ViewExists(Handle(::Aspect_Window)(theWindow->NativeInstance), h_theView);
    theView->NativeInstance = h_theView.get();
    return _result;
}

int Macad::Occt::Graphic3d_GraphicDriver::NewIdentification()
{
    int _result = ((::Graphic3d_GraphicDriver*)_NativeInstance)->NewIdentification();
    return _result;
}

void Macad::Occt::Graphic3d_GraphicDriver::RemoveIdentification(int theId)
{
    ((::Graphic3d_GraphicDriver*)_NativeInstance)->RemoveIdentification(theId);
}

void Macad::Occt::Graphic3d_GraphicDriver::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_GraphicDriver*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Graphic3d_GraphicDriver::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_GraphicDriver*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::Graphic3d_GraphicDriver^ Macad::Occt::Graphic3d_GraphicDriver::CreateDowncasted(::Graphic3d_GraphicDriver* instance)
{
    return gcnew Macad::Occt::Graphic3d_GraphicDriver( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_StructureManager
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_StructureManager::Graphic3d_StructureManager(Macad::Occt::Graphic3d_GraphicDriver^ theDriver)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_StructureManager(Handle(::Graphic3d_GraphicDriver)(theDriver->NativeInstance));
}

void Macad::Occt::Graphic3d_StructureManager::Update(int theLayerId)
{
    ((::Graphic3d_StructureManager*)_NativeInstance)->Update(theLayerId);
}

void Macad::Occt::Graphic3d_StructureManager::Update()
{
    ((::Graphic3d_StructureManager*)_NativeInstance)->Update(Graphic3d_ZLayerId_UNKNOWN);
}

void Macad::Occt::Graphic3d_StructureManager::Remove()
{
    ((::Graphic3d_StructureManager*)_NativeInstance)->Remove();
}

void Macad::Occt::Graphic3d_StructureManager::Erase()
{
    ((::Graphic3d_StructureManager*)_NativeInstance)->Erase();
}

void Macad::Occt::Graphic3d_StructureManager::DisplayedStructures(Macad::Occt::Graphic3d_MapOfStructure^ SG)
{
    ((::Graphic3d_StructureManager*)_NativeInstance)->DisplayedStructures(*(::Graphic3d_MapOfStructure*)SG->NativeInstance);
}

void Macad::Occt::Graphic3d_StructureManager::HighlightedStructures(Macad::Occt::Graphic3d_MapOfStructure^ SG)
{
    ((::Graphic3d_StructureManager*)_NativeInstance)->HighlightedStructures(*(::Graphic3d_MapOfStructure*)SG->NativeInstance);
}

void Macad::Occt::Graphic3d_StructureManager::ReCompute(Macad::Occt::Graphic3d_Structure^ theStructure)
{
    ((::Graphic3d_StructureManager*)_NativeInstance)->ReCompute(Handle(::Graphic3d_Structure)(theStructure->NativeInstance));
}

void Macad::Occt::Graphic3d_StructureManager::ReCompute(Macad::Occt::Graphic3d_Structure^ theStructure, Macad::Occt::Graphic3d_DataStructureManager^ theProjector)
{
    ((::Graphic3d_StructureManager*)_NativeInstance)->ReCompute(Handle(::Graphic3d_Structure)(theStructure->NativeInstance), Handle(::Graphic3d_DataStructureManager)(theProjector->NativeInstance));
}

void Macad::Occt::Graphic3d_StructureManager::Clear(Macad::Occt::Graphic3d_Structure^ theStructure, bool theWithDestruction)
{
    ((::Graphic3d_StructureManager*)_NativeInstance)->Clear((::Graphic3d_Structure*)theStructure->NativeInstance, theWithDestruction);
}

void Macad::Occt::Graphic3d_StructureManager::Connect(Macad::Occt::Graphic3d_Structure^ theMother, Macad::Occt::Graphic3d_Structure^ theDaughter)
{
    ((::Graphic3d_StructureManager*)_NativeInstance)->Connect((::Graphic3d_Structure*)theMother->NativeInstance, (::Graphic3d_Structure*)theDaughter->NativeInstance);
}

void Macad::Occt::Graphic3d_StructureManager::Disconnect(Macad::Occt::Graphic3d_Structure^ theMother, Macad::Occt::Graphic3d_Structure^ theDaughter)
{
    ((::Graphic3d_StructureManager*)_NativeInstance)->Disconnect((::Graphic3d_Structure*)theMother->NativeInstance, (::Graphic3d_Structure*)theDaughter->NativeInstance);
}

void Macad::Occt::Graphic3d_StructureManager::Display(Macad::Occt::Graphic3d_Structure^ theStructure)
{
    ((::Graphic3d_StructureManager*)_NativeInstance)->Display(Handle(::Graphic3d_Structure)(theStructure->NativeInstance));
}

void Macad::Occt::Graphic3d_StructureManager::Erase(Macad::Occt::Graphic3d_Structure^ theStructure)
{
    ((::Graphic3d_StructureManager*)_NativeInstance)->Erase(Handle(::Graphic3d_Structure)(theStructure->NativeInstance));
}

void Macad::Occt::Graphic3d_StructureManager::Highlight(Macad::Occt::Graphic3d_Structure^ theStructure)
{
    ((::Graphic3d_StructureManager*)_NativeInstance)->Highlight(Handle(::Graphic3d_Structure)(theStructure->NativeInstance));
}

void Macad::Occt::Graphic3d_StructureManager::SetTransform(Macad::Occt::Graphic3d_Structure^ theStructure, Macad::Occt::TopLoc_Datum3D^ theTrsf)
{
    ((::Graphic3d_StructureManager*)_NativeInstance)->SetTransform(Handle(::Graphic3d_Structure)(theStructure->NativeInstance), Handle(::TopLoc_Datum3D)(theTrsf->NativeInstance));
}

void Macad::Occt::Graphic3d_StructureManager::ChangeDisplayPriority(Macad::Occt::Graphic3d_Structure^ theStructure, Macad::Occt::Graphic3d_DisplayPriority theOldPriority, Macad::Occt::Graphic3d_DisplayPriority theNewPriority)
{
    ((::Graphic3d_StructureManager*)_NativeInstance)->ChangeDisplayPriority(Handle(::Graphic3d_Structure)(theStructure->NativeInstance), (::Graphic3d_DisplayPriority)theOldPriority, (::Graphic3d_DisplayPriority)theNewPriority);
}

void Macad::Occt::Graphic3d_StructureManager::ChangeZLayer(Macad::Occt::Graphic3d_Structure^ theStructure, int theLayerId)
{
    ((::Graphic3d_StructureManager*)_NativeInstance)->ChangeZLayer(Handle(::Graphic3d_Structure)(theStructure->NativeInstance), theLayerId);
}

Macad::Occt::Graphic3d_GraphicDriver^ Macad::Occt::Graphic3d_StructureManager::GraphicDriver()
{
    Handle(::Graphic3d_GraphicDriver) _result = ((::Graphic3d_StructureManager*)_NativeInstance)->GraphicDriver();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_GraphicDriver::CreateDowncasted(_result.get());
}

int Macad::Occt::Graphic3d_StructureManager::Identification(Macad::Occt::Graphic3d_CView^ theView)
{
    int _result = ((::Graphic3d_StructureManager*)_NativeInstance)->Identification((::Graphic3d_CView*)theView->NativeInstance);
    return _result;
}

void Macad::Occt::Graphic3d_StructureManager::UnIdentification(Macad::Occt::Graphic3d_CView^ theView)
{
    ((::Graphic3d_StructureManager*)_NativeInstance)->UnIdentification((::Graphic3d_CView*)theView->NativeInstance);
}

Macad::Occt::Graphic3d_IndexedMapOfView^ Macad::Occt::Graphic3d_StructureManager::DefinedViews()
{
    ::Graphic3d_IndexedMapOfView* _result = new ::Graphic3d_IndexedMapOfView();
    *_result = (::Graphic3d_IndexedMapOfView)((::Graphic3d_StructureManager*)_NativeInstance)->DefinedViews();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_IndexedMapOfView(_result);
}

int Macad::Occt::Graphic3d_StructureManager::MaxNumOfViews()
{
    int _result = ((::Graphic3d_StructureManager*)_NativeInstance)->MaxNumOfViews();
    return _result;
}

Macad::Occt::Graphic3d_Structure^ Macad::Occt::Graphic3d_StructureManager::Identification(int AId)
{
    Handle(::Graphic3d_Structure) _result = ((::Graphic3d_StructureManager*)_NativeInstance)->Identification(AId);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Structure::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_StructureManager::UnHighlight(Macad::Occt::Graphic3d_Structure^ AStructure)
{
    ((::Graphic3d_StructureManager*)_NativeInstance)->UnHighlight(Handle(::Graphic3d_Structure)(AStructure->NativeInstance));
}

void Macad::Occt::Graphic3d_StructureManager::UnHighlight()
{
    ((::Graphic3d_StructureManager*)_NativeInstance)->UnHighlight();
}

void Macad::Occt::Graphic3d_StructureManager::RecomputeStructures()
{
    ((::Graphic3d_StructureManager*)_NativeInstance)->RecomputeStructures();
}

void Macad::Occt::Graphic3d_StructureManager::RegisterObject(Macad::Occt::Standard_Transient^ theObject, Macad::Occt::Graphic3d_ViewAffinity^ theAffinity)
{
    ((::Graphic3d_StructureManager*)_NativeInstance)->RegisterObject(Handle(::Standard_Transient)(theObject->NativeInstance), Handle(::Graphic3d_ViewAffinity)(theAffinity->NativeInstance));
}

void Macad::Occt::Graphic3d_StructureManager::UnregisterObject(Macad::Occt::Standard_Transient^ theObject)
{
    ((::Graphic3d_StructureManager*)_NativeInstance)->UnregisterObject(Handle(::Standard_Transient)(theObject->NativeInstance));
}

Macad::Occt::Graphic3d_ViewAffinity^ Macad::Occt::Graphic3d_StructureManager::ObjectAffinity(Macad::Occt::Standard_Transient^ theObject)
{
    Handle(::Graphic3d_ViewAffinity) _result = ((::Graphic3d_StructureManager*)_NativeInstance)->ObjectAffinity(Handle(::Standard_Transient)(theObject->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_ViewAffinity::CreateDowncasted(_result.get());
}

bool Macad::Occt::Graphic3d_StructureManager::IsDeviceLost()
{
    bool _result = ((::Graphic3d_StructureManager*)_NativeInstance)->IsDeviceLost();
    return _result;
}

void Macad::Occt::Graphic3d_StructureManager::SetDeviceLost()
{
    ((::Graphic3d_StructureManager*)_NativeInstance)->SetDeviceLost();
}

void Macad::Occt::Graphic3d_StructureManager::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_StructureManager*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Graphic3d_StructureManager::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_StructureManager*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::Graphic3d_StructureManager^ Macad::Occt::Graphic3d_StructureManager::CreateDowncasted(::Graphic3d_StructureManager* instance)
{
    return gcnew Macad::Occt::Graphic3d_StructureManager( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ValidatedCubeMapOrder
//---------------------------------------------------------------------



//---------------------------------------------------------------------
//  Class  Graphic3d_CubeMapOrder
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_CubeMapOrder::Graphic3d_CubeMapOrder()
    : Macad::Occt::BaseClass<::Graphic3d_CubeMapOrder>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_CubeMapOrder();
}

Macad::Occt::Graphic3d_CubeMapOrder::Graphic3d_CubeMapOrder(unsigned char thePosXLocation, unsigned char theNegXLocation, unsigned char thePosYLocation, unsigned char theNegYLocation, unsigned char thePosZLocation, unsigned char theNegZLocation)
    : Macad::Occt::BaseClass<::Graphic3d_CubeMapOrder>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_CubeMapOrder(thePosXLocation, theNegXLocation, thePosYLocation, theNegYLocation, thePosZLocation, theNegZLocation);
}

Macad::Occt::Graphic3d_CubeMapOrder::Graphic3d_CubeMapOrder(Macad::Occt::Graphic3d_ValidatedCubeMapOrder^ theOrder)
    : Macad::Occt::BaseClass<::Graphic3d_CubeMapOrder>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_CubeMapOrder(*(::Graphic3d_ValidatedCubeMapOrder*)theOrder->NativeInstance);
}

Macad::Occt::Graphic3d_CubeMapOrder^ Macad::Occt::Graphic3d_CubeMapOrder::Set(Macad::Occt::Graphic3d_CubeMapOrder^ theOrder)
{
    ::Graphic3d_CubeMapOrder* _result = new ::Graphic3d_CubeMapOrder();
    *_result = ((::Graphic3d_CubeMapOrder*)_NativeInstance)->Set(*(::Graphic3d_CubeMapOrder*)theOrder->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_CubeMapOrder(_result);
}

Macad::Occt::Graphic3d_ValidatedCubeMapOrder^ Macad::Occt::Graphic3d_CubeMapOrder::Validated()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_CubeMapOrder^ Macad::Occt::Graphic3d_CubeMapOrder::Set(Macad::Occt::Graphic3d_CubeMapSide theCubeMapSide, unsigned char theValue)
{
    ::Graphic3d_CubeMapOrder* _result = new ::Graphic3d_CubeMapOrder();
    *_result = ((::Graphic3d_CubeMapOrder*)_NativeInstance)->Set((::Graphic3d_CubeMapSide)theCubeMapSide, theValue);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_CubeMapOrder(_result);
}

Macad::Occt::Graphic3d_CubeMapOrder^ Macad::Occt::Graphic3d_CubeMapOrder::SetDefault()
{
    ::Graphic3d_CubeMapOrder* _result = new ::Graphic3d_CubeMapOrder();
    *_result = ((::Graphic3d_CubeMapOrder*)_NativeInstance)->SetDefault();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_CubeMapOrder(_result);
}

Macad::Occt::Graphic3d_CubeMapOrder^ Macad::Occt::Graphic3d_CubeMapOrder::Permute(Macad::Occt::Graphic3d_ValidatedCubeMapOrder^ anOrder)
{
    ::Graphic3d_CubeMapOrder* _result = new ::Graphic3d_CubeMapOrder();
    *_result = ((::Graphic3d_CubeMapOrder*)_NativeInstance)->Permute(*(::Graphic3d_ValidatedCubeMapOrder*)anOrder->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_CubeMapOrder(_result);
}

Macad::Occt::Graphic3d_CubeMapOrder^ Macad::Occt::Graphic3d_CubeMapOrder::Permuted(Macad::Occt::Graphic3d_ValidatedCubeMapOrder^ anOrder)
{
    ::Graphic3d_CubeMapOrder* _result = new ::Graphic3d_CubeMapOrder();
    *_result = ((::Graphic3d_CubeMapOrder*)_NativeInstance)->Permuted(*(::Graphic3d_ValidatedCubeMapOrder*)anOrder->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_CubeMapOrder(_result);
}

Macad::Occt::Graphic3d_CubeMapOrder^ Macad::Occt::Graphic3d_CubeMapOrder::Swap(Macad::Occt::Graphic3d_CubeMapSide theFirstSide, Macad::Occt::Graphic3d_CubeMapSide theSecondSide)
{
    ::Graphic3d_CubeMapOrder* _result = new ::Graphic3d_CubeMapOrder();
    *_result = ((::Graphic3d_CubeMapOrder*)_NativeInstance)->Swap((::Graphic3d_CubeMapSide)theFirstSide, (::Graphic3d_CubeMapSide)theSecondSide);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_CubeMapOrder(_result);
}

Macad::Occt::Graphic3d_CubeMapOrder^ Macad::Occt::Graphic3d_CubeMapOrder::Swapped(Macad::Occt::Graphic3d_CubeMapSide theFirstSide, Macad::Occt::Graphic3d_CubeMapSide theSecondSide)
{
    ::Graphic3d_CubeMapOrder* _result = new ::Graphic3d_CubeMapOrder();
    *_result = ((::Graphic3d_CubeMapOrder*)_NativeInstance)->Swapped((::Graphic3d_CubeMapSide)theFirstSide, (::Graphic3d_CubeMapSide)theSecondSide);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_CubeMapOrder(_result);
}

unsigned char Macad::Occt::Graphic3d_CubeMapOrder::Get(Macad::Occt::Graphic3d_CubeMapSide theCubeMapSide)
{
    unsigned char _result = ((::Graphic3d_CubeMapOrder*)_NativeInstance)->Get((::Graphic3d_CubeMapSide)theCubeMapSide);
    return _result;
}

Macad::Occt::Graphic3d_CubeMapOrder^ Macad::Occt::Graphic3d_CubeMapOrder::Clear()
{
    ::Graphic3d_CubeMapOrder* _result = new ::Graphic3d_CubeMapOrder();
    *_result = ((::Graphic3d_CubeMapOrder*)_NativeInstance)->Clear();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_CubeMapOrder(_result);
}

bool Macad::Occt::Graphic3d_CubeMapOrder::IsEmpty()
{
    bool _result = ((::Graphic3d_CubeMapOrder*)_NativeInstance)->IsEmpty();
    return _result;
}

bool Macad::Occt::Graphic3d_CubeMapOrder::HasRepetitions()
{
    bool _result = ((::Graphic3d_CubeMapOrder*)_NativeInstance)->HasRepetitions();
    return _result;
}

bool Macad::Occt::Graphic3d_CubeMapOrder::HasOverflows()
{
    bool _result = ((::Graphic3d_CubeMapOrder*)_NativeInstance)->HasOverflows();
    return _result;
}

bool Macad::Occt::Graphic3d_CubeMapOrder::IsValid()
{
    bool _result = ((::Graphic3d_CubeMapOrder*)_NativeInstance)->IsValid();
    return _result;
}

Macad::Occt::Graphic3d_ValidatedCubeMapOrder^ Macad::Occt::Graphic3d_CubeMapOrder::Default()
{
    throw gcnew System::NotImplementedException();
}



//---------------------------------------------------------------------
//  Class  Graphic3d_CubeMap
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_CubeMap::Graphic3d_CubeMap(Macad::Occt::TCollection_AsciiString^ theFileName, bool theToGenerateMipmaps)
    : Macad::Occt::Graphic3d_TextureMap(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Graphic3d_CubeMap::Graphic3d_CubeMap(Macad::Occt::TCollection_AsciiString^ theFileName)
    : Macad::Occt::Graphic3d_TextureMap(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Graphic3d_CubeMap::Graphic3d_CubeMap(Macad::Occt::Image_PixMap^ thePixmap, bool theToGenerateMipmaps)
    : Macad::Occt::Graphic3d_TextureMap(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Graphic3d_CubeMap::Graphic3d_CubeMap(Macad::Occt::Image_PixMap^ thePixmap)
    : Macad::Occt::Graphic3d_TextureMap(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Graphic3d_CubeMap::Graphic3d_CubeMap()
    : Macad::Occt::Graphic3d_TextureMap(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

bool Macad::Occt::Graphic3d_CubeMap::More()
{
    bool _result = ((::Graphic3d_CubeMap*)_NativeInstance)->More();
    return _result;
}

Macad::Occt::Graphic3d_CubeMapSide Macad::Occt::Graphic3d_CubeMap::CurrentSide()
{
    ::Graphic3d_CubeMapSide _result = ((::Graphic3d_CubeMap*)_NativeInstance)->CurrentSide();
    return (Macad::Occt::Graphic3d_CubeMapSide)_result;
}

void Macad::Occt::Graphic3d_CubeMap::Next()
{
    ((::Graphic3d_CubeMap*)_NativeInstance)->Next();
}

void Macad::Occt::Graphic3d_CubeMap::SetZInversion(bool theZIsInverted)
{
    ((::Graphic3d_CubeMap*)_NativeInstance)->SetZInversion(theZIsInverted);
}

bool Macad::Occt::Graphic3d_CubeMap::ZIsInverted()
{
    bool _result = ((::Graphic3d_CubeMap*)_NativeInstance)->ZIsInverted();
    return _result;
}

bool Macad::Occt::Graphic3d_CubeMap::HasMipmaps()
{
    bool _result = ((::Graphic3d_CubeMap*)_NativeInstance)->HasMipmaps();
    return _result;
}

void Macad::Occt::Graphic3d_CubeMap::SetMipmapsGeneration(bool theToGenerateMipmaps)
{
    ((::Graphic3d_CubeMap*)_NativeInstance)->SetMipmapsGeneration(theToGenerateMipmaps);
}

Macad::Occt::Image_CompressedPixMap^ Macad::Occt::Graphic3d_CubeMap::CompressedValue(Macad::Occt::Image_SupportedFormats^ theSupported)
{
    Handle(::Image_CompressedPixMap) _result = ((::Graphic3d_CubeMap*)_NativeInstance)->CompressedValue(Handle(::Image_SupportedFormats)(theSupported->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Image_CompressedPixMap::CreateDowncasted(_result.get());
}

Macad::Occt::Image_PixMap^ Macad::Occt::Graphic3d_CubeMap::Value(Macad::Occt::Image_SupportedFormats^ theSupported)
{
    Handle(::Image_PixMap) _result = ((::Graphic3d_CubeMap*)_NativeInstance)->Value(Handle(::Image_SupportedFormats)(theSupported->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Image_PixMap::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_CubeMap^ Macad::Occt::Graphic3d_CubeMap::Reset()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::Graphic3d_CubeMap^ Macad::Occt::Graphic3d_CubeMap::CreateDowncasted(::Graphic3d_CubeMap* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::Graphic3d_CubeMapPacked)))
        return Macad::Occt::Graphic3d_CubeMapPacked::CreateDowncasted((::Graphic3d_CubeMapPacked*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Graphic3d_CubeMapSeparate)))
        return Macad::Occt::Graphic3d_CubeMapSeparate::CreateDowncasted((::Graphic3d_CubeMapSeparate*)instance);
    
    return gcnew Macad::Occt::Graphic3d_CubeMap( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_CubeMapPacked
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_CubeMapPacked::Graphic3d_CubeMapPacked(Macad::Occt::TCollection_AsciiString^ theFileName, Macad::Occt::Graphic3d_ValidatedCubeMapOrder^ theOrder)
    : Macad::Occt::Graphic3d_CubeMap(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_CubeMapPacked(*(::TCollection_AsciiString*)theFileName->NativeInstance, *(::Graphic3d_ValidatedCubeMapOrder*)theOrder->NativeInstance);
}

Macad::Occt::Graphic3d_CubeMapPacked::Graphic3d_CubeMapPacked(Macad::Occt::TCollection_AsciiString^ theFileName)
    : Macad::Occt::Graphic3d_CubeMap(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_CubeMapPacked(*(::TCollection_AsciiString*)theFileName->NativeInstance, ::Graphic3d_CubeMapOrder::Default());
}

Macad::Occt::Graphic3d_CubeMapPacked::Graphic3d_CubeMapPacked(Macad::Occt::Image_PixMap^ theImage, Macad::Occt::Graphic3d_ValidatedCubeMapOrder^ theOrder)
    : Macad::Occt::Graphic3d_CubeMap(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_CubeMapPacked(Handle(::Image_PixMap)(theImage->NativeInstance), *(::Graphic3d_ValidatedCubeMapOrder*)theOrder->NativeInstance);
}

Macad::Occt::Graphic3d_CubeMapPacked::Graphic3d_CubeMapPacked(Macad::Occt::Image_PixMap^ theImage)
    : Macad::Occt::Graphic3d_CubeMap(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_CubeMapPacked(Handle(::Image_PixMap)(theImage->NativeInstance), ::Graphic3d_CubeMapOrder::Default());
}

Macad::Occt::Image_CompressedPixMap^ Macad::Occt::Graphic3d_CubeMapPacked::CompressedValue(Macad::Occt::Image_SupportedFormats^ theSupported)
{
    Handle(::Image_CompressedPixMap) _result = ((::Graphic3d_CubeMapPacked*)_NativeInstance)->CompressedValue(Handle(::Image_SupportedFormats)(theSupported->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Image_CompressedPixMap::CreateDowncasted(_result.get());
}

Macad::Occt::Image_PixMap^ Macad::Occt::Graphic3d_CubeMapPacked::Value(Macad::Occt::Image_SupportedFormats^ theSupported)
{
    Handle(::Image_PixMap) _result = ((::Graphic3d_CubeMapPacked*)_NativeInstance)->Value(Handle(::Image_SupportedFormats)(theSupported->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Image_PixMap::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_CubeMapPacked^ Macad::Occt::Graphic3d_CubeMapPacked::CreateDowncasted(::Graphic3d_CubeMapPacked* instance)
{
    return gcnew Macad::Occt::Graphic3d_CubeMapPacked( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_CubeMapSeparate
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_CubeMapSeparate::Graphic3d_CubeMapSeparate(Macad::Occt::TColStd_Array1OfAsciiString^ thePaths)
    : Macad::Occt::Graphic3d_CubeMap(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_CubeMapSeparate(*(::TColStd_Array1OfAsciiString*)thePaths->NativeInstance);
}

Macad::Occt::Image_CompressedPixMap^ Macad::Occt::Graphic3d_CubeMapSeparate::CompressedValue(Macad::Occt::Image_SupportedFormats^ theSupported)
{
    Handle(::Image_CompressedPixMap) _result = ((::Graphic3d_CubeMapSeparate*)_NativeInstance)->CompressedValue(Handle(::Image_SupportedFormats)(theSupported->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Image_CompressedPixMap::CreateDowncasted(_result.get());
}

Macad::Occt::Image_PixMap^ Macad::Occt::Graphic3d_CubeMapSeparate::Value(Macad::Occt::Image_SupportedFormats^ theSupported)
{
    Handle(::Image_PixMap) _result = ((::Graphic3d_CubeMapSeparate*)_NativeInstance)->Value(Handle(::Image_SupportedFormats)(theSupported->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Image_PixMap::CreateDowncasted(_result.get());
}

Macad::Occt::Image_PixMap^ Macad::Occt::Graphic3d_CubeMapSeparate::GetImage(Macad::Occt::Image_SupportedFormats^ parameter1)
{
    Handle(::Image_PixMap) _result = ((::Graphic3d_CubeMapSeparate*)_NativeInstance)->GetImage(Handle(::Image_SupportedFormats)(parameter1->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Image_PixMap::CreateDowncasted(_result.get());
}

bool Macad::Occt::Graphic3d_CubeMapSeparate::IsDone()
{
    bool _result = ((::Graphic3d_CubeMapSeparate*)_NativeInstance)->IsDone();
    return _result;
}

Macad::Occt::Graphic3d_CubeMapSeparate^ Macad::Occt::Graphic3d_CubeMapSeparate::CreateDowncasted(::Graphic3d_CubeMapSeparate* instance)
{
    return gcnew Macad::Occt::Graphic3d_CubeMapSeparate( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_CullingTool
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_CullingTool::Graphic3d_CullingTool()
    : Macad::Occt::BaseClass<::Graphic3d_CullingTool>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_CullingTool();
}

void Macad::Occt::Graphic3d_CullingTool::SetViewVolume(Macad::Occt::Graphic3d_Camera^ theCamera, Macad::Occt::Graphic3d_Mat4d^ theModelWorld)
{
    ((::Graphic3d_CullingTool*)_NativeInstance)->SetViewVolume(Handle(::Graphic3d_Camera)(theCamera->NativeInstance), *(::Graphic3d_Mat4d*)theModelWorld->NativeInstance);
}

void Macad::Occt::Graphic3d_CullingTool::SetViewVolume(Macad::Occt::Graphic3d_Camera^ theCamera)
{
    ((::Graphic3d_CullingTool*)_NativeInstance)->SetViewVolume(Handle(::Graphic3d_Camera)(theCamera->NativeInstance), ::Graphic3d_Mat4d());
}

void Macad::Occt::Graphic3d_CullingTool::SetViewportSize(int theViewportWidth, int theViewportHeight, double theResolutionRatio)
{
    ((::Graphic3d_CullingTool*)_NativeInstance)->SetViewportSize(theViewportWidth, theViewportHeight, theResolutionRatio);
}

void Macad::Occt::Graphic3d_CullingTool::CacheClipPtsProjections()
{
    ((::Graphic3d_CullingTool*)_NativeInstance)->CacheClipPtsProjections();
}

Macad::Occt::Graphic3d_Camera^ Macad::Occt::Graphic3d_CullingTool::Camera()
{
    Handle(::Graphic3d_Camera) _result = ((::Graphic3d_CullingTool*)_NativeInstance)->Camera();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Camera::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_Mat4d^ Macad::Occt::Graphic3d_CullingTool::ProjectionMatrix()
{
    ::Graphic3d_Mat4d* _result = new ::Graphic3d_Mat4d();
    *_result = (::Graphic3d_Mat4d)((::Graphic3d_CullingTool*)_NativeInstance)->ProjectionMatrix();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Mat4d(_result);
}

Macad::Occt::Graphic3d_Mat4d^ Macad::Occt::Graphic3d_CullingTool::WorldViewMatrix()
{
    ::Graphic3d_Mat4d* _result = new ::Graphic3d_Mat4d();
    *_result = (::Graphic3d_Mat4d)((::Graphic3d_CullingTool*)_NativeInstance)->WorldViewMatrix();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Mat4d(_result);
}

int Macad::Occt::Graphic3d_CullingTool::ViewportWidth()
{
    int _result = ((::Graphic3d_CullingTool*)_NativeInstance)->ViewportWidth();
    return _result;
}

int Macad::Occt::Graphic3d_CullingTool::ViewportHeight()
{
    int _result = ((::Graphic3d_CullingTool*)_NativeInstance)->ViewportHeight();
    return _result;
}

Macad::Occt::Graphic3d_WorldViewProjState^ Macad::Occt::Graphic3d_CullingTool::WorldViewProjState()
{
    ::Graphic3d_WorldViewProjState* _result = new ::Graphic3d_WorldViewProjState();
    *_result = (::Graphic3d_WorldViewProjState)((::Graphic3d_CullingTool*)_NativeInstance)->WorldViewProjState();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_WorldViewProjState(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_CullingTool::CameraEye()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_CullingTool*)_NativeInstance)->CameraEye();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

Macad::Occt::Graphic3d_Vec3d^ Macad::Occt::Graphic3d_CullingTool::CameraDirection()
{
    ::Graphic3d_Vec3d* _result = new ::Graphic3d_Vec3d();
    *_result = (::Graphic3d_Vec3d)((::Graphic3d_CullingTool*)_NativeInstance)->CameraDirection();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec3d(_result);
}

double Macad::Occt::Graphic3d_CullingTool::SignedPlanePointDistance(Macad::Occt::Graphic3d_Vec4d^ theNormal, Macad::Occt::Graphic3d_Vec4d^ thePnt)
{
    double _result = ((::Graphic3d_CullingTool*)_NativeInstance)->SignedPlanePointDistance(*(::Graphic3d_Vec4d*)theNormal->NativeInstance, *(::Graphic3d_Vec4d*)thePnt->NativeInstance);
    return _result;
}

bool Macad::Occt::Graphic3d_CullingTool::IsOutFrustum(Macad::Occt::Graphic3d_Vec3d^ theMinPnt, Macad::Occt::Graphic3d_Vec3d^ theMaxPnt, bool% theIsInside)
{
    pin_ptr<bool> pp_theIsInside = &theIsInside;
    bool _result = ((::Graphic3d_CullingTool*)_NativeInstance)->IsOutFrustum(*(::Graphic3d_Vec3d*)theMinPnt->NativeInstance, *(::Graphic3d_Vec3d*)theMaxPnt->NativeInstance, (bool*)pp_theIsInside);
    return _result;
}

bool Macad::Occt::Graphic3d_CullingTool::IsOutFrustum(Macad::Occt::Graphic3d_Vec3d^ theMinPnt, Macad::Occt::Graphic3d_Vec3d^ theMaxPnt)
{
    bool _result = ((::Graphic3d_CullingTool*)_NativeInstance)->IsOutFrustum(*(::Graphic3d_Vec3d*)theMinPnt->NativeInstance, *(::Graphic3d_Vec3d*)theMaxPnt->NativeInstance, nullptr);
    return _result;
}



//---------------------------------------------------------------------
//  Class  Graphic3d_DataStructureManager
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_DataStructureManager^ Macad::Occt::Graphic3d_DataStructureManager::CreateDowncasted(::Graphic3d_DataStructureManager* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::Graphic3d_CView)))
        return Macad::Occt::Graphic3d_CView::CreateDowncasted((::Graphic3d_CView*)instance);
    
    return gcnew Macad::Occt::Graphic3d_DataStructureManager( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_CView
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_CView::Graphic3d_CView(Macad::Occt::Graphic3d_StructureManager^ theMgr)
    : Macad::Occt::Graphic3d_DataStructureManager(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

int Macad::Occt::Graphic3d_CView::Identification()
{
    int _result = ((::Graphic3d_CView*)_NativeInstance)->Identification();
    return _result;
}

void Macad::Occt::Graphic3d_CView::Activate()
{
    ((::Graphic3d_CView*)_NativeInstance)->Activate();
}

void Macad::Occt::Graphic3d_CView::Deactivate()
{
    ((::Graphic3d_CView*)_NativeInstance)->Deactivate();
}

bool Macad::Occt::Graphic3d_CView::IsActive()
{
    bool _result = ((::Graphic3d_CView*)_NativeInstance)->IsActive();
    return _result;
}

void Macad::Occt::Graphic3d_CView::Remove()
{
    ((::Graphic3d_CView*)_NativeInstance)->Remove();
}

bool Macad::Occt::Graphic3d_CView::IsRemoved()
{
    bool _result = ((::Graphic3d_CView*)_NativeInstance)->IsRemoved();
    return _result;
}

Macad::Occt::Graphic3d_Camera^ Macad::Occt::Graphic3d_CView::Camera()
{
    Handle(::Graphic3d_Camera) _result = ((::Graphic3d_CView*)_NativeInstance)->Camera();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Camera::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_CView::SetCamera(Macad::Occt::Graphic3d_Camera^ theCamera)
{
    ((::Graphic3d_CView*)_NativeInstance)->SetCamera(Handle(::Graphic3d_Camera)(theCamera->NativeInstance));
}

bool Macad::Occt::Graphic3d_CView::ToFlipOutput()
{
    bool _result = ((::Graphic3d_CView*)_NativeInstance)->ToFlipOutput();
    return _result;
}

void Macad::Occt::Graphic3d_CView::SetToFlipOutput(bool parameter1)
{
    ((::Graphic3d_CView*)_NativeInstance)->SetToFlipOutput(parameter1);
}

Macad::Occt::Graphic3d_TypeOfShadingModel Macad::Occt::Graphic3d_CView::ShadingModel()
{
    ::Graphic3d_TypeOfShadingModel _result = ((::Graphic3d_CView*)_NativeInstance)->ShadingModel();
    return (Macad::Occt::Graphic3d_TypeOfShadingModel)_result;
}

void Macad::Occt::Graphic3d_CView::SetShadingModel(Macad::Occt::Graphic3d_TypeOfShadingModel theModel)
{
    ((::Graphic3d_CView*)_NativeInstance)->SetShadingModel((::Graphic3d_TypeOfShadingModel)theModel);
}

Macad::Occt::Graphic3d_TypeOfBackfacingModel Macad::Occt::Graphic3d_CView::BackfacingModel()
{
    ::Graphic3d_TypeOfBackfacingModel _result = ((::Graphic3d_CView*)_NativeInstance)->BackfacingModel();
    return (Macad::Occt::Graphic3d_TypeOfBackfacingModel)_result;
}

void Macad::Occt::Graphic3d_CView::SetBackfacingModel(Macad::Occt::Graphic3d_TypeOfBackfacingModel theModel)
{
    ((::Graphic3d_CView*)_NativeInstance)->SetBackfacingModel((::Graphic3d_TypeOfBackfacingModel)theModel);
}

Macad::Occt::Graphic3d_TypeOfVisualization Macad::Occt::Graphic3d_CView::VisualizationType()
{
    ::Graphic3d_TypeOfVisualization _result = ((::Graphic3d_CView*)_NativeInstance)->VisualizationType();
    return (Macad::Occt::Graphic3d_TypeOfVisualization)_result;
}

void Macad::Occt::Graphic3d_CView::SetVisualizationType(Macad::Occt::Graphic3d_TypeOfVisualization theType)
{
    ((::Graphic3d_CView*)_NativeInstance)->SetVisualizationType((::Graphic3d_TypeOfVisualization)theType);
}

int Macad::Occt::Graphic3d_CView::ZLayerTarget()
{
    int _result = ((::Graphic3d_CView*)_NativeInstance)->ZLayerTarget();
    return _result;
}

void Macad::Occt::Graphic3d_CView::SetZLayerTarget(int theTarget)
{
    ((::Graphic3d_CView*)_NativeInstance)->SetZLayerTarget(theTarget);
}

bool Macad::Occt::Graphic3d_CView::ZLayerRedrawMode()
{
    bool _result = ((::Graphic3d_CView*)_NativeInstance)->ZLayerRedrawMode();
    return _result;
}

void Macad::Occt::Graphic3d_CView::SetZLayerRedrawMode(bool theMode)
{
    ((::Graphic3d_CView*)_NativeInstance)->SetZLayerRedrawMode(theMode);
}

void Macad::Occt::Graphic3d_CView::SetComputedMode(bool theMode)
{
    ((::Graphic3d_CView*)_NativeInstance)->SetComputedMode(theMode);
}

bool Macad::Occt::Graphic3d_CView::ComputedMode()
{
    bool _result = ((::Graphic3d_CView*)_NativeInstance)->ComputedMode();
    return _result;
}

void Macad::Occt::Graphic3d_CView::ReCompute(Macad::Occt::Graphic3d_Structure^ theStructure)
{
    ((::Graphic3d_CView*)_NativeInstance)->ReCompute(Handle(::Graphic3d_Structure)(theStructure->NativeInstance));
}

void Macad::Occt::Graphic3d_CView::Update(int theLayerId)
{
    ((::Graphic3d_CView*)_NativeInstance)->Update(theLayerId);
}

void Macad::Occt::Graphic3d_CView::Update()
{
    ((::Graphic3d_CView*)_NativeInstance)->Update(Graphic3d_ZLayerId_UNKNOWN);
}

void Macad::Occt::Graphic3d_CView::Compute()
{
    ((::Graphic3d_CView*)_NativeInstance)->Compute();
}

void Macad::Occt::Graphic3d_CView::DisplayedStructures(Macad::Occt::Graphic3d_MapOfStructure^ theStructures)
{
    ((::Graphic3d_CView*)_NativeInstance)->DisplayedStructures(*(::Graphic3d_MapOfStructure*)theStructures->NativeInstance);
}

int Macad::Occt::Graphic3d_CView::NumberOfDisplayedStructures()
{
    int _result = ((::Graphic3d_CView*)_NativeInstance)->NumberOfDisplayedStructures();
    return _result;
}

bool Macad::Occt::Graphic3d_CView::IsComputed(int theStructId, Macad::Occt::Graphic3d_Structure^ theComputedStruct)
{
    Handle(::Graphic3d_Structure) h_theComputedStruct = theComputedStruct->NativeInstance;
    bool _result = ((::Graphic3d_CView*)_NativeInstance)->IsComputed(theStructId, h_theComputedStruct);
    theComputedStruct->NativeInstance = h_theComputedStruct.get();
    return _result;
}

Macad::Occt::Bnd_Box^ Macad::Occt::Graphic3d_CView::MinMaxValues(bool theToIncludeAuxiliary)
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = ((::Graphic3d_CView*)_NativeInstance)->MinMaxValues(theToIncludeAuxiliary);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Graphic3d_CView::MinMaxValues()
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = ((::Graphic3d_CView*)_NativeInstance)->MinMaxValues(false);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Graphic3d_CView::MinMaxValues(Macad::Occt::Graphic3d_MapOfStructure^ theSet, bool theToIncludeAuxiliary)
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = ((::Graphic3d_CView*)_NativeInstance)->MinMaxValues(*(::Graphic3d_MapOfStructure*)theSet->NativeInstance, theToIncludeAuxiliary);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Bnd_Box^ Macad::Occt::Graphic3d_CView::MinMaxValues(Macad::Occt::Graphic3d_MapOfStructure^ theSet)
{
    ::Bnd_Box* _result = new ::Bnd_Box();
    *_result = ((::Graphic3d_CView*)_NativeInstance)->MinMaxValues(*(::Graphic3d_MapOfStructure*)theSet->NativeInstance, false);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Box(_result);
}

Macad::Occt::Graphic3d_StructureManager^ Macad::Occt::Graphic3d_CView::StructureManager()
{
    Handle(::Graphic3d_StructureManager) _result = ((::Graphic3d_CView*)_NativeInstance)->StructureManager();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_StructureManager::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_CView::Redraw()
{
    ((::Graphic3d_CView*)_NativeInstance)->Redraw();
}

void Macad::Occt::Graphic3d_CView::RedrawImmediate()
{
    ((::Graphic3d_CView*)_NativeInstance)->RedrawImmediate();
}

void Macad::Occt::Graphic3d_CView::Invalidate()
{
    ((::Graphic3d_CView*)_NativeInstance)->Invalidate();
}

bool Macad::Occt::Graphic3d_CView::IsInvalidated()
{
    bool _result = ((::Graphic3d_CView*)_NativeInstance)->IsInvalidated();
    return _result;
}

void Macad::Occt::Graphic3d_CView::Resized()
{
    ((::Graphic3d_CView*)_NativeInstance)->Resized();
}

bool Macad::Occt::Graphic3d_CView::SetImmediateModeDrawToFront(bool theDrawToFrontBuffer)
{
    bool _result = ((::Graphic3d_CView*)_NativeInstance)->SetImmediateModeDrawToFront(theDrawToFrontBuffer);
    return _result;
}

void Macad::Occt::Graphic3d_CView::SetWindow(Macad::Occt::Graphic3d_CView^ theParentVIew, Macad::Occt::Aspect_Window^ theWindow, System::IntPtr theContext)
{
    ((::Graphic3d_CView*)_NativeInstance)->SetWindow(Handle(::Graphic3d_CView)(theParentVIew->NativeInstance), Handle(::Aspect_Window)(theWindow->NativeInstance), theContext.ToPointer());
}

Macad::Occt::Aspect_Window^ Macad::Occt::Graphic3d_CView::Window()
{
    Handle(::Aspect_Window) _result = ((::Graphic3d_CView*)_NativeInstance)->Window();
    return _result.IsNull() ? nullptr : Macad::Occt::Aspect_Window::CreateDowncasted(_result.get());
}

bool Macad::Occt::Graphic3d_CView::IsDefined()
{
    bool _result = ((::Graphic3d_CView*)_NativeInstance)->IsDefined();
    return _result;
}

bool Macad::Occt::Graphic3d_CView::BufferDump(Macad::Occt::Image_PixMap^ theImage, Macad::Occt::Graphic3d_BufferType theBufferType)
{
    pin_ptr<Macad::Occt::Graphic3d_BufferType> pp_theBufferType = &theBufferType;
    bool _result = ((::Graphic3d_CView*)_NativeInstance)->BufferDump(*(::Image_PixMap*)theImage->NativeInstance, *(::Graphic3d_BufferType*)pp_theBufferType);
    return _result;
}

bool Macad::Occt::Graphic3d_CView::ShadowMapDump(Macad::Occt::Image_PixMap^ theImage, Macad::Occt::TCollection_AsciiString^ theLightName)
{
    bool _result = ((::Graphic3d_CView*)_NativeInstance)->ShadowMapDump(*(::Image_PixMap*)theImage->NativeInstance, *(::TCollection_AsciiString*)theLightName->NativeInstance);
    return _result;
}

void Macad::Occt::Graphic3d_CView::InvalidateBVHData(int theLayerId)
{
    ((::Graphic3d_CView*)_NativeInstance)->InvalidateBVHData(theLayerId);
}

void Macad::Occt::Graphic3d_CView::InsertLayerBefore(int theNewLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings, int theLayerAfter)
{
    ((::Graphic3d_CView*)_NativeInstance)->InsertLayerBefore(theNewLayerId, *(::Graphic3d_ZLayerSettings*)theSettings->NativeInstance, theLayerAfter);
}

void Macad::Occt::Graphic3d_CView::InsertLayerAfter(int theNewLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings, int theLayerBefore)
{
    ((::Graphic3d_CView*)_NativeInstance)->InsertLayerAfter(theNewLayerId, *(::Graphic3d_ZLayerSettings*)theSettings->NativeInstance, theLayerBefore);
}

int Macad::Occt::Graphic3d_CView::ZLayerMax()
{
    int _result = ((::Graphic3d_CView*)_NativeInstance)->ZLayerMax();
    return _result;
}

void Macad::Occt::Graphic3d_CView::InvalidateZLayerBoundingBox(int theLayerId)
{
    ((::Graphic3d_CView*)_NativeInstance)->InvalidateZLayerBoundingBox(theLayerId);
}

void Macad::Occt::Graphic3d_CView::RemoveZLayer(int theLayerId)
{
    ((::Graphic3d_CView*)_NativeInstance)->RemoveZLayer(theLayerId);
}

void Macad::Occt::Graphic3d_CView::SetZLayerSettings(int theLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings)
{
    ((::Graphic3d_CView*)_NativeInstance)->SetZLayerSettings(theLayerId, *(::Graphic3d_ZLayerSettings*)theSettings->NativeInstance);
}

double Macad::Occt::Graphic3d_CView::ConsiderZoomPersistenceObjects()
{
    double _result = ((::Graphic3d_CView*)_NativeInstance)->ConsiderZoomPersistenceObjects();
    return _result;
}

Macad::Occt::Standard_Transient^ Macad::Occt::Graphic3d_CView::FBO()
{
    Handle(::Standard_Transient) _result = ((::Graphic3d_CView*)_NativeInstance)->FBO();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_CView::SetFBO(Macad::Occt::Standard_Transient^ theFbo)
{
    ((::Graphic3d_CView*)_NativeInstance)->SetFBO(Handle(::Standard_Transient)(theFbo->NativeInstance));
}

Macad::Occt::Standard_Transient^ Macad::Occt::Graphic3d_CView::FBOCreate(int theWidth, int theHeight)
{
    Handle(::Standard_Transient) _result = ((::Graphic3d_CView*)_NativeInstance)->FBOCreate(theWidth, theHeight);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Transient::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_CView::FBORelease(Macad::Occt::Standard_Transient^ theFbo)
{
    Handle(::Standard_Transient) h_theFbo = theFbo->NativeInstance;
    ((::Graphic3d_CView*)_NativeInstance)->FBORelease(h_theFbo);
    theFbo->NativeInstance = h_theFbo.get();
}

void Macad::Occt::Graphic3d_CView::FBOGetDimensions(Macad::Occt::Standard_Transient^ theFbo, int% theWidth, int% theHeight, int% theWidthMax, int% theHeightMax)
{
    pin_ptr<int> pp_theWidth = &theWidth;
    pin_ptr<int> pp_theHeight = &theHeight;
    pin_ptr<int> pp_theWidthMax = &theWidthMax;
    pin_ptr<int> pp_theHeightMax = &theHeightMax;
    ((::Graphic3d_CView*)_NativeInstance)->FBOGetDimensions(Handle(::Standard_Transient)(theFbo->NativeInstance), *(int*)pp_theWidth, *(int*)pp_theHeight, *(int*)pp_theWidthMax, *(int*)pp_theHeightMax);
}

void Macad::Occt::Graphic3d_CView::FBOChangeViewport(Macad::Occt::Standard_Transient^ theFbo, int theWidth, int theHeight)
{
    ((::Graphic3d_CView*)_NativeInstance)->FBOChangeViewport(Handle(::Standard_Transient)(theFbo->NativeInstance), theWidth, theHeight);
}

void Macad::Occt::Graphic3d_CView::CopySettings(Macad::Occt::Graphic3d_CView^ theOther)
{
    ((::Graphic3d_CView*)_NativeInstance)->CopySettings(Handle(::Graphic3d_CView)(theOther->NativeInstance));
}

Macad::Occt::Graphic3d_RenderingParams^ Macad::Occt::Graphic3d_CView::RenderingParams()
{
    ::Graphic3d_RenderingParams* _result = new ::Graphic3d_RenderingParams();
    *_result = (::Graphic3d_RenderingParams)((::Graphic3d_CView*)_NativeInstance)->RenderingParams();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_RenderingParams(_result);
}

Macad::Occt::Graphic3d_RenderingParams^ Macad::Occt::Graphic3d_CView::ChangeRenderingParams()
{
    ::Graphic3d_RenderingParams* _result = new ::Graphic3d_RenderingParams();
    *_result = ((::Graphic3d_CView*)_NativeInstance)->ChangeRenderingParams();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_RenderingParams(_result);
}

Macad::Occt::Aspect_Background^ Macad::Occt::Graphic3d_CView::Background()
{
    ::Aspect_Background* _result = new ::Aspect_Background();
    *_result = ((::Graphic3d_CView*)_NativeInstance)->Background();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_Background(_result);
}

void Macad::Occt::Graphic3d_CView::SetBackground(Macad::Occt::Aspect_Background^ theBackground)
{
    ((::Graphic3d_CView*)_NativeInstance)->SetBackground(*(::Aspect_Background*)theBackground->NativeInstance);
}

Macad::Occt::Aspect_GradientBackground^ Macad::Occt::Graphic3d_CView::GradientBackground()
{
    ::Aspect_GradientBackground* _result = new ::Aspect_GradientBackground();
    *_result = ((::Graphic3d_CView*)_NativeInstance)->GradientBackground();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_GradientBackground(_result);
}

void Macad::Occt::Graphic3d_CView::SetGradientBackground(Macad::Occt::Aspect_GradientBackground^ theBackground)
{
    ((::Graphic3d_CView*)_NativeInstance)->SetGradientBackground(*(::Aspect_GradientBackground*)theBackground->NativeInstance);
}

Macad::Occt::Graphic3d_TextureMap^ Macad::Occt::Graphic3d_CView::BackgroundImage()
{
    Handle(::Graphic3d_TextureMap) _result = ((::Graphic3d_CView*)_NativeInstance)->BackgroundImage();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_TextureMap::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_CubeMap^ Macad::Occt::Graphic3d_CView::BackgroundCubeMap()
{
    Handle(::Graphic3d_CubeMap) _result = ((::Graphic3d_CView*)_NativeInstance)->BackgroundCubeMap();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_CubeMap::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_CubeMap^ Macad::Occt::Graphic3d_CView::IBLCubeMap()
{
    Handle(::Graphic3d_CubeMap) _result = ((::Graphic3d_CView*)_NativeInstance)->IBLCubeMap();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_CubeMap::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_CView::SetBackgroundImage(Macad::Occt::Graphic3d_TextureMap^ theTextureMap, bool theToUpdatePBREnv)
{
    ((::Graphic3d_CView*)_NativeInstance)->SetBackgroundImage(Handle(::Graphic3d_TextureMap)(theTextureMap->NativeInstance), theToUpdatePBREnv);
}

void Macad::Occt::Graphic3d_CView::SetBackgroundImage(Macad::Occt::Graphic3d_TextureMap^ theTextureMap)
{
    ((::Graphic3d_CView*)_NativeInstance)->SetBackgroundImage(Handle(::Graphic3d_TextureMap)(theTextureMap->NativeInstance), true);
}

Macad::Occt::Aspect_FillMethod Macad::Occt::Graphic3d_CView::BackgroundImageStyle()
{
    ::Aspect_FillMethod _result = ((::Graphic3d_CView*)_NativeInstance)->BackgroundImageStyle();
    return (Macad::Occt::Aspect_FillMethod)_result;
}

void Macad::Occt::Graphic3d_CView::SetBackgroundImageStyle(Macad::Occt::Aspect_FillMethod theFillStyle)
{
    ((::Graphic3d_CView*)_NativeInstance)->SetBackgroundImageStyle((::Aspect_FillMethod)theFillStyle);
}

Macad::Occt::Graphic3d_TypeOfBackground Macad::Occt::Graphic3d_CView::BackgroundType()
{
    ::Graphic3d_TypeOfBackground _result = ((::Graphic3d_CView*)_NativeInstance)->BackgroundType();
    return (Macad::Occt::Graphic3d_TypeOfBackground)_result;
}

void Macad::Occt::Graphic3d_CView::SetBackgroundType(Macad::Occt::Graphic3d_TypeOfBackground theType)
{
    ((::Graphic3d_CView*)_NativeInstance)->SetBackgroundType((::Graphic3d_TypeOfBackground)theType);
}

Macad::Occt::Aspect_SkydomeBackground^ Macad::Occt::Graphic3d_CView::BackgroundSkydome()
{
    ::Aspect_SkydomeBackground* _result = new ::Aspect_SkydomeBackground();
    *_result = (::Aspect_SkydomeBackground)((::Graphic3d_CView*)_NativeInstance)->BackgroundSkydome();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Aspect_SkydomeBackground(_result);
}

void Macad::Occt::Graphic3d_CView::SetBackgroundSkydome(Macad::Occt::Aspect_SkydomeBackground^ theAspect, bool theToUpdatePBREnv)
{
    ((::Graphic3d_CView*)_NativeInstance)->SetBackgroundSkydome(*(::Aspect_SkydomeBackground*)theAspect->NativeInstance, theToUpdatePBREnv);
}

void Macad::Occt::Graphic3d_CView::SetBackgroundSkydome(Macad::Occt::Aspect_SkydomeBackground^ theAspect)
{
    ((::Graphic3d_CView*)_NativeInstance)->SetBackgroundSkydome(*(::Aspect_SkydomeBackground*)theAspect->NativeInstance, true);
}

void Macad::Occt::Graphic3d_CView::SetImageBasedLighting(bool theToEnableIBL)
{
    ((::Graphic3d_CView*)_NativeInstance)->SetImageBasedLighting(theToEnableIBL);
}

Macad::Occt::Graphic3d_TextureEnv^ Macad::Occt::Graphic3d_CView::TextureEnv()
{
    Handle(::Graphic3d_TextureEnv) _result = ((::Graphic3d_CView*)_NativeInstance)->TextureEnv();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_TextureEnv::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_CView::SetTextureEnv(Macad::Occt::Graphic3d_TextureEnv^ theTextureEnv)
{
    ((::Graphic3d_CView*)_NativeInstance)->SetTextureEnv(Handle(::Graphic3d_TextureEnv)(theTextureEnv->NativeInstance));
}

Macad::Occt::Graphic3d_LightSet^ Macad::Occt::Graphic3d_CView::Lights()
{
    Handle(::Graphic3d_LightSet) _result = ((::Graphic3d_CView*)_NativeInstance)->Lights();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_LightSet::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_CView::SetLights(Macad::Occt::Graphic3d_LightSet^ theLights)
{
    ((::Graphic3d_CView*)_NativeInstance)->SetLights(Handle(::Graphic3d_LightSet)(theLights->NativeInstance));
}

Macad::Occt::Graphic3d_SequenceOfHClipPlane^ Macad::Occt::Graphic3d_CView::ClipPlanes()
{
    Handle(::Graphic3d_SequenceOfHClipPlane) _result = ((::Graphic3d_CView*)_NativeInstance)->ClipPlanes();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_SequenceOfHClipPlane::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_CView::SetClipPlanes(Macad::Occt::Graphic3d_SequenceOfHClipPlane^ thePlanes)
{
    ((::Graphic3d_CView*)_NativeInstance)->SetClipPlanes(Handle(::Graphic3d_SequenceOfHClipPlane)(thePlanes->NativeInstance));
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_CView::StatisticInformation()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::Graphic3d_CView*)_NativeInstance)->StatisticInformation();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

double Macad::Occt::Graphic3d_CView::UnitFactor()
{
    double _result = ((::Graphic3d_CView*)_NativeInstance)->UnitFactor();
    return _result;
}

void Macad::Occt::Graphic3d_CView::SetUnitFactor(double theFactor)
{
    ((::Graphic3d_CView*)_NativeInstance)->SetUnitFactor(theFactor);
}

Macad::Occt::Aspect_XRSession^ Macad::Occt::Graphic3d_CView::XRSession()
{
    Handle(::Aspect_XRSession) _result = ((::Graphic3d_CView*)_NativeInstance)->XRSession();
    return _result.IsNull() ? nullptr : Macad::Occt::Aspect_XRSession::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_CView::SetXRSession(Macad::Occt::Aspect_XRSession^ theSession)
{
    ((::Graphic3d_CView*)_NativeInstance)->SetXRSession(Handle(::Aspect_XRSession)(theSession->NativeInstance));
}

bool Macad::Occt::Graphic3d_CView::IsActiveXR()
{
    bool _result = ((::Graphic3d_CView*)_NativeInstance)->IsActiveXR();
    return _result;
}

bool Macad::Occt::Graphic3d_CView::InitXR()
{
    bool _result = ((::Graphic3d_CView*)_NativeInstance)->InitXR();
    return _result;
}

void Macad::Occt::Graphic3d_CView::ReleaseXR()
{
    ((::Graphic3d_CView*)_NativeInstance)->ReleaseXR();
}

void Macad::Occt::Graphic3d_CView::ProcessXRInput()
{
    ((::Graphic3d_CView*)_NativeInstance)->ProcessXRInput();
}

void Macad::Occt::Graphic3d_CView::SetupXRPosedCamera()
{
    ((::Graphic3d_CView*)_NativeInstance)->SetupXRPosedCamera();
}

void Macad::Occt::Graphic3d_CView::UnsetXRPosedCamera()
{
    ((::Graphic3d_CView*)_NativeInstance)->UnsetXRPosedCamera();
}

Macad::Occt::Graphic3d_Camera^ Macad::Occt::Graphic3d_CView::PosedXRCamera()
{
    Handle(::Graphic3d_Camera) _result = ((::Graphic3d_CView*)_NativeInstance)->PosedXRCamera();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Camera::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_CView::SetPosedXRCamera(Macad::Occt::Graphic3d_Camera^ theCamera)
{
    ((::Graphic3d_CView*)_NativeInstance)->SetPosedXRCamera(Handle(::Graphic3d_Camera)(theCamera->NativeInstance));
}

Macad::Occt::Graphic3d_Camera^ Macad::Occt::Graphic3d_CView::BaseXRCamera()
{
    Handle(::Graphic3d_Camera) _result = ((::Graphic3d_CView*)_NativeInstance)->BaseXRCamera();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Camera::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_CView::SetBaseXRCamera(Macad::Occt::Graphic3d_Camera^ theCamera)
{
    ((::Graphic3d_CView*)_NativeInstance)->SetBaseXRCamera(Handle(::Graphic3d_Camera)(theCamera->NativeInstance));
}

Macad::Occt::Trsf Macad::Occt::Graphic3d_CView::PoseXRToWorld(Macad::Occt::Trsf thePoseXR)
{
    pin_ptr<Macad::Occt::Trsf> pp_thePoseXR = &thePoseXR;
    ::gp_Trsf _nativeResult = ((::Graphic3d_CView*)_NativeInstance)->PoseXRToWorld(*(gp_Trsf*)pp_thePoseXR);
    return Macad::Occt::Trsf(_nativeResult);
}

Macad::Occt::Ax1 Macad::Occt::Graphic3d_CView::ViewAxisInWorld(Macad::Occt::Trsf thePoseXR)
{
    pin_ptr<Macad::Occt::Trsf> pp_thePoseXR = &thePoseXR;
    ::gp_Ax1 _nativeResult = ((::Graphic3d_CView*)_NativeInstance)->ViewAxisInWorld(*(gp_Trsf*)pp_thePoseXR);
    return Macad::Occt::Ax1(_nativeResult);
}

void Macad::Occt::Graphic3d_CView::SynchronizeXRBaseToPosedCamera()
{
    ((::Graphic3d_CView*)_NativeInstance)->SynchronizeXRBaseToPosedCamera();
}

void Macad::Occt::Graphic3d_CView::SynchronizeXRPosedToBaseCamera()
{
    ((::Graphic3d_CView*)_NativeInstance)->SynchronizeXRPosedToBaseCamera();
}

void Macad::Occt::Graphic3d_CView::ComputeXRPosedCameraFromBase(Macad::Occt::Graphic3d_Camera^ theCam, Macad::Occt::Trsf theXRTrsf)
{
    pin_ptr<Macad::Occt::Trsf> pp_theXRTrsf = &theXRTrsf;
    ((::Graphic3d_CView*)_NativeInstance)->ComputeXRPosedCameraFromBase(*(::Graphic3d_Camera*)theCam->NativeInstance, *(gp_Trsf*)pp_theXRTrsf);
}

void Macad::Occt::Graphic3d_CView::ComputeXRBaseCameraFromPosed(Macad::Occt::Graphic3d_Camera^ theCamPosed, Macad::Occt::Trsf thePoseTrsf)
{
    pin_ptr<Macad::Occt::Trsf> pp_thePoseTrsf = &thePoseTrsf;
    ((::Graphic3d_CView*)_NativeInstance)->ComputeXRBaseCameraFromPosed(*(::Graphic3d_Camera*)theCamPosed->NativeInstance, *(gp_Trsf*)pp_thePoseTrsf);
}

void Macad::Occt::Graphic3d_CView::TurnViewXRCamera(Macad::Occt::Trsf theTrsfTurn)
{
    pin_ptr<Macad::Occt::Trsf> pp_theTrsfTurn = &theTrsfTurn;
    ((::Graphic3d_CView*)_NativeInstance)->TurnViewXRCamera(*(gp_Trsf*)pp_theTrsfTurn);
}

Macad::Occt::Graphic3d_GraduatedTrihedron^ Macad::Occt::Graphic3d_CView::GetGraduatedTrihedron()
{
    ::Graphic3d_GraduatedTrihedron* _result = new ::Graphic3d_GraduatedTrihedron();
    *_result = (::Graphic3d_GraduatedTrihedron)((::Graphic3d_CView*)_NativeInstance)->GetGraduatedTrihedron();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_GraduatedTrihedron(_result);
}

void Macad::Occt::Graphic3d_CView::GraduatedTrihedronDisplay(Macad::Occt::Graphic3d_GraduatedTrihedron^ theTrihedronData)
{
    ((::Graphic3d_CView*)_NativeInstance)->GraduatedTrihedronDisplay(*(::Graphic3d_GraduatedTrihedron*)theTrihedronData->NativeInstance);
}

void Macad::Occt::Graphic3d_CView::GraduatedTrihedronErase()
{
    ((::Graphic3d_CView*)_NativeInstance)->GraduatedTrihedronErase();
}

void Macad::Occt::Graphic3d_CView::GraduatedTrihedronMinMaxValues(Macad::Occt::Graphic3d_Vec3^ theMin, Macad::Occt::Graphic3d_Vec3^ theMax)
{
    ((::Graphic3d_CView*)_NativeInstance)->GraduatedTrihedronMinMaxValues(*(::Graphic3d_Vec3*)theMin->NativeInstance, *(::Graphic3d_Vec3*)theMax->NativeInstance);
}

void Macad::Occt::Graphic3d_CView::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_CView*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Graphic3d_CView::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_CView*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

bool Macad::Occt::Graphic3d_CView::IsSubview()
{
    bool _result = ((::Graphic3d_CView*)_NativeInstance)->IsSubview();
    return _result;
}

Macad::Occt::Graphic3d_CView^ Macad::Occt::Graphic3d_CView::ParentView()
{
    ::Graphic3d_CView* _result = ((::Graphic3d_CView*)_NativeInstance)->ParentView();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_CView(_result);
}

bool Macad::Occt::Graphic3d_CView::IsSubviewComposer()
{
    bool _result = ((::Graphic3d_CView*)_NativeInstance)->IsSubviewComposer();
    return _result;
}

void Macad::Occt::Graphic3d_CView::SetSubviewComposer(bool theIsComposer)
{
    ((::Graphic3d_CView*)_NativeInstance)->SetSubviewComposer(theIsComposer);
}

void Macad::Occt::Graphic3d_CView::AddSubview(Macad::Occt::Graphic3d_CView^ theView)
{
    ((::Graphic3d_CView*)_NativeInstance)->AddSubview(Handle(::Graphic3d_CView)(theView->NativeInstance));
}

bool Macad::Occt::Graphic3d_CView::RemoveSubview(Macad::Occt::Graphic3d_CView^ theView)
{
    bool _result = ((::Graphic3d_CView*)_NativeInstance)->RemoveSubview((::Graphic3d_CView*)theView->NativeInstance);
    return _result;
}

Macad::Occt::Aspect_TypeOfTriedronPosition Macad::Occt::Graphic3d_CView::SubviewCorner()
{
    ::Aspect_TypeOfTriedronPosition _result = ((::Graphic3d_CView*)_NativeInstance)->SubviewCorner();
    return (Macad::Occt::Aspect_TypeOfTriedronPosition)_result;
}

void Macad::Occt::Graphic3d_CView::SetSubviewCorner(Macad::Occt::Aspect_TypeOfTriedronPosition thePos)
{
    ((::Graphic3d_CView*)_NativeInstance)->SetSubviewCorner((::Aspect_TypeOfTriedronPosition)thePos);
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_CView::SubviewTopLeft()
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = (::Graphic3d_Vec2i)((::Graphic3d_CView*)_NativeInstance)->SubviewTopLeft();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

bool Macad::Occt::Graphic3d_CView::IsSubViewRelativeSize()
{
    bool _result = ((::Graphic3d_CView*)_NativeInstance)->IsSubViewRelativeSize();
    return _result;
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_CView::SubviewSize()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::Graphic3d_CView*)_NativeInstance)->SubviewSize();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

void Macad::Occt::Graphic3d_CView::SetSubviewSize(Macad::Occt::Graphic3d_Vec2d^ theSize)
{
    ((::Graphic3d_CView*)_NativeInstance)->SetSubviewSize(*(::Graphic3d_Vec2d*)theSize->NativeInstance);
}

Macad::Occt::Graphic3d_Vec2d^ Macad::Occt::Graphic3d_CView::SubviewOffset()
{
    ::Graphic3d_Vec2d* _result = new ::Graphic3d_Vec2d();
    *_result = (::Graphic3d_Vec2d)((::Graphic3d_CView*)_NativeInstance)->SubviewOffset();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2d(_result);
}

void Macad::Occt::Graphic3d_CView::SetSubviewOffset(Macad::Occt::Graphic3d_Vec2d^ theOffset)
{
    ((::Graphic3d_CView*)_NativeInstance)->SetSubviewOffset(*(::Graphic3d_Vec2d*)theOffset->NativeInstance);
}

Macad::Occt::Graphic3d_Vec2i^ Macad::Occt::Graphic3d_CView::SubviewMargins()
{
    ::Graphic3d_Vec2i* _result = new ::Graphic3d_Vec2i();
    *_result = (::Graphic3d_Vec2i)((::Graphic3d_CView*)_NativeInstance)->SubviewMargins();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec2i(_result);
}

void Macad::Occt::Graphic3d_CView::SetSubviewMargins(Macad::Occt::Graphic3d_Vec2i^ theMargins)
{
    ((::Graphic3d_CView*)_NativeInstance)->SetSubviewMargins(*(::Graphic3d_Vec2i*)theMargins->NativeInstance);
}

Macad::Occt::Graphic3d_CView^ Macad::Occt::Graphic3d_CView::CreateDowncasted(::Graphic3d_CView* instance)
{
    return gcnew Macad::Occt::Graphic3d_CView( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_GraduatedTrihedron
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_GraduatedTrihedron::Graphic3d_GraduatedTrihedron(Macad::Occt::TCollection_AsciiString^ theNamesFont)
    : Macad::Occt::BaseClass<::Graphic3d_GraduatedTrihedron>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_GraduatedTrihedron(*(::TCollection_AsciiString*)theNamesFont->NativeInstance, Font_FA_Bold, 12, "Arial", Font_FA_Regular, 12, 30.F, Quantity_NOC_WHITE, true, true);
}

Macad::Occt::Graphic3d_GraduatedTrihedron::Graphic3d_GraduatedTrihedron()
    : Macad::Occt::BaseClass<::Graphic3d_GraduatedTrihedron>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_GraduatedTrihedron("Arial", Font_FA_Bold, 12, "Arial", Font_FA_Regular, 12, 30.F, Quantity_NOC_WHITE, true, true);
}

Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect^ Macad::Occt::Graphic3d_GraduatedTrihedron::ChangeXAxisAspect()
{
    ::Graphic3d_GraduatedTrihedron::AxisAspect* _result = new ::Graphic3d_GraduatedTrihedron::AxisAspect();
    *_result = ((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->ChangeXAxisAspect();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect(_result);
}

Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect^ Macad::Occt::Graphic3d_GraduatedTrihedron::ChangeYAxisAspect()
{
    ::Graphic3d_GraduatedTrihedron::AxisAspect* _result = new ::Graphic3d_GraduatedTrihedron::AxisAspect();
    *_result = ((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->ChangeYAxisAspect();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect(_result);
}

Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect^ Macad::Occt::Graphic3d_GraduatedTrihedron::ChangeZAxisAspect()
{
    ::Graphic3d_GraduatedTrihedron::AxisAspect* _result = new ::Graphic3d_GraduatedTrihedron::AxisAspect();
    *_result = ((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->ChangeZAxisAspect();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect(_result);
}

Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect^ Macad::Occt::Graphic3d_GraduatedTrihedron::ChangeAxisAspect(int theIndex)
{
    ::Graphic3d_GraduatedTrihedron::AxisAspect* _result = new ::Graphic3d_GraduatedTrihedron::AxisAspect();
    *_result = ((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->ChangeAxisAspect(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect(_result);
}

Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect^ Macad::Occt::Graphic3d_GraduatedTrihedron::XAxisAspect()
{
    ::Graphic3d_GraduatedTrihedron::AxisAspect* _result = new ::Graphic3d_GraduatedTrihedron::AxisAspect();
    *_result = (::Graphic3d_GraduatedTrihedron::AxisAspect)((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->XAxisAspect();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect(_result);
}

Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect^ Macad::Occt::Graphic3d_GraduatedTrihedron::YAxisAspect()
{
    ::Graphic3d_GraduatedTrihedron::AxisAspect* _result = new ::Graphic3d_GraduatedTrihedron::AxisAspect();
    *_result = (::Graphic3d_GraduatedTrihedron::AxisAspect)((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->YAxisAspect();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect(_result);
}

Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect^ Macad::Occt::Graphic3d_GraduatedTrihedron::ZAxisAspect()
{
    ::Graphic3d_GraduatedTrihedron::AxisAspect* _result = new ::Graphic3d_GraduatedTrihedron::AxisAspect();
    *_result = (::Graphic3d_GraduatedTrihedron::AxisAspect)((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->ZAxisAspect();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect(_result);
}

Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect^ Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspectAt(int theIndex)
{
    ::Graphic3d_GraduatedTrihedron::AxisAspect* _result = new ::Graphic3d_GraduatedTrihedron::AxisAspect();
    *_result = (::Graphic3d_GraduatedTrihedron::AxisAspect)((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->AxisAspectAt(theIndex);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect(_result);
}

float Macad::Occt::Graphic3d_GraduatedTrihedron::ArrowsLength()
{
    float _result = ((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->ArrowsLength();
    return _result;
}

void Macad::Occt::Graphic3d_GraduatedTrihedron::SetArrowsLength(float theValue)
{
    ((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->SetArrowsLength(theValue);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_GraduatedTrihedron::GridColor()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->GridColor();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Graphic3d_GraduatedTrihedron::SetGridColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->SetGridColor(*(::Quantity_Color*)theColor->NativeInstance);
}

bool Macad::Occt::Graphic3d_GraduatedTrihedron::ToDrawGrid()
{
    bool _result = ((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->ToDrawGrid();
    return _result;
}

void Macad::Occt::Graphic3d_GraduatedTrihedron::SetDrawGrid(bool theToDraw)
{
    ((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->SetDrawGrid(theToDraw);
}

bool Macad::Occt::Graphic3d_GraduatedTrihedron::ToDrawAxes()
{
    bool _result = ((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->ToDrawAxes();
    return _result;
}

void Macad::Occt::Graphic3d_GraduatedTrihedron::SetDrawAxes(bool theToDraw)
{
    ((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->SetDrawAxes(theToDraw);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_GraduatedTrihedron::NamesFont()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->NamesFont();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::Graphic3d_GraduatedTrihedron::SetNamesFont(Macad::Occt::TCollection_AsciiString^ theFont)
{
    ((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->SetNamesFont(*(::TCollection_AsciiString*)theFont->NativeInstance);
}

int Macad::Occt::Graphic3d_GraduatedTrihedron::NamesSize()
{
    int _result = ((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->NamesSize();
    return _result;
}

void Macad::Occt::Graphic3d_GraduatedTrihedron::SetNamesSize(int theValue)
{
    ((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->SetNamesSize(theValue);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_GraduatedTrihedron::ValuesFont()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->ValuesFont();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::Graphic3d_GraduatedTrihedron::SetValuesFont(Macad::Occt::TCollection_AsciiString^ theFont)
{
    ((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->SetValuesFont(*(::TCollection_AsciiString*)theFont->NativeInstance);
}

int Macad::Occt::Graphic3d_GraduatedTrihedron::ValuesSize()
{
    int _result = ((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->ValuesSize();
    return _result;
}

void Macad::Occt::Graphic3d_GraduatedTrihedron::SetValuesSize(int theValue)
{
    ((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->SetValuesSize(theValue);
}

bool Macad::Occt::Graphic3d_GraduatedTrihedron::CubicAxesCallback(Macad::Occt::Graphic3d_CView^ theView)
{
    bool _result = ((::Graphic3d_GraduatedTrihedron*)_NativeInstance)->CubicAxesCallback((::Graphic3d_CView*)theView->NativeInstance);
    return _result;
}



//---------------------------------------------------------------------
//  Class  Graphic3d_GraduatedTrihedron::AxisAspect
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect::AxisAspect(Macad::Occt::TCollection_ExtendedString^ theName, Macad::Occt::Quantity_Color^ theNameColor, Macad::Occt::Quantity_Color^ theColor, int theValuesOffset, int theNameOffset, int theTickmarksNumber, int theTickmarksLength, bool theToDrawName, bool theToDrawValues, bool theToDrawTickmarks)
    : Macad::Occt::BaseClass<::Graphic3d_GraduatedTrihedron::AxisAspect>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_GraduatedTrihedron::AxisAspect(*(::TCollection_ExtendedString*)theName->NativeInstance, *(::Quantity_Color*)theNameColor->NativeInstance, *(::Quantity_Color*)theColor->NativeInstance, theValuesOffset, theNameOffset, theTickmarksNumber, theTickmarksLength, theToDrawName, theToDrawValues, theToDrawTickmarks);
}

Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect::AxisAspect(Macad::Occt::TCollection_ExtendedString^ theName, Macad::Occt::Quantity_Color^ theNameColor, Macad::Occt::Quantity_Color^ theColor, int theValuesOffset, int theNameOffset, int theTickmarksNumber, int theTickmarksLength, bool theToDrawName, bool theToDrawValues)
    : Macad::Occt::BaseClass<::Graphic3d_GraduatedTrihedron::AxisAspect>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_GraduatedTrihedron::AxisAspect(*(::TCollection_ExtendedString*)theName->NativeInstance, *(::Quantity_Color*)theNameColor->NativeInstance, *(::Quantity_Color*)theColor->NativeInstance, theValuesOffset, theNameOffset, theTickmarksNumber, theTickmarksLength, theToDrawName, theToDrawValues, true);
}

Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect::AxisAspect(Macad::Occt::TCollection_ExtendedString^ theName, Macad::Occt::Quantity_Color^ theNameColor, Macad::Occt::Quantity_Color^ theColor, int theValuesOffset, int theNameOffset, int theTickmarksNumber, int theTickmarksLength, bool theToDrawName)
    : Macad::Occt::BaseClass<::Graphic3d_GraduatedTrihedron::AxisAspect>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_GraduatedTrihedron::AxisAspect(*(::TCollection_ExtendedString*)theName->NativeInstance, *(::Quantity_Color*)theNameColor->NativeInstance, *(::Quantity_Color*)theColor->NativeInstance, theValuesOffset, theNameOffset, theTickmarksNumber, theTickmarksLength, theToDrawName, true, true);
}

Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect::AxisAspect(Macad::Occt::TCollection_ExtendedString^ theName, Macad::Occt::Quantity_Color^ theNameColor, Macad::Occt::Quantity_Color^ theColor, int theValuesOffset, int theNameOffset, int theTickmarksNumber, int theTickmarksLength)
    : Macad::Occt::BaseClass<::Graphic3d_GraduatedTrihedron::AxisAspect>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_GraduatedTrihedron::AxisAspect(*(::TCollection_ExtendedString*)theName->NativeInstance, *(::Quantity_Color*)theNameColor->NativeInstance, *(::Quantity_Color*)theColor->NativeInstance, theValuesOffset, theNameOffset, theTickmarksNumber, theTickmarksLength, true, true, true);
}

Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect::AxisAspect(Macad::Occt::TCollection_ExtendedString^ theName, Macad::Occt::Quantity_Color^ theNameColor, Macad::Occt::Quantity_Color^ theColor, int theValuesOffset, int theNameOffset, int theTickmarksNumber)
    : Macad::Occt::BaseClass<::Graphic3d_GraduatedTrihedron::AxisAspect>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_GraduatedTrihedron::AxisAspect(*(::TCollection_ExtendedString*)theName->NativeInstance, *(::Quantity_Color*)theNameColor->NativeInstance, *(::Quantity_Color*)theColor->NativeInstance, theValuesOffset, theNameOffset, theTickmarksNumber, 10, true, true, true);
}

Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect::AxisAspect(Macad::Occt::TCollection_ExtendedString^ theName, Macad::Occt::Quantity_Color^ theNameColor, Macad::Occt::Quantity_Color^ theColor, int theValuesOffset, int theNameOffset)
    : Macad::Occt::BaseClass<::Graphic3d_GraduatedTrihedron::AxisAspect>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_GraduatedTrihedron::AxisAspect(*(::TCollection_ExtendedString*)theName->NativeInstance, *(::Quantity_Color*)theNameColor->NativeInstance, *(::Quantity_Color*)theColor->NativeInstance, theValuesOffset, theNameOffset, 5, 10, true, true, true);
}

Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect::AxisAspect(Macad::Occt::TCollection_ExtendedString^ theName, Macad::Occt::Quantity_Color^ theNameColor, Macad::Occt::Quantity_Color^ theColor, int theValuesOffset)
    : Macad::Occt::BaseClass<::Graphic3d_GraduatedTrihedron::AxisAspect>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_GraduatedTrihedron::AxisAspect(*(::TCollection_ExtendedString*)theName->NativeInstance, *(::Quantity_Color*)theNameColor->NativeInstance, *(::Quantity_Color*)theColor->NativeInstance, theValuesOffset, 30, 5, 10, true, true, true);
}

Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect::AxisAspect(Macad::Occt::TCollection_ExtendedString^ theName, Macad::Occt::Quantity_Color^ theNameColor, Macad::Occt::Quantity_Color^ theColor)
    : Macad::Occt::BaseClass<::Graphic3d_GraduatedTrihedron::AxisAspect>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_GraduatedTrihedron::AxisAspect(*(::TCollection_ExtendedString*)theName->NativeInstance, *(::Quantity_Color*)theNameColor->NativeInstance, *(::Quantity_Color*)theColor->NativeInstance, 10, 30, 5, 10, true, true, true);
}

Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect::AxisAspect(Macad::Occt::TCollection_ExtendedString^ theName, Macad::Occt::Quantity_Color^ theNameColor)
    : Macad::Occt::BaseClass<::Graphic3d_GraduatedTrihedron::AxisAspect>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_GraduatedTrihedron::AxisAspect(*(::TCollection_ExtendedString*)theName->NativeInstance, *(::Quantity_Color*)theNameColor->NativeInstance, Quantity_NOC_BLACK, 10, 30, 5, 10, true, true, true);
}

Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect::AxisAspect(Macad::Occt::TCollection_ExtendedString^ theName)
    : Macad::Occt::BaseClass<::Graphic3d_GraduatedTrihedron::AxisAspect>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_GraduatedTrihedron::AxisAspect(*(::TCollection_ExtendedString*)theName->NativeInstance, Quantity_NOC_BLACK, Quantity_NOC_BLACK, 10, 30, 5, 10, true, true, true);
}

Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect::AxisAspect()
    : Macad::Occt::BaseClass<::Graphic3d_GraduatedTrihedron::AxisAspect>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_GraduatedTrihedron::AxisAspect("", Quantity_NOC_BLACK, Quantity_NOC_BLACK, 10, 30, 5, 10, true, true, true);
}

void Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect::SetName(Macad::Occt::TCollection_ExtendedString^ theName)
{
    ((::Graphic3d_GraduatedTrihedron::AxisAspect*)_NativeInstance)->SetName(*(::TCollection_ExtendedString*)theName->NativeInstance);
}

Macad::Occt::TCollection_ExtendedString^ Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect::Name()
{
    ::TCollection_ExtendedString* _result = new ::TCollection_ExtendedString();
    *_result = (::TCollection_ExtendedString)((::Graphic3d_GraduatedTrihedron::AxisAspect*)_NativeInstance)->Name();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_ExtendedString(_result);
}

bool Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect::ToDrawName()
{
    bool _result = ((::Graphic3d_GraduatedTrihedron::AxisAspect*)_NativeInstance)->ToDrawName();
    return _result;
}

void Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect::SetDrawName(bool theToDraw)
{
    ((::Graphic3d_GraduatedTrihedron::AxisAspect*)_NativeInstance)->SetDrawName(theToDraw);
}

bool Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect::ToDrawTickmarks()
{
    bool _result = ((::Graphic3d_GraduatedTrihedron::AxisAspect*)_NativeInstance)->ToDrawTickmarks();
    return _result;
}

void Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect::SetDrawTickmarks(bool theToDraw)
{
    ((::Graphic3d_GraduatedTrihedron::AxisAspect*)_NativeInstance)->SetDrawTickmarks(theToDraw);
}

bool Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect::ToDrawValues()
{
    bool _result = ((::Graphic3d_GraduatedTrihedron::AxisAspect*)_NativeInstance)->ToDrawValues();
    return _result;
}

void Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect::SetDrawValues(bool theToDraw)
{
    ((::Graphic3d_GraduatedTrihedron::AxisAspect*)_NativeInstance)->SetDrawValues(theToDraw);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect::NameColor()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::Graphic3d_GraduatedTrihedron::AxisAspect*)_NativeInstance)->NameColor();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect::SetNameColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::Graphic3d_GraduatedTrihedron::AxisAspect*)_NativeInstance)->SetNameColor(*(::Quantity_Color*)theColor->NativeInstance);
}

Macad::Occt::Quantity_Color^ Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect::Color()
{
    ::Quantity_Color* _result = new ::Quantity_Color();
    *_result = (::Quantity_Color)((::Graphic3d_GraduatedTrihedron::AxisAspect*)_NativeInstance)->Color();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Quantity_Color(_result);
}

void Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect::SetColor(Macad::Occt::Quantity_Color^ theColor)
{
    ((::Graphic3d_GraduatedTrihedron::AxisAspect*)_NativeInstance)->SetColor(*(::Quantity_Color*)theColor->NativeInstance);
}

int Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect::TickmarksNumber()
{
    int _result = ((::Graphic3d_GraduatedTrihedron::AxisAspect*)_NativeInstance)->TickmarksNumber();
    return _result;
}

void Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect::SetTickmarksNumber(int theValue)
{
    ((::Graphic3d_GraduatedTrihedron::AxisAspect*)_NativeInstance)->SetTickmarksNumber(theValue);
}

int Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect::TickmarksLength()
{
    int _result = ((::Graphic3d_GraduatedTrihedron::AxisAspect*)_NativeInstance)->TickmarksLength();
    return _result;
}

void Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect::SetTickmarksLength(int theValue)
{
    ((::Graphic3d_GraduatedTrihedron::AxisAspect*)_NativeInstance)->SetTickmarksLength(theValue);
}

int Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect::ValuesOffset()
{
    int _result = ((::Graphic3d_GraduatedTrihedron::AxisAspect*)_NativeInstance)->ValuesOffset();
    return _result;
}

void Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect::SetValuesOffset(int theValue)
{
    ((::Graphic3d_GraduatedTrihedron::AxisAspect*)_NativeInstance)->SetValuesOffset(theValue);
}

int Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect::NameOffset()
{
    int _result = ((::Graphic3d_GraduatedTrihedron::AxisAspect*)_NativeInstance)->NameOffset();
    return _result;
}

void Macad::Occt::Graphic3d_GraduatedTrihedron::AxisAspect::SetNameOffset(int theValue)
{
    ((::Graphic3d_GraduatedTrihedron::AxisAspect*)_NativeInstance)->SetNameOffset(theValue);
}



//---------------------------------------------------------------------
//  Class  Graphic3d_RenderingParams
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_RenderingParams::Graphic3d_RenderingParams()
    : Macad::Occt::BaseClass<::Graphic3d_RenderingParams>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_RenderingParams();
}

float Macad::Occt::Graphic3d_RenderingParams::ResolutionRatio()
{
    float _result = ((::Graphic3d_RenderingParams*)_NativeInstance)->ResolutionRatio();
    return _result;
}

void Macad::Occt::Graphic3d_RenderingParams::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_RenderingParams*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Graphic3d_RenderingParams::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Graphic3d_RenderingParams*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  Graphic3d_TextureEnv
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_TextureEnv::Graphic3d_TextureEnv(Macad::Occt::TCollection_AsciiString^ theFileName)
    : Macad::Occt::Graphic3d_TextureRoot(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_TextureEnv(*(::TCollection_AsciiString*)theFileName->NativeInstance);
}

Macad::Occt::Graphic3d_TextureEnv::Graphic3d_TextureEnv(Macad::Occt::Graphic3d_NameOfTextureEnv theName)
    : Macad::Occt::Graphic3d_TextureRoot(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_TextureEnv((::Graphic3d_NameOfTextureEnv)theName);
}

Macad::Occt::Graphic3d_TextureEnv::Graphic3d_TextureEnv(Macad::Occt::Image_PixMap^ thePixMap)
    : Macad::Occt::Graphic3d_TextureRoot(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_TextureEnv(Handle(::Image_PixMap)(thePixMap->NativeInstance));
}

Macad::Occt::Graphic3d_NameOfTextureEnv Macad::Occt::Graphic3d_TextureEnv::Name()
{
    ::Graphic3d_NameOfTextureEnv _result = ((::Graphic3d_TextureEnv*)_NativeInstance)->Name();
    return (Macad::Occt::Graphic3d_NameOfTextureEnv)_result;
}

int Macad::Occt::Graphic3d_TextureEnv::NumberOfTextures()
{
    int _result = ::Graphic3d_TextureEnv::NumberOfTextures();
    return _result;
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_TextureEnv::TextureName(int theRank)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ::Graphic3d_TextureEnv::TextureName(theRank);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::Graphic3d_TextureEnv^ Macad::Occt::Graphic3d_TextureEnv::CreateDowncasted(::Graphic3d_TextureEnv* instance)
{
    return gcnew Macad::Occt::Graphic3d_TextureEnv( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_LightSet
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_LightSet::Graphic3d_LightSet()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_LightSet();
}

int Macad::Occt::Graphic3d_LightSet::Lower()
{
    int _result = ((::Graphic3d_LightSet*)_NativeInstance)->Lower();
    return _result;
}

int Macad::Occt::Graphic3d_LightSet::Upper()
{
    int _result = ((::Graphic3d_LightSet*)_NativeInstance)->Upper();
    return _result;
}

bool Macad::Occt::Graphic3d_LightSet::IsEmpty()
{
    bool _result = ((::Graphic3d_LightSet*)_NativeInstance)->IsEmpty();
    return _result;
}

int Macad::Occt::Graphic3d_LightSet::Extent()
{
    int _result = ((::Graphic3d_LightSet*)_NativeInstance)->Extent();
    return _result;
}

Macad::Occt::Graphic3d_CLight^ Macad::Occt::Graphic3d_LightSet::Value(int theIndex)
{
    Handle(::Graphic3d_CLight) _result = ((::Graphic3d_LightSet*)_NativeInstance)->Value(theIndex);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_CLight::CreateDowncasted(_result.get());
}

bool Macad::Occt::Graphic3d_LightSet::Contains(Macad::Occt::Graphic3d_CLight^ theLight)
{
    bool _result = ((::Graphic3d_LightSet*)_NativeInstance)->Contains(Handle(::Graphic3d_CLight)(theLight->NativeInstance));
    return _result;
}

bool Macad::Occt::Graphic3d_LightSet::Add(Macad::Occt::Graphic3d_CLight^ theLight)
{
    bool _result = ((::Graphic3d_LightSet*)_NativeInstance)->Add(Handle(::Graphic3d_CLight)(theLight->NativeInstance));
    return _result;
}

bool Macad::Occt::Graphic3d_LightSet::Remove(Macad::Occt::Graphic3d_CLight^ theLight)
{
    bool _result = ((::Graphic3d_LightSet*)_NativeInstance)->Remove(Handle(::Graphic3d_CLight)(theLight->NativeInstance));
    return _result;
}

int Macad::Occt::Graphic3d_LightSet::NbLightsOfType(Macad::Occt::Graphic3d_TypeOfLightSource theType)
{
    int _result = ((::Graphic3d_LightSet*)_NativeInstance)->NbLightsOfType((::Graphic3d_TypeOfLightSource)theType);
    return _result;
}

long long unsigned int Macad::Occt::Graphic3d_LightSet::UpdateRevision()
{
    long long unsigned int _result = ((::Graphic3d_LightSet*)_NativeInstance)->UpdateRevision();
    return _result;
}

long long unsigned int Macad::Occt::Graphic3d_LightSet::Revision()
{
    long long unsigned int _result = ((::Graphic3d_LightSet*)_NativeInstance)->Revision();
    return _result;
}

int Macad::Occt::Graphic3d_LightSet::NbEnabled()
{
    int _result = ((::Graphic3d_LightSet*)_NativeInstance)->NbEnabled();
    return _result;
}

int Macad::Occt::Graphic3d_LightSet::NbEnabledLightsOfType(Macad::Occt::Graphic3d_TypeOfLightSource theType)
{
    int _result = ((::Graphic3d_LightSet*)_NativeInstance)->NbEnabledLightsOfType((::Graphic3d_TypeOfLightSource)theType);
    return _result;
}

int Macad::Occt::Graphic3d_LightSet::NbCastShadows()
{
    int _result = ((::Graphic3d_LightSet*)_NativeInstance)->NbCastShadows();
    return _result;
}

Macad::Occt::Graphic3d_Vec4^ Macad::Occt::Graphic3d_LightSet::AmbientColor()
{
    ::Graphic3d_Vec4* _result = new ::Graphic3d_Vec4();
    *_result = (::Graphic3d_Vec4)((::Graphic3d_LightSet*)_NativeInstance)->AmbientColor();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_Vec4(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_LightSet::KeyEnabledLong()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Graphic3d_LightSet*)_NativeInstance)->KeyEnabledLong();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_LightSet::KeyEnabledShort()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Graphic3d_LightSet*)_NativeInstance)->KeyEnabledShort();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::Graphic3d_LightSet^ Macad::Occt::Graphic3d_LightSet::CreateDowncasted(::Graphic3d_LightSet* instance)
{
    return gcnew Macad::Occt::Graphic3d_LightSet( instance );
}

System::Collections::Generic::IEnumerator<Macad::Occt::Graphic3d_CLight^>^ Macad::Occt::Graphic3d_LightSet::GetEnumerator()
{
    return gcnew IndexEnumerator<Macad::Occt::Graphic3d_CLight^>(this, Lower(), Upper());
}

System::Collections::IEnumerator^ Macad::Occt::Graphic3d_LightSet::GetEnumerator2()
{
    return gcnew IndexEnumerator<Macad::Occt::Graphic3d_CLight^>(this, Lower(), Upper());
}



//---------------------------------------------------------------------
//  Class  Graphic3d_LightSet::Iterator
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_LightSet::Iterator::Iterator()
    : Macad::Occt::BaseClass<::Graphic3d_LightSet::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_LightSet::Iterator();
}

Macad::Occt::Graphic3d_LightSet::Iterator::Iterator(Macad::Occt::Graphic3d_LightSet^ theSet, Macad::Occt::Graphic3d_LightSet::IterationFilter theFilter)
    : Macad::Occt::BaseClass<::Graphic3d_LightSet::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_LightSet::Iterator(*(::Graphic3d_LightSet*)theSet->NativeInstance, (::Graphic3d_LightSet::IterationFilter)theFilter);
}

Macad::Occt::Graphic3d_LightSet::Iterator::Iterator(Macad::Occt::Graphic3d_LightSet^ theSet)
    : Macad::Occt::BaseClass<::Graphic3d_LightSet::Iterator>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_LightSet::Iterator(*(::Graphic3d_LightSet*)theSet->NativeInstance, ::Graphic3d_LightSet::IterationFilter_None);
}

bool Macad::Occt::Graphic3d_LightSet::Iterator::More()
{
    bool _result = ((::Graphic3d_LightSet::Iterator*)_NativeInstance)->More();
    return _result;
}

Macad::Occt::Graphic3d_CLight^ Macad::Occt::Graphic3d_LightSet::Iterator::Value()
{
    Handle(::Graphic3d_CLight) _result = ((::Graphic3d_LightSet::Iterator*)_NativeInstance)->Value();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_CLight::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_LightSet::Iterator::Next()
{
    ((::Graphic3d_LightSet::Iterator*)_NativeInstance)->Next();
}



//---------------------------------------------------------------------
//  Class  Graphic3d_FrameStatsData
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_FrameStatsData::Graphic3d_FrameStatsData()
    : Macad::Occt::BaseClass<::Graphic3d_FrameStatsData>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_FrameStatsData();
}

double Macad::Occt::Graphic3d_FrameStatsData::FrameRate()
{
    double _result = ((::Graphic3d_FrameStatsData*)_NativeInstance)->FrameRate();
    return _result;
}

double Macad::Occt::Graphic3d_FrameStatsData::FrameRateCpu()
{
    double _result = ((::Graphic3d_FrameStatsData*)_NativeInstance)->FrameRateCpu();
    return _result;
}

double Macad::Occt::Graphic3d_FrameStatsData::ImmediateFrameRate()
{
    double _result = ((::Graphic3d_FrameStatsData*)_NativeInstance)->ImmediateFrameRate();
    return _result;
}

double Macad::Occt::Graphic3d_FrameStatsData::ImmediateFrameRateCpu()
{
    double _result = ((::Graphic3d_FrameStatsData*)_NativeInstance)->ImmediateFrameRateCpu();
    return _result;
}

long long unsigned int Macad::Occt::Graphic3d_FrameStatsData::CounterValue(Macad::Occt::Graphic3d_FrameStatsCounter theIndex)
{
    long long unsigned int _result = ((::Graphic3d_FrameStatsData*)_NativeInstance)->CounterValue((::Graphic3d_FrameStatsCounter)theIndex);
    return _result;
}

double Macad::Occt::Graphic3d_FrameStatsData::TimerValue(Macad::Occt::Graphic3d_FrameStatsTimer theIndex)
{
    double _result = ((::Graphic3d_FrameStatsData*)_NativeInstance)->TimerValue((::Graphic3d_FrameStatsTimer)theIndex);
    return _result;
}

void Macad::Occt::Graphic3d_FrameStatsData::Reset()
{
    ((::Graphic3d_FrameStatsData*)_NativeInstance)->Reset();
}

void Macad::Occt::Graphic3d_FrameStatsData::FillMax(Macad::Occt::Graphic3d_FrameStatsData^ theOther)
{
    ((::Graphic3d_FrameStatsData*)_NativeInstance)->FillMax(*(::Graphic3d_FrameStatsData*)theOther->NativeInstance);
}



//---------------------------------------------------------------------
//  Class  Graphic3d_FrameStatsDataTmp
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_FrameStatsDataTmp::Graphic3d_FrameStatsDataTmp()
    : Macad::Occt::Graphic3d_FrameStatsData(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Graphic3d_FrameStatsDataTmp();
}

void Macad::Occt::Graphic3d_FrameStatsDataTmp::FlushTimers(long long unsigned int theNbFrames, bool theIsFinal)
{
    ((::Graphic3d_FrameStatsDataTmp*)_NativeInstance)->FlushTimers(theNbFrames, theIsFinal);
}

void Macad::Occt::Graphic3d_FrameStatsDataTmp::Reset()
{
    ((::Graphic3d_FrameStatsDataTmp*)_NativeInstance)->Reset();
}

long long unsigned int Macad::Occt::Graphic3d_FrameStatsDataTmp::ChangeCounterValue(Macad::Occt::Graphic3d_FrameStatsCounter theIndex)
{
    long long unsigned int _result = ((::Graphic3d_FrameStatsDataTmp*)_NativeInstance)->ChangeCounterValue((::Graphic3d_FrameStatsCounter)theIndex);
    return _result;
}

double Macad::Occt::Graphic3d_FrameStatsDataTmp::ChangeTimerValue(Macad::Occt::Graphic3d_FrameStatsTimer theIndex)
{
    double _result = ((::Graphic3d_FrameStatsDataTmp*)_NativeInstance)->ChangeTimerValue((::Graphic3d_FrameStatsTimer)theIndex);
    return _result;
}



//---------------------------------------------------------------------
//  Class  Graphic3d_FrameStats
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_FrameStats::Graphic3d_FrameStats()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

double Macad::Occt::Graphic3d_FrameStats::UpdateInterval()
{
    double _result = ((::Graphic3d_FrameStats*)_NativeInstance)->UpdateInterval();
    return _result;
}

void Macad::Occt::Graphic3d_FrameStats::SetUpdateInterval(double theInterval)
{
    ((::Graphic3d_FrameStats*)_NativeInstance)->SetUpdateInterval(theInterval);
}

bool Macad::Occt::Graphic3d_FrameStats::IsLongLineFormat()
{
    bool _result = ((::Graphic3d_FrameStats*)_NativeInstance)->IsLongLineFormat();
    return _result;
}

void Macad::Occt::Graphic3d_FrameStats::SetLongLineFormat(bool theValue)
{
    ((::Graphic3d_FrameStats*)_NativeInstance)->SetLongLineFormat(theValue);
}

void Macad::Occt::Graphic3d_FrameStats::FrameStart(Macad::Occt::Graphic3d_CView^ theView, bool theIsImmediateOnly)
{
    ((::Graphic3d_FrameStats*)_NativeInstance)->FrameStart(Handle(::Graphic3d_CView)(theView->NativeInstance), theIsImmediateOnly);
}

void Macad::Occt::Graphic3d_FrameStats::FrameEnd(Macad::Occt::Graphic3d_CView^ theView, bool theIsImmediateOnly)
{
    ((::Graphic3d_FrameStats*)_NativeInstance)->FrameEnd(Handle(::Graphic3d_CView)(theView->NativeInstance), theIsImmediateOnly);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_FrameStats::FormatStats(Macad::Occt::Graphic3d_RenderingParams::PerfCounters theFlags)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ((::Graphic3d_FrameStats*)_NativeInstance)->FormatStats((::Graphic3d_RenderingParams::PerfCounters)theFlags);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

double Macad::Occt::Graphic3d_FrameStats::FrameDuration()
{
    double _result = ((::Graphic3d_FrameStats*)_NativeInstance)->FrameDuration();
    return _result;
}

double Macad::Occt::Graphic3d_FrameStats::FrameRate()
{
    double _result = ((::Graphic3d_FrameStats*)_NativeInstance)->FrameRate();
    return _result;
}

double Macad::Occt::Graphic3d_FrameStats::FrameRateCpu()
{
    double _result = ((::Graphic3d_FrameStats*)_NativeInstance)->FrameRateCpu();
    return _result;
}

long long unsigned int Macad::Occt::Graphic3d_FrameStats::CounterValue(Macad::Occt::Graphic3d_FrameStatsCounter theCounter)
{
    long long unsigned int _result = ((::Graphic3d_FrameStats*)_NativeInstance)->CounterValue((::Graphic3d_FrameStatsCounter)theCounter);
    return _result;
}

double Macad::Occt::Graphic3d_FrameStats::TimerValue(Macad::Occt::Graphic3d_FrameStatsTimer theTimer)
{
    double _result = ((::Graphic3d_FrameStats*)_NativeInstance)->TimerValue((::Graphic3d_FrameStatsTimer)theTimer);
    return _result;
}

bool Macad::Occt::Graphic3d_FrameStats::HasCulledLayers()
{
    bool _result = ((::Graphic3d_FrameStats*)_NativeInstance)->HasCulledLayers();
    return _result;
}

bool Macad::Occt::Graphic3d_FrameStats::HasCulledStructs()
{
    bool _result = ((::Graphic3d_FrameStats*)_NativeInstance)->HasCulledStructs();
    return _result;
}

Macad::Occt::Graphic3d_FrameStatsData^ Macad::Occt::Graphic3d_FrameStats::LastDataFrame()
{
    ::Graphic3d_FrameStatsData* _result = new ::Graphic3d_FrameStatsData();
    *_result = (::Graphic3d_FrameStatsData)((::Graphic3d_FrameStats*)_NativeInstance)->LastDataFrame();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_FrameStatsData(_result);
}

int Macad::Occt::Graphic3d_FrameStats::LastDataFrameIndex()
{
    int _result = ((::Graphic3d_FrameStats*)_NativeInstance)->LastDataFrameIndex();
    return _result;
}

long long unsigned int Macad::Occt::Graphic3d_FrameStats::ChangeCounter(Macad::Occt::Graphic3d_FrameStatsCounter theCounter)
{
    long long unsigned int _result = ((::Graphic3d_FrameStats*)_NativeInstance)->ChangeCounter((::Graphic3d_FrameStatsCounter)theCounter);
    return _result;
}

double Macad::Occt::Graphic3d_FrameStats::ChangeTimer(Macad::Occt::Graphic3d_FrameStatsTimer theTimer)
{
    double _result = ((::Graphic3d_FrameStats*)_NativeInstance)->ChangeTimer((::Graphic3d_FrameStatsTimer)theTimer);
    return _result;
}

Macad::Occt::Graphic3d_FrameStatsDataTmp^ Macad::Occt::Graphic3d_FrameStats::ActiveDataFrame()
{
    ::Graphic3d_FrameStatsDataTmp* _result = new ::Graphic3d_FrameStatsDataTmp();
    *_result = ((::Graphic3d_FrameStats*)_NativeInstance)->ActiveDataFrame();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_FrameStatsDataTmp(_result);
}

Macad::Occt::Graphic3d_FrameStats^ Macad::Occt::Graphic3d_FrameStats::CreateDowncasted(::Graphic3d_FrameStats* instance)
{
    return gcnew Macad::Occt::Graphic3d_FrameStats( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_GraphicDriverFactory
//---------------------------------------------------------------------

void Macad::Occt::Graphic3d_GraphicDriverFactory::RegisterFactory(Macad::Occt::Graphic3d_GraphicDriverFactory^ theFactory, bool theIsPreferred)
{
    ::Graphic3d_GraphicDriverFactory::RegisterFactory(Handle(::Graphic3d_GraphicDriverFactory)(theFactory->NativeInstance), theIsPreferred);
}

void Macad::Occt::Graphic3d_GraphicDriverFactory::RegisterFactory(Macad::Occt::Graphic3d_GraphicDriverFactory^ theFactory)
{
    ::Graphic3d_GraphicDriverFactory::RegisterFactory(Handle(::Graphic3d_GraphicDriverFactory)(theFactory->NativeInstance), false);
}

void Macad::Occt::Graphic3d_GraphicDriverFactory::UnregisterFactory(Macad::Occt::TCollection_AsciiString^ theName)
{
    ::Graphic3d_GraphicDriverFactory::UnregisterFactory(*(::TCollection_AsciiString*)theName->NativeInstance);
}

Macad::Occt::Graphic3d_GraphicDriverFactory^ Macad::Occt::Graphic3d_GraphicDriverFactory::DefaultDriverFactory()
{
    Handle(::Graphic3d_GraphicDriverFactory) _result = ::Graphic3d_GraphicDriverFactory::DefaultDriverFactory();
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_GraphicDriverFactory::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_GraphicDriverFactoryList^ Macad::Occt::Graphic3d_GraphicDriverFactory::DriverFactories()
{
    ::Graphic3d_GraphicDriverFactoryList* _result = new ::Graphic3d_GraphicDriverFactoryList();
    *_result = (::Graphic3d_GraphicDriverFactoryList)::Graphic3d_GraphicDriverFactory::DriverFactories();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Graphic3d_GraphicDriverFactoryList(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_GraphicDriverFactory::Name()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = (::TCollection_AsciiString)((::Graphic3d_GraphicDriverFactory*)_NativeInstance)->Name();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::Graphic3d_GraphicDriverFactory^ Macad::Occt::Graphic3d_GraphicDriverFactory::CreateDowncasted(::Graphic3d_GraphicDriverFactory* instance)
{
    return gcnew Macad::Occt::Graphic3d_GraphicDriverFactory( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_GroupDefinitionError
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_GroupDefinitionError::Graphic3d_GroupDefinitionError()
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_GroupDefinitionError();
}

Macad::Occt::Graphic3d_GroupDefinitionError::Graphic3d_GroupDefinitionError(System::String^ theMessage)
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Graphic3d_GroupDefinitionError(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Graphic3d_GroupDefinitionError::Graphic3d_GroupDefinitionError(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Graphic3d_GroupDefinitionError(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::Graphic3d_GroupDefinitionError::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Graphic3d_GroupDefinitionError::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Graphic3d_GroupDefinitionError::Raise()
{
    ::Graphic3d_GroupDefinitionError::Raise("");
}

Macad::Occt::Graphic3d_GroupDefinitionError^ Macad::Occt::Graphic3d_GroupDefinitionError::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Graphic3d_GroupDefinitionError) _result = ::Graphic3d_GroupDefinitionError::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_GroupDefinitionError::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_GroupDefinitionError^ Macad::Occt::Graphic3d_GroupDefinitionError::NewInstance()
{
    Handle(::Graphic3d_GroupDefinitionError) _result = ::Graphic3d_GroupDefinitionError::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_GroupDefinitionError::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_GroupDefinitionError^ Macad::Occt::Graphic3d_GroupDefinitionError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Graphic3d_GroupDefinitionError) _result = ::Graphic3d_GroupDefinitionError::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_GroupDefinitionError::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_GroupDefinitionError^ Macad::Occt::Graphic3d_GroupDefinitionError::CreateDowncasted(::Graphic3d_GroupDefinitionError* instance)
{
    return gcnew Macad::Occt::Graphic3d_GroupDefinitionError( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_MaterialDefinitionError
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_MaterialDefinitionError::Graphic3d_MaterialDefinitionError()
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_MaterialDefinitionError();
}

Macad::Occt::Graphic3d_MaterialDefinitionError::Graphic3d_MaterialDefinitionError(System::String^ theMessage)
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Graphic3d_MaterialDefinitionError(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Graphic3d_MaterialDefinitionError::Graphic3d_MaterialDefinitionError(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Graphic3d_MaterialDefinitionError(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::Graphic3d_MaterialDefinitionError::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Graphic3d_MaterialDefinitionError::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Graphic3d_MaterialDefinitionError::Raise()
{
    ::Graphic3d_MaterialDefinitionError::Raise("");
}

Macad::Occt::Graphic3d_MaterialDefinitionError^ Macad::Occt::Graphic3d_MaterialDefinitionError::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Graphic3d_MaterialDefinitionError) _result = ::Graphic3d_MaterialDefinitionError::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_MaterialDefinitionError::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_MaterialDefinitionError^ Macad::Occt::Graphic3d_MaterialDefinitionError::NewInstance()
{
    Handle(::Graphic3d_MaterialDefinitionError) _result = ::Graphic3d_MaterialDefinitionError::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_MaterialDefinitionError::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_MaterialDefinitionError^ Macad::Occt::Graphic3d_MaterialDefinitionError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Graphic3d_MaterialDefinitionError) _result = ::Graphic3d_MaterialDefinitionError::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_MaterialDefinitionError::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_MaterialDefinitionError^ Macad::Occt::Graphic3d_MaterialDefinitionError::CreateDowncasted(::Graphic3d_MaterialDefinitionError* instance)
{
    return gcnew Macad::Occt::Graphic3d_MaterialDefinitionError( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Texture2D
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Texture2D::Graphic3d_Texture2D(Macad::Occt::TCollection_AsciiString^ theFileName)
    : Macad::Occt::Graphic3d_TextureMap(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_Texture2D(*(::TCollection_AsciiString*)theFileName->NativeInstance);
}

Macad::Occt::Graphic3d_Texture2D::Graphic3d_Texture2D(Macad::Occt::Graphic3d_NameOfTexture2D theNOT)
    : Macad::Occt::Graphic3d_TextureMap(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_Texture2D((::Graphic3d_NameOfTexture2D)theNOT);
}

Macad::Occt::Graphic3d_Texture2D::Graphic3d_Texture2D(Macad::Occt::Image_PixMap^ thePixMap)
    : Macad::Occt::Graphic3d_TextureMap(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_Texture2D(Handle(::Image_PixMap)(thePixMap->NativeInstance));
}

int Macad::Occt::Graphic3d_Texture2D::NumberOfTextures()
{
    int _result = ::Graphic3d_Texture2D::NumberOfTextures();
    return _result;
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_Texture2D::TextureName(int theRank)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ::Graphic3d_Texture2D::TextureName(theRank);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::Graphic3d_NameOfTexture2D Macad::Occt::Graphic3d_Texture2D::Name()
{
    ::Graphic3d_NameOfTexture2D _result = ((::Graphic3d_Texture2D*)_NativeInstance)->Name();
    return (Macad::Occt::Graphic3d_NameOfTexture2D)_result;
}

void Macad::Occt::Graphic3d_Texture2D::SetImage(Macad::Occt::Image_PixMap^ thePixMap)
{
    ((::Graphic3d_Texture2D*)_NativeInstance)->SetImage(Handle(::Image_PixMap)(thePixMap->NativeInstance));
}

Macad::Occt::Graphic3d_Texture2D^ Macad::Occt::Graphic3d_Texture2D::CreateDowncasted(::Graphic3d_Texture2D* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::Graphic3d_MediaTexture)))
        return Macad::Occt::Graphic3d_MediaTexture::CreateDowncasted((::Graphic3d_MediaTexture*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Graphic3d_Texture2Dplane)))
        return Macad::Occt::Graphic3d_Texture2Dplane::CreateDowncasted((::Graphic3d_Texture2Dplane*)instance);
    
    return gcnew Macad::Occt::Graphic3d_Texture2D( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_MediaTexture
//---------------------------------------------------------------------

Macad::Occt::Image_PixMap^ Macad::Occt::Graphic3d_MediaTexture::GetImage(Macad::Occt::Image_SupportedFormats^ theSupported)
{
    Handle(::Image_PixMap) _result = ((::Graphic3d_MediaTexture*)_NativeInstance)->GetImage(Handle(::Image_SupportedFormats)(theSupported->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Image_PixMap::CreateDowncasted(_result.get());
}

void Macad::Occt::Graphic3d_MediaTexture::GenerateNewId()
{
    ((::Graphic3d_MediaTexture*)_NativeInstance)->GenerateNewId();
}

Macad::Occt::Graphic3d_MediaTexture^ Macad::Occt::Graphic3d_MediaTexture::CreateDowncasted(::Graphic3d_MediaTexture* instance)
{
    return gcnew Macad::Occt::Graphic3d_MediaTexture( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_PriorityDefinitionError
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_PriorityDefinitionError::Graphic3d_PriorityDefinitionError()
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_PriorityDefinitionError();
}

Macad::Occt::Graphic3d_PriorityDefinitionError::Graphic3d_PriorityDefinitionError(System::String^ theMessage)
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Graphic3d_PriorityDefinitionError(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Graphic3d_PriorityDefinitionError::Graphic3d_PriorityDefinitionError(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Graphic3d_PriorityDefinitionError(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::Graphic3d_PriorityDefinitionError::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Graphic3d_PriorityDefinitionError::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Graphic3d_PriorityDefinitionError::Raise()
{
    ::Graphic3d_PriorityDefinitionError::Raise("");
}

Macad::Occt::Graphic3d_PriorityDefinitionError^ Macad::Occt::Graphic3d_PriorityDefinitionError::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Graphic3d_PriorityDefinitionError) _result = ::Graphic3d_PriorityDefinitionError::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_PriorityDefinitionError::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_PriorityDefinitionError^ Macad::Occt::Graphic3d_PriorityDefinitionError::NewInstance()
{
    Handle(::Graphic3d_PriorityDefinitionError) _result = ::Graphic3d_PriorityDefinitionError::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_PriorityDefinitionError::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_PriorityDefinitionError^ Macad::Occt::Graphic3d_PriorityDefinitionError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Graphic3d_PriorityDefinitionError) _result = ::Graphic3d_PriorityDefinitionError::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_PriorityDefinitionError::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_PriorityDefinitionError^ Macad::Occt::Graphic3d_PriorityDefinitionError::CreateDowncasted(::Graphic3d_PriorityDefinitionError* instance)
{
    return gcnew Macad::Occt::Graphic3d_PriorityDefinitionError( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_ShaderManager
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_ShaderManager::Graphic3d_ShaderManager(Macad::Occt::Aspect_GraphicsLibrary theGapi)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_ShaderManager((::Aspect_GraphicsLibrary)theGapi);
}

bool Macad::Occt::Graphic3d_ShaderManager::IsGapiGreaterEqual(int theVerMajor, int theVerMinor)
{
    bool _result = ((::Graphic3d_ShaderManager*)_NativeInstance)->IsGapiGreaterEqual(theVerMajor, theVerMinor);
    return _result;
}

int Macad::Occt::Graphic3d_ShaderManager::GapiVersionMajor()
{
    int _result = ((::Graphic3d_ShaderManager*)_NativeInstance)->GapiVersionMajor();
    return _result;
}

int Macad::Occt::Graphic3d_ShaderManager::GapiVersionMinor()
{
    int _result = ((::Graphic3d_ShaderManager*)_NativeInstance)->GapiVersionMinor();
    return _result;
}

void Macad::Occt::Graphic3d_ShaderManager::SetGapiVersion(int theVerMajor, int theVerMinor)
{
    ((::Graphic3d_ShaderManager*)_NativeInstance)->SetGapiVersion(theVerMajor, theVerMinor);
}

bool Macad::Occt::Graphic3d_ShaderManager::UseRedAlpha()
{
    bool _result = ((::Graphic3d_ShaderManager*)_NativeInstance)->UseRedAlpha();
    return _result;
}

void Macad::Occt::Graphic3d_ShaderManager::SetUseRedAlpha(bool theUseRedAlpha)
{
    ((::Graphic3d_ShaderManager*)_NativeInstance)->SetUseRedAlpha(theUseRedAlpha);
}

bool Macad::Occt::Graphic3d_ShaderManager::HasFlatShading()
{
    bool _result = ((::Graphic3d_ShaderManager*)_NativeInstance)->HasFlatShading();
    return _result;
}

bool Macad::Occt::Graphic3d_ShaderManager::ToReverseDFdxSign()
{
    bool _result = ((::Graphic3d_ShaderManager*)_NativeInstance)->ToReverseDFdxSign();
    return _result;
}

void Macad::Occt::Graphic3d_ShaderManager::SetFlatShading(bool theToUse, bool theToReverseSign)
{
    ((::Graphic3d_ShaderManager*)_NativeInstance)->SetFlatShading(theToUse, theToReverseSign);
}

bool Macad::Occt::Graphic3d_ShaderManager::ToEmulateDepthClamp()
{
    bool _result = ((::Graphic3d_ShaderManager*)_NativeInstance)->ToEmulateDepthClamp();
    return _result;
}

void Macad::Occt::Graphic3d_ShaderManager::SetEmulateDepthClamp(bool theToEmulate)
{
    ((::Graphic3d_ShaderManager*)_NativeInstance)->SetEmulateDepthClamp(theToEmulate);
}

bool Macad::Occt::Graphic3d_ShaderManager::HasGlslExtension(Macad::Occt::Graphic3d_GlslExtension theExt)
{
    bool _result = ((::Graphic3d_ShaderManager*)_NativeInstance)->HasGlslExtension((::Graphic3d_GlslExtension)theExt);
    return _result;
}

void Macad::Occt::Graphic3d_ShaderManager::EnableGlslExtension(Macad::Occt::Graphic3d_GlslExtension theExt, bool theToEnable)
{
    ((::Graphic3d_ShaderManager*)_NativeInstance)->EnableGlslExtension((::Graphic3d_GlslExtension)theExt, theToEnable);
}

void Macad::Occt::Graphic3d_ShaderManager::EnableGlslExtension(Macad::Occt::Graphic3d_GlslExtension theExt)
{
    ((::Graphic3d_ShaderManager*)_NativeInstance)->EnableGlslExtension((::Graphic3d_GlslExtension)theExt, true);
}

Macad::Occt::Graphic3d_ShaderManager^ Macad::Occt::Graphic3d_ShaderManager::CreateDowncasted(::Graphic3d_ShaderManager* instance)
{
    return gcnew Macad::Occt::Graphic3d_ShaderManager( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_StructureDefinitionError
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_StructureDefinitionError::Graphic3d_StructureDefinitionError()
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_StructureDefinitionError();
}

Macad::Occt::Graphic3d_StructureDefinitionError::Graphic3d_StructureDefinitionError(System::String^ theMessage)
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Graphic3d_StructureDefinitionError(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Graphic3d_StructureDefinitionError::Graphic3d_StructureDefinitionError(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_OutOfRange(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Graphic3d_StructureDefinitionError(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::Graphic3d_StructureDefinitionError::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Graphic3d_StructureDefinitionError::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Graphic3d_StructureDefinitionError::Raise()
{
    ::Graphic3d_StructureDefinitionError::Raise("");
}

Macad::Occt::Graphic3d_StructureDefinitionError^ Macad::Occt::Graphic3d_StructureDefinitionError::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Graphic3d_StructureDefinitionError) _result = ::Graphic3d_StructureDefinitionError::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_StructureDefinitionError::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_StructureDefinitionError^ Macad::Occt::Graphic3d_StructureDefinitionError::NewInstance()
{
    Handle(::Graphic3d_StructureDefinitionError) _result = ::Graphic3d_StructureDefinitionError::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_StructureDefinitionError::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_StructureDefinitionError^ Macad::Occt::Graphic3d_StructureDefinitionError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Graphic3d_StructureDefinitionError) _result = ::Graphic3d_StructureDefinitionError::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_StructureDefinitionError::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_StructureDefinitionError^ Macad::Occt::Graphic3d_StructureDefinitionError::CreateDowncasted(::Graphic3d_StructureDefinitionError* instance)
{
    return gcnew Macad::Occt::Graphic3d_StructureDefinitionError( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Texture1D
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_NameOfTexture1D Macad::Occt::Graphic3d_Texture1D::Name()
{
    ::Graphic3d_NameOfTexture1D _result = ((::Graphic3d_Texture1D*)_NativeInstance)->Name();
    return (Macad::Occt::Graphic3d_NameOfTexture1D)_result;
}

int Macad::Occt::Graphic3d_Texture1D::NumberOfTextures()
{
    int _result = ::Graphic3d_Texture1D::NumberOfTextures();
    return _result;
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Graphic3d_Texture1D::TextureName(int aRank)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ::Graphic3d_Texture1D::TextureName(aRank);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::Graphic3d_Texture1D^ Macad::Occt::Graphic3d_Texture1D::CreateDowncasted(::Graphic3d_Texture1D* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::Graphic3d_Texture1Dmanual)))
        return Macad::Occt::Graphic3d_Texture1Dmanual::CreateDowncasted((::Graphic3d_Texture1Dmanual*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Graphic3d_Texture1Dsegment)))
        return Macad::Occt::Graphic3d_Texture1Dsegment::CreateDowncasted((::Graphic3d_Texture1Dsegment*)instance);
    
    return gcnew Macad::Occt::Graphic3d_Texture1D( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Texture1Dmanual
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Texture1Dmanual::Graphic3d_Texture1Dmanual(Macad::Occt::TCollection_AsciiString^ theFileName)
    : Macad::Occt::Graphic3d_Texture1D(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_Texture1Dmanual(*(::TCollection_AsciiString*)theFileName->NativeInstance);
}

Macad::Occt::Graphic3d_Texture1Dmanual::Graphic3d_Texture1Dmanual(Macad::Occt::Graphic3d_NameOfTexture1D theNOT)
    : Macad::Occt::Graphic3d_Texture1D(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_Texture1Dmanual((::Graphic3d_NameOfTexture1D)theNOT);
}

Macad::Occt::Graphic3d_Texture1Dmanual::Graphic3d_Texture1Dmanual(Macad::Occt::Image_PixMap^ thePixMap)
    : Macad::Occt::Graphic3d_Texture1D(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_Texture1Dmanual(Handle(::Image_PixMap)(thePixMap->NativeInstance));
}

Macad::Occt::Graphic3d_Texture1Dmanual^ Macad::Occt::Graphic3d_Texture1Dmanual::CreateDowncasted(::Graphic3d_Texture1Dmanual* instance)
{
    return gcnew Macad::Occt::Graphic3d_Texture1Dmanual( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Texture1Dsegment
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Texture1Dsegment::Graphic3d_Texture1Dsegment(Macad::Occt::TCollection_AsciiString^ theFileName)
    : Macad::Occt::Graphic3d_Texture1D(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_Texture1Dsegment(*(::TCollection_AsciiString*)theFileName->NativeInstance);
}

Macad::Occt::Graphic3d_Texture1Dsegment::Graphic3d_Texture1Dsegment(Macad::Occt::Graphic3d_NameOfTexture1D theNOT)
    : Macad::Occt::Graphic3d_Texture1D(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_Texture1Dsegment((::Graphic3d_NameOfTexture1D)theNOT);
}

Macad::Occt::Graphic3d_Texture1Dsegment::Graphic3d_Texture1Dsegment(Macad::Occt::Image_PixMap^ thePixMap)
    : Macad::Occt::Graphic3d_Texture1D(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_Texture1Dsegment(Handle(::Image_PixMap)(thePixMap->NativeInstance));
}

void Macad::Occt::Graphic3d_Texture1Dsegment::SetSegment(float theX1, float theY1, float theZ1, float theX2, float theY2, float theZ2)
{
    ((::Graphic3d_Texture1Dsegment*)_NativeInstance)->SetSegment(theX1, theY1, theZ1, theX2, theY2, theZ2);
}

void Macad::Occt::Graphic3d_Texture1Dsegment::Segment(float% theX1, float% theY1, float% theZ1, float% theX2, float% theY2, float% theZ2)
{
    pin_ptr<float> pp_theX1 = &theX1;
    pin_ptr<float> pp_theY1 = &theY1;
    pin_ptr<float> pp_theZ1 = &theZ1;
    pin_ptr<float> pp_theX2 = &theX2;
    pin_ptr<float> pp_theY2 = &theY2;
    pin_ptr<float> pp_theZ2 = &theZ2;
    ((::Graphic3d_Texture1Dsegment*)_NativeInstance)->Segment(*(float*)pp_theX1, *(float*)pp_theY1, *(float*)pp_theZ1, *(float*)pp_theX2, *(float*)pp_theY2, *(float*)pp_theZ2);
}

Macad::Occt::Graphic3d_Texture1Dsegment^ Macad::Occt::Graphic3d_Texture1Dsegment::CreateDowncasted(::Graphic3d_Texture1Dsegment* instance)
{
    return gcnew Macad::Occt::Graphic3d_Texture1Dsegment( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Texture2Dplane
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Texture2Dplane::Graphic3d_Texture2Dplane(Macad::Occt::TCollection_AsciiString^ theFileName)
    : Macad::Occt::Graphic3d_Texture2D(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_Texture2Dplane(*(::TCollection_AsciiString*)theFileName->NativeInstance);
}

Macad::Occt::Graphic3d_Texture2Dplane::Graphic3d_Texture2Dplane(Macad::Occt::Graphic3d_NameOfTexture2D theNOT)
    : Macad::Occt::Graphic3d_Texture2D(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_Texture2Dplane((::Graphic3d_NameOfTexture2D)theNOT);
}

Macad::Occt::Graphic3d_Texture2Dplane::Graphic3d_Texture2Dplane(Macad::Occt::Image_PixMap^ thePixMap)
    : Macad::Occt::Graphic3d_Texture2D(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_Texture2Dplane(Handle(::Image_PixMap)(thePixMap->NativeInstance));
}

void Macad::Occt::Graphic3d_Texture2Dplane::SetPlaneS(float A, float B, float C, float D)
{
    ((::Graphic3d_Texture2Dplane*)_NativeInstance)->SetPlaneS(A, B, C, D);
}

void Macad::Occt::Graphic3d_Texture2Dplane::SetPlaneT(float A, float B, float C, float D)
{
    ((::Graphic3d_Texture2Dplane*)_NativeInstance)->SetPlaneT(A, B, C, D);
}

void Macad::Occt::Graphic3d_Texture2Dplane::SetPlane(Macad::Occt::Graphic3d_NameOfTexturePlane thePlane)
{
    ((::Graphic3d_Texture2Dplane*)_NativeInstance)->SetPlane((::Graphic3d_NameOfTexturePlane)thePlane);
}

void Macad::Occt::Graphic3d_Texture2Dplane::SetScaleS(float theVal)
{
    ((::Graphic3d_Texture2Dplane*)_NativeInstance)->SetScaleS(theVal);
}

void Macad::Occt::Graphic3d_Texture2Dplane::SetScaleT(float theVal)
{
    ((::Graphic3d_Texture2Dplane*)_NativeInstance)->SetScaleT(theVal);
}

void Macad::Occt::Graphic3d_Texture2Dplane::SetTranslateS(float theVal)
{
    ((::Graphic3d_Texture2Dplane*)_NativeInstance)->SetTranslateS(theVal);
}

void Macad::Occt::Graphic3d_Texture2Dplane::SetTranslateT(float theVal)
{
    ((::Graphic3d_Texture2Dplane*)_NativeInstance)->SetTranslateT(theVal);
}

void Macad::Occt::Graphic3d_Texture2Dplane::SetRotation(float theVal)
{
    ((::Graphic3d_Texture2Dplane*)_NativeInstance)->SetRotation(theVal);
}

Macad::Occt::Graphic3d_NameOfTexturePlane Macad::Occt::Graphic3d_Texture2Dplane::Plane()
{
    ::Graphic3d_NameOfTexturePlane _result = ((::Graphic3d_Texture2Dplane*)_NativeInstance)->Plane();
    return (Macad::Occt::Graphic3d_NameOfTexturePlane)_result;
}

void Macad::Occt::Graphic3d_Texture2Dplane::PlaneS(float% A, float% B, float% C, float% D)
{
    pin_ptr<float> pp_A = &A;
    pin_ptr<float> pp_B = &B;
    pin_ptr<float> pp_C = &C;
    pin_ptr<float> pp_D = &D;
    ((::Graphic3d_Texture2Dplane*)_NativeInstance)->PlaneS(*(float*)pp_A, *(float*)pp_B, *(float*)pp_C, *(float*)pp_D);
}

void Macad::Occt::Graphic3d_Texture2Dplane::PlaneT(float% A, float% B, float% C, float% D)
{
    pin_ptr<float> pp_A = &A;
    pin_ptr<float> pp_B = &B;
    pin_ptr<float> pp_C = &C;
    pin_ptr<float> pp_D = &D;
    ((::Graphic3d_Texture2Dplane*)_NativeInstance)->PlaneT(*(float*)pp_A, *(float*)pp_B, *(float*)pp_C, *(float*)pp_D);
}

void Macad::Occt::Graphic3d_Texture2Dplane::TranslateS(float% theVal)
{
    pin_ptr<float> pp_theVal = &theVal;
    ((::Graphic3d_Texture2Dplane*)_NativeInstance)->TranslateS(*(float*)pp_theVal);
}

void Macad::Occt::Graphic3d_Texture2Dplane::TranslateT(float% theVal)
{
    pin_ptr<float> pp_theVal = &theVal;
    ((::Graphic3d_Texture2Dplane*)_NativeInstance)->TranslateT(*(float*)pp_theVal);
}

void Macad::Occt::Graphic3d_Texture2Dplane::ScaleS(float% theVal)
{
    pin_ptr<float> pp_theVal = &theVal;
    ((::Graphic3d_Texture2Dplane*)_NativeInstance)->ScaleS(*(float*)pp_theVal);
}

void Macad::Occt::Graphic3d_Texture2Dplane::ScaleT(float% theVal)
{
    pin_ptr<float> pp_theVal = &theVal;
    ((::Graphic3d_Texture2Dplane*)_NativeInstance)->ScaleT(*(float*)pp_theVal);
}

void Macad::Occt::Graphic3d_Texture2Dplane::Rotation(float% theVal)
{
    pin_ptr<float> pp_theVal = &theVal;
    ((::Graphic3d_Texture2Dplane*)_NativeInstance)->Rotation(*(float*)pp_theVal);
}

Macad::Occt::Graphic3d_Texture2Dplane^ Macad::Occt::Graphic3d_Texture2Dplane::CreateDowncasted(::Graphic3d_Texture2Dplane* instance)
{
    return gcnew Macad::Occt::Graphic3d_Texture2Dplane( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_Texture3D
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_Texture3D::Graphic3d_Texture3D(Macad::Occt::TCollection_AsciiString^ theFileName)
    : Macad::Occt::Graphic3d_TextureMap(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_Texture3D(*(::TCollection_AsciiString*)theFileName->NativeInstance);
}

Macad::Occt::Graphic3d_Texture3D::Graphic3d_Texture3D(Macad::Occt::Image_PixMap^ thePixMap)
    : Macad::Occt::Graphic3d_TextureMap(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_Texture3D(Handle(::Image_PixMap)(thePixMap->NativeInstance));
}

Macad::Occt::Graphic3d_Texture3D::Graphic3d_Texture3D(Macad::Occt::TColStd_Array1OfAsciiString^ theFiles)
    : Macad::Occt::Graphic3d_TextureMap(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Graphic3d_Texture3D(*(::TColStd_Array1OfAsciiString*)theFiles->NativeInstance);
}

void Macad::Occt::Graphic3d_Texture3D::SetImage(Macad::Occt::Image_PixMap^ thePixMap)
{
    ((::Graphic3d_Texture3D*)_NativeInstance)->SetImage(Handle(::Image_PixMap)(thePixMap->NativeInstance));
}

Macad::Occt::Image_PixMap^ Macad::Occt::Graphic3d_Texture3D::GetImage(Macad::Occt::Image_SupportedFormats^ theSupported)
{
    Handle(::Image_PixMap) _result = ((::Graphic3d_Texture3D*)_NativeInstance)->GetImage(Handle(::Image_SupportedFormats)(theSupported->NativeInstance));
    return _result.IsNull() ? nullptr : Macad::Occt::Image_PixMap::CreateDowncasted(_result.get());
}

Macad::Occt::Graphic3d_Texture3D^ Macad::Occt::Graphic3d_Texture3D::CreateDowncasted(::Graphic3d_Texture3D* instance)
{
    return gcnew Macad::Occt::Graphic3d_Texture3D( instance );
}



//---------------------------------------------------------------------
//  Class  Graphic3d_TransformPersScaledAbove
//---------------------------------------------------------------------

Macad::Occt::Graphic3d_TransformPersScaledAbove::Graphic3d_TransformPersScaledAbove(double theScale, Macad::Occt::Pnt thePnt)
    : Macad::Occt::Graphic3d_TransformPers(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
    NativeInstance = new ::Graphic3d_TransformPersScaledAbove(theScale, *(gp_Pnt*)pp_thePnt);
}

double Macad::Occt::Graphic3d_TransformPersScaledAbove::persistentScale(Macad::Occt::Graphic3d_Camera^ theCamera, int theViewportWidth, int theViewportHeight)
{
    double _result = ((::Graphic3d_TransformPersScaledAbove*)_NativeInstance)->persistentScale(Handle(::Graphic3d_Camera)(theCamera->NativeInstance), theViewportWidth, theViewportHeight);
    return _result;
}

Macad::Occt::Graphic3d_TransformPersScaledAbove^ Macad::Occt::Graphic3d_TransformPersScaledAbove::CreateDowncasted(::Graphic3d_TransformPersScaledAbove* instance)
{
    return gcnew Macad::Occt::Graphic3d_TransformPersScaledAbove( instance );
}


