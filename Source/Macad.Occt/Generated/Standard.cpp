// Generated wrapper code for package Standard

#include "OcctPCH.h"
#include "Standard.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TCollection.h"
#include "Standard.h"
#include "StdFail.h"
#include "Quantity.h"
#include "gp.h"
#include "Geom2d.h"
#include "GProp.h"
#include "Geom.h"
#include "TopoDS.h"
#include "BRepExtrema.h"
#include "V3d.h"
#include "Units.h"
#include "Prs3d.h"
#include "Aspect.h"
#include "Graphic3d.h"
#include "NCollection.h"
#include "WNT.h"


//---------------------------------------------------------------------
//  Class  Standard_DumpValue
//---------------------------------------------------------------------

Macad::Occt::Standard_DumpValue::Standard_DumpValue()
	: BaseClass<::Standard_DumpValue>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Standard_DumpValue();
}

Macad::Occt::Standard_DumpValue::Standard_DumpValue(Macad::Occt::TCollection_AsciiString^ theValue, int theStartPos)
	: BaseClass<::Standard_DumpValue>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Standard_DumpValue(*(::TCollection_AsciiString*)theValue->NativeInstance, theStartPos);
}

Macad::Occt::Standard_DumpValue::Standard_DumpValue(Macad::Occt::Standard_DumpValue^ parameter1)
	: BaseClass<::Standard_DumpValue>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Standard_DumpValue(*(::Standard_DumpValue*)parameter1->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  Standard_ErrorHandler
//---------------------------------------------------------------------

Macad::Occt::Standard_ErrorHandler::Standard_ErrorHandler()
	: BaseClass<::Standard_ErrorHandler>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Standard_ErrorHandler();
}

Macad::Occt::Standard_ErrorHandler::Standard_ErrorHandler(Macad::Occt::Standard_ErrorHandler^ parameter1)
	: BaseClass<::Standard_ErrorHandler>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Standard_ErrorHandler(*(::Standard_ErrorHandler*)parameter1->NativeInstance);
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
	Handle(::Standard_Failure) _result;
	_result = ((::Standard_ErrorHandler*)_NativeInstance)->Error();
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_Failure::CreateDowncasted( _result.get());
}

Macad::Occt::Standard_Failure^ Macad::Occt::Standard_ErrorHandler::LastCaughtError()
{
	Handle(::Standard_Failure) _result;
	_result = ::Standard_ErrorHandler::LastCaughtError();
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_Failure::CreateDowncasted( _result.get());
}

bool Macad::Occt::Standard_ErrorHandler::IsInTryBlock()
{
	return ::Standard_ErrorHandler::IsInTryBlock();
}




//---------------------------------------------------------------------
//  Class  Standard_Failure
//---------------------------------------------------------------------

Macad::Occt::Standard_Failure::Standard_Failure()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_Failure();
}

Macad::Occt::Standard_Failure::Standard_Failure(Macad::Occt::Standard_Failure^ f)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_Failure(*(::Standard_Failure*)f->NativeInstance);
}

Macad::Occt::Standard_Failure::Standard_Failure(System::String^ aString)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	const char* sz_aString = (char*)(void*)Marshal::StringToHGlobalAnsi(aString);
	NativeInstance = new ::Standard_Failure(sz_aString);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aString);
}

System::String^ Macad::Occt::Standard_Failure::GetMessageString()
{
	Standard_CString _result;
	_result = ((::Standard_Failure*)_NativeInstance)->GetMessageString();
	return gcnew System::String(_result);
}

void Macad::Occt::Standard_Failure::SetMessageString(System::String^ aMessage)
{
	const char* sz_aMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(aMessage);
	((::Standard_Failure*)_NativeInstance)->SetMessageString(sz_aMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aMessage);
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

Macad::Occt::Standard_Failure^ Macad::Occt::Standard_Failure::NewInstance(System::String^ aMessage)
{
	const char* sz_aMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(aMessage);
	Handle(::Standard_Failure) _result;
	_result = ::Standard_Failure::NewInstance(sz_aMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_Failure::CreateDowncasted( _result.get());
}

void Macad::Occt::Standard_Failure::Jump()
{
	((::Standard_Failure*)_NativeInstance)->Jump();
}

Macad::Occt::Standard_Failure^ Macad::Occt::Standard_Failure::Caught()
{
	Handle(::Standard_Failure) _result;
	_result = ::Standard_Failure::Caught();
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_Failure::CreateDowncasted( _result.get());
}


Macad::Occt::Standard_Failure^ Macad::Occt::Standard_Failure::CreateDowncasted(::Standard_Failure* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Standard_DomainError)))
		return Macad::Occt::Standard_DomainError::CreateDowncasted((::Standard_DomainError*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Standard_ProgramError)))
		return Macad::Occt::Standard_ProgramError::CreateDowncasted((::Standard_ProgramError*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Standard_NumericError)))
		return Macad::Occt::Standard_NumericError::CreateDowncasted((::Standard_NumericError*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Standard_AbortiveTransaction)))
		return Macad::Occt::Standard_AbortiveTransaction::CreateDowncasted((::Standard_AbortiveTransaction*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Standard_LicenseError)))
		return Macad::Occt::Standard_LicenseError::CreateDowncasted((::Standard_LicenseError*)instance);
	if (instance->IsKind(STANDARD_TYPE(::StdFail_InfiniteSolutions)))
		return Macad::Occt::StdFail_InfiniteSolutions::CreateDowncasted((::StdFail_InfiniteSolutions*)instance);
	if (instance->IsKind(STANDARD_TYPE(::StdFail_NotDone)))
		return Macad::Occt::StdFail_NotDone::CreateDowncasted((::StdFail_NotDone*)instance);
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

Macad::Occt::Standard_DomainError::Standard_DomainError(Macad::Occt::Standard_DomainError^ parameter1)
	: Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_DomainError(*(::Standard_DomainError*)parameter1->NativeInstance);
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
	Handle(::Standard_DomainError) _result;
	_result = ::Standard_DomainError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_DomainError::CreateDowncasted( _result.get());
}

