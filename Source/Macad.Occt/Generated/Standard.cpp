// Generated wrapper code for package Standard

#include "OcctPCH.h"
#include "Standard.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TCollection.h"
#include "Quantity.h"
#include "TShort.h"
#include "TColStd.h"
#include "Bnd.h"
#include "TColgp.h"
#include "Geom.h"
#include "ProjLib.h"
#include "Extrema.h"
#include "BRepAdaptor.h"
#include "TopTools.h"
#include "ShapeAnalysis.h"
#include "AIS.h"
#include "StdFail.h"
#include "gp.h"
#include "Geom2d.h"
#include "GProp.h"
#include "TopoDS.h"
#include "BRepExtrema.h"
#include "V3d.h"
#include "Prs3d.h"
#include "Aspect.h"
#include "Graphic3d.h"


//---------------------------------------------------------------------
//  Class  Standard_DumpValue
//---------------------------------------------------------------------

Macad::Occt::Standard_DumpValue::Standard_DumpValue()
    : Macad::Occt::BaseClass<::Standard_DumpValue>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_DumpValue();
}

Macad::Occt::Standard_DumpValue::Standard_DumpValue(Macad::Occt::TCollection_AsciiString^ theValue, int theStartPos)
    : Macad::Occt::BaseClass<::Standard_DumpValue>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_DumpValue(*(::TCollection_AsciiString*)theValue->NativeInstance, theStartPos);
}



//---------------------------------------------------------------------
//  Class  Standard_UUID
//---------------------------------------------------------------------

Macad::Occt::Standard_UUID::Standard_UUID()
    : Macad::Occt::BaseClass<::Standard_UUID>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_UUID();
}



//---------------------------------------------------------------------
//  Class  Standard
//---------------------------------------------------------------------

Macad::Occt::Standard::Standard()
    : Macad::Occt::BaseClass<::Standard>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard();
}

Macad::Occt::Standard::AllocatorType Macad::Occt::Standard::GetAllocatorType()
{
    ::Standard::AllocatorType _result = ::Standard::GetAllocatorType();
    return (Macad::Occt::Standard::AllocatorType)_result;
}

System::IntPtr Macad::Occt::Standard::Allocate(long long unsigned int theSize)
{
    void* _result = ::Standard::Allocate(theSize);
    return System::IntPtr(_result);
}

System::IntPtr Macad::Occt::Standard::AllocateOptimal(long long unsigned int theSize)
{
    void* _result = ::Standard::AllocateOptimal(theSize);
    return System::IntPtr(_result);
}

void Macad::Occt::Standard::Free(System::IntPtr thePtr)
{
    ::Standard::Free(thePtr.ToPointer());
}

System::IntPtr Macad::Occt::Standard::Reallocate(System::IntPtr theStorage, long long unsigned int theNewSize)
{
    void* _result = ::Standard::Reallocate(theStorage.ToPointer(), theNewSize);
    return System::IntPtr(_result);
}

System::IntPtr Macad::Occt::Standard::AllocateAligned(long long unsigned int theSize, long long unsigned int theAlign)
{
    void* _result = ::Standard::AllocateAligned(theSize, theAlign);
    return System::IntPtr(_result);
}

void Macad::Occt::Standard::FreeAligned(System::IntPtr thePtrAligned)
{
    ::Standard::FreeAligned(thePtrAligned.ToPointer());
}

int Macad::Occt::Standard::Purge()
{
    int _result = ::Standard::Purge();
    return _result;
}

bool Macad::Occt::Standard::StackTrace(char% theBuffer, int theBufferSize, int theNbTraces, System::IntPtr theContext, int theNbTopSkip)
{
    pin_ptr<char> pp_theBuffer = &theBuffer;
    bool _result = ::Standard::StackTrace((char*)pp_theBuffer, theBufferSize, theNbTraces, theContext.ToPointer(), theNbTopSkip);
    return _result;
}

bool Macad::Occt::Standard::StackTrace(char% theBuffer, int theBufferSize, int theNbTraces, System::IntPtr theContext)
{
    pin_ptr<char> pp_theBuffer = &theBuffer;
    bool _result = ::Standard::StackTrace((char*)pp_theBuffer, theBufferSize, theNbTraces, theContext.ToPointer(), 0);
    return _result;
}

bool Macad::Occt::Standard::StackTrace(char% theBuffer, int theBufferSize, int theNbTraces)
{
    pin_ptr<char> pp_theBuffer = &theBuffer;
    bool _result = ::Standard::StackTrace((char*)pp_theBuffer, theBufferSize, theNbTraces, nullptr, 0);
    return _result;
}



//---------------------------------------------------------------------
//  Class  Standard_Failure
//---------------------------------------------------------------------

Macad::Occt::Standard_Failure::Standard_Failure()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Standard_Failure();
}

Macad::Occt::Standard_Failure::Standard_Failure(System::String^ theDesc)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theDesc = (char*)(void*)Marshal::StringToHGlobalAnsi(theDesc);
    NativeInstance = new ::Standard_Failure(sz_theDesc);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theDesc);
}

Macad::Occt::Standard_Failure::Standard_Failure(System::String^ theDesc, System::String^ theStackTrace)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theDesc = (char*)(void*)Marshal::StringToHGlobalAnsi(theDesc);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Standard_Failure(sz_theDesc, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theDesc);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::Standard_Failure::Print(System::IO::TextWriter^ theStream)
{
    std::ostringstream oss_theStream;
    ((::Standard_Failure*)_NativeInstance)->Print(oss_theStream);
    theStream->Write(gcnew System::String(oss_theStream.str().c_str()));
}

System::String^ Macad::Occt::Standard_Failure::GetMessageString()
{
    Standard_CString _result = ((::Standard_Failure*)_NativeInstance)->GetMessageString();
    return gcnew System::String(_result);
}

void Macad::Occt::Standard_Failure::SetMessageString(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ((::Standard_Failure*)_NativeInstance)->SetMessageString(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

System::String^ Macad::Occt::Standard_Failure::GetStackString()
{
    Standard_CString _result = ((::Standard_Failure*)_NativeInstance)->GetStackString();
    return gcnew System::String(_result);
}

void Macad::Occt::Standard_Failure::SetStackString(System::String^ theStack)
{
    const char* sz_theStack = (char*)(void*)Marshal::StringToHGlobalAnsi(theStack);
    ((::Standard_Failure*)_NativeInstance)->SetStackString(sz_theStack);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStack);
}

void Macad::Occt::Standard_Failure::Reraise()
{
    ((::Standard_Failure*)_NativeInstance)->Reraise();
}

void Macad::Occt::Standard_Failure::Reraise(System::String^ aMessage)
{
    const char* sz_aMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(aMessage);
    ((::Standard_Failure*)_NativeInstance)->Reraise(sz_aMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aMessage);
}

void Macad::Occt::Standard_Failure::Raise(System::String^ aMessage)
{
    const char* sz_aMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(aMessage);
    ::Standard_Failure::Raise(sz_aMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aMessage);
}

void Macad::Occt::Standard_Failure::Raise()
{
    ::Standard_Failure::Raise("");
}

Macad::Occt::Standard_Failure^ Macad::Occt::Standard_Failure::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Standard_Failure) _result = ::Standard_Failure::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Failure::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Failure^ Macad::Occt::Standard_Failure::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Standard_Failure) _result = ::Standard_Failure::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Failure::CreateDowncasted(_result.get());
}

int Macad::Occt::Standard_Failure::DefaultStackTraceLength()
{
    int _result = ::Standard_Failure::DefaultStackTraceLength();
    return _result;
}

void Macad::Occt::Standard_Failure::SetDefaultStackTraceLength(int theNbStackTraces)
{
    ::Standard_Failure::SetDefaultStackTraceLength(theNbStackTraces);
}

void Macad::Occt::Standard_Failure::Jump()
{
    ((::Standard_Failure*)_NativeInstance)->Jump();
}

Macad::Occt::Standard_Failure^ Macad::Occt::Standard_Failure::CreateDowncasted(::Standard_Failure* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::Standard_DomainError)))
        return Macad::Occt::Standard_DomainError::CreateDowncasted((::Standard_DomainError*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Standard_ProgramError)))
        return Macad::Occt::Standard_ProgramError::CreateDowncasted((::Standard_ProgramError*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Standard_AbortiveTransaction)))
        return Macad::Occt::Standard_AbortiveTransaction::CreateDowncasted((::Standard_AbortiveTransaction*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Standard_NumericError)))
        return Macad::Occt::Standard_NumericError::CreateDowncasted((::Standard_NumericError*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Standard_LicenseError)))
        return Macad::Occt::Standard_LicenseError::CreateDowncasted((::Standard_LicenseError*)instance);
    if (instance->IsKind(STANDARD_TYPE(::StdFail_NotDone)))
        return Macad::Occt::StdFail_NotDone::CreateDowncasted((::StdFail_NotDone*)instance);
    if (instance->IsKind(STANDARD_TYPE(::StdFail_InfiniteSolutions)))
        return Macad::Occt::StdFail_InfiniteSolutions::CreateDowncasted((::StdFail_InfiniteSolutions*)instance);
    if (instance->IsKind(STANDARD_TYPE(::StdFail_Undefined)))
        return Macad::Occt::StdFail_Undefined::CreateDowncasted((::StdFail_Undefined*)instance);
    
    return gcnew Macad::Occt::Standard_Failure( instance );
}



