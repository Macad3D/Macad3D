// Generated wrapper code for package gp

#include "OcctPCH.h"
#include "gp.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TColStd.h"


//---------------------------------------------------------------------
//  Class  gp_TrsfNLerp
//---------------------------------------------------------------------

Macad::Occt::gp_TrsfNLerp::gp_TrsfNLerp()
    : Macad::Occt::BaseClass<::gp_TrsfNLerp>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_TrsfNLerp();
}

Macad::Occt::gp_TrsfNLerp::gp_TrsfNLerp(Macad::Occt::Trsf theStart, Macad::Occt::Trsf theEnd)
    : Macad::Occt::BaseClass<::gp_TrsfNLerp>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Trsf> pp_theStart = &theStart;
    pin_ptr<Macad::Occt::Trsf> pp_theEnd = &theEnd;
    _NativeInstance = new ::gp_TrsfNLerp(*(gp_Trsf*)pp_theStart, *(gp_Trsf*)pp_theEnd);
}

void Macad::Occt::gp_TrsfNLerp::Init(Macad::Occt::Trsf theStart, Macad::Occt::Trsf theEnd)
{
    pin_ptr<Macad::Occt::Trsf> pp_theStart = &theStart;
    pin_ptr<Macad::Occt::Trsf> pp_theEnd = &theEnd;
    ((::gp_TrsfNLerp*)_NativeInstance)->Init(*(gp_Trsf*)pp_theStart, *(gp_Trsf*)pp_theEnd);
}

void Macad::Occt::gp_TrsfNLerp::Interpolate(double theT, Macad::Occt::Trsf% theResult)
{
    pin_ptr<Macad::Occt::Trsf> pp_theResult = &theResult;
    ((::gp_TrsfNLerp*)_NativeInstance)->Interpolate(theT, *(gp_Trsf*)pp_theResult);
}



//---------------------------------------------------------------------
//  Class  gp_Vec2f
//---------------------------------------------------------------------

Macad::Occt::gp_Vec2f::gp_Vec2f(float theXY)
    : Macad::Occt::BaseClass<::gp_Vec2f>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Vec2f(theXY);
}

Macad::Occt::gp_Vec2f::gp_Vec2f(float theX, float theY)
    : Macad::Occt::BaseClass<::gp_Vec2f>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Vec2f(theX, theY);
}

int Macad::Occt::gp_Vec2f::Length()
{
    int _result = ::gp_Vec2f::Length();
    return _result;
}

void Macad::Occt::gp_Vec2f::SetValues(float theX, float theY)
{
    ((::gp_Vec2f*)_NativeInstance)->SetValues(theX, theY);
}

float Macad::Occt::gp_Vec2f::x()
{
    float _result = ((::gp_Vec2f*)_NativeInstance)->x();
    return _result;
}

float Macad::Occt::gp_Vec2f::y()
{
    float _result = ((::gp_Vec2f*)_NativeInstance)->y();
    return _result;
}

Macad::Occt::gp_Vec2f^ Macad::Occt::gp_Vec2f::xy()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::gp_Vec2f^ Macad::Occt::gp_Vec2f::yx()
{
    throw gcnew System::NotImplementedException();
}

bool Macad::Occt::gp_Vec2f::IsEqual(Macad::Occt::gp_Vec2f^ theOther)
{
    bool _result = ((::gp_Vec2f*)_NativeInstance)->IsEqual(*(::gp_Vec2f*)theOther->NativeInstance);
    return _result;
}

float Macad::Occt::gp_Vec2f::GetData()
{
    throw gcnew System::NotImplementedException();
}

float Macad::Occt::gp_Vec2f::ChangeData()
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::gp_Vec2f::Multiply(float theFactor)
{
    ((::gp_Vec2f*)_NativeInstance)->Multiply(theFactor);
}

Macad::Occt::gp_Vec2f^ Macad::Occt::gp_Vec2f::Multiplied(float theFactor)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::gp_Vec2f^ Macad::Occt::gp_Vec2f::cwiseMin(Macad::Occt::gp_Vec2f^ theVec)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::gp_Vec2f^ Macad::Occt::gp_Vec2f::cwiseMax(Macad::Occt::gp_Vec2f^ theVec)
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::gp_Vec2f^ Macad::Occt::gp_Vec2f::cwiseAbs()
{
    throw gcnew System::NotImplementedException();
}

float Macad::Occt::gp_Vec2f::maxComp()
{
    float _result = ((::gp_Vec2f*)_NativeInstance)->maxComp();
    return _result;
}

float Macad::Occt::gp_Vec2f::minComp()
{
    float _result = ((::gp_Vec2f*)_NativeInstance)->minComp();
    return _result;
}

float Macad::Occt::gp_Vec2f::Dot(Macad::Occt::gp_Vec2f^ theOther)
{
    float _result = ((::gp_Vec2f*)_NativeInstance)->Dot(*(::gp_Vec2f*)theOther->NativeInstance);
    return _result;
}

float Macad::Occt::gp_Vec2f::Modulus()
{
    float _result = ((::gp_Vec2f*)_NativeInstance)->Modulus();
    return _result;
}

float Macad::Occt::gp_Vec2f::SquareModulus()
{
    float _result = ((::gp_Vec2f*)_NativeInstance)->SquareModulus();
    return _result;
}

Macad::Occt::gp_Vec2f^ Macad::Occt::gp_Vec2f::DX()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::gp_Vec2f^ Macad::Occt::gp_Vec2f::DY()
{
    throw gcnew System::NotImplementedException();
}

bool Macad::Occt::gp_Vec2f::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::gp_Vec2f::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((gp_Vec2f^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  gp_Vec3f
//---------------------------------------------------------------------

Macad::Occt::gp_Vec3f::gp_Vec3f()
    : Macad::Occt::BaseClass<::gp_Vec3f>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Vec3f();
}

Macad::Occt::gp_Vec3f::gp_Vec3f(float theValue)
    : Macad::Occt::BaseClass<::gp_Vec3f>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Vec3f(theValue);
}

Macad::Occt::gp_Vec3f::gp_Vec3f(float theX, float theY, float theZ)
    : Macad::Occt::BaseClass<::gp_Vec3f>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Vec3f(theX, theY, theZ);
}

Macad::Occt::gp_Vec3f::gp_Vec3f(Macad::Occt::gp_Vec2f^ theVec2, float theZ)
    : Macad::Occt::BaseClass<::gp_Vec3f>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Vec3f(*(::gp_Vec2f*)theVec2->NativeInstance, theZ);
}

Macad::Occt::gp_Vec3f::gp_Vec3f(Macad::Occt::gp_Vec2f^ theVec2)
    : Macad::Occt::BaseClass<::gp_Vec3f>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Vec3f(*(::gp_Vec2f*)theVec2->NativeInstance, 0.0f);
}

int Macad::Occt::gp_Vec3f::Length()
{
    int _result = ::gp_Vec3f::Length();
    return _result;
}

void Macad::Occt::gp_Vec3f::SetValues(float theX, float theY, float theZ)
{
    ((::gp_Vec3f*)_NativeInstance)->SetValues(theX, theY, theZ);
}

float Macad::Occt::gp_Vec3f::x()
{
    float _result = ((::gp_Vec3f*)_NativeInstance)->x();
    return _result;
}

float Macad::Occt::gp_Vec3f::r()
{
    float _result = ((::gp_Vec3f*)_NativeInstance)->r();
    return _result;
}

float Macad::Occt::gp_Vec3f::y()
{
    float _result = ((::gp_Vec3f*)_NativeInstance)->y();
    return _result;
}

float Macad::Occt::gp_Vec3f::g()
{
    float _result = ((::gp_Vec3f*)_NativeInstance)->g();
    return _result;
}

float Macad::Occt::gp_Vec3f::z()
{
    float _result = ((::gp_Vec3f*)_NativeInstance)->z();
    return _result;
}

float Macad::Occt::gp_Vec3f::b()
{
    float _result = ((::gp_Vec3f*)_NativeInstance)->b();
    return _result;
}

Macad::Occt::gp_Vec2f^ Macad::Occt::gp_Vec3f::xy()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::gp_Vec2f^ Macad::Occt::gp_Vec3f::yx()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::gp_Vec2f^ Macad::Occt::gp_Vec3f::xz()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::gp_Vec2f^ Macad::Occt::gp_Vec3f::zx()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::gp_Vec2f^ Macad::Occt::gp_Vec3f::yz()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::gp_Vec2f^ Macad::Occt::gp_Vec3f::zy()
{
    throw gcnew System::NotImplementedException();
}

Macad::Occt::gp_Vec3f^ Macad::Occt::gp_Vec3f::xyz()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::gp_Vec3f*)_NativeInstance)->xyz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::gp_Vec3f::xzy()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::gp_Vec3f*)_NativeInstance)->xzy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::gp_Vec3f::yxz()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::gp_Vec3f*)_NativeInstance)->yxz();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::gp_Vec3f::yzx()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::gp_Vec3f*)_NativeInstance)->yzx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::gp_Vec3f::zyx()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::gp_Vec3f*)_NativeInstance)->zyx();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::gp_Vec3f::zxy()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = (::gp_Vec3f)((::gp_Vec3f*)_NativeInstance)->zxy();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

bool Macad::Occt::gp_Vec3f::IsEqual(Macad::Occt::gp_Vec3f^ theOther)
{
    bool _result = ((::gp_Vec3f*)_NativeInstance)->IsEqual(*(::gp_Vec3f*)theOther->NativeInstance);
    return _result;
}

float Macad::Occt::gp_Vec3f::GetData()
{
    throw gcnew System::NotImplementedException();
}

float Macad::Occt::gp_Vec3f::ChangeData()
{
    throw gcnew System::NotImplementedException();
}

void Macad::Occt::gp_Vec3f::Multiply(float theFactor)
{
    ((::gp_Vec3f*)_NativeInstance)->Multiply(theFactor);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::gp_Vec3f::Multiplied(float theFactor)
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = ((::gp_Vec3f*)_NativeInstance)->Multiplied(theFactor);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::gp_Vec3f::cwiseMin(Macad::Occt::gp_Vec3f^ theVec)
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = ((::gp_Vec3f*)_NativeInstance)->cwiseMin(*(::gp_Vec3f*)theVec->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::gp_Vec3f::cwiseMax(Macad::Occt::gp_Vec3f^ theVec)
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = ((::gp_Vec3f*)_NativeInstance)->cwiseMax(*(::gp_Vec3f*)theVec->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::gp_Vec3f::cwiseAbs()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = ((::gp_Vec3f*)_NativeInstance)->cwiseAbs();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

float Macad::Occt::gp_Vec3f::maxComp()
{
    float _result = ((::gp_Vec3f*)_NativeInstance)->maxComp();
    return _result;
}

float Macad::Occt::gp_Vec3f::minComp()
{
    float _result = ((::gp_Vec3f*)_NativeInstance)->minComp();
    return _result;
}

float Macad::Occt::gp_Vec3f::Dot(Macad::Occt::gp_Vec3f^ theOther)
{
    float _result = ((::gp_Vec3f*)_NativeInstance)->Dot(*(::gp_Vec3f*)theOther->NativeInstance);
    return _result;
}

float Macad::Occt::gp_Vec3f::Modulus()
{
    float _result = ((::gp_Vec3f*)_NativeInstance)->Modulus();
    return _result;
}

float Macad::Occt::gp_Vec3f::SquareModulus()
{
    float _result = ((::gp_Vec3f*)_NativeInstance)->SquareModulus();
    return _result;
}

void Macad::Occt::gp_Vec3f::Normalize()
{
    ((::gp_Vec3f*)_NativeInstance)->Normalize();
}

Macad::Occt::gp_Vec3f^ Macad::Occt::gp_Vec3f::Normalized()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = ((::gp_Vec3f*)_NativeInstance)->Normalized();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::gp_Vec3f::Cross(Macad::Occt::gp_Vec3f^ theVec1, Macad::Occt::gp_Vec3f^ theVec2)
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = ::gp_Vec3f::Cross(*(::gp_Vec3f*)theVec1->NativeInstance, *(::gp_Vec3f*)theVec2->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::gp_Vec3f::GetLERP(Macad::Occt::gp_Vec3f^ theFrom, Macad::Occt::gp_Vec3f^ theTo, float theT)
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = ::gp_Vec3f::GetLERP(*(::gp_Vec3f*)theFrom->NativeInstance, *(::gp_Vec3f*)theTo->NativeInstance, theT);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::gp_Vec3f::DX()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = ::gp_Vec3f::DX();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::gp_Vec3f::DY()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = ::gp_Vec3f::DY();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

Macad::Occt::gp_Vec3f^ Macad::Occt::gp_Vec3f::DZ()
{
    ::gp_Vec3f* _result = new ::gp_Vec3f();
    *_result = ::gp_Vec3f::DZ();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Vec3f(_result);
}

bool Macad::Occt::gp_Vec3f::Equals(System::Object^ obj)
{
    if(ReferenceEquals(this, obj))
    {
        return true;
    }
    if(ReferenceEquals(nullptr, obj))
    {
        return false;
    }
    System::Type^ myType = Macad::Occt::gp_Vec3f::GetType();
    System::Type^ objType = obj->GetType();
    if (myType->Equals(objType) || objType->IsSubclassOf(myType))
    {
        return NativeInstance->IsEqual(*((gp_Vec3f^)obj)->NativeInstance);
    }
    return false;
}



//---------------------------------------------------------------------
//  Class  gp_VectorWithNullMagnitude
//---------------------------------------------------------------------

Macad::Occt::gp_VectorWithNullMagnitude::gp_VectorWithNullMagnitude()
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::gp_VectorWithNullMagnitude();
}

Macad::Occt::gp_VectorWithNullMagnitude::gp_VectorWithNullMagnitude(System::String^ theMessage)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::gp_VectorWithNullMagnitude(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::gp_VectorWithNullMagnitude::gp_VectorWithNullMagnitude(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::gp_VectorWithNullMagnitude(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::gp_VectorWithNullMagnitude::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::gp_VectorWithNullMagnitude::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::gp_VectorWithNullMagnitude::Raise()
{
    ::gp_VectorWithNullMagnitude::Raise("");
}

Macad::Occt::gp_VectorWithNullMagnitude^ Macad::Occt::gp_VectorWithNullMagnitude::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::gp_VectorWithNullMagnitude) _result = ::gp_VectorWithNullMagnitude::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::gp_VectorWithNullMagnitude::CreateDowncasted(_result.get());
}

Macad::Occt::gp_VectorWithNullMagnitude^ Macad::Occt::gp_VectorWithNullMagnitude::NewInstance()
{
    Handle(::gp_VectorWithNullMagnitude) _result = ::gp_VectorWithNullMagnitude::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::gp_VectorWithNullMagnitude::CreateDowncasted(_result.get());
}

Macad::Occt::gp_VectorWithNullMagnitude^ Macad::Occt::gp_VectorWithNullMagnitude::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::gp_VectorWithNullMagnitude) _result = ::gp_VectorWithNullMagnitude::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::gp_VectorWithNullMagnitude::CreateDowncasted(_result.get());
}

Macad::Occt::gp_VectorWithNullMagnitude^ Macad::Occt::gp_VectorWithNullMagnitude::CreateDowncasted(::gp_VectorWithNullMagnitude* instance)
{
    return gcnew Macad::Occt::gp_VectorWithNullMagnitude( instance );
}



//---------------------------------------------------------------------
//  Class  gp_Circ
//---------------------------------------------------------------------

Macad::Occt::gp_Circ::gp_Circ()
    : Macad::Occt::BaseClass<::gp_Circ>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Circ();
}

Macad::Occt::gp_Circ::gp_Circ(Macad::Occt::Ax2 theA2, double theRadius)
    : Macad::Occt::BaseClass<::gp_Circ>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2> pp_theA2 = &theA2;
    _NativeInstance = new ::gp_Circ(*(gp_Ax2*)pp_theA2, theRadius);
}

void Macad::Occt::gp_Circ::SetAxis(Macad::Occt::Ax1 theA1)
{
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    ((::gp_Circ*)_NativeInstance)->SetAxis(*(gp_Ax1*)pp_theA1);
}

void Macad::Occt::gp_Circ::SetLocation(Macad::Occt::Pnt theP)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    ((::gp_Circ*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_theP);
}

void Macad::Occt::gp_Circ::SetPosition(Macad::Occt::Ax2 theA2)
{
    pin_ptr<Macad::Occt::Ax2> pp_theA2 = &theA2;
    ((::gp_Circ*)_NativeInstance)->SetPosition(*(gp_Ax2*)pp_theA2);
}

void Macad::Occt::gp_Circ::SetRadius(double theRadius)
{
    ((::gp_Circ*)_NativeInstance)->SetRadius(theRadius);
}

double Macad::Occt::gp_Circ::Area()
{
    double _result = ((::gp_Circ*)_NativeInstance)->Area();
    return _result;
}

Macad::Occt::Ax1 Macad::Occt::gp_Circ::Axis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Circ*)_NativeInstance)->Axis();
    return Macad::Occt::Ax1(_nativeResult);
}

double Macad::Occt::gp_Circ::Length()
{
    double _result = ((::gp_Circ*)_NativeInstance)->Length();
    return _result;
}

Macad::Occt::Pnt Macad::Occt::gp_Circ::Location()
{
    ::gp_Pnt _nativeResult = ((::gp_Circ*)_NativeInstance)->Location();
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Ax2 Macad::Occt::gp_Circ::Position()
{
    ::gp_Ax2 _nativeResult = ((::gp_Circ*)_NativeInstance)->Position();
    return Macad::Occt::Ax2(_nativeResult);
}

double Macad::Occt::gp_Circ::Radius()
{
    double _result = ((::gp_Circ*)_NativeInstance)->Radius();
    return _result;
}

Macad::Occt::Ax1 Macad::Occt::gp_Circ::XAxis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Circ*)_NativeInstance)->XAxis();
    return Macad::Occt::Ax1(_nativeResult);
}

Macad::Occt::Ax1 Macad::Occt::gp_Circ::YAxis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Circ*)_NativeInstance)->YAxis();
    return Macad::Occt::Ax1(_nativeResult);
}

double Macad::Occt::gp_Circ::Distance(Macad::Occt::Pnt theP)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    double _result = ((::gp_Circ*)_NativeInstance)->Distance(*(gp_Pnt*)pp_theP);
    return _result;
}

double Macad::Occt::gp_Circ::SquareDistance(Macad::Occt::Pnt theP)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    double _result = ((::gp_Circ*)_NativeInstance)->SquareDistance(*(gp_Pnt*)pp_theP);
    return _result;
}

bool Macad::Occt::gp_Circ::Contains(Macad::Occt::Pnt theP, double theLinearTolerance)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    bool _result = ((::gp_Circ*)_NativeInstance)->Contains(*(gp_Pnt*)pp_theP, theLinearTolerance);
    return _result;
}

void Macad::Occt::gp_Circ::Mirror(Macad::Occt::Pnt theP)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    ((::gp_Circ*)_NativeInstance)->Mirror(*(gp_Pnt*)pp_theP);
}

Macad::Occt::gp_Circ^ Macad::Occt::gp_Circ::Mirrored(Macad::Occt::Pnt theP)
{
    ::gp_Circ* _result = new ::gp_Circ();
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    *_result = ((::gp_Circ*)_NativeInstance)->Mirrored(*(gp_Pnt*)pp_theP);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}

void Macad::Occt::gp_Circ::Mirror(Macad::Occt::Ax1 theA1)
{
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    ((::gp_Circ*)_NativeInstance)->Mirror(*(gp_Ax1*)pp_theA1);
}

Macad::Occt::gp_Circ^ Macad::Occt::gp_Circ::Mirrored(Macad::Occt::Ax1 theA1)
{
    ::gp_Circ* _result = new ::gp_Circ();
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Circ*)_NativeInstance)->Mirrored(*(gp_Ax1*)pp_theA1);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}

void Macad::Occt::gp_Circ::Mirror(Macad::Occt::Ax2 theA2)
{
    pin_ptr<Macad::Occt::Ax2> pp_theA2 = &theA2;
    ((::gp_Circ*)_NativeInstance)->Mirror(*(gp_Ax2*)pp_theA2);
}

Macad::Occt::gp_Circ^ Macad::Occt::gp_Circ::Mirrored(Macad::Occt::Ax2 theA2)
{
    ::gp_Circ* _result = new ::gp_Circ();
    pin_ptr<Macad::Occt::Ax2> pp_theA2 = &theA2;
    *_result = ((::gp_Circ*)_NativeInstance)->Mirrored(*(gp_Ax2*)pp_theA2);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}

void Macad::Occt::gp_Circ::Rotate(Macad::Occt::Ax1 theA1, double theAng)
{
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    ((::gp_Circ*)_NativeInstance)->Rotate(*(gp_Ax1*)pp_theA1, theAng);
}

Macad::Occt::gp_Circ^ Macad::Occt::gp_Circ::Rotated(Macad::Occt::Ax1 theA1, double theAng)
{
    ::gp_Circ* _result = new ::gp_Circ();
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Circ*)_NativeInstance)->Rotated(*(gp_Ax1*)pp_theA1, theAng);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}

void Macad::Occt::gp_Circ::Scale(Macad::Occt::Pnt theP, double theS)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    ((::gp_Circ*)_NativeInstance)->Scale(*(gp_Pnt*)pp_theP, theS);
}

Macad::Occt::gp_Circ^ Macad::Occt::gp_Circ::Scaled(Macad::Occt::Pnt theP, double theS)
{
    ::gp_Circ* _result = new ::gp_Circ();
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    *_result = ((::gp_Circ*)_NativeInstance)->Scaled(*(gp_Pnt*)pp_theP, theS);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}

void Macad::Occt::gp_Circ::Transform(Macad::Occt::Trsf theT)
{
    pin_ptr<Macad::Occt::Trsf> pp_theT = &theT;
    ((::gp_Circ*)_NativeInstance)->Transform(*(gp_Trsf*)pp_theT);
}