Macad::Occt::Standard_DomainError^ Macad::Occt::Standard_DomainError::NewInstance()
{
	Handle(::Standard_DomainError) _result;
	_result = ::Standard_DomainError::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_DomainError::CreateDowncasted( _result.get());
}


Macad::Occt::Standard_DomainError^ Macad::Occt::Standard_DomainError::CreateDowncasted(::Standard_DomainError* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Standard_NoSuchObject)))
		return Macad::Occt::Standard_NoSuchObject::CreateDowncasted((::Standard_NoSuchObject*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Standard_DimensionError)))
		return Macad::Occt::Standard_DimensionError::CreateDowncasted((::Standard_DimensionError*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Standard_RangeError)))
		return Macad::Occt::Standard_RangeError::CreateDowncasted((::Standard_RangeError*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Standard_TypeMismatch)))
		return Macad::Occt::Standard_TypeMismatch::CreateDowncasted((::Standard_TypeMismatch*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Standard_NullObject)))
		return Macad::Occt::Standard_NullObject::CreateDowncasted((::Standard_NullObject*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Standard_ConstructionError)))
		return Macad::Occt::Standard_ConstructionError::CreateDowncasted((::Standard_ConstructionError*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Standard_ImmutableObject)))
		return Macad::Occt::Standard_ImmutableObject::CreateDowncasted((::Standard_ImmutableObject*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Standard_MultiplyDefined)))
		return Macad::Occt::Standard_MultiplyDefined::CreateDowncasted((::Standard_MultiplyDefined*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Standard_NoMoreObject)))
		return Macad::Occt::Standard_NoMoreObject::CreateDowncasted((::Standard_NoMoreObject*)instance);
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
	if (instance->IsKind(STANDARD_TYPE(::TopoDS_UnCompatibleShapes)))
		return Macad::Occt::TopoDS_UnCompatibleShapes::CreateDowncasted((::TopoDS_UnCompatibleShapes*)instance);
	if (instance->IsKind(STANDARD_TYPE(::TopoDS_LockedShape)))
		return Macad::Occt::TopoDS_LockedShape::CreateDowncasted((::TopoDS_LockedShape*)instance);
	if (instance->IsKind(STANDARD_TYPE(::BRepExtrema_UnCompatibleShape)))
		return Macad::Occt::BRepExtrema_UnCompatibleShape::CreateDowncasted((::BRepExtrema_UnCompatibleShape*)instance);
	if (instance->IsKind(STANDARD_TYPE(::V3d_UnMapped)))
		return Macad::Occt::V3d_UnMapped::CreateDowncasted((::V3d_UnMapped*)instance);

	return gcnew Macad::Occt::Standard_DomainError( instance );
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

Macad::Occt::Standard_NoSuchObject::Standard_NoSuchObject(Macad::Occt::Standard_NoSuchObject^ parameter1)
	: Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_NoSuchObject(*(::Standard_NoSuchObject*)parameter1->NativeInstance);
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
	Handle(::Standard_NoSuchObject) _result;
	_result = ::Standard_NoSuchObject::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_NoSuchObject::CreateDowncasted( _result.get());
}

Macad::Occt::Standard_NoSuchObject^ Macad::Occt::Standard_NoSuchObject::NewInstance()
{
	Handle(::Standard_NoSuchObject) _result;
	_result = ::Standard_NoSuchObject::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_NoSuchObject::CreateDowncasted( _result.get());
}


Macad::Occt::Standard_NoSuchObject^ Macad::Occt::Standard_NoSuchObject::CreateDowncasted(::Standard_NoSuchObject* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Units_NoSuchType)))
		return Macad::Occt::Units_NoSuchType::CreateDowncasted((::Units_NoSuchType*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Units_NoSuchUnit)))
		return Macad::Occt::Units_NoSuchUnit::CreateDowncasted((::Units_NoSuchUnit*)instance);

	return gcnew Macad::Occt::Standard_NoSuchObject( instance );
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

Macad::Occt::Standard_DimensionError::Standard_DimensionError(Macad::Occt::Standard_DimensionError^ parameter1)
	: Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_DimensionError(*(::Standard_DimensionError*)parameter1->NativeInstance);
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
	Handle(::Standard_DimensionError) _result;
	_result = ::Standard_DimensionError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_DimensionError::CreateDowncasted( _result.get());
}

Macad::Occt::Standard_DimensionError^ Macad::Occt::Standard_DimensionError::NewInstance()
{
	Handle(::Standard_DimensionError) _result;
	_result = ::Standard_DimensionError::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_DimensionError::CreateDowncasted( _result.get());
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

Macad::Occt::Standard_DimensionMismatch::Standard_DimensionMismatch(Macad::Occt::Standard_DimensionMismatch^ parameter1)
	: Macad::Occt::Standard_DimensionError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_DimensionMismatch(*(::Standard_DimensionMismatch*)parameter1->NativeInstance);
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
	Handle(::Standard_DimensionMismatch) _result;
	_result = ::Standard_DimensionMismatch::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_DimensionMismatch::CreateDowncasted( _result.get());
}

Macad::Occt::Standard_DimensionMismatch^ Macad::Occt::Standard_DimensionMismatch::NewInstance()
{
	Handle(::Standard_DimensionMismatch) _result;
	_result = ::Standard_DimensionMismatch::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_DimensionMismatch::CreateDowncasted( _result.get());
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

Macad::Occt::Standard_ProgramError::Standard_ProgramError(Macad::Occt::Standard_ProgramError^ parameter1)
	: Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_ProgramError(*(::Standard_ProgramError*)parameter1->NativeInstance);
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
	Handle(::Standard_ProgramError) _result;
	_result = ::Standard_ProgramError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_ProgramError::CreateDowncasted( _result.get());
}

Macad::Occt::Standard_ProgramError^ Macad::Occt::Standard_ProgramError::NewInstance()
{
	Handle(::Standard_ProgramError) _result;
	_result = ::Standard_ProgramError::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_ProgramError::CreateDowncasted( _result.get());
}


Macad::Occt::Standard_ProgramError^ Macad::Occt::Standard_ProgramError::CreateDowncasted(::Standard_ProgramError* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Standard_NotImplemented)))
		return Macad::Occt::Standard_NotImplemented::CreateDowncasted((::Standard_NotImplemented*)instance);

	return gcnew Macad::Occt::Standard_ProgramError( instance );
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