//---------------------------------------------------------------------
//  Class  Standard_DomainError
//---------------------------------------------------------------------

Macad::Occt::Standard_DomainError::Standard_DomainError()
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Standard_DomainError();
}

Macad::Occt::Standard_DomainError::Standard_DomainError(System::String^ theMessage)
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Standard_DomainError(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_DomainError::Standard_DomainError(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Standard_DomainError(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::Standard_DomainError::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Standard_DomainError::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Standard_DomainError::Raise()
{
    ::Standard_DomainError::Raise("");
}

Macad::Occt::Standard_DomainError^ Macad::Occt::Standard_DomainError::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Standard_DomainError) _result = ::Standard_DomainError::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_DomainError::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_DomainError^ Macad::Occt::Standard_DomainError::NewInstance()
{
    Handle(::Standard_DomainError) _result = ::Standard_DomainError::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_DomainError::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_DomainError^ Macad::Occt::Standard_DomainError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Standard_DomainError) _result = ::Standard_DomainError::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_DomainError::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_DomainError^ Macad::Occt::Standard_DomainError::CreateDowncasted(::Standard_DomainError* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::Standard_ConstructionError)))
        return Macad::Occt::Standard_ConstructionError::CreateDowncasted((::Standard_ConstructionError*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Standard_RangeError)))
        return Macad::Occt::Standard_RangeError::CreateDowncasted((::Standard_RangeError*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Standard_DimensionError)))
        return Macad::Occt::Standard_DimensionError::CreateDowncasted((::Standard_DimensionError*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Standard_NoSuchObject)))
        return Macad::Occt::Standard_NoSuchObject::CreateDowncasted((::Standard_NoSuchObject*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Standard_TypeMismatch)))
        return Macad::Occt::Standard_TypeMismatch::CreateDowncasted((::Standard_TypeMismatch*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Standard_ImmutableObject)))
        return Macad::Occt::Standard_ImmutableObject::CreateDowncasted((::Standard_ImmutableObject*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Standard_MultiplyDefined)))
        return Macad::Occt::Standard_MultiplyDefined::CreateDowncasted((::Standard_MultiplyDefined*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Standard_NoMoreObject)))
        return Macad::Occt::Standard_NoMoreObject::CreateDowncasted((::Standard_NoMoreObject*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Standard_NullObject)))
        return Macad::Occt::Standard_NullObject::CreateDowncasted((::Standard_NullObject*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Quantity_DateDefinitionError)))
        return Macad::Occt::Quantity_DateDefinitionError::CreateDowncasted((::Quantity_DateDefinitionError*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Quantity_PeriodDefinitionError)))
        return Macad::Occt::Quantity_PeriodDefinitionError::CreateDowncasted((::Quantity_PeriodDefinitionError*)instance);
    if (instance->IsKind(STANDARD_TYPE(::StdFail_UndefinedDerivative)))
        return Macad::Occt::StdFail_UndefinedDerivative::CreateDowncasted((::StdFail_UndefinedDerivative*)instance);
    if (instance->IsKind(STANDARD_TYPE(::StdFail_UndefinedValue)))
        return Macad::Occt::StdFail_UndefinedValue::CreateDowncasted((::StdFail_UndefinedValue*)instance);
    if (instance->IsKind(STANDARD_TYPE(::gp_VectorWithNullMagnitude)))
        return Macad::Occt::gp_VectorWithNullMagnitude::CreateDowncasted((::gp_VectorWithNullMagnitude*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Geom2d_UndefinedDerivative)))
        return Macad::Occt::Geom2d_UndefinedDerivative::CreateDowncasted((::Geom2d_UndefinedDerivative*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Geom2d_UndefinedValue)))
        return Macad::Occt::Geom2d_UndefinedValue::CreateDowncasted((::Geom2d_UndefinedValue*)instance);
    if (instance->IsKind(STANDARD_TYPE(::GProp_UndefinedAxis)))
        return Macad::Occt::GProp_UndefinedAxis::CreateDowncasted((::GProp_UndefinedAxis*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Geom_UndefinedDerivative)))
        return Macad::Occt::Geom_UndefinedDerivative::CreateDowncasted((::Geom_UndefinedDerivative*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Geom_UndefinedValue)))
        return Macad::Occt::Geom_UndefinedValue::CreateDowncasted((::Geom_UndefinedValue*)instance);
    if (instance->IsKind(STANDARD_TYPE(::TopoDS_FrozenShape)))
        return Macad::Occt::TopoDS_FrozenShape::CreateDowncasted((::TopoDS_FrozenShape*)instance);
    if (instance->IsKind(STANDARD_TYPE(::TopoDS_LockedShape)))
        return Macad::Occt::TopoDS_LockedShape::CreateDowncasted((::TopoDS_LockedShape*)instance);
    if (instance->IsKind(STANDARD_TYPE(::TopoDS_UnCompatibleShapes)))
        return Macad::Occt::TopoDS_UnCompatibleShapes::CreateDowncasted((::TopoDS_UnCompatibleShapes*)instance);
    if (instance->IsKind(STANDARD_TYPE(::BRepExtrema_UnCompatibleShape)))
        return Macad::Occt::BRepExtrema_UnCompatibleShape::CreateDowncasted((::BRepExtrema_UnCompatibleShape*)instance);
    if (instance->IsKind(STANDARD_TYPE(::V3d_UnMapped)))
        return Macad::Occt::V3d_UnMapped::CreateDowncasted((::V3d_UnMapped*)instance);
    
    return gcnew Macad::Occt::Standard_DomainError( instance );
}



//---------------------------------------------------------------------
//  Class  Standard_ConstructionError
//---------------------------------------------------------------------

Macad::Occt::Standard_ConstructionError::Standard_ConstructionError()
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Standard_ConstructionError();
}

Macad::Occt::Standard_ConstructionError::Standard_ConstructionError(System::String^ theMessage)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Standard_ConstructionError(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_ConstructionError::Standard_ConstructionError(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Standard_ConstructionError(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::Standard_ConstructionError::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Standard_ConstructionError::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Standard_ConstructionError::Raise()
{
    ::Standard_ConstructionError::Raise("");
}

Macad::Occt::Standard_ConstructionError^ Macad::Occt::Standard_ConstructionError::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Standard_ConstructionError) _result = ::Standard_ConstructionError::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_ConstructionError::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_ConstructionError^ Macad::Occt::Standard_ConstructionError::NewInstance()
{
    Handle(::Standard_ConstructionError) _result = ::Standard_ConstructionError::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_ConstructionError::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_ConstructionError^ Macad::Occt::Standard_ConstructionError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Standard_ConstructionError) _result = ::Standard_ConstructionError::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_ConstructionError::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_ConstructionError^ Macad::Occt::Standard_ConstructionError::CreateDowncasted(::Standard_ConstructionError* instance)
{
    return gcnew Macad::Occt::Standard_ConstructionError( instance );
}



//---------------------------------------------------------------------
//  Class  Standard_RangeError
//---------------------------------------------------------------------

Macad::Occt::Standard_RangeError::Standard_RangeError()
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Standard_RangeError();
}

Macad::Occt::Standard_RangeError::Standard_RangeError(System::String^ theMessage)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Standard_RangeError(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_RangeError::Standard_RangeError(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Standard_RangeError(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::Standard_RangeError::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Standard_RangeError::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Standard_RangeError::Raise()
{
    ::Standard_RangeError::Raise("");
}

Macad::Occt::Standard_RangeError^ Macad::Occt::Standard_RangeError::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Standard_RangeError) _result = ::Standard_RangeError::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_RangeError::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_RangeError^ Macad::Occt::Standard_RangeError::NewInstance()
{
    Handle(::Standard_RangeError) _result = ::Standard_RangeError::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_RangeError::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_RangeError^ Macad::Occt::Standard_RangeError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Standard_RangeError) _result = ::Standard_RangeError::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_RangeError::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_RangeError^ Macad::Occt::Standard_RangeError::CreateDowncasted(::Standard_RangeError* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::Standard_OutOfRange)))
        return Macad::Occt::Standard_OutOfRange::CreateDowncasted((::Standard_OutOfRange*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Standard_NegativeValue)))
        return Macad::Occt::Standard_NegativeValue::CreateDowncasted((::Standard_NegativeValue*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Standard_NullValue)))
        return Macad::Occt::Standard_NullValue::CreateDowncasted((::Standard_NullValue*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Prs3d_InvalidAngle)))
        return Macad::Occt::Prs3d_InvalidAngle::CreateDowncasted((::Prs3d_InvalidAngle*)instance);
    
    return gcnew Macad::Occt::Standard_RangeError( instance );
}



