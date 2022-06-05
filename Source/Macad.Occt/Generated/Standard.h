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
/// <summary>
/// Kind of key in Json string
/// </summary>
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
/// <summary>
/// Type for storing a dump value with the stream position
/// </summary>
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
/// <summary>
/// Class implementing mechanics of conversion of signals to exceptions.
/// 
/// Each instance of it stores data for jump placement, thread id,
/// and callbacks to be called during jump (for proper resource release).
/// 
/// The active handlers are stored in the global stack, which is used
/// to find appropriate handler when signal is raised.
/// </summary>
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
	/// <summary>
	/// Create a ErrorHandler (to be used with try{}catch(){}).
	/// It uses the "setjmp" and "longjmp" routines.
	/// </summary>
	Standard_ErrorHandler();
	Standard_ErrorHandler(Macad::Occt::Standard_ErrorHandler^ parameter1);
	/// <summary>
	/// Unlinks and checks if there is a raised exception.
	/// </summary>
	void Destroy();
	/// <summary>
	/// Removes handler from the handlers list
	/// </summary>
	void Unlink();
	/// <summary>
	/// Returns "True" if the caught exception has the same type
	/// or inherits from "aType"
	/// </summary>
	/* Method skipped due to unknown mapping: Standard_Boolean Catches(Standard_Type aType, ) */
	/// <summary>
	/// Returns the current Error.
	/// </summary>
	Macad::Occt::Standard_Failure^ Error();
	/// <summary>
	/// Returns the caught exception.
	/// </summary>
	static Macad::Occt::Standard_Failure^ LastCaughtError();
	/// <summary>
	/// Test if the code is currently running in a try block
	/// </summary>
	static bool IsInTryBlock();
}; // class Standard_ErrorHandler