Macad::Occt::Standard_RangeError::Standard_RangeError(Macad::Occt::Standard_RangeError^ parameter1)
	: Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_RangeError(*(::Standard_RangeError*)parameter1->NativeInstance);
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
	Handle(::Standard_RangeError) _result;
	_result = ::Standard_RangeError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_RangeError::CreateDowncasted( _result.get());
}

Macad::Occt::Standard_RangeError^ Macad::Occt::Standard_RangeError::NewInstance()
{
	Handle(::Standard_RangeError) _result;
	_result = ::Standard_RangeError::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_RangeError::CreateDowncasted( _result.get());
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

Macad::Occt::Standard_OutOfRange::Standard_OutOfRange(Macad::Occt::Standard_OutOfRange^ parameter1)
	: Macad::Occt::Standard_RangeError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_OutOfRange(*(::Standard_OutOfRange*)parameter1->NativeInstance);
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
	Handle(::Standard_OutOfRange) _result;
	_result = ::Standard_OutOfRange::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_OutOfRange::CreateDowncasted( _result.get());
}

Macad::Occt::Standard_OutOfRange^ Macad::Occt::Standard_OutOfRange::NewInstance()
{
	Handle(::Standard_OutOfRange) _result;
	_result = ::Standard_OutOfRange::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_OutOfRange::CreateDowncasted( _result.get());
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
	if (instance->IsKind(STANDARD_TYPE(::Aspect_IdentDefinitionError)))
		return Macad::Occt::Aspect_IdentDefinitionError::CreateDowncasted((::Aspect_IdentDefinitionError*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Aspect_GraphicDeviceDefinitionError)))
		return Macad::Occt::Aspect_GraphicDeviceDefinitionError::CreateDowncasted((::Aspect_GraphicDeviceDefinitionError*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Aspect_WindowDefinitionError)))
		return Macad::Occt::Aspect_WindowDefinitionError::CreateDowncasted((::Aspect_WindowDefinitionError*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Aspect_WindowError)))
		return Macad::Occt::Aspect_WindowError::CreateDowncasted((::Aspect_WindowError*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Graphic3d_TransformError)))
		return Macad::Occt::Graphic3d_TransformError::CreateDowncasted((::Graphic3d_TransformError*)instance);
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

Macad::Occt::Standard_TypeMismatch::Standard_TypeMismatch(Macad::Occt::Standard_TypeMismatch^ parameter1)
	: Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_TypeMismatch(*(::Standard_TypeMismatch*)parameter1->NativeInstance);
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
	Handle(::Standard_TypeMismatch) _result;
	_result = ::Standard_TypeMismatch::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_TypeMismatch::CreateDowncasted( _result.get());
}

Macad::Occt::Standard_TypeMismatch^ Macad::Occt::Standard_TypeMismatch::NewInstance()
{
	Handle(::Standard_TypeMismatch) _result;
	_result = ::Standard_TypeMismatch::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_TypeMismatch::CreateDowncasted( _result.get());
}


Macad::Occt::Standard_TypeMismatch^ Macad::Occt::Standard_TypeMismatch::CreateDowncasted(::Standard_TypeMismatch* instance)
{
	return gcnew Macad::Occt::Standard_TypeMismatch( instance );
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

Macad::Occt::Standard_NullObject::Standard_NullObject(Macad::Occt::Standard_NullObject^ parameter1)
	: Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_NullObject(*(::Standard_NullObject*)parameter1->NativeInstance);
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
	Handle(::Standard_NullObject) _result;
	_result = ::Standard_NullObject::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_NullObject::CreateDowncasted( _result.get());
}

Macad::Occt::Standard_NullObject^ Macad::Occt::Standard_NullObject::NewInstance()
{
	Handle(::Standard_NullObject) _result;
	_result = ::Standard_NullObject::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_NullObject::CreateDowncasted( _result.get());
}


Macad::Occt::Standard_NullObject^ Macad::Occt::Standard_NullObject::CreateDowncasted(::Standard_NullObject* instance)
{
	return gcnew Macad::Occt::Standard_NullObject( instance );
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

Macad::Occt::Standard_NumericError::Standard_NumericError(Macad::Occt::Standard_NumericError^ parameter1)
	: Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_NumericError(*(::Standard_NumericError*)parameter1->NativeInstance);
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
	Handle(::Standard_NumericError) _result;
	_result = ::Standard_NumericError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_NumericError::CreateDowncasted( _result.get());
}

Macad::Occt::Standard_NumericError^ Macad::Occt::Standard_NumericError::NewInstance()
{
	Handle(::Standard_NumericError) _result;
	_result = ::Standard_NumericError::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_NumericError::CreateDowncasted( _result.get());
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

Macad::Occt::Standard_NegativeValue::Standard_NegativeValue(Macad::Occt::Standard_NegativeValue^ parameter1)
	: Macad::Occt::Standard_RangeError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_NegativeValue(*(::Standard_NegativeValue*)parameter1->NativeInstance);
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
	Handle(::Standard_NegativeValue) _result;
	_result = ::Standard_NegativeValue::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_NegativeValue::CreateDowncasted( _result.get());
}

Macad::Occt::Standard_NegativeValue^ Macad::Occt::Standard_NegativeValue::NewInstance()
{
	Handle(::Standard_NegativeValue) _result;
	_result = ::Standard_NegativeValue::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_NegativeValue::CreateDowncasted( _result.get());
}


Macad::Occt::Standard_NegativeValue^ Macad::Occt::Standard_NegativeValue::CreateDowncasted(::Standard_NegativeValue* instance)
{
	return gcnew Macad::Occt::Standard_NegativeValue( instance );
}



//---------------------------------------------------------------------
//  Class  Standard_Dump
//---------------------------------------------------------------------

Macad::Occt::Standard_Dump::Standard_Dump()
	: BaseClass<::Standard_Dump>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Standard_Dump();
}