Macad::Occt::gp_Circ^ Macad::Occt::gp_Circ::Transformed(Macad::Occt::Trsf theT)
{
    ::gp_Circ* _result = new ::gp_Circ();
    pin_ptr<Macad::Occt::Trsf> pp_theT = &theT;
    *_result = ((::gp_Circ*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_theT);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}

void Macad::Occt::gp_Circ::Translate(Macad::Occt::Vec theV)
{
    pin_ptr<Macad::Occt::Vec> pp_theV = &theV;
    ((::gp_Circ*)_NativeInstance)->Translate(*(gp_Vec*)pp_theV);
}

Macad::Occt::gp_Circ^ Macad::Occt::gp_Circ::Translated(Macad::Occt::Vec theV)
{
    ::gp_Circ* _result = new ::gp_Circ();
    pin_ptr<Macad::Occt::Vec> pp_theV = &theV;
    *_result = ((::gp_Circ*)_NativeInstance)->Translated(*(gp_Vec*)pp_theV);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}

void Macad::Occt::gp_Circ::Translate(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP1 = &theP1;
    pin_ptr<Macad::Occt::Pnt> pp_theP2 = &theP2;
    ((::gp_Circ*)_NativeInstance)->Translate(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
}

Macad::Occt::gp_Circ^ Macad::Occt::gp_Circ::Translated(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2)
{
    ::gp_Circ* _result = new ::gp_Circ();
    pin_ptr<Macad::Occt::Pnt> pp_theP1 = &theP1;
    pin_ptr<Macad::Occt::Pnt> pp_theP2 = &theP2;
    *_result = ((::gp_Circ*)_NativeInstance)->Translated(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ(_result);
}



//---------------------------------------------------------------------
//  Class  gp_Circ2d
//---------------------------------------------------------------------

Macad::Occt::gp_Circ2d::gp_Circ2d()
    : Macad::Occt::BaseClass<::gp_Circ2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Circ2d();
}

Macad::Occt::gp_Circ2d::gp_Circ2d(Macad::Occt::Ax2d theXAxis, double theRadius, bool theIsSense)
    : Macad::Occt::BaseClass<::gp_Circ2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2d> pp_theXAxis = &theXAxis;
    _NativeInstance = new ::gp_Circ2d(*(gp_Ax2d*)pp_theXAxis, theRadius, theIsSense);
}

Macad::Occt::gp_Circ2d::gp_Circ2d(Macad::Occt::Ax2d theXAxis, double theRadius)
    : Macad::Occt::BaseClass<::gp_Circ2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2d> pp_theXAxis = &theXAxis;
    _NativeInstance = new ::gp_Circ2d(*(gp_Ax2d*)pp_theXAxis, theRadius, true);
}

Macad::Occt::gp_Circ2d::gp_Circ2d(Macad::Occt::Ax22d theAxis, double theRadius)
    : Macad::Occt::BaseClass<::gp_Circ2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax22d> pp_theAxis = &theAxis;
    _NativeInstance = new ::gp_Circ2d(*(gp_Ax22d*)pp_theAxis, theRadius);
}

void Macad::Occt::gp_Circ2d::SetLocation(Macad::Occt::Pnt2d theP)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    ((::gp_Circ2d*)_NativeInstance)->SetLocation(*(gp_Pnt2d*)pp_theP);
}

void Macad::Occt::gp_Circ2d::SetXAxis(Macad::Occt::Ax2d theA)
{
    pin_ptr<Macad::Occt::Ax2d> pp_theA = &theA;
    ((::gp_Circ2d*)_NativeInstance)->SetXAxis(*(gp_Ax2d*)pp_theA);
}

void Macad::Occt::gp_Circ2d::SetAxis(Macad::Occt::Ax22d theA)
{
    pin_ptr<Macad::Occt::Ax22d> pp_theA = &theA;
    ((::gp_Circ2d*)_NativeInstance)->SetAxis(*(gp_Ax22d*)pp_theA);
}

void Macad::Occt::gp_Circ2d::SetYAxis(Macad::Occt::Ax2d theA)
{
    pin_ptr<Macad::Occt::Ax2d> pp_theA = &theA;
    ((::gp_Circ2d*)_NativeInstance)->SetYAxis(*(gp_Ax2d*)pp_theA);
}

void Macad::Occt::gp_Circ2d::SetRadius(double theRadius)
{
    ((::gp_Circ2d*)_NativeInstance)->SetRadius(theRadius);
}

double Macad::Occt::gp_Circ2d::Area()
{
    double _result = ((::gp_Circ2d*)_NativeInstance)->Area();
    return _result;
}

void Macad::Occt::gp_Circ2d::Coefficients(double% theA, double% theB, double% theC, double% theD, double% theE, double% theF)
{
    pin_ptr<double> pp_theA = &theA;
    pin_ptr<double> pp_theB = &theB;
    pin_ptr<double> pp_theC = &theC;
    pin_ptr<double> pp_theD = &theD;
    pin_ptr<double> pp_theE = &theE;
    pin_ptr<double> pp_theF = &theF;
    ((::gp_Circ2d*)_NativeInstance)->Coefficients(*(double*)pp_theA, *(double*)pp_theB, *(double*)pp_theC, *(double*)pp_theD, *(double*)pp_theE, *(double*)pp_theF);
}

bool Macad::Occt::gp_Circ2d::Contains(Macad::Occt::Pnt2d theP, double theLinearTolerance)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    bool _result = ((::gp_Circ2d*)_NativeInstance)->Contains(*(gp_Pnt2d*)pp_theP, theLinearTolerance);
    return _result;
}

double Macad::Occt::gp_Circ2d::Distance(Macad::Occt::Pnt2d theP)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    double _result = ((::gp_Circ2d*)_NativeInstance)->Distance(*(gp_Pnt2d*)pp_theP);
    return _result;
}

double Macad::Occt::gp_Circ2d::SquareDistance(Macad::Occt::Pnt2d theP)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    double _result = ((::gp_Circ2d*)_NativeInstance)->SquareDistance(*(gp_Pnt2d*)pp_theP);
    return _result;
}

double Macad::Occt::gp_Circ2d::Length()
{
    double _result = ((::gp_Circ2d*)_NativeInstance)->Length();
    return _result;
}

Macad::Occt::Pnt2d Macad::Occt::gp_Circ2d::Location()
{
    ::gp_Pnt2d _nativeResult = ((::gp_Circ2d*)_NativeInstance)->Location();
    return Macad::Occt::Pnt2d(_nativeResult);
}

double Macad::Occt::gp_Circ2d::Radius()
{
    double _result = ((::gp_Circ2d*)_NativeInstance)->Radius();
    return _result;
}

Macad::Occt::Ax22d Macad::Occt::gp_Circ2d::Axis()
{
    ::gp_Ax22d _nativeResult = ((::gp_Circ2d*)_NativeInstance)->Axis();
    return Macad::Occt::Ax22d(_nativeResult);
}

Macad::Occt::Ax22d Macad::Occt::gp_Circ2d::Position()
{
    ::gp_Ax22d _nativeResult = ((::gp_Circ2d*)_NativeInstance)->Position();
    return Macad::Occt::Ax22d(_nativeResult);
}

Macad::Occt::Ax2d Macad::Occt::gp_Circ2d::XAxis()
{
    ::gp_Ax2d _nativeResult = ((::gp_Circ2d*)_NativeInstance)->XAxis();
    return Macad::Occt::Ax2d(_nativeResult);
}

Macad::Occt::Ax2d Macad::Occt::gp_Circ2d::YAxis()
{
    ::gp_Ax2d _nativeResult = ((::gp_Circ2d*)_NativeInstance)->YAxis();
    return Macad::Occt::Ax2d(_nativeResult);
}

void Macad::Occt::gp_Circ2d::Reverse()
{
    ((::gp_Circ2d*)_NativeInstance)->Reverse();
}

Macad::Occt::gp_Circ2d^ Macad::Occt::gp_Circ2d::Reversed()
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    *_result = ((::gp_Circ2d*)_NativeInstance)->Reversed();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

bool Macad::Occt::gp_Circ2d::IsDirect()
{
    bool _result = ((::gp_Circ2d*)_NativeInstance)->IsDirect();
    return _result;
}

void Macad::Occt::gp_Circ2d::Mirror(Macad::Occt::Pnt2d theP)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    ((::gp_Circ2d*)_NativeInstance)->Mirror(*(gp_Pnt2d*)pp_theP);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::gp_Circ2d::Mirrored(Macad::Occt::Pnt2d theP)
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    *_result = ((::gp_Circ2d*)_NativeInstance)->Mirrored(*(gp_Pnt2d*)pp_theP);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

void Macad::Occt::gp_Circ2d::Mirror(Macad::Occt::Ax2d theA)
{
    pin_ptr<Macad::Occt::Ax2d> pp_theA = &theA;
    ((::gp_Circ2d*)_NativeInstance)->Mirror(*(gp_Ax2d*)pp_theA);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::gp_Circ2d::Mirrored(Macad::Occt::Ax2d theA)
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    pin_ptr<Macad::Occt::Ax2d> pp_theA = &theA;
    *_result = ((::gp_Circ2d*)_NativeInstance)->Mirrored(*(gp_Ax2d*)pp_theA);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

void Macad::Occt::gp_Circ2d::Rotate(Macad::Occt::Pnt2d theP, double theAng)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    ((::gp_Circ2d*)_NativeInstance)->Rotate(*(gp_Pnt2d*)pp_theP, theAng);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::gp_Circ2d::Rotated(Macad::Occt::Pnt2d theP, double theAng)
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    *_result = ((::gp_Circ2d*)_NativeInstance)->Rotated(*(gp_Pnt2d*)pp_theP, theAng);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

void Macad::Occt::gp_Circ2d::Scale(Macad::Occt::Pnt2d theP, double theS)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    ((::gp_Circ2d*)_NativeInstance)->Scale(*(gp_Pnt2d*)pp_theP, theS);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::gp_Circ2d::Scaled(Macad::Occt::Pnt2d theP, double theS)
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    *_result = ((::gp_Circ2d*)_NativeInstance)->Scaled(*(gp_Pnt2d*)pp_theP, theS);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

void Macad::Occt::gp_Circ2d::Transform(Macad::Occt::Trsf2d theT)
{
    pin_ptr<Macad::Occt::Trsf2d> pp_theT = &theT;
    ((::gp_Circ2d*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_theT);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::gp_Circ2d::Transformed(Macad::Occt::Trsf2d theT)
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    pin_ptr<Macad::Occt::Trsf2d> pp_theT = &theT;
    *_result = ((::gp_Circ2d*)_NativeInstance)->Transformed(*(gp_Trsf2d*)pp_theT);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

void Macad::Occt::gp_Circ2d::Translate(Macad::Occt::Vec2d theV)
{
    pin_ptr<Macad::Occt::Vec2d> pp_theV = &theV;
    ((::gp_Circ2d*)_NativeInstance)->Translate(*(gp_Vec2d*)pp_theV);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::gp_Circ2d::Translated(Macad::Occt::Vec2d theV)
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    pin_ptr<Macad::Occt::Vec2d> pp_theV = &theV;
    *_result = ((::gp_Circ2d*)_NativeInstance)->Translated(*(gp_Vec2d*)pp_theV);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}

void Macad::Occt::gp_Circ2d::Translate(Macad::Occt::Pnt2d theP1, Macad::Occt::Pnt2d theP2)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP1 = &theP1;
    pin_ptr<Macad::Occt::Pnt2d> pp_theP2 = &theP2;
    ((::gp_Circ2d*)_NativeInstance)->Translate(*(gp_Pnt2d*)pp_theP1, *(gp_Pnt2d*)pp_theP2);
}

Macad::Occt::gp_Circ2d^ Macad::Occt::gp_Circ2d::Translated(Macad::Occt::Pnt2d theP1, Macad::Occt::Pnt2d theP2)
{
    ::gp_Circ2d* _result = new ::gp_Circ2d();
    pin_ptr<Macad::Occt::Pnt2d> pp_theP1 = &theP1;
    pin_ptr<Macad::Occt::Pnt2d> pp_theP2 = &theP2;
    *_result = ((::gp_Circ2d*)_NativeInstance)->Translated(*(gp_Pnt2d*)pp_theP1, *(gp_Pnt2d*)pp_theP2);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Circ2d(_result);
}



//---------------------------------------------------------------------
//  Class  gp_Cone
//---------------------------------------------------------------------

Macad::Occt::gp_Cone::gp_Cone()
    : Macad::Occt::BaseClass<::gp_Cone>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Cone();
}

Macad::Occt::gp_Cone::gp_Cone(Macad::Occt::Ax3 theA3, double theAng, double theRadius)
    : Macad::Occt::BaseClass<::gp_Cone>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax3> pp_theA3 = &theA3;
    _NativeInstance = new ::gp_Cone(*(gp_Ax3*)pp_theA3, theAng, theRadius);
}

void Macad::Occt::gp_Cone::SetAxis(Macad::Occt::Ax1 theA1)
{
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    ((::gp_Cone*)_NativeInstance)->SetAxis(*(gp_Ax1*)pp_theA1);
}

void Macad::Occt::gp_Cone::SetLocation(Macad::Occt::Pnt theLoc)
{
    pin_ptr<Macad::Occt::Pnt> pp_theLoc = &theLoc;
    ((::gp_Cone*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_theLoc);
}

void Macad::Occt::gp_Cone::SetPosition(Macad::Occt::Ax3 theA3)
{
    pin_ptr<Macad::Occt::Ax3> pp_theA3 = &theA3;
    ((::gp_Cone*)_NativeInstance)->SetPosition(*(gp_Ax3*)pp_theA3);
}

void Macad::Occt::gp_Cone::SetRadius(double theR)
{
    ((::gp_Cone*)_NativeInstance)->SetRadius(theR);
}

void Macad::Occt::gp_Cone::SetSemiAngle(double theAng)
{
    ((::gp_Cone*)_NativeInstance)->SetSemiAngle(theAng);
}

Macad::Occt::Pnt Macad::Occt::gp_Cone::Apex()
{
    ::gp_Pnt _nativeResult = ((::gp_Cone*)_NativeInstance)->Apex();
    return Macad::Occt::Pnt(_nativeResult);
}

void Macad::Occt::gp_Cone::UReverse()
{
    ((::gp_Cone*)_NativeInstance)->UReverse();
}

void Macad::Occt::gp_Cone::VReverse()
{
    ((::gp_Cone*)_NativeInstance)->VReverse();
}

bool Macad::Occt::gp_Cone::Direct()
{
    bool _result = ((::gp_Cone*)_NativeInstance)->Direct();
    return _result;
}

Macad::Occt::Ax1 Macad::Occt::gp_Cone::Axis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Cone*)_NativeInstance)->Axis();
    return Macad::Occt::Ax1(_nativeResult);
}

void Macad::Occt::gp_Cone::Coefficients(double% theA1, double% theA2, double% theA3, double% theB1, double% theB2, double% theB3, double% theC1, double% theC2, double% theC3, double% theD)
{
    pin_ptr<double> pp_theA1 = &theA1;
    pin_ptr<double> pp_theA2 = &theA2;
    pin_ptr<double> pp_theA3 = &theA3;
    pin_ptr<double> pp_theB1 = &theB1;
    pin_ptr<double> pp_theB2 = &theB2;
    pin_ptr<double> pp_theB3 = &theB3;
    pin_ptr<double> pp_theC1 = &theC1;
    pin_ptr<double> pp_theC2 = &theC2;
    pin_ptr<double> pp_theC3 = &theC3;
    pin_ptr<double> pp_theD = &theD;
    ((::gp_Cone*)_NativeInstance)->Coefficients(*(double*)pp_theA1, *(double*)pp_theA2, *(double*)pp_theA3, *(double*)pp_theB1, *(double*)pp_theB2, *(double*)pp_theB3, *(double*)pp_theC1, *(double*)pp_theC2, *(double*)pp_theC3, *(double*)pp_theD);
}

Macad::Occt::Pnt Macad::Occt::gp_Cone::Location()
{
    ::gp_Pnt _nativeResult = ((::gp_Cone*)_NativeInstance)->Location();
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Ax3 Macad::Occt::gp_Cone::Position()
{
    ::gp_Ax3 _nativeResult = ((::gp_Cone*)_NativeInstance)->Position();
    return Macad::Occt::Ax3(_nativeResult);
}

double Macad::Occt::gp_Cone::RefRadius()
{
    double _result = ((::gp_Cone*)_NativeInstance)->RefRadius();
    return _result;
}

double Macad::Occt::gp_Cone::SemiAngle()
{
    double _result = ((::gp_Cone*)_NativeInstance)->SemiAngle();
    return _result;
}

Macad::Occt::Ax1 Macad::Occt::gp_Cone::XAxis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Cone*)_NativeInstance)->XAxis();
    return Macad::Occt::Ax1(_nativeResult);
}

Macad::Occt::Ax1 Macad::Occt::gp_Cone::YAxis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Cone*)_NativeInstance)->YAxis();
    return Macad::Occt::Ax1(_nativeResult);
}

void Macad::Occt::gp_Cone::Mirror(Macad::Occt::Pnt theP)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    ((::gp_Cone*)_NativeInstance)->Mirror(*(gp_Pnt*)pp_theP);
}

Macad::Occt::gp_Cone^ Macad::Occt::gp_Cone::Mirrored(Macad::Occt::Pnt theP)
{
    ::gp_Cone* _result = new ::gp_Cone();
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    *_result = ((::gp_Cone*)_NativeInstance)->Mirrored(*(gp_Pnt*)pp_theP);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cone(_result);
}

void Macad::Occt::gp_Cone::Mirror(Macad::Occt::Ax1 theA1)
{
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    ((::gp_Cone*)_NativeInstance)->Mirror(*(gp_Ax1*)pp_theA1);
}

Macad::Occt::gp_Cone^ Macad::Occt::gp_Cone::Mirrored(Macad::Occt::Ax1 theA1)
{
    ::gp_Cone* _result = new ::gp_Cone();
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Cone*)_NativeInstance)->Mirrored(*(gp_Ax1*)pp_theA1);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cone(_result);
}

void Macad::Occt::gp_Cone::Mirror(Macad::Occt::Ax2 theA2)
{
    pin_ptr<Macad::Occt::Ax2> pp_theA2 = &theA2;
    ((::gp_Cone*)_NativeInstance)->Mirror(*(gp_Ax2*)pp_theA2);
}

Macad::Occt::gp_Cone^ Macad::Occt::gp_Cone::Mirrored(Macad::Occt::Ax2 theA2)
{
    ::gp_Cone* _result = new ::gp_Cone();
    pin_ptr<Macad::Occt::Ax2> pp_theA2 = &theA2;
    *_result = ((::gp_Cone*)_NativeInstance)->Mirrored(*(gp_Ax2*)pp_theA2);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cone(_result);
}

void Macad::Occt::gp_Cone::Rotate(Macad::Occt::Ax1 theA1, double theAng)
{
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    ((::gp_Cone*)_NativeInstance)->Rotate(*(gp_Ax1*)pp_theA1, theAng);
}

Macad::Occt::gp_Cone^ Macad::Occt::gp_Cone::Rotated(Macad::Occt::Ax1 theA1, double theAng)
{
    ::gp_Cone* _result = new ::gp_Cone();
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Cone*)_NativeInstance)->Rotated(*(gp_Ax1*)pp_theA1, theAng);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cone(_result);
}

void Macad::Occt::gp_Cone::Scale(Macad::Occt::Pnt theP, double theS)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    ((::gp_Cone*)_NativeInstance)->Scale(*(gp_Pnt*)pp_theP, theS);
}

Macad::Occt::gp_Cone^ Macad::Occt::gp_Cone::Scaled(Macad::Occt::Pnt theP, double theS)
{
    ::gp_Cone* _result = new ::gp_Cone();
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    *_result = ((::gp_Cone*)_NativeInstance)->Scaled(*(gp_Pnt*)pp_theP, theS);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cone(_result);
}

void Macad::Occt::gp_Cone::Transform(Macad::Occt::Trsf theT)
{
    pin_ptr<Macad::Occt::Trsf> pp_theT = &theT;
    ((::gp_Cone*)_NativeInstance)->Transform(*(gp_Trsf*)pp_theT);
}

Macad::Occt::gp_Cone^ Macad::Occt::gp_Cone::Transformed(Macad::Occt::Trsf theT)
{
    ::gp_Cone* _result = new ::gp_Cone();
    pin_ptr<Macad::Occt::Trsf> pp_theT = &theT;
    *_result = ((::gp_Cone*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_theT);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cone(_result);
}

void Macad::Occt::gp_Cone::Translate(Macad::Occt::Vec theV)
{
    pin_ptr<Macad::Occt::Vec> pp_theV = &theV;
    ((::gp_Cone*)_NativeInstance)->Translate(*(gp_Vec*)pp_theV);
}

Macad::Occt::gp_Cone^ Macad::Occt::gp_Cone::Translated(Macad::Occt::Vec theV)
{
    ::gp_Cone* _result = new ::gp_Cone();
    pin_ptr<Macad::Occt::Vec> pp_theV = &theV;
    *_result = ((::gp_Cone*)_NativeInstance)->Translated(*(gp_Vec*)pp_theV);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cone(_result);
}

void Macad::Occt::gp_Cone::Translate(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP1 = &theP1;
    pin_ptr<Macad::Occt::Pnt> pp_theP2 = &theP2;
    ((::gp_Cone*)_NativeInstance)->Translate(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
}

Macad::Occt::gp_Cone^ Macad::Occt::gp_Cone::Translated(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2)
{
    ::gp_Cone* _result = new ::gp_Cone();
    pin_ptr<Macad::Occt::Pnt> pp_theP1 = &theP1;
    pin_ptr<Macad::Occt::Pnt> pp_theP2 = &theP2;
    *_result = ((::gp_Cone*)_NativeInstance)->Translated(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cone(_result);
}



//---------------------------------------------------------------------
//  Class  gp_Cylinder
//---------------------------------------------------------------------

Macad::Occt::gp_Cylinder::gp_Cylinder()
    : Macad::Occt::BaseClass<::gp_Cylinder>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Cylinder();
}

Macad::Occt::gp_Cylinder::gp_Cylinder(Macad::Occt::Ax3 theA3, double theRadius)
    : Macad::Occt::BaseClass<::gp_Cylinder>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax3> pp_theA3 = &theA3;
    _NativeInstance = new ::gp_Cylinder(*(gp_Ax3*)pp_theA3, theRadius);
}

void Macad::Occt::gp_Cylinder::SetAxis(Macad::Occt::Ax1 theA1)
{
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    ((::gp_Cylinder*)_NativeInstance)->SetAxis(*(gp_Ax1*)pp_theA1);
}

void Macad::Occt::gp_Cylinder::SetLocation(Macad::Occt::Pnt theLoc)
{
    pin_ptr<Macad::Occt::Pnt> pp_theLoc = &theLoc;
    ((::gp_Cylinder*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_theLoc);
}

void Macad::Occt::gp_Cylinder::SetPosition(Macad::Occt::Ax3 theA3)
{
    pin_ptr<Macad::Occt::Ax3> pp_theA3 = &theA3;
    ((::gp_Cylinder*)_NativeInstance)->SetPosition(*(gp_Ax3*)pp_theA3);
}

void Macad::Occt::gp_Cylinder::SetRadius(double theR)
{
    ((::gp_Cylinder*)_NativeInstance)->SetRadius(theR);
}

void Macad::Occt::gp_Cylinder::UReverse()
{
    ((::gp_Cylinder*)_NativeInstance)->UReverse();
}

void Macad::Occt::gp_Cylinder::VReverse()
{
    ((::gp_Cylinder*)_NativeInstance)->VReverse();
}

bool Macad::Occt::gp_Cylinder::Direct()
{
    bool _result = ((::gp_Cylinder*)_NativeInstance)->Direct();
    return _result;
}

Macad::Occt::Ax1 Macad::Occt::gp_Cylinder::Axis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Cylinder*)_NativeInstance)->Axis();
    return Macad::Occt::Ax1(_nativeResult);
}