//---------------------------------------------------------------------
//  Class  Standard_Failure
//---------------------------------------------------------------------
/// <summary>
/// Forms the root of the entire exception hierarchy.
/// </summary>
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
	/// <summary>
	/// Creates a status object of type "Failure".
	/// </summary>
	Standard_Failure();
	/// <summary>
	/// Copy constructor
	/// </summary>
	Standard_Failure(Macad::Occt::Standard_Failure^ f);
	/// <summary>
	/// Creates a status object of type "Failure".
	/// </summary>
	/// <param name="theDesc">
	/// [in] exception description
	/// </param>
	Standard_Failure(System::String^ theDesc);
	/// <summary>
	/// Creates a status object of type "Failure" with stack trace.
	/// </summary>
	/// <param name="theDesc">
	/// [in] exception description
	/// </param>
	/// <param name="theStackTrace">
	/// [in] associated stack trace
	/// </param>
	Standard_Failure(System::String^ theDesc, System::String^ theStackTrace);
	/// <summary>
	/// Prints on the stream @p theStream the exception name followed by the error message.
	/// 
	/// Note: there is a short-cut @c operator<< (Standard_OStream&, Handle(Standard_Failure)&)
	/// </summary>
	/* Method skipped due to unknown mapping: void Print(ostream theStream, ) */
	/// <summary>
	/// Returns error message
	/// </summary>
	System::String^ GetMessageString();
	/// <summary>
	/// Sets error message
	/// </summary>
	void SetMessageString(System::String^ theMessage);
	/// <summary>
	/// Returns the stack trace string
	/// </summary>
	System::String^ GetStackString();
	/// <summary>
	/// Sets the stack trace string
	/// </summary>
	void SetStackString(System::String^ theStack);
	void Reraise();
	void Reraise(System::String^ aMessage);
	/// <summary>
	/// Reraises a caught exception and changes its error message.
	/// </summary>
	/* Method skipped due to unknown mapping: void Reraise(stringstream aReason, ) */
	/// <summary>
	/// Raises an exception of type "Failure" and associates
	/// an error message to it. The message can be printed
	/// in an exception handler.
	/// </summary>
	static void Raise(System::String^ aMessage);
	/// <summary>
	/// Raises an exception of type "Failure" and associates
	/// an error message to it. The message can be printed
	/// in an exception handler.
	/// </summary>
	static void Raise();
	/// <summary>
	/// Raises an exception of type "Failure" and associates
	/// an error message to it. The message can be constructed
	/// at run-time.
	/// </summary>
	/* Method skipped due to unknown mapping: void Raise(stringstream aReason, ) */
	/// <summary>
	/// Used to construct an instance of the exception object as a handle.
	/// Shall be used to protect against possible construction of exception object in C stack,
	/// which is dangerous since some of methods require that object was allocated dynamically.
	/// </summary>
	static Macad::Occt::Standard_Failure^ NewInstance(System::String^ theMessage);
	/// <summary>
	/// Used to construct an instance of the exception object as a handle.
	/// </summary>
	static Macad::Occt::Standard_Failure^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
	/// <summary>
	/// Returns the default length of stack trace to be captured by Standard_Failure constructor;
	/// 0 by default meaning no stack trace.
	/// </summary>
	static int DefaultStackTraceLength();
	/// <summary>
	/// Sets default length of stack trace to be captured by Standard_Failure constructor.
	/// </summary>
	static void SetDefaultStackTraceLength(int theNbStackTraces);
	/// <summary>
	/// Used to throw CASCADE exception from C signal handler.
	/// On platforms that do not allow throwing C++ exceptions
	/// from this handler (e.g. Linux), uses longjump to get to
	/// the current active signal handler, and only then is
	/// converted to C++ exception.
	/// </summary>
	void Jump();
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
	Standard_DomainError(System::String^ theMessage, System::String^ theStackTrace);
	Standard_DomainError(Macad::Occt::Standard_DomainError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_DomainError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_DomainError^ NewInstance();
	static Macad::Occt::Standard_DomainError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
}; // class Standard_DomainError

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
	Standard_DimensionError(System::String^ theMessage, System::String^ theStackTrace);
	Standard_DimensionError(Macad::Occt::Standard_DimensionError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_DimensionError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_DimensionError^ NewInstance();
	static Macad::Occt::Standard_DimensionError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
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
	Standard_DimensionMismatch(System::String^ theMessage, System::String^ theStackTrace);
	Standard_DimensionMismatch(Macad::Occt::Standard_DimensionMismatch^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_DimensionMismatch^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_DimensionMismatch^ NewInstance();
	static Macad::Occt::Standard_DimensionMismatch^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
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
	Standard_ProgramError(System::String^ theMessage, System::String^ theStackTrace);
	Standard_ProgramError(Macad::Occt::Standard_ProgramError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_ProgramError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_ProgramError^ NewInstance();
	static Macad::Occt::Standard_ProgramError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
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
	Standard_RangeError(System::String^ theMessage, System::String^ theStackTrace);
	Standard_RangeError(Macad::Occt::Standard_RangeError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_RangeError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_RangeError^ NewInstance();
	static Macad::Occt::Standard_RangeError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
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
	Standard_OutOfRange(System::String^ theMessage, System::String^ theStackTrace);
	Standard_OutOfRange(Macad::Occt::Standard_OutOfRange^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_OutOfRange^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_OutOfRange^ NewInstance();
	static Macad::Occt::Standard_OutOfRange^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
}; // class Standard_OutOfRange

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
	Standard_NoSuchObject(System::String^ theMessage, System::String^ theStackTrace);
	Standard_NoSuchObject(Macad::Occt::Standard_NoSuchObject^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_NoSuchObject^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_NoSuchObject^ NewInstance();
	static Macad::Occt::Standard_NoSuchObject^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
}; // class Standard_NoSuchObject

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
	Standard_TypeMismatch(System::String^ theMessage, System::String^ theStackTrace);
	Standard_TypeMismatch(Macad::Occt::Standard_TypeMismatch^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_TypeMismatch^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_TypeMismatch^ NewInstance();
	static Macad::Occt::Standard_TypeMismatch^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
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
	Standard_NullObject(System::String^ theMessage, System::String^ theStackTrace);
	Standard_NullObject(Macad::Occt::Standard_NullObject^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_NullObject^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_NullObject^ NewInstance();
	static Macad::Occt::Standard_NullObject^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
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
	Standard_NumericError(System::String^ theMessage, System::String^ theStackTrace);
	Standard_NumericError(Macad::Occt::Standard_NumericError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_NumericError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_NumericError^ NewInstance();
	static Macad::Occt::Standard_NumericError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
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
	Standard_NegativeValue(System::String^ theMessage, System::String^ theStackTrace);
	Standard_NegativeValue(Macad::Occt::Standard_NegativeValue^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_NegativeValue^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_NegativeValue^ NewInstance();
	static Macad::Occt::Standard_NegativeValue^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
}; // class Standard_NegativeValue

//---------------------------------------------------------------------
//  Class  Standard_Dump
//---------------------------------------------------------------------
/// <summary>
/// This interface has some tool methods for stream (in JSON format) processing.
/// </summary>
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
	/// <summary>
	/// Converts stream value to string value. The result is original stream value.
	/// </summary>
	/// <param name="theStream">
	/// source value
	/// </param>
	/// <returns>
	/// text presentation
	/// </returns>
	/* Method skipped due to unknown mapping: TCollection_AsciiString Text(stringstream theStream, ) */
	/// <summary>
	/// Converts stream value to string value. Improves the text presentation with the following cases:
	/// - for '{' append after '\n' and indent to the next value, increment current indent value
	/// - for '}' append '\n' and current indent before it, decrement indent value
	/// - for ',' append after '\n' and indent to the next value. If the current symbol is in massive container [], do nothing
	/// Covers result with opened and closed brackets on the top level, if it has no symbols there.
	/// </summary>
	/// <param name="theStream">
	/// source value
	/// </param>
	/// <param name="theIndent">
	/// count of ' ' symbols to apply hierarchical indent of the text values
	/// </param>
	/// <returns>
	/// text presentation
	/// </returns>
	/* Method skipped due to unknown mapping: TCollection_AsciiString FormatJson(stringstream theStream, Standard_Integer theIndent, ) */
	/// <summary>
	/// Converts stream value to string value. Improves the text presentation with the following cases:
	/// - for '{' append after '\n' and indent to the next value, increment current indent value
	/// - for '}' append '\n' and current indent before it, decrement indent value
	/// - for ',' append after '\n' and indent to the next value. If the current symbol is in massive container [], do nothing
	/// Covers result with opened and closed brackets on the top level, if it has no symbols there.
	/// </summary>
	/// <param name="theStream">
	/// source value
	/// </param>
	/// <param name="theIndent">
	/// count of ' ' symbols to apply hierarchical indent of the text values
	/// </param>
	/// <returns>
	/// text presentation
	/// </returns>
	/* Method skipped due to unknown mapping: TCollection_AsciiString FormatJson(stringstream theStream, Standard_Integer theIndent, ) */
	/// <summary>
	/// Converts stream into map of values.
	/// 
	/// The one level stream example: 'key_1: value_1, key_2: value_2'
	/// In output: values contain 'key_1: value_1' and 'key_2: value_2'.
	/// 
	/// The two level stream example: 'key_1: value_1, key_2: value_2, key_3: {sublevel_key_1: sublevel_value_1}, key_4: value_4'
	/// In output values contain 'key_1: value_1', 'key_2: value_2', 'key_3: {sublevel_key_1: sublevel_value_1}' and 'key_4: value_4'.
	/// The sublevel value might be processed later using the same method.
	/// 
	/// </summary>
	/// <param name="theStreamStr">
	/// stream value
	/// </param>
	/// <param name="theKeyToValues">
	/// [out] container of split values. It contains key to value and position of the value in the stream text
	/// </param>
	/* Method skipped due to unknown mapping: Standard_Boolean SplitJson(TCollection_AsciiString theStreamStr, NCollection_IndexedDataMap<TCollection_AsciiString, Standard_DumpValue, NCollection_DefaultHasher<TCollection_AsciiString>> theKeyToValues, ) */
	/// <summary>
	/// Returns container of indices in values, that has hierarchical value
	/// </summary>
	/* Method skipped due to unknown mapping: NCollection_List<int> HierarchicalValueIndices(NCollection_IndexedDataMap<TCollection_AsciiString, TCollection_AsciiString, NCollection_DefaultHasher<TCollection_AsciiString>> theValues, ) */
	/// <summary>
	/// Returns true if the value has bracket key
	/// </summary>
	static bool HasChildKey(Macad::Occt::TCollection_AsciiString^ theSourceValue);
	/// <summary>
	/// Returns key value for enum type
	/// </summary>
	static System::String^ JsonKeyToString(Macad::Occt::Standard_JsonKey theKey);
	/// <summary>
	/// Returns length value for enum type
	/// </summary>
	static int JsonKeyLength(Macad::Occt::Standard_JsonKey theKey);
	/// <summary>
	/// </summary>
	/// <param name="theOStream">
	/// source value
	/// </param>
	/* Method skipped due to unknown mapping: void AddValuesSeparator(ostream theOStream, ) */
	/// <summary>
	/// Returns default prefix added for each pointer info string if short presentation of pointer used
	/// </summary>
	static Macad::Occt::TCollection_AsciiString^ GetPointerPrefix();
	/// <summary>
	/// Convert handle pointer to address of the pointer. If the handle is NULL, the result is an empty string.
	/// </summary>
	/// <param name="thePointer">
	/// a pointer
	/// </param>
	/// <param name="isShortInfo">
	/// if true, all '0' symbols in the beginning of the pointer are skipped
	/// </param>
	/// <returns>
	/// the string value
	/// </returns>
	static Macad::Occt::TCollection_AsciiString^ GetPointerInfo(Macad::Occt::Standard_Transient^ thePointer, bool isShortInfo);
	/// <summary>
	/// Convert handle pointer to address of the pointer. If the handle is NULL, the result is an empty string.
	/// </summary>
	/// <param name="thePointer">
	/// a pointer
	/// </param>
	/// <param name="isShortInfo">
	/// if true, all '0' symbols in the beginning of the pointer are skipped
	/// </param>
	/// <returns>
	/// the string value
	/// </returns>
	static Macad::Occt::TCollection_AsciiString^ GetPointerInfo(Macad::Occt::Standard_Transient^ thePointer);
	/// <summary>
	/// Convert pointer to address of the pointer. If the handle is NULL, the result is an empty string.
	/// </summary>
	/// <param name="thePointer">
	/// a pointer
	/// </param>
	/// <param name="isShortInfo">
	/// if true, all '0' symbols in the beginning of the pointer are skipped
	/// </param>
	/// <returns>
	/// the string value
	/// </returns>
	static Macad::Occt::TCollection_AsciiString^ GetPointerInfo(System::IntPtr thePointer, bool isShortInfo);
	/// <summary>
	/// Convert pointer to address of the pointer. If the handle is NULL, the result is an empty string.
	/// </summary>
	/// <param name="thePointer">
	/// a pointer
	/// </param>
	/// <param name="isShortInfo">
	/// if true, all '0' symbols in the beginning of the pointer are skipped
	/// </param>
	/// <returns>
	/// the string value
	/// </returns>
	static Macad::Occt::TCollection_AsciiString^ GetPointerInfo(System::IntPtr thePointer);
	/// <summary>
	/// Append into output value: "Name": { Field }
	/// </summary>
	/// <param name="theOStream">
	/// [out] stream to be fill with values
	/// </param>
	/// <param name="theKey">
	/// a source value
	/// </param>
	/// <param name="theField">
	/// stream value
	/// </param>
	/* Method skipped due to unknown mapping: void DumpKeyToClass(ostream theOStream, TCollection_AsciiString theKey, TCollection_AsciiString theField, ) */
	/// <summary>
	/// Unite values in one value using template: "value_1", "value_2", ..., "value_n"
	/// </summary>
	/// <param name="theOStream">
	/// [out] stream to be fill with values
	/// </param>
	/// <param name="theCount">
	///   [in]  number of values
	/// </param>
	/* Method skipped due to unknown mapping: void DumpCharacterValues(ostream theOStream, int theCount, ) */
	/// <summary>
	/// Unite values in one value using template: value_1, value_2, ..., value_n
	/// </summary>
	/// <param name="theOStream">
	/// [out] stream to be fill with values
	/// </param>
	/// <param name="theCount">
	///   [in]  number of values
	/// </param>
	/* Method skipped due to unknown mapping: void DumpRealValues(ostream theOStream, int theCount, ) */
	/// <summary>
	/// Check whether the parameter name is equal to the name in the stream at position
	/// </summary>
	/// <param name="theSStream">
	///   [in]  stream with values
	/// </param>
	/// <param name="theName">
	///      [in]  stream key value
	/// </param>
	/// <param name="theStreamPos">
	/// [out] current position in the stream
	/// </param>
	static bool ProcessStreamName(Macad::Occt::TCollection_AsciiString^ theStreamStr, Macad::Occt::TCollection_AsciiString^ theName, int% theStreamPos);
	/// <summary>
	/// Check whether the field name is equal to the name in the stream at position
	/// </summary>
	/// <param name="theSStream">
	///   [in]  stream with values
	/// </param>
	/// <param name="theName">
	///      [in]  stream key field value
	/// </param>
	/// <param name="theStreamPos">
	/// [out] current position in the stream
	/// </param>
	static bool ProcessFieldName(Macad::Occt::TCollection_AsciiString^ theStreamStr, Macad::Occt::TCollection_AsciiString^ theName, int% theStreamPos);
	/// <summary>
	/// Unite values in one value using template: value_1, value_2, ..., value_n
	/// </summary>
	/// <param name="theSStream">
	///   [in]  stream with values
	/// </param>
	/// <param name="theStreamPos">
	/// [out] current position in the stream
	/// </param>
	/// <param name="theCount">
	///     [in]  number of values
	/// </param>
	static bool InitRealValues(Macad::Occt::TCollection_AsciiString^ theStreamStr, int% theStreamPos, int theCount);
	/// <summary>
	/// Returns real value
	/// </summary>
	/// <param name="theSStream">
	///   [in]  stream with values
	/// </param>
	/// <param name="theStreamPos">
	/// [out] current position in the stream
	/// </param>
	/// <param name="theValue">
	///     [out] stream value
	/// </param>
	static bool InitValue(Macad::Occt::TCollection_AsciiString^ theStreamStr, int% theStreamPos, Macad::Occt::TCollection_AsciiString^ theValue);
	/// <summary>
	/// Convert field name into dump text value, removes "&" and "my" prefixes
	/// An example, for field myValue, theName is Value, for &myCLass, the name is Class
	/// </summary>
	/// <param name="theField">
	/// a source value
	/// </param>
	static Macad::Occt::TCollection_AsciiString^ DumpFieldToName(Macad::Occt::TCollection_AsciiString^ theField);
}; // class Standard_Dump

//---------------------------------------------------------------------
//  Class  Standard_ConstructionError
//---------------------------------------------------------------------
public ref class Standard_ConstructionError sealed : public Macad::Occt::Standard_DomainError
{

#ifdef Include_Standard_ConstructionError_h
public:
	Include_Standard_ConstructionError_h
#endif

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
	Standard_ConstructionError(System::String^ theMessage, System::String^ theStackTrace);
	Standard_ConstructionError(Macad::Occt::Standard_ConstructionError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_ConstructionError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_ConstructionError^ NewInstance();
	static Macad::Occt::Standard_ConstructionError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
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
	Standard_AbortiveTransaction(System::String^ theMessage, System::String^ theStackTrace);
	Standard_AbortiveTransaction(Macad::Occt::Standard_AbortiveTransaction^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_AbortiveTransaction^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_AbortiveTransaction^ NewInstance();
	static Macad::Occt::Standard_AbortiveTransaction^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
}; // class Standard_AbortiveTransaction

//---------------------------------------------------------------------
//  Class  Standard_ArrayStreamBuffer
//---------------------------------------------------------------------
/// <summary>
/// Custom buffer object implementing STL interface std::streambuf for streamed reading from allocated memory block.
/// Implements minimal sub-set of methods for passing buffer to std::istream, including seek support.
/// 
/// This class can be used for creating a seekable input stream in cases,
/// when the source data does not satisfies Reader requirements (non-seekable stream, compressed data)
/// or represents an in-memory resource.
/// 
/// The memory itself is NOT managed by this class - it is up to the caller to ensure that passed memory pointer
/// is not released during Standard_ArrayStreamBuffer lifetime.
/// 
/// Usage example:
/// </summary>
/// @code
/// const char*  theBuffer;
/// const size_t theBufferLength;
/// Standard_ArrayStreamBuffer aStreamBuffer (theBuffer, theBufferLength);
/// std::istream aStream (&aStreamBuffer);
/// TopoDS_Shape aShape;
/// BRep_Builder aBuilder;
/// BRepTools::Read (aShape, aStream, aBuilder);
/// @endcode
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
	/// <summary>
	/// Main constructor.
	/// Passed pointer is stored as is (memory is NOT copied nor released with destructor).
	/// </summary>
	/// <param name="theBegin">
	/// pointer to the beginning of pre-allocated buffer
	/// </param>
	/// <param name="theSize">
	///  length of pre-allocated buffer
	/// </param>
	Standard_ArrayStreamBuffer(char theBegin, unsigned __int64 theSize);
	/// <summary>
	/// (Re)-initialize the stream.
	/// Passed pointer is stored as is (memory is NOT copied nor released with destructor).
	/// </summary>
	/// <param name="theBegin">
	/// pointer to the beginning of pre-allocated buffer
	/// </param>
	/// <param name="theSize">
	///  length of pre-allocated buffer
	/// </param>
	void Init(char theBegin, unsigned __int64 theSize);
	/// <summary>
	/// Read a bunch of bytes at once.
	/// </summary>
	/* Method skipped due to unknown mapping: long long int xsgetn(char thePtr, long long int theCount, ) */
	/* Method skipped due to unknown mapping: streampos pubseekoff(long long int _Off, int _Way, int _Mode, ) */
	/* Method skipped due to unknown mapping: streampos pubseekoff(long long int _Off, int _Way, int _Mode, ) */
	/* Method skipped due to unknown mapping: streampos pubseekoff(long long int _Off, unsigned int _Way, unsigned int _Mode, ) */
	/* Method skipped due to unknown mapping: streampos pubseekpos(streampos _Pos, int _Mode, ) */
	/* Method skipped due to unknown mapping: streampos pubseekpos(streampos _Pos, int _Mode, ) */
	/* Method skipped due to unknown mapping: streampos pubseekpos(streampos _Pos, unsigned int _Mode, ) */
	/* Method skipped due to unknown mapping: basic_streambuf<char, std::char_traits<char>> pubsetbuf(char _Buffer, long long int _Count, ) */
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
/// <summary>
/// This is boolean flag intended for communication between threads.
/// One thread sets this flag to TRUE to indicate some event happened
/// and another thread either waits this event or checks periodically its state to perform job.
/// 
/// This class provides interface similar to WinAPI Event objects.
/// </summary>
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
	/// <summary>
	/// Default constructor.
	/// </summary>
	/// <param name="theIsSet">
	/// Initial flag state
	/// </param>
	Standard_Condition(bool theIsSet);
	/// <summary>
	/// Set event into signaling state.
	/// </summary>
	void Set();
	/// <summary>
	/// Reset event (unset signaling state)
	/// </summary>
	void Reset();
	/// <summary>
	/// Wait for Event (infinity).
	/// </summary>
	void Wait();
	/// <summary>
	/// Wait for signal requested time.
	/// </summary>
	/// <param name="theTimeMilliseconds">
	/// wait limit in milliseconds
	/// </param>
	/// <returns>
	/// true if get event
	/// </returns>
	bool Wait(int theTimeMilliseconds);
	/// <summary>
	/// Do not wait for signal - just test it state.
	/// </summary>
	/// <returns>
	/// true if get event
	/// </returns>
	bool Check();
	/// <summary>
	/// Method perform two steps at-once - reset the event object
	/// and returns true if it was in signaling state.
	/// </summary>
	/// <returns>
	/// true if event object was in signaling state.
	/// </returns>
	bool CheckReset();
	/// <summary>
	/// Access native HANDLE to Event object.
	/// </summary>
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
	Standard_DivideByZero(System::String^ theMessage, System::String^ theStackTrace);
	Standard_DivideByZero(Macad::Occt::Standard_DivideByZero^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_DivideByZero^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_DivideByZero^ NewInstance();
	static Macad::Occt::Standard_DivideByZero^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
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
	/// <summary>
	/// build a GUID from an ascii string with the
	/// following format:
	/// Length : 36 char
	/// "00000000-0000-0000-0000-000000000000"
	/// </summary>
	Standard_GUID(System::String^ aGuid);
	Standard_GUID(int a32b, char16_t a16b1, char16_t a16b2, char16_t a16b3, unsigned char a8b1, unsigned char a8b2, unsigned char a8b3, unsigned char a8b4, unsigned char a8b5, unsigned char a8b6);
	/* Method skipped due to unknown mapping: void Standard_GUID(_GUID aGuid, ) */
	Standard_GUID(Macad::Occt::Standard_GUID^ aGuid);
	/* Method skipped due to unknown mapping: _GUID ToUUID() */
	/// <summary>
	/// translate the GUID into ascii string
	/// the aStrGuid is allocated by user.
	/// the guid have the following format:
	/// 
	/// "00000000-0000-0000-0000-000000000000"
	/// </summary>
	void ToCString(char aStrGuid);
	/// <summary>
	/// translate the GUID into unicode string
	/// the aStrGuid is allocated by user.
	/// the guid have the following format:
	/// 
	/// "00000000-0000-0000-0000-000000000000"
	/// </summary>
	void ToExtString(char16_t aStrGuid);
	bool IsSame(Macad::Occt::Standard_GUID^ uid);
	bool IsNotSame(Macad::Occt::Standard_GUID^ uid);
	void Assign(Macad::Occt::Standard_GUID^ uid);
	/* Method skipped due to unknown mapping: void Assign(_GUID uid, ) */
	/// <summary>
	/// Display the GUID with the following format:
	/// 
	/// "00000000-0000-0000-0000-000000000000"
	/// </summary>
	/* Method skipped due to unknown mapping: void ShallowDump(ostream aStream, ) */
	/// <summary>
	/// Check the format of a GUID string.
	/// It checks the size, the position of the '-' and the correct size of fields.
	/// </summary>
	static bool CheckGUIDFormat(System::String^ aGuid);
	/// <summary>
	/// Hash function for GUID.
	/// </summary>
	int Hash(int Upper);
	/// <summary>
	/// Computes a hash code for the given GUID of the Standard_Integer type, in the range [1, theUpperBound]
	/// </summary>
	/// <param name="theGUID">
	/// the GUID which hash code is to be computed
	/// </param>
	/// <param name="theUpperBound">
	/// the upper bound of the range a computing hash code must be within
	/// </param>
	/// <returns>
	/// a computed hash code, in the range [1, theUpperBound]
	/// </returns>
	static int HashCode(Macad::Occt::Standard_GUID^ theGUID, int theUpperBound);
	/// <summary>
	/// Returns True  when the two GUID are the same.
	/// </summary>
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
	Standard_ImmutableObject(System::String^ theMessage, System::String^ theStackTrace);
	Standard_ImmutableObject(Macad::Occt::Standard_ImmutableObject^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_ImmutableObject^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_ImmutableObject^ NewInstance();
	static Macad::Occt::Standard_ImmutableObject^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
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
	Standard_LicenseError(System::String^ theMessage, System::String^ theStackTrace);
	Standard_LicenseError(Macad::Occt::Standard_LicenseError^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_LicenseError^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_LicenseError^ NewInstance();
	static Macad::Occt::Standard_LicenseError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
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
	Standard_LicenseNotFound(System::String^ theMessage, System::String^ theStackTrace);
	Standard_LicenseNotFound(Macad::Occt::Standard_LicenseNotFound^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_LicenseNotFound^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_LicenseNotFound^ NewInstance();
	static Macad::Occt::Standard_LicenseNotFound^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
}; // class Standard_LicenseNotFound

//---------------------------------------------------------------------
//  Class  Standard_MMgrRoot
//---------------------------------------------------------------------
/// <summary>
/// /**
/// * Root class for Open CASCADE mmemory managers.
/// * Defines only abstract interface functions.
/// */
/// </summary>
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
	/// <summary>
	/// Allocate specified number of bytes.
	/// The actually allocated space should be rounded up to
	/// double word size (4 bytes), as this is expected by implementation
	/// of some classes in OCC (e.g. TCollection_AsciiString)
	/// </summary>
	System::IntPtr Allocate(size_t theSize);
	/// <summary>
	/// Reallocate previously allocated memory to contain at least theSize bytes.
	/// In case of success, new pointer is returned.
	/// </summary>
	System::IntPtr Reallocate(System::IntPtr thePtr, size_t theSize);
	/// <summary>
	/// Frees previously allocated memory at specified address.
	/// </summary>
	void Free(System::IntPtr thePtr);
	/// <summary>
	/// Purge internally cached unused memory blocks (if any)
	/// by releasing them to the operating system.
	/// Must return non-zero if some memory has been actually released,
	/// or zero otherwise.
	/// 
	/// If option isDestroyed is True, this means that memory
	/// manager is not expected to be used any more; note however
	/// that in general case it is still possible to have calls to that
	/// instance of memory manager after this (e.g. to free memory
	/// of static objects in OCC). Thus this option should
	/// command the memory manager to release any cached memory
	/// to the system and not cache any more, but still remain operable...
	/// 
	/// Default implementation does nothing and returns 0.
	/// </summary>
	int Purge(bool isDestroyed);
	/// <summary>
	/// Purge internally cached unused memory blocks (if any)
	/// by releasing them to the operating system.
	/// Must return non-zero if some memory has been actually released,
	/// or zero otherwise.
	/// 
	/// If option isDestroyed is True, this means that memory
	/// manager is not expected to be used any more; note however
	/// that in general case it is still possible to have calls to that
	/// instance of memory manager after this (e.g. to free memory
	/// of static objects in OCC). Thus this option should
	/// command the memory manager to release any cached memory
	/// to the system and not cache any more, but still remain operable...
	/// 
	/// Default implementation does nothing and returns 0.
	/// </summary>
	int Purge();
}; // class Standard_MMgrRoot

//---------------------------------------------------------------------
//  Class  Standard_MMgrRaw
//---------------------------------------------------------------------
/// <summary>
/// /**
/// * Implementation of raw OCC memory manager which uses standard C
/// * functions: malloc (or calloc), free and realloc
/// * without any optimization
/// */
/// </summary>
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
	/// <summary>
	/// Constructor; if aClear is True, the memory will be nullified
	/// upon allocation.
	/// </summary>
	Standard_MMgrRaw(bool aClear);
	Standard_MMgrRaw(Macad::Occt::Standard_MMgrRaw^ parameter1);
	/// <summary>
	/// Allocate aSize bytes
	/// </summary>
	System::IntPtr Allocate(size_t aSize);
	/// <summary>
	/// Reallocate aPtr to the size aSize.
	/// The new pointer is returned.
	/// </summary>
	System::IntPtr Reallocate(System::IntPtr thePtr, size_t theSize);
	/// <summary>
	/// Free allocated memory. The pointer is nullified.
	/// </summary>
	void Free(System::IntPtr thePtr);
}; // class Standard_MMgrRaw

//---------------------------------------------------------------------
//  Class  Standard_MMgrTBBalloc
//---------------------------------------------------------------------
/// <summary>
/// 
/// Implementation of OCC memory manager which uses Intel TBB
/// scalable allocator.
/// 
/// On configurations where TBB is not available standard RTL functions
/// malloc() / free() are used.
/// </summary>
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
	/// <summary>
	/// Constructor; if aClear is True, the memory will be nullified
	/// upon allocation.
	/// </summary>
	Standard_MMgrTBBalloc(bool aClear);
	Standard_MMgrTBBalloc(Macad::Occt::Standard_MMgrTBBalloc^ parameter1);
	/// <summary>
	/// Allocate aSize bytes
	/// </summary>
	System::IntPtr Allocate(size_t aSize);
	/// <summary>
	/// Reallocate aPtr to the size aSize.
	/// The new pointer is returned.
	/// </summary>
	System::IntPtr Reallocate(System::IntPtr thePtr, size_t theSize);
	/// <summary>
	/// Free allocated memory
	/// </summary>
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
	Standard_MultiplyDefined(System::String^ theMessage, System::String^ theStackTrace);
	Standard_MultiplyDefined(Macad::Occt::Standard_MultiplyDefined^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_MultiplyDefined^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_MultiplyDefined^ NewInstance();
	static Macad::Occt::Standard_MultiplyDefined^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
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
	Standard_NoMoreObject(System::String^ theMessage, System::String^ theStackTrace);
	Standard_NoMoreObject(Macad::Occt::Standard_NoMoreObject^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_NoMoreObject^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_NoMoreObject^ NewInstance();
	static Macad::Occt::Standard_NoMoreObject^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
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
	Standard_NotImplemented(System::String^ theMessage, System::String^ theStackTrace);
	Standard_NotImplemented(Macad::Occt::Standard_NotImplemented^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_NotImplemented^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_NotImplemented^ NewInstance();
	static Macad::Occt::Standard_NotImplemented^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
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
	Standard_NullValue(System::String^ theMessage, System::String^ theStackTrace);
	Standard_NullValue(Macad::Occt::Standard_NullValue^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_NullValue^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_NullValue^ NewInstance();
	static Macad::Occt::Standard_NullValue^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
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
	Standard_Overflow(System::String^ theMessage, System::String^ theStackTrace);
	Standard_Overflow(Macad::Occt::Standard_Overflow^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_Overflow^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_Overflow^ NewInstance();
	static Macad::Occt::Standard_Overflow^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
}; // class Standard_Overflow

//---------------------------------------------------------------------
//  Class  Standard_ReadBuffer
//---------------------------------------------------------------------
/// <summary>
/// Auxiliary tool for buffered reading from input stream within chunks of constant size.
/// </summary>
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
	/// <summary>
	/// Constructor with initialization.
	/// </summary>
	/* Method skipped due to unknown mapping: void Standard_ReadBuffer(long long int theDataLen, size_t theChunkLen, bool theIsPartialPayload, ) */
	/// <summary>
	/// Constructor with initialization.
	/// </summary>
	/* Method skipped due to unknown mapping: void Standard_ReadBuffer(long long int theDataLen, size_t theChunkLen, bool theIsPartialPayload, ) */
	Standard_ReadBuffer(Macad::Occt::Standard_ReadBuffer^ parameter1);
	/// <summary>
	/// Initialize the buffer.
	/// </summary>
	/// <param name="theDataLen">
	///  [in] the full length of input data to read from stream.
	/// </param>
	/// <param name="theChunkLen">
	/// [in] the length of single chunk to read
	/// </param>
	/// <param name="theIsPartialPayload">
	/// [in] when FALSE, theDataLen will be automatically aligned to the multiple of theChunkLen;
	/// when TRUE, last chunk will be read from stream exactly till theDataLen
	/// allowing portion of chunk to be uninitialized (useful for interleaved data)
	/// </param>
	/* Method skipped due to unknown mapping: void Init(long long int theDataLen, size_t theChunkLen, bool theIsPartialPayload, ) */
	/// <summary>
	/// Initialize the buffer.
	/// </summary>
	/// <param name="theDataLen">
	///  [in] the full length of input data to read from stream.
	/// </param>
	/// <param name="theChunkLen">
	/// [in] the length of single chunk to read
	/// </param>
	/// <param name="theIsPartialPayload">
	/// [in] when FALSE, theDataLen will be automatically aligned to the multiple of theChunkLen;
	/// when TRUE, last chunk will be read from stream exactly till theDataLen
	/// allowing portion of chunk to be uninitialized (useful for interleaved data)
	/// </param>
	/* Method skipped due to unknown mapping: void Init(long long int theDataLen, size_t theChunkLen, bool theIsPartialPayload, ) */
	/// <summary>
	/// Return TRUE if amount of read bytes is equal to requested length of entire data.
	/// </summary>
	bool IsDone();
}; // class Standard_ReadBuffer

//---------------------------------------------------------------------
//  Class  Standard_ReadLineBuffer
//---------------------------------------------------------------------
/// <summary>
/// Auxiliary tool for buffered reading of lines from input stream.
/// </summary>
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
	/// <summary>
	/// Constructor with initialization.
	/// </summary>
	/// <param name="theMaxBufferSizeBytes">
	/// the length of buffer to read (in bytes)
	/// </param>
	Standard_ReadLineBuffer(unsigned __int64 theMaxBufferSizeBytes);
	Standard_ReadLineBuffer(Macad::Occt::Standard_ReadLineBuffer^ parameter1);
	/// <summary>
	/// Clear buffer and cached values.
	/// </summary>
	void Clear();
	/// <summary>
	/// Returns TRUE when the Multiline Mode is on; FALSE by default.
	/// Multiline modes joins several lines in file having \ at the end of line:
	/// </summary>
	/// @code
	/// Line starts here, \ // line continuation character without this comment
	/// continues \         // line continuation character without this comment
	/// and ends.
	/// @endcode
	bool IsMultilineMode();
	/// <summary>
	/// Put gap space while merging lines within multiline syntax, so that the following sample:
	/// </summary>
	/// @code
	/// 1/2/3\      // line continuation character without this comment
	/// 4/5/6
	/// @endcode
	/// Will become "1/2/3 4/5/6" when flag is TRUE, and "1/2/35/5/6" otherwise.
	bool ToPutGapInMultiline();
	/// <summary>
	/// Sets or unsets the multi-line mode.
	/// </summary>
	/// <param name="theMultilineMode">
	/// [in] multiline mode flag
	/// </param>
	/// <param name="theToPutGap">
	///      [in] put gap space while connecting lines (no gap otherwise)
	/// </param>
	void SetMultilineMode(bool theMultilineMode, bool theToPutGap);
	/// <summary>
	/// Sets or unsets the multi-line mode.
	/// </summary>
	/// <param name="theMultilineMode">
	/// [in] multiline mode flag
	/// </param>
	/// <param name="theToPutGap">
	///      [in] put gap space while connecting lines (no gap otherwise)
	/// </param>
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
	Standard_TooManyUsers(System::String^ theMessage, System::String^ theStackTrace);
	Standard_TooManyUsers(Macad::Occt::Standard_TooManyUsers^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_TooManyUsers^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_TooManyUsers^ NewInstance();
	static Macad::Occt::Standard_TooManyUsers^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
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
	Standard_Underflow(System::String^ theMessage, System::String^ theStackTrace);
	Standard_Underflow(Macad::Occt::Standard_Underflow^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::Standard_Underflow^ NewInstance(System::String^ theMessage);
	static Macad::Occt::Standard_Underflow^ NewInstance();
	static Macad::Occt::Standard_Underflow^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
}; // class Standard_Underflow

}; // namespace Occt
}; // namespace Macad