Macad::Occt::Standard_Dump::Standard_Dump(Macad::Occt::Standard_Dump^ parameter1)
	: BaseClass<::Standard_Dump>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Standard_Dump(*(::Standard_Dump*)parameter1->NativeInstance);
}

bool Macad::Occt::Standard_Dump::HasChildKey(Macad::Occt::TCollection_AsciiString^ theSourceValue)
{
	return ::Standard_Dump::HasChildKey(*(::TCollection_AsciiString*)theSourceValue->NativeInstance);
}

System::String^ Macad::Occt::Standard_Dump::JsonKeyToString(Macad::Occt::Standard_JsonKey theKey)
{
	Standard_CString _result;
	_result = ::Standard_Dump::JsonKeyToString((::Standard_JsonKey)theKey);
	return gcnew System::String(_result);
}

int Macad::Occt::Standard_Dump::JsonKeyLength(Macad::Occt::Standard_JsonKey theKey)
{
	return ::Standard_Dump::JsonKeyLength((::Standard_JsonKey)theKey);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Standard_Dump::GetPointerPrefix()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ::Standard_Dump::GetPointerPrefix();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Standard_Dump::GetPointerInfo(Macad::Occt::Standard_Transient^ thePointer, bool isShortInfo)
{
	Handle(::Standard_Transient) h_thePointer = thePointer->NativeInstance;
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ::Standard_Dump::GetPointerInfo(h_thePointer, isShortInfo);
	thePointer->NativeInstance = h_thePointer.get();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Standard_Dump::GetPointerInfo(Macad::Occt::Standard_Transient^ thePointer)
{
	Handle(::Standard_Transient) h_thePointer = thePointer->NativeInstance;
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ::Standard_Dump::GetPointerInfo(h_thePointer, true);
	thePointer->NativeInstance = h_thePointer.get();
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

bool Macad::Occt::Standard_Dump::ProcessStreamName(Macad::Occt::TCollection_AsciiString^ theStreamStr, Macad::Occt::TCollection_AsciiString^ theName, int% theStreamPos)
{
	pin_ptr<int> pp_theStreamPos = &theStreamPos;
	return ::Standard_Dump::ProcessStreamName(*(::TCollection_AsciiString*)theStreamStr->NativeInstance, *(::TCollection_AsciiString*)theName->NativeInstance, *(Standard_Integer*)pp_theStreamPos);
}

bool Macad::Occt::Standard_Dump::ProcessFieldName(Macad::Occt::TCollection_AsciiString^ theStreamStr, Macad::Occt::TCollection_AsciiString^ theName, int% theStreamPos)
{
	pin_ptr<int> pp_theStreamPos = &theStreamPos;
	return ::Standard_Dump::ProcessFieldName(*(::TCollection_AsciiString*)theStreamStr->NativeInstance, *(::TCollection_AsciiString*)theName->NativeInstance, *(Standard_Integer*)pp_theStreamPos);
}

bool Macad::Occt::Standard_Dump::InitRealValues(Macad::Occt::TCollection_AsciiString^ theStreamStr, int% theStreamPos, int theCount)
{
	pin_ptr<int> pp_theStreamPos = &theStreamPos;
	return ::Standard_Dump::InitRealValues(*(::TCollection_AsciiString*)theStreamStr->NativeInstance, *(Standard_Integer*)pp_theStreamPos, theCount);
}

bool Macad::Occt::Standard_Dump::InitValue(Macad::Occt::TCollection_AsciiString^ theStreamStr, int% theStreamPos, Macad::Occt::TCollection_AsciiString^ theValue)
{
	pin_ptr<int> pp_theStreamPos = &theStreamPos;
	return ::Standard_Dump::InitValue(*(::TCollection_AsciiString*)theStreamStr->NativeInstance, *(Standard_Integer*)pp_theStreamPos, *(::TCollection_AsciiString*)theValue->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Standard_Dump::DumpFieldToName(Macad::Occt::TCollection_AsciiString^ theField)
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ::Standard_Dump::DumpFieldToName(*(::TCollection_AsciiString*)theField->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
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

Macad::Occt::Standard_ConstructionError::Standard_ConstructionError(Macad::Occt::Standard_ConstructionError^ parameter1)
	: Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_ConstructionError(*(::Standard_ConstructionError*)parameter1->NativeInstance);
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
	Handle(::Standard_ConstructionError) _result;
	_result = ::Standard_ConstructionError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_ConstructionError::CreateDowncasted( _result.get());
}

Macad::Occt::Standard_ConstructionError^ Macad::Occt::Standard_ConstructionError::NewInstance()
{
	Handle(::Standard_ConstructionError) _result;
	_result = ::Standard_ConstructionError::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_ConstructionError::CreateDowncasted( _result.get());
}


Macad::Occt::Standard_ConstructionError^ Macad::Occt::Standard_ConstructionError::CreateDowncasted(::Standard_ConstructionError* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::WNT_ClassDefinitionError)))
		return Macad::Occt::WNT_ClassDefinitionError::CreateDowncasted((::WNT_ClassDefinitionError*)instance);

	return gcnew Macad::Occt::Standard_ConstructionError( instance );
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

Macad::Occt::Standard_AbortiveTransaction::Standard_AbortiveTransaction(Macad::Occt::Standard_AbortiveTransaction^ parameter1)
	: Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_AbortiveTransaction(*(::Standard_AbortiveTransaction*)parameter1->NativeInstance);
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
	Handle(::Standard_AbortiveTransaction) _result;
	_result = ::Standard_AbortiveTransaction::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_AbortiveTransaction::CreateDowncasted( _result.get());
}

Macad::Occt::Standard_AbortiveTransaction^ Macad::Occt::Standard_AbortiveTransaction::NewInstance()
{
	Handle(::Standard_AbortiveTransaction) _result;
	_result = ::Standard_AbortiveTransaction::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_AbortiveTransaction::CreateDowncasted( _result.get());
}


Macad::Occt::Standard_AbortiveTransaction^ Macad::Occt::Standard_AbortiveTransaction::CreateDowncasted(::Standard_AbortiveTransaction* instance)
{
	return gcnew Macad::Occt::Standard_AbortiveTransaction( instance );
}



//---------------------------------------------------------------------
//  Class  Standard_ArrayStreamBuffer
//---------------------------------------------------------------------

Macad::Occt::Standard_ArrayStreamBuffer::Standard_ArrayStreamBuffer(char theBegin, unsigned __int64 theSize)
	: BaseClass<::Standard_ArrayStreamBuffer>(BaseClass::InitMode::Uninitialized)
{
	pin_ptr<char> pp_theBegin = &theBegin;
	_NativeInstance = new ::Standard_ArrayStreamBuffer((char*)pp_theBegin, theSize);
}

void Macad::Occt::Standard_ArrayStreamBuffer::Init(char theBegin, unsigned __int64 theSize)
{
	pin_ptr<char> pp_theBegin = &theBegin;
	((::Standard_ArrayStreamBuffer*)_NativeInstance)->Init((char*)pp_theBegin, theSize);
}

int Macad::Occt::Standard_ArrayStreamBuffer::pubsync()
{
	return ((::Standard_ArrayStreamBuffer*)_NativeInstance)->pubsync();
}

int Macad::Occt::Standard_ArrayStreamBuffer::sbumpc()
{
	return ((::Standard_ArrayStreamBuffer*)_NativeInstance)->sbumpc();
}

int Macad::Occt::Standard_ArrayStreamBuffer::sgetc()
{
	return ((::Standard_ArrayStreamBuffer*)_NativeInstance)->sgetc();
}

int Macad::Occt::Standard_ArrayStreamBuffer::snextc()
{
	return ((::Standard_ArrayStreamBuffer*)_NativeInstance)->snextc();
}

int Macad::Occt::Standard_ArrayStreamBuffer::sputbackc(char _Ch)
{
	return ((::Standard_ArrayStreamBuffer*)_NativeInstance)->sputbackc(_Ch);
}

void Macad::Occt::Standard_ArrayStreamBuffer::stossc()
{
	((::Standard_ArrayStreamBuffer*)_NativeInstance)->stossc();
}

int Macad::Occt::Standard_ArrayStreamBuffer::sungetc()
{
	return ((::Standard_ArrayStreamBuffer*)_NativeInstance)->sungetc();
}

int Macad::Occt::Standard_ArrayStreamBuffer::sputc(char _Ch)
{
	return ((::Standard_ArrayStreamBuffer*)_NativeInstance)->sputc(_Ch);
}

void Macad::Occt::Standard_ArrayStreamBuffer::_Lock()
{
	((::Standard_ArrayStreamBuffer*)_NativeInstance)->_Lock();
}

void Macad::Occt::Standard_ArrayStreamBuffer::_Unlock()
{
	((::Standard_ArrayStreamBuffer*)_NativeInstance)->_Unlock();
}




//---------------------------------------------------------------------
//  Class  Standard_Condition
//---------------------------------------------------------------------

Macad::Occt::Standard_Condition::Standard_Condition(bool theIsSet)
	: BaseClass<::Standard_Condition>(BaseClass::InitMode::Uninitialized)
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
	return ((::Standard_Condition*)_NativeInstance)->Wait(theTimeMilliseconds);
}

bool Macad::Occt::Standard_Condition::Check()
{
	return ((::Standard_Condition*)_NativeInstance)->Check();
}

bool Macad::Occt::Standard_Condition::CheckReset()
{
	return ((::Standard_Condition*)_NativeInstance)->CheckReset();
}

System::IntPtr Macad::Occt::Standard_Condition::getHandle()
{
	return System::IntPtr(((::Standard_Condition*)_NativeInstance)->getHandle());
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

Macad::Occt::Standard_DivideByZero::Standard_DivideByZero(Macad::Occt::Standard_DivideByZero^ parameter1)
	: Macad::Occt::Standard_NumericError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_DivideByZero(*(::Standard_DivideByZero*)parameter1->NativeInstance);
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
	Handle(::Standard_DivideByZero) _result;
	_result = ::Standard_DivideByZero::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_DivideByZero::CreateDowncasted( _result.get());
}

Macad::Occt::Standard_DivideByZero^ Macad::Occt::Standard_DivideByZero::NewInstance()
{
	Handle(::Standard_DivideByZero) _result;
	_result = ::Standard_DivideByZero::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_DivideByZero::CreateDowncasted( _result.get());
}


Macad::Occt::Standard_DivideByZero^ Macad::Occt::Standard_DivideByZero::CreateDowncasted(::Standard_DivideByZero* instance)
{
	return gcnew Macad::Occt::Standard_DivideByZero( instance );
}



//---------------------------------------------------------------------
//  Class  Standard_GUID
//---------------------------------------------------------------------

Macad::Occt::Standard_GUID::Standard_GUID()
	: BaseClass<::Standard_GUID>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Standard_GUID();
}

