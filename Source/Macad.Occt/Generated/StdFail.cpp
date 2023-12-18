// Generated wrapper code for package StdFail

#include "OcctPCH.h"
#include "StdFail.h"

using namespace System::Runtime::InteropServices; // for class Marshal



//---------------------------------------------------------------------
//  Class  StdFail_NotDone
//---------------------------------------------------------------------

Macad::Occt::StdFail_NotDone::StdFail_NotDone()
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::StdFail_NotDone();
}

Macad::Occt::StdFail_NotDone::StdFail_NotDone(System::String^ theMessage)
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::StdFail_NotDone(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::StdFail_NotDone::StdFail_NotDone(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::StdFail_NotDone(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::StdFail_NotDone::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::StdFail_NotDone::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::StdFail_NotDone::Raise()
{
    ::StdFail_NotDone::Raise("");
}

Macad::Occt::StdFail_NotDone^ Macad::Occt::StdFail_NotDone::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::StdFail_NotDone) _result = ::StdFail_NotDone::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::StdFail_NotDone::CreateDowncasted(_result.get());
}

Macad::Occt::StdFail_NotDone^ Macad::Occt::StdFail_NotDone::NewInstance()
{
    Handle(::StdFail_NotDone) _result = ::StdFail_NotDone::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::StdFail_NotDone::CreateDowncasted(_result.get());
}

Macad::Occt::StdFail_NotDone^ Macad::Occt::StdFail_NotDone::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::StdFail_NotDone) _result = ::StdFail_NotDone::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::StdFail_NotDone::CreateDowncasted(_result.get());
}

Macad::Occt::StdFail_NotDone^ Macad::Occt::StdFail_NotDone::CreateDowncasted(::StdFail_NotDone* instance)
{
    return gcnew Macad::Occt::StdFail_NotDone( instance );
}



//---------------------------------------------------------------------
//  Class  StdFail_InfiniteSolutions
//---------------------------------------------------------------------

Macad::Occt::StdFail_InfiniteSolutions::StdFail_InfiniteSolutions()
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::StdFail_InfiniteSolutions();
}

Macad::Occt::StdFail_InfiniteSolutions::StdFail_InfiniteSolutions(System::String^ theMessage)
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::StdFail_InfiniteSolutions(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::StdFail_InfiniteSolutions::StdFail_InfiniteSolutions(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::StdFail_InfiniteSolutions(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::StdFail_InfiniteSolutions::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::StdFail_InfiniteSolutions::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::StdFail_InfiniteSolutions::Raise()
{
    ::StdFail_InfiniteSolutions::Raise("");
}

Macad::Occt::StdFail_InfiniteSolutions^ Macad::Occt::StdFail_InfiniteSolutions::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::StdFail_InfiniteSolutions) _result = ::StdFail_InfiniteSolutions::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::StdFail_InfiniteSolutions::CreateDowncasted(_result.get());
}

Macad::Occt::StdFail_InfiniteSolutions^ Macad::Occt::StdFail_InfiniteSolutions::NewInstance()
{
    Handle(::StdFail_InfiniteSolutions) _result = ::StdFail_InfiniteSolutions::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::StdFail_InfiniteSolutions::CreateDowncasted(_result.get());
}

Macad::Occt::StdFail_InfiniteSolutions^ Macad::Occt::StdFail_InfiniteSolutions::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::StdFail_InfiniteSolutions) _result = ::StdFail_InfiniteSolutions::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::StdFail_InfiniteSolutions::CreateDowncasted(_result.get());
}

Macad::Occt::StdFail_InfiniteSolutions^ Macad::Occt::StdFail_InfiniteSolutions::CreateDowncasted(::StdFail_InfiniteSolutions* instance)
{
    return gcnew Macad::Occt::StdFail_InfiniteSolutions( instance );
}



//---------------------------------------------------------------------
//  Class  StdFail_Undefined
//---------------------------------------------------------------------

Macad::Occt::StdFail_Undefined::StdFail_Undefined()
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::StdFail_Undefined();
}

Macad::Occt::StdFail_Undefined::StdFail_Undefined(System::String^ theMessage)
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::StdFail_Undefined(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::StdFail_Undefined::StdFail_Undefined(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::StdFail_Undefined(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::StdFail_Undefined::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::StdFail_Undefined::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::StdFail_Undefined::Raise()
{
    ::StdFail_Undefined::Raise("");
}

Macad::Occt::StdFail_Undefined^ Macad::Occt::StdFail_Undefined::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::StdFail_Undefined) _result = ::StdFail_Undefined::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::StdFail_Undefined::CreateDowncasted(_result.get());
}

Macad::Occt::StdFail_Undefined^ Macad::Occt::StdFail_Undefined::NewInstance()
{
    Handle(::StdFail_Undefined) _result = ::StdFail_Undefined::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::StdFail_Undefined::CreateDowncasted(_result.get());
}

Macad::Occt::StdFail_Undefined^ Macad::Occt::StdFail_Undefined::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::StdFail_Undefined) _result = ::StdFail_Undefined::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::StdFail_Undefined::CreateDowncasted(_result.get());
}