void Macad::Occt::gp_Cylinder::Coefficients(double% theA1, double% theA2, double% theA3, double% theB1, double% theB2, double% theB3, double% theC1, double% theC2, double% theC3, double% theD)
{
    pin_ptr<double> pp_theA1 = &theA1;
    pin_ptr<double> pp_theA2 = &theA2;
    pin_ptr<double> pp_theA3 = &theA3;
    pin_ptr<double> pp_theB1 = &theB1;
    pin_ptr<double> pp_theB2 = &theB2;
    pin_ptr<double> pp_theB3 = &theB3;
    pin_ptr<double> pp_theC1 = &theC1;
    pin_ptr<double> pp_theC2 = &theC2;
    pin_ptr<double> pp_theC3 = &theC3;
    pin_ptr<double> pp_theD = &theD;
    ((::gp_Cylinder*)_NativeInstance)->Coefficients(*(double*)pp_theA1, *(double*)pp_theA2, *(double*)pp_theA3, *(double*)pp_theB1, *(double*)pp_theB2, *(double*)pp_theB3, *(double*)pp_theC1, *(double*)pp_theC2, *(double*)pp_theC3, *(double*)pp_theD);
}

Macad::Occt::Pnt Macad::Occt::gp_Cylinder::Location()
{
    ::gp_Pnt _nativeResult = ((::gp_Cylinder*)_NativeInstance)->Location();
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Ax3 Macad::Occt::gp_Cylinder::Position()
{
    ::gp_Ax3 _nativeResult = ((::gp_Cylinder*)_NativeInstance)->Position();
    return Macad::Occt::Ax3(_nativeResult);
}

double Macad::Occt::gp_Cylinder::Radius()
{
    double _result = ((::gp_Cylinder*)_NativeInstance)->Radius();
    return _result;
}

Macad::Occt::Ax1 Macad::Occt::gp_Cylinder::XAxis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Cylinder*)_NativeInstance)->XAxis();
    return Macad::Occt::Ax1(_nativeResult);
}

Macad::Occt::Ax1 Macad::Occt::gp_Cylinder::YAxis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Cylinder*)_NativeInstance)->YAxis();
    return Macad::Occt::Ax1(_nativeResult);
}

void Macad::Occt::gp_Cylinder::Mirror(Macad::Occt::Pnt theP)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    ((::gp_Cylinder*)_NativeInstance)->Mirror(*(gp_Pnt*)pp_theP);
}

Macad::Occt::gp_Cylinder^ Macad::Occt::gp_Cylinder::Mirrored(Macad::Occt::Pnt theP)
{
    ::gp_Cylinder* _result = new ::gp_Cylinder();
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    *_result = ((::gp_Cylinder*)_NativeInstance)->Mirrored(*(gp_Pnt*)pp_theP);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cylinder(_result);
}

void Macad::Occt::gp_Cylinder::Mirror(Macad::Occt::Ax1 theA1)
{
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    ((::gp_Cylinder*)_NativeInstance)->Mirror(*(gp_Ax1*)pp_theA1);
}

Macad::Occt::gp_Cylinder^ Macad::Occt::gp_Cylinder::Mirrored(Macad::Occt::Ax1 theA1)
{
    ::gp_Cylinder* _result = new ::gp_Cylinder();
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Cylinder*)_NativeInstance)->Mirrored(*(gp_Ax1*)pp_theA1);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cylinder(_result);
}

void Macad::Occt::gp_Cylinder::Mirror(Macad::Occt::Ax2 theA2)
{
    pin_ptr<Macad::Occt::Ax2> pp_theA2 = &theA2;
    ((::gp_Cylinder*)_NativeInstance)->Mirror(*(gp_Ax2*)pp_theA2);
}

Macad::Occt::gp_Cylinder^ Macad::Occt::gp_Cylinder::Mirrored(Macad::Occt::Ax2 theA2)
{
    ::gp_Cylinder* _result = new ::gp_Cylinder();
    pin_ptr<Macad::Occt::Ax2> pp_theA2 = &theA2;
    *_result = ((::gp_Cylinder*)_NativeInstance)->Mirrored(*(gp_Ax2*)pp_theA2);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cylinder(_result);
}

void Macad::Occt::gp_Cylinder::Rotate(Macad::Occt::Ax1 theA1, double theAng)
{
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    ((::gp_Cylinder*)_NativeInstance)->Rotate(*(gp_Ax1*)pp_theA1, theAng);
}

Macad::Occt::gp_Cylinder^ Macad::Occt::gp_Cylinder::Rotated(Macad::Occt::Ax1 theA1, double theAng)
{
    ::gp_Cylinder* _result = new ::gp_Cylinder();
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Cylinder*)_NativeInstance)->Rotated(*(gp_Ax1*)pp_theA1, theAng);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cylinder(_result);
}

void Macad::Occt::gp_Cylinder::Scale(Macad::Occt::Pnt theP, double theS)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    ((::gp_Cylinder*)_NativeInstance)->Scale(*(gp_Pnt*)pp_theP, theS);
}

Macad::Occt::gp_Cylinder^ Macad::Occt::gp_Cylinder::Scaled(Macad::Occt::Pnt theP, double theS)
{
    ::gp_Cylinder* _result = new ::gp_Cylinder();
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    *_result = ((::gp_Cylinder*)_NativeInstance)->Scaled(*(gp_Pnt*)pp_theP, theS);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cylinder(_result);
}

void Macad::Occt::gp_Cylinder::Transform(Macad::Occt::Trsf theT)
{
    pin_ptr<Macad::Occt::Trsf> pp_theT = &theT;
    ((::gp_Cylinder*)_NativeInstance)->Transform(*(gp_Trsf*)pp_theT);
}

Macad::Occt::gp_Cylinder^ Macad::Occt::gp_Cylinder::Transformed(Macad::Occt::Trsf theT)
{
    ::gp_Cylinder* _result = new ::gp_Cylinder();
    pin_ptr<Macad::Occt::Trsf> pp_theT = &theT;
    *_result = ((::gp_Cylinder*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_theT);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cylinder(_result);
}

void Macad::Occt::gp_Cylinder::Translate(Macad::Occt::Vec theV)
{
    pin_ptr<Macad::Occt::Vec> pp_theV = &theV;
    ((::gp_Cylinder*)_NativeInstance)->Translate(*(gp_Vec*)pp_theV);
}

Macad::Occt::gp_Cylinder^ Macad::Occt::gp_Cylinder::Translated(Macad::Occt::Vec theV)
{
    ::gp_Cylinder* _result = new ::gp_Cylinder();
    pin_ptr<Macad::Occt::Vec> pp_theV = &theV;
    *_result = ((::gp_Cylinder*)_NativeInstance)->Translated(*(gp_Vec*)pp_theV);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cylinder(_result);
}

void Macad::Occt::gp_Cylinder::Translate(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP1 = &theP1;
    pin_ptr<Macad::Occt::Pnt> pp_theP2 = &theP2;
    ((::gp_Cylinder*)_NativeInstance)->Translate(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
}

Macad::Occt::gp_Cylinder^ Macad::Occt::gp_Cylinder::Translated(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2)
{
    ::gp_Cylinder* _result = new ::gp_Cylinder();
    pin_ptr<Macad::Occt::Pnt> pp_theP1 = &theP1;
    pin_ptr<Macad::Occt::Pnt> pp_theP2 = &theP2;
    *_result = ((::gp_Cylinder*)_NativeInstance)->Translated(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Cylinder(_result);
}



//---------------------------------------------------------------------
//  Class  gp_Elips
//---------------------------------------------------------------------

Macad::Occt::gp_Elips::gp_Elips()
    : Macad::Occt::BaseClass<::gp_Elips>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Elips();
}

Macad::Occt::gp_Elips::gp_Elips(Macad::Occt::Ax2 theA2, double theMajorRadius, double theMinorRadius)
    : Macad::Occt::BaseClass<::gp_Elips>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2> pp_theA2 = &theA2;
    _NativeInstance = new ::gp_Elips(*(gp_Ax2*)pp_theA2, theMajorRadius, theMinorRadius);
}

void Macad::Occt::gp_Elips::SetAxis(Macad::Occt::Ax1 theA1)
{
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    ((::gp_Elips*)_NativeInstance)->SetAxis(*(gp_Ax1*)pp_theA1);
}

void Macad::Occt::gp_Elips::SetLocation(Macad::Occt::Pnt theP)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    ((::gp_Elips*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_theP);
}

void Macad::Occt::gp_Elips::SetMajorRadius(double theMajorRadius)
{
    ((::gp_Elips*)_NativeInstance)->SetMajorRadius(theMajorRadius);
}

void Macad::Occt::gp_Elips::SetMinorRadius(double theMinorRadius)
{
    ((::gp_Elips*)_NativeInstance)->SetMinorRadius(theMinorRadius);
}

void Macad::Occt::gp_Elips::SetPosition(Macad::Occt::Ax2 theA2)
{
    pin_ptr<Macad::Occt::Ax2> pp_theA2 = &theA2;
    ((::gp_Elips*)_NativeInstance)->SetPosition(*(gp_Ax2*)pp_theA2);
}

double Macad::Occt::gp_Elips::Area()
{
    double _result = ((::gp_Elips*)_NativeInstance)->Area();
    return _result;
}

Macad::Occt::Ax1 Macad::Occt::gp_Elips::Axis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Elips*)_NativeInstance)->Axis();
    return Macad::Occt::Ax1(_nativeResult);
}

Macad::Occt::Ax1 Macad::Occt::gp_Elips::Directrix1()
{
    ::gp_Ax1 _nativeResult = ((::gp_Elips*)_NativeInstance)->Directrix1();
    return Macad::Occt::Ax1(_nativeResult);
}

Macad::Occt::Ax1 Macad::Occt::gp_Elips::Directrix2()
{
    ::gp_Ax1 _nativeResult = ((::gp_Elips*)_NativeInstance)->Directrix2();
    return Macad::Occt::Ax1(_nativeResult);
}

double Macad::Occt::gp_Elips::Eccentricity()
{
    double _result = ((::gp_Elips*)_NativeInstance)->Eccentricity();
    return _result;
}

double Macad::Occt::gp_Elips::Focal()
{
    double _result = ((::gp_Elips*)_NativeInstance)->Focal();
    return _result;
}

Macad::Occt::Pnt Macad::Occt::gp_Elips::Focus1()
{
    ::gp_Pnt _nativeResult = ((::gp_Elips*)_NativeInstance)->Focus1();
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Pnt Macad::Occt::gp_Elips::Focus2()
{
    ::gp_Pnt _nativeResult = ((::gp_Elips*)_NativeInstance)->Focus2();
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Pnt Macad::Occt::gp_Elips::Location()
{
    ::gp_Pnt _nativeResult = ((::gp_Elips*)_NativeInstance)->Location();
    return Macad::Occt::Pnt(_nativeResult);
}

double Macad::Occt::gp_Elips::MajorRadius()
{
    double _result = ((::gp_Elips*)_NativeInstance)->MajorRadius();
    return _result;
}

double Macad::Occt::gp_Elips::MinorRadius()
{
    double _result = ((::gp_Elips*)_NativeInstance)->MinorRadius();
    return _result;
}

double Macad::Occt::gp_Elips::Parameter()
{
    double _result = ((::gp_Elips*)_NativeInstance)->Parameter();
    return _result;
}

Macad::Occt::Ax2 Macad::Occt::gp_Elips::Position()
{
    ::gp_Ax2 _nativeResult = ((::gp_Elips*)_NativeInstance)->Position();
    return Macad::Occt::Ax2(_nativeResult);
}

Macad::Occt::Ax1 Macad::Occt::gp_Elips::XAxis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Elips*)_NativeInstance)->XAxis();
    return Macad::Occt::Ax1(_nativeResult);
}

Macad::Occt::Ax1 Macad::Occt::gp_Elips::YAxis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Elips*)_NativeInstance)->YAxis();
    return Macad::Occt::Ax1(_nativeResult);
}

void Macad::Occt::gp_Elips::Mirror(Macad::Occt::Pnt theP)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    ((::gp_Elips*)_NativeInstance)->Mirror(*(gp_Pnt*)pp_theP);
}

Macad::Occt::gp_Elips^ Macad::Occt::gp_Elips::Mirrored(Macad::Occt::Pnt theP)
{
    ::gp_Elips* _result = new ::gp_Elips();
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    *_result = ((::gp_Elips*)_NativeInstance)->Mirrored(*(gp_Pnt*)pp_theP);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips(_result);
}

void Macad::Occt::gp_Elips::Mirror(Macad::Occt::Ax1 theA1)
{
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    ((::gp_Elips*)_NativeInstance)->Mirror(*(gp_Ax1*)pp_theA1);
}

Macad::Occt::gp_Elips^ Macad::Occt::gp_Elips::Mirrored(Macad::Occt::Ax1 theA1)
{
    ::gp_Elips* _result = new ::gp_Elips();
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Elips*)_NativeInstance)->Mirrored(*(gp_Ax1*)pp_theA1);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips(_result);
}

void Macad::Occt::gp_Elips::Mirror(Macad::Occt::Ax2 theA2)
{
    pin_ptr<Macad::Occt::Ax2> pp_theA2 = &theA2;
    ((::gp_Elips*)_NativeInstance)->Mirror(*(gp_Ax2*)pp_theA2);
}

Macad::Occt::gp_Elips^ Macad::Occt::gp_Elips::Mirrored(Macad::Occt::Ax2 theA2)
{
    ::gp_Elips* _result = new ::gp_Elips();
    pin_ptr<Macad::Occt::Ax2> pp_theA2 = &theA2;
    *_result = ((::gp_Elips*)_NativeInstance)->Mirrored(*(gp_Ax2*)pp_theA2);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips(_result);
}

void Macad::Occt::gp_Elips::Rotate(Macad::Occt::Ax1 theA1, double theAng)
{
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    ((::gp_Elips*)_NativeInstance)->Rotate(*(gp_Ax1*)pp_theA1, theAng);
}

Macad::Occt::gp_Elips^ Macad::Occt::gp_Elips::Rotated(Macad::Occt::Ax1 theA1, double theAng)
{
    ::gp_Elips* _result = new ::gp_Elips();
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Elips*)_NativeInstance)->Rotated(*(gp_Ax1*)pp_theA1, theAng);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips(_result);
}

void Macad::Occt::gp_Elips::Scale(Macad::Occt::Pnt theP, double theS)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    ((::gp_Elips*)_NativeInstance)->Scale(*(gp_Pnt*)pp_theP, theS);
}

Macad::Occt::gp_Elips^ Macad::Occt::gp_Elips::Scaled(Macad::Occt::Pnt theP, double theS)
{
    ::gp_Elips* _result = new ::gp_Elips();
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    *_result = ((::gp_Elips*)_NativeInstance)->Scaled(*(gp_Pnt*)pp_theP, theS);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips(_result);
}

void Macad::Occt::gp_Elips::Transform(Macad::Occt::Trsf theT)
{
    pin_ptr<Macad::Occt::Trsf> pp_theT = &theT;
    ((::gp_Elips*)_NativeInstance)->Transform(*(gp_Trsf*)pp_theT);
}

Macad::Occt::gp_Elips^ Macad::Occt::gp_Elips::Transformed(Macad::Occt::Trsf theT)
{
    ::gp_Elips* _result = new ::gp_Elips();
    pin_ptr<Macad::Occt::Trsf> pp_theT = &theT;
    *_result = ((::gp_Elips*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_theT);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips(_result);
}

void Macad::Occt::gp_Elips::Translate(Macad::Occt::Vec theV)
{
    pin_ptr<Macad::Occt::Vec> pp_theV = &theV;
    ((::gp_Elips*)_NativeInstance)->Translate(*(gp_Vec*)pp_theV);
}

Macad::Occt::gp_Elips^ Macad::Occt::gp_Elips::Translated(Macad::Occt::Vec theV)
{
    ::gp_Elips* _result = new ::gp_Elips();
    pin_ptr<Macad::Occt::Vec> pp_theV = &theV;
    *_result = ((::gp_Elips*)_NativeInstance)->Translated(*(gp_Vec*)pp_theV);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips(_result);
}

void Macad::Occt::gp_Elips::Translate(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP1 = &theP1;
    pin_ptr<Macad::Occt::Pnt> pp_theP2 = &theP2;
    ((::gp_Elips*)_NativeInstance)->Translate(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
}

Macad::Occt::gp_Elips^ Macad::Occt::gp_Elips::Translated(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2)
{
    ::gp_Elips* _result = new ::gp_Elips();
    pin_ptr<Macad::Occt::Pnt> pp_theP1 = &theP1;
    pin_ptr<Macad::Occt::Pnt> pp_theP2 = &theP2;
    *_result = ((::gp_Elips*)_NativeInstance)->Translated(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips(_result);
}



//---------------------------------------------------------------------
//  Class  gp_Elips2d
//---------------------------------------------------------------------

Macad::Occt::gp_Elips2d::gp_Elips2d()
    : Macad::Occt::BaseClass<::gp_Elips2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Elips2d();
}

Macad::Occt::gp_Elips2d::gp_Elips2d(Macad::Occt::Ax2d theMajorAxis, double theMajorRadius, double theMinorRadius, bool theIsSense)
    : Macad::Occt::BaseClass<::gp_Elips2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2d> pp_theMajorAxis = &theMajorAxis;
    _NativeInstance = new ::gp_Elips2d(*(gp_Ax2d*)pp_theMajorAxis, theMajorRadius, theMinorRadius, theIsSense);
}

Macad::Occt::gp_Elips2d::gp_Elips2d(Macad::Occt::Ax2d theMajorAxis, double theMajorRadius, double theMinorRadius)
    : Macad::Occt::BaseClass<::gp_Elips2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2d> pp_theMajorAxis = &theMajorAxis;
    _NativeInstance = new ::gp_Elips2d(*(gp_Ax2d*)pp_theMajorAxis, theMajorRadius, theMinorRadius, true);
}

Macad::Occt::gp_Elips2d::gp_Elips2d(Macad::Occt::Ax22d theA, double theMajorRadius, double theMinorRadius)
    : Macad::Occt::BaseClass<::gp_Elips2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax22d> pp_theA = &theA;
    _NativeInstance = new ::gp_Elips2d(*(gp_Ax22d*)pp_theA, theMajorRadius, theMinorRadius);
}

void Macad::Occt::gp_Elips2d::SetLocation(Macad::Occt::Pnt2d theP)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    ((::gp_Elips2d*)_NativeInstance)->SetLocation(*(gp_Pnt2d*)pp_theP);
}

void Macad::Occt::gp_Elips2d::SetMajorRadius(double theMajorRadius)
{
    ((::gp_Elips2d*)_NativeInstance)->SetMajorRadius(theMajorRadius);
}

void Macad::Occt::gp_Elips2d::SetMinorRadius(double theMinorRadius)
{
    ((::gp_Elips2d*)_NativeInstance)->SetMinorRadius(theMinorRadius);
}

void Macad::Occt::gp_Elips2d::SetAxis(Macad::Occt::Ax22d theA)
{
    pin_ptr<Macad::Occt::Ax22d> pp_theA = &theA;
    ((::gp_Elips2d*)_NativeInstance)->SetAxis(*(gp_Ax22d*)pp_theA);
}

void Macad::Occt::gp_Elips2d::SetXAxis(Macad::Occt::Ax2d theA)
{
    pin_ptr<Macad::Occt::Ax2d> pp_theA = &theA;
    ((::gp_Elips2d*)_NativeInstance)->SetXAxis(*(gp_Ax2d*)pp_theA);
}

void Macad::Occt::gp_Elips2d::SetYAxis(Macad::Occt::Ax2d theA)
{
    pin_ptr<Macad::Occt::Ax2d> pp_theA = &theA;
    ((::gp_Elips2d*)_NativeInstance)->SetYAxis(*(gp_Ax2d*)pp_theA);
}

double Macad::Occt::gp_Elips2d::Area()
{
    double _result = ((::gp_Elips2d*)_NativeInstance)->Area();
    return _result;
}