Macad::Occt::Standard_GUID::Standard_GUID(System::String^ aGuid)
	: BaseClass<::Standard_GUID>(BaseClass::InitMode::Uninitialized)
{
	const char* sz_aGuid = (char*)(void*)Marshal::StringToHGlobalAnsi(aGuid);
	_NativeInstance = new ::Standard_GUID(sz_aGuid);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aGuid);
}

Macad::Occt::Standard_GUID::Standard_GUID(int a32b, char16_t a16b1, char16_t a16b2, char16_t a16b3, unsigned char a8b1, unsigned char a8b2, unsigned char a8b3, unsigned char a8b4, unsigned char a8b5, unsigned char a8b6)
	: BaseClass<::Standard_GUID>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Standard_GUID(a32b, a16b1, a16b2, a16b3, a8b1, a8b2, a8b3, a8b4, a8b5, a8b6);
}

Macad::Occt::Standard_GUID::Standard_GUID(Macad::Occt::Standard_GUID^ aGuid)
	: BaseClass<::Standard_GUID>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Standard_GUID(*(::Standard_GUID*)aGuid->NativeInstance);
}

void Macad::Occt::Standard_GUID::ToCString(char aStrGuid)
{
	pin_ptr<char> pp_aStrGuid = &aStrGuid;
	((::Standard_GUID*)_NativeInstance)->ToCString((Standard_Character*)pp_aStrGuid);
}