//---------------------------------------------------------------------
//  Class  Standard_OutOfRange
//---------------------------------------------------------------------

Macad::Occt::Standard_OutOfRange::Standard_OutOfRange()
    : Macad::Occt::Standard_RangeError(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Standard_OutOfRange();
}

Macad::Occt::Standard_OutOfRange::Standard_OutOfRange(System::String^ theMessage)
    : Macad::Occt::Standard_RangeError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Standard_OutOfRange(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_OutOfRange::Standard_OutOfRange(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_RangeError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Standard_OutOfRange(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::Standard_OutOfRange::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Standard_OutOfRange::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Standard_OutOfRange::Raise()
{
    ::Standard_OutOfRange::Raise("");
}

Macad::Occt::Standard_OutOfRange^ Macad::Occt::Standard_OutOfRange::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Standard_OutOfRange) _result = ::Standard_OutOfRange::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_OutOfRange::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_OutOfRange^ Macad::Occt::Standard_OutOfRange::NewInstance()
{
    Handle(::Standard_OutOfRange) _result = ::Standard_OutOfRange::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_OutOfRange::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_OutOfRange^ Macad::Occt::Standard_OutOfRange::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Standard_OutOfRange) _result = ::Standard_OutOfRange::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_OutOfRange::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_OutOfRange^ Macad::Occt::Standard_OutOfRange::CreateDowncasted(::Standard_OutOfRange* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::Aspect_AspectFillAreaDefinitionError)))
        return Macad::Occt::Aspect_AspectFillAreaDefinitionError::CreateDowncasted((::Aspect_AspectFillAreaDefinitionError*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Aspect_AspectLineDefinitionError)))
        return Macad::Occt::Aspect_AspectLineDefinitionError::CreateDowncasted((::Aspect_AspectLineDefinitionError*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Aspect_AspectMarkerDefinitionError)))
        return Macad::Occt::Aspect_AspectMarkerDefinitionError::CreateDowncasted((::Aspect_AspectMarkerDefinitionError*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Aspect_DisplayConnectionDefinitionError)))
        return Macad::Occt::Aspect_DisplayConnectionDefinitionError::CreateDowncasted((::Aspect_DisplayConnectionDefinitionError*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Aspect_GraphicDeviceDefinitionError)))
        return Macad::Occt::Aspect_GraphicDeviceDefinitionError::CreateDowncasted((::Aspect_GraphicDeviceDefinitionError*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Aspect_IdentDefinitionError)))
        return Macad::Occt::Aspect_IdentDefinitionError::CreateDowncasted((::Aspect_IdentDefinitionError*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Aspect_WindowDefinitionError)))
        return Macad::Occt::Aspect_WindowDefinitionError::CreateDowncasted((::Aspect_WindowDefinitionError*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Aspect_WindowError)))
        return Macad::Occt::Aspect_WindowError::CreateDowncasted((::Aspect_WindowError*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Graphic3d_GroupDefinitionError)))
        return Macad::Occt::Graphic3d_GroupDefinitionError::CreateDowncasted((::Graphic3d_GroupDefinitionError*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Graphic3d_MaterialDefinitionError)))
        return Macad::Occt::Graphic3d_MaterialDefinitionError::CreateDowncasted((::Graphic3d_MaterialDefinitionError*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Graphic3d_PriorityDefinitionError)))
        return Macad::Occt::Graphic3d_PriorityDefinitionError::CreateDowncasted((::Graphic3d_PriorityDefinitionError*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Graphic3d_StructureDefinitionError)))
        return Macad::Occt::Graphic3d_StructureDefinitionError::CreateDowncasted((::Graphic3d_StructureDefinitionError*)instance);
    if (instance->IsKind(STANDARD_TYPE(::V3d_BadValue)))
        return Macad::Occt::V3d_BadValue::CreateDowncasted((::V3d_BadValue*)instance);
    
    return gcnew Macad::Occt::Standard_OutOfRange( instance );
}



//---------------------------------------------------------------------
//  Class  Standard_DimensionError
//---------------------------------------------------------------------

Macad::Occt::Standard_DimensionError::Standard_DimensionError()
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Standard_DimensionError();
}

Macad::Occt::Standard_DimensionError::Standard_DimensionError(System::String^ theMessage)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Standard_DimensionError(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_DimensionError::Standard_DimensionError(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Standard_DimensionError(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::Standard_DimensionError::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Standard_DimensionError::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Standard_DimensionError::Raise()
{
    ::Standard_DimensionError::Raise("");
}

Macad::Occt::Standard_DimensionError^ Macad::Occt::Standard_DimensionError::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Standard_DimensionError) _result = ::Standard_DimensionError::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_DimensionError::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_DimensionError^ Macad::Occt::Standard_DimensionError::NewInstance()
{
    Handle(::Standard_DimensionError) _result = ::Standard_DimensionError::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_DimensionError::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_DimensionError^ Macad::Occt::Standard_DimensionError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Standard_DimensionError) _result = ::Standard_DimensionError::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_DimensionError::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_DimensionError^ Macad::Occt::Standard_DimensionError::CreateDowncasted(::Standard_DimensionError* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::Standard_DimensionMismatch)))
        return Macad::Occt::Standard_DimensionMismatch::CreateDowncasted((::Standard_DimensionMismatch*)instance);
    
    return gcnew Macad::Occt::Standard_DimensionError( instance );
}



//---------------------------------------------------------------------
//  Class  Standard_DimensionMismatch
//---------------------------------------------------------------------

Macad::Occt::Standard_DimensionMismatch::Standard_DimensionMismatch()
    : Macad::Occt::Standard_DimensionError(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Standard_DimensionMismatch();
}

Macad::Occt::Standard_DimensionMismatch::Standard_DimensionMismatch(System::String^ theMessage)
    : Macad::Occt::Standard_DimensionError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Standard_DimensionMismatch(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_DimensionMismatch::Standard_DimensionMismatch(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_DimensionError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Standard_DimensionMismatch(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::Standard_DimensionMismatch::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Standard_DimensionMismatch::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Standard_DimensionMismatch::Raise()
{
    ::Standard_DimensionMismatch::Raise("");
}

Macad::Occt::Standard_DimensionMismatch^ Macad::Occt::Standard_DimensionMismatch::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Standard_DimensionMismatch) _result = ::Standard_DimensionMismatch::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_DimensionMismatch::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_DimensionMismatch^ Macad::Occt::Standard_DimensionMismatch::NewInstance()
{
    Handle(::Standard_DimensionMismatch) _result = ::Standard_DimensionMismatch::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_DimensionMismatch::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_DimensionMismatch^ Macad::Occt::Standard_DimensionMismatch::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Standard_DimensionMismatch) _result = ::Standard_DimensionMismatch::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_DimensionMismatch::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_DimensionMismatch^ Macad::Occt::Standard_DimensionMismatch::CreateDowncasted(::Standard_DimensionMismatch* instance)
{
    return gcnew Macad::Occt::Standard_DimensionMismatch( instance );
}



//---------------------------------------------------------------------
//  Class  Standard_ProgramError
//---------------------------------------------------------------------

Macad::Occt::Standard_ProgramError::Standard_ProgramError()
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Standard_ProgramError();
}

Macad::Occt::Standard_ProgramError::Standard_ProgramError(System::String^ theMessage)
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Standard_ProgramError(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_ProgramError::Standard_ProgramError(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Standard_ProgramError(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::Standard_ProgramError::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Standard_ProgramError::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Standard_ProgramError::Raise()
{
    ::Standard_ProgramError::Raise("");
}

Macad::Occt::Standard_ProgramError^ Macad::Occt::Standard_ProgramError::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Standard_ProgramError) _result = ::Standard_ProgramError::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_ProgramError::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_ProgramError^ Macad::Occt::Standard_ProgramError::NewInstance()
{
    Handle(::Standard_ProgramError) _result = ::Standard_ProgramError::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_ProgramError::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_ProgramError^ Macad::Occt::Standard_ProgramError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Standard_ProgramError) _result = ::Standard_ProgramError::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_ProgramError::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_ProgramError^ Macad::Occt::Standard_ProgramError::CreateDowncasted(::Standard_ProgramError* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::Standard_OutOfMemory)))
        return Macad::Occt::Standard_OutOfMemory::CreateDowncasted((::Standard_OutOfMemory*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Standard_NotImplemented)))
        return Macad::Occt::Standard_NotImplemented::CreateDowncasted((::Standard_NotImplemented*)instance);
    
    return gcnew Macad::Occt::Standard_ProgramError( instance );
}