void Macad::Occt::gp_Elips2d::Coefficients(double% theA, double% theB, double% theC, double% theD, double% theE, double% theF)
{
    pin_ptr<double> pp_theA = &theA;
    pin_ptr<double> pp_theB = &theB;
    pin_ptr<double> pp_theC = &theC;
    pin_ptr<double> pp_theD = &theD;
    pin_ptr<double> pp_theE = &theE;
    pin_ptr<double> pp_theF = &theF;
    ((::gp_Elips2d*)_NativeInstance)->Coefficients(*(double*)pp_theA, *(double*)pp_theB, *(double*)pp_theC, *(double*)pp_theD, *(double*)pp_theE, *(double*)pp_theF);
}

Macad::Occt::Ax2d Macad::Occt::gp_Elips2d::Directrix1()
{
    ::gp_Ax2d _nativeResult = ((::gp_Elips2d*)_NativeInstance)->Directrix1();
    return Macad::Occt::Ax2d(_nativeResult);
}

Macad::Occt::Ax2d Macad::Occt::gp_Elips2d::Directrix2()
{
    ::gp_Ax2d _nativeResult = ((::gp_Elips2d*)_NativeInstance)->Directrix2();
    return Macad::Occt::Ax2d(_nativeResult);
}

double Macad::Occt::gp_Elips2d::Eccentricity()
{
    double _result = ((::gp_Elips2d*)_NativeInstance)->Eccentricity();
    return _result;
}

double Macad::Occt::gp_Elips2d::Focal()
{
    double _result = ((::gp_Elips2d*)_NativeInstance)->Focal();
    return _result;
}

Macad::Occt::Pnt2d Macad::Occt::gp_Elips2d::Focus1()
{
    ::gp_Pnt2d _nativeResult = ((::gp_Elips2d*)_NativeInstance)->Focus1();
    return Macad::Occt::Pnt2d(_nativeResult);
}

Macad::Occt::Pnt2d Macad::Occt::gp_Elips2d::Focus2()
{
    ::gp_Pnt2d _nativeResult = ((::gp_Elips2d*)_NativeInstance)->Focus2();
    return Macad::Occt::Pnt2d(_nativeResult);
}

Macad::Occt::Pnt2d Macad::Occt::gp_Elips2d::Location()
{
    ::gp_Pnt2d _nativeResult = ((::gp_Elips2d*)_NativeInstance)->Location();
    return Macad::Occt::Pnt2d(_nativeResult);
}

double Macad::Occt::gp_Elips2d::MajorRadius()
{
    double _result = ((::gp_Elips2d*)_NativeInstance)->MajorRadius();
    return _result;
}

double Macad::Occt::gp_Elips2d::MinorRadius()
{
    double _result = ((::gp_Elips2d*)_NativeInstance)->MinorRadius();
    return _result;
}

double Macad::Occt::gp_Elips2d::Parameter()
{
    double _result = ((::gp_Elips2d*)_NativeInstance)->Parameter();
    return _result;
}

Macad::Occt::Ax22d Macad::Occt::gp_Elips2d::Axis()
{
    ::gp_Ax22d _nativeResult = ((::gp_Elips2d*)_NativeInstance)->Axis();
    return Macad::Occt::Ax22d(_nativeResult);
}

Macad::Occt::Ax2d Macad::Occt::gp_Elips2d::XAxis()
{
    ::gp_Ax2d _nativeResult = ((::gp_Elips2d*)_NativeInstance)->XAxis();
    return Macad::Occt::Ax2d(_nativeResult);
}

Macad::Occt::Ax2d Macad::Occt::gp_Elips2d::YAxis()
{
    ::gp_Ax2d _nativeResult = ((::gp_Elips2d*)_NativeInstance)->YAxis();
    return Macad::Occt::Ax2d(_nativeResult);
}

void Macad::Occt::gp_Elips2d::Reverse()
{
    ((::gp_Elips2d*)_NativeInstance)->Reverse();
}

Macad::Occt::gp_Elips2d^ Macad::Occt::gp_Elips2d::Reversed()
{
    ::gp_Elips2d* _result = new ::gp_Elips2d();
    *_result = ((::gp_Elips2d*)_NativeInstance)->Reversed();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips2d(_result);
}

bool Macad::Occt::gp_Elips2d::IsDirect()
{
    bool _result = ((::gp_Elips2d*)_NativeInstance)->IsDirect();
    return _result;
}

void Macad::Occt::gp_Elips2d::Mirror(Macad::Occt::Pnt2d theP)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    ((::gp_Elips2d*)_NativeInstance)->Mirror(*(gp_Pnt2d*)pp_theP);
}

Macad::Occt::gp_Elips2d^ Macad::Occt::gp_Elips2d::Mirrored(Macad::Occt::Pnt2d theP)
{
    ::gp_Elips2d* _result = new ::gp_Elips2d();
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    *_result = ((::gp_Elips2d*)_NativeInstance)->Mirrored(*(gp_Pnt2d*)pp_theP);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips2d(_result);
}

void Macad::Occt::gp_Elips2d::Mirror(Macad::Occt::Ax2d theA)
{
    pin_ptr<Macad::Occt::Ax2d> pp_theA = &theA;
    ((::gp_Elips2d*)_NativeInstance)->Mirror(*(gp_Ax2d*)pp_theA);
}

Macad::Occt::gp_Elips2d^ Macad::Occt::gp_Elips2d::Mirrored(Macad::Occt::Ax2d theA)
{
    ::gp_Elips2d* _result = new ::gp_Elips2d();
    pin_ptr<Macad::Occt::Ax2d> pp_theA = &theA;
    *_result = ((::gp_Elips2d*)_NativeInstance)->Mirrored(*(gp_Ax2d*)pp_theA);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips2d(_result);
}

void Macad::Occt::gp_Elips2d::Rotate(Macad::Occt::Pnt2d theP, double theAng)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    ((::gp_Elips2d*)_NativeInstance)->Rotate(*(gp_Pnt2d*)pp_theP, theAng);
}

Macad::Occt::gp_Elips2d^ Macad::Occt::gp_Elips2d::Rotated(Macad::Occt::Pnt2d theP, double theAng)
{
    ::gp_Elips2d* _result = new ::gp_Elips2d();
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    *_result = ((::gp_Elips2d*)_NativeInstance)->Rotated(*(gp_Pnt2d*)pp_theP, theAng);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips2d(_result);
}

void Macad::Occt::gp_Elips2d::Scale(Macad::Occt::Pnt2d theP, double theS)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    ((::gp_Elips2d*)_NativeInstance)->Scale(*(gp_Pnt2d*)pp_theP, theS);
}

Macad::Occt::gp_Elips2d^ Macad::Occt::gp_Elips2d::Scaled(Macad::Occt::Pnt2d theP, double theS)
{
    ::gp_Elips2d* _result = new ::gp_Elips2d();
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    *_result = ((::gp_Elips2d*)_NativeInstance)->Scaled(*(gp_Pnt2d*)pp_theP, theS);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips2d(_result);
}

void Macad::Occt::gp_Elips2d::Transform(Macad::Occt::Trsf2d theT)
{
    pin_ptr<Macad::Occt::Trsf2d> pp_theT = &theT;
    ((::gp_Elips2d*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_theT);
}

Macad::Occt::gp_Elips2d^ Macad::Occt::gp_Elips2d::Transformed(Macad::Occt::Trsf2d theT)
{
    ::gp_Elips2d* _result = new ::gp_Elips2d();
    pin_ptr<Macad::Occt::Trsf2d> pp_theT = &theT;
    *_result = ((::gp_Elips2d*)_NativeInstance)->Transformed(*(gp_Trsf2d*)pp_theT);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips2d(_result);
}

void Macad::Occt::gp_Elips2d::Translate(Macad::Occt::Vec2d theV)
{
    pin_ptr<Macad::Occt::Vec2d> pp_theV = &theV;
    ((::gp_Elips2d*)_NativeInstance)->Translate(*(gp_Vec2d*)pp_theV);
}

Macad::Occt::gp_Elips2d^ Macad::Occt::gp_Elips2d::Translated(Macad::Occt::Vec2d theV)
{
    ::gp_Elips2d* _result = new ::gp_Elips2d();
    pin_ptr<Macad::Occt::Vec2d> pp_theV = &theV;
    *_result = ((::gp_Elips2d*)_NativeInstance)->Translated(*(gp_Vec2d*)pp_theV);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips2d(_result);
}

void Macad::Occt::gp_Elips2d::Translate(Macad::Occt::Pnt2d theP1, Macad::Occt::Pnt2d theP2)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP1 = &theP1;
    pin_ptr<Macad::Occt::Pnt2d> pp_theP2 = &theP2;
    ((::gp_Elips2d*)_NativeInstance)->Translate(*(gp_Pnt2d*)pp_theP1, *(gp_Pnt2d*)pp_theP2);
}

Macad::Occt::gp_Elips2d^ Macad::Occt::gp_Elips2d::Translated(Macad::Occt::Pnt2d theP1, Macad::Occt::Pnt2d theP2)
{
    ::gp_Elips2d* _result = new ::gp_Elips2d();
    pin_ptr<Macad::Occt::Pnt2d> pp_theP1 = &theP1;
    pin_ptr<Macad::Occt::Pnt2d> pp_theP2 = &theP2;
    *_result = ((::gp_Elips2d*)_NativeInstance)->Translated(*(gp_Pnt2d*)pp_theP1, *(gp_Pnt2d*)pp_theP2);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Elips2d(_result);
}



//---------------------------------------------------------------------
//  Class  gp_GTrsf
//---------------------------------------------------------------------

Macad::Occt::gp_GTrsf::gp_GTrsf()
    : Macad::Occt::BaseClass<::gp_GTrsf>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_GTrsf();
}

Macad::Occt::gp_GTrsf::gp_GTrsf(Macad::Occt::Trsf theT)
    : Macad::Occt::BaseClass<::gp_GTrsf>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Trsf> pp_theT = &theT;
    _NativeInstance = new ::gp_GTrsf(*(gp_Trsf*)pp_theT);
}

Macad::Occt::gp_GTrsf::gp_GTrsf(Macad::Occt::Mat theM, Macad::Occt::XYZ theV)
    : Macad::Occt::BaseClass<::gp_GTrsf>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Mat> pp_theM = &theM;
    pin_ptr<Macad::Occt::XYZ> pp_theV = &theV;
    _NativeInstance = new ::gp_GTrsf(*(gp_Mat*)pp_theM, *(gp_XYZ*)pp_theV);
}

void Macad::Occt::gp_GTrsf::SetAffinity(Macad::Occt::Ax1 theA1, double theRatio)
{
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    ((::gp_GTrsf*)_NativeInstance)->SetAffinity(*(gp_Ax1*)pp_theA1, theRatio);
}

void Macad::Occt::gp_GTrsf::SetAffinity(Macad::Occt::Ax2 theA2, double theRatio)
{
    pin_ptr<Macad::Occt::Ax2> pp_theA2 = &theA2;
    ((::gp_GTrsf*)_NativeInstance)->SetAffinity(*(gp_Ax2*)pp_theA2, theRatio);
}

void Macad::Occt::gp_GTrsf::SetValue(int theRow, int theCol, double theValue)
{
    ((::gp_GTrsf*)_NativeInstance)->SetValue(theRow, theCol, theValue);
}

void Macad::Occt::gp_GTrsf::SetVectorialPart(Macad::Occt::Mat theMatrix)
{
    pin_ptr<Macad::Occt::Mat> pp_theMatrix = &theMatrix;
    ((::gp_GTrsf*)_NativeInstance)->SetVectorialPart(*(gp_Mat*)pp_theMatrix);
}

void Macad::Occt::gp_GTrsf::SetTranslationPart(Macad::Occt::XYZ theCoord)
{
    pin_ptr<Macad::Occt::XYZ> pp_theCoord = &theCoord;
    ((::gp_GTrsf*)_NativeInstance)->SetTranslationPart(*(gp_XYZ*)pp_theCoord);
}

void Macad::Occt::gp_GTrsf::SetTrsf(Macad::Occt::Trsf theT)
{
    pin_ptr<Macad::Occt::Trsf> pp_theT = &theT;
    ((::gp_GTrsf*)_NativeInstance)->SetTrsf(*(gp_Trsf*)pp_theT);
}

bool Macad::Occt::gp_GTrsf::IsNegative()
{
    bool _result = ((::gp_GTrsf*)_NativeInstance)->IsNegative();
    return _result;
}

bool Macad::Occt::gp_GTrsf::IsSingular()
{
    bool _result = ((::gp_GTrsf*)_NativeInstance)->IsSingular();
    return _result;
}

Macad::Occt::TrsfForm Macad::Occt::gp_GTrsf::Form()
{
    ::gp_TrsfForm _result = ((::gp_GTrsf*)_NativeInstance)->Form();
    return (Macad::Occt::TrsfForm)_result;
}

void Macad::Occt::gp_GTrsf::SetForm()
{
    ((::gp_GTrsf*)_NativeInstance)->SetForm();
}

Macad::Occt::XYZ Macad::Occt::gp_GTrsf::TranslationPart()
{
    ::gp_XYZ _nativeResult = ((::gp_GTrsf*)_NativeInstance)->TranslationPart();
    return Macad::Occt::XYZ(_nativeResult);
}

Macad::Occt::Mat Macad::Occt::gp_GTrsf::VectorialPart()
{
    ::gp_Mat _nativeResult = ((::gp_GTrsf*)_NativeInstance)->VectorialPart();
    return Macad::Occt::Mat(_nativeResult);
}

double Macad::Occt::gp_GTrsf::Value(int theRow, int theCol)
{
    double _result = ((::gp_GTrsf*)_NativeInstance)->Value(theRow, theCol);
    return _result;
}

void Macad::Occt::gp_GTrsf::Invert()
{
    ((::gp_GTrsf*)_NativeInstance)->Invert();
}

Macad::Occt::gp_GTrsf^ Macad::Occt::gp_GTrsf::Inverted()
{
    ::gp_GTrsf* _result = new ::gp_GTrsf();
    *_result = ((::gp_GTrsf*)_NativeInstance)->Inverted();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_GTrsf(_result);
}

Macad::Occt::gp_GTrsf^ Macad::Occt::gp_GTrsf::Multiplied(Macad::Occt::gp_GTrsf^ theT)
{
    ::gp_GTrsf* _result = new ::gp_GTrsf();
    *_result = ((::gp_GTrsf*)_NativeInstance)->Multiplied(*(::gp_GTrsf*)theT->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_GTrsf(_result);
}

void Macad::Occt::gp_GTrsf::Multiply(Macad::Occt::gp_GTrsf^ theT)
{
    ((::gp_GTrsf*)_NativeInstance)->Multiply(*(::gp_GTrsf*)theT->NativeInstance);
}

void Macad::Occt::gp_GTrsf::PreMultiply(Macad::Occt::gp_GTrsf^ theT)
{
    ((::gp_GTrsf*)_NativeInstance)->PreMultiply(*(::gp_GTrsf*)theT->NativeInstance);
}

void Macad::Occt::gp_GTrsf::Power(int theN)
{
    ((::gp_GTrsf*)_NativeInstance)->Power(theN);
}

Macad::Occt::gp_GTrsf^ Macad::Occt::gp_GTrsf::Powered(int theN)
{
    ::gp_GTrsf* _result = new ::gp_GTrsf();
    *_result = ((::gp_GTrsf*)_NativeInstance)->Powered(theN);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_GTrsf(_result);
}

void Macad::Occt::gp_GTrsf::Transforms(Macad::Occt::XYZ% theCoord)
{
    pin_ptr<Macad::Occt::XYZ> pp_theCoord = &theCoord;
    ((::gp_GTrsf*)_NativeInstance)->Transforms(*(gp_XYZ*)pp_theCoord);
}

void Macad::Occt::gp_GTrsf::Transforms(double% theX, double% theY, double% theZ)
{
    pin_ptr<double> pp_theX = &theX;
    pin_ptr<double> pp_theY = &theY;
    pin_ptr<double> pp_theZ = &theZ;
    ((::gp_GTrsf*)_NativeInstance)->Transforms(*(double*)pp_theX, *(double*)pp_theY, *(double*)pp_theZ);
}

Macad::Occt::Trsf Macad::Occt::gp_GTrsf::Trsf()
{
    ::gp_Trsf _nativeResult = ((::gp_GTrsf*)_NativeInstance)->Trsf();
    return Macad::Occt::Trsf(_nativeResult);
}

void Macad::Occt::gp_GTrsf::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::gp_GTrsf*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::gp_GTrsf::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::gp_GTrsf*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}



//---------------------------------------------------------------------
//  Class  gp_GTrsf2d
//---------------------------------------------------------------------

Macad::Occt::gp_GTrsf2d::gp_GTrsf2d()
    : Macad::Occt::BaseClass<::gp_GTrsf2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_GTrsf2d();
}

Macad::Occt::gp_GTrsf2d::gp_GTrsf2d(Macad::Occt::Trsf2d theT)
    : Macad::Occt::BaseClass<::gp_GTrsf2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Trsf2d> pp_theT = &theT;
    _NativeInstance = new ::gp_GTrsf2d(*(gp_Trsf2d*)pp_theT);
}

Macad::Occt::gp_GTrsf2d::gp_GTrsf2d(Macad::Occt::Mat2d theM, Macad::Occt::XY theV)
    : Macad::Occt::BaseClass<::gp_GTrsf2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Mat2d> pp_theM = &theM;
    pin_ptr<Macad::Occt::XY> pp_theV = &theV;
    _NativeInstance = new ::gp_GTrsf2d(*(gp_Mat2d*)pp_theM, *(gp_XY*)pp_theV);
}

void Macad::Occt::gp_GTrsf2d::SetAffinity(Macad::Occt::Ax2d theA, double theRatio)
{
    pin_ptr<Macad::Occt::Ax2d> pp_theA = &theA;
    ((::gp_GTrsf2d*)_NativeInstance)->SetAffinity(*(gp_Ax2d*)pp_theA, theRatio);
}

void Macad::Occt::gp_GTrsf2d::SetValue(int theRow, int theCol, double theValue)
{
    ((::gp_GTrsf2d*)_NativeInstance)->SetValue(theRow, theCol, theValue);
}

void Macad::Occt::gp_GTrsf2d::SetTranslationPart(Macad::Occt::XY theCoord)
{
    pin_ptr<Macad::Occt::XY> pp_theCoord = &theCoord;
    ((::gp_GTrsf2d*)_NativeInstance)->SetTranslationPart(*(gp_XY*)pp_theCoord);
}

void Macad::Occt::gp_GTrsf2d::SetTrsf2d(Macad::Occt::Trsf2d theT)
{
    pin_ptr<Macad::Occt::Trsf2d> pp_theT = &theT;
    ((::gp_GTrsf2d*)_NativeInstance)->SetTrsf2d(*(gp_Trsf2d*)pp_theT);
}

void Macad::Occt::gp_GTrsf2d::SetVectorialPart(Macad::Occt::Mat2d theMatrix)
{
    pin_ptr<Macad::Occt::Mat2d> pp_theMatrix = &theMatrix;
    ((::gp_GTrsf2d*)_NativeInstance)->SetVectorialPart(*(gp_Mat2d*)pp_theMatrix);
}

bool Macad::Occt::gp_GTrsf2d::IsNegative()
{
    bool _result = ((::gp_GTrsf2d*)_NativeInstance)->IsNegative();
    return _result;
}

bool Macad::Occt::gp_GTrsf2d::IsSingular()
{
    bool _result = ((::gp_GTrsf2d*)_NativeInstance)->IsSingular();
    return _result;
}

Macad::Occt::TrsfForm Macad::Occt::gp_GTrsf2d::Form()
{
    ::gp_TrsfForm _result = ((::gp_GTrsf2d*)_NativeInstance)->Form();
    return (Macad::Occt::TrsfForm)_result;
}

Macad::Occt::XY Macad::Occt::gp_GTrsf2d::TranslationPart()
{
    ::gp_XY _nativeResult = ((::gp_GTrsf2d*)_NativeInstance)->TranslationPart();
    return Macad::Occt::XY(_nativeResult);
}

Macad::Occt::Mat2d Macad::Occt::gp_GTrsf2d::VectorialPart()
{
    ::gp_Mat2d _nativeResult = ((::gp_GTrsf2d*)_NativeInstance)->VectorialPart();
    return Macad::Occt::Mat2d(_nativeResult);
}

double Macad::Occt::gp_GTrsf2d::Value(int theRow, int theCol)
{
    double _result = ((::gp_GTrsf2d*)_NativeInstance)->Value(theRow, theCol);
    return _result;
}

void Macad::Occt::gp_GTrsf2d::Invert()
{
    ((::gp_GTrsf2d*)_NativeInstance)->Invert();
}

Macad::Occt::gp_GTrsf2d^ Macad::Occt::gp_GTrsf2d::Inverted()
{
    ::gp_GTrsf2d* _result = new ::gp_GTrsf2d();
    *_result = ((::gp_GTrsf2d*)_NativeInstance)->Inverted();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_GTrsf2d(_result);
}