void Macad::Occt::Standard_GUID::ToExtString(char16_t aStrGuid)
{
	pin_ptr<char16_t> pp_aStrGuid = &aStrGuid;
	((::Standard_GUID*)_NativeInstance)->ToExtString((Standard_ExtCharacter*)pp_aStrGuid);
}

bool Macad::Occt::Standard_GUID::IsSame(Macad::Occt::Standard_GUID^ uid)
{
	return ((::Standard_GUID*)_NativeInstance)->IsSame(*(::Standard_GUID*)uid->NativeInstance);
}

bool Macad::Occt::Standard_GUID::IsNotSame(Macad::Occt::Standard_GUID^ uid)
{
	return ((::Standard_GUID*)_NativeInstance)->IsNotSame(*(::Standard_GUID*)uid->NativeInstance);
}

void Macad::Occt::Standard_GUID::Assign(Macad::Occt::Standard_GUID^ uid)
{
	((::Standard_GUID*)_NativeInstance)->Assign(*(::Standard_GUID*)uid->NativeInstance);
}

bool Macad::Occt::Standard_GUID::CheckGUIDFormat(System::String^ aGuid)
{
	const char* sz_aGuid = (char*)(void*)Marshal::StringToHGlobalAnsi(aGuid);
	return ::Standard_GUID::CheckGUIDFormat(sz_aGuid);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_aGuid);
}

int Macad::Occt::Standard_GUID::Hash(int Upper)
{
	return ((::Standard_GUID*)_NativeInstance)->Hash(Upper);
}

int Macad::Occt::Standard_GUID::HashCode(Macad::Occt::Standard_GUID^ theGUID, int theUpperBound)
{
	return ::Standard_GUID::HashCode(*(::Standard_GUID*)theGUID->NativeInstance, theUpperBound);
}

bool Macad::Occt::Standard_GUID::IsEqual(Macad::Occt::Standard_GUID^ string1, Macad::Occt::Standard_GUID^ string2)
{
	return ::Standard_GUID::IsEqual(*(::Standard_GUID*)string1->NativeInstance, *(::Standard_GUID*)string2->NativeInstance);
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

Macad::Occt::Standard_ImmutableObject::Standard_ImmutableObject(Macad::Occt::Standard_ImmutableObject^ parameter1)
	: Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_ImmutableObject(*(::Standard_ImmutableObject*)parameter1->NativeInstance);
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
	Handle(::Standard_ImmutableObject) _result;
	_result = ::Standard_ImmutableObject::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_ImmutableObject::CreateDowncasted( _result.get());
}

Macad::Occt::Standard_ImmutableObject^ Macad::Occt::Standard_ImmutableObject::NewInstance()
{
	Handle(::Standard_ImmutableObject) _result;
	_result = ::Standard_ImmutableObject::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_ImmutableObject::CreateDowncasted( _result.get());
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

Macad::Occt::Standard_LicenseError::Standard_LicenseError(Macad::Occt::Standard_LicenseError^ parameter1)
	: Macad::Occt::Standard_Failure(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_LicenseError(*(::Standard_LicenseError*)parameter1->NativeInstance);
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
	Handle(::Standard_LicenseError) _result;
	_result = ::Standard_LicenseError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_LicenseError::CreateDowncasted( _result.get());
}

Macad::Occt::Standard_LicenseError^ Macad::Occt::Standard_LicenseError::NewInstance()
{
	Handle(::Standard_LicenseError) _result;
	_result = ::Standard_LicenseError::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_LicenseError::CreateDowncasted( _result.get());
}


Macad::Occt::Standard_LicenseError^ Macad::Occt::Standard_LicenseError::CreateDowncasted(::Standard_LicenseError* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::Standard_LicenseNotFound)))
		return Macad::Occt::Standard_LicenseNotFound::CreateDowncasted((::Standard_LicenseNotFound*)instance);
	if (instance->IsKind(STANDARD_TYPE(::Standard_TooManyUsers)))
		return Macad::Occt::Standard_TooManyUsers::CreateDowncasted((::Standard_TooManyUsers*)instance);

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

Macad::Occt::Standard_LicenseNotFound::Standard_LicenseNotFound(Macad::Occt::Standard_LicenseNotFound^ parameter1)
	: Macad::Occt::Standard_LicenseError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_LicenseNotFound(*(::Standard_LicenseNotFound*)parameter1->NativeInstance);
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
	Handle(::Standard_LicenseNotFound) _result;
	_result = ::Standard_LicenseNotFound::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_LicenseNotFound::CreateDowncasted( _result.get());
}

Macad::Occt::Standard_LicenseNotFound^ Macad::Occt::Standard_LicenseNotFound::NewInstance()
{
	Handle(::Standard_LicenseNotFound) _result;
	_result = ::Standard_LicenseNotFound::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_LicenseNotFound::CreateDowncasted( _result.get());
}


Macad::Occt::Standard_LicenseNotFound^ Macad::Occt::Standard_LicenseNotFound::CreateDowncasted(::Standard_LicenseNotFound* instance)
{
	return gcnew Macad::Occt::Standard_LicenseNotFound( instance );
}



//---------------------------------------------------------------------
//  Class  Standard_MMgrRoot
//---------------------------------------------------------------------

