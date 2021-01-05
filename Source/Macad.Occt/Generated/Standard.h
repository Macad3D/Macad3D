// Generated wrapper code for package Standard

#pragma once

#include "Standard.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  Standard_JsonKey
//---------------------------------------------------------------------
public enum class Standard_JsonKey
{
	Standard_JsonKey_None = 0,
	Standard_JsonKey_OpenChild = 1,
	Standard_JsonKey_CloseChild = 2,
	Standard_JsonKey_OpenContainer = 3,
	Standard_JsonKey_CloseContainer = 4,
	Standard_JsonKey_Quote = 5,
	Standard_JsonKey_SeparatorKeyToValue = 6,
	Standard_JsonKey_SeparatorValueToValue = 7
}; // enum  class Standard_JsonKey

//---------------------------------------------------------------------
//  Enum  Standard_HandlerStatus
//---------------------------------------------------------------------
public enum class Standard_HandlerStatus
{
	Standard_HandlerVoid = 0,
	Standard_HandlerJumped = 1,
	Standard_HandlerProcessed = 2
}; // enum  class Standard_HandlerStatus

//---------------------------------------------------------------------
//  Class  Standard_DumpValue
//---------------------------------------------------------------------
public ref class Standard_DumpValue sealed : public BaseClass<::Standard_DumpValue>
{

#ifdef Include_Standard_DumpValue_h
public:
	Include_Standard_DumpValue_h
#endif

public:
	Standard_DumpValue(::Standard_DumpValue* nativeInstance)
		: BaseClass<::Standard_DumpValue>( nativeInstance, true )
	{}

	Standard_DumpValue(::Standard_DumpValue& nativeInstance)
		: BaseClass<::Standard_DumpValue>( &nativeInstance, false )
	{}

	property ::Standard_DumpValue* NativeInstance
	{
		::Standard_DumpValue* get()
		{
			return static_cast<::Standard_DumpValue*>(_NativeInstance);
		}
	}

public:
	Standard_DumpValue();
	Standard_DumpValue(Macad::Occt::TCollection_AsciiString^ theValue, int theStartPos);
	Standard_DumpValue(Macad::Occt::Standard_DumpValue^ parameter1);
}; // class Standard_DumpValue

//---------------------------------------------------------------------
//  Class  Standard_ErrorHandler
//---------------------------------------------------------------------
public ref class Standard_ErrorHandler sealed : public BaseClass<::Standard_ErrorHandler>
{

#ifdef Include_Standard_ErrorHandler_h
public:
	Include_Standard_ErrorHandler_h
#endif

public:
	Standard_ErrorHandler(::Standard_ErrorHandler* nativeInstance)
		: BaseClass<::Standard_ErrorHandler>( nativeInstance, true )
	{}

	Standard_ErrorHandler(::Standard_ErrorHandler& nativeInstance)
		: BaseClass<::Standard_ErrorHandler>( &nativeInstance, false )
	{}

	property ::Standard_ErrorHandler* NativeInstance
	{
		::Standard_ErrorHandler* get()
		{
			return static_cast<::Standard_ErrorHandler*>(_NativeInstance);
		}
	}

public:
	Standard_ErrorHandler();
	Standard_ErrorHandler(Macad::Occt::Standard_ErrorHandler^ parameter1);
	void Destroy();
	void Unlink();
	/* Method skipped due to unknown mapping: Standard_Boolean Catches(Standard_Type aType, ) */
	Macad::Occt::Standard_Failure^ Error();
	static Macad::Occt::Standard_Failure^ LastCaughtError();
	static bool IsInTryBlock();
}; // class Standard_ErrorHandler