Macad::Occt::gp_GTrsf2d^ Macad::Occt::gp_GTrsf2d::Multiplied(Macad::Occt::gp_GTrsf2d^ theT)
{
    ::gp_GTrsf2d* _result = new ::gp_GTrsf2d();
    *_result = ((::gp_GTrsf2d*)_NativeInstance)->Multiplied(*(::gp_GTrsf2d*)theT->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_GTrsf2d(_result);
}

void Macad::Occt::gp_GTrsf2d::Multiply(Macad::Occt::gp_GTrsf2d^ theT)
{
    ((::gp_GTrsf2d*)_NativeInstance)->Multiply(*(::gp_GTrsf2d*)theT->NativeInstance);
}

void Macad::Occt::gp_GTrsf2d::PreMultiply(Macad::Occt::gp_GTrsf2d^ theT)
{
    ((::gp_GTrsf2d*)_NativeInstance)->PreMultiply(*(::gp_GTrsf2d*)theT->NativeInstance);
}

void Macad::Occt::gp_GTrsf2d::Power(int theN)
{
    ((::gp_GTrsf2d*)_NativeInstance)->Power(theN);
}

Macad::Occt::gp_GTrsf2d^ Macad::Occt::gp_GTrsf2d::Powered(int theN)
{
    ::gp_GTrsf2d* _result = new ::gp_GTrsf2d();
    *_result = ((::gp_GTrsf2d*)_NativeInstance)->Powered(theN);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_GTrsf2d(_result);
}

void Macad::Occt::gp_GTrsf2d::Transforms(Macad::Occt::XY% theCoord)
{
    pin_ptr<Macad::Occt::XY> pp_theCoord = &theCoord;
    ((::gp_GTrsf2d*)_NativeInstance)->Transforms(*(gp_XY*)pp_theCoord);
}

Macad::Occt::XY Macad::Occt::gp_GTrsf2d::Transformed(Macad::Occt::XY theCoord)
{
    pin_ptr<Macad::Occt::XY> pp_theCoord = &theCoord;
    ::gp_XY _nativeResult = ((::gp_GTrsf2d*)_NativeInstance)->Transformed(*(gp_XY*)pp_theCoord);
    return Macad::Occt::XY(_nativeResult);
}

void Macad::Occt::gp_GTrsf2d::Transforms(double% theX, double% theY)
{
    pin_ptr<double> pp_theX = &theX;
    pin_ptr<double> pp_theY = &theY;
    ((::gp_GTrsf2d*)_NativeInstance)->Transforms(*(double*)pp_theX, *(double*)pp_theY);
}

Macad::Occt::Trsf2d Macad::Occt::gp_GTrsf2d::Trsf2d()
{
    ::gp_Trsf2d _nativeResult = ((::gp_GTrsf2d*)_NativeInstance)->Trsf2d();
    return Macad::Occt::Trsf2d(_nativeResult);
}



//---------------------------------------------------------------------
//  Class  gp_Hypr
//---------------------------------------------------------------------

Macad::Occt::gp_Hypr::gp_Hypr()
    : Macad::Occt::BaseClass<::gp_Hypr>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Hypr();
}

Macad::Occt::gp_Hypr::gp_Hypr(Macad::Occt::Ax2 theA2, double theMajorRadius, double theMinorRadius)
    : Macad::Occt::BaseClass<::gp_Hypr>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2> pp_theA2 = &theA2;
    _NativeInstance = new ::gp_Hypr(*(gp_Ax2*)pp_theA2, theMajorRadius, theMinorRadius);
}

void Macad::Occt::gp_Hypr::SetAxis(Macad::Occt::Ax1 theA1)
{
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    ((::gp_Hypr*)_NativeInstance)->SetAxis(*(gp_Ax1*)pp_theA1);
}

void Macad::Occt::gp_Hypr::SetLocation(Macad::Occt::Pnt theP)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    ((::gp_Hypr*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_theP);
}

void Macad::Occt::gp_Hypr::SetMajorRadius(double theMajorRadius)
{
    ((::gp_Hypr*)_NativeInstance)->SetMajorRadius(theMajorRadius);
}

void Macad::Occt::gp_Hypr::SetMinorRadius(double theMinorRadius)
{
    ((::gp_Hypr*)_NativeInstance)->SetMinorRadius(theMinorRadius);
}

void Macad::Occt::gp_Hypr::SetPosition(Macad::Occt::Ax2 theA2)
{
    pin_ptr<Macad::Occt::Ax2> pp_theA2 = &theA2;
    ((::gp_Hypr*)_NativeInstance)->SetPosition(*(gp_Ax2*)pp_theA2);
}

Macad::Occt::Ax1 Macad::Occt::gp_Hypr::Asymptote1()
{
    ::gp_Ax1 _nativeResult = ((::gp_Hypr*)_NativeInstance)->Asymptote1();
    return Macad::Occt::Ax1(_nativeResult);
}

Macad::Occt::Ax1 Macad::Occt::gp_Hypr::Asymptote2()
{
    ::gp_Ax1 _nativeResult = ((::gp_Hypr*)_NativeInstance)->Asymptote2();
    return Macad::Occt::Ax1(_nativeResult);
}

Macad::Occt::Ax1 Macad::Occt::gp_Hypr::Axis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Hypr*)_NativeInstance)->Axis();
    return Macad::Occt::Ax1(_nativeResult);
}

Macad::Occt::gp_Hypr^ Macad::Occt::gp_Hypr::ConjugateBranch1()
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    *_result = ((::gp_Hypr*)_NativeInstance)->ConjugateBranch1();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}

Macad::Occt::gp_Hypr^ Macad::Occt::gp_Hypr::ConjugateBranch2()
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    *_result = ((::gp_Hypr*)_NativeInstance)->ConjugateBranch2();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}

Macad::Occt::Ax1 Macad::Occt::gp_Hypr::Directrix1()
{
    ::gp_Ax1 _nativeResult = ((::gp_Hypr*)_NativeInstance)->Directrix1();
    return Macad::Occt::Ax1(_nativeResult);
}

Macad::Occt::Ax1 Macad::Occt::gp_Hypr::Directrix2()
{
    ::gp_Ax1 _nativeResult = ((::gp_Hypr*)_NativeInstance)->Directrix2();
    return Macad::Occt::Ax1(_nativeResult);
}

double Macad::Occt::gp_Hypr::Eccentricity()
{
    double _result = ((::gp_Hypr*)_NativeInstance)->Eccentricity();
    return _result;
}

double Macad::Occt::gp_Hypr::Focal()
{
    double _result = ((::gp_Hypr*)_NativeInstance)->Focal();
    return _result;
}

Macad::Occt::Pnt Macad::Occt::gp_Hypr::Focus1()
{
    ::gp_Pnt _nativeResult = ((::gp_Hypr*)_NativeInstance)->Focus1();
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Pnt Macad::Occt::gp_Hypr::Focus2()
{
    ::gp_Pnt _nativeResult = ((::gp_Hypr*)_NativeInstance)->Focus2();
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Pnt Macad::Occt::gp_Hypr::Location()
{
    ::gp_Pnt _nativeResult = ((::gp_Hypr*)_NativeInstance)->Location();
    return Macad::Occt::Pnt(_nativeResult);
}

double Macad::Occt::gp_Hypr::MajorRadius()
{
    double _result = ((::gp_Hypr*)_NativeInstance)->MajorRadius();
    return _result;
}

double Macad::Occt::gp_Hypr::MinorRadius()
{
    double _result = ((::gp_Hypr*)_NativeInstance)->MinorRadius();
    return _result;
}

Macad::Occt::gp_Hypr^ Macad::Occt::gp_Hypr::OtherBranch()
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    *_result = ((::gp_Hypr*)_NativeInstance)->OtherBranch();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}

double Macad::Occt::gp_Hypr::Parameter()
{
    double _result = ((::gp_Hypr*)_NativeInstance)->Parameter();
    return _result;
}

Macad::Occt::Ax2 Macad::Occt::gp_Hypr::Position()
{
    ::gp_Ax2 _nativeResult = ((::gp_Hypr*)_NativeInstance)->Position();
    return Macad::Occt::Ax2(_nativeResult);
}

Macad::Occt::Ax1 Macad::Occt::gp_Hypr::XAxis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Hypr*)_NativeInstance)->XAxis();
    return Macad::Occt::Ax1(_nativeResult);
}

Macad::Occt::Ax1 Macad::Occt::gp_Hypr::YAxis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Hypr*)_NativeInstance)->YAxis();
    return Macad::Occt::Ax1(_nativeResult);
}

void Macad::Occt::gp_Hypr::Mirror(Macad::Occt::Pnt theP)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    ((::gp_Hypr*)_NativeInstance)->Mirror(*(gp_Pnt*)pp_theP);
}

Macad::Occt::gp_Hypr^ Macad::Occt::gp_Hypr::Mirrored(Macad::Occt::Pnt theP)
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    *_result = ((::gp_Hypr*)_NativeInstance)->Mirrored(*(gp_Pnt*)pp_theP);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}

void Macad::Occt::gp_Hypr::Mirror(Macad::Occt::Ax1 theA1)
{
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    ((::gp_Hypr*)_NativeInstance)->Mirror(*(gp_Ax1*)pp_theA1);
}

Macad::Occt::gp_Hypr^ Macad::Occt::gp_Hypr::Mirrored(Macad::Occt::Ax1 theA1)
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Hypr*)_NativeInstance)->Mirrored(*(gp_Ax1*)pp_theA1);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}

void Macad::Occt::gp_Hypr::Mirror(Macad::Occt::Ax2 theA2)
{
    pin_ptr<Macad::Occt::Ax2> pp_theA2 = &theA2;
    ((::gp_Hypr*)_NativeInstance)->Mirror(*(gp_Ax2*)pp_theA2);
}

Macad::Occt::gp_Hypr^ Macad::Occt::gp_Hypr::Mirrored(Macad::Occt::Ax2 theA2)
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    pin_ptr<Macad::Occt::Ax2> pp_theA2 = &theA2;
    *_result = ((::gp_Hypr*)_NativeInstance)->Mirrored(*(gp_Ax2*)pp_theA2);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}

void Macad::Occt::gp_Hypr::Rotate(Macad::Occt::Ax1 theA1, double theAng)
{
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    ((::gp_Hypr*)_NativeInstance)->Rotate(*(gp_Ax1*)pp_theA1, theAng);
}

Macad::Occt::gp_Hypr^ Macad::Occt::gp_Hypr::Rotated(Macad::Occt::Ax1 theA1, double theAng)
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Hypr*)_NativeInstance)->Rotated(*(gp_Ax1*)pp_theA1, theAng);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}

void Macad::Occt::gp_Hypr::Scale(Macad::Occt::Pnt theP, double theS)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    ((::gp_Hypr*)_NativeInstance)->Scale(*(gp_Pnt*)pp_theP, theS);
}

Macad::Occt::gp_Hypr^ Macad::Occt::gp_Hypr::Scaled(Macad::Occt::Pnt theP, double theS)
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    *_result = ((::gp_Hypr*)_NativeInstance)->Scaled(*(gp_Pnt*)pp_theP, theS);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}

void Macad::Occt::gp_Hypr::Transform(Macad::Occt::Trsf theT)
{
    pin_ptr<Macad::Occt::Trsf> pp_theT = &theT;
    ((::gp_Hypr*)_NativeInstance)->Transform(*(gp_Trsf*)pp_theT);
}

Macad::Occt::gp_Hypr^ Macad::Occt::gp_Hypr::Transformed(Macad::Occt::Trsf theT)
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    pin_ptr<Macad::Occt::Trsf> pp_theT = &theT;
    *_result = ((::gp_Hypr*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_theT);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}

void Macad::Occt::gp_Hypr::Translate(Macad::Occt::Vec theV)
{
    pin_ptr<Macad::Occt::Vec> pp_theV = &theV;
    ((::gp_Hypr*)_NativeInstance)->Translate(*(gp_Vec*)pp_theV);
}

Macad::Occt::gp_Hypr^ Macad::Occt::gp_Hypr::Translated(Macad::Occt::Vec theV)
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    pin_ptr<Macad::Occt::Vec> pp_theV = &theV;
    *_result = ((::gp_Hypr*)_NativeInstance)->Translated(*(gp_Vec*)pp_theV);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}

void Macad::Occt::gp_Hypr::Translate(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP1 = &theP1;
    pin_ptr<Macad::Occt::Pnt> pp_theP2 = &theP2;
    ((::gp_Hypr*)_NativeInstance)->Translate(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
}

Macad::Occt::gp_Hypr^ Macad::Occt::gp_Hypr::Translated(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2)
{
    ::gp_Hypr* _result = new ::gp_Hypr();
    pin_ptr<Macad::Occt::Pnt> pp_theP1 = &theP1;
    pin_ptr<Macad::Occt::Pnt> pp_theP2 = &theP2;
    *_result = ((::gp_Hypr*)_NativeInstance)->Translated(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr(_result);
}



//---------------------------------------------------------------------
//  Class  gp_Hypr2d
//---------------------------------------------------------------------

Macad::Occt::gp_Hypr2d::gp_Hypr2d()
    : Macad::Occt::BaseClass<::gp_Hypr2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Hypr2d();
}

Macad::Occt::gp_Hypr2d::gp_Hypr2d(Macad::Occt::Ax2d theMajorAxis, double theMajorRadius, double theMinorRadius, bool theIsSense)
    : Macad::Occt::BaseClass<::gp_Hypr2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2d> pp_theMajorAxis = &theMajorAxis;
    _NativeInstance = new ::gp_Hypr2d(*(gp_Ax2d*)pp_theMajorAxis, theMajorRadius, theMinorRadius, theIsSense);
}

Macad::Occt::gp_Hypr2d::gp_Hypr2d(Macad::Occt::Ax2d theMajorAxis, double theMajorRadius, double theMinorRadius)
    : Macad::Occt::BaseClass<::gp_Hypr2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2d> pp_theMajorAxis = &theMajorAxis;
    _NativeInstance = new ::gp_Hypr2d(*(gp_Ax2d*)pp_theMajorAxis, theMajorRadius, theMinorRadius, true);
}

Macad::Occt::gp_Hypr2d::gp_Hypr2d(Macad::Occt::Ax22d theA, double theMajorRadius, double theMinorRadius)
    : Macad::Occt::BaseClass<::gp_Hypr2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax22d> pp_theA = &theA;
    _NativeInstance = new ::gp_Hypr2d(*(gp_Ax22d*)pp_theA, theMajorRadius, theMinorRadius);
}

void Macad::Occt::gp_Hypr2d::SetLocation(Macad::Occt::Pnt2d theP)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    ((::gp_Hypr2d*)_NativeInstance)->SetLocation(*(gp_Pnt2d*)pp_theP);
}

void Macad::Occt::gp_Hypr2d::SetMajorRadius(double theMajorRadius)
{
    ((::gp_Hypr2d*)_NativeInstance)->SetMajorRadius(theMajorRadius);
}

void Macad::Occt::gp_Hypr2d::SetMinorRadius(double theMinorRadius)
{
    ((::gp_Hypr2d*)_NativeInstance)->SetMinorRadius(theMinorRadius);
}

void Macad::Occt::gp_Hypr2d::SetAxis(Macad::Occt::Ax22d theA)
{
    pin_ptr<Macad::Occt::Ax22d> pp_theA = &theA;
    ((::gp_Hypr2d*)_NativeInstance)->SetAxis(*(gp_Ax22d*)pp_theA);
}

void Macad::Occt::gp_Hypr2d::SetXAxis(Macad::Occt::Ax2d theA)
{
    pin_ptr<Macad::Occt::Ax2d> pp_theA = &theA;
    ((::gp_Hypr2d*)_NativeInstance)->SetXAxis(*(gp_Ax2d*)pp_theA);
}

void Macad::Occt::gp_Hypr2d::SetYAxis(Macad::Occt::Ax2d theA)
{
    pin_ptr<Macad::Occt::Ax2d> pp_theA = &theA;
    ((::gp_Hypr2d*)_NativeInstance)->SetYAxis(*(gp_Ax2d*)pp_theA);
}

Macad::Occt::Ax2d Macad::Occt::gp_Hypr2d::Asymptote1()
{
    ::gp_Ax2d _nativeResult = ((::gp_Hypr2d*)_NativeInstance)->Asymptote1();
    return Macad::Occt::Ax2d(_nativeResult);
}

Macad::Occt::Ax2d Macad::Occt::gp_Hypr2d::Asymptote2()
{
    ::gp_Ax2d _nativeResult = ((::gp_Hypr2d*)_NativeInstance)->Asymptote2();
    return Macad::Occt::Ax2d(_nativeResult);
}

void Macad::Occt::gp_Hypr2d::Coefficients(double% theA, double% theB, double% theC, double% theD, double% theE, double% theF)
{
    pin_ptr<double> pp_theA = &theA;
    pin_ptr<double> pp_theB = &theB;
    pin_ptr<double> pp_theC = &theC;
    pin_ptr<double> pp_theD = &theD;
    pin_ptr<double> pp_theE = &theE;
    pin_ptr<double> pp_theF = &theF;
    ((::gp_Hypr2d*)_NativeInstance)->Coefficients(*(double*)pp_theA, *(double*)pp_theB, *(double*)pp_theC, *(double*)pp_theD, *(double*)pp_theE, *(double*)pp_theF);
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::gp_Hypr2d::ConjugateBranch1()
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    *_result = ((::gp_Hypr2d*)_NativeInstance)->ConjugateBranch1();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::gp_Hypr2d::ConjugateBranch2()
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    *_result = ((::gp_Hypr2d*)_NativeInstance)->ConjugateBranch2();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}

Macad::Occt::Ax2d Macad::Occt::gp_Hypr2d::Directrix1()
{
    ::gp_Ax2d _nativeResult = ((::gp_Hypr2d*)_NativeInstance)->Directrix1();
    return Macad::Occt::Ax2d(_nativeResult);
}

Macad::Occt::Ax2d Macad::Occt::gp_Hypr2d::Directrix2()
{
    ::gp_Ax2d _nativeResult = ((::gp_Hypr2d*)_NativeInstance)->Directrix2();
    return Macad::Occt::Ax2d(_nativeResult);
}

double Macad::Occt::gp_Hypr2d::Eccentricity()
{
    double _result = ((::gp_Hypr2d*)_NativeInstance)->Eccentricity();
    return _result;
}

double Macad::Occt::gp_Hypr2d::Focal()
{
    double _result = ((::gp_Hypr2d*)_NativeInstance)->Focal();
    return _result;
}

Macad::Occt::Pnt2d Macad::Occt::gp_Hypr2d::Focus1()
{
    ::gp_Pnt2d _nativeResult = ((::gp_Hypr2d*)_NativeInstance)->Focus1();
    return Macad::Occt::Pnt2d(_nativeResult);
}

Macad::Occt::Pnt2d Macad::Occt::gp_Hypr2d::Focus2()
{
    ::gp_Pnt2d _nativeResult = ((::gp_Hypr2d*)_NativeInstance)->Focus2();
    return Macad::Occt::Pnt2d(_nativeResult);
}

Macad::Occt::Pnt2d Macad::Occt::gp_Hypr2d::Location()
{
    ::gp_Pnt2d _nativeResult = ((::gp_Hypr2d*)_NativeInstance)->Location();
    return Macad::Occt::Pnt2d(_nativeResult);
}

double Macad::Occt::gp_Hypr2d::MajorRadius()
{
    double _result = ((::gp_Hypr2d*)_NativeInstance)->MajorRadius();
    return _result;
}

double Macad::Occt::gp_Hypr2d::MinorRadius()
{
    double _result = ((::gp_Hypr2d*)_NativeInstance)->MinorRadius();
    return _result;
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::gp_Hypr2d::OtherBranch()
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    *_result = ((::gp_Hypr2d*)_NativeInstance)->OtherBranch();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}

double Macad::Occt::gp_Hypr2d::Parameter()
{
    double _result = ((::gp_Hypr2d*)_NativeInstance)->Parameter();
    return _result;
}

Macad::Occt::Ax22d Macad::Occt::gp_Hypr2d::Axis()
{
    ::gp_Ax22d _nativeResult = ((::gp_Hypr2d*)_NativeInstance)->Axis();
    return Macad::Occt::Ax22d(_nativeResult);
}

Macad::Occt::Ax2d Macad::Occt::gp_Hypr2d::XAxis()
{
    ::gp_Ax2d _nativeResult = ((::gp_Hypr2d*)_NativeInstance)->XAxis();
    return Macad::Occt::Ax2d(_nativeResult);
}

Macad::Occt::Ax2d Macad::Occt::gp_Hypr2d::YAxis()
{
    ::gp_Ax2d _nativeResult = ((::gp_Hypr2d*)_NativeInstance)->YAxis();
    return Macad::Occt::Ax2d(_nativeResult);
}

void Macad::Occt::gp_Hypr2d::Reverse()
{
    ((::gp_Hypr2d*)_NativeInstance)->Reverse();
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::gp_Hypr2d::Reversed()
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    *_result = ((::gp_Hypr2d*)_NativeInstance)->Reversed();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}

bool Macad::Occt::gp_Hypr2d::IsDirect()
{
    bool _result = ((::gp_Hypr2d*)_NativeInstance)->IsDirect();
    return _result;
}

void Macad::Occt::gp_Hypr2d::Mirror(Macad::Occt::Pnt2d theP)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    ((::gp_Hypr2d*)_NativeInstance)->Mirror(*(gp_Pnt2d*)pp_theP);
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::gp_Hypr2d::Mirrored(Macad::Occt::Pnt2d theP)
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    *_result = ((::gp_Hypr2d*)_NativeInstance)->Mirrored(*(gp_Pnt2d*)pp_theP);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}

void Macad::Occt::gp_Hypr2d::Mirror(Macad::Occt::Ax2d theA)
{
    pin_ptr<Macad::Occt::Ax2d> pp_theA = &theA;
    ((::gp_Hypr2d*)_NativeInstance)->Mirror(*(gp_Ax2d*)pp_theA);
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::gp_Hypr2d::Mirrored(Macad::Occt::Ax2d theA)
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    pin_ptr<Macad::Occt::Ax2d> pp_theA = &theA;
    *_result = ((::gp_Hypr2d*)_NativeInstance)->Mirrored(*(gp_Ax2d*)pp_theA);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}

void Macad::Occt::gp_Hypr2d::Rotate(Macad::Occt::Pnt2d theP, double theAng)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    ((::gp_Hypr2d*)_NativeInstance)->Rotate(*(gp_Pnt2d*)pp_theP, theAng);
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::gp_Hypr2d::Rotated(Macad::Occt::Pnt2d theP, double theAng)
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    *_result = ((::gp_Hypr2d*)_NativeInstance)->Rotated(*(gp_Pnt2d*)pp_theP, theAng);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}

void Macad::Occt::gp_Hypr2d::Scale(Macad::Occt::Pnt2d theP, double theS)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    ((::gp_Hypr2d*)_NativeInstance)->Scale(*(gp_Pnt2d*)pp_theP, theS);
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::gp_Hypr2d::Scaled(Macad::Occt::Pnt2d theP, double theS)
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    *_result = ((::gp_Hypr2d*)_NativeInstance)->Scaled(*(gp_Pnt2d*)pp_theP, theS);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}