Macad::Occt::Standard_MMgrRoot::Standard_MMgrRoot(Macad::Occt::Standard_MMgrRoot^ parameter1)
	: BaseClass<::Standard_MMgrRoot>(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::Standard_MMgrRoot::Standard_MMgrRoot()
	: BaseClass<::Standard_MMgrRoot>(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

System::IntPtr Macad::Occt::Standard_MMgrRoot::Allocate(size_t theSize)
{
	return System::IntPtr(((::Standard_MMgrRoot*)_NativeInstance)->Allocate(theSize));
}

System::IntPtr Macad::Occt::Standard_MMgrRoot::Reallocate(System::IntPtr thePtr, size_t theSize)
{
	return System::IntPtr(((::Standard_MMgrRoot*)_NativeInstance)->Reallocate(thePtr.ToPointer(), theSize));
}

void Macad::Occt::Standard_MMgrRoot::Free(System::IntPtr thePtr)
{
	((::Standard_MMgrRoot*)_NativeInstance)->Free(thePtr.ToPointer());
}

int Macad::Occt::Standard_MMgrRoot::Purge(bool isDestroyed)
{
	return ((::Standard_MMgrRoot*)_NativeInstance)->Purge(isDestroyed);
}

int Macad::Occt::Standard_MMgrRoot::Purge()
{
	return ((::Standard_MMgrRoot*)_NativeInstance)->Purge(false);
}




//---------------------------------------------------------------------
//  Class  Standard_MMgrRaw
//---------------------------------------------------------------------

Macad::Occt::Standard_MMgrRaw::Standard_MMgrRaw(bool aClear)
	: Macad::Occt::Standard_MMgrRoot(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Standard_MMgrRaw(aClear);
}

Macad::Occt::Standard_MMgrRaw::Standard_MMgrRaw(Macad::Occt::Standard_MMgrRaw^ parameter1)
	: Macad::Occt::Standard_MMgrRoot(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Standard_MMgrRaw(*(::Standard_MMgrRaw*)parameter1->NativeInstance);
}

System::IntPtr Macad::Occt::Standard_MMgrRaw::Allocate(size_t aSize)
{
	return System::IntPtr(((::Standard_MMgrRaw*)_NativeInstance)->Allocate(aSize));
}

System::IntPtr Macad::Occt::Standard_MMgrRaw::Reallocate(System::IntPtr thePtr, size_t theSize)
{
	return System::IntPtr(((::Standard_MMgrRaw*)_NativeInstance)->Reallocate(thePtr.ToPointer(), theSize));
}

void Macad::Occt::Standard_MMgrRaw::Free(System::IntPtr thePtr)
{
	((::Standard_MMgrRaw*)_NativeInstance)->Free(thePtr.ToPointer());
}




//---------------------------------------------------------------------
//  Class  Standard_MMgrTBBalloc
//---------------------------------------------------------------------

Macad::Occt::Standard_MMgrTBBalloc::Standard_MMgrTBBalloc(bool aClear)
	: Macad::Occt::Standard_MMgrRoot(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Standard_MMgrTBBalloc(aClear);
}

Macad::Occt::Standard_MMgrTBBalloc::Standard_MMgrTBBalloc(Macad::Occt::Standard_MMgrTBBalloc^ parameter1)
	: Macad::Occt::Standard_MMgrRoot(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Standard_MMgrTBBalloc(*(::Standard_MMgrTBBalloc*)parameter1->NativeInstance);
}

System::IntPtr Macad::Occt::Standard_MMgrTBBalloc::Allocate(size_t aSize)
{
	return System::IntPtr(((::Standard_MMgrTBBalloc*)_NativeInstance)->Allocate(aSize));
}

System::IntPtr Macad::Occt::Standard_MMgrTBBalloc::Reallocate(System::IntPtr thePtr, size_t theSize)
{
	return System::IntPtr(((::Standard_MMgrTBBalloc*)_NativeInstance)->Reallocate(thePtr.ToPointer(), theSize));
}

void Macad::Occt::Standard_MMgrTBBalloc::Free(System::IntPtr thePtr)
{
	((::Standard_MMgrTBBalloc*)_NativeInstance)->Free(thePtr.ToPointer());
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

Macad::Occt::Standard_MultiplyDefined::Standard_MultiplyDefined(Macad::Occt::Standard_MultiplyDefined^ parameter1)
	: Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_MultiplyDefined(*(::Standard_MultiplyDefined*)parameter1->NativeInstance);
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
	Handle(::Standard_MultiplyDefined) _result;
	_result = ::Standard_MultiplyDefined::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_MultiplyDefined::CreateDowncasted( _result.get());
}

Macad::Occt::Standard_MultiplyDefined^ Macad::Occt::Standard_MultiplyDefined::NewInstance()
{
	Handle(::Standard_MultiplyDefined) _result;
	_result = ::Standard_MultiplyDefined::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_MultiplyDefined::CreateDowncasted( _result.get());
}


Macad::Occt::Standard_MultiplyDefined^ Macad::Occt::Standard_MultiplyDefined::CreateDowncasted(::Standard_MultiplyDefined* instance)
{
	return gcnew Macad::Occt::Standard_MultiplyDefined( instance );
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

Macad::Occt::Standard_NoMoreObject::Standard_NoMoreObject(Macad::Occt::Standard_NoMoreObject^ parameter1)
	: Macad::Occt::Standard_DomainError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_NoMoreObject(*(::Standard_NoMoreObject*)parameter1->NativeInstance);
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
	Handle(::Standard_NoMoreObject) _result;
	_result = ::Standard_NoMoreObject::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_NoMoreObject::CreateDowncasted( _result.get());
}

Macad::Occt::Standard_NoMoreObject^ Macad::Occt::Standard_NoMoreObject::NewInstance()
{
	Handle(::Standard_NoMoreObject) _result;
	_result = ::Standard_NoMoreObject::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_NoMoreObject::CreateDowncasted( _result.get());
}


Macad::Occt::Standard_NoMoreObject^ Macad::Occt::Standard_NoMoreObject::CreateDowncasted(::Standard_NoMoreObject* instance)
{
	return gcnew Macad::Occt::Standard_NoMoreObject( instance );
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

Macad::Occt::Standard_NotImplemented::Standard_NotImplemented(Macad::Occt::Standard_NotImplemented^ parameter1)
	: Macad::Occt::Standard_ProgramError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_NotImplemented(*(::Standard_NotImplemented*)parameter1->NativeInstance);
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
	Handle(::Standard_NotImplemented) _result;
	_result = ::Standard_NotImplemented::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_NotImplemented::CreateDowncasted( _result.get());
}

Macad::Occt::Standard_NotImplemented^ Macad::Occt::Standard_NotImplemented::NewInstance()
{
	Handle(::Standard_NotImplemented) _result;
	_result = ::Standard_NotImplemented::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_NotImplemented::CreateDowncasted( _result.get());
}


Macad::Occt::Standard_NotImplemented^ Macad::Occt::Standard_NotImplemented::CreateDowncasted(::Standard_NotImplemented* instance)
{
	return gcnew Macad::Occt::Standard_NotImplemented( instance );
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

Macad::Occt::Standard_NullValue::Standard_NullValue(Macad::Occt::Standard_NullValue^ parameter1)
	: Macad::Occt::Standard_RangeError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_NullValue(*(::Standard_NullValue*)parameter1->NativeInstance);
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
	Handle(::Standard_NullValue) _result;
	_result = ::Standard_NullValue::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_NullValue::CreateDowncasted( _result.get());
}

Macad::Occt::Standard_NullValue^ Macad::Occt::Standard_NullValue::NewInstance()
{
	Handle(::Standard_NullValue) _result;
	_result = ::Standard_NullValue::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_NullValue::CreateDowncasted( _result.get());
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

Macad::Occt::Standard_Overflow::Standard_Overflow(Macad::Occt::Standard_Overflow^ parameter1)
	: Macad::Occt::Standard_NumericError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_Overflow(*(::Standard_Overflow*)parameter1->NativeInstance);
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
	Handle(::Standard_Overflow) _result;
	_result = ::Standard_Overflow::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_Overflow::CreateDowncasted( _result.get());
}

Macad::Occt::Standard_Overflow^ Macad::Occt::Standard_Overflow::NewInstance()
{
	Handle(::Standard_Overflow) _result;
	_result = ::Standard_Overflow::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_Overflow::CreateDowncasted( _result.get());
}


Macad::Occt::Standard_Overflow^ Macad::Occt::Standard_Overflow::CreateDowncasted(::Standard_Overflow* instance)
{
	return gcnew Macad::Occt::Standard_Overflow( instance );
}



//---------------------------------------------------------------------
//  Class  Standard_ReadBuffer
//---------------------------------------------------------------------

Macad::Occt::Standard_ReadBuffer::Standard_ReadBuffer(Macad::Occt::Standard_ReadBuffer^ parameter1)
	: BaseClass<::Standard_ReadBuffer>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Standard_ReadBuffer(*(::Standard_ReadBuffer*)parameter1->NativeInstance);
}

bool Macad::Occt::Standard_ReadBuffer::IsDone()
{
	return ((::Standard_ReadBuffer*)_NativeInstance)->IsDone();
}




//---------------------------------------------------------------------
//  Class  Standard_ReadLineBuffer
//---------------------------------------------------------------------

Macad::Occt::Standard_ReadLineBuffer::Standard_ReadLineBuffer(unsigned __int64 theMaxBufferSizeBytes)
	: BaseClass<::Standard_ReadLineBuffer>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Standard_ReadLineBuffer(theMaxBufferSizeBytes);
}