//---------------------------------------------------------------------
//  Class  Standard_OutOfMemory
//---------------------------------------------------------------------

Macad::Occt::Standard_OutOfMemory::Standard_OutOfMemory(System::String^ theMessage)
    : Macad::Occt::Standard_ProgramError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Standard_OutOfMemory(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_OutOfMemory::Standard_OutOfMemory()
    : Macad::Occt::Standard_ProgramError(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Standard_OutOfMemory(nullptr);
}

System::String^ Macad::Occt::Standard_OutOfMemory::GetMessageString()
{
    Standard_CString _result = ((::Standard_OutOfMemory*)_NativeInstance)->GetMessageString();
    return gcnew System::String(_result);
}

void Macad::Occt::Standard_OutOfMemory::SetMessageString(System::String^ aMessage)
{
    const char* sz_aMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(aMessage);
    ((::Standard_OutOfMemory*)_NativeInstance)->SetMessageString(sz_aMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aMessage);
}

void Macad::Occt::Standard_OutOfMemory::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Standard_OutOfMemory::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Standard_OutOfMemory::Raise()
{
    ::Standard_OutOfMemory::Raise("");
}

Macad::Occt::Standard_OutOfMemory^ Macad::Occt::Standard_OutOfMemory::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Standard_OutOfMemory) _result = ::Standard_OutOfMemory::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_OutOfMemory::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_OutOfMemory^ Macad::Occt::Standard_OutOfMemory::NewInstance()
{
    Handle(::Standard_OutOfMemory) _result = ::Standard_OutOfMemory::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_OutOfMemory::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_OutOfMemory^ Macad::Occt::Standard_OutOfMemory::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Standard_OutOfMemory) _result = ::Standard_OutOfMemory::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_OutOfMemory::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_OutOfMemory^ Macad::Occt::Standard_OutOfMemory::CreateDowncasted(::Standard_OutOfMemory* instance)
{
    return gcnew Macad::Occt::Standard_OutOfMemory( instance );
}



//---------------------------------------------------------------------
//  Class  Standard_NotImplemented
//---------------------------------------------------------------------

Macad::Occt::Standard_NotImplemented::Standard_NotImplemented()
    : Macad::Occt::Standard_ProgramError(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Standard_NotImplemented();
}

Macad::Occt::Standard_NotImplemented::Standard_NotImplemented(System::String^ theMessage)
    : Macad::Occt::Standard_ProgramError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Standard_NotImplemented(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_NotImplemented::Standard_NotImplemented(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_ProgramError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Standard_NotImplemented(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::Standard_NotImplemented::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Standard_NotImplemented::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Standard_NotImplemented::Raise()
{
    ::Standard_NotImplemented::Raise("");
}

Macad::Occt::Standard_NotImplemented^ Macad::Occt::Standard_NotImplemented::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Standard_NotImplemented) _result = ::Standard_NotImplemented::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_NotImplemented::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_NotImplemented^ Macad::Occt::Standard_NotImplemented::NewInstance()
{
    Handle(::Standard_NotImplemented) _result = ::Standard_NotImplemented::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_NotImplemented::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_NotImplemented^ Macad::Occt::Standard_NotImplemented::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Standard_NotImplemented) _result = ::Standard_NotImplemented::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_NotImplemented::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_NotImplemented^ Macad::Occt::Standard_NotImplemented::CreateDowncasted(::Standard_NotImplemented* instance)
{
    return gcnew Macad::Occt::Standard_NotImplemented( instance );
}



//---------------------------------------------------------------------
//  Class  Standard_Persistent
//---------------------------------------------------------------------

Macad::Occt::Standard_Persistent::Standard_Persistent()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Standard_Persistent();
}

Macad::Occt::Standard_Persistent^ Macad::Occt::Standard_Persistent::CreateDowncasted(::Standard_Persistent* instance)
{
    return gcnew Macad::Occt::Standard_Persistent( instance );
}



//---------------------------------------------------------------------
//  Class  Standard_NoSuchObject
//---------------------------------------------------------------------

Macad::Occt::Standard_NoSuchObject::Standard_NoSuchObject()
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Standard_NoSuchObject();
}