void Macad::Occt::gp_Hypr2d::Transform(Macad::Occt::Trsf2d theT)
{
    pin_ptr<Macad::Occt::Trsf2d> pp_theT = &theT;
    ((::gp_Hypr2d*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_theT);
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::gp_Hypr2d::Transformed(Macad::Occt::Trsf2d theT)
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    pin_ptr<Macad::Occt::Trsf2d> pp_theT = &theT;
    *_result = ((::gp_Hypr2d*)_NativeInstance)->Transformed(*(gp_Trsf2d*)pp_theT);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}

void Macad::Occt::gp_Hypr2d::Translate(Macad::Occt::Vec2d theV)
{
    pin_ptr<Macad::Occt::Vec2d> pp_theV = &theV;
    ((::gp_Hypr2d*)_NativeInstance)->Translate(*(gp_Vec2d*)pp_theV);
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::gp_Hypr2d::Translated(Macad::Occt::Vec2d theV)
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    pin_ptr<Macad::Occt::Vec2d> pp_theV = &theV;
    *_result = ((::gp_Hypr2d*)_NativeInstance)->Translated(*(gp_Vec2d*)pp_theV);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}

void Macad::Occt::gp_Hypr2d::Translate(Macad::Occt::Pnt2d theP1, Macad::Occt::Pnt2d theP2)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP1 = &theP1;
    pin_ptr<Macad::Occt::Pnt2d> pp_theP2 = &theP2;
    ((::gp_Hypr2d*)_NativeInstance)->Translate(*(gp_Pnt2d*)pp_theP1, *(gp_Pnt2d*)pp_theP2);
}

Macad::Occt::gp_Hypr2d^ Macad::Occt::gp_Hypr2d::Translated(Macad::Occt::Pnt2d theP1, Macad::Occt::Pnt2d theP2)
{
    ::gp_Hypr2d* _result = new ::gp_Hypr2d();
    pin_ptr<Macad::Occt::Pnt2d> pp_theP1 = &theP1;
    pin_ptr<Macad::Occt::Pnt2d> pp_theP2 = &theP2;
    *_result = ((::gp_Hypr2d*)_NativeInstance)->Translated(*(gp_Pnt2d*)pp_theP1, *(gp_Pnt2d*)pp_theP2);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Hypr2d(_result);
}



//---------------------------------------------------------------------
//  Class  gp_Lin
//---------------------------------------------------------------------

Macad::Occt::gp_Lin::gp_Lin()
    : Macad::Occt::BaseClass<::gp_Lin>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Lin();
}

Macad::Occt::gp_Lin::gp_Lin(Macad::Occt::Ax1 theA1)
    : Macad::Occt::BaseClass<::gp_Lin>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    _NativeInstance = new ::gp_Lin(*(gp_Ax1*)pp_theA1);
}

Macad::Occt::gp_Lin::gp_Lin(Macad::Occt::Pnt theP, Macad::Occt::Dir theV)
    : Macad::Occt::BaseClass<::gp_Lin>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    pin_ptr<Macad::Occt::Dir> pp_theV = &theV;
    _NativeInstance = new ::gp_Lin(*(gp_Pnt*)pp_theP, *(gp_Dir*)pp_theV);
}

void Macad::Occt::gp_Lin::Reverse()
{
    ((::gp_Lin*)_NativeInstance)->Reverse();
}

Macad::Occt::gp_Lin^ Macad::Occt::gp_Lin::Reversed()
{
    ::gp_Lin* _result = new ::gp_Lin();
    *_result = ((::gp_Lin*)_NativeInstance)->Reversed();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

void Macad::Occt::gp_Lin::SetDirection(Macad::Occt::Dir theV)
{
    pin_ptr<Macad::Occt::Dir> pp_theV = &theV;
    ((::gp_Lin*)_NativeInstance)->SetDirection(*(gp_Dir*)pp_theV);
}

void Macad::Occt::gp_Lin::SetLocation(Macad::Occt::Pnt theP)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    ((::gp_Lin*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_theP);
}

void Macad::Occt::gp_Lin::SetPosition(Macad::Occt::Ax1 theA1)
{
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    ((::gp_Lin*)_NativeInstance)->SetPosition(*(gp_Ax1*)pp_theA1);
}

Macad::Occt::Dir Macad::Occt::gp_Lin::Direction()
{
    ::gp_Dir _nativeResult = ((::gp_Lin*)_NativeInstance)->Direction();
    return Macad::Occt::Dir(_nativeResult);
}

Macad::Occt::Pnt Macad::Occt::gp_Lin::Location()
{
    ::gp_Pnt _nativeResult = ((::gp_Lin*)_NativeInstance)->Location();
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Ax1 Macad::Occt::gp_Lin::Position()
{
    ::gp_Ax1 _nativeResult = ((::gp_Lin*)_NativeInstance)->Position();
    return Macad::Occt::Ax1(_nativeResult);
}

double Macad::Occt::gp_Lin::Angle(Macad::Occt::gp_Lin^ theOther)
{
    double _result = ((::gp_Lin*)_NativeInstance)->Angle(*(::gp_Lin*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::gp_Lin::Contains(Macad::Occt::Pnt theP, double theLinearTolerance)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    bool _result = ((::gp_Lin*)_NativeInstance)->Contains(*(gp_Pnt*)pp_theP, theLinearTolerance);
    return _result;
}

double Macad::Occt::gp_Lin::Distance(Macad::Occt::Pnt theP)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    double _result = ((::gp_Lin*)_NativeInstance)->Distance(*(gp_Pnt*)pp_theP);
    return _result;
}

double Macad::Occt::gp_Lin::Distance(Macad::Occt::gp_Lin^ theOther)
{
    double _result = ((::gp_Lin*)_NativeInstance)->Distance(*(::gp_Lin*)theOther->NativeInstance);
    return _result;
}

double Macad::Occt::gp_Lin::SquareDistance(Macad::Occt::Pnt theP)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    double _result = ((::gp_Lin*)_NativeInstance)->SquareDistance(*(gp_Pnt*)pp_theP);
    return _result;
}

double Macad::Occt::gp_Lin::SquareDistance(Macad::Occt::gp_Lin^ theOther)
{
    double _result = ((::gp_Lin*)_NativeInstance)->SquareDistance(*(::gp_Lin*)theOther->NativeInstance);
    return _result;
}

Macad::Occt::gp_Lin^ Macad::Occt::gp_Lin::Normal(Macad::Occt::Pnt theP)
{
    ::gp_Lin* _result = new ::gp_Lin();
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    *_result = ((::gp_Lin*)_NativeInstance)->Normal(*(gp_Pnt*)pp_theP);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

void Macad::Occt::gp_Lin::Mirror(Macad::Occt::Pnt theP)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    ((::gp_Lin*)_NativeInstance)->Mirror(*(gp_Pnt*)pp_theP);
}

Macad::Occt::gp_Lin^ Macad::Occt::gp_Lin::Mirrored(Macad::Occt::Pnt theP)
{
    ::gp_Lin* _result = new ::gp_Lin();
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    *_result = ((::gp_Lin*)_NativeInstance)->Mirrored(*(gp_Pnt*)pp_theP);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

void Macad::Occt::gp_Lin::Mirror(Macad::Occt::Ax1 theA1)
{
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    ((::gp_Lin*)_NativeInstance)->Mirror(*(gp_Ax1*)pp_theA1);
}

Macad::Occt::gp_Lin^ Macad::Occt::gp_Lin::Mirrored(Macad::Occt::Ax1 theA1)
{
    ::gp_Lin* _result = new ::gp_Lin();
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Lin*)_NativeInstance)->Mirrored(*(gp_Ax1*)pp_theA1);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

void Macad::Occt::gp_Lin::Mirror(Macad::Occt::Ax2 theA2)
{
    pin_ptr<Macad::Occt::Ax2> pp_theA2 = &theA2;
    ((::gp_Lin*)_NativeInstance)->Mirror(*(gp_Ax2*)pp_theA2);
}

Macad::Occt::gp_Lin^ Macad::Occt::gp_Lin::Mirrored(Macad::Occt::Ax2 theA2)
{
    ::gp_Lin* _result = new ::gp_Lin();
    pin_ptr<Macad::Occt::Ax2> pp_theA2 = &theA2;
    *_result = ((::gp_Lin*)_NativeInstance)->Mirrored(*(gp_Ax2*)pp_theA2);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

void Macad::Occt::gp_Lin::Rotate(Macad::Occt::Ax1 theA1, double theAng)
{
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    ((::gp_Lin*)_NativeInstance)->Rotate(*(gp_Ax1*)pp_theA1, theAng);
}

Macad::Occt::gp_Lin^ Macad::Occt::gp_Lin::Rotated(Macad::Occt::Ax1 theA1, double theAng)
{
    ::gp_Lin* _result = new ::gp_Lin();
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Lin*)_NativeInstance)->Rotated(*(gp_Ax1*)pp_theA1, theAng);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

void Macad::Occt::gp_Lin::Scale(Macad::Occt::Pnt theP, double theS)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    ((::gp_Lin*)_NativeInstance)->Scale(*(gp_Pnt*)pp_theP, theS);
}

Macad::Occt::gp_Lin^ Macad::Occt::gp_Lin::Scaled(Macad::Occt::Pnt theP, double theS)
{
    ::gp_Lin* _result = new ::gp_Lin();
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    *_result = ((::gp_Lin*)_NativeInstance)->Scaled(*(gp_Pnt*)pp_theP, theS);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

void Macad::Occt::gp_Lin::Transform(Macad::Occt::Trsf theT)
{
    pin_ptr<Macad::Occt::Trsf> pp_theT = &theT;
    ((::gp_Lin*)_NativeInstance)->Transform(*(gp_Trsf*)pp_theT);
}

Macad::Occt::gp_Lin^ Macad::Occt::gp_Lin::Transformed(Macad::Occt::Trsf theT)
{
    ::gp_Lin* _result = new ::gp_Lin();
    pin_ptr<Macad::Occt::Trsf> pp_theT = &theT;
    *_result = ((::gp_Lin*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_theT);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

void Macad::Occt::gp_Lin::Translate(Macad::Occt::Vec theV)
{
    pin_ptr<Macad::Occt::Vec> pp_theV = &theV;
    ((::gp_Lin*)_NativeInstance)->Translate(*(gp_Vec*)pp_theV);
}

Macad::Occt::gp_Lin^ Macad::Occt::gp_Lin::Translated(Macad::Occt::Vec theV)
{
    ::gp_Lin* _result = new ::gp_Lin();
    pin_ptr<Macad::Occt::Vec> pp_theV = &theV;
    *_result = ((::gp_Lin*)_NativeInstance)->Translated(*(gp_Vec*)pp_theV);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}

void Macad::Occt::gp_Lin::Translate(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP1 = &theP1;
    pin_ptr<Macad::Occt::Pnt> pp_theP2 = &theP2;
    ((::gp_Lin*)_NativeInstance)->Translate(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
}

Macad::Occt::gp_Lin^ Macad::Occt::gp_Lin::Translated(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2)
{
    ::gp_Lin* _result = new ::gp_Lin();
    pin_ptr<Macad::Occt::Pnt> pp_theP1 = &theP1;
    pin_ptr<Macad::Occt::Pnt> pp_theP2 = &theP2;
    *_result = ((::gp_Lin*)_NativeInstance)->Translated(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin(_result);
}



//---------------------------------------------------------------------
//  Class  gp_Lin2d
//---------------------------------------------------------------------

Macad::Occt::gp_Lin2d::gp_Lin2d()
    : Macad::Occt::BaseClass<::gp_Lin2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Lin2d();
}

Macad::Occt::gp_Lin2d::gp_Lin2d(Macad::Occt::Ax2d theA)
    : Macad::Occt::BaseClass<::gp_Lin2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2d> pp_theA = &theA;
    _NativeInstance = new ::gp_Lin2d(*(gp_Ax2d*)pp_theA);
}

Macad::Occt::gp_Lin2d::gp_Lin2d(Macad::Occt::Pnt2d theP, Macad::Occt::Dir2d theV)
    : Macad::Occt::BaseClass<::gp_Lin2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    pin_ptr<Macad::Occt::Dir2d> pp_theV = &theV;
    _NativeInstance = new ::gp_Lin2d(*(gp_Pnt2d*)pp_theP, *(gp_Dir2d*)pp_theV);
}

Macad::Occt::gp_Lin2d::gp_Lin2d(double theA, double theB, double theC)
    : Macad::Occt::BaseClass<::gp_Lin2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Lin2d(theA, theB, theC);
}

void Macad::Occt::gp_Lin2d::Reverse()
{
    ((::gp_Lin2d*)_NativeInstance)->Reverse();
}

Macad::Occt::gp_Lin2d^ Macad::Occt::gp_Lin2d::Reversed()
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    *_result = ((::gp_Lin2d*)_NativeInstance)->Reversed();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

void Macad::Occt::gp_Lin2d::SetDirection(Macad::Occt::Dir2d theV)
{
    pin_ptr<Macad::Occt::Dir2d> pp_theV = &theV;
    ((::gp_Lin2d*)_NativeInstance)->SetDirection(*(gp_Dir2d*)pp_theV);
}

void Macad::Occt::gp_Lin2d::SetLocation(Macad::Occt::Pnt2d theP)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    ((::gp_Lin2d*)_NativeInstance)->SetLocation(*(gp_Pnt2d*)pp_theP);
}

void Macad::Occt::gp_Lin2d::SetPosition(Macad::Occt::Ax2d theA)
{
    pin_ptr<Macad::Occt::Ax2d> pp_theA = &theA;
    ((::gp_Lin2d*)_NativeInstance)->SetPosition(*(gp_Ax2d*)pp_theA);
}

void Macad::Occt::gp_Lin2d::Coefficients(double% theA, double% theB, double% theC)
{
    pin_ptr<double> pp_theA = &theA;
    pin_ptr<double> pp_theB = &theB;
    pin_ptr<double> pp_theC = &theC;
    ((::gp_Lin2d*)_NativeInstance)->Coefficients(*(double*)pp_theA, *(double*)pp_theB, *(double*)pp_theC);
}

Macad::Occt::Dir2d Macad::Occt::gp_Lin2d::Direction()
{
    ::gp_Dir2d _nativeResult = ((::gp_Lin2d*)_NativeInstance)->Direction();
    return Macad::Occt::Dir2d(_nativeResult);
}

Macad::Occt::Pnt2d Macad::Occt::gp_Lin2d::Location()
{
    ::gp_Pnt2d _nativeResult = ((::gp_Lin2d*)_NativeInstance)->Location();
    return Macad::Occt::Pnt2d(_nativeResult);
}

Macad::Occt::Ax2d Macad::Occt::gp_Lin2d::Position()
{
    ::gp_Ax2d _nativeResult = ((::gp_Lin2d*)_NativeInstance)->Position();
    return Macad::Occt::Ax2d(_nativeResult);
}

double Macad::Occt::gp_Lin2d::Angle(Macad::Occt::gp_Lin2d^ theOther)
{
    double _result = ((::gp_Lin2d*)_NativeInstance)->Angle(*(::gp_Lin2d*)theOther->NativeInstance);
    return _result;
}

bool Macad::Occt::gp_Lin2d::Contains(Macad::Occt::Pnt2d theP, double theLinearTolerance)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    bool _result = ((::gp_Lin2d*)_NativeInstance)->Contains(*(gp_Pnt2d*)pp_theP, theLinearTolerance);
    return _result;
}

double Macad::Occt::gp_Lin2d::Distance(Macad::Occt::Pnt2d theP)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    double _result = ((::gp_Lin2d*)_NativeInstance)->Distance(*(gp_Pnt2d*)pp_theP);
    return _result;
}

double Macad::Occt::gp_Lin2d::Distance(Macad::Occt::gp_Lin2d^ theOther)
{
    double _result = ((::gp_Lin2d*)_NativeInstance)->Distance(*(::gp_Lin2d*)theOther->NativeInstance);
    return _result;
}

double Macad::Occt::gp_Lin2d::SquareDistance(Macad::Occt::Pnt2d theP)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    double _result = ((::gp_Lin2d*)_NativeInstance)->SquareDistance(*(gp_Pnt2d*)pp_theP);
    return _result;
}

double Macad::Occt::gp_Lin2d::SquareDistance(Macad::Occt::gp_Lin2d^ theOther)
{
    double _result = ((::gp_Lin2d*)_NativeInstance)->SquareDistance(*(::gp_Lin2d*)theOther->NativeInstance);
    return _result;
}

Macad::Occt::gp_Lin2d^ Macad::Occt::gp_Lin2d::Normal(Macad::Occt::Pnt2d theP)
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    *_result = ((::gp_Lin2d*)_NativeInstance)->Normal(*(gp_Pnt2d*)pp_theP);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

void Macad::Occt::gp_Lin2d::Mirror(Macad::Occt::Pnt2d theP)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    ((::gp_Lin2d*)_NativeInstance)->Mirror(*(gp_Pnt2d*)pp_theP);
}

Macad::Occt::gp_Lin2d^ Macad::Occt::gp_Lin2d::Mirrored(Macad::Occt::Pnt2d theP)
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    *_result = ((::gp_Lin2d*)_NativeInstance)->Mirrored(*(gp_Pnt2d*)pp_theP);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

void Macad::Occt::gp_Lin2d::Mirror(Macad::Occt::Ax2d theA)
{
    pin_ptr<Macad::Occt::Ax2d> pp_theA = &theA;
    ((::gp_Lin2d*)_NativeInstance)->Mirror(*(gp_Ax2d*)pp_theA);
}

Macad::Occt::gp_Lin2d^ Macad::Occt::gp_Lin2d::Mirrored(Macad::Occt::Ax2d theA)
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    pin_ptr<Macad::Occt::Ax2d> pp_theA = &theA;
    *_result = ((::gp_Lin2d*)_NativeInstance)->Mirrored(*(gp_Ax2d*)pp_theA);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

void Macad::Occt::gp_Lin2d::Rotate(Macad::Occt::Pnt2d theP, double theAng)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    ((::gp_Lin2d*)_NativeInstance)->Rotate(*(gp_Pnt2d*)pp_theP, theAng);
}

Macad::Occt::gp_Lin2d^ Macad::Occt::gp_Lin2d::Rotated(Macad::Occt::Pnt2d theP, double theAng)
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    *_result = ((::gp_Lin2d*)_NativeInstance)->Rotated(*(gp_Pnt2d*)pp_theP, theAng);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

void Macad::Occt::gp_Lin2d::Scale(Macad::Occt::Pnt2d theP, double theS)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    ((::gp_Lin2d*)_NativeInstance)->Scale(*(gp_Pnt2d*)pp_theP, theS);
}

Macad::Occt::gp_Lin2d^ Macad::Occt::gp_Lin2d::Scaled(Macad::Occt::Pnt2d theP, double theS)
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    *_result = ((::gp_Lin2d*)_NativeInstance)->Scaled(*(gp_Pnt2d*)pp_theP, theS);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

void Macad::Occt::gp_Lin2d::Transform(Macad::Occt::Trsf2d theT)
{
    pin_ptr<Macad::Occt::Trsf2d> pp_theT = &theT;
    ((::gp_Lin2d*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_theT);
}

Macad::Occt::gp_Lin2d^ Macad::Occt::gp_Lin2d::Transformed(Macad::Occt::Trsf2d theT)
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    pin_ptr<Macad::Occt::Trsf2d> pp_theT = &theT;
    *_result = ((::gp_Lin2d*)_NativeInstance)->Transformed(*(gp_Trsf2d*)pp_theT);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

void Macad::Occt::gp_Lin2d::Translate(Macad::Occt::Vec2d theV)
{
    pin_ptr<Macad::Occt::Vec2d> pp_theV = &theV;
    ((::gp_Lin2d*)_NativeInstance)->Translate(*(gp_Vec2d*)pp_theV);
}

Macad::Occt::gp_Lin2d^ Macad::Occt::gp_Lin2d::Translated(Macad::Occt::Vec2d theV)
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    pin_ptr<Macad::Occt::Vec2d> pp_theV = &theV;
    *_result = ((::gp_Lin2d*)_NativeInstance)->Translated(*(gp_Vec2d*)pp_theV);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}

void Macad::Occt::gp_Lin2d::Translate(Macad::Occt::Pnt2d theP1, Macad::Occt::Pnt2d theP2)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP1 = &theP1;
    pin_ptr<Macad::Occt::Pnt2d> pp_theP2 = &theP2;
    ((::gp_Lin2d*)_NativeInstance)->Translate(*(gp_Pnt2d*)pp_theP1, *(gp_Pnt2d*)pp_theP2);
}

Macad::Occt::gp_Lin2d^ Macad::Occt::gp_Lin2d::Translated(Macad::Occt::Pnt2d theP1, Macad::Occt::Pnt2d theP2)
{
    ::gp_Lin2d* _result = new ::gp_Lin2d();
    pin_ptr<Macad::Occt::Pnt2d> pp_theP1 = &theP1;
    pin_ptr<Macad::Occt::Pnt2d> pp_theP2 = &theP2;
    *_result = ((::gp_Lin2d*)_NativeInstance)->Translated(*(gp_Pnt2d*)pp_theP1, *(gp_Pnt2d*)pp_theP2);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Lin2d(_result);
}



//---------------------------------------------------------------------
//  Class  gp_Parab
//---------------------------------------------------------------------

Macad::Occt::gp_Parab::gp_Parab()
    : Macad::Occt::BaseClass<::gp_Parab>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Parab();
}

Macad::Occt::gp_Parab::gp_Parab(Macad::Occt::Ax2 theA2, double theFocal)
    : Macad::Occt::BaseClass<::gp_Parab>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2> pp_theA2 = &theA2;
    _NativeInstance = new ::gp_Parab(*(gp_Ax2*)pp_theA2, theFocal);
}

Macad::Occt::gp_Parab::gp_Parab(Macad::Occt::Ax1 theD, Macad::Occt::Pnt theF)
    : Macad::Occt::BaseClass<::gp_Parab>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax1> pp_theD = &theD;
    pin_ptr<Macad::Occt::Pnt> pp_theF = &theF;
    _NativeInstance = new ::gp_Parab(*(gp_Ax1*)pp_theD, *(gp_Pnt*)pp_theF);
}