Macad::Occt::Standard_ReadLineBuffer::Standard_ReadLineBuffer(Macad::Occt::Standard_ReadLineBuffer^ parameter1)
	: BaseClass<::Standard_ReadLineBuffer>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::Standard_ReadLineBuffer(*(::Standard_ReadLineBuffer*)parameter1->NativeInstance);
}

void Macad::Occt::Standard_ReadLineBuffer::Clear()
{
	((::Standard_ReadLineBuffer*)_NativeInstance)->Clear();
}

bool Macad::Occt::Standard_ReadLineBuffer::IsMultilineMode()
{
	return ((::Standard_ReadLineBuffer*)_NativeInstance)->IsMultilineMode();
}

bool Macad::Occt::Standard_ReadLineBuffer::ToPutGapInMultiline()
{
	return ((::Standard_ReadLineBuffer*)_NativeInstance)->ToPutGapInMultiline();
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
//  Class  Standard_TooManyUsers
//---------------------------------------------------------------------

Macad::Occt::Standard_TooManyUsers::Standard_TooManyUsers()
	: Macad::Occt::Standard_LicenseError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_TooManyUsers();
}

Macad::Occt::Standard_TooManyUsers::Standard_TooManyUsers(System::String^ theMessage)
	: Macad::Occt::Standard_LicenseError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::Standard_TooManyUsers(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::Standard_TooManyUsers::Standard_TooManyUsers(Macad::Occt::Standard_TooManyUsers^ parameter1)
	: Macad::Occt::Standard_LicenseError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_TooManyUsers(*(::Standard_TooManyUsers*)parameter1->NativeInstance);
}

void Macad::Occt::Standard_TooManyUsers::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::Standard_TooManyUsers::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::Standard_TooManyUsers::Raise()
{
	::Standard_TooManyUsers::Raise("");
}

Macad::Occt::Standard_TooManyUsers^ Macad::Occt::Standard_TooManyUsers::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::Standard_TooManyUsers) _result;
	_result = ::Standard_TooManyUsers::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_TooManyUsers::CreateDowncasted( _result.get());
}

Macad::Occt::Standard_TooManyUsers^ Macad::Occt::Standard_TooManyUsers::NewInstance()
{
	Handle(::Standard_TooManyUsers) _result;
	_result = ::Standard_TooManyUsers::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_TooManyUsers::CreateDowncasted( _result.get());
}


Macad::Occt::Standard_TooManyUsers^ Macad::Occt::Standard_TooManyUsers::CreateDowncasted(::Standard_TooManyUsers* instance)
{
	return gcnew Macad::Occt::Standard_TooManyUsers( instance );
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

Macad::Occt::Standard_Underflow::Standard_Underflow(Macad::Occt::Standard_Underflow^ parameter1)
	: Macad::Occt::Standard_NumericError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::Standard_Underflow(*(::Standard_Underflow*)parameter1->NativeInstance);
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
	Handle(::Standard_Underflow) _result;
	_result = ::Standard_Underflow::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_Underflow::CreateDowncasted( _result.get());
}

Macad::Occt::Standard_Underflow^ Macad::Occt::Standard_Underflow::NewInstance()
{
	Handle(::Standard_Underflow) _result;
	_result = ::Standard_Underflow::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::Standard_Underflow::CreateDowncasted( _result.get());
}


Macad::Occt::Standard_Underflow^ Macad::Occt::Standard_Underflow::CreateDowncasted(::Standard_Underflow* instance)
{
	return gcnew Macad::Occt::Standard_Underflow( instance );
}


