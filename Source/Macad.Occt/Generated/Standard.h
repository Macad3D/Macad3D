// Generated wrapper code for package Standard

#pragma once


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
    None = 0,
    OpenChild = 1,
    CloseChild = 2,
    OpenContainer = 3,
    CloseContainer = 4,
    Quote = 5,
    SeparatorKeyToValue = 6,
    SeparatorValueToValue = 7
}; // enum  class Standard_JsonKey

//---------------------------------------------------------------------
//  Enum  Standard_HandlerStatus
//---------------------------------------------------------------------
public enum class Standard_HandlerStatus
{
    HandlerVoid = 0,
    HandlerJumped = 1,
    HandlerProcessed = 2
}; // enum  class Standard_HandlerStatus

//---------------------------------------------------------------------
//  Class  Standard_DumpValue
//---------------------------------------------------------------------
/// <summary>
/// Type for storing a dump value with the stream position
/// </summary>
public ref class Standard_DumpValue sealed
    : public Macad::Occt::BaseClass<::Standard_DumpValue>
{

#ifdef Include_Standard_DumpValue_h
public:
    Include_Standard_DumpValue_h
#endif

public:
    Standard_DumpValue(::Standard_DumpValue* nativeInstance)
        : Macad::Occt::BaseClass<::Standard_DumpValue>( nativeInstance, true )
    {}

    Standard_DumpValue(::Standard_DumpValue& nativeInstance)
        : Macad::Occt::BaseClass<::Standard_DumpValue>( &nativeInstance, false )
    {}

    property ::Standard_DumpValue* NativeInstance
    {
        ::Standard_DumpValue* get()
        {
            return static_cast<::Standard_DumpValue*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// < position of the value first char in the whole stream
    /// </summary>
    property int myStartPosition {
        int get() {
            return ((::Standard_DumpValue*)_NativeInstance)->myStartPosition;
        }
        void set(int value) {
            ((::Standard_DumpValue*)_NativeInstance)->myStartPosition = value;
        }
    }

    Standard_DumpValue();
    Standard_DumpValue(Macad::Occt::TCollection_AsciiString^ theValue, int theStartPos);
}; // class Standard_DumpValue

//---------------------------------------------------------------------
//  Class  Standard_UUID
//---------------------------------------------------------------------
public ref class Standard_UUID sealed
    : public Macad::Occt::BaseClass<::Standard_UUID>
{

#ifdef Include_Standard_UUID_h
public:
    Include_Standard_UUID_h
#endif

public:
    Standard_UUID(::Standard_UUID* nativeInstance)
        : Macad::Occt::BaseClass<::Standard_UUID>( nativeInstance, true )
    {}

    Standard_UUID(::Standard_UUID& nativeInstance)
        : Macad::Occt::BaseClass<::Standard_UUID>( &nativeInstance, false )
    {}

    property ::Standard_UUID* NativeInstance
    {
        ::Standard_UUID* get()
        {
            return static_cast<::Standard_UUID*>(_NativeInstance);
        }
    }

public:
    property unsigned int Data1 {
        unsigned int get() {
            return ((::Standard_UUID*)_NativeInstance)->Data1;
        }
        void set(unsigned int value) {
            ((::Standard_UUID*)_NativeInstance)->Data1 = value;
        }
    }

    property short unsigned int Data2 {
        short unsigned int get() {
            return ((::Standard_UUID*)_NativeInstance)->Data2;
        }
        void set(short unsigned int value) {
            ((::Standard_UUID*)_NativeInstance)->Data2 = value;
        }
    }

    property short unsigned int Data3 {
        short unsigned int get() {
            return ((::Standard_UUID*)_NativeInstance)->Data3;
        }
        void set(short unsigned int value) {
            ((::Standard_UUID*)_NativeInstance)->Data3 = value;
        }
    }

    Standard_UUID();
}; // class Standard_UUID

//---------------------------------------------------------------------
//  Class  Standard
//---------------------------------------------------------------------
/// <summary>
/// The package Standard provides global memory allocator and other basic
/// services used by other OCCT components.
/// </summary>
public ref class Standard sealed
    : public Macad::Occt::BaseClass<::Standard>
{

#ifdef Include_Standard_h
public:
    Include_Standard_h
#endif

public:
    Standard(::Standard* nativeInstance)
        : Macad::Occt::BaseClass<::Standard>( nativeInstance, true )
    {}

    Standard(::Standard& nativeInstance)
        : Macad::Occt::BaseClass<::Standard>( &nativeInstance, false )
    {}

    property ::Standard* NativeInstance
    {
        ::Standard* get()
        {
            return static_cast<::Standard*>(_NativeInstance);
        }
    }

public:
    //---------------------------------------------------------------------
    //  Enum  AllocatorType
    //---------------------------------------------------------------------
    /// <summary>
    /// Enumiration of possible allocator types
    /// </summary>
    enum class AllocatorType
    {
        NATIVE = 0,
        OPT = 1,
        TBB = 2,
        JEMALLOC = 3
    }; // enum  class AllocatorType

    Standard();
    /// <summary>
    /// Returns default allocator type
    /// </summary>
    static Macad::Occt::Standard::AllocatorType GetAllocatorType();
    /// <summary>
    /// Allocates memory blocks
    /// theSize - bytes to  allocate
    /// </summary>
    static System::IntPtr Allocate(long long unsigned int theSize);
    /// <summary>
    /// Allocates memory blocks
    /// theSize - bytes to  allocate
    /// </summary>
    static System::IntPtr AllocateOptimal(long long unsigned int theSize);
    /// <summary>
    /// Deallocates memory blocks
    /// </summary>
    /// <param name="thePtr">
    /// - previously allocated memory block to be freed
    /// </param>
    static void Free(System::IntPtr thePtr);
    /* Method skipped due to unknown mapping: void Free(TI_0 thePtr, ) */
    /// <summary>
    /// Reallocates memory blocks
    /// theStorage - previously allocated memory block
    /// theNewSize - new size in bytes
    /// </summary>
    static System::IntPtr Reallocate(System::IntPtr theStorage, long long unsigned int theNewSize);
    /// <summary>
    /// Allocates aligned memory blocks.
    /// Should be used with CPU instructions which require specific alignment.
    /// For example: SSE requires 16 bytes, AVX requires 32 bytes.
    /// </summary>
    /// <param name="theSize">
    ///  bytes to allocate
    /// </param>
    /// <param name="theAlign">
    /// alignment in bytes
    /// </param>
    static System::IntPtr AllocateAligned(long long unsigned int theSize, long long unsigned int theAlign);
    /// <summary>
    /// Deallocates memory blocks
    /// </summary>
    /// <param name="thePtrAligned">
    /// the memory block previously allocated with AllocateAligned()
    /// </param>
    static void FreeAligned(System::IntPtr thePtrAligned);
    /// <summary>
    /// Deallocates the storage retained on the free list
    /// and clears the list.
    /// Returns non-zero if some memory has been actually freed.
    /// </summary>
    static int Purge();
    /// <summary>
    /// Appends backtrace to a message buffer.
    /// Stack information might be incomplete in case of stripped binaries.
    /// Implementation details:
    /// - Not implemented for Android, iOS, QNX and UWP platforms.
    /// - On non-Windows platform, this function is a wrapper to backtrace() system call.
    /// - On Windows (Win32) platform, the function loads DbgHelp.dll dynamically,
    /// and no stack will be provided if this or companion libraries (SymSrv.dll, SrcSrv.dll, etc.)
    /// will not be found; .pdb symbols should be provided on Windows platform to retrieve a
    /// meaningful stack; only x86_64 CPU architecture is currently implemented.
    /// </summary>
    /// <param name="in][out]">
    /// theBuffer   message buffer to extend
    /// </param>
    /// <param name="in]">
    /// theBufferSize  message buffer size
    /// </param>
    /// <param name="in]">
    /// theNbTraces  maximum number of stack traces
    /// </param>
    /// <param name="in]">
    /// theContext  optional platform-dependent frame context;
    /// in case of DbgHelp (Windows) should be a pointer to CONTEXT
    /// </param>
    /// <param name="in]">
    /// theNbTopSkip  number of traces on top of the stack to skip
    /// </param>
    /// <returns>
    /// TRUE on success
    /// </returns>
    static bool StackTrace(char% theBuffer, int theBufferSize, int theNbTraces, System::IntPtr theContext, int theNbTopSkip);
    /// <summary>
    /// Appends backtrace to a message buffer.
    /// Stack information might be incomplete in case of stripped binaries.
    /// Implementation details:
    /// - Not implemented for Android, iOS, QNX and UWP platforms.
    /// - On non-Windows platform, this function is a wrapper to backtrace() system call.
    /// - On Windows (Win32) platform, the function loads DbgHelp.dll dynamically,
    /// and no stack will be provided if this or companion libraries (SymSrv.dll, SrcSrv.dll, etc.)
    /// will not be found; .pdb symbols should be provided on Windows platform to retrieve a
    /// meaningful stack; only x86_64 CPU architecture is currently implemented.
    /// </summary>
    /// <param name="in][out]">
    /// theBuffer   message buffer to extend
    /// </param>
    /// <param name="in]">
    /// theBufferSize  message buffer size
    /// </param>
    /// <param name="in]">
    /// theNbTraces  maximum number of stack traces
    /// </param>
    /// <param name="in]">
    /// theContext  optional platform-dependent frame context;
    /// in case of DbgHelp (Windows) should be a pointer to CONTEXT
    /// </param>
    /// <param name="in]">
    /// theNbTopSkip  number of traces on top of the stack to skip
    /// </param>
    /// <returns>
    /// TRUE on success
    /// </returns>
    static bool StackTrace(char% theBuffer, int theBufferSize, int theNbTraces, System::IntPtr theContext);
    /// <summary>
    /// Appends backtrace to a message buffer.
    /// Stack information might be incomplete in case of stripped binaries.
    /// Implementation details:
    /// - Not implemented for Android, iOS, QNX and UWP platforms.
    /// - On non-Windows platform, this function is a wrapper to backtrace() system call.
    /// - On Windows (Win32) platform, the function loads DbgHelp.dll dynamically,
    /// and no stack will be provided if this or companion libraries (SymSrv.dll, SrcSrv.dll, etc.)
    /// will not be found; .pdb symbols should be provided on Windows platform to retrieve a
    /// meaningful stack; only x86_64 CPU architecture is currently implemented.
    /// </summary>
    /// <param name="in][out]">
    /// theBuffer   message buffer to extend
    /// </param>
    /// <param name="in]">
    /// theBufferSize  message buffer size
    /// </param>
    /// <param name="in]">
    /// theNbTraces  maximum number of stack traces
    /// </param>
    /// <param name="in]">
    /// theContext  optional platform-dependent frame context;
    /// in case of DbgHelp (Windows) should be a pointer to CONTEXT
    /// </param>
    /// <param name="in]">
    /// theNbTopSkip  number of traces on top of the stack to skip
    /// </param>
    /// <returns>
    /// TRUE on success
    /// </returns>
    static bool StackTrace(char% theBuffer, int theBufferSize, int theNbTraces);
}; // class Standard

//---------------------------------------------------------------------
//  Class  Standard_Failure
//---------------------------------------------------------------------
/// <summary>
/// Forms the root of the entire exception hierarchy.
/// </summary>
public ref class Standard_Failure
    : public Macad::Occt::Standard_Transient
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

public:
    /// <summary>
    /// Creates a status object of type "Failure".
    /// </summary>
    Standard_Failure();
    /// <summary>
    /// Creates a status object of type "Failure".
    /// </summary>
    /// <param name="in]">
    /// theDesc  exception description
    /// </param>
    Standard_Failure(System::String^ theDesc);
    /// <summary>
    /// Creates a status object of type "Failure" with stack trace.
    /// </summary>
    /// <param name="in]">
    /// theDesc  exception description
    /// </param>
    /// <param name="in]">
    /// theStackTrace  associated stack trace
    /// </param>
    Standard_Failure(System::String^ theDesc, System::String^ theStackTrace);
    /// <summary>
    /// Prints on the stream @p theStream the exception name followed by the error message.
    /// 
    /// Note: there is a short-cut @c operator<< (Standard_OStream&, Handle(Standard_Failure)&)
    /// </summary>
    void Print(System::IO::TextWriter^ theStream);
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
    static Macad::Occt::Standard_Failure^ CreateDowncasted(::Standard_Failure* instance);
}; // class Standard_Failure

//---------------------------------------------------------------------
//  Class  Standard_DomainError
//---------------------------------------------------------------------
public ref class Standard_DomainError
    : public Macad::Occt::Standard_Failure
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

public:
    Standard_DomainError();
    Standard_DomainError(System::String^ theMessage);
    Standard_DomainError(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Standard_DomainError^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Standard_DomainError^ NewInstance();
    static Macad::Occt::Standard_DomainError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Standard_DomainError^ CreateDowncasted(::Standard_DomainError* instance);
}; // class Standard_DomainError

//---------------------------------------------------------------------
//  Class  Standard_ConstructionError
//---------------------------------------------------------------------
public ref class Standard_ConstructionError sealed
    : public Macad::Occt::Standard_DomainError
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

public:
    Standard_ConstructionError();
    Standard_ConstructionError(System::String^ theMessage);
    Standard_ConstructionError(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Standard_ConstructionError^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Standard_ConstructionError^ NewInstance();
    static Macad::Occt::Standard_ConstructionError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Standard_ConstructionError^ CreateDowncasted(::Standard_ConstructionError* instance);
}; // class Standard_ConstructionError

//---------------------------------------------------------------------
//  Class  Standard_RangeError
//---------------------------------------------------------------------
public ref class Standard_RangeError
    : public Macad::Occt::Standard_DomainError
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

public:
    Standard_RangeError();
    Standard_RangeError(System::String^ theMessage);
    Standard_RangeError(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Standard_RangeError^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Standard_RangeError^ NewInstance();
    static Macad::Occt::Standard_RangeError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Standard_RangeError^ CreateDowncasted(::Standard_RangeError* instance);
}; // class Standard_RangeError

//---------------------------------------------------------------------
//  Class  Standard_OutOfRange
//---------------------------------------------------------------------
public ref class Standard_OutOfRange
    : public Macad::Occt::Standard_RangeError
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

public:
    Standard_OutOfRange();
    Standard_OutOfRange(System::String^ theMessage);
    Standard_OutOfRange(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Standard_OutOfRange^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Standard_OutOfRange^ NewInstance();
    static Macad::Occt::Standard_OutOfRange^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Standard_OutOfRange^ CreateDowncasted(::Standard_OutOfRange* instance);
}; // class Standard_OutOfRange

//---------------------------------------------------------------------
//  Class  Standard_DimensionError
//---------------------------------------------------------------------
public ref class Standard_DimensionError
    : public Macad::Occt::Standard_DomainError
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

public:
    Standard_DimensionError();
    Standard_DimensionError(System::String^ theMessage);
    Standard_DimensionError(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Standard_DimensionError^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Standard_DimensionError^ NewInstance();
    static Macad::Occt::Standard_DimensionError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Standard_DimensionError^ CreateDowncasted(::Standard_DimensionError* instance);
}; // class Standard_DimensionError

//---------------------------------------------------------------------
//  Class  Standard_DimensionMismatch
//---------------------------------------------------------------------
public ref class Standard_DimensionMismatch sealed
    : public Macad::Occt::Standard_DimensionError
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

public:
    Standard_DimensionMismatch();
    Standard_DimensionMismatch(System::String^ theMessage);
    Standard_DimensionMismatch(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Standard_DimensionMismatch^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Standard_DimensionMismatch^ NewInstance();
    static Macad::Occt::Standard_DimensionMismatch^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Standard_DimensionMismatch^ CreateDowncasted(::Standard_DimensionMismatch* instance);
}; // class Standard_DimensionMismatch

//---------------------------------------------------------------------
//  Class  Standard_ProgramError
//---------------------------------------------------------------------
public ref class Standard_ProgramError
    : public Macad::Occt::Standard_Failure
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

public:
    Standard_ProgramError();
    Standard_ProgramError(System::String^ theMessage);
    Standard_ProgramError(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Standard_ProgramError^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Standard_ProgramError^ NewInstance();
    static Macad::Occt::Standard_ProgramError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Standard_ProgramError^ CreateDowncasted(::Standard_ProgramError* instance);
}; // class Standard_ProgramError

//---------------------------------------------------------------------
//  Class  Standard_OutOfMemory
//---------------------------------------------------------------------
/// <summary>
/// Standard_OutOfMemory exception is defined explicitly and not by
/// macro DEFINE_STANDARD_EXCEPTION, to avoid necessity of dynamic
/// memory allocations during throwing and stack unwinding:
/// 
/// - method NewInstance() returns static instance (singleton)
/// - method Raise() raises copy of that singleton, resetting
/// its message string
/// - message string is stored as field, not allocated dynamically
/// (storable message length is limited by buffer size)
/// 
/// The reason is that in out-of-memory condition any memory allocation can
/// fail, thus use of operator new for allocation of new exception instance
/// is dangerous (can cause recursion until stack overflow, see #24836).
/// </summary>
public ref class Standard_OutOfMemory sealed
    : public Macad::Occt::Standard_ProgramError
{

#ifdef Include_Standard_OutOfMemory_h
public:
    Include_Standard_OutOfMemory_h
#endif

public:
    Standard_OutOfMemory(::Standard_OutOfMemory* nativeInstance)
        : Macad::Occt::Standard_ProgramError( nativeInstance )
    {}

    Standard_OutOfMemory(::Standard_OutOfMemory& nativeInstance)
        : Macad::Occt::Standard_ProgramError( nativeInstance )
    {}

    property ::Standard_OutOfMemory* NativeInstance
    {
        ::Standard_OutOfMemory* get()
        {
            return static_cast<::Standard_OutOfMemory*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructor is kept public for backward compatibility
    /// </summary>
    Standard_OutOfMemory(System::String^ theMessage);
    /// <summary>
    /// Constructor is kept public for backward compatibility
    /// </summary>
    Standard_OutOfMemory();
    /// <summary>
    /// Returns error message
    /// </summary>
    System::String^ GetMessageString();
    /// <summary>
    /// Sets error message
    /// </summary>
    void SetMessageString(System::String^ aMessage);
    /// <summary>
    /// Raises exception with specified message string
    /// </summary>
    static void Raise(System::String^ theMessage);
    /// <summary>
    /// Raises exception with specified message string
    /// </summary>
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    /// <summary>
    /// Returns global instance of exception
    /// </summary>
    static Macad::Occt::Standard_OutOfMemory^ NewInstance(System::String^ theMessage);
    /// <summary>
    /// Returns global instance of exception
    /// </summary>
    static Macad::Occt::Standard_OutOfMemory^ NewInstance();
    /// <summary>
    /// Returns global instance of exception
    /// </summary>
    static Macad::Occt::Standard_OutOfMemory^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Standard_OutOfMemory^ CreateDowncasted(::Standard_OutOfMemory* instance);
}; // class Standard_OutOfMemory

//---------------------------------------------------------------------
//  Class  Standard_NotImplemented
//---------------------------------------------------------------------
public ref class Standard_NotImplemented sealed
    : public Macad::Occt::Standard_ProgramError
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

public:
    Standard_NotImplemented();
    Standard_NotImplemented(System::String^ theMessage);
    Standard_NotImplemented(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Standard_NotImplemented^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Standard_NotImplemented^ NewInstance();
    static Macad::Occt::Standard_NotImplemented^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Standard_NotImplemented^ CreateDowncasted(::Standard_NotImplemented* instance);
}; // class Standard_NotImplemented

//---------------------------------------------------------------------
//  Class  Standard_Persistent
//---------------------------------------------------------------------
/// <summary>
/// Root of "persistent" classes, a legacy support of
/// object oriented databases, now outdated.
/// </summary>
public ref class Standard_Persistent sealed
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Standard_Persistent_h
public:
    Include_Standard_Persistent_h
#endif

public:
    Standard_Persistent(::Standard_Persistent* nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    Standard_Persistent(::Standard_Persistent& nativeInstance)
        : Macad::Occt::Standard_Transient( nativeInstance )
    {}

    property ::Standard_Persistent* NativeInstance
    {
        ::Standard_Persistent* get()
        {
            return static_cast<::Standard_Persistent*>(_NativeInstance);
        }
    }

public:
    property int TypeNum {
        int get() {
            return ((::Standard_Persistent*)_NativeInstance)->TypeNum();
        }
        void set(int value) {
            ((::Standard_Persistent*)_NativeInstance)->TypeNum() = value;
        }
    }

    Standard_Persistent();
    static Macad::Occt::Standard_Persistent^ CreateDowncasted(::Standard_Persistent* instance);
}; // class Standard_Persistent

//---------------------------------------------------------------------
//  Class  Standard_NoSuchObject
//---------------------------------------------------------------------
public ref class Standard_NoSuchObject sealed
    : public Macad::Occt::Standard_DomainError
{

#ifdef Include_Standard_NoSuchObject_h
public:
    Include_Standard_NoSuchObject_h
#endif

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

public:
    Standard_NoSuchObject();
    Standard_NoSuchObject(System::String^ theMessage);
    Standard_NoSuchObject(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Standard_NoSuchObject^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Standard_NoSuchObject^ NewInstance();
    static Macad::Occt::Standard_NoSuchObject^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Standard_NoSuchObject^ CreateDowncasted(::Standard_NoSuchObject* instance);
}; // class Standard_NoSuchObject

//---------------------------------------------------------------------
//  Class  Standard_TypeMismatch
//---------------------------------------------------------------------
public ref class Standard_TypeMismatch sealed
    : public Macad::Occt::Standard_DomainError
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

public:
    Standard_TypeMismatch();
    Standard_TypeMismatch(System::String^ theMessage);
    Standard_TypeMismatch(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Standard_TypeMismatch^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Standard_TypeMismatch^ NewInstance();
    static Macad::Occt::Standard_TypeMismatch^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Standard_TypeMismatch^ CreateDowncasted(::Standard_TypeMismatch* instance);
}; // class Standard_TypeMismatch

//---------------------------------------------------------------------
//  Class  Standard_Dump
//---------------------------------------------------------------------
/// <summary>
/// This interface has some tool methods for stream (in JSON format) processing.
/// </summary>
public ref class Standard_Dump sealed
    : public Macad::Occt::BaseClass<::Standard_Dump>
{

#ifdef Include_Standard_Dump_h
public:
    Include_Standard_Dump_h
#endif

public:
    Standard_Dump(::Standard_Dump* nativeInstance)
        : Macad::Occt::BaseClass<::Standard_Dump>( nativeInstance, true )
    {}

    Standard_Dump(::Standard_Dump& nativeInstance)
        : Macad::Occt::BaseClass<::Standard_Dump>( &nativeInstance, false )
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
    /* Method skipped due to unknown mapping: TCollection_AsciiString Text(stringstream theStream, ) */
    /* Method skipped due to unknown mapping: TCollection_AsciiString FormatJson(stringstream theStream, int theIndent, ) */
    /* Method skipped due to unknown mapping: TCollection_AsciiString FormatJson(stringstream theStream, int theIndent, ) */
    /* Method skipped due to unknown mapping: bool SplitJson(TCollection_AsciiString theStreamStr, NCollection_IndexedDataMap<TCollection_AsciiString, Standard_DumpValue> theKeyToValues, ) */
    /* Method skipped due to unknown mapping: TColStd_ListOfInteger HierarchicalValueIndices(TColStd_IndexedDataMapOfStringString theValues, ) */
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
    static void AddValuesSeparator(System::IO::TextWriter^ theOStream);
    /// <summary>
    /// Returns default prefix added for each pointer info string if short presentation of pointer
    /// used
    /// </summary>
    static Macad::Occt::TCollection_AsciiString^ GetPointerPrefix();
    /// <summary>
    /// Convert handle pointer to address of the pointer. If the handle is NULL, the result is an
    /// empty string.
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
    /// Convert handle pointer to address of the pointer. If the handle is NULL, the result is an
    /// empty string.
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
    /// Convert pointer to address of the pointer. If the handle is NULL, the result is an empty
    /// string.
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
    /// Convert pointer to address of the pointer. If the handle is NULL, the result is an empty
    /// string.
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
    /// <param name="out]">
    /// theOStream  stream to be fill with values
    /// </param>
    /// <param name="theKey">
    /// a source value
    /// </param>
    /// <param name="theField">
    /// stream value
    /// </param>
    static void DumpKeyToClass(System::IO::TextWriter^ theOStream, Macad::Occt::TCollection_AsciiString^ theKey, Macad::Occt::TCollection_AsciiString^ theField);
    /// <summary>
    /// Unite values in one value using template: "value_1", "value_2", ..., "value_n"
    /// </summary>
    /// <param name="out]">
    /// theOStream  stream to be fill with values
    /// </param>
    /// <param name="in]">
    /// theCount     number of values
    /// </param>
    static void DumpCharacterValues(System::IO::TextWriter^ theOStream, int theCount);
    /// <summary>
    /// Unite values in one value using template: value_1, value_2, ..., value_n
    /// </summary>
    /// <param name="out]">
    /// theOStream  stream to be fill with values
    /// </param>
    /// <param name="in]">
    /// theCount     number of values
    /// </param>
    static void DumpRealValues(System::IO::TextWriter^ theOStream, int theCount);
    /// <summary>
    /// Check whether the parameter name is equal to the name in the stream at position
    /// </summary>
    /// <param name="in]">
    ///  theStreamStr stream with values
    /// </param>
    /// <param name="in]">
    ///  theName      stream key value
    /// </param>
    /// <param name="out]">
    /// theStreamPos current position in the stream
    /// </param>
    static bool ProcessStreamName(Macad::Occt::TCollection_AsciiString^ theStreamStr, Macad::Occt::TCollection_AsciiString^ theName, int% theStreamPos);
    /// <summary>
    /// Check whether the field name is equal to the name in the stream at position
    /// </summary>
    /// <param name="in]">
    ///  theStreamStr stream with values
    /// </param>
    /// <param name="in]">
    ///  theName      stream key field value
    /// </param>
    /// <param name="out]">
    /// theStreamPos current position in the stream
    /// </param>
    static bool ProcessFieldName(Macad::Occt::TCollection_AsciiString^ theStreamStr, Macad::Occt::TCollection_AsciiString^ theName, int% theStreamPos);
    /// <summary>
    /// Unite values in one value using template: value_1, value_2, ..., value_n
    /// </summary>
    /// <param name="in]">
    ///  theStreamStr stream with values
    /// </param>
    /// <param name="out]">
    /// theStreamPos current position in the stream
    /// </param>
    /// <param name="in]">
    ///  theCount     number of values
    /// </param>
    static bool InitRealValues(Macad::Occt::TCollection_AsciiString^ theStreamStr, int% theStreamPos, int theCount);
    /// <summary>
    /// Returns real value
    /// </summary>
    /// <param name="in]">
    ///  theStreamStr stream with values
    /// </param>
    /// <param name="out]">
    /// theStreamPos current position in the stream
    /// </param>
    /// <param name="out]">
    /// theValue     stream value
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
//  Class  Standard_AbortiveTransaction
//---------------------------------------------------------------------
public ref class Standard_AbortiveTransaction sealed
    : public Macad::Occt::Standard_Failure
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

public:
    Standard_AbortiveTransaction();
    Standard_AbortiveTransaction(System::String^ theMessage);
    Standard_AbortiveTransaction(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Standard_AbortiveTransaction^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Standard_AbortiveTransaction^ NewInstance();
    static Macad::Occt::Standard_AbortiveTransaction^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Standard_AbortiveTransaction^ CreateDowncasted(::Standard_AbortiveTransaction* instance);
}; // class Standard_AbortiveTransaction

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
public ref class Standard_Condition sealed
    : public Macad::Occt::BaseClass<::Standard_Condition>
{

#ifdef Include_Standard_Condition_h
public:
    Include_Standard_Condition_h
#endif

public:
    Standard_Condition(::Standard_Condition* nativeInstance)
        : Macad::Occt::BaseClass<::Standard_Condition>( nativeInstance, true )
    {}

    Standard_Condition(::Standard_Condition& nativeInstance)
        : Macad::Occt::BaseClass<::Standard_Condition>( &nativeInstance, false )
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
//  Class  Standard_CStringHasher
//---------------------------------------------------------------------
public ref class Standard_CStringHasher sealed
    : public Macad::Occt::BaseClass<::Standard_CStringHasher>
{

#ifdef Include_Standard_CStringHasher_h
public:
    Include_Standard_CStringHasher_h
#endif

public:
    Standard_CStringHasher(::Standard_CStringHasher* nativeInstance)
        : Macad::Occt::BaseClass<::Standard_CStringHasher>( nativeInstance, true )
    {}

    Standard_CStringHasher(::Standard_CStringHasher& nativeInstance)
        : Macad::Occt::BaseClass<::Standard_CStringHasher>( &nativeInstance, false )
    {}

    property ::Standard_CStringHasher* NativeInstance
    {
        ::Standard_CStringHasher* get()
        {
            return static_cast<::Standard_CStringHasher*>(_NativeInstance);
        }
    }

public:
    Standard_CStringHasher();
}; // class Standard_CStringHasher

//---------------------------------------------------------------------
//  Class  Standard_NumericError
//---------------------------------------------------------------------
public ref class Standard_NumericError
    : public Macad::Occt::Standard_Failure
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

public:
    Standard_NumericError();
    Standard_NumericError(System::String^ theMessage);
    Standard_NumericError(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Standard_NumericError^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Standard_NumericError^ NewInstance();
    static Macad::Occt::Standard_NumericError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Standard_NumericError^ CreateDowncasted(::Standard_NumericError* instance);
}; // class Standard_NumericError

//---------------------------------------------------------------------
//  Class  Standard_DivideByZero
//---------------------------------------------------------------------
public ref class Standard_DivideByZero sealed
    : public Macad::Occt::Standard_NumericError
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

public:
    Standard_DivideByZero();
    Standard_DivideByZero(System::String^ theMessage);
    Standard_DivideByZero(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Standard_DivideByZero^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Standard_DivideByZero^ NewInstance();
    static Macad::Occt::Standard_DivideByZero^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Standard_DivideByZero^ CreateDowncasted(::Standard_DivideByZero* instance);
}; // class Standard_DivideByZero

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
public ref class Standard_ErrorHandler sealed
    : public Macad::Occt::BaseClass<::Standard_ErrorHandler>
{

#ifdef Include_Standard_ErrorHandler_h
public:
    Include_Standard_ErrorHandler_h
#endif

public:
    Standard_ErrorHandler(::Standard_ErrorHandler* nativeInstance)
        : Macad::Occt::BaseClass<::Standard_ErrorHandler>( nativeInstance, true )
    {}

    Standard_ErrorHandler(::Standard_ErrorHandler& nativeInstance)
        : Macad::Occt::BaseClass<::Standard_ErrorHandler>( &nativeInstance, false )
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
    /// Defines a base class for callback objects that can be registered
    /// in the OCC error handler (the class simulating C++ exceptions)
    /// so as to be correctly destroyed when error handler is activated.
    /// 
    /// Note that this is needed only when Open CASCADE is compiled with
    /// OCC_CONVERT_SIGNALS options (i.e. on UNIX/Linux).
    /// In that case, raising OCC exception and/or signal will not cause
    /// C++ stack unwinding and destruction of objects created in the stack.
    /// 
    /// This class is intended to protect critical objects and operations in
    /// the try {} catch {} block from being bypassed by OCC signal or exception.
    /// 
    /// Inherit your object from that class, implement DestroyCallback() function,
    /// and call Register/Unregister in critical points.
    /// 
    /// Note that you must ensure that your object has life span longer than
    /// that of the try {} block in which it calls Register().
    /// </summary>
    ref class Callback
        : public Macad::Occt::BaseClass<::Standard_ErrorHandler::Callback>
    {

#ifdef Include_Standard_ErrorHandler_Callback_h
    public:
        Include_Standard_ErrorHandler_Callback_h
#endif

    public:
        Callback(::Standard_ErrorHandler::Callback* nativeInstance)
            : Macad::Occt::BaseClass<::Standard_ErrorHandler::Callback>( nativeInstance, true )
        {}

        Callback(::Standard_ErrorHandler::Callback& nativeInstance)
            : Macad::Occt::BaseClass<::Standard_ErrorHandler::Callback>( &nativeInstance, false )
        {}

        property ::Standard_ErrorHandler::Callback* NativeInstance
        {
            ::Standard_ErrorHandler::Callback* get()
            {
                return static_cast<::Standard_ErrorHandler::Callback*>(_NativeInstance);
            }
        }

    public:
        void RegisterCallback();
        void UnregisterCallback();
        /// <summary>
        /// The callback function to perform necessary callback action.
        /// Called by the exception handler when it is being destroyed but
        /// still has this callback registered.
        /// </summary>
        void DestroyCallback();
    }; // class Callback

    /// <summary>
    /// Create a ErrorHandler (to be used with try{}catch(){}).
    /// It uses the "setjmp" and "longjmp" routines.
    /// </summary>
    Standard_ErrorHandler();
    /// <summary>
    /// Unlinks and checks if there is a raised exception.
    /// </summary>
    void Destroy();
    /// <summary>
    /// Removes handler from the handlers list
    /// </summary>
    void Unlink();
    /* Method skipped due to unknown mapping: bool Catches(Standard_Type aType, ) */
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
//  Class  Standard_GUID
//---------------------------------------------------------------------
public ref class Standard_GUID sealed
    : public Macad::Occt::BaseClass<::Standard_GUID>
{

#ifdef Include_Standard_GUID_h
public:
    Include_Standard_GUID_h
#endif

public:
    Standard_GUID(::Standard_GUID* nativeInstance)
        : Macad::Occt::BaseClass<::Standard_GUID>( nativeInstance, true )
    {}

    Standard_GUID(::Standard_GUID& nativeInstance)
        : Macad::Occt::BaseClass<::Standard_GUID>( &nativeInstance, false )
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
    /// build a GUID from an unicode string with the
    /// following format:
    /// 
    /// "00000000-0000-0000-0000-000000000000"
    /// </summary>
    Standard_GUID(System::String^ aGuid);
    /* Method skipped due to unknown mapping: void Standard_GUID(int a32b, char16_t a16b1, char16_t a16b2, char16_t a16b3, unsigned char a8b1, unsigned char a8b2, unsigned char a8b3, unsigned char a8b4, unsigned char a8b5, unsigned char a8b6, ) */
    Standard_GUID(Macad::Occt::Standard_UUID^ aGuid);
    Macad::Occt::Standard_UUID^ ToUUID();
    /// <summary>
    /// translate the GUID into ascii string
    /// the aStrGuid is allocated by user.
    /// the guid have the following format:
    /// 
    /// "00000000-0000-0000-0000-000000000000"
    /// </summary>
    void ToCString(char aStrGuid);
    /* Method skipped due to unknown mapping: void ToExtString(char16_t aStrGuid, ) */
    bool IsSame(Macad::Occt::Standard_GUID^ uid);
    bool IsNotSame(Macad::Occt::Standard_GUID^ uid);
    void Assign(Macad::Occt::Standard_GUID^ uid);
    void Assign(Macad::Occt::Standard_UUID^ uid);
    /// <summary>
    /// Display the GUID with the following format:
    /// 
    /// "00000000-0000-0000-0000-000000000000"
    /// </summary>
    void ShallowDump(System::IO::TextWriter^ aStream);
    /// <summary>
    /// Check the format of a GUID string.
    /// It checks the size, the position of the '-' and the correct size of fields.
    /// </summary>
    static bool CheckGUIDFormat(System::String^ aGuid);
    int GetHashCode() override;
}; // class Standard_GUID

//---------------------------------------------------------------------
//  Class  Standard_ImmutableObject
//---------------------------------------------------------------------
public ref class Standard_ImmutableObject sealed
    : public Macad::Occt::Standard_DomainError
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

public:
    Standard_ImmutableObject();
    Standard_ImmutableObject(System::String^ theMessage);
    Standard_ImmutableObject(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Standard_ImmutableObject^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Standard_ImmutableObject^ NewInstance();
    static Macad::Occt::Standard_ImmutableObject^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Standard_ImmutableObject^ CreateDowncasted(::Standard_ImmutableObject* instance);
}; // class Standard_ImmutableObject

//---------------------------------------------------------------------
//  Class  Standard_LicenseError
//---------------------------------------------------------------------
public ref class Standard_LicenseError
    : public Macad::Occt::Standard_Failure
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

public:
    Standard_LicenseError();
    Standard_LicenseError(System::String^ theMessage);
    Standard_LicenseError(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Standard_LicenseError^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Standard_LicenseError^ NewInstance();
    static Macad::Occt::Standard_LicenseError^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Standard_LicenseError^ CreateDowncasted(::Standard_LicenseError* instance);
}; // class Standard_LicenseError

//---------------------------------------------------------------------
//  Class  Standard_LicenseNotFound
//---------------------------------------------------------------------
public ref class Standard_LicenseNotFound sealed
    : public Macad::Occt::Standard_LicenseError
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

public:
    Standard_LicenseNotFound();
    Standard_LicenseNotFound(System::String^ theMessage);
    Standard_LicenseNotFound(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Standard_LicenseNotFound^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Standard_LicenseNotFound^ NewInstance();
    static Macad::Occt::Standard_LicenseNotFound^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Standard_LicenseNotFound^ CreateDowncasted(::Standard_LicenseNotFound* instance);
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
public ref class Standard_MMgrRoot
    : public Macad::Occt::BaseClass<::Standard_MMgrRoot>
{

#ifdef Include_Standard_MMgrRoot_h
public:
    Include_Standard_MMgrRoot_h
#endif

public:
    Standard_MMgrRoot(::Standard_MMgrRoot* nativeInstance)
        : Macad::Occt::BaseClass<::Standard_MMgrRoot>( nativeInstance, true )
    {}

    Standard_MMgrRoot(::Standard_MMgrRoot& nativeInstance)
        : Macad::Occt::BaseClass<::Standard_MMgrRoot>( &nativeInstance, false )
    {}

    property ::Standard_MMgrRoot* NativeInstance
    {
        ::Standard_MMgrRoot* get()
        {
            return static_cast<::Standard_MMgrRoot*>(_NativeInstance);
        }
    }

public:
    Standard_MMgrRoot();
    /// <summary>
    /// Allocate specified number of bytes.
    /// The actually allocated space should be rounded up to
    /// double word size (4 bytes), as this is expected by implementation
    /// of some classes in OCC (e.g. TCollection_AsciiString)
    /// </summary>
    System::IntPtr Allocate(long long unsigned int theSize);
    /// <summary>
    /// Reallocate previously allocated memory to contain at least theSize bytes.
    /// In case of success, new pointer is returned.
    /// </summary>
    System::IntPtr Reallocate(System::IntPtr thePtr, long long unsigned int theSize);
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
//  Class  Standard_MultiplyDefined
//---------------------------------------------------------------------
public ref class Standard_MultiplyDefined sealed
    : public Macad::Occt::Standard_DomainError
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

public:
    Standard_MultiplyDefined();
    Standard_MultiplyDefined(System::String^ theMessage);
    Standard_MultiplyDefined(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Standard_MultiplyDefined^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Standard_MultiplyDefined^ NewInstance();
    static Macad::Occt::Standard_MultiplyDefined^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Standard_MultiplyDefined^ CreateDowncasted(::Standard_MultiplyDefined* instance);
}; // class Standard_MultiplyDefined

//---------------------------------------------------------------------
//  Class  Standard_NegativeValue
//---------------------------------------------------------------------
public ref class Standard_NegativeValue sealed
    : public Macad::Occt::Standard_RangeError
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

public:
    Standard_NegativeValue();
    Standard_NegativeValue(System::String^ theMessage);
    Standard_NegativeValue(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Standard_NegativeValue^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Standard_NegativeValue^ NewInstance();
    static Macad::Occt::Standard_NegativeValue^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Standard_NegativeValue^ CreateDowncasted(::Standard_NegativeValue* instance);
}; // class Standard_NegativeValue

//---------------------------------------------------------------------
//  Class  Standard_NoMoreObject
//---------------------------------------------------------------------
public ref class Standard_NoMoreObject sealed
    : public Macad::Occt::Standard_DomainError
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

public:
    Standard_NoMoreObject();
    Standard_NoMoreObject(System::String^ theMessage);
    Standard_NoMoreObject(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Standard_NoMoreObject^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Standard_NoMoreObject^ NewInstance();
    static Macad::Occt::Standard_NoMoreObject^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Standard_NoMoreObject^ CreateDowncasted(::Standard_NoMoreObject* instance);
}; // class Standard_NoMoreObject

//---------------------------------------------------------------------
//  Class  Standard_NullObject
//---------------------------------------------------------------------
public ref class Standard_NullObject sealed
    : public Macad::Occt::Standard_DomainError
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

public:
    Standard_NullObject();
    Standard_NullObject(System::String^ theMessage);
    Standard_NullObject(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Standard_NullObject^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Standard_NullObject^ NewInstance();
    static Macad::Occt::Standard_NullObject^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Standard_NullObject^ CreateDowncasted(::Standard_NullObject* instance);
}; // class Standard_NullObject

//---------------------------------------------------------------------
//  Class  Standard_NullValue
//---------------------------------------------------------------------
public ref class Standard_NullValue sealed
    : public Macad::Occt::Standard_RangeError
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

public:
    Standard_NullValue();
    Standard_NullValue(System::String^ theMessage);
    Standard_NullValue(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Standard_NullValue^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Standard_NullValue^ NewInstance();
    static Macad::Occt::Standard_NullValue^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Standard_NullValue^ CreateDowncasted(::Standard_NullValue* instance);
}; // class Standard_NullValue

//---------------------------------------------------------------------
//  Class  Standard_Overflow
//---------------------------------------------------------------------
public ref class Standard_Overflow sealed
    : public Macad::Occt::Standard_NumericError
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

public:
    Standard_Overflow();
    Standard_Overflow(System::String^ theMessage);
    Standard_Overflow(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Standard_Overflow^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Standard_Overflow^ NewInstance();
    static Macad::Occt::Standard_Overflow^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Standard_Overflow^ CreateDowncasted(::Standard_Overflow* instance);
}; // class Standard_Overflow

//---------------------------------------------------------------------
//  Class  Standard_ReadBuffer
//---------------------------------------------------------------------
/// <summary>
/// Auxiliary tool for buffered reading from input stream within chunks of constant size.
/// </summary>
public ref class Standard_ReadBuffer sealed
    : public Macad::Occt::BaseClass<::Standard_ReadBuffer>
{

#ifdef Include_Standard_ReadBuffer_h
public:
    Include_Standard_ReadBuffer_h
#endif

public:
    Standard_ReadBuffer(::Standard_ReadBuffer* nativeInstance)
        : Macad::Occt::BaseClass<::Standard_ReadBuffer>( nativeInstance, true )
    {}

    Standard_ReadBuffer(::Standard_ReadBuffer& nativeInstance)
        : Macad::Occt::BaseClass<::Standard_ReadBuffer>( &nativeInstance, false )
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
    Standard_ReadBuffer(long long int theDataLen, long long unsigned int theChunkLen, bool theIsPartialPayload);
    /// <summary>
    /// Constructor with initialization.
    /// </summary>
    Standard_ReadBuffer(long long int theDataLen, long long unsigned int theChunkLen);
    /// <summary>
    /// Initialize the buffer.
    /// </summary>
    /// <param name="in]">
    /// theDataLen   the full length of input data to read from stream.
    /// </param>
    /// <param name="in]">
    /// theChunkLen  the length of single chunk to read
    /// </param>
    /// <param name="in]">
    /// theIsPartialPayload  when FALSE, theDataLen will be automatically aligned to the
    /// multiple of theChunkLen;
    /// when TRUE, last chunk will be read from stream exactly till
    /// theDataLen allowing portion of chunk to be uninitialized
    /// (useful for interleaved data)
    /// </param>
    void Init(long long int theDataLen, long long unsigned int theChunkLen, bool theIsPartialPayload);
    /// <summary>
    /// Initialize the buffer.
    /// </summary>
    /// <param name="in]">
    /// theDataLen   the full length of input data to read from stream.
    /// </param>
    /// <param name="in]">
    /// theChunkLen  the length of single chunk to read
    /// </param>
    /// <param name="in]">
    /// theIsPartialPayload  when FALSE, theDataLen will be automatically aligned to the
    /// multiple of theChunkLen;
    /// when TRUE, last chunk will be read from stream exactly till
    /// theDataLen allowing portion of chunk to be uninitialized
    /// (useful for interleaved data)
    /// </param>
    void Init(long long int theDataLen, long long unsigned int theChunkLen);
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
public ref class Standard_ReadLineBuffer sealed
    : public Macad::Occt::BaseClass<::Standard_ReadLineBuffer>
{

#ifdef Include_Standard_ReadLineBuffer_h
public:
    Include_Standard_ReadLineBuffer_h
#endif

public:
    Standard_ReadLineBuffer(::Standard_ReadLineBuffer* nativeInstance)
        : Macad::Occt::BaseClass<::Standard_ReadLineBuffer>( nativeInstance, true )
    {}

    Standard_ReadLineBuffer(::Standard_ReadLineBuffer& nativeInstance)
        : Macad::Occt::BaseClass<::Standard_ReadLineBuffer>( &nativeInstance, false )
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
    Standard_ReadLineBuffer(long long unsigned int theMaxBufferSizeBytes);
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
    /// <param name="in]">
    /// theMultilineMode  multiline mode flag
    /// </param>
    /// <param name="in]">
    /// theToPutGap       put gap space while connecting lines (no gap otherwise)
    /// </param>
    void SetMultilineMode(bool theMultilineMode, bool theToPutGap);
    /// <summary>
    /// Sets or unsets the multi-line mode.
    /// </summary>
    /// <param name="in]">
    /// theMultilineMode  multiline mode flag
    /// </param>
    /// <param name="in]">
    /// theToPutGap       put gap space while connecting lines (no gap otherwise)
    /// </param>
    void SetMultilineMode(bool theMultilineMode);
}; // class Standard_ReadLineBuffer

//---------------------------------------------------------------------
//  Class  Standard_Underflow
//---------------------------------------------------------------------
public ref class Standard_Underflow sealed
    : public Macad::Occt::Standard_NumericError
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

public:
    Standard_Underflow();
    Standard_Underflow(System::String^ theMessage);
    Standard_Underflow(System::String^ theMessage, System::String^ theStackTrace);
    static void Raise(System::String^ theMessage);
    static void Raise();
    /* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
    static Macad::Occt::Standard_Underflow^ NewInstance(System::String^ theMessage);
    static Macad::Occt::Standard_Underflow^ NewInstance();
    static Macad::Occt::Standard_Underflow^ NewInstance(System::String^ theMessage, System::String^ theStackTrace);
    static Macad::Occt::Standard_Underflow^ CreateDowncasted(::Standard_Underflow* instance);
}; // class Standard_Underflow

}; // namespace Occt
}; // namespace Macad