Macad::Occt::Standard_NoSuchObject::Standard_NoSuchObject(System::String^ theMessage)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Standard_NoSuchObject(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_NoSuchObject::Standard_NoSuchObject(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Standard_NoSuchObject(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::Standard_NoSuchObject::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Standard_NoSuchObject::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Standard_NoSuchObject::Raise()
{
    ::Standard_NoSuchObject::Raise("");
}

Macad::Occt::Standard_NoSuchObject^ Macad::Occt::Standard_NoSuchObject::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Standard_NoSuchObject) _result = ::Standard_NoSuchObject::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_NoSuchObject::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_NoSuchObject^ Macad::Occt::Standard_NoSuchObject::NewInstance()
{
    Handle(::Standard_NoSuchObject) _result = ::Standard_NoSuchObject::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_NoSuchObject::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_NoSuchObject^ Macad::Occt::Standard_NoSuchObject::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Standard_NoSuchObject) _result = ::Standard_NoSuchObject::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_NoSuchObject::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_NoSuchObject^ Macad::Occt::Standard_NoSuchObject::CreateDowncasted(::Standard_NoSuchObject* instance)
{
    return gcnew Macad::Occt::Standard_NoSuchObject( instance );
}



//---------------------------------------------------------------------
//  Class  Standard_TypeMismatch
//---------------------------------------------------------------------

Macad::Occt::Standard_TypeMismatch::Standard_TypeMismatch()
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Standard_TypeMismatch();
}

Macad::Occt::Standard_TypeMismatch::Standard_TypeMismatch(System::String^ theMessage)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Standard_TypeMismatch(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_TypeMismatch::Standard_TypeMismatch(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Standard_TypeMismatch(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::Standard_TypeMismatch::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Standard_TypeMismatch::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Standard_TypeMismatch::Raise()
{
    ::Standard_TypeMismatch::Raise("");
}

Macad::Occt::Standard_TypeMismatch^ Macad::Occt::Standard_TypeMismatch::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Standard_TypeMismatch) _result = ::Standard_TypeMismatch::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_TypeMismatch::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_TypeMismatch^ Macad::Occt::Standard_TypeMismatch::NewInstance()
{
    Handle(::Standard_TypeMismatch) _result = ::Standard_TypeMismatch::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_TypeMismatch::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_TypeMismatch^ Macad::Occt::Standard_TypeMismatch::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Standard_TypeMismatch) _result = ::Standard_TypeMismatch::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_TypeMismatch::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_TypeMismatch^ Macad::Occt::Standard_TypeMismatch::CreateDowncasted(::Standard_TypeMismatch* instance)
{
    return gcnew Macad::Occt::Standard_TypeMismatch( instance );
}



//---------------------------------------------------------------------
//  Class  Standard_Dump
//---------------------------------------------------------------------

Macad::Occt::Standard_Dump::Standard_Dump()
    : Macad::Occt::BaseClass<::Standard_Dump>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_Dump();
}

bool Macad::Occt::Standard_Dump::HasChildKey(Macad::Occt::TCollection_AsciiString^ theSourceValue)
{
    bool _result = ::Standard_Dump::HasChildKey(*(::TCollection_AsciiString*)theSourceValue->NativeInstance);
    return _result;
}

System::String^ Macad::Occt::Standard_Dump::JsonKeyToString(Macad::Occt::Standard_JsonKey theKey)
{
    Standard_CString _result = ::Standard_Dump::JsonKeyToString((::Standard_JsonKey)theKey);
    return gcnew System::String(_result);
}

int Macad::Occt::Standard_Dump::JsonKeyLength(Macad::Occt::Standard_JsonKey theKey)
{
    int _result = ::Standard_Dump::JsonKeyLength((::Standard_JsonKey)theKey);
    return _result;
}

void Macad::Occt::Standard_Dump::AddValuesSeparator(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ::Standard_Dump::AddValuesSeparator(oss_theOStream);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Standard_Dump::GetPointerPrefix()
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ::Standard_Dump::GetPointerPrefix();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Standard_Dump::GetPointerInfo(Macad::Occt::Standard_Transient^ thePointer, bool isShortInfo)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ::Standard_Dump::GetPointerInfo(Handle(::Standard_Transient)(thePointer->NativeInstance), isShortInfo);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Standard_Dump::GetPointerInfo(Macad::Occt::Standard_Transient^ thePointer)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ::Standard_Dump::GetPointerInfo(Handle(::Standard_Transient)(thePointer->NativeInstance), true);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Standard_Dump::GetPointerInfo(System::IntPtr thePointer, bool isShortInfo)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ::Standard_Dump::GetPointerInfo(thePointer.ToPointer(), isShortInfo);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Standard_Dump::GetPointerInfo(System::IntPtr thePointer)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ::Standard_Dump::GetPointerInfo(thePointer.ToPointer(), true);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::Standard_Dump::DumpKeyToClass(System::IO::TextWriter^ theOStream, Macad::Occt::TCollection_AsciiString^ theKey, Macad::Occt::TCollection_AsciiString^ theField)
{
    std::ostringstream oss_theOStream;
    ::Standard_Dump::DumpKeyToClass(oss_theOStream, *(::TCollection_AsciiString*)theKey->NativeInstance, *(::TCollection_AsciiString*)theField->NativeInstance);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Standard_Dump::DumpCharacterValues(System::IO::TextWriter^ theOStream, int theCount)
{
    std::ostringstream oss_theOStream;
    ::Standard_Dump::DumpCharacterValues(oss_theOStream, theCount);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Standard_Dump::DumpRealValues(System::IO::TextWriter^ theOStream, int theCount)
{
    std::ostringstream oss_theOStream;
    ::Standard_Dump::DumpRealValues(oss_theOStream, theCount);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

bool Macad::Occt::Standard_Dump::ProcessStreamName(Macad::Occt::TCollection_AsciiString^ theStreamStr, Macad::Occt::TCollection_AsciiString^ theName, int% theStreamPos)
{
    pin_ptr<int> pp_theStreamPos = &theStreamPos;
    bool _result = ::Standard_Dump::ProcessStreamName(*(::TCollection_AsciiString*)theStreamStr->NativeInstance, *(::TCollection_AsciiString*)theName->NativeInstance, *(int*)pp_theStreamPos);
    return _result;
}

bool Macad::Occt::Standard_Dump::ProcessFieldName(Macad::Occt::TCollection_AsciiString^ theStreamStr, Macad::Occt::TCollection_AsciiString^ theName, int% theStreamPos)
{
    pin_ptr<int> pp_theStreamPos = &theStreamPos;
    bool _result = ::Standard_Dump::ProcessFieldName(*(::TCollection_AsciiString*)theStreamStr->NativeInstance, *(::TCollection_AsciiString*)theName->NativeInstance, *(int*)pp_theStreamPos);
    return _result;
}

bool Macad::Occt::Standard_Dump::InitRealValues(Macad::Occt::TCollection_AsciiString^ theStreamStr, int% theStreamPos, int theCount)
{
    pin_ptr<int> pp_theStreamPos = &theStreamPos;
    bool _result = ::Standard_Dump::InitRealValues(*(::TCollection_AsciiString*)theStreamStr->NativeInstance, *(int*)pp_theStreamPos, theCount);
    return _result;
}

bool Macad::Occt::Standard_Dump::InitValue(Macad::Occt::TCollection_AsciiString^ theStreamStr, int% theStreamPos, Macad::Occt::TCollection_AsciiString^ theValue)
{
    pin_ptr<int> pp_theStreamPos = &theStreamPos;
    bool _result = ::Standard_Dump::InitValue(*(::TCollection_AsciiString*)theStreamStr->NativeInstance, *(int*)pp_theStreamPos, *(::TCollection_AsciiString*)theValue->NativeInstance);
    return _result;
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Standard_Dump::DumpFieldToName(Macad::Occt::TCollection_AsciiString^ theField)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ::Standard_Dump::DumpFieldToName(*(::TCollection_AsciiString*)theField->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}



//---------------------------------------------------------------------
//  Class  Standard_AbortiveTransaction
//---------------------------------------------------------------------

Macad::Occt::Standard_AbortiveTransaction::Standard_AbortiveTransaction()
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Standard_AbortiveTransaction();
}

Macad::Occt::Standard_AbortiveTransaction::Standard_AbortiveTransaction(System::String^ theMessage)
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Standard_AbortiveTransaction(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_AbortiveTransaction::Standard_AbortiveTransaction(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Standard_AbortiveTransaction(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::Standard_AbortiveTransaction::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Standard_AbortiveTransaction::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Standard_AbortiveTransaction::Raise()
{
    ::Standard_AbortiveTransaction::Raise("");
}

Macad::Occt::Standard_AbortiveTransaction^ Macad::Occt::Standard_AbortiveTransaction::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Standard_AbortiveTransaction) _result = ::Standard_AbortiveTransaction::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_AbortiveTransaction::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_AbortiveTransaction^ Macad::Occt::Standard_AbortiveTransaction::NewInstance()
{
    Handle(::Standard_AbortiveTransaction) _result = ::Standard_AbortiveTransaction::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_AbortiveTransaction::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_AbortiveTransaction^ Macad::Occt::Standard_AbortiveTransaction::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Standard_AbortiveTransaction) _result = ::Standard_AbortiveTransaction::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_AbortiveTransaction::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_AbortiveTransaction^ Macad::Occt::Standard_AbortiveTransaction::CreateDowncasted(::Standard_AbortiveTransaction* instance)
{
    return gcnew Macad::Occt::Standard_AbortiveTransaction( instance );
}



//---------------------------------------------------------------------
//  Class  Standard_Condition
//---------------------------------------------------------------------

Macad::Occt::Standard_Condition::Standard_Condition(bool theIsSet)
    : Macad::Occt::BaseClass<::Standard_Condition>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_Condition(theIsSet);
}

void Macad::Occt::Standard_Condition::Set()
{
    ((::Standard_Condition*)_NativeInstance)->Set();
}

void Macad::Occt::Standard_Condition::Reset()
{
    ((::Standard_Condition*)_NativeInstance)->Reset();
}

void Macad::Occt::Standard_Condition::Wait()
{
    ((::Standard_Condition*)_NativeInstance)->Wait();
}

bool Macad::Occt::Standard_Condition::Wait(int theTimeMilliseconds)
{
    bool _result = ((::Standard_Condition*)_NativeInstance)->Wait(theTimeMilliseconds);
    return _result;
}

bool Macad::Occt::Standard_Condition::Check()
{
    bool _result = ((::Standard_Condition*)_NativeInstance)->Check();
    return _result;
}

bool Macad::Occt::Standard_Condition::CheckReset()
{
    bool _result = ((::Standard_Condition*)_NativeInstance)->CheckReset();
    return _result;
}

System::IntPtr Macad::Occt::Standard_Condition::getHandle()
{
    void* _result = ((::Standard_Condition*)_NativeInstance)->getHandle();
    return System::IntPtr(_result);
}



//---------------------------------------------------------------------
//  Class  Standard_CStringHasher
//---------------------------------------------------------------------

Macad::Occt::Standard_CStringHasher::Standard_CStringHasher()
    : Macad::Occt::BaseClass<::Standard_CStringHasher>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_CStringHasher();
}



//---------------------------------------------------------------------
//  Class  Standard_NumericError
//---------------------------------------------------------------------

Macad::Occt::Standard_NumericError::Standard_NumericError()
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Standard_NumericError();
}

Macad::Occt::Standard_NumericError::Standard_NumericError(System::String^ theMessage)
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Standard_NumericError(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_NumericError::Standard_NumericError(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Standard_NumericError(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::Standard_NumericError::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Standard_NumericError::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Standard_NumericError::Raise()
{
    ::Standard_NumericError::Raise("");
}

Macad::Occt::Standard_NumericError^ Macad::Occt::Standard_NumericError::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Standard_NumericError) _result = ::Standard_NumericError::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_NumericError::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_NumericError^ Macad::Occt::Standard_NumericError::NewInstance()
{
    Handle(::Standard_NumericError) _result = ::Standard_NumericError::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_NumericError::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_NumericError^ Macad::Occt::Standard_NumericError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Standard_NumericError) _result = ::Standard_NumericError::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_NumericError::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_NumericError^ Macad::Occt::Standard_NumericError::CreateDowncasted(::Standard_NumericError* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::Standard_DivideByZero)))
        return Macad::Occt::Standard_DivideByZero::CreateDowncasted((::Standard_DivideByZero*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Standard_Overflow)))
        return Macad::Occt::Standard_Overflow::CreateDowncasted((::Standard_Overflow*)instance);
    if (instance->IsKind(STANDARD_TYPE(::Standard_Underflow)))
        return Macad::Occt::Standard_Underflow::CreateDowncasted((::Standard_Underflow*)instance);
    
    return gcnew Macad::Occt::Standard_NumericError( instance );
}



//---------------------------------------------------------------------
//  Class  Standard_DivideByZero
//---------------------------------------------------------------------

Macad::Occt::Standard_DivideByZero::Standard_DivideByZero()
    : Macad::Occt::Standard_NumericError(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Standard_DivideByZero();
}

Macad::Occt::Standard_DivideByZero::Standard_DivideByZero(System::String^ theMessage)
    : Macad::Occt::Standard_NumericError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Standard_DivideByZero(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_DivideByZero::Standard_DivideByZero(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_NumericError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Standard_DivideByZero(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::Standard_DivideByZero::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Standard_DivideByZero::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Standard_DivideByZero::Raise()
{
    ::Standard_DivideByZero::Raise("");
}

Macad::Occt::Standard_DivideByZero^ Macad::Occt::Standard_DivideByZero::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Standard_DivideByZero) _result = ::Standard_DivideByZero::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_DivideByZero::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_DivideByZero^ Macad::Occt::Standard_DivideByZero::NewInstance()
{
    Handle(::Standard_DivideByZero) _result = ::Standard_DivideByZero::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_DivideByZero::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_DivideByZero^ Macad::Occt::Standard_DivideByZero::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Standard_DivideByZero) _result = ::Standard_DivideByZero::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_DivideByZero::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_DivideByZero^ Macad::Occt::Standard_DivideByZero::CreateDowncasted(::Standard_DivideByZero* instance)
{
    return gcnew Macad::Occt::Standard_DivideByZero( instance );
}



//---------------------------------------------------------------------
//  Class  Standard_ErrorHandler
//---------------------------------------------------------------------

Macad::Occt::Standard_ErrorHandler::Standard_ErrorHandler()
    : Macad::Occt::BaseClass<::Standard_ErrorHandler>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_ErrorHandler();
}

void Macad::Occt::Standard_ErrorHandler::Destroy()
{
    ((::Standard_ErrorHandler*)_NativeInstance)->Destroy();
}

void Macad::Occt::Standard_ErrorHandler::Unlink()
{
    ((::Standard_ErrorHandler*)_NativeInstance)->Unlink();
}

Macad::Occt::Standard_Failure^ Macad::Occt::Standard_ErrorHandler::Error()
{
    Handle(::Standard_Failure) _result = ((::Standard_ErrorHandler*)_NativeInstance)->Error();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Failure::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Failure^ Macad::Occt::Standard_ErrorHandler::LastCaughtError()
{
    Handle(::Standard_Failure) _result = ::Standard_ErrorHandler::LastCaughtError();
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Failure::CreateDowncasted(_result.get());
}

bool Macad::Occt::Standard_ErrorHandler::IsInTryBlock()
{
    bool _result = ::Standard_ErrorHandler::IsInTryBlock();
    return _result;
}



//---------------------------------------------------------------------
//  Class  Standard_ErrorHandler::Callback
//---------------------------------------------------------------------

void Macad::Occt::Standard_ErrorHandler::Callback::RegisterCallback()
{
    ((::Standard_ErrorHandler::Callback*)_NativeInstance)->RegisterCallback();
}

void Macad::Occt::Standard_ErrorHandler::Callback::UnregisterCallback()
{
    ((::Standard_ErrorHandler::Callback*)_NativeInstance)->UnregisterCallback();
}

void Macad::Occt::Standard_ErrorHandler::Callback::DestroyCallback()
{
    ((::Standard_ErrorHandler::Callback*)_NativeInstance)->DestroyCallback();
}



//---------------------------------------------------------------------
//  Class  Standard_GUID
//---------------------------------------------------------------------

Macad::Occt::Standard_GUID::Standard_GUID()
    : Macad::Occt::BaseClass<::Standard_GUID>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_GUID();
}

Macad::Occt::Standard_GUID::Standard_GUID(System::String^ aGuid)
    : Macad::Occt::BaseClass<::Standard_GUID>(BaseClass::InitMode::Uninitialized)
{
    pin_ptr<const wchar_t> pp_aGuid = PtrToStringChars(aGuid);
    _NativeInstance = new ::Standard_GUID((Standard_ExtString)pp_aGuid);
}

Macad::Occt::Standard_GUID::Standard_GUID(Macad::Occt::Standard_UUID^ aGuid)
    : Macad::Occt::BaseClass<::Standard_GUID>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_GUID(*(::Standard_UUID*)aGuid->NativeInstance);
}

Macad::Occt::Standard_UUID^ Macad::Occt::Standard_GUID::ToUUID()
{
    ::Standard_UUID* _result = new ::Standard_UUID();
    *_result = ((::Standard_GUID*)_NativeInstance)->ToUUID();
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Standard_UUID(_result);
}

void Macad::Occt::Standard_GUID::ToCString(char aStrGuid)
{
    pin_ptr<char> pp_aStrGuid = &aStrGuid;
    ((::Standard_GUID*)_NativeInstance)->ToCString((char*)pp_aStrGuid);
}

bool Macad::Occt::Standard_GUID::IsSame(Macad::Occt::Standard_GUID^ uid)
{
    bool _result = ((::Standard_GUID*)_NativeInstance)->IsSame(*(::Standard_GUID*)uid->NativeInstance);
    return _result;
}

bool Macad::Occt::Standard_GUID::IsNotSame(Macad::Occt::Standard_GUID^ uid)
{
    bool _result = ((::Standard_GUID*)_NativeInstance)->IsNotSame(*(::Standard_GUID*)uid->NativeInstance);
    return _result;
}

void Macad::Occt::Standard_GUID::Assign(Macad::Occt::Standard_GUID^ uid)
{
    ((::Standard_GUID*)_NativeInstance)->Assign(*(::Standard_GUID*)uid->NativeInstance);
}

void Macad::Occt::Standard_GUID::Assign(Macad::Occt::Standard_UUID^ uid)
{
    ((::Standard_GUID*)_NativeInstance)->Assign(*(::Standard_UUID*)uid->NativeInstance);
}

void Macad::Occt::Standard_GUID::ShallowDump(System::IO::TextWriter^ aStream)
{
    std::ostringstream oss_aStream;
    ((::Standard_GUID*)_NativeInstance)->ShallowDump(oss_aStream);
    aStream->Write(gcnew System::String(oss_aStream.str().c_str()));
}

bool Macad::Occt::Standard_GUID::CheckGUIDFormat(System::String^ aGuid)
{
    const char* sz_aGuid = (char*)(void*)Marshal::StringToHGlobalAnsi(aGuid);
    bool _result = ::Standard_GUID::CheckGUIDFormat(sz_aGuid);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aGuid);
    return _result;
}

int Macad::Occt::Standard_GUID::GetHashCode()
{
    return std::hash<::Standard_GUID>{}(*NativeInstance);
}



//---------------------------------------------------------------------
//  Class  Standard_ImmutableObject
//---------------------------------------------------------------------

Macad::Occt::Standard_ImmutableObject::Standard_ImmutableObject()
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Standard_ImmutableObject();
}

Macad::Occt::Standard_ImmutableObject::Standard_ImmutableObject(System::String^ theMessage)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Standard_ImmutableObject(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_ImmutableObject::Standard_ImmutableObject(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Standard_ImmutableObject(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::Standard_ImmutableObject::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Standard_ImmutableObject::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Standard_ImmutableObject::Raise()
{
    ::Standard_ImmutableObject::Raise("");
}

Macad::Occt::Standard_ImmutableObject^ Macad::Occt::Standard_ImmutableObject::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Standard_ImmutableObject) _result = ::Standard_ImmutableObject::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_ImmutableObject::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_ImmutableObject^ Macad::Occt::Standard_ImmutableObject::NewInstance()
{
    Handle(::Standard_ImmutableObject) _result = ::Standard_ImmutableObject::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_ImmutableObject::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_ImmutableObject^ Macad::Occt::Standard_ImmutableObject::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Standard_ImmutableObject) _result = ::Standard_ImmutableObject::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_ImmutableObject::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_ImmutableObject^ Macad::Occt::Standard_ImmutableObject::CreateDowncasted(::Standard_ImmutableObject* instance)
{
    return gcnew Macad::Occt::Standard_ImmutableObject( instance );
}



//---------------------------------------------------------------------
//  Class  Standard_LicenseError
//---------------------------------------------------------------------

Macad::Occt::Standard_LicenseError::Standard_LicenseError()
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Standard_LicenseError();
}

Macad::Occt::Standard_LicenseError::Standard_LicenseError(System::String^ theMessage)
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Standard_LicenseError(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_LicenseError::Standard_LicenseError(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Standard_LicenseError(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::Standard_LicenseError::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Standard_LicenseError::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Standard_LicenseError::Raise()
{
    ::Standard_LicenseError::Raise("");
}

Macad::Occt::Standard_LicenseError^ Macad::Occt::Standard_LicenseError::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Standard_LicenseError) _result = ::Standard_LicenseError::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_LicenseError::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_LicenseError^ Macad::Occt::Standard_LicenseError::NewInstance()
{
    Handle(::Standard_LicenseError) _result = ::Standard_LicenseError::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_LicenseError::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_LicenseError^ Macad::Occt::Standard_LicenseError::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Standard_LicenseError) _result = ::Standard_LicenseError::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_LicenseError::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_LicenseError^ Macad::Occt::Standard_LicenseError::CreateDowncasted(::Standard_LicenseError* instance)
{
    if( instance == nullptr )
        return nullptr;
    
    if (instance->IsKind(STANDARD_TYPE(::Standard_LicenseNotFound)))
        return Macad::Occt::Standard_LicenseNotFound::CreateDowncasted((::Standard_LicenseNotFound*)instance);
    
    return gcnew Macad::Occt::Standard_LicenseError( instance );
}



//---------------------------------------------------------------------
//  Class  Standard_LicenseNotFound
//---------------------------------------------------------------------

Macad::Occt::Standard_LicenseNotFound::Standard_LicenseNotFound()
    : Macad::Occt::Standard_LicenseError(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Standard_LicenseNotFound();
}

Macad::Occt::Standard_LicenseNotFound::Standard_LicenseNotFound(System::String^ theMessage)
    : Macad::Occt::Standard_LicenseError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Standard_LicenseNotFound(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_LicenseNotFound::Standard_LicenseNotFound(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_LicenseError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Standard_LicenseNotFound(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::Standard_LicenseNotFound::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Standard_LicenseNotFound::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Standard_LicenseNotFound::Raise()
{
    ::Standard_LicenseNotFound::Raise("");
}

Macad::Occt::Standard_LicenseNotFound^ Macad::Occt::Standard_LicenseNotFound::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Standard_LicenseNotFound) _result = ::Standard_LicenseNotFound::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_LicenseNotFound::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_LicenseNotFound^ Macad::Occt::Standard_LicenseNotFound::NewInstance()
{
    Handle(::Standard_LicenseNotFound) _result = ::Standard_LicenseNotFound::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_LicenseNotFound::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_LicenseNotFound^ Macad::Occt::Standard_LicenseNotFound::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Standard_LicenseNotFound) _result = ::Standard_LicenseNotFound::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_LicenseNotFound::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_LicenseNotFound^ Macad::Occt::Standard_LicenseNotFound::CreateDowncasted(::Standard_LicenseNotFound* instance)
{
    return gcnew Macad::Occt::Standard_LicenseNotFound( instance );
}



//---------------------------------------------------------------------
//  Class  Standard_MMgrRoot
//---------------------------------------------------------------------

Macad::Occt::Standard_MMgrRoot::Standard_MMgrRoot()
    : Macad::Occt::BaseClass<::Standard_MMgrRoot>(BaseClass::InitMode::Uninitialized)
{
    	throw gcnew System::NotImplementedException("Native class is abstract");
}

System::IntPtr Macad::Occt::Standard_MMgrRoot::Allocate(long long unsigned int theSize)
{
    void* _result = ((::Standard_MMgrRoot*)_NativeInstance)->Allocate(theSize);
    return System::IntPtr(_result);
}

System::IntPtr Macad::Occt::Standard_MMgrRoot::Reallocate(System::IntPtr thePtr, long long unsigned int theSize)
{
    void* _result = ((::Standard_MMgrRoot*)_NativeInstance)->Reallocate(thePtr.ToPointer(), theSize);
    return System::IntPtr(_result);
}

void Macad::Occt::Standard_MMgrRoot::Free(System::IntPtr thePtr)
{
    ((::Standard_MMgrRoot*)_NativeInstance)->Free(thePtr.ToPointer());
}

int Macad::Occt::Standard_MMgrRoot::Purge(bool isDestroyed)
{
    int _result = ((::Standard_MMgrRoot*)_NativeInstance)->Purge(isDestroyed);
    return _result;
}

int Macad::Occt::Standard_MMgrRoot::Purge()
{
    int _result = ((::Standard_MMgrRoot*)_NativeInstance)->Purge(false);
    return _result;
}



//---------------------------------------------------------------------
//  Class  Standard_MultiplyDefined
//---------------------------------------------------------------------

Macad::Occt::Standard_MultiplyDefined::Standard_MultiplyDefined()
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Standard_MultiplyDefined();
}

Macad::Occt::Standard_MultiplyDefined::Standard_MultiplyDefined(System::String^ theMessage)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Standard_MultiplyDefined(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_MultiplyDefined::Standard_MultiplyDefined(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Standard_MultiplyDefined(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::Standard_MultiplyDefined::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Standard_MultiplyDefined::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Standard_MultiplyDefined::Raise()
{
    ::Standard_MultiplyDefined::Raise("");
}

Macad::Occt::Standard_MultiplyDefined^ Macad::Occt::Standard_MultiplyDefined::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Standard_MultiplyDefined) _result = ::Standard_MultiplyDefined::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_MultiplyDefined::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_MultiplyDefined^ Macad::Occt::Standard_MultiplyDefined::NewInstance()
{
    Handle(::Standard_MultiplyDefined) _result = ::Standard_MultiplyDefined::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_MultiplyDefined::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_MultiplyDefined^ Macad::Occt::Standard_MultiplyDefined::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Standard_MultiplyDefined) _result = ::Standard_MultiplyDefined::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_MultiplyDefined::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_MultiplyDefined^ Macad::Occt::Standard_MultiplyDefined::CreateDowncasted(::Standard_MultiplyDefined* instance)
{
    return gcnew Macad::Occt::Standard_MultiplyDefined( instance );
}



//---------------------------------------------------------------------
//  Class  Standard_NegativeValue
//---------------------------------------------------------------------

Macad::Occt::Standard_NegativeValue::Standard_NegativeValue()
    : Macad::Occt::Standard_RangeError(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Standard_NegativeValue();
}

Macad::Occt::Standard_NegativeValue::Standard_NegativeValue(System::String^ theMessage)
    : Macad::Occt::Standard_RangeError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Standard_NegativeValue(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_NegativeValue::Standard_NegativeValue(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_RangeError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Standard_NegativeValue(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::Standard_NegativeValue::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Standard_NegativeValue::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Standard_NegativeValue::Raise()
{
    ::Standard_NegativeValue::Raise("");
}

Macad::Occt::Standard_NegativeValue^ Macad::Occt::Standard_NegativeValue::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Standard_NegativeValue) _result = ::Standard_NegativeValue::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_NegativeValue::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_NegativeValue^ Macad::Occt::Standard_NegativeValue::NewInstance()
{
    Handle(::Standard_NegativeValue) _result = ::Standard_NegativeValue::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_NegativeValue::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_NegativeValue^ Macad::Occt::Standard_NegativeValue::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Standard_NegativeValue) _result = ::Standard_NegativeValue::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_NegativeValue::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_NegativeValue^ Macad::Occt::Standard_NegativeValue::CreateDowncasted(::Standard_NegativeValue* instance)
{
    return gcnew Macad::Occt::Standard_NegativeValue( instance );
}



//---------------------------------------------------------------------
//  Class  Standard_NoMoreObject
//---------------------------------------------------------------------

Macad::Occt::Standard_NoMoreObject::Standard_NoMoreObject()
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Standard_NoMoreObject();
}

Macad::Occt::Standard_NoMoreObject::Standard_NoMoreObject(System::String^ theMessage)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Standard_NoMoreObject(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_NoMoreObject::Standard_NoMoreObject(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Standard_NoMoreObject(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::Standard_NoMoreObject::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Standard_NoMoreObject::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Standard_NoMoreObject::Raise()
{
    ::Standard_NoMoreObject::Raise("");
}

Macad::Occt::Standard_NoMoreObject^ Macad::Occt::Standard_NoMoreObject::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Standard_NoMoreObject) _result = ::Standard_NoMoreObject::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_NoMoreObject::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_NoMoreObject^ Macad::Occt::Standard_NoMoreObject::NewInstance()
{
    Handle(::Standard_NoMoreObject) _result = ::Standard_NoMoreObject::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_NoMoreObject::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_NoMoreObject^ Macad::Occt::Standard_NoMoreObject::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Standard_NoMoreObject) _result = ::Standard_NoMoreObject::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_NoMoreObject::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_NoMoreObject^ Macad::Occt::Standard_NoMoreObject::CreateDowncasted(::Standard_NoMoreObject* instance)
{
    return gcnew Macad::Occt::Standard_NoMoreObject( instance );
}



//---------------------------------------------------------------------
//  Class  Standard_NullObject
//---------------------------------------------------------------------

Macad::Occt::Standard_NullObject::Standard_NullObject()
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Standard_NullObject();
}

Macad::Occt::Standard_NullObject::Standard_NullObject(System::String^ theMessage)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Standard_NullObject(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_NullObject::Standard_NullObject(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Standard_NullObject(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::Standard_NullObject::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Standard_NullObject::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Standard_NullObject::Raise()
{
    ::Standard_NullObject::Raise("");
}

Macad::Occt::Standard_NullObject^ Macad::Occt::Standard_NullObject::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Standard_NullObject) _result = ::Standard_NullObject::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_NullObject::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_NullObject^ Macad::Occt::Standard_NullObject::NewInstance()
{
    Handle(::Standard_NullObject) _result = ::Standard_NullObject::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_NullObject::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_NullObject^ Macad::Occt::Standard_NullObject::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Standard_NullObject) _result = ::Standard_NullObject::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_NullObject::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_NullObject^ Macad::Occt::Standard_NullObject::CreateDowncasted(::Standard_NullObject* instance)
{
    return gcnew Macad::Occt::Standard_NullObject( instance );
}



//---------------------------------------------------------------------
//  Class  Standard_NullValue
//---------------------------------------------------------------------

Macad::Occt::Standard_NullValue::Standard_NullValue()
    : Macad::Occt::Standard_RangeError(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Standard_NullValue();
}

Macad::Occt::Standard_NullValue::Standard_NullValue(System::String^ theMessage)
    : Macad::Occt::Standard_RangeError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Standard_NullValue(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_NullValue::Standard_NullValue(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_RangeError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Standard_NullValue(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::Standard_NullValue::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Standard_NullValue::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Standard_NullValue::Raise()
{
    ::Standard_NullValue::Raise("");
}

Macad::Occt::Standard_NullValue^ Macad::Occt::Standard_NullValue::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Standard_NullValue) _result = ::Standard_NullValue::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_NullValue::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_NullValue^ Macad::Occt::Standard_NullValue::NewInstance()
{
    Handle(::Standard_NullValue) _result = ::Standard_NullValue::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_NullValue::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_NullValue^ Macad::Occt::Standard_NullValue::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Standard_NullValue) _result = ::Standard_NullValue::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_NullValue::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_NullValue^ Macad::Occt::Standard_NullValue::CreateDowncasted(::Standard_NullValue* instance)
{
    return gcnew Macad::Occt::Standard_NullValue( instance );
}



//---------------------------------------------------------------------
//  Class  Standard_Overflow
//---------------------------------------------------------------------

Macad::Occt::Standard_Overflow::Standard_Overflow()
    : Macad::Occt::Standard_NumericError(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Standard_Overflow();
}

Macad::Occt::Standard_Overflow::Standard_Overflow(System::String^ theMessage)
    : Macad::Occt::Standard_NumericError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Standard_Overflow(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_Overflow::Standard_Overflow(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_NumericError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Standard_Overflow(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::Standard_Overflow::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Standard_Overflow::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Standard_Overflow::Raise()
{
    ::Standard_Overflow::Raise("");
}

Macad::Occt::Standard_Overflow^ Macad::Occt::Standard_Overflow::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Standard_Overflow) _result = ::Standard_Overflow::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Overflow::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Overflow^ Macad::Occt::Standard_Overflow::NewInstance()
{
    Handle(::Standard_Overflow) _result = ::Standard_Overflow::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Overflow::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Overflow^ Macad::Occt::Standard_Overflow::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Standard_Overflow) _result = ::Standard_Overflow::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Overflow::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Overflow^ Macad::Occt::Standard_Overflow::CreateDowncasted(::Standard_Overflow* instance)
{
    return gcnew Macad::Occt::Standard_Overflow( instance );
}



//---------------------------------------------------------------------
//  Class  Standard_ReadBuffer
//---------------------------------------------------------------------

Macad::Occt::Standard_ReadBuffer::Standard_ReadBuffer(long long int theDataLen, long long unsigned int theChunkLen, bool theIsPartialPayload)
    : Macad::Occt::BaseClass<::Standard_ReadBuffer>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_ReadBuffer(theDataLen, theChunkLen, theIsPartialPayload);
}

Macad::Occt::Standard_ReadBuffer::Standard_ReadBuffer(long long int theDataLen, long long unsigned int theChunkLen)
    : Macad::Occt::BaseClass<::Standard_ReadBuffer>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_ReadBuffer(theDataLen, theChunkLen, false);
}

void Macad::Occt::Standard_ReadBuffer::Init(long long int theDataLen, long long unsigned int theChunkLen, bool theIsPartialPayload)
{
    ((::Standard_ReadBuffer*)_NativeInstance)->Init(theDataLen, theChunkLen, theIsPartialPayload);
}

void Macad::Occt::Standard_ReadBuffer::Init(long long int theDataLen, long long unsigned int theChunkLen)
{
    ((::Standard_ReadBuffer*)_NativeInstance)->Init(theDataLen, theChunkLen, false);
}

bool Macad::Occt::Standard_ReadBuffer::IsDone()
{
    bool _result = ((::Standard_ReadBuffer*)_NativeInstance)->IsDone();
    return _result;
}



//---------------------------------------------------------------------
//  Class  Standard_ReadLineBuffer
//---------------------------------------------------------------------

Macad::Occt::Standard_ReadLineBuffer::Standard_ReadLineBuffer(long long unsigned int theMaxBufferSizeBytes)
    : Macad::Occt::BaseClass<::Standard_ReadLineBuffer>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Standard_ReadLineBuffer(theMaxBufferSizeBytes);
}

void Macad::Occt::Standard_ReadLineBuffer::Clear()
{
    ((::Standard_ReadLineBuffer*)_NativeInstance)->Clear();
}

bool Macad::Occt::Standard_ReadLineBuffer::IsMultilineMode()
{
    bool _result = ((::Standard_ReadLineBuffer*)_NativeInstance)->IsMultilineMode();
    return _result;
}

bool Macad::Occt::Standard_ReadLineBuffer::ToPutGapInMultiline()
{
    bool _result = ((::Standard_ReadLineBuffer*)_NativeInstance)->ToPutGapInMultiline();
    return _result;
}

void Macad::Occt::Standard_ReadLineBuffer::SetMultilineMode(bool theMultilineMode, bool theToPutGap)
{
    ((::Standard_ReadLineBuffer*)_NativeInstance)->SetMultilineMode(theMultilineMode, theToPutGap);
}

void Macad::Occt::Standard_ReadLineBuffer::SetMultilineMode(bool theMultilineMode)
{
    ((::Standard_ReadLineBuffer*)_NativeInstance)->SetMultilineMode(theMultilineMode, true);
}



//---------------------------------------------------------------------
//  Class  Standard_Underflow
//---------------------------------------------------------------------

Macad::Occt::Standard_Underflow::Standard_Underflow()
    : Macad::Occt::Standard_NumericError(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Standard_Underflow();
}

Macad::Occt::Standard_Underflow::Standard_Underflow(System::String^ theMessage)
    : Macad::Occt::Standard_NumericError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    NativeInstance = new ::Standard_Underflow(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_Underflow::Standard_Underflow(System::String^ theMessage, System::String^ theStackTrace)
    : Macad::Occt::Standard_NumericError(BaseClass::InitMode::Uninitialized)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    NativeInstance = new ::Standard_Underflow(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
}

void Macad::Occt::Standard_Underflow::Raise(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    ::Standard_Underflow::Raise(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Standard_Underflow::Raise()
{
    ::Standard_Underflow::Raise("");
}

Macad::Occt::Standard_Underflow^ Macad::Occt::Standard_Underflow::NewInstance(System::String^ theMessage)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    Handle(::Standard_Underflow) _result = ::Standard_Underflow::NewInstance(sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Underflow::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Underflow^ Macad::Occt::Standard_Underflow::NewInstance()
{
    Handle(::Standard_Underflow) _result = ::Standard_Underflow::NewInstance("");
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Underflow::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Underflow^ Macad::Occt::Standard_Underflow::NewInstance(System::String^ theMessage, System::String^ theStackTrace)
{
    const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
    const char* sz_theStackTrace = (char*)(void*)Marshal::StringToHGlobalAnsi(theStackTrace);
    Handle(::Standard_Underflow) _result = ::Standard_Underflow::NewInstance(sz_theMessage, sz_theStackTrace);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theStackTrace);
    return _result.IsNull() ? nullptr : Macad::Occt::Standard_Underflow::CreateDowncasted(_result.get());
}

Macad::Occt::Standard_Underflow^ Macad::Occt::Standard_Underflow::CreateDowncasted(::Standard_Underflow* instance)
{
    return gcnew Macad::Occt::Standard_Underflow( instance );
}