void Macad::Occt::gp_Parab::SetAxis(Macad::Occt::Ax1 theA1)
{
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    ((::gp_Parab*)_NativeInstance)->SetAxis(*(gp_Ax1*)pp_theA1);
}

void Macad::Occt::gp_Parab::SetFocal(double theFocal)
{
    ((::gp_Parab*)_NativeInstance)->SetFocal(theFocal);
}

void Macad::Occt::gp_Parab::SetLocation(Macad::Occt::Pnt theP)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    ((::gp_Parab*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_theP);
}

void Macad::Occt::gp_Parab::SetPosition(Macad::Occt::Ax2 theA2)
{
    pin_ptr<Macad::Occt::Ax2> pp_theA2 = &theA2;
    ((::gp_Parab*)_NativeInstance)->SetPosition(*(gp_Ax2*)pp_theA2);
}

Macad::Occt::Ax1 Macad::Occt::gp_Parab::Axis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Parab*)_NativeInstance)->Axis();
    return Macad::Occt::Ax1(_nativeResult);
}

Macad::Occt::Ax1 Macad::Occt::gp_Parab::Directrix()
{
    ::gp_Ax1 _nativeResult = ((::gp_Parab*)_NativeInstance)->Directrix();
    return Macad::Occt::Ax1(_nativeResult);
}

double Macad::Occt::gp_Parab::Focal()
{
    double _result = ((::gp_Parab*)_NativeInstance)->Focal();
    return _result;
}

Macad::Occt::Pnt Macad::Occt::gp_Parab::Focus()
{
    ::gp_Pnt _nativeResult = ((::gp_Parab*)_NativeInstance)->Focus();
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Pnt Macad::Occt::gp_Parab::Location()
{
    ::gp_Pnt _nativeResult = ((::gp_Parab*)_NativeInstance)->Location();
    return Macad::Occt::Pnt(_nativeResult);
}

double Macad::Occt::gp_Parab::Parameter()
{
    double _result = ((::gp_Parab*)_NativeInstance)->Parameter();
    return _result;
}

Macad::Occt::Ax2 Macad::Occt::gp_Parab::Position()
{
    ::gp_Ax2 _nativeResult = ((::gp_Parab*)_NativeInstance)->Position();
    return Macad::Occt::Ax2(_nativeResult);
}

Macad::Occt::Ax1 Macad::Occt::gp_Parab::XAxis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Parab*)_NativeInstance)->XAxis();
    return Macad::Occt::Ax1(_nativeResult);
}

Macad::Occt::Ax1 Macad::Occt::gp_Parab::YAxis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Parab*)_NativeInstance)->YAxis();
    return Macad::Occt::Ax1(_nativeResult);
}

void Macad::Occt::gp_Parab::Mirror(Macad::Occt::Pnt theP)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    ((::gp_Parab*)_NativeInstance)->Mirror(*(gp_Pnt*)pp_theP);
}

Macad::Occt::gp_Parab^ Macad::Occt::gp_Parab::Mirrored(Macad::Occt::Pnt theP)
{
    ::gp_Parab* _result = new ::gp_Parab();
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    *_result = ((::gp_Parab*)_NativeInstance)->Mirrored(*(gp_Pnt*)pp_theP);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab(_result);
}

void Macad::Occt::gp_Parab::Mirror(Macad::Occt::Ax1 theA1)
{
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    ((::gp_Parab*)_NativeInstance)->Mirror(*(gp_Ax1*)pp_theA1);
}

Macad::Occt::gp_Parab^ Macad::Occt::gp_Parab::Mirrored(Macad::Occt::Ax1 theA1)
{
    ::gp_Parab* _result = new ::gp_Parab();
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Parab*)_NativeInstance)->Mirrored(*(gp_Ax1*)pp_theA1);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab(_result);
}

void Macad::Occt::gp_Parab::Mirror(Macad::Occt::Ax2 theA2)
{
    pin_ptr<Macad::Occt::Ax2> pp_theA2 = &theA2;
    ((::gp_Parab*)_NativeInstance)->Mirror(*(gp_Ax2*)pp_theA2);
}

Macad::Occt::gp_Parab^ Macad::Occt::gp_Parab::Mirrored(Macad::Occt::Ax2 theA2)
{
    ::gp_Parab* _result = new ::gp_Parab();
    pin_ptr<Macad::Occt::Ax2> pp_theA2 = &theA2;
    *_result = ((::gp_Parab*)_NativeInstance)->Mirrored(*(gp_Ax2*)pp_theA2);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab(_result);
}

void Macad::Occt::gp_Parab::Rotate(Macad::Occt::Ax1 theA1, double theAng)
{
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    ((::gp_Parab*)_NativeInstance)->Rotate(*(gp_Ax1*)pp_theA1, theAng);
}

Macad::Occt::gp_Parab^ Macad::Occt::gp_Parab::Rotated(Macad::Occt::Ax1 theA1, double theAng)
{
    ::gp_Parab* _result = new ::gp_Parab();
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Parab*)_NativeInstance)->Rotated(*(gp_Ax1*)pp_theA1, theAng);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab(_result);
}

void Macad::Occt::gp_Parab::Scale(Macad::Occt::Pnt theP, double theS)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    ((::gp_Parab*)_NativeInstance)->Scale(*(gp_Pnt*)pp_theP, theS);
}

Macad::Occt::gp_Parab^ Macad::Occt::gp_Parab::Scaled(Macad::Occt::Pnt theP, double theS)
{
    ::gp_Parab* _result = new ::gp_Parab();
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    *_result = ((::gp_Parab*)_NativeInstance)->Scaled(*(gp_Pnt*)pp_theP, theS);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab(_result);
}

void Macad::Occt::gp_Parab::Transform(Macad::Occt::Trsf theT)
{
    pin_ptr<Macad::Occt::Trsf> pp_theT = &theT;
    ((::gp_Parab*)_NativeInstance)->Transform(*(gp_Trsf*)pp_theT);
}

Macad::Occt::gp_Parab^ Macad::Occt::gp_Parab::Transformed(Macad::Occt::Trsf theT)
{
    ::gp_Parab* _result = new ::gp_Parab();
    pin_ptr<Macad::Occt::Trsf> pp_theT = &theT;
    *_result = ((::gp_Parab*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_theT);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab(_result);
}

void Macad::Occt::gp_Parab::Translate(Macad::Occt::Vec theV)
{
    pin_ptr<Macad::Occt::Vec> pp_theV = &theV;
    ((::gp_Parab*)_NativeInstance)->Translate(*(gp_Vec*)pp_theV);
}

Macad::Occt::gp_Parab^ Macad::Occt::gp_Parab::Translated(Macad::Occt::Vec theV)
{
    ::gp_Parab* _result = new ::gp_Parab();
    pin_ptr<Macad::Occt::Vec> pp_theV = &theV;
    *_result = ((::gp_Parab*)_NativeInstance)->Translated(*(gp_Vec*)pp_theV);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab(_result);
}

void Macad::Occt::gp_Parab::Translate(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP1 = &theP1;
    pin_ptr<Macad::Occt::Pnt> pp_theP2 = &theP2;
    ((::gp_Parab*)_NativeInstance)->Translate(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
}

Macad::Occt::gp_Parab^ Macad::Occt::gp_Parab::Translated(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2)
{
    ::gp_Parab* _result = new ::gp_Parab();
    pin_ptr<Macad::Occt::Pnt> pp_theP1 = &theP1;
    pin_ptr<Macad::Occt::Pnt> pp_theP2 = &theP2;
    *_result = ((::gp_Parab*)_NativeInstance)->Translated(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab(_result);
}



//---------------------------------------------------------------------
//  Class  gp_Parab2d
//---------------------------------------------------------------------

Macad::Occt::gp_Parab2d::gp_Parab2d()
    : Macad::Occt::BaseClass<::gp_Parab2d>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Parab2d();
}

Macad::Occt::gp_Parab2d::gp_Parab2d(Macad::Occt::Ax2d theMirrorAxis, double theFocalLength, bool theSense)
    : Macad::Occt::BaseClass<::gp_Parab2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2d> pp_theMirrorAxis = &theMirrorAxis;
    _NativeInstance = new ::gp_Parab2d(*(gp_Ax2d*)pp_theMirrorAxis, theFocalLength, theSense);
}

Macad::Occt::gp_Parab2d::gp_Parab2d(Macad::Occt::Ax2d theMirrorAxis, double theFocalLength)
    : Macad::Occt::BaseClass<::gp_Parab2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2d> pp_theMirrorAxis = &theMirrorAxis;
    _NativeInstance = new ::gp_Parab2d(*(gp_Ax2d*)pp_theMirrorAxis, theFocalLength, true);
}

Macad::Occt::gp_Parab2d::gp_Parab2d(Macad::Occt::Ax22d theAxes, double theFocalLength)
    : Macad::Occt::BaseClass<::gp_Parab2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax22d> pp_theAxes = &theAxes;
    _NativeInstance = new ::gp_Parab2d(*(gp_Ax22d*)pp_theAxes, theFocalLength);
}

Macad::Occt::gp_Parab2d::gp_Parab2d(Macad::Occt::Ax2d theDirectrix, Macad::Occt::Pnt2d theFocus, bool theSense)
    : Macad::Occt::BaseClass<::gp_Parab2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2d> pp_theDirectrix = &theDirectrix;
    pin_ptr<Macad::Occt::Pnt2d> pp_theFocus = &theFocus;
    _NativeInstance = new ::gp_Parab2d(*(gp_Ax2d*)pp_theDirectrix, *(gp_Pnt2d*)pp_theFocus, theSense);
}

Macad::Occt::gp_Parab2d::gp_Parab2d(Macad::Occt::Ax2d theDirectrix, Macad::Occt::Pnt2d theFocus)
    : Macad::Occt::BaseClass<::gp_Parab2d>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax2d> pp_theDirectrix = &theDirectrix;
    pin_ptr<Macad::Occt::Pnt2d> pp_theFocus = &theFocus;
    _NativeInstance = new ::gp_Parab2d(*(gp_Ax2d*)pp_theDirectrix, *(gp_Pnt2d*)pp_theFocus, true);
}

void Macad::Occt::gp_Parab2d::SetFocal(double theFocal)
{
    ((::gp_Parab2d*)_NativeInstance)->SetFocal(theFocal);
}

void Macad::Occt::gp_Parab2d::SetLocation(Macad::Occt::Pnt2d theP)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    ((::gp_Parab2d*)_NativeInstance)->SetLocation(*(gp_Pnt2d*)pp_theP);
}

void Macad::Occt::gp_Parab2d::SetMirrorAxis(Macad::Occt::Ax2d theA)
{
    pin_ptr<Macad::Occt::Ax2d> pp_theA = &theA;
    ((::gp_Parab2d*)_NativeInstance)->SetMirrorAxis(*(gp_Ax2d*)pp_theA);
}

void Macad::Occt::gp_Parab2d::SetAxis(Macad::Occt::Ax22d theA)
{
    pin_ptr<Macad::Occt::Ax22d> pp_theA = &theA;
    ((::gp_Parab2d*)_NativeInstance)->SetAxis(*(gp_Ax22d*)pp_theA);
}

void Macad::Occt::gp_Parab2d::Coefficients(double% theA, double% theB, double% theC, double% theD, double% theE, double% theF)
{
    pin_ptr<double> pp_theA = &theA;
    pin_ptr<double> pp_theB = &theB;
    pin_ptr<double> pp_theC = &theC;
    pin_ptr<double> pp_theD = &theD;
    pin_ptr<double> pp_theE = &theE;
    pin_ptr<double> pp_theF = &theF;
    ((::gp_Parab2d*)_NativeInstance)->Coefficients(*(double*)pp_theA, *(double*)pp_theB, *(double*)pp_theC, *(double*)pp_theD, *(double*)pp_theE, *(double*)pp_theF);
}

Macad::Occt::Ax2d Macad::Occt::gp_Parab2d::Directrix()
{
    ::gp_Ax2d _nativeResult = ((::gp_Parab2d*)_NativeInstance)->Directrix();
    return Macad::Occt::Ax2d(_nativeResult);
}

double Macad::Occt::gp_Parab2d::Focal()
{
    double _result = ((::gp_Parab2d*)_NativeInstance)->Focal();
    return _result;
}

Macad::Occt::Pnt2d Macad::Occt::gp_Parab2d::Focus()
{
    ::gp_Pnt2d _nativeResult = ((::gp_Parab2d*)_NativeInstance)->Focus();
    return Macad::Occt::Pnt2d(_nativeResult);
}

Macad::Occt::Pnt2d Macad::Occt::gp_Parab2d::Location()
{
    ::gp_Pnt2d _nativeResult = ((::gp_Parab2d*)_NativeInstance)->Location();
    return Macad::Occt::Pnt2d(_nativeResult);
}

Macad::Occt::Ax2d Macad::Occt::gp_Parab2d::MirrorAxis()
{
    ::gp_Ax2d _nativeResult = ((::gp_Parab2d*)_NativeInstance)->MirrorAxis();
    return Macad::Occt::Ax2d(_nativeResult);
}

Macad::Occt::Ax22d Macad::Occt::gp_Parab2d::Axis()
{
    ::gp_Ax22d _nativeResult = ((::gp_Parab2d*)_NativeInstance)->Axis();
    return Macad::Occt::Ax22d(_nativeResult);
}

double Macad::Occt::gp_Parab2d::Parameter()
{
    double _result = ((::gp_Parab2d*)_NativeInstance)->Parameter();
    return _result;
}

void Macad::Occt::gp_Parab2d::Reverse()
{
    ((::gp_Parab2d*)_NativeInstance)->Reverse();
}

Macad::Occt::gp_Parab2d^ Macad::Occt::gp_Parab2d::Reversed()
{
    ::gp_Parab2d* _result = new ::gp_Parab2d();
    *_result = ((::gp_Parab2d*)_NativeInstance)->Reversed();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab2d(_result);
}

bool Macad::Occt::gp_Parab2d::IsDirect()
{
    bool _result = ((::gp_Parab2d*)_NativeInstance)->IsDirect();
    return _result;
}

void Macad::Occt::gp_Parab2d::Mirror(Macad::Occt::Pnt2d theP)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    ((::gp_Parab2d*)_NativeInstance)->Mirror(*(gp_Pnt2d*)pp_theP);
}

Macad::Occt::gp_Parab2d^ Macad::Occt::gp_Parab2d::Mirrored(Macad::Occt::Pnt2d theP)
{
    ::gp_Parab2d* _result = new ::gp_Parab2d();
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    *_result = ((::gp_Parab2d*)_NativeInstance)->Mirrored(*(gp_Pnt2d*)pp_theP);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab2d(_result);
}

void Macad::Occt::gp_Parab2d::Mirror(Macad::Occt::Ax2d theA)
{
    pin_ptr<Macad::Occt::Ax2d> pp_theA = &theA;
    ((::gp_Parab2d*)_NativeInstance)->Mirror(*(gp_Ax2d*)pp_theA);
}

Macad::Occt::gp_Parab2d^ Macad::Occt::gp_Parab2d::Mirrored(Macad::Occt::Ax2d theA)
{
    ::gp_Parab2d* _result = new ::gp_Parab2d();
    pin_ptr<Macad::Occt::Ax2d> pp_theA = &theA;
    *_result = ((::gp_Parab2d*)_NativeInstance)->Mirrored(*(gp_Ax2d*)pp_theA);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab2d(_result);
}

void Macad::Occt::gp_Parab2d::Rotate(Macad::Occt::Pnt2d theP, double theAng)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    ((::gp_Parab2d*)_NativeInstance)->Rotate(*(gp_Pnt2d*)pp_theP, theAng);
}

Macad::Occt::gp_Parab2d^ Macad::Occt::gp_Parab2d::Rotated(Macad::Occt::Pnt2d theP, double theAng)
{
    ::gp_Parab2d* _result = new ::gp_Parab2d();
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    *_result = ((::gp_Parab2d*)_NativeInstance)->Rotated(*(gp_Pnt2d*)pp_theP, theAng);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab2d(_result);
}

void Macad::Occt::gp_Parab2d::Scale(Macad::Occt::Pnt2d theP, double theS)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    ((::gp_Parab2d*)_NativeInstance)->Scale(*(gp_Pnt2d*)pp_theP, theS);
}

Macad::Occt::gp_Parab2d^ Macad::Occt::gp_Parab2d::Scaled(Macad::Occt::Pnt2d theP, double theS)
{
    ::gp_Parab2d* _result = new ::gp_Parab2d();
    pin_ptr<Macad::Occt::Pnt2d> pp_theP = &theP;
    *_result = ((::gp_Parab2d*)_NativeInstance)->Scaled(*(gp_Pnt2d*)pp_theP, theS);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab2d(_result);
}

void Macad::Occt::gp_Parab2d::Transform(Macad::Occt::Trsf2d theT)
{
    pin_ptr<Macad::Occt::Trsf2d> pp_theT = &theT;
    ((::gp_Parab2d*)_NativeInstance)->Transform(*(gp_Trsf2d*)pp_theT);
}

Macad::Occt::gp_Parab2d^ Macad::Occt::gp_Parab2d::Transformed(Macad::Occt::Trsf2d theT)
{
    ::gp_Parab2d* _result = new ::gp_Parab2d();
    pin_ptr<Macad::Occt::Trsf2d> pp_theT = &theT;
    *_result = ((::gp_Parab2d*)_NativeInstance)->Transformed(*(gp_Trsf2d*)pp_theT);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab2d(_result);
}

void Macad::Occt::gp_Parab2d::Translate(Macad::Occt::Vec2d theV)
{
    pin_ptr<Macad::Occt::Vec2d> pp_theV = &theV;
    ((::gp_Parab2d*)_NativeInstance)->Translate(*(gp_Vec2d*)pp_theV);
}

Macad::Occt::gp_Parab2d^ Macad::Occt::gp_Parab2d::Translated(Macad::Occt::Vec2d theV)
{
    ::gp_Parab2d* _result = new ::gp_Parab2d();
    pin_ptr<Macad::Occt::Vec2d> pp_theV = &theV;
    *_result = ((::gp_Parab2d*)_NativeInstance)->Translated(*(gp_Vec2d*)pp_theV);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab2d(_result);
}

void Macad::Occt::gp_Parab2d::Translate(Macad::Occt::Pnt2d theP1, Macad::Occt::Pnt2d theP2)
{
    pin_ptr<Macad::Occt::Pnt2d> pp_theP1 = &theP1;
    pin_ptr<Macad::Occt::Pnt2d> pp_theP2 = &theP2;
    ((::gp_Parab2d*)_NativeInstance)->Translate(*(gp_Pnt2d*)pp_theP1, *(gp_Pnt2d*)pp_theP2);
}

Macad::Occt::gp_Parab2d^ Macad::Occt::gp_Parab2d::Translated(Macad::Occt::Pnt2d theP1, Macad::Occt::Pnt2d theP2)
{
    ::gp_Parab2d* _result = new ::gp_Parab2d();
    pin_ptr<Macad::Occt::Pnt2d> pp_theP1 = &theP1;
    pin_ptr<Macad::Occt::Pnt2d> pp_theP2 = &theP2;
    *_result = ((::gp_Parab2d*)_NativeInstance)->Translated(*(gp_Pnt2d*)pp_theP1, *(gp_Pnt2d*)pp_theP2);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Parab2d(_result);
}



//---------------------------------------------------------------------
//  Class  gp_QuaternionNLerp
//---------------------------------------------------------------------

Macad::Occt::gp_QuaternionNLerp::gp_QuaternionNLerp()
    : Macad::Occt::BaseClass<::gp_QuaternionNLerp>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_QuaternionNLerp();
}

Macad::Occt::gp_QuaternionNLerp::gp_QuaternionNLerp(Macad::Occt::Quaternion theQStart, Macad::Occt::Quaternion theQEnd)
    : Macad::Occt::BaseClass<::gp_QuaternionNLerp>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Quaternion> pp_theQStart = &theQStart;
    pin_ptr<Macad::Occt::Quaternion> pp_theQEnd = &theQEnd;
    _NativeInstance = new ::gp_QuaternionNLerp(*(gp_Quaternion*)pp_theQStart, *(gp_Quaternion*)pp_theQEnd);
}

Macad::Occt::Quaternion Macad::Occt::gp_QuaternionNLerp::Interpolate(Macad::Occt::Quaternion theQStart, Macad::Occt::Quaternion theQEnd, double theT)
{
    pin_ptr<Macad::Occt::Quaternion> pp_theQStart = &theQStart;
    pin_ptr<Macad::Occt::Quaternion> pp_theQEnd = &theQEnd;
    ::gp_Quaternion _nativeResult = ::gp_QuaternionNLerp::Interpolate(*(gp_Quaternion*)pp_theQStart, *(gp_Quaternion*)pp_theQEnd, theT);
    return Macad::Occt::Quaternion(_nativeResult);
}

void Macad::Occt::gp_QuaternionNLerp::Init(Macad::Occt::Quaternion theQStart, Macad::Occt::Quaternion theQEnd)
{
    pin_ptr<Macad::Occt::Quaternion> pp_theQStart = &theQStart;
    pin_ptr<Macad::Occt::Quaternion> pp_theQEnd = &theQEnd;
    ((::gp_QuaternionNLerp*)_NativeInstance)->Init(*(gp_Quaternion*)pp_theQStart, *(gp_Quaternion*)pp_theQEnd);
}

void Macad::Occt::gp_QuaternionNLerp::InitFromUnit(Macad::Occt::Quaternion theQStart, Macad::Occt::Quaternion theQEnd)
{
    pin_ptr<Macad::Occt::Quaternion> pp_theQStart = &theQStart;
    pin_ptr<Macad::Occt::Quaternion> pp_theQEnd = &theQEnd;
    ((::gp_QuaternionNLerp*)_NativeInstance)->InitFromUnit(*(gp_Quaternion*)pp_theQStart, *(gp_Quaternion*)pp_theQEnd);
}