//---------------------------------------------------------------------
//  Class  Standard_Failure
//---------------------------------------------------------------------
public ref class Standard_Failure : public Macad::Occt::Standard_Transient
{

#ifdef Include_Standard_Failure_h
public:
	Include_Standard_Failure_h
#endif

protected:
	Standard_Failure(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	Standard_Failure(::Standard_Failure* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Standard_Failure(::Standard_Failure& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Standard_Failure* NativeInstance
	{
		::Standard_Failure* get()
		{
			return static_cast<::Standard_Failure*>(_NativeInstance);
		}
	}

	static Macad::Occt::Standard_Failure^ CreateDowncasted(::Standard_Failure* instance);

public:
	Standard_Failure();
	Standard_Failure(Macad::Occt::Standard_Failure^ f);
	Standard_Failure(System::String^ aString);
	/* Method skipped due to unknown mapping: void Print(ostream theStream, ) */
	System::String^ GetMessageString();
	void SetMessageString(System::String^ aMessage);
	void Reraise();
	void Reraise(System::String^ aMessage);
	/* Method skipped due to unknown mapping: void Reraise(stringstream aReason, ) */
	static void Raise(System::String^ aMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream aReason, ) */
	static Macad::Occt::Standard_Failure^ NewInstance(System::String^ aMessage);
	void Jump();
	static Macad::Occt::Standard_Failure^ Caught();
}; // class Standard_Failure

//---------------------------------------------------------------------
//  Class  Standard_DomainError
//---------------------------------------------------------------------
public ref class Standard_DomainError : public Macad::Occt::Standard_Failure
{

#ifdef Include_Standard_DomainError_h
public:
	Include_Standard_DomainError_h
#endif

protected:
	Standard_DomainError(InitMode init)
		: Macad::Occt::Standard_Failure( init )
	{}

public:
	Standard_DomainError(::Standard_DomainError* nativeInstance)
		: Macad::Occt::Standard_Failure( nativeInstance )
	{}

	Standard_DomainError(::Standard_DomainError& nativeInstance)
		: Macad::Occt::Standard_Failure( nativeInstance )
	{}

	property ::Standard_DomainError* NativeInstance
	{
		::Standard_DomainError* get()
		{
			return static_cast<::Standard_DomainError*>(_NativeInstance);
		}
	}

	static Macad::Occt::Standard_DomainError^ CreateDowncasted(::Standard_DomainError* instance);

public:
	Standard_DomainError();
	Standard_DomainError(System::String^ theMessage);
	Standard_DomainError(Macad::Occt::Standard_DomainError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_DomainError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_DomainError^ NewInstance();
}; // class Standard_DomainError

//---------------------------------------------------------------------
//  Class  Standard_NoSuchObject
//---------------------------------------------------------------------
public ref class Standard_NoSuchObject : public Macad::Occt::Standard_DomainError
{

#ifdef Include_Standard_NoSuchObject_h
public:
	Include_Standard_NoSuchObject_h
#endif

protected:
	Standard_NoSuchObject(InitMode init)
		: Macad::Occt::Standard_DomainError( init )
	{}

public:
	Standard_NoSuchObject(::Standard_NoSuchObject* nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	Standard_NoSuchObject(::Standard_NoSuchObject& nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	property ::Standard_NoSuchObject* NativeInstance
	{
		::Standard_NoSuchObject* get()
		{
			return static_cast<::Standard_NoSuchObject*>(_NativeInstance);
		}
	}

	static Macad::Occt::Standard_NoSuchObject^ CreateDowncasted(::Standard_NoSuchObject* instance);

public:
	Standard_NoSuchObject();
	Standard_NoSuchObject(System::String^ theMessage);
	Standard_NoSuchObject(Macad::Occt::Standard_NoSuchObject^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_NoSuchObject^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_NoSuchObject^ NewInstance();
}; // class Standard_NoSuchObject

//---------------------------------------------------------------------
//  Class  Standard_DimensionError
//---------------------------------------------------------------------
public ref class Standard_DimensionError : public Macad::Occt::Standard_DomainError
{

#ifdef Include_Standard_DimensionError_h
public:
	Include_Standard_DimensionError_h
#endif

protected:
	Standard_DimensionError(InitMode init)
		: Macad::Occt::Standard_DomainError( init )
	{}

public:
	Standard_DimensionError(::Standard_DimensionError* nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	Standard_DimensionError(::Standard_DimensionError& nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	property ::Standard_DimensionError* NativeInstance
	{
		::Standard_DimensionError* get()
		{
			return static_cast<::Standard_DimensionError*>(_NativeInstance);
		}
	}

	static Macad::Occt::Standard_DimensionError^ CreateDowncasted(::Standard_DimensionError* instance);

public:
	Standard_DimensionError();
	Standard_DimensionError(System::String^ theMessage);
	Standard_DimensionError(Macad::Occt::Standard_DimensionError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_DimensionError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_DimensionError^ NewInstance();
}; // class Standard_DimensionError

//---------------------------------------------------------------------
//  Class  Standard_DimensionMismatch
//---------------------------------------------------------------------
public ref class Standard_DimensionMismatch sealed : public Macad::Occt::Standard_DimensionError
{

#ifdef Include_Standard_DimensionMismatch_h
public:
	Include_Standard_DimensionMismatch_h
#endif

public:
	Standard_DimensionMismatch(::Standard_DimensionMismatch* nativeInstance)
		: Macad::Occt::Standard_DimensionError( nativeInstance )
	{}

	Standard_DimensionMismatch(::Standard_DimensionMismatch& nativeInstance)
		: Macad::Occt::Standard_DimensionError( nativeInstance )
	{}

	property ::Standard_DimensionMismatch* NativeInstance
	{
		::Standard_DimensionMismatch* get()
		{
			return static_cast<::Standard_DimensionMismatch*>(_NativeInstance);
		}
	}

	static Macad::Occt::Standard_DimensionMismatch^ CreateDowncasted(::Standard_DimensionMismatch* instance);

public:
	Standard_DimensionMismatch();
	Standard_DimensionMismatch(System::String^ theMessage);
	Standard_DimensionMismatch(Macad::Occt::Standard_DimensionMismatch^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_DimensionMismatch^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_DimensionMismatch^ NewInstance();
}; // class Standard_DimensionMismatch

//---------------------------------------------------------------------
//  Class  Standard_ProgramError
//---------------------------------------------------------------------
public ref class Standard_ProgramError : public Macad::Occt::Standard_Failure
{

#ifdef Include_Standard_ProgramError_h
public:
	Include_Standard_ProgramError_h
#endif

protected:
	Standard_ProgramError(InitMode init)
		: Macad::Occt::Standard_Failure( init )
	{}

public:
	Standard_ProgramError(::Standard_ProgramError* nativeInstance)
		: Macad::Occt::Standard_Failure( nativeInstance )
	{}

	Standard_ProgramError(::Standard_ProgramError& nativeInstance)
		: Macad::Occt::Standard_Failure( nativeInstance )
	{}

	property ::Standard_ProgramError* NativeInstance
	{
		::Standard_ProgramError* get()
		{
			return static_cast<::Standard_ProgramError*>(_NativeInstance);
		}
	}

	static Macad::Occt::Standard_ProgramError^ CreateDowncasted(::Standard_ProgramError* instance);

public:
	Standard_ProgramError();
	Standard_ProgramError(System::String^ theMessage);
	Standard_ProgramError(Macad::Occt::Standard_ProgramError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_ProgramError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_ProgramError^ NewInstance();
}; // class Standard_ProgramError

//---------------------------------------------------------------------
//  Class  Standard_RangeError
//---------------------------------------------------------------------
public ref class Standard_RangeError : public Macad::Occt::Standard_DomainError
{

#ifdef Include_Standard_RangeError_h
public:
	Include_Standard_RangeError_h
#endif

protected:
	Standard_RangeError(InitMode init)
		: Macad::Occt::Standard_DomainError( init )
	{}

public:
	Standard_RangeError(::Standard_RangeError* nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	Standard_RangeError(::Standard_RangeError& nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	property ::Standard_RangeError* NativeInstance
	{
		::Standard_RangeError* get()
		{
			return static_cast<::Standard_RangeError*>(_NativeInstance);
		}
	}

	static Macad::Occt::Standard_RangeError^ CreateDowncasted(::Standard_RangeError* instance);

public:
	Standard_RangeError();
	Standard_RangeError(System::String^ theMessage);
	Standard_RangeError(Macad::Occt::Standard_RangeError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_RangeError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_RangeError^ NewInstance();
}; // class Standard_RangeError

//---------------------------------------------------------------------
//  Class  Standard_OutOfRange
//---------------------------------------------------------------------
public ref class Standard_OutOfRange : public Macad::Occt::Standard_RangeError
{

#ifdef Include_Standard_OutOfRange_h
public:
	Include_Standard_OutOfRange_h
#endif

protected:
	Standard_OutOfRange(InitMode init)
		: Macad::Occt::Standard_RangeError( init )
	{}

public:
	Standard_OutOfRange(::Standard_OutOfRange* nativeInstance)
		: Macad::Occt::Standard_RangeError( nativeInstance )
	{}

	Standard_OutOfRange(::Standard_OutOfRange& nativeInstance)
		: Macad::Occt::Standard_RangeError( nativeInstance )
	{}

	property ::Standard_OutOfRange* NativeInstance
	{
		::Standard_OutOfRange* get()
		{
			return static_cast<::Standard_OutOfRange*>(_NativeInstance);
		}
	}

	static Macad::Occt::Standard_OutOfRange^ CreateDowncasted(::Standard_OutOfRange* instance);

public:
	Standard_OutOfRange();
	Standard_OutOfRange(System::String^ theMessage);
	Standard_OutOfRange(Macad::Occt::Standard_OutOfRange^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_OutOfRange^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_OutOfRange^ NewInstance();
}; // class Standard_OutOfRange

//---------------------------------------------------------------------
//  Class  Standard_TypeMismatch
//---------------------------------------------------------------------
public ref class Standard_TypeMismatch sealed : public Macad::Occt::Standard_DomainError
{

#ifdef Include_Standard_TypeMismatch_h
public:
	Include_Standard_TypeMismatch_h
#endif

public:
	Standard_TypeMismatch(::Standard_TypeMismatch* nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	Standard_TypeMismatch(::Standard_TypeMismatch& nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	property ::Standard_TypeMismatch* NativeInstance
	{
		::Standard_TypeMismatch* get()
		{
			return static_cast<::Standard_TypeMismatch*>(_NativeInstance);
		}
	}

	static Macad::Occt::Standard_TypeMismatch^ CreateDowncasted(::Standard_TypeMismatch* instance);

public:
	Standard_TypeMismatch();
	Standard_TypeMismatch(System::String^ theMessage);
	Standard_TypeMismatch(Macad::Occt::Standard_TypeMismatch^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_TypeMismatch^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_TypeMismatch^ NewInstance();
}; // class Standard_TypeMismatch

//---------------------------------------------------------------------
//  Class  Standard_NullObject
//---------------------------------------------------------------------
public ref class Standard_NullObject sealed : public Macad::Occt::Standard_DomainError
{

#ifdef Include_Standard_NullObject_h
public:
	Include_Standard_NullObject_h
#endif

public:
	Standard_NullObject(::Standard_NullObject* nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	Standard_NullObject(::Standard_NullObject& nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	property ::Standard_NullObject* NativeInstance
	{
		::Standard_NullObject* get()
		{
			return static_cast<::Standard_NullObject*>(_NativeInstance);
		}
	}

	static Macad::Occt::Standard_NullObject^ CreateDowncasted(::Standard_NullObject* instance);

public:
	Standard_NullObject();
	Standard_NullObject(System::String^ theMessage);
	Standard_NullObject(Macad::Occt::Standard_NullObject^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_NullObject^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_NullObject^ NewInstance();
}; // class Standard_NullObject

//---------------------------------------------------------------------
//  Class  Standard_NumericError
//---------------------------------------------------------------------
public ref class Standard_NumericError : public Macad::Occt::Standard_Failure
{

#ifdef Include_Standard_NumericError_h
public:
	Include_Standard_NumericError_h
#endif

protected:
	Standard_NumericError(InitMode init)
		: Macad::Occt::Standard_Failure( init )
	{}

public:
	Standard_NumericError(::Standard_NumericError* nativeInstance)
		: Macad::Occt::Standard_Failure( nativeInstance )
	{}

	Standard_NumericError(::Standard_NumericError& nativeInstance)
		: Macad::Occt::Standard_Failure( nativeInstance )
	{}

	property ::Standard_NumericError* NativeInstance
	{
		::Standard_NumericError* get()
		{
			return static_cast<::Standard_NumericError*>(_NativeInstance);
		}
	}

	static Macad::Occt::Standard_NumericError^ CreateDowncasted(::Standard_NumericError* instance);

public:
	Standard_NumericError();
	Standard_NumericError(System::String^ theMessage);
	Standard_NumericError(Macad::Occt::Standard_NumericError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_NumericError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_NumericError^ NewInstance();
}; // class Standard_NumericError

//---------------------------------------------------------------------
//  Class  Standard_NegativeValue
//---------------------------------------------------------------------
public ref class Standard_NegativeValue sealed : public Macad::Occt::Standard_RangeError
{

#ifdef Include_Standard_NegativeValue_h
public:
	Include_Standard_NegativeValue_h
#endif

public:
	Standard_NegativeValue(::Standard_NegativeValue* nativeInstance)
		: Macad::Occt::Standard_RangeError( nativeInstance )
	{}

	Standard_NegativeValue(::Standard_NegativeValue& nativeInstance)
		: Macad::Occt::Standard_RangeError( nativeInstance )
	{}

	property ::Standard_NegativeValue* NativeInstance
	{
		::Standard_NegativeValue* get()
		{
			return static_cast<::Standard_NegativeValue*>(_NativeInstance);
		}
	}

	static Macad::Occt::Standard_NegativeValue^ CreateDowncasted(::Standard_NegativeValue* instance);

public:
	Standard_NegativeValue();
	Standard_NegativeValue(System::String^ theMessage);
	Standard_NegativeValue(Macad::Occt::Standard_NegativeValue^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_NegativeValue^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_NegativeValue^ NewInstance();
}; // class Standard_NegativeValue

//---------------------------------------------------------------------
//  Class  Standard_Dump
//---------------------------------------------------------------------
public ref class Standard_Dump sealed : public BaseClass<::Standard_Dump>
{

#ifdef Include_Standard_Dump_h
public:
	Include_Standard_Dump_h
#endif

public:
	Standard_Dump(::Standard_Dump* nativeInstance)
		: BaseClass<::Standard_Dump>( nativeInstance, true )
	{}

	Standard_Dump(::Standard_Dump& nativeInstance)
		: BaseClass<::Standard_Dump>( &nativeInstance, false )
	{}

	property ::Standard_Dump* NativeInstance
	{
		::Standard_Dump* get()
		{
			return static_cast<::Standard_Dump*>(_NativeInstance);
		}
	}

public:
	Standard_Dump();
	Standard_Dump(Macad::Occt::Standard_Dump^ parameter1);
	/* Method skipped due to unknown mapping: TCollection_AsciiString Text(stringstream theStream, ) */
	/* Method skipped due to unknown mapping: TCollection_AsciiString FormatJson(stringstream theStream, Standard_Integer theIndent, ) */
	/* Method skipped due to unknown mapping: TCollection_AsciiString FormatJson(stringstream theStream, Standard_Integer theIndent, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean SplitJson(TCollection_AsciiString theStreamStr, NCollection_IndexedDataMap<TCollection_AsciiString, Standard_DumpValue, NCollection_DefaultHasher<TCollection_AsciiString> > theKeyToValues, ) */
	/* Method skipped due to unknown mapping: NCollection_List<int> HierarchicalValueIndices(NCollection_IndexedDataMap<TCollection_AsciiString, TCollection_AsciiString, NCollection_DefaultHasher<TCollection_AsciiString> > theValues, ) */
	static bool HasChildKey(Macad::Occt::TCollection_AsciiString^ theSourceValue);
	static System::String^ JsonKeyToString(Macad::Occt::Standard_JsonKey theKey);
	static int JsonKeyLength(Macad::Occt::Standard_JsonKey theKey);
	/* Method skipped due to unknown mapping: void AddValuesSeparator(ostream theOStream, ) */
	static Macad::Occt::TCollection_AsciiString^ GetPointerPrefix();
	static Macad::Occt::TCollection_AsciiString^ GetPointerInfo(Macad::Occt::Standard_Transient^ thePointer, bool isShortInfo);
	static Macad::Occt::TCollection_AsciiString^ GetPointerInfo(Macad::Occt::Standard_Transient^ thePointer);
	static Macad::Occt::TCollection_AsciiString^ GetPointerInfo(System::IntPtr thePointer, bool isShortInfo);
	static Macad::Occt::TCollection_AsciiString^ GetPointerInfo(System::IntPtr thePointer);
	/* Method skipped due to unknown mapping: void DumpKeyToClass(ostream theOStream, TCollection_AsciiString theKey, TCollection_AsciiString theField, ) */
	/* Method skipped due to unknown mapping: void DumpCharacterValues(ostream theOStream, int theCount, ) */
	/* Method skipped due to unknown mapping: void DumpRealValues(ostream theOStream, int theCount, ) */
	static bool ProcessStreamName(Macad::Occt::TCollection_AsciiString^ theStreamStr, Macad::Occt::TCollection_AsciiString^ theName, int% theStreamPos);
	static bool ProcessFieldName(Macad::Occt::TCollection_AsciiString^ theStreamStr, Macad::Occt::TCollection_AsciiString^ theName, int% theStreamPos);
	static bool InitRealValues(Macad::Occt::TCollection_AsciiString^ theStreamStr, int% theStreamPos, int theCount);
	static bool InitValue(Macad::Occt::TCollection_AsciiString^ theStreamStr, int% theStreamPos, Macad::Occt::TCollection_AsciiString^ theValue);
	static Macad::Occt::TCollection_AsciiString^ DumpFieldToName(Macad::Occt::TCollection_AsciiString^ theField);
}; // class Standard_Dump

//---------------------------------------------------------------------
//  Class  Standard_ConstructionError
//---------------------------------------------------------------------
public ref class Standard_ConstructionError : public Macad::Occt::Standard_DomainError
{

#ifdef Include_Standard_ConstructionError_h
public:
	Include_Standard_ConstructionError_h
#endif

protected:
	Standard_ConstructionError(InitMode init)
		: Macad::Occt::Standard_DomainError( init )
	{}

public:
	Standard_ConstructionError(::Standard_ConstructionError* nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	Standard_ConstructionError(::Standard_ConstructionError& nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	property ::Standard_ConstructionError* NativeInstance
	{
		::Standard_ConstructionError* get()
		{
			return static_cast<::Standard_ConstructionError*>(_NativeInstance);
		}
	}

	static Macad::Occt::Standard_ConstructionError^ CreateDowncasted(::Standard_ConstructionError* instance);

public:
	Standard_ConstructionError();
	Standard_ConstructionError(System::String^ theMessage);
	Standard_ConstructionError(Macad::Occt::Standard_ConstructionError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_ConstructionError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_ConstructionError^ NewInstance();
}; // class Standard_ConstructionError

//---------------------------------------------------------------------
//  Class  Standard_AbortiveTransaction
//---------------------------------------------------------------------
public ref class Standard_AbortiveTransaction sealed : public Macad::Occt::Standard_Failure
{

#ifdef Include_Standard_AbortiveTransaction_h
public:
	Include_Standard_AbortiveTransaction_h
#endif

public:
	Standard_AbortiveTransaction(::Standard_AbortiveTransaction* nativeInstance)
		: Macad::Occt::Standard_Failure( nativeInstance )
	{}

	Standard_AbortiveTransaction(::Standard_AbortiveTransaction& nativeInstance)
		: Macad::Occt::Standard_Failure( nativeInstance )
	{}

	property ::Standard_AbortiveTransaction* NativeInstance
	{
		::Standard_AbortiveTransaction* get()
		{
			return static_cast<::Standard_AbortiveTransaction*>(_NativeInstance);
		}
	}

	static Macad::Occt::Standard_AbortiveTransaction^ CreateDowncasted(::Standard_AbortiveTransaction* instance);

public:
	Standard_AbortiveTransaction();
	Standard_AbortiveTransaction(System::String^ theMessage);
	Standard_AbortiveTransaction(Macad::Occt::Standard_AbortiveTransaction^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_AbortiveTransaction^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_AbortiveTransaction^ NewInstance();
}; // class Standard_AbortiveTransaction

//---------------------------------------------------------------------
//  Class  Standard_ArrayStreamBuffer
//---------------------------------------------------------------------
public ref class Standard_ArrayStreamBuffer sealed : public BaseClass<::Standard_ArrayStreamBuffer>
{

#ifdef Include_Standard_ArrayStreamBuffer_h
public:
	Include_Standard_ArrayStreamBuffer_h
#endif

public:
	Standard_ArrayStreamBuffer(::Standard_ArrayStreamBuffer* nativeInstance)
		: BaseClass<::Standard_ArrayStreamBuffer>( nativeInstance, true )
	{}

	Standard_ArrayStreamBuffer(::Standard_ArrayStreamBuffer& nativeInstance)
		: BaseClass<::Standard_ArrayStreamBuffer>( &nativeInstance, false )
	{}

	property ::Standard_ArrayStreamBuffer* NativeInstance
	{
		::Standard_ArrayStreamBuffer* get()
		{
			return static_cast<::Standard_ArrayStreamBuffer*>(_NativeInstance);
		}
	}

public:
	Standard_ArrayStreamBuffer(char theBegin, unsigned __int64 theSize);
	void Init(char theBegin, unsigned __int64 theSize);
	/* Method skipped due to unknown mapping: long long int xsgetn(char thePtr, long long int theCount, ) */
	/* Method skipped due to unknown mapping: streampos pubseekoff(long long int _Off, int _Way, int _Mode, ) */
	/* Method skipped due to unknown mapping: streampos pubseekoff(long long int _Off, int _Way, int _Mode, ) */
	/* Method skipped due to unknown mapping: streampos pubseekoff(long long int _Off, unsigned int _Way, unsigned int _Mode, ) */
	/* Method skipped due to unknown mapping: streampos pubseekpos(streampos _Pos, int _Mode, ) */
	/* Method skipped due to unknown mapping: streampos pubseekpos(streampos _Pos, int _Mode, ) */
	/* Method skipped due to unknown mapping: streampos pubseekpos(streampos _Pos, unsigned int _Mode, ) */
	/* Method skipped due to unknown mapping: basic_streambuf<char, std::char_traits<char> > pubsetbuf(char _Buffer, long long int _Count, ) */
	/* Method skipped due to unknown mapping: locale pubimbue(locale _Newlocale, ) */
	/* Method skipped due to unknown mapping: locale getloc() */
	/* Method skipped due to unknown mapping: long long int in_avail() */
	int pubsync();
	int sbumpc();
	int sgetc();
	/* Method skipped due to unknown mapping: long long int sgetn(char _Ptr, long long int _Count, ) */
	int snextc();
	int sputbackc(char _Ch);
	void stossc();
	int sungetc();
	int sputc(char _Ch);
	/* Method skipped due to unknown mapping: long long int sputn(char _Ptr, long long int _Count, ) */
	void _Lock();
	void _Unlock();
}; // class Standard_ArrayStreamBuffer

//---------------------------------------------------------------------
//  Class  Standard_Condition
//---------------------------------------------------------------------
public ref class Standard_Condition sealed : public BaseClass<::Standard_Condition>
{

#ifdef Include_Standard_Condition_h
public:
	Include_Standard_Condition_h
#endif

public:
	Standard_Condition(::Standard_Condition* nativeInstance)
		: BaseClass<::Standard_Condition>( nativeInstance, true )
	{}

	Standard_Condition(::Standard_Condition& nativeInstance)
		: BaseClass<::Standard_Condition>( &nativeInstance, false )
	{}

	property ::Standard_Condition* NativeInstance
	{
		::Standard_Condition* get()
		{
			return static_cast<::Standard_Condition*>(_NativeInstance);
		}
	}

public:
	Standard_Condition(bool theIsSet);
	void Set();
	void Reset();
	void Wait();
	bool Wait(int theTimeMilliseconds);
	bool Check();
	bool CheckReset();
	System::IntPtr getHandle();
}; // class Standard_Condition

//---------------------------------------------------------------------
//  Class  Standard_DivideByZero
//---------------------------------------------------------------------
public ref class Standard_DivideByZero sealed : public Macad::Occt::Standard_NumericError
{

#ifdef Include_Standard_DivideByZero_h
public:
	Include_Standard_DivideByZero_h
#endif

public:
	Standard_DivideByZero(::Standard_DivideByZero* nativeInstance)
		: Macad::Occt::Standard_NumericError( nativeInstance )
	{}

	Standard_DivideByZero(::Standard_DivideByZero& nativeInstance)
		: Macad::Occt::Standard_NumericError( nativeInstance )
	{}

	property ::Standard_DivideByZero* NativeInstance
	{
		::Standard_DivideByZero* get()
		{
			return static_cast<::Standard_DivideByZero*>(_NativeInstance);
		}
	}

	static Macad::Occt::Standard_DivideByZero^ CreateDowncasted(::Standard_DivideByZero* instance);

public:
	Standard_DivideByZero();
	Standard_DivideByZero(System::String^ theMessage);
	Standard_DivideByZero(Macad::Occt::Standard_DivideByZero^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_DivideByZero^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_DivideByZero^ NewInstance();
}; // class Standard_DivideByZero

//---------------------------------------------------------------------
//  Class  Standard_GUID
//---------------------------------------------------------------------
public ref class Standard_GUID sealed : public BaseClass<::Standard_GUID>
{

#ifdef Include_Standard_GUID_h
public:
	Include_Standard_GUID_h
#endif

public:
	Standard_GUID(::Standard_GUID* nativeInstance)
		: BaseClass<::Standard_GUID>( nativeInstance, true )
	{}

	Standard_GUID(::Standard_GUID& nativeInstance)
		: BaseClass<::Standard_GUID>( &nativeInstance, false )
	{}

	property ::Standard_GUID* NativeInstance
	{
		::Standard_GUID* get()
		{
			return static_cast<::Standard_GUID*>(_NativeInstance);
		}
	}

public:
	Standard_GUID();
	Standard_GUID(System::String^ aGuid);
	Standard_GUID(int a32b, char16_t a16b1, char16_t a16b2, char16_t a16b3, unsigned char a8b1, unsigned char a8b2, unsigned char a8b3, unsigned char a8b4, unsigned char a8b5, unsigned char a8b6);
	/* Method skipped due to unknown mapping: void Standard_GUID(_GUID aGuid, ) */
	Standard_GUID(Macad::Occt::Standard_GUID^ aGuid);
	/* Method skipped due to unknown mapping: _GUID ToUUID() */
	void ToCString(char aStrGuid);
	void ToExtString(char16_t aStrGuid);
	bool IsSame(Macad::Occt::Standard_GUID^ uid);
	bool IsNotSame(Macad::Occt::Standard_GUID^ uid);
	void Assign(Macad::Occt::Standard_GUID^ uid);
	/* Method skipped due to unknown mapping: void Assign(_GUID uid, ) */
	/* Method skipped due to unknown mapping: void ShallowDump(ostream aStream, ) */
	static bool CheckGUIDFormat(System::String^ aGuid);
	int Hash(int Upper);
	static int HashCode(Macad::Occt::Standard_GUID^ theGUID, int theUpperBound);
	static bool IsEqual(Macad::Occt::Standard_GUID^ string1, Macad::Occt::Standard_GUID^ string2);
}; // class Standard_GUID

//---------------------------------------------------------------------
//  Class  Standard_ImmutableObject
//---------------------------------------------------------------------
public ref class Standard_ImmutableObject sealed : public Macad::Occt::Standard_DomainError
{

#ifdef Include_Standard_ImmutableObject_h
public:
	Include_Standard_ImmutableObject_h
#endif

public:
	Standard_ImmutableObject(::Standard_ImmutableObject* nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	Standard_ImmutableObject(::Standard_ImmutableObject& nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	property ::Standard_ImmutableObject* NativeInstance
	{
		::Standard_ImmutableObject* get()
		{
			return static_cast<::Standard_ImmutableObject*>(_NativeInstance);
		}
	}

	static Macad::Occt::Standard_ImmutableObject^ CreateDowncasted(::Standard_ImmutableObject* instance);

public:
	Standard_ImmutableObject();
	Standard_ImmutableObject(System::String^ theMessage);
	Standard_ImmutableObject(Macad::Occt::Standard_ImmutableObject^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_ImmutableObject^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_ImmutableObject^ NewInstance();
}; // class Standard_ImmutableObject

//---------------------------------------------------------------------
//  Class  Standard_LicenseError
//---------------------------------------------------------------------
public ref class Standard_LicenseError : public Macad::Occt::Standard_Failure
{

#ifdef Include_Standard_LicenseError_h
public:
	Include_Standard_LicenseError_h
#endif

protected:
	Standard_LicenseError(InitMode init)
		: Macad::Occt::Standard_Failure( init )
	{}

public:
	Standard_LicenseError(::Standard_LicenseError* nativeInstance)
		: Macad::Occt::Standard_Failure( nativeInstance )
	{}

	Standard_LicenseError(::Standard_LicenseError& nativeInstance)
		: Macad::Occt::Standard_Failure( nativeInstance )
	{}

	property ::Standard_LicenseError* NativeInstance
	{
		::Standard_LicenseError* get()
		{
			return static_cast<::Standard_LicenseError*>(_NativeInstance);
		}
	}

	static Macad::Occt::Standard_LicenseError^ CreateDowncasted(::Standard_LicenseError* instance);

public:
	Standard_LicenseError();
	Standard_LicenseError(System::String^ theMessage);
	Standard_LicenseError(Macad::Occt::Standard_LicenseError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_LicenseError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_LicenseError^ NewInstance();
}; // class Standard_LicenseError

//---------------------------------------------------------------------
//  Class  Standard_LicenseNotFound
//---------------------------------------------------------------------
public ref class Standard_LicenseNotFound sealed : public Macad::Occt::Standard_LicenseError
{

#ifdef Include_Standard_LicenseNotFound_h
public:
	Include_Standard_LicenseNotFound_h
#endif

public:
	Standard_LicenseNotFound(::Standard_LicenseNotFound* nativeInstance)
		: Macad::Occt::Standard_LicenseError( nativeInstance )
	{}

	Standard_LicenseNotFound(::Standard_LicenseNotFound& nativeInstance)
		: Macad::Occt::Standard_LicenseError( nativeInstance )
	{}

	property ::Standard_LicenseNotFound* NativeInstance
	{
		::Standard_LicenseNotFound* get()
		{
			return static_cast<::Standard_LicenseNotFound*>(_NativeInstance);
		}
	}

	static Macad::Occt::Standard_LicenseNotFound^ CreateDowncasted(::Standard_LicenseNotFound* instance);

public:
	Standard_LicenseNotFound();
	Standard_LicenseNotFound(System::String^ theMessage);
	Standard_LicenseNotFound(Macad::Occt::Standard_LicenseNotFound^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_LicenseNotFound^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_LicenseNotFound^ NewInstance();
}; // class Standard_LicenseNotFound

//---------------------------------------------------------------------
//  Class  Standard_MMgrRoot
//---------------------------------------------------------------------
public ref class Standard_MMgrRoot : public BaseClass<::Standard_MMgrRoot>
{

#ifdef Include_Standard_MMgrRoot_h
public:
	Include_Standard_MMgrRoot_h
#endif

protected:
	Standard_MMgrRoot(InitMode init)
		: BaseClass<::Standard_MMgrRoot>( init )
	{}

public:
	Standard_MMgrRoot(::Standard_MMgrRoot* nativeInstance)
		: BaseClass<::Standard_MMgrRoot>( nativeInstance, true )
	{}

	Standard_MMgrRoot(::Standard_MMgrRoot& nativeInstance)
		: BaseClass<::Standard_MMgrRoot>( &nativeInstance, false )
	{}

	property ::Standard_MMgrRoot* NativeInstance
	{
		::Standard_MMgrRoot* get()
		{
			return static_cast<::Standard_MMgrRoot*>(_NativeInstance);
		}
	}

public:
	Standard_MMgrRoot(Macad::Occt::Standard_MMgrRoot^ parameter1);
	Standard_MMgrRoot();
	System::IntPtr Allocate(size_t theSize);
	System::IntPtr Reallocate(System::IntPtr thePtr, size_t theSize);
	void Free(System::IntPtr thePtr);
	int Purge(bool isDestroyed);
	int Purge();
}; // class Standard_MMgrRoot

//---------------------------------------------------------------------
//  Class  Standard_MMgrRaw
//---------------------------------------------------------------------
public ref class Standard_MMgrRaw sealed : public Macad::Occt::Standard_MMgrRoot
{

#ifdef Include_Standard_MMgrRaw_h
public:
	Include_Standard_MMgrRaw_h
#endif

public:
	Standard_MMgrRaw(::Standard_MMgrRaw* nativeInstance)
		: Macad::Occt::Standard_MMgrRoot( nativeInstance )
	{}

	Standard_MMgrRaw(::Standard_MMgrRaw& nativeInstance)
		: Macad::Occt::Standard_MMgrRoot( nativeInstance )
	{}

	property ::Standard_MMgrRaw* NativeInstance
	{
		::Standard_MMgrRaw* get()
		{
			return static_cast<::Standard_MMgrRaw*>(_NativeInstance);
		}
	}

public:
	Standard_MMgrRaw(bool aClear);
	Standard_MMgrRaw(Macad::Occt::Standard_MMgrRaw^ parameter1);
	System::IntPtr Allocate(size_t aSize);
	System::IntPtr Reallocate(System::IntPtr thePtr, size_t theSize);
	void Free(System::IntPtr thePtr);
}; // class Standard_MMgrRaw

//---------------------------------------------------------------------
//  Class  Standard_MMgrTBBalloc
//---------------------------------------------------------------------
public ref class Standard_MMgrTBBalloc sealed : public Macad::Occt::Standard_MMgrRoot
{

#ifdef Include_Standard_MMgrTBBalloc_h
public:
	Include_Standard_MMgrTBBalloc_h
#endif

public:
	Standard_MMgrTBBalloc(::Standard_MMgrTBBalloc* nativeInstance)
		: Macad::Occt::Standard_MMgrRoot( nativeInstance )
	{}

	Standard_MMgrTBBalloc(::Standard_MMgrTBBalloc& nativeInstance)
		: Macad::Occt::Standard_MMgrRoot( nativeInstance )
	{}

	property ::Standard_MMgrTBBalloc* NativeInstance
	{
		::Standard_MMgrTBBalloc* get()
		{
			return static_cast<::Standard_MMgrTBBalloc*>(_NativeInstance);
		}
	}

public:
	Standard_MMgrTBBalloc(bool aClear);
	Standard_MMgrTBBalloc(Macad::Occt::Standard_MMgrTBBalloc^ parameter1);
	System::IntPtr Allocate(size_t aSize);
	System::IntPtr Reallocate(System::IntPtr thePtr, size_t theSize);
	void Free(System::IntPtr thePtr);
}; // class Standard_MMgrTBBalloc

//---------------------------------------------------------------------
//  Class  Standard_MultiplyDefined
//---------------------------------------------------------------------
public ref class Standard_MultiplyDefined sealed : public Macad::Occt::Standard_DomainError
{

#ifdef Include_Standard_MultiplyDefined_h
public:
	Include_Standard_MultiplyDefined_h
#endif

public:
	Standard_MultiplyDefined(::Standard_MultiplyDefined* nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	Standard_MultiplyDefined(::Standard_MultiplyDefined& nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	property ::Standard_MultiplyDefined* NativeInstance
	{
		::Standard_MultiplyDefined* get()
		{
			return static_cast<::Standard_MultiplyDefined*>(_NativeInstance);
		}
	}

	static Macad::Occt::Standard_MultiplyDefined^ CreateDowncasted(::Standard_MultiplyDefined* instance);

public:
	Standard_MultiplyDefined();
	Standard_MultiplyDefined(System::String^ theMessage);
	Standard_MultiplyDefined(Macad::Occt::Standard_MultiplyDefined^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_MultiplyDefined^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_MultiplyDefined^ NewInstance();
}; // class Standard_MultiplyDefined

//---------------------------------------------------------------------
//  Class  Standard_NoMoreObject
//---------------------------------------------------------------------
public ref class Standard_NoMoreObject sealed : public Macad::Occt::Standard_DomainError
{

#ifdef Include_Standard_NoMoreObject_h
public:
	Include_Standard_NoMoreObject_h
#endif

public:
	Standard_NoMoreObject(::Standard_NoMoreObject* nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	Standard_NoMoreObject(::Standard_NoMoreObject& nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	property ::Standard_NoMoreObject* NativeInstance
	{
		::Standard_NoMoreObject* get()
		{
			return static_cast<::Standard_NoMoreObject*>(_NativeInstance);
		}
	}

	static Macad::Occt::Standard_NoMoreObject^ CreateDowncasted(::Standard_NoMoreObject* instance);

public:
	Standard_NoMoreObject();
	Standard_NoMoreObject(System::String^ theMessage);
	Standard_NoMoreObject(Macad::Occt::Standard_NoMoreObject^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_NoMoreObject^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_NoMoreObject^ NewInstance();
}; // class Standard_NoMoreObject

//---------------------------------------------------------------------
//  Class  Standard_NotImplemented
//---------------------------------------------------------------------
public ref class Standard_NotImplemented sealed : public Macad::Occt::Standard_ProgramError
{

#ifdef Include_Standard_NotImplemented_h
public:
	Include_Standard_NotImplemented_h
#endif

public:
	Standard_NotImplemented(::Standard_NotImplemented* nativeInstance)
		: Macad::Occt::Standard_ProgramError( nativeInstance )
	{}

	Standard_NotImplemented(::Standard_NotImplemented& nativeInstance)
		: Macad::Occt::Standard_ProgramError( nativeInstance )
	{}

	property ::Standard_NotImplemented* NativeInstance
	{
		::Standard_NotImplemented* get()
		{
			return static_cast<::Standard_NotImplemented*>(_NativeInstance);
		}
	}

	static Macad::Occt::Standard_NotImplemented^ CreateDowncasted(::Standard_NotImplemented* instance);

public:
	Standard_NotImplemented();
	Standard_NotImplemented(System::String^ theMessage);
	Standard_NotImplemented(Macad::Occt::Standard_NotImplemented^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_NotImplemented^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_NotImplemented^ NewInstance();
}; // class Standard_NotImplemented

//---------------------------------------------------------------------
//  Class  Standard_NullValue
//---------------------------------------------------------------------
public ref class Standard_NullValue sealed : public Macad::Occt::Standard_RangeError
{

#ifdef Include_Standard_NullValue_h
public:
	Include_Standard_NullValue_h
#endif

public:
	Standard_NullValue(::Standard_NullValue* nativeInstance)
		: Macad::Occt::Standard_RangeError( nativeInstance )
	{}

	Standard_NullValue(::Standard_NullValue& nativeInstance)
		: Macad::Occt::Standard_RangeError( nativeInstance )
	{}

	property ::Standard_NullValue* NativeInstance
	{
		::Standard_NullValue* get()
		{
			return static_cast<::Standard_NullValue*>(_NativeInstance);
		}
	}

	static Macad::Occt::Standard_NullValue^ CreateDowncasted(::Standard_NullValue* instance);

public:
	Standard_NullValue();
	Standard_NullValue(System::String^ theMessage);
	Standard_NullValue(Macad::Occt::Standard_NullValue^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_NullValue^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_NullValue^ NewInstance();
}; // class Standard_NullValue

//---------------------------------------------------------------------
//  Class  Standard_Overflow
//---------------------------------------------------------------------
public ref class Standard_Overflow sealed : public Macad::Occt::Standard_NumericError
{

#ifdef Include_Standard_Overflow_h
public:
	Include_Standard_Overflow_h
#endif

public:
	Standard_Overflow(::Standard_Overflow* nativeInstance)
		: Macad::Occt::Standard_NumericError( nativeInstance )
	{}

	Standard_Overflow(::Standard_Overflow& nativeInstance)
		: Macad::Occt::Standard_NumericError( nativeInstance )
	{}

	property ::Standard_Overflow* NativeInstance
	{
		::Standard_Overflow* get()
		{
			return static_cast<::Standard_Overflow*>(_NativeInstance);
		}
	}

	static Macad::Occt::Standard_Overflow^ CreateDowncasted(::Standard_Overflow* instance);

public:
	Standard_Overflow();
	Standard_Overflow(System::String^ theMessage);
	Standard_Overflow(Macad::Occt::Standard_Overflow^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_Overflow^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_Overflow^ NewInstance();
}; // class Standard_Overflow

//---------------------------------------------------------------------
//  Class  Standard_ReadBuffer
//---------------------------------------------------------------------
public ref class Standard_ReadBuffer sealed : public BaseClass<::Standard_ReadBuffer>
{

#ifdef Include_Standard_ReadBuffer_h
public:
	Include_Standard_ReadBuffer_h
#endif

public:
	Standard_ReadBuffer(::Standard_ReadBuffer* nativeInstance)
		: BaseClass<::Standard_ReadBuffer>( nativeInstance, true )
	{}

	Standard_ReadBuffer(::Standard_ReadBuffer& nativeInstance)
		: BaseClass<::Standard_ReadBuffer>( &nativeInstance, false )
	{}

	property ::Standard_ReadBuffer* NativeInstance
	{
		::Standard_ReadBuffer* get()
		{
			return static_cast<::Standard_ReadBuffer*>(_NativeInstance);
		}
	}

public:
	/* Method skipped due to unknown mapping: void Standard_ReadBuffer(long long int theDataLen, size_t theChunkLen, bool theIsPartialPayload, ) */
	/* Method skipped due to unknown mapping: void Standard_ReadBuffer(long long int theDataLen, size_t theChunkLen, bool theIsPartialPayload, ) */
	Standard_ReadBuffer(Macad::Occt::Standard_ReadBuffer^ parameter1);
	/* Method skipped due to unknown mapping: void Init(long long int theDataLen, size_t theChunkLen, bool theIsPartialPayload, ) */
	/* Method skipped due to unknown mapping: void Init(long long int theDataLen, size_t theChunkLen, bool theIsPartialPayload, ) */
	bool IsDone();
}; // class Standard_ReadBuffer

//---------------------------------------------------------------------
//  Class  Standard_ReadLineBuffer
//---------------------------------------------------------------------
public ref class Standard_ReadLineBuffer sealed : public BaseClass<::Standard_ReadLineBuffer>
{

#ifdef Include_Standard_ReadLineBuffer_h
public:
	Include_Standard_ReadLineBuffer_h
#endif

public:
	Standard_ReadLineBuffer(::Standard_ReadLineBuffer* nativeInstance)
		: BaseClass<::Standard_ReadLineBuffer>( nativeInstance, true )
	{}

	Standard_ReadLineBuffer(::Standard_ReadLineBuffer& nativeInstance)
		: BaseClass<::Standard_ReadLineBuffer>( &nativeInstance, false )
	{}

	property ::Standard_ReadLineBuffer* NativeInstance
	{
		::Standard_ReadLineBuffer* get()
		{
			return static_cast<::Standard_ReadLineBuffer*>(_NativeInstance);
		}
	}

public:
	Standard_ReadLineBuffer(unsigned __int64 theMaxBufferSizeBytes);
	Standard_ReadLineBuffer(Macad::Occt::Standard_ReadLineBuffer^ parameter1);
	void Clear();
	bool IsMultilineMode();
	bool ToPutGapInMultiline();
	void SetMultilineMode(bool theMultilineMode, bool theToPutGap);
	void SetMultilineMode(bool theMultilineMode);
}; // class Standard_ReadLineBuffer

//---------------------------------------------------------------------
//  Class  Standard_TooManyUsers
//---------------------------------------------------------------------
public ref class Standard_TooManyUsers sealed : public Macad::Occt::Standard_LicenseError
{

#ifdef Include_Standard_TooManyUsers_h
public:
	Include_Standard_TooManyUsers_h
#endif

public:
	Standard_TooManyUsers(::Standard_TooManyUsers* nativeInstance)
		: Macad::Occt::Standard_LicenseError( nativeInstance )
	{}

	Standard_TooManyUsers(::Standard_TooManyUsers& nativeInstance)
		: Macad::Occt::Standard_LicenseError( nativeInstance )
	{}

	property ::Standard_TooManyUsers* NativeInstance
	{
		::Standard_TooManyUsers* get()
		{
			return static_cast<::Standard_TooManyUsers*>(_NativeInstance);
		}
	}

	static Macad::Occt::Standard_TooManyUsers^ CreateDowncasted(::Standard_TooManyUsers* instance);

public:
	Standard_TooManyUsers();
	Standard_TooManyUsers(System::String^ theMessage);
	Standard_TooManyUsers(Macad::Occt::Standard_TooManyUsers^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_TooManyUsers^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_TooManyUsers^ NewInstance();
}; // class Standard_TooManyUsers

//---------------------------------------------------------------------
//  Class  Standard_Underflow
//---------------------------------------------------------------------
public ref class Standard_Underflow sealed : public Macad::Occt::Standard_NumericError
{

#ifdef Include_Standard_Underflow_h
public:
	Include_Standard_Underflow_h
#endif

public:
	Standard_Underflow(::Standard_Underflow* nativeInstance)
		: Macad::Occt::Standard_NumericError( nativeInstance )
	{}

	Standard_Underflow(::Standard_Underflow& nativeInstance)
		: Macad::Occt::Standard_NumericError( nativeInstance )
	{}

	property ::Standard_Underflow* NativeInstance
	{
		::Standard_Underflow* get()
		{
			return static_cast<::Standard_Underflow*>(_NativeInstance);
		}
	}

	static Macad::Occt::Standard_Underflow^ CreateDowncasted(::Standard_Underflow* instance);

public:
	Standard_Underflow();
	Standard_Underflow(System::String^ theMessage);
	Standard_Underflow(Macad::Occt::Standard_Underflow^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_Underflow^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_Underflow^ NewInstance();
}; // class Standard_Underflow

}; // namespace Occt
}; // namespace Macad