Macad::Occt::StdFail_Undefined^ Macad::Occt::StdFail_Undefined::CreateDowncasted(::StdFail_Undefined* instance)
{
    return gcnew Macad::Occt::StdFail_Undefined( instance );
}



//---------------------------------------------------------------------
//  Class  StdFail_UndefinedDerivative
//---------------------------------------------------------------------

Macad::Occt::StdFail_UndefinedDerivative::StdFail_UndefinedDerivative()
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::StdFail_UndefinedDerivative();
}

Macad::Occt::StdFail_UndefinedDerivative::StdFail_UndefinedDerivative(System::String^ theMessage)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::StdFail_UndefinedDerivative(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::StdFail_UndefinedDerivative::StdFail_UndefinedDerivative(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::StdFail_UndefinedDerivative(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::StdFail_UndefinedDerivative::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::StdFail_UndefinedDerivative::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::StdFail_UndefinedDerivative::Raise()
{
    ::StdFail_UndefinedDerivative::Raise("");
}

Macad::Occt::StdFail_UndefinedDerivative^ Macad::Occt::StdFail_UndefinedDerivative::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::StdFail_UndefinedDerivative) _result = ::StdFail_UndefinedDerivative::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::StdFail_UndefinedDerivative::CreateDowncasted(_result.get());
}

Macad::Occt::StdFail_UndefinedDerivative^ Macad::Occt::StdFail_UndefinedDerivative::NewInstance()
{
    Handle(::StdFail_UndefinedDerivative) _result = ::StdFail_UndefinedDerivative::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::StdFail_UndefinedDerivative::CreateDowncasted(_result.get());
}

Macad::Occt::StdFail_UndefinedDerivative^ Macad::Occt::StdFail_UndefinedDerivative::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::StdFail_UndefinedDerivative) _result = ::StdFail_UndefinedDerivative::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::StdFail_UndefinedDerivative::CreateDowncasted(_result.get());
}

Macad::Occt::StdFail_UndefinedDerivative^ Macad::Occt::StdFail_UndefinedDerivative::CreateDowncasted(::StdFail_UndefinedDerivative* instance)
{
    return gcnew Macad::Occt::StdFail_UndefinedDerivative( instance );
}



//---------------------------------------------------------------------
//  Class  StdFail_UndefinedValue
//---------------------------------------------------------------------

Macad::Occt::StdFail_UndefinedValue::StdFail_UndefinedValue()
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::StdFail_UndefinedValue();
}

Macad::Occt::StdFail_UndefinedValue::StdFail_UndefinedValue(System::String^ theMessage)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::StdFail_UndefinedValue(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::StdFail_UndefinedValue::StdFail_UndefinedValue(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::StdFail_UndefinedValue(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::StdFail_UndefinedValue::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::StdFail_UndefinedValue::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::StdFail_UndefinedValue::Raise()
{
    ::StdFail_UndefinedValue::Raise("");
}

Macad::Occt::StdFail_UndefinedValue^ Macad::Occt::StdFail_UndefinedValue::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::StdFail_UndefinedValue) _result = ::StdFail_UndefinedValue::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::StdFail_UndefinedValue::CreateDowncasted(_result.get());
}

Macad::Occt::StdFail_UndefinedValue^ Macad::Occt::StdFail_UndefinedValue::NewInstance()
{
    Handle(::StdFail_UndefinedValue) _result = ::StdFail_UndefinedValue::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::StdFail_UndefinedValue::CreateDowncasted(_result.get());
}

Macad::Occt::StdFail_UndefinedValue^ Macad::Occt::StdFail_UndefinedValue::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::StdFail_UndefinedValue) _result = ::StdFail_UndefinedValue::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::StdFail_UndefinedValue::CreateDowncasted(_result.get());
}

Macad::Occt::StdFail_UndefinedValue^ Macad::Occt::StdFail_UndefinedValue::CreateDowncasted(::StdFail_UndefinedValue* instance)
{
    return gcnew Macad::Occt::StdFail_UndefinedValue( instance );
}