void Macad::Occt::gp_QuaternionNLerp::Interpolate(double theT, Macad::Occt::Quaternion% theResultQ)
{
    pin_ptr<Macad::Occt::Quaternion> pp_theResultQ = &theResultQ;
    ((::gp_QuaternionNLerp*)_NativeInstance)->Interpolate(theT, *(gp_Quaternion*)pp_theResultQ);
}



//---------------------------------------------------------------------
//  Class  gp_QuaternionSLerp
//---------------------------------------------------------------------

Macad::Occt::gp_QuaternionSLerp::gp_QuaternionSLerp()
    : Macad::Occt::BaseClass<::gp_QuaternionSLerp>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_QuaternionSLerp();
}

Macad::Occt::gp_QuaternionSLerp::gp_QuaternionSLerp(Macad::Occt::Quaternion theQStart, Macad::Occt::Quaternion theQEnd)
    : Macad::Occt::BaseClass<::gp_QuaternionSLerp>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Quaternion> pp_theQStart = &theQStart;
    pin_ptr<Macad::Occt::Quaternion> pp_theQEnd = &theQEnd;
    _NativeInstance = new ::gp_QuaternionSLerp(*(gp_Quaternion*)pp_theQStart, *(gp_Quaternion*)pp_theQEnd);
}

Macad::Occt::Quaternion Macad::Occt::gp_QuaternionSLerp::Interpolate(Macad::Occt::Quaternion theQStart, Macad::Occt::Quaternion theQEnd, double theT)
{
    pin_ptr<Macad::Occt::Quaternion> pp_theQStart = &theQStart;
    pin_ptr<Macad::Occt::Quaternion> pp_theQEnd = &theQEnd;
    ::gp_Quaternion _nativeResult = ::gp_QuaternionSLerp::Interpolate(*(gp_Quaternion*)pp_theQStart, *(gp_Quaternion*)pp_theQEnd, theT);
    return Macad::Occt::Quaternion(_nativeResult);
}

void Macad::Occt::gp_QuaternionSLerp::Init(Macad::Occt::Quaternion theQStart, Macad::Occt::Quaternion theQEnd)
{
    pin_ptr<Macad::Occt::Quaternion> pp_theQStart = &theQStart;
    pin_ptr<Macad::Occt::Quaternion> pp_theQEnd = &theQEnd;
    ((::gp_QuaternionSLerp*)_NativeInstance)->Init(*(gp_Quaternion*)pp_theQStart, *(gp_Quaternion*)pp_theQEnd);
}

void Macad::Occt::gp_QuaternionSLerp::InitFromUnit(Macad::Occt::Quaternion theQStart, Macad::Occt::Quaternion theQEnd)
{
    pin_ptr<Macad::Occt::Quaternion> pp_theQStart = &theQStart;
    pin_ptr<Macad::Occt::Quaternion> pp_theQEnd = &theQEnd;
    ((::gp_QuaternionSLerp*)_NativeInstance)->InitFromUnit(*(gp_Quaternion*)pp_theQStart, *(gp_Quaternion*)pp_theQEnd);
}

void Macad::Occt::gp_QuaternionSLerp::Interpolate(double theT, Macad::Occt::Quaternion% theResultQ)
{
    pin_ptr<Macad::Occt::Quaternion> pp_theResultQ = &theResultQ;
    ((::gp_QuaternionSLerp*)_NativeInstance)->Interpolate(theT, *(gp_Quaternion*)pp_theResultQ);
}



//---------------------------------------------------------------------
//  Class  gp_Sphere
//---------------------------------------------------------------------

Macad::Occt::gp_Sphere::gp_Sphere()
    : Macad::Occt::BaseClass<::gp_Sphere>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Sphere();
}

Macad::Occt::gp_Sphere::gp_Sphere(Macad::Occt::Ax3 theA3, double theRadius)
    : Macad::Occt::BaseClass<::gp_Sphere>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax3> pp_theA3 = &theA3;
    _NativeInstance = new ::gp_Sphere(*(gp_Ax3*)pp_theA3, theRadius);
}

void Macad::Occt::gp_Sphere::SetLocation(Macad::Occt::Pnt theLoc)
{
    pin_ptr<Macad::Occt::Pnt> pp_theLoc = &theLoc;
    ((::gp_Sphere*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_theLoc);
}

void Macad::Occt::gp_Sphere::SetPosition(Macad::Occt::Ax3 theA3)
{
    pin_ptr<Macad::Occt::Ax3> pp_theA3 = &theA3;
    ((::gp_Sphere*)_NativeInstance)->SetPosition(*(gp_Ax3*)pp_theA3);
}

void Macad::Occt::gp_Sphere::SetRadius(double theR)
{
    ((::gp_Sphere*)_NativeInstance)->SetRadius(theR);
}

double Macad::Occt::gp_Sphere::Area()
{
    double _result = ((::gp_Sphere*)_NativeInstance)->Area();
    return _result;
}

void Macad::Occt::gp_Sphere::Coefficients(double% theA1, double% theA2, double% theA3, double% theB1, double% theB2, double% theB3, double% theC1, double% theC2, double% theC3, double% theD)
{
    pin_ptr<double> pp_theA1 = &theA1;
    pin_ptr<double> pp_theA2 = &theA2;
    pin_ptr<double> pp_theA3 = &theA3;
    pin_ptr<double> pp_theB1 = &theB1;
    pin_ptr<double> pp_theB2 = &theB2;
    pin_ptr<double> pp_theB3 = &theB3;
    pin_ptr<double> pp_theC1 = &theC1;
    pin_ptr<double> pp_theC2 = &theC2;
    pin_ptr<double> pp_theC3 = &theC3;
    pin_ptr<double> pp_theD = &theD;
    ((::gp_Sphere*)_NativeInstance)->Coefficients(*(double*)pp_theA1, *(double*)pp_theA2, *(double*)pp_theA3, *(double*)pp_theB1, *(double*)pp_theB2, *(double*)pp_theB3, *(double*)pp_theC1, *(double*)pp_theC2, *(double*)pp_theC3, *(double*)pp_theD);
}

void Macad::Occt::gp_Sphere::UReverse()
{
    ((::gp_Sphere*)_NativeInstance)->UReverse();
}

void Macad::Occt::gp_Sphere::VReverse()
{
    ((::gp_Sphere*)_NativeInstance)->VReverse();
}

bool Macad::Occt::gp_Sphere::Direct()
{
    bool _result = ((::gp_Sphere*)_NativeInstance)->Direct();
    return _result;
}

Macad::Occt::Pnt Macad::Occt::gp_Sphere::Location()
{
    ::gp_Pnt _nativeResult = ((::gp_Sphere*)_NativeInstance)->Location();
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Ax3 Macad::Occt::gp_Sphere::Position()
{
    ::gp_Ax3 _nativeResult = ((::gp_Sphere*)_NativeInstance)->Position();
    return Macad::Occt::Ax3(_nativeResult);
}

double Macad::Occt::gp_Sphere::Radius()
{
    double _result = ((::gp_Sphere*)_NativeInstance)->Radius();
    return _result;
}

double Macad::Occt::gp_Sphere::Volume()
{
    double _result = ((::gp_Sphere*)_NativeInstance)->Volume();
    return _result;
}

Macad::Occt::Ax1 Macad::Occt::gp_Sphere::XAxis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Sphere*)_NativeInstance)->XAxis();
    return Macad::Occt::Ax1(_nativeResult);
}

Macad::Occt::Ax1 Macad::Occt::gp_Sphere::YAxis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Sphere*)_NativeInstance)->YAxis();
    return Macad::Occt::Ax1(_nativeResult);
}

void Macad::Occt::gp_Sphere::Mirror(Macad::Occt::Pnt theP)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    ((::gp_Sphere*)_NativeInstance)->Mirror(*(gp_Pnt*)pp_theP);
}

Macad::Occt::gp_Sphere^ Macad::Occt::gp_Sphere::Mirrored(Macad::Occt::Pnt theP)
{
    ::gp_Sphere* _result = new ::gp_Sphere();
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    *_result = ((::gp_Sphere*)_NativeInstance)->Mirrored(*(gp_Pnt*)pp_theP);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Sphere(_result);
}

void Macad::Occt::gp_Sphere::Mirror(Macad::Occt::Ax1 theA1)
{
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    ((::gp_Sphere*)_NativeInstance)->Mirror(*(gp_Ax1*)pp_theA1);
}

Macad::Occt::gp_Sphere^ Macad::Occt::gp_Sphere::Mirrored(Macad::Occt::Ax1 theA1)
{
    ::gp_Sphere* _result = new ::gp_Sphere();
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Sphere*)_NativeInstance)->Mirrored(*(gp_Ax1*)pp_theA1);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Sphere(_result);
}

void Macad::Occt::gp_Sphere::Mirror(Macad::Occt::Ax2 theA2)
{
    pin_ptr<Macad::Occt::Ax2> pp_theA2 = &theA2;
    ((::gp_Sphere*)_NativeInstance)->Mirror(*(gp_Ax2*)pp_theA2);
}

Macad::Occt::gp_Sphere^ Macad::Occt::gp_Sphere::Mirrored(Macad::Occt::Ax2 theA2)
{
    ::gp_Sphere* _result = new ::gp_Sphere();
    pin_ptr<Macad::Occt::Ax2> pp_theA2 = &theA2;
    *_result = ((::gp_Sphere*)_NativeInstance)->Mirrored(*(gp_Ax2*)pp_theA2);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Sphere(_result);
}

void Macad::Occt::gp_Sphere::Rotate(Macad::Occt::Ax1 theA1, double theAng)
{
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    ((::gp_Sphere*)_NativeInstance)->Rotate(*(gp_Ax1*)pp_theA1, theAng);
}

Macad::Occt::gp_Sphere^ Macad::Occt::gp_Sphere::Rotated(Macad::Occt::Ax1 theA1, double theAng)
{
    ::gp_Sphere* _result = new ::gp_Sphere();
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Sphere*)_NativeInstance)->Rotated(*(gp_Ax1*)pp_theA1, theAng);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Sphere(_result);
}

void Macad::Occt::gp_Sphere::Scale(Macad::Occt::Pnt theP, double theS)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    ((::gp_Sphere*)_NativeInstance)->Scale(*(gp_Pnt*)pp_theP, theS);
}

Macad::Occt::gp_Sphere^ Macad::Occt::gp_Sphere::Scaled(Macad::Occt::Pnt theP, double theS)
{
    ::gp_Sphere* _result = new ::gp_Sphere();
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    *_result = ((::gp_Sphere*)_NativeInstance)->Scaled(*(gp_Pnt*)pp_theP, theS);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Sphere(_result);
}

void Macad::Occt::gp_Sphere::Transform(Macad::Occt::Trsf theT)
{
    pin_ptr<Macad::Occt::Trsf> pp_theT = &theT;
    ((::gp_Sphere*)_NativeInstance)->Transform(*(gp_Trsf*)pp_theT);
}

Macad::Occt::gp_Sphere^ Macad::Occt::gp_Sphere::Transformed(Macad::Occt::Trsf theT)
{
    ::gp_Sphere* _result = new ::gp_Sphere();
    pin_ptr<Macad::Occt::Trsf> pp_theT = &theT;
    *_result = ((::gp_Sphere*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_theT);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Sphere(_result);
}

void Macad::Occt::gp_Sphere::Translate(Macad::Occt::Vec theV)
{
    pin_ptr<Macad::Occt::Vec> pp_theV = &theV;
    ((::gp_Sphere*)_NativeInstance)->Translate(*(gp_Vec*)pp_theV);
}

Macad::Occt::gp_Sphere^ Macad::Occt::gp_Sphere::Translated(Macad::Occt::Vec theV)
{
    ::gp_Sphere* _result = new ::gp_Sphere();
    pin_ptr<Macad::Occt::Vec> pp_theV = &theV;
    *_result = ((::gp_Sphere*)_NativeInstance)->Translated(*(gp_Vec*)pp_theV);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Sphere(_result);
}

void Macad::Occt::gp_Sphere::Translate(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP1 = &theP1;
    pin_ptr<Macad::Occt::Pnt> pp_theP2 = &theP2;
    ((::gp_Sphere*)_NativeInstance)->Translate(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
}

Macad::Occt::gp_Sphere^ Macad::Occt::gp_Sphere::Translated(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2)
{
    ::gp_Sphere* _result = new ::gp_Sphere();
    pin_ptr<Macad::Occt::Pnt> pp_theP1 = &theP1;
    pin_ptr<Macad::Occt::Pnt> pp_theP2 = &theP2;
    *_result = ((::gp_Sphere*)_NativeInstance)->Translated(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Sphere(_result);
}



//---------------------------------------------------------------------
//  Class  gp_Torus
//---------------------------------------------------------------------

Macad::Occt::gp_Torus::gp_Torus()
    : Macad::Occt::BaseClass<::gp_Torus>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::gp_Torus();
}

Macad::Occt::gp_Torus::gp_Torus(Macad::Occt::Ax3 theA3, double theMajorRadius, double theMinorRadius)
    : Macad::Occt::BaseClass<::gp_Torus>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<Macad::Occt::Ax3> pp_theA3 = &theA3;
    _NativeInstance = new ::gp_Torus(*(gp_Ax3*)pp_theA3, theMajorRadius, theMinorRadius);
}

void Macad::Occt::gp_Torus::SetAxis(Macad::Occt::Ax1 theA1)
{
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    ((::gp_Torus*)_NativeInstance)->SetAxis(*(gp_Ax1*)pp_theA1);
}

void Macad::Occt::gp_Torus::SetLocation(Macad::Occt::Pnt theLoc)
{
    pin_ptr<Macad::Occt::Pnt> pp_theLoc = &theLoc;
    ((::gp_Torus*)_NativeInstance)->SetLocation(*(gp_Pnt*)pp_theLoc);
}

void Macad::Occt::gp_Torus::SetMajorRadius(double theMajorRadius)
{
    ((::gp_Torus*)_NativeInstance)->SetMajorRadius(theMajorRadius);
}

void Macad::Occt::gp_Torus::SetMinorRadius(double theMinorRadius)
{
    ((::gp_Torus*)_NativeInstance)->SetMinorRadius(theMinorRadius);
}

void Macad::Occt::gp_Torus::SetPosition(Macad::Occt::Ax3 theA3)
{
    pin_ptr<Macad::Occt::Ax3> pp_theA3 = &theA3;
    ((::gp_Torus*)_NativeInstance)->SetPosition(*(gp_Ax3*)pp_theA3);
}

double Macad::Occt::gp_Torus::Area()
{
    double _result = ((::gp_Torus*)_NativeInstance)->Area();
    return _result;
}

void Macad::Occt::gp_Torus::UReverse()
{
    ((::gp_Torus*)_NativeInstance)->UReverse();
}

void Macad::Occt::gp_Torus::VReverse()
{
    ((::gp_Torus*)_NativeInstance)->VReverse();
}

bool Macad::Occt::gp_Torus::Direct()
{
    bool _result = ((::gp_Torus*)_NativeInstance)->Direct();
    return _result;
}

Macad::Occt::Ax1 Macad::Occt::gp_Torus::Axis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Torus*)_NativeInstance)->Axis();
    return Macad::Occt::Ax1(_nativeResult);
}

void Macad::Occt::gp_Torus::Coefficients(Macad::Occt::TColStd_Array1OfReal^ theCoef)
{
    ((::gp_Torus*)_NativeInstance)->Coefficients(*(::TColStd_Array1OfReal*)theCoef->NativeInstance);
}

Macad::Occt::Pnt Macad::Occt::gp_Torus::Location()
{
    ::gp_Pnt _nativeResult = ((::gp_Torus*)_NativeInstance)->Location();
    return Macad::Occt::Pnt(_nativeResult);
}

Macad::Occt::Ax3 Macad::Occt::gp_Torus::Position()
{
    ::gp_Ax3 _nativeResult = ((::gp_Torus*)_NativeInstance)->Position();
    return Macad::Occt::Ax3(_nativeResult);
}

double Macad::Occt::gp_Torus::MajorRadius()
{
    double _result = ((::gp_Torus*)_NativeInstance)->MajorRadius();
    return _result;
}

double Macad::Occt::gp_Torus::MinorRadius()
{
    double _result = ((::gp_Torus*)_NativeInstance)->MinorRadius();
    return _result;
}

double Macad::Occt::gp_Torus::Volume()
{
    double _result = ((::gp_Torus*)_NativeInstance)->Volume();
    return _result;
}

Macad::Occt::Ax1 Macad::Occt::gp_Torus::XAxis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Torus*)_NativeInstance)->XAxis();
    return Macad::Occt::Ax1(_nativeResult);
}

Macad::Occt::Ax1 Macad::Occt::gp_Torus::YAxis()
{
    ::gp_Ax1 _nativeResult = ((::gp_Torus*)_NativeInstance)->YAxis();
    return Macad::Occt::Ax1(_nativeResult);
}

void Macad::Occt::gp_Torus::Mirror(Macad::Occt::Pnt theP)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    ((::gp_Torus*)_NativeInstance)->Mirror(*(gp_Pnt*)pp_theP);
}

Macad::Occt::gp_Torus^ Macad::Occt::gp_Torus::Mirrored(Macad::Occt::Pnt theP)
{
    ::gp_Torus* _result = new ::gp_Torus();
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    *_result = ((::gp_Torus*)_NativeInstance)->Mirrored(*(gp_Pnt*)pp_theP);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Torus(_result);
}

void Macad::Occt::gp_Torus::Mirror(Macad::Occt::Ax1 theA1)
{
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    ((::gp_Torus*)_NativeInstance)->Mirror(*(gp_Ax1*)pp_theA1);
}

Macad::Occt::gp_Torus^ Macad::Occt::gp_Torus::Mirrored(Macad::Occt::Ax1 theA1)
{
    ::gp_Torus* _result = new ::gp_Torus();
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Torus*)_NativeInstance)->Mirrored(*(gp_Ax1*)pp_theA1);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Torus(_result);
}

void Macad::Occt::gp_Torus::Mirror(Macad::Occt::Ax2 theA2)
{
    pin_ptr<Macad::Occt::Ax2> pp_theA2 = &theA2;
    ((::gp_Torus*)_NativeInstance)->Mirror(*(gp_Ax2*)pp_theA2);
}

Macad::Occt::gp_Torus^ Macad::Occt::gp_Torus::Mirrored(Macad::Occt::Ax2 theA2)
{
    ::gp_Torus* _result = new ::gp_Torus();
    pin_ptr<Macad::Occt::Ax2> pp_theA2 = &theA2;
    *_result = ((::gp_Torus*)_NativeInstance)->Mirrored(*(gp_Ax2*)pp_theA2);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Torus(_result);
}

void Macad::Occt::gp_Torus::Rotate(Macad::Occt::Ax1 theA1, double theAng)
{
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    ((::gp_Torus*)_NativeInstance)->Rotate(*(gp_Ax1*)pp_theA1, theAng);
}

Macad::Occt::gp_Torus^ Macad::Occt::gp_Torus::Rotated(Macad::Occt::Ax1 theA1, double theAng)
{
    ::gp_Torus* _result = new ::gp_Torus();
    pin_ptr<Macad::Occt::Ax1> pp_theA1 = &theA1;
    *_result = ((::gp_Torus*)_NativeInstance)->Rotated(*(gp_Ax1*)pp_theA1, theAng);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Torus(_result);
}

void Macad::Occt::gp_Torus::Scale(Macad::Occt::Pnt theP, double theS)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    ((::gp_Torus*)_NativeInstance)->Scale(*(gp_Pnt*)pp_theP, theS);
}

Macad::Occt::gp_Torus^ Macad::Occt::gp_Torus::Scaled(Macad::Occt::Pnt theP, double theS)
{
    ::gp_Torus* _result = new ::gp_Torus();
    pin_ptr<Macad::Occt::Pnt> pp_theP = &theP;
    *_result = ((::gp_Torus*)_NativeInstance)->Scaled(*(gp_Pnt*)pp_theP, theS);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Torus(_result);
}

void Macad::Occt::gp_Torus::Transform(Macad::Occt::Trsf theT)
{
    pin_ptr<Macad::Occt::Trsf> pp_theT = &theT;
    ((::gp_Torus*)_NativeInstance)->Transform(*(gp_Trsf*)pp_theT);
}

Macad::Occt::gp_Torus^ Macad::Occt::gp_Torus::Transformed(Macad::Occt::Trsf theT)
{
    ::gp_Torus* _result = new ::gp_Torus();
    pin_ptr<Macad::Occt::Trsf> pp_theT = &theT;
    *_result = ((::gp_Torus*)_NativeInstance)->Transformed(*(gp_Trsf*)pp_theT);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Torus(_result);
}

void Macad::Occt::gp_Torus::Translate(Macad::Occt::Vec theV)
{
    pin_ptr<Macad::Occt::Vec> pp_theV = &theV;
    ((::gp_Torus*)_NativeInstance)->Translate(*(gp_Vec*)pp_theV);
}

Macad::Occt::gp_Torus^ Macad::Occt::gp_Torus::Translated(Macad::Occt::Vec theV)
{
    ::gp_Torus* _result = new ::gp_Torus();
    pin_ptr<Macad::Occt::Vec> pp_theV = &theV;
    *_result = ((::gp_Torus*)_NativeInstance)->Translated(*(gp_Vec*)pp_theV);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Torus(_result);
}

void Macad::Occt::gp_Torus::Translate(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2)
{
    pin_ptr<Macad::Occt::Pnt> pp_theP1 = &theP1;
    pin_ptr<Macad::Occt::Pnt> pp_theP2 = &theP2;
    ((::gp_Torus*)_NativeInstance)->Translate(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
}

Macad::Occt::gp_Torus^ Macad::Occt::gp_Torus::Translated(Macad::Occt::Pnt theP1, Macad::Occt::Pnt theP2)
{
    ::gp_Torus* _result = new ::gp_Torus();
    pin_ptr<Macad::Occt::Pnt> pp_theP1 = &theP1;
    pin_ptr<Macad::Occt::Pnt> pp_theP2 = &theP2;
    *_result = ((::gp_Torus*)_NativeInstance)->Translated(*(gp_Pnt*)pp_theP1, *(gp_Pnt*)pp_theP2);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::gp_Torus(_result);
}


