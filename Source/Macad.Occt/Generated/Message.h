// Generated wrapper code for package Message

#pragma once

#include "Message.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  Message_Gravity
//---------------------------------------------------------------------
/// <summary>
/// Defines gravity level of messages
/// - Trace: low-level details on algorithm execution (usually for debug purposes)
/// - Info: informative message
/// - Warning: warning message
/// - Alarm: non-critical error
/// - Fail: fatal error
/// </summary>
public enum class Message_Gravity
{
	Message_Trace = 0,
	Message_Info = 1,
	Message_Warning = 2,
	Message_Alarm = 3,
	Message_Fail = 4
}; // enum  class Message_Gravity

//---------------------------------------------------------------------
//  Enum  Message_MetricType
//---------------------------------------------------------------------
/// <summary>
/// Specifies kind of report information to collect
/// </summary>
public enum class Message_MetricType
{
	Message_MetricType_None = 0,
	Message_MetricType_ThreadCPUUserTime = 1,
	Message_MetricType_ThreadCPUSystemTime = 2,
	Message_MetricType_ProcessCPUUserTime = 3,
	Message_MetricType_ProcessCPUSystemTime = 4,
	Message_MetricType_WallClock = 5,
	Message_MetricType_MemPrivate = 6,
	Message_MetricType_MemVirtual = 7,
	Message_MetricType_MemWorkingSet = 8,
	Message_MetricType_MemWorkingSetPeak = 9,
	Message_MetricType_MemSwapUsage = 10,
	Message_MetricType_MemSwapUsagePeak = 11,
	Message_MetricType_MemHeapUsage = 12
}; // enum  class Message_MetricType

//---------------------------------------------------------------------
//  Enum  Message_StatusType
//---------------------------------------------------------------------
/// <summary>
/// Definition of types of execution status supported by
/// the class Message_ExecStatus
/// </summary>
public enum class Message_StatusType
{
	Message_DONE = 256,
	Message_WARN = 512,
	Message_ALARM = 1024,
	Message_FAIL = 2048
}; // enum  class Message_StatusType

//---------------------------------------------------------------------
//  Enum  Message_Status
//---------------------------------------------------------------------
/// <summary>
/// Enumeration covering all execution statuses supported by the class
/// Message_ExecStatus: 32 statuses per each of 4 types (DONE, WARN, ALARM, FAIL)
/// </summary>
public enum class Message_Status
{
	Message_None = 0,
	Message_Done1 = 256,
	Message_Done2 = 257,
	Message_Done3 = 258,
	Message_Done4 = 259,
	Message_Done5 = 260,
	Message_Done6 = 261,
	Message_Done7 = 262,
	Message_Done8 = 263,
	Message_Done9 = 264,
	Message_Done10 = 265,
	Message_Done11 = 266,
	Message_Done12 = 267,
	Message_Done13 = 268,
	Message_Done14 = 269,
	Message_Done15 = 270,
	Message_Done16 = 271,
	Message_Done17 = 272,
	Message_Done18 = 273,
	Message_Done19 = 274,
	Message_Done20 = 275,
	Message_Done21 = 276,
	Message_Done22 = 277,
	Message_Done23 = 278,
	Message_Done24 = 279,
	Message_Done25 = 280,
	Message_Done26 = 281,
	Message_Done27 = 282,
	Message_Done28 = 283,
	Message_Done29 = 284,
	Message_Done30 = 285,
	Message_Done31 = 286,
	Message_Done32 = 287,
	Message_Warn1 = 512,
	Message_Warn2 = 513,
	Message_Warn3 = 514,
	Message_Warn4 = 515,
	Message_Warn5 = 516,
	Message_Warn6 = 517,
	Message_Warn7 = 518,
	Message_Warn8 = 519,
	Message_Warn9 = 520,
	Message_Warn10 = 521,
	Message_Warn11 = 522,
	Message_Warn12 = 523,
	Message_Warn13 = 524,
	Message_Warn14 = 525,
	Message_Warn15 = 526,
	Message_Warn16 = 527,
	Message_Warn17 = 528,
	Message_Warn18 = 529,
	Message_Warn19 = 530,
	Message_Warn20 = 531,
	Message_Warn21 = 532,
	Message_Warn22 = 533,
	Message_Warn23 = 534,
	Message_Warn24 = 535,
	Message_Warn25 = 536,
	Message_Warn26 = 537,
	Message_Warn27 = 538,
	Message_Warn28 = 539,
	Message_Warn29 = 540,
	Message_Warn30 = 541,
	Message_Warn31 = 542,
	Message_Warn32 = 543,
	Message_Alarm1 = 1024,
	Message_Alarm2 = 1025,
	Message_Alarm3 = 1026,
	Message_Alarm4 = 1027,
	Message_Alarm5 = 1028,
	Message_Alarm6 = 1029,
	Message_Alarm7 = 1030,
	Message_Alarm8 = 1031,
	Message_Alarm9 = 1032,
	Message_Alarm10 = 1033,
	Message_Alarm11 = 1034,
	Message_Alarm12 = 1035,
	Message_Alarm13 = 1036,
	Message_Alarm14 = 1037,
	Message_Alarm15 = 1038,
	Message_Alarm16 = 1039,
	Message_Alarm17 = 1040,
	Message_Alarm18 = 1041,
	Message_Alarm19 = 1042,
	Message_Alarm20 = 1043,
	Message_Alarm21 = 1044,
	Message_Alarm22 = 1045,
	Message_Alarm23 = 1046,
	Message_Alarm24 = 1047,
	Message_Alarm25 = 1048,
	Message_Alarm26 = 1049,
	Message_Alarm27 = 1050,
	Message_Alarm28 = 1051,
	Message_Alarm29 = 1052,
	Message_Alarm30 = 1053,
	Message_Alarm31 = 1054,
	Message_Alarm32 = 1055,
	Message_Fail1 = 2048,
	Message_Fail2 = 2049,
	Message_Fail3 = 2050,
	Message_Fail4 = 2051,
	Message_Fail5 = 2052,
	Message_Fail6 = 2053,
	Message_Fail7 = 2054,
	Message_Fail8 = 2055,
	Message_Fail9 = 2056,
	Message_Fail10 = 2057,
	Message_Fail11 = 2058,
	Message_Fail12 = 2059,
	Message_Fail13 = 2060,
	Message_Fail14 = 2061,
	Message_Fail15 = 2062,
	Message_Fail16 = 2063,
	Message_Fail17 = 2064,
	Message_Fail18 = 2065,
	Message_Fail19 = 2066,
	Message_Fail20 = 2067,
	Message_Fail21 = 2068,
	Message_Fail22 = 2069,
	Message_Fail23 = 2070,
	Message_Fail24 = 2071,
	Message_Fail25 = 2072,
	Message_Fail26 = 2073,
	Message_Fail27 = 2074,
	Message_Fail28 = 2075,
	Message_Fail29 = 2076,
	Message_Fail30 = 2077,
	Message_Fail31 = 2078,
	Message_Fail32 = 2079
}; // enum  class Message_Status

//---------------------------------------------------------------------
//  Enum  Message_ConsoleColor
//---------------------------------------------------------------------
/// <summary>
/// Color definition for console/terminal output (limited palette).
/// </summary>
public enum class Message_ConsoleColor
{
	Message_ConsoleColor_Default = 0,
	Message_ConsoleColor_Black = 1,
	Message_ConsoleColor_White = 2,
	Message_ConsoleColor_Red = 3,
	Message_ConsoleColor_Blue = 4,
	Message_ConsoleColor_Green = 5,
	Message_ConsoleColor_Yellow = 6,
	Message_ConsoleColor_Cyan = 7,
	Message_ConsoleColor_Magenta = 8
}; // enum  class Message_ConsoleColor

//---------------------------------------------------------------------
//  Class  Message_SequenceOfPrinters
//---------------------------------------------------------------------
public ref class Message_SequenceOfPrinters sealed : public BaseClass<::Message_SequenceOfPrinters>
{

#ifdef Include_Message_SequenceOfPrinters_h
public:
	Include_Message_SequenceOfPrinters_h
#endif

public:
	Message_SequenceOfPrinters(::Message_SequenceOfPrinters* nativeInstance)
		: BaseClass<::Message_SequenceOfPrinters>( nativeInstance, true )
	{}

	Message_SequenceOfPrinters(::Message_SequenceOfPrinters& nativeInstance)
		: BaseClass<::Message_SequenceOfPrinters>( &nativeInstance, false )
	{}

	property ::Message_SequenceOfPrinters* NativeInstance
	{
		::Message_SequenceOfPrinters* get()
		{
			return static_cast<::Message_SequenceOfPrinters*>(_NativeInstance);
		}
	}

public:
	Message_SequenceOfPrinters();
	Message_SequenceOfPrinters(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	Message_SequenceOfPrinters(Macad::Occt::Message_SequenceOfPrinters^ theOther);
	int Size();
	int Length();
	int Lower();
	int Upper();
	bool IsEmpty();
	void Reverse();
	void Exchange(int I, int J);
	/* Method skipped due to unknown mapping: void delNode(NCollection_SeqNode theNode, NCollection_BaseAllocator theAl, ) */
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::Message_SequenceOfPrinters^ Assign(Macad::Occt::Message_SequenceOfPrinters^ theOther);
	/* Method skipped due to unknown mapping: void Remove(Iterator thePosition, ) */
	void Remove(int theIndex);
	void Remove(int theFromIndex, int theToIndex);
	void Append(Macad::Occt::Message_Printer^ theItem);
	void Append(Macad::Occt::Message_SequenceOfPrinters^ theSeq);
	void Prepend(Macad::Occt::Message_Printer^ theItem);
	void Prepend(Macad::Occt::Message_SequenceOfPrinters^ theSeq);
	void InsertBefore(int theIndex, Macad::Occt::Message_Printer^ theItem);
	void InsertBefore(int theIndex, Macad::Occt::Message_SequenceOfPrinters^ theSeq);
	/* Method skipped due to unknown mapping: void InsertAfter(Iterator thePosition, Message_Printer theItem, ) */
	void InsertAfter(int theIndex, Macad::Occt::Message_SequenceOfPrinters^ theSeq);
	void InsertAfter(int theIndex, Macad::Occt::Message_Printer^ theItem);
	void Split(int theIndex, Macad::Occt::Message_SequenceOfPrinters^ theSeq);
	Macad::Occt::Message_Printer^ First();
	Macad::Occt::Message_Printer^ ChangeFirst();
	Macad::Occt::Message_Printer^ Last();
	Macad::Occt::Message_Printer^ ChangeLast();
	Macad::Occt::Message_Printer^ Value(int theIndex);
	Macad::Occt::Message_Printer^ ChangeValue(int theIndex);
	void SetValue(int theIndex, Macad::Occt::Message_Printer^ theItem);
}; // class Message_SequenceOfPrinters

//---------------------------------------------------------------------
//  Class  Message_ArrayOfMsg
//---------------------------------------------------------------------
public ref class Message_ArrayOfMsg sealed : public BaseClass<::Message_ArrayOfMsg>
{

#ifdef Include_Message_ArrayOfMsg_h
public:
	Include_Message_ArrayOfMsg_h
#endif

public:
	Message_ArrayOfMsg(::Message_ArrayOfMsg* nativeInstance)
		: BaseClass<::Message_ArrayOfMsg>( nativeInstance, true )
	{}

	Message_ArrayOfMsg(::Message_ArrayOfMsg& nativeInstance)
		: BaseClass<::Message_ArrayOfMsg>( &nativeInstance, false )
	{}

	property ::Message_ArrayOfMsg* NativeInstance
	{
		::Message_ArrayOfMsg* get()
		{
			return static_cast<::Message_ArrayOfMsg*>(_NativeInstance);
		}
	}

public:
	Message_ArrayOfMsg();
	Message_ArrayOfMsg(int theLower, int theUpper);
	Message_ArrayOfMsg(Macad::Occt::Message_ArrayOfMsg^ theOther);
	/* Method skipped due to unknown mapping: void Message_ArrayOfMsg(NCollection_Handle<Message_Msg> theBegin, Standard_Integer theLower, Standard_Integer theUpper, ) */
	/* Method skipped due to unknown mapping: void Init(NCollection_Handle<Message_Msg> theValue, ) */
	int Size();
	int Length();
	bool IsEmpty();
	int Lower();
	int Upper();
	bool IsDeletable();
	bool IsAllocated();
	Macad::Occt::Message_ArrayOfMsg^ Assign(Macad::Occt::Message_ArrayOfMsg^ theOther);
	Macad::Occt::Message_ArrayOfMsg^ Move(Macad::Occt::Message_ArrayOfMsg^ theOther);
	/* Method skipped due to unknown mapping: NCollection_Handle<Message_Msg> First() */
	/* Method skipped due to unknown mapping: NCollection_Handle<Message_Msg> ChangeFirst() */
	/* Method skipped due to unknown mapping: NCollection_Handle<Message_Msg> Last() */
	/* Method skipped due to unknown mapping: NCollection_Handle<Message_Msg> ChangeLast() */
	/* Method skipped due to unknown mapping: NCollection_Handle<Message_Msg> Value(Standard_Integer theIndex, ) */
	/* Method skipped due to unknown mapping: NCollection_Handle<Message_Msg> ChangeValue(Standard_Integer theIndex, ) */
	/* Method skipped due to unknown mapping: void SetValue(Standard_Integer theIndex, NCollection_Handle<Message_Msg> theItem, ) */
	void Resize(int theLower, int theUpper, bool theToCopyData);
}; // class Message_ArrayOfMsg

//---------------------------------------------------------------------
//  Class  Message_ListOfAlert
//---------------------------------------------------------------------
public ref class Message_ListOfAlert sealed : public BaseClass<::Message_ListOfAlert>
{

#ifdef Include_Message_ListOfAlert_h
public:
	Include_Message_ListOfAlert_h
#endif

public:
	Message_ListOfAlert(::Message_ListOfAlert* nativeInstance)
		: BaseClass<::Message_ListOfAlert>( nativeInstance, true )
	{}

	Message_ListOfAlert(::Message_ListOfAlert& nativeInstance)
		: BaseClass<::Message_ListOfAlert>( &nativeInstance, false )
	{}

	property ::Message_ListOfAlert* NativeInstance
	{
		::Message_ListOfAlert* get()
		{
			return static_cast<::Message_ListOfAlert*>(_NativeInstance);
		}
	}

public:
	Message_ListOfAlert();
	Message_ListOfAlert(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	Message_ListOfAlert(Macad::Occt::Message_ListOfAlert^ theOther);
	int Size();
	Macad::Occt::Message_ListOfAlert^ Assign(Macad::Occt::Message_ListOfAlert^ theOther);
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::Message_Alert^ First();
	Macad::Occt::Message_Alert^ Last();
	Macad::Occt::Message_Alert^ Append(Macad::Occt::Message_Alert^ theItem);
	/* Method skipped due to unknown mapping: void Append(Message_Alert theItem, Iterator theIter, ) */
	void Append(Macad::Occt::Message_ListOfAlert^ theOther);
	Macad::Occt::Message_Alert^ Prepend(Macad::Occt::Message_Alert^ theItem);
	void Prepend(Macad::Occt::Message_ListOfAlert^ theOther);
	void RemoveFirst();
	/* Method skipped due to unknown mapping: void Remove(Iterator theIter, ) */
	/* Method skipped due to unknown mapping: Message_Alert InsertBefore(Message_Alert theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertBefore(Message_ListOfAlert theOther, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: Message_Alert InsertAfter(Message_Alert theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Message_ListOfAlert theOther, Iterator theIter, ) */
	void Reverse();
}; // class Message_ListOfAlert

//---------------------------------------------------------------------
//  Class  Message_ListOfMsg
//---------------------------------------------------------------------
public ref class Message_ListOfMsg sealed : public BaseClass<::Message_ListOfMsg>
{

#ifdef Include_Message_ListOfMsg_h
public:
	Include_Message_ListOfMsg_h
#endif

public:
	Message_ListOfMsg(::Message_ListOfMsg* nativeInstance)
		: BaseClass<::Message_ListOfMsg>( nativeInstance, true )
	{}

	Message_ListOfMsg(::Message_ListOfMsg& nativeInstance)
		: BaseClass<::Message_ListOfMsg>( &nativeInstance, false )
	{}

	property ::Message_ListOfMsg* NativeInstance
	{
		::Message_ListOfMsg* get()
		{
			return static_cast<::Message_ListOfMsg*>(_NativeInstance);
		}
	}

public:
	Message_ListOfMsg();
	Message_ListOfMsg(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	Message_ListOfMsg(Macad::Occt::Message_ListOfMsg^ theOther);
	int Size();
	Macad::Occt::Message_ListOfMsg^ Assign(Macad::Occt::Message_ListOfMsg^ theOther);
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::Message_Msg^ First();
	Macad::Occt::Message_Msg^ Last();
	Macad::Occt::Message_Msg^ Append(Macad::Occt::Message_Msg^ theItem);
	/* Method skipped due to unknown mapping: void Append(Message_Msg theItem, Iterator theIter, ) */
	void Append(Macad::Occt::Message_ListOfMsg^ theOther);
	Macad::Occt::Message_Msg^ Prepend(Macad::Occt::Message_Msg^ theItem);
	void Prepend(Macad::Occt::Message_ListOfMsg^ theOther);
	void RemoveFirst();
	/* Method skipped due to unknown mapping: void Remove(Iterator theIter, ) */
	/* Method skipped due to unknown mapping: Message_Msg InsertBefore(Message_Msg theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertBefore(Message_ListOfMsg theOther, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: Message_Msg InsertAfter(Message_Msg theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(Message_ListOfMsg theOther, Iterator theIter, ) */
	void Reverse();
}; // class Message_ListOfMsg

//---------------------------------------------------------------------
//  Class  Message_Printer
//---------------------------------------------------------------------
/// <summary>
/// Abstract interface class defining printer as output context for text messages
/// 
/// The message, besides being text string, has associated gravity
/// level, which can be used by printer to decide either to process a message or ignore it.
/// </summary>
public ref class Message_Printer : public Macad::Occt::Standard_Transient
{

#ifdef Include_Message_Printer_h
public:
	Include_Message_Printer_h
#endif

protected:
	Message_Printer(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	Message_Printer(::Message_Printer* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Message_Printer(::Message_Printer& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Message_Printer* NativeInstance
	{
		::Message_Printer* get()
		{
			return static_cast<::Message_Printer*>(_NativeInstance);
		}
	}

	static Macad::Occt::Message_Printer^ CreateDowncasted(::Message_Printer* instance);

public:
	Message_Printer(Macad::Occt::Message_Printer^ parameter1);
	/// <summary>
	/// Return trace level used for filtering messages;
	/// messages with lover gravity will be ignored.
	/// </summary>
	Macad::Occt::Message_Gravity GetTraceLevel();
	/// <summary>
	/// Set trace level used for filtering messages.
	/// By default, trace level is Message_Info, so that all messages are output
	/// </summary>
	void SetTraceLevel(Macad::Occt::Message_Gravity theTraceLevel);
	/// <summary>
	/// Send a string message with specified trace level.
	/// The last Boolean argument is deprecated and unused.
	/// Default implementation redirects to send().
	/// </summary>
	void Send(Macad::Occt::TCollection_ExtendedString^ theString, Macad::Occt::Message_Gravity theGravity);
	/// <summary>
	/// Send a string message with specified trace level.
	/// The last Boolean argument is deprecated and unused.
	/// Default implementation redirects to send().
	/// </summary>
	void Send(System::String^ theString, Macad::Occt::Message_Gravity theGravity);
	/// <summary>
	/// Send a string message with specified trace level.
	/// The last Boolean argument is deprecated and unused.
	/// Default implementation redirects to send().
	/// </summary>
	void Send(Macad::Occt::TCollection_AsciiString^ theString, Macad::Occt::Message_Gravity theGravity);
	/// <summary>
	/// Send a string message with specified trace level.
	/// Stream is converted to string value.
	/// Default implementation calls first method Send().
	/// </summary>
	/* Method skipped due to unknown mapping: void SendStringStream(stringstream theStream, Message_Gravity theGravity, ) */
	/// <summary>
	/// Send a string message with specified trace level.
	/// The object is converted to string in format: <object kind> : <object pointer>.
	/// Default implementation calls first method Send().
	/// </summary>
	void SendObject(Macad::Occt::Standard_Transient^ theObject, Macad::Occt::Message_Gravity theGravity);
}; // class Message_Printer

//---------------------------------------------------------------------
//  Class  Message_Messenger
//---------------------------------------------------------------------
/// <summary>
/// Messenger is API class providing general-purpose interface for
/// libraries that may issue text messages without knowledge
/// of how these messages will be further processed.
/// 
/// The messenger contains a sequence of "printers" which can be
/// customized by the application, and dispatches every received
/// message to all the printers.
/// 
/// For convenience, a set of methods Send...() returning a string
/// stream buffer is defined for use of stream-like syntax with operator <<
/// 
/// Example:
/// ~~~~~
/// Messenger->SendFail() << " Unknown fail at line " << aLineNo << " in file " << aFile;
/// ~~~~~
/// 
/// The message is sent to messenger on destruction of the stream buffer,
/// call to Flush(), or passing manipulator std::ends, std::endl, or std::flush.
/// Empty messages are not sent except if manipulator is used.
/// </summary>
public ref class Message_Messenger sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Message_Messenger_h
public:
	Include_Message_Messenger_h
#endif

public:
	Message_Messenger(::Message_Messenger* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Message_Messenger(::Message_Messenger& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Message_Messenger* NativeInstance
	{
		::Message_Messenger* get()
		{
			return static_cast<::Message_Messenger*>(_NativeInstance);
		}
	}

	static Macad::Occt::Message_Messenger^ CreateDowncasted(::Message_Messenger* instance);

public:
	/// <summary>
	/// Empty constructor; initializes by single printer directed to std::cout.
	/// Note: the default messenger is not empty but directed to cout
	/// in order to protect against possibility to forget defining printers.
	/// If printing to cout is not needed, clear messenger by GetPrinters().Clear()
	/// </summary>
	Message_Messenger();
	/// <summary>
	/// Create messenger with single printer
	/// </summary>
	Message_Messenger(Macad::Occt::Message_Printer^ thePrinter);
	Message_Messenger(Macad::Occt::Message_Messenger^ parameter1);
	/// <summary>
	/// Add a printer to the messenger.
	/// The printer will be added only if it is not yet in the list.
	/// Returns True if printer has been added.
	/// </summary>
	bool AddPrinter(Macad::Occt::Message_Printer^ thePrinter);
	/// <summary>
	/// Removes specified printer from the messenger.
	/// Returns True if this printer has been found in the list
	/// and removed.
	/// </summary>
	bool RemovePrinter(Macad::Occt::Message_Printer^ thePrinter);
	/// <summary>
	/// Removes printers of specified type (including derived classes)
	/// from the messenger.
	/// Returns number of removed printers.
	/// </summary>
	/* Method skipped due to unknown mapping: Standard_Integer RemovePrinters(Standard_Type theType, ) */
	/// <summary>
	/// Returns current sequence of printers
	/// </summary>
	Macad::Occt::Message_SequenceOfPrinters^ Printers();
	/// <summary>
	/// Returns sequence of printers
	/// The sequence can be modified.
	/// </summary>
	Macad::Occt::Message_SequenceOfPrinters^ ChangePrinters();
	/// <summary>
	/// Dispatch a message to all the printers in the list.
	/// Three versions of string representations are accepted for
	/// convenience, by default all are converted to ExtendedString.
	/// </summary>
	void Send(System::String^ theString, Macad::Occt::Message_Gravity theGravity);
	/// <summary>
	/// Dispatch a message to all the printers in the list.
	/// Three versions of string representations are accepted for
	/// convenience, by default all are converted to ExtendedString.
	/// </summary>
	void Send(System::String^ theString);
	/// <summary>
	/// See above
	/// </summary>
	/* Method skipped due to unknown mapping: void Send(stringstream theStream, Message_Gravity theGravity, ) */
	/// <summary>
	/// See above
	/// </summary>
	/* Method skipped due to unknown mapping: void Send(stringstream theStream, Message_Gravity theGravity, ) */
	/// <summary>
	/// See above
	/// </summary>
	void Send(Macad::Occt::TCollection_AsciiString^ theString, Macad::Occt::Message_Gravity theGravity);
	/// <summary>
	/// See above
	/// </summary>
	void Send(Macad::Occt::TCollection_AsciiString^ theString);
	/// <summary>
	/// See above
	/// </summary>
	void Send(Macad::Occt::TCollection_ExtendedString^ theString, Macad::Occt::Message_Gravity theGravity);
	/// <summary>
	/// See above
	/// </summary>
	void Send(Macad::Occt::TCollection_ExtendedString^ theString);
	/// <summary>
	/// Create string buffer for message of specified type
	/// </summary>
	/* Method skipped due to unknown mapping: StreamBuffer Send(Message_Gravity theGravity, ) */
	/// <summary>
	/// See above
	/// </summary>
	void Send(Macad::Occt::Standard_Transient^ theObject, Macad::Occt::Message_Gravity theGravity);
	/// <summary>
	/// See above
	/// </summary>
	void Send(Macad::Occt::Standard_Transient^ theObject);
	/// <summary>
	/// Create string buffer for sending Fail message
	/// </summary>
	/* Method skipped due to unknown mapping: StreamBuffer SendFail() */
	/// <summary>
	/// Create string buffer for sending Alarm message
	/// </summary>
	/* Method skipped due to unknown mapping: StreamBuffer SendAlarm() */
	/// <summary>
	/// Create string buffer for sending Warning message
	/// </summary>
	/* Method skipped due to unknown mapping: StreamBuffer SendWarning() */
	/// <summary>
	/// Create string buffer for sending Info message
	/// </summary>
	/* Method skipped due to unknown mapping: StreamBuffer SendInfo() */
	/// <summary>
	/// Create string buffer for sending Trace message
	/// </summary>
	/* Method skipped due to unknown mapping: StreamBuffer SendTrace() */
	/// <summary>
	/// Short-cut to Send (theMessage, Message_Fail)
	/// </summary>
	void SendFail(Macad::Occt::TCollection_AsciiString^ theMessage);
	/// <summary>
	/// Short-cut to Send (theMessage, Message_Alarm)
	/// </summary>
	void SendAlarm(Macad::Occt::TCollection_AsciiString^ theMessage);
	/// <summary>
	/// Short-cut to Send (theMessage, Message_Warning)
	/// </summary>
	void SendWarning(Macad::Occt::TCollection_AsciiString^ theMessage);
	/// <summary>
	/// Short-cut to Send (theMessage, Message_Info)
	/// </summary>
	void SendInfo(Macad::Occt::TCollection_AsciiString^ theMessage);
	/// <summary>
	/// Short-cut to Send (theMessage, Message_Trace)
	/// </summary>
	void SendTrace(Macad::Occt::TCollection_AsciiString^ theMessage);
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Message_Messenger

//---------------------------------------------------------------------
//  Class  Message_Report
//---------------------------------------------------------------------
/// <summary>
/// Container for alert messages, sorted according to their gravity.
/// 
/// For each gravity level, alerts are stored in simple list.
/// If alert being added can be merged with another alert of the same
/// type already in the list, it is merged and not added to the list.
/// 
/// This class is intended to be used as follows:
/// 
/// - In the process of execution, algorithm fills report by alert objects
/// using methods AddAlert()
/// 
/// - The result can be queried for presence of particular alert using
/// methods HasAlert()
/// 
/// - The reports produced by nested or sequentially executed algorithms
/// can be collected in one using method Merge()
/// 
/// - The report can be shown to the user either as plain text with method
/// Dump() or in more advanced way, by iterating over lists returned by GetAlerts()
/// 
/// - Report can be cleared by methods Clear() (usually after reporting)
/// 
/// Message_PrinterToReport is a printer in Messenger to convert data sent to messenger into report
/// </summary>
public ref class Message_Report sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Message_Report_h
public:
	Include_Message_Report_h
#endif

public:
	Message_Report(::Message_Report* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Message_Report(::Message_Report& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Message_Report* NativeInstance
	{
		::Message_Report* get()
		{
			return static_cast<::Message_Report*>(_NativeInstance);
		}
	}

	static Macad::Occt::Message_Report^ CreateDowncasted(::Message_Report* instance);

public:
	/// <summary>
	/// Empty constructor
	/// </summary>
	Message_Report();
	/// <summary>
	/// Add alert with specified gravity.
	/// This method is thread-safe, i.e. alerts can be added from parallel threads safely.
	/// </summary>
	void AddAlert(Macad::Occt::Message_Gravity theGravity, Macad::Occt::Message_Alert^ theAlert);
	/// <summary>
	/// Returns list of collected alerts with specified gravity
	/// </summary>
	Macad::Occt::Message_ListOfAlert^ GetAlerts(Macad::Occt::Message_Gravity theGravity);
	/// <summary>
	/// Returns true if specific type of alert is recorded
	/// </summary>
	/* Method skipped due to unknown mapping: Standard_Boolean HasAlert(Standard_Type theType, ) */
	/// <summary>
	/// Returns true if specific type of alert is recorded with specified gravity
	/// </summary>
	/* Method skipped due to unknown mapping: Standard_Boolean HasAlert(Standard_Type theType, Message_Gravity theGravity, ) */
	/// <summary>
	/// Returns true if a report printer for the current report is registered in the messenger
	/// </summary>
	/// <param name="theMessenger">
	/// the messenger. If it's NULL, the default messenger is used
	/// </param>
	bool IsActiveInMessenger(Macad::Occt::Message_Messenger^ theMessenger);
	/// <summary>
	/// Returns true if a report printer for the current report is registered in the messenger
	/// </summary>
	/// <param name="theMessenger">
	/// the messenger. If it's NULL, the default messenger is used
	/// </param>
	bool IsActiveInMessenger();
	/// <summary>
	/// Creates an instance of Message_PrinterToReport with the current report and register it in messenger
	/// </summary>
	/// <param name="toActivate">
	/// if true, activated else deactivated
	/// </param>
	/// <param name="theMessenger">
	/// the messenger. If it's NULL, the default messenger is used
	/// </param>
	void ActivateInMessenger(bool toActivate, Macad::Occt::Message_Messenger^ theMessenger);
	/// <summary>
	/// Creates an instance of Message_PrinterToReport with the current report and register it in messenger
	/// </summary>
	/// <param name="toActivate">
	/// if true, activated else deactivated
	/// </param>
	/// <param name="theMessenger">
	/// the messenger. If it's NULL, the default messenger is used
	/// </param>
	void ActivateInMessenger(bool toActivate);
	/// <summary>
	/// Updates internal flag IsActiveInMessenger.
	/// It becomes true if messenger contains at least one instance of Message_PrinterToReport.
	/// </summary>
	/// <param name="theMessenger">
	/// the messenger. If it's NULL, the default messenger is used
	/// </param>
	void UpdateActiveInMessenger(Macad::Occt::Message_Messenger^ theMessenger);
	/// <summary>
	/// Updates internal flag IsActiveInMessenger.
	/// It becomes true if messenger contains at least one instance of Message_PrinterToReport.
	/// </summary>
	/// <param name="theMessenger">
	/// the messenger. If it's NULL, the default messenger is used
	/// </param>
	void UpdateActiveInMessenger();
	/// <summary>
	/// Add new level of alerts
	/// </summary>
	/// <param name="theLevel">
	/// a level
	/// </param>
	void AddLevel(Macad::Occt::Message_Level^ theLevel, Macad::Occt::TCollection_AsciiString^ theName);
	/// <summary>
	/// Remove level of alerts
	/// </summary>
	void RemoveLevel(Macad::Occt::Message_Level^ theLevel);
	/// <summary>
	/// Clears all collected alerts
	/// </summary>
	void Clear();
	/// <summary>
	/// Clears collected alerts with specified gravity
	/// </summary>
	void Clear(Macad::Occt::Message_Gravity theGravity);
	/// <summary>
	/// Clears collected alerts with specified type
	/// </summary>
	/* Method skipped due to unknown mapping: void Clear(Standard_Type theType, ) */
	/// <summary>
	/// Returns computed metrics when alerts are performed
	/// </summary>
	/* Method skipped due to unknown mapping: NCollection_IndexedMap<Message_MetricType, NCollection_DefaultHasher<Message_MetricType>> ActiveMetrics() */
	/// <summary>
	/// Sets metrics to compute when alerts are performed
	/// </summary>
	/// <param name="theMetrics">
	/// container of metrics
	/// </param>
	void SetActiveMetric(Macad::Occt::Message_MetricType theMetricType, bool theActivate);
	/// <summary>
	/// Removes all activated metrics
	/// </summary>
	void ClearMetrics();
	/// <summary>
	/// Returns maximum number of collecting alerts. If the limit is achieved,
	/// first alert is removed, the new alert is added in the container.
	/// </summary>
	/// <returns>
	/// the limit value
	/// </returns>
	int Limit();
	/// <summary>
	/// Sets maximum number of collecting alerts.
	/// </summary>
	/// <param name="theLimit">
	/// limit value
	/// </param>
	void SetLimit(int theLimit);
	/// <summary>
	/// Dumps all collected alerts to stream
	/// </summary>
	/* Method skipped due to unknown mapping: void Dump(ostream theOS, ) */
	/// <summary>
	/// Dumps collected alerts with specified gravity to stream
	/// </summary>
	/* Method skipped due to unknown mapping: void Dump(ostream theOS, Message_Gravity theGravity, ) */
	/// <summary>
	/// Sends all collected alerts to messenger.
	/// </summary>
	void SendMessages(Macad::Occt::Message_Messenger^ theMessenger);
	/// <summary>
	/// Dumps collected alerts with specified gravity to messenger.
	/// Default implementation creates Message_Msg object with a message
	/// key returned by alert, and sends it in the messenger.
	/// </summary>
	void SendMessages(Macad::Occt::Message_Messenger^ theMessenger, Macad::Occt::Message_Gravity theGravity);
	/// <summary>
	/// Merges data from theOther report into this
	/// </summary>
	void Merge(Macad::Occt::Message_Report^ theOther);
	/// <summary>
	/// Merges alerts with specified gravity from theOther report into this
	/// </summary>
	void Merge(Macad::Occt::Message_Report^ theOther, Macad::Occt::Message_Gravity theGravity);
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Message_Report

//---------------------------------------------------------------------
//  Class  Message
//---------------------------------------------------------------------
/// <summary>
/// Defines
/// - tools to work with messages
/// - basic tools intended for progress indication
/// </summary>
public ref class Message sealed : public BaseClass<::Message>
{

#ifdef Include_Message_h
public:
	Include_Message_h
#endif

public:
	Message(::Message* nativeInstance)
		: BaseClass<::Message>( nativeInstance, true )
	{}

	Message(::Message& nativeInstance)
		: BaseClass<::Message>( &nativeInstance, false )
	{}

	property ::Message* NativeInstance
	{
		::Message* get()
		{
			return static_cast<::Message*>(_NativeInstance);
		}
	}

public:
	Message();
	Message(Macad::Occt::Message^ parameter1);
	/// <summary>
	/// Defines default messenger for OCCT applications.
	/// This is global static instance of the messenger.
	/// By default, it contains single printer directed to std::cout.
	/// It can be customized according to the application needs.
	/// 
	/// The following syntax can be used to print messages:
	/// </summary>
	/// @begincode
	/// Message::DefaultMessenger()->Send ("My Warning", Message_Warning);
	/// Message::SendWarning ("My Warning"); // short-cut for Message_Warning
	/// Message::SendWarning() << "My Warning with " << theCounter << " arguments";
	/// Message::SendFail ("My Failure"); // short-cut for Message_Fail
	/// @endcode
	static Macad::Occt::Message_Messenger^ DefaultMessenger();
	/// <summary>
	/// </summary>
	/// @name Short-cuts to DefaultMessenger
	/* Method skipped due to unknown mapping: StreamBuffer Send(Message_Gravity theGravity, ) */
	static void Send(Macad::Occt::TCollection_AsciiString^ theMessage, Macad::Occt::Message_Gravity theGravity);
	/* Method skipped due to unknown mapping: StreamBuffer SendFail() */
	/* Method skipped due to unknown mapping: StreamBuffer SendAlarm() */
	/* Method skipped due to unknown mapping: StreamBuffer SendWarning() */
	/* Method skipped due to unknown mapping: StreamBuffer SendInfo() */
	/* Method skipped due to unknown mapping: StreamBuffer SendTrace() */
	static void SendFail(Macad::Occt::TCollection_AsciiString^ theMessage);
	static void SendAlarm(Macad::Occt::TCollection_AsciiString^ theMessage);
	static void SendWarning(Macad::Occt::TCollection_AsciiString^ theMessage);
	static void SendInfo(Macad::Occt::TCollection_AsciiString^ theMessage);
	static void SendTrace(Macad::Occt::TCollection_AsciiString^ theMessage);
	/// <summary>
	/// Returns the string filled with values of hours, minutes and seconds.
	/// Example:
	/// 1. (5, 12, 26.3345) returns "05h:12m:26.33s",
	/// 2. (0,  6, 34.496 ) returns "06m:34.50s",
	/// 3. (0,  0,  4.5   ) returns "4.50s"
	/// </summary>
	static Macad::Occt::TCollection_AsciiString^ FillTime(int Hour, int Minute, double Second);
	/// <summary>
	/// returns the only one instance of Report
	/// When theToCreate is true - automatically creates message report when not exist.
	/// </summary>
	static Macad::Occt::Message_Report^ DefaultReport(bool theToCreate);
	/// <summary>
	/// returns the only one instance of Report
	/// When theToCreate is true - automatically creates message report when not exist.
	/// </summary>
	static Macad::Occt::Message_Report^ DefaultReport();
	/// <summary>
	/// Determines the metric from the given string identifier.
	/// </summary>
	/// <param name="theString">
	/// string identifier
	/// </param>
	/// <param name="theType">
	/// detected type of metric
	/// </param>
	/// <returns>
	/// TRUE if string identifier is known
	/// </returns>
	static bool MetricFromString(System::String^ theString, Macad::Occt::Message_MetricType% theType);
	/// <summary>
	/// Returns the string name for a given metric type.
	/// </summary>
	/// <param name="theType">
	/// metric type
	/// </param>
	/// <returns>
	/// string identifier from the list of Message_MetricType
	/// </returns>
	static System::String^ MetricToString(Macad::Occt::Message_MetricType theType);
	/// <summary>
	/// Returns the metric type from the given string identifier.
	/// </summary>
	/// <param name="theString">
	/// string identifier
	/// </param>
	/// <returns>
	/// metric type or Message_MetricType_None if string identifier is invalid
	/// </returns>
	static Macad::Occt::Message_MetricType MetricFromString(System::String^ theString);
	/// <summary>
	/// Converts message metric to OSD memory info type.
	/// </summary>
	/// <param name="theMetric">
	/// [in] message metric
	/// </param>
	/// <param name="theMemInfo">
	/// [out] filled memory info type
	/// </param>
	/// <returns>
	/// true if converted
	/// </returns>
	/* Method skipped due to unknown mapping: Standard_Boolean ToOSDMetric(Message_MetricType theMetric, Counter theMemInfo, ) */
	/// <summary>
	/// Converts OSD memory info type to message metric.
	/// </summary>
	/// <param name="theMemInfo">
	/// [int] memory info type
	/// </param>
	/// <param name="theMetric">
	/// [out] filled message metric
	/// </param>
	/// <returns>
	/// true if converted
	/// </returns>
	/* Method skipped due to unknown mapping: Standard_Boolean ToMessageMetric(Counter theMemInfo, Message_MetricType theMetric, ) */
}; // class Message

//---------------------------------------------------------------------
//  Class  Message_Alert
//---------------------------------------------------------------------
/// <summary>
/// Base class of the hierarchy of classes describing various situations
/// occurring during execution of some algorithm or procedure.
/// 
/// Alert should provide unique text identifier that can be used to distinguish
/// particular type of alerts, e.g. to get text message string describing it.
/// See method GetMessageKey(); by default, dynamic type name is used.
/// 
/// Alert can contain some data. To avoid duplication of data, new alert
/// can be merged with another one of the same type. Method SupportsMerge()
/// should return true if merge is supported; method Merge() should do the
/// merge if possible and return true in that case and false otherwise.
/// </summary>
public ref class Message_Alert : public Macad::Occt::Standard_Transient
{

#ifdef Include_Message_Alert_h
public:
	Include_Message_Alert_h
#endif

protected:
	Message_Alert(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	Message_Alert(::Message_Alert* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Message_Alert(::Message_Alert& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Message_Alert* NativeInstance
	{
		::Message_Alert* get()
		{
			return static_cast<::Message_Alert*>(_NativeInstance);
		}
	}

	static Macad::Occt::Message_Alert^ CreateDowncasted(::Message_Alert* instance);

public:
	Message_Alert(Macad::Occt::Message_Alert^ parameter1);
	Message_Alert();
	/// <summary>
	/// Return a C string to be used as a key for generating text user
	/// messages describing this alert.
	/// The messages are generated with help of Message_Msg class, in
	/// Message_Report::Dump().
	/// Base implementation returns dynamic type name of the instance.
	/// </summary>
	System::String^ GetMessageKey();
	/// <summary>
	/// Return true if this type of alert can be merged with other
	/// of the same type to avoid duplication.
	/// Basis implementation returns true.
	/// </summary>
	bool SupportsMerge();
	/// <summary>
	/// If possible, merge data contained in this alert to theTarget.
	/// </summary>
	/// <returns>
	/// True if merged.
	/// Base implementation always returns true.
	/// </returns>
	bool Merge(Macad::Occt::Message_Alert^ theTarget);
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Message_Alert

//---------------------------------------------------------------------
//  Class  Message_Attribute
//---------------------------------------------------------------------
/// <summary>
/// Additional information of extended alert attribute
/// To provide other custom attribute container, it might be redefined.
/// </summary>
public ref class Message_Attribute : public Macad::Occt::Standard_Transient
{

#ifdef Include_Message_Attribute_h
public:
	Include_Message_Attribute_h
#endif

protected:
	Message_Attribute(InitMode init)
		: Macad::Occt::Standard_Transient( init )
	{}

public:
	Message_Attribute(::Message_Attribute* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Message_Attribute(::Message_Attribute& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Message_Attribute* NativeInstance
	{
		::Message_Attribute* get()
		{
			return static_cast<::Message_Attribute*>(_NativeInstance);
		}
	}

	static Macad::Occt::Message_Attribute^ CreateDowncasted(::Message_Attribute* instance);

public:
	/// <summary>
	/// Empty constructor
	/// </summary>
	Message_Attribute(Macad::Occt::TCollection_AsciiString^ theName);
	Message_Attribute(Macad::Occt::Message_Attribute^ parameter1);
	/// <summary>
	/// Return a C string to be used as a key for generating text user messages describing this alert.
	/// The messages are generated with help of Message_Msg class, in Message_Report::Dump().
	/// Base implementation returns dynamic type name of the instance.
	/// </summary>
	System::String^ GetMessageKey();
	/// <summary>
	/// Returns custom name of alert if it is set
	/// </summary>
	/// <returns>
	/// alert name
	/// </returns>
	Macad::Occt::TCollection_AsciiString^ GetName();
	/// <summary>
	/// Sets the custom name of alert
	/// </summary>
	/// <param name="theName">
	/// a name for the alert
	/// </param>
	void SetName(Macad::Occt::TCollection_AsciiString^ theName);
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Message_Attribute

//---------------------------------------------------------------------
//  Class  Message_CompositeAlerts
//---------------------------------------------------------------------
/// <summary>
/// Class providing container of alerts
/// </summary>
public ref class Message_CompositeAlerts sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Message_CompositeAlerts_h
public:
	Include_Message_CompositeAlerts_h
#endif

public:
	Message_CompositeAlerts(::Message_CompositeAlerts* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Message_CompositeAlerts(::Message_CompositeAlerts& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Message_CompositeAlerts* NativeInstance
	{
		::Message_CompositeAlerts* get()
		{
			return static_cast<::Message_CompositeAlerts*>(_NativeInstance);
		}
	}

	static Macad::Occt::Message_CompositeAlerts^ CreateDowncasted(::Message_CompositeAlerts* instance);

public:
	/// <summary>
	/// Empty constructor
	/// </summary>
	Message_CompositeAlerts();
	Message_CompositeAlerts(Macad::Occt::Message_CompositeAlerts^ parameter1);
	/// <summary>
	/// Returns list of collected alerts with specified gravity
	/// </summary>
	Macad::Occt::Message_ListOfAlert^ Alerts(Macad::Occt::Message_Gravity theGravity);
	/// <summary>
	/// Add alert with specified gravity. If the alert supports merge it will be merged.
	/// </summary>
	/// <param name="theGravity">
	/// an alert gravity
	/// </param>
	/// <param name="theAlert">
	/// an alert to be added as a child alert
	/// </param>
	/// <returns>
	/// true if the alert is added or merged
	/// </returns>
	bool AddAlert(Macad::Occt::Message_Gravity theGravity, Macad::Occt::Message_Alert^ theAlert);
	/// <summary>
	/// Removes alert with specified gravity.
	/// </summary>
	/// <param name="theGravity">
	/// an alert gravity
	/// </param>
	/// <param name="theAlert">
	/// an alert to be removed from the children
	/// </param>
	/// <returns>
	/// true if the alert is removed
	/// </returns>
	bool RemoveAlert(Macad::Occt::Message_Gravity theGravity, Macad::Occt::Message_Alert^ theAlert);
	/// <summary>
	/// Returns true if the alert belong the list of the child alerts.
	/// </summary>
	/// <param name="theAlert">
	/// an alert to be checked as a child alert
	/// </param>
	/// <returns>
	/// true if the alert is found in a container of children
	/// </returns>
	bool HasAlert(Macad::Occt::Message_Alert^ theAlert);
	/// <summary>
	/// Returns true if specific type of alert is recorded with specified gravity
	/// </summary>
	/// <param name="theType">
	/// an alert type
	/// </param>
	/// <param name="theGravity">
	/// an alert gravity
	/// </param>
	/// <returns>
	/// true if the alert is found in a container of children
	/// </returns>
	/* Method skipped due to unknown mapping: Standard_Boolean HasAlert(Standard_Type theType, Message_Gravity theGravity, ) */
	/// <summary>
	/// Clears all collected alerts
	/// </summary>
	void Clear();
	/// <summary>
	/// Clears collected alerts with specified gravity
	/// </summary>
	/// <param name="theGravity">
	/// an alert gravity
	/// </param>
	void Clear(Macad::Occt::Message_Gravity theGravity);
	/// <summary>
	/// Clears collected alerts with specified type
	/// </summary>
	/// <param name="theType">
	/// an alert type
	/// </param>
	/* Method skipped due to unknown mapping: void Clear(Standard_Type theType, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Message_CompositeAlerts

//---------------------------------------------------------------------
//  Class  Message_AlertExtended
//---------------------------------------------------------------------
/// <summary>
/// Inherited class of Message_Alert with some additional information.
/// It has Message_Attributes to provide the alert name, and other custom information
/// It has a container of composite alerts, if the alert might provide
/// sub-alerts collecting.
/// </summary>
public ref class Message_AlertExtended sealed : public Macad::Occt::Message_Alert
{

#ifdef Include_Message_AlertExtended_h
public:
	Include_Message_AlertExtended_h
#endif

public:
	Message_AlertExtended(::Message_AlertExtended* nativeInstance)
		: Macad::Occt::Message_Alert( nativeInstance )
	{}

	Message_AlertExtended(::Message_AlertExtended& nativeInstance)
		: Macad::Occt::Message_Alert( nativeInstance )
	{}

	property ::Message_AlertExtended* NativeInstance
	{
		::Message_AlertExtended* get()
		{
			return static_cast<::Message_AlertExtended*>(_NativeInstance);
		}
	}

	static Macad::Occt::Message_AlertExtended^ CreateDowncasted(::Message_AlertExtended* instance);

public:
	/// <summary>
	/// Empty constructor
	/// </summary>
	Message_AlertExtended();
	Message_AlertExtended(Macad::Occt::Message_AlertExtended^ parameter1);
	/// <summary>
	/// Creates new instance of the alert and put it into report with Message_Info gravity.
	/// It does nothing if such kind of gravity is not active in the report
	/// </summary>
	/// <param name="theReport">
	/// the message report where new alert is placed
	/// </param>
	/// <param name="theAttribute">
	/// container of additional values of the alert
	/// </param>
	/// <returns>
	/// created alert or NULL if Message_Info is not active in report
	/// </returns>
	static Macad::Occt::Message_Alert^ AddAlert(Macad::Occt::Message_Report^ theReport, Macad::Occt::Message_Attribute^ theAttribute, Macad::Occt::Message_Gravity theGravity);
	/// <summary>
	/// Return a C string to be used as a key for generating text user messages describing this alert.
	/// The messages are generated with help of Message_Msg class, in Message_Report::Dump().
	/// Base implementation returns dynamic type name of the instance.
	/// </summary>
	System::String^ GetMessageKey();
	/// <summary>
	/// Returns container of the alert attributes
	/// </summary>
	Macad::Occt::Message_Attribute^ Attribute();
	/// <summary>
	/// Sets container of the alert attributes
	/// </summary>
	/// <param name="theAttributes">
	/// an attribute values
	/// </param>
	void SetAttribute(Macad::Occt::Message_Attribute^ theAttribute);
	/// <summary>
	/// Returns class provided hierarchy of alerts if created or create if the parameter is true
	/// </summary>
	/// <param name="theToCreate">
	/// if composite alert has not been created for this alert, it should be created
	/// </param>
	/// <returns>
	/// instance or NULL
	/// </returns>
	Macad::Occt::Message_CompositeAlerts^ CompositeAlerts(bool theToCreate);
	/// <summary>
	/// Returns class provided hierarchy of alerts if created or create if the parameter is true
	/// </summary>
	/// <param name="theToCreate">
	/// if composite alert has not been created for this alert, it should be created
	/// </param>
	/// <returns>
	/// instance or NULL
	/// </returns>
	Macad::Occt::Message_CompositeAlerts^ CompositeAlerts();
	/// <summary>
	/// Return true if this type of alert can be merged with other
	/// of the same type to avoid duplication.
	/// Hierarchical alerts can not be merged
	/// Basis implementation returns true.
	/// </summary>
	bool SupportsMerge();
	/// <summary>
	/// If possible, merge data contained in this alert to theTarget.
	/// Base implementation always returns false.
	/// </summary>
	/// <returns>
	/// True if merged
	/// </returns>
	bool Merge(Macad::Occt::Message_Alert^ theTarget);
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Message_AlertExtended

//---------------------------------------------------------------------
//  Class  Message_ExecStatus
//---------------------------------------------------------------------
/// <summary>
/// /**
/// * Tiny class for extended handling of error / execution
/// * status of algorithm in universal way.
/// *
/// * It is in fact a set of integers represented as a collection of bit flags
/// * for each of four types of status; each status flag has its own symbolic
/// * name and can be set/tested individually.
/// *
/// * The flags are grouped in semantic groups:
/// * - No flags means nothing done
/// * - Done flags correspond to some operation succesffuly completed
/// * - Warning flags correspond to warning messages on some
/// *   potentially wrong situation, not harming algorithm execution
/// * - Alarm flags correspond to more severe warnings about incorrect
/// *   user data, while not breaking algorithm execution
/// * - Fail flags correspond to cases when algorithm failed to complete
/// */
/// </summary>
public ref class Message_ExecStatus sealed : public BaseClass<::Message_ExecStatus>
{

#ifdef Include_Message_ExecStatus_h
public:
	Include_Message_ExecStatus_h
#endif

public:
	Message_ExecStatus(::Message_ExecStatus* nativeInstance)
		: BaseClass<::Message_ExecStatus>( nativeInstance, true )
	{}

	Message_ExecStatus(::Message_ExecStatus& nativeInstance)
		: BaseClass<::Message_ExecStatus>( &nativeInstance, false )
	{}

	property ::Message_ExecStatus* NativeInstance
	{
		::Message_ExecStatus* get()
		{
			return static_cast<::Message_ExecStatus*>(_NativeInstance);
		}
	}

public:
	//---------------------------------------------------------------------
	//  Enum  StatusMask
	//---------------------------------------------------------------------
	/// <summary>
	/// Mask to separate bits indicating status type and index within the type
	/// </summary>
	enum class StatusMask
	{
		MType = 65280,
		MIndex = 255
	}; // enum  class StatusMask

	//---------------------------------------------------------------------
	//  Enum  StatusRange
	//---------------------------------------------------------------------
	/// <summary>
	/// Definitions of range of available statuses
	/// </summary>
	enum class StatusRange
	{
		FirstStatus = 1,
		StatusesPerType = 32,
		NbStatuses = 128,
		LastStatus = 129
	}; // enum  class StatusRange

	/// <summary>
	/// Create empty execution status
	/// </summary>
	Message_ExecStatus();
	/// <summary>
	/// Initialise the execution status
	/// </summary>
	Message_ExecStatus(Macad::Occt::Message_Status status);
	Message_ExecStatus(Macad::Occt::Message_ExecStatus^ parameter1);
	/// <summary>
	/// Sets a status flag
	/// </summary>
	void Set(Macad::Occt::Message_Status status);
	/// <summary>
	/// Check status for being set
	/// </summary>
	bool IsSet(Macad::Occt::Message_Status status);
	/// <summary>
	/// Clear one status
	/// </summary>
	void Clear(Macad::Occt::Message_Status status);
	/// <summary>
	/// Check if at least one status of each type is set
	/// </summary>
	bool IsDone();
	bool IsFail();
	bool IsWarn();
	bool IsAlarm();
	/// <summary>
	/// Set all statuses of each type
	/// </summary>
	void SetAllDone();
	void SetAllWarn();
	void SetAllAlarm();
	void SetAllFail();
	/// <summary>
	/// Clear all statuses of each type
	/// </summary>
	void ClearAllDone();
	void ClearAllWarn();
	void ClearAllAlarm();
	void ClearAllFail();
	/// <summary>
	/// Clear all statuses
	/// </summary>
	void Clear();
	/// <summary>
	/// Add statuses to me from theOther execution status
	/// </summary>
	void Add(Macad::Occt::Message_ExecStatus^ theOther);
	/// <summary>
	/// Leave only the statuses common with theOther
	/// </summary>
	void And(Macad::Occt::Message_ExecStatus^ theOther);
	/// <summary>
	/// Returns index of status in whole range [FirstStatus, LastStatus]
	/// </summary>
	static int StatusIndex(Macad::Occt::Message_Status status);
	/// <summary>
	/// Returns index of status inside type of status (Done or Warn or, etc)
	/// in range [1, StatusesPerType]
	/// </summary>
	static int LocalStatusIndex(Macad::Occt::Message_Status status);
	/// <summary>
	/// Returns status type (DONE, WARN, ALARM, or FAIL)
	/// </summary>
	static Macad::Occt::Message_StatusType TypeOfStatus(Macad::Occt::Message_Status status);
	/// <summary>
	/// Returns status with index theIndex in whole range [FirstStatus, LastStatus]
	/// </summary>
	static Macad::Occt::Message_Status StatusByIndex(int theIndex);
}; // class Message_ExecStatus

//---------------------------------------------------------------------
//  Class  Message_Msg
//---------------------------------------------------------------------
/// <summary>
/// This class provides a tool for constructing the parametrized message
/// basing on resources loaded by Message_MsgFile tool.
/// 
/// A Message is created from a keyword: this keyword identifies the
/// message in a message file that should be previously loaded by call
/// to Message_MsgFile::LoadFile().
/// 
/// The text of the message can contain placeholders for the parameters
/// which are to be filled by the proper values when the message
/// is prepared. Most of the format specifiers used in C can be used,
/// for instance, %s for string, %d for integer etc. In addition,
/// specifier %f is supported for double numbers (for compatibility
/// with previous versions).
/// 
/// User fills the parameter fields in the text of the message by
/// calling corresponding methods Arg() or operators .
/// 
/// The resulting message, filled with all parameters, can be obtained
/// by method Get(). If some parameters were not filled, the text
/// UNKNOWN is placed instead.
/// </summary>
public ref class Message_Msg sealed : public BaseClass<::Message_Msg>
{

#ifdef Include_Message_Msg_h
public:
	Include_Message_Msg_h
#endif

public:
	Message_Msg(::Message_Msg* nativeInstance)
		: BaseClass<::Message_Msg>( nativeInstance, true )
	{}

	Message_Msg(::Message_Msg& nativeInstance)
		: BaseClass<::Message_Msg>( &nativeInstance, false )
	{}

	property ::Message_Msg* NativeInstance
	{
		::Message_Msg* get()
		{
			return static_cast<::Message_Msg*>(_NativeInstance);
		}
	}

public:
	/// <summary>
	/// Empty constructor
	/// </summary>
	Message_Msg();
	/// <summary>
	/// Copy constructor
	/// </summary>
	Message_Msg(Macad::Occt::Message_Msg^ theMsg);
	/// <summary>
	/// Create a message using a corresponding entry in Message_MsgFile
	/// </summary>
	Message_Msg(System::String^ theKey);
	/// <summary>
	/// Create a message using a corresponding entry in Message_MsgFile
	/// </summary>
	Message_Msg(Macad::Occt::TCollection_ExtendedString^ theKey);
	/// <summary>
	/// Set a message body text -- can be used as alternative to
	/// using messages from resource file
	/// </summary>
	void Set(System::String^ theMsg);
	/// <summary>
	/// Set a message body text -- can be used as alternative to
	/// using messages from resource file
	/// </summary>
	void Set(Macad::Occt::TCollection_ExtendedString^ theMsg);
	/// <summary>
	/// Set a value for %..s conversion
	/// </summary>
	Macad::Occt::Message_Msg^ Arg(System::String^ theString);
	/// <summary>
	/// Set a value for %..s conversion
	/// </summary>
	Macad::Occt::Message_Msg^ Arg(Macad::Occt::TCollection_AsciiString^ theString);
	/// <summary>
	/// Set a value for %..s conversion
	/// </summary>
	Macad::Occt::Message_Msg^ Arg(Macad::Occt::TCollection_HAsciiString^ theString);
	/// <summary>
	/// Set a value for %..s conversion
	/// </summary>
	Macad::Occt::Message_Msg^ Arg(Macad::Occt::TCollection_ExtendedString^ theString);
	/// <summary>
	/// Set a value for %..s conversion
	/// </summary>
	Macad::Occt::Message_Msg^ Arg(Macad::Occt::TCollection_HExtendedString^ theString);
	/// <summary>
	/// Set a value for %..d, %..i, %..o, %..u, %..x or %..X conversion
	/// </summary>
	Macad::Occt::Message_Msg^ Arg(int theInt);
	/// <summary>
	/// Set a value for %..f, %..e, %..E, %..g or %..G conversion
	/// </summary>
	Macad::Occt::Message_Msg^ Arg(double theReal);
	/// <summary>
	/// Returns the original message text
	/// </summary>
	Macad::Occt::TCollection_ExtendedString^ Original();
	/// <summary>
	/// Returns current state of the message text with
	/// parameters to the moment
	/// </summary>
	Macad::Occt::TCollection_ExtendedString^ Value();
	/// <summary>
	/// Tells if Value differs from Original
	/// </summary>
	bool IsEdited();
	/// <summary>
	/// Return the resulting message string with all parameters
	/// filled. If some parameters were not yet filled by calls
	/// to methods Arg (or <<), these parameters are filled by
	/// the word UNKNOWN
	/// </summary>
	Macad::Occt::TCollection_ExtendedString^ Get();
}; // class Message_Msg

//---------------------------------------------------------------------
//  Class  Message_Algorithm
//---------------------------------------------------------------------
/// <summary>
/// Class Message_Algorithm is intended to be the base class for
/// classes implementing algorithms or any operations that need
/// to provide extended information on its execution to the
/// caller / user.
/// 
/// It provides generic mechanism for management of the execution
/// status, collection and output of messages.
/// 
/// The algorithm uses methods SetStatus() to set an execution status.
/// It is possible to associate a status with a number or a string
/// (second argument of SetStatus() methods) to indicate precisely
/// the item (object, element etc.) in the input data which caused
/// the problem.
/// 
/// Each execution status generated by the algorithm has associated
/// text message that should be defined in the resource file loaded
/// with call to Message_MsgFile::LoadFile().
/// 
/// The messages corresponding to the statuses generated during the
/// algorithm execution are output to Message_Messenger using
/// methods SendMessages(). If status have associated numbers
/// or strings, they are included in the message body in place of
/// "%s" placeholder which should be present in the message text.
/// 
/// The name of the message text in the resource file is constructed
/// from name of the class and name of the status, separated by dot,
/// for instance:
/// 
/// .TObj_CheckModel.Alarm2
/// Error: Some objects (%s) have references to dead object(s)
/// 
/// If message for the status is not found with prefix of
/// the current class type, the same message is searched for the base
/// class(es) recursively.
/// 
/// Message can be set explicitly for the status; in this case the
/// above procedure is not used and supplied message is used as is.
/// 
/// The messages are output to the messenger, stored in the field;
/// though messenger can be changed, it is guaranteed to be non-null.
/// By default, Message::DefaultMessenger() is used.
/// </summary>
public ref class Message_Algorithm sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_Message_Algorithm_h
public:
	Include_Message_Algorithm_h
#endif

public:
	Message_Algorithm(::Message_Algorithm* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	Message_Algorithm(::Message_Algorithm& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::Message_Algorithm* NativeInstance
	{
		::Message_Algorithm* get()
		{
			return static_cast<::Message_Algorithm*>(_NativeInstance);
		}
	}

	static Macad::Occt::Message_Algorithm^ CreateDowncasted(::Message_Algorithm* instance);

public:
	/// <summary>
	/// Empty constructor
	/// </summary>
	Message_Algorithm();
	Message_Algorithm(Macad::Occt::Message_Algorithm^ parameter1);
	/// <summary>
	/// Sets status with no parameter
	/// </summary>
	void SetStatus(Macad::Occt::Message_Status% theStat);
	/// <summary>
	/// Sets status with integer parameter
	/// </summary>
	void SetStatus(Macad::Occt::Message_Status% theStat, int theInt);
	/// <summary>
	/// Sets status with string parameter.
	/// If noRepetitions is True, the parameter will be added only
	/// if it has not been yet recorded for the same status flag
	/// </summary>
	void SetStatus(Macad::Occt::Message_Status% theStat, System::String^ theStr, bool noRepetitions);
	/// <summary>
	/// Sets status with string parameter.
	/// If noRepetitions is True, the parameter will be added only
	/// if it has not been yet recorded for the same status flag
	/// </summary>
	void SetStatus(Macad::Occt::Message_Status% theStat, System::String^ theStr);
	/// <summary>
	/// Sets status with string parameter
	/// If noRepetitions is True, the parameter will be added only
	/// if it has not been yet recorded for the same status flag
	/// </summary>
	void SetStatus(Macad::Occt::Message_Status% theStat, Macad::Occt::TCollection_AsciiString^ theStr, bool noRepetitions);
	/// <summary>
	/// Sets status with string parameter
	/// If noRepetitions is True, the parameter will be added only
	/// if it has not been yet recorded for the same status flag
	/// </summary>
	void SetStatus(Macad::Occt::Message_Status% theStat, Macad::Occt::TCollection_AsciiString^ theStr);
	/// <summary>
	/// Sets status with string parameter
	/// If noRepetitions is True, the parameter will be added only
	/// if it has not been yet recorded for the same status flag
	/// </summary>
	void SetStatus(Macad::Occt::Message_Status% theStat, Macad::Occt::TCollection_HAsciiString^ theStr, bool noRepetitions);
	/// <summary>
	/// Sets status with string parameter
	/// If noRepetitions is True, the parameter will be added only
	/// if it has not been yet recorded for the same status flag
	/// </summary>
	void SetStatus(Macad::Occt::Message_Status% theStat, Macad::Occt::TCollection_HAsciiString^ theStr);
	/// <summary>
	/// Sets status with string parameter
	/// If noRepetitions is True, the parameter will be added only
	/// if it has not been yet recorded for the same status flag
	/// </summary>
	void SetStatus(Macad::Occt::Message_Status% theStat, Macad::Occt::TCollection_ExtendedString^ theStr, bool noRepetitions);
	/// <summary>
	/// Sets status with string parameter
	/// If noRepetitions is True, the parameter will be added only
	/// if it has not been yet recorded for the same status flag
	/// </summary>
	void SetStatus(Macad::Occt::Message_Status% theStat, Macad::Occt::TCollection_ExtendedString^ theStr);
	/// <summary>
	/// Sets status with string parameter
	/// If noRepetitions is True, the parameter will be added only
	/// if it has not been yet recorded for the same status flag
	/// </summary>
	void SetStatus(Macad::Occt::Message_Status% theStat, Macad::Occt::TCollection_HExtendedString^ theStr, bool noRepetitions);
	/// <summary>
	/// Sets status with string parameter
	/// If noRepetitions is True, the parameter will be added only
	/// if it has not been yet recorded for the same status flag
	/// </summary>
	void SetStatus(Macad::Occt::Message_Status% theStat, Macad::Occt::TCollection_HExtendedString^ theStr);
	/// <summary>
	/// Sets status with preformatted message. This message will be
	/// used directly to report the status; automatic generation of
	/// status messages will be disabled for it.
	/// </summary>
	void SetStatus(Macad::Occt::Message_Status% theStat, Macad::Occt::Message_Msg^ theMsg);
	/// <summary>
	/// Returns copy of exec status of algorithm
	/// </summary>
	Macad::Occt::Message_ExecStatus^ GetStatus();
	/// <summary>
	/// Returns exec status of algorithm
	/// </summary>
	Macad::Occt::Message_ExecStatus^ ChangeStatus();
	/// <summary>
	/// Clear exec status of algorithm
	/// </summary>
	void ClearStatus();
	/// <summary>
	/// Sets messenger to algorithm
	/// </summary>
	void SetMessenger(Macad::Occt::Message_Messenger^ theMsgr);
	/// <summary>
	/// Returns messenger of algorithm.
	/// The returned handle is always non-null and can
	/// be used for sending messages.
	/// </summary>
	Macad::Occt::Message_Messenger^ GetMessenger();
	/// <summary>
	/// Print messages for all status flags that have been set during
	/// algorithm execution, excluding statuses that are NOT set
	/// in theFilter.
	/// 
	/// The messages are taken from resource file, names being
	/// constructed as {dynamic class type}.{status name},
	/// for instance, "Message_Algorithm.Fail5".
	/// If message is not found in resources for this class and all
	/// its base types, surrogate text is printed.
	/// 
	/// For the statuses having number or string parameters,
	/// theMaxCount defines maximal number of numbers or strings to be
	/// included in the message
	/// 
	/// Note that this method is virtual; this allows descendant
	/// classes to customize message output (e.g. by adding
	/// messages from other sub-algorithms)
	/// </summary>
	void SendStatusMessages(Macad::Occt::Message_ExecStatus^ theFilter, Macad::Occt::Message_Gravity theTraceLevel, int theMaxCount);
	/// <summary>
	/// Print messages for all status flags that have been set during
	/// algorithm execution, excluding statuses that are NOT set
	/// in theFilter.
	/// 
	/// The messages are taken from resource file, names being
	/// constructed as {dynamic class type}.{status name},
	/// for instance, "Message_Algorithm.Fail5".
	/// If message is not found in resources for this class and all
	/// its base types, surrogate text is printed.
	/// 
	/// For the statuses having number or string parameters,
	/// theMaxCount defines maximal number of numbers or strings to be
	/// included in the message
	/// 
	/// Note that this method is virtual; this allows descendant
	/// classes to customize message output (e.g. by adding
	/// messages from other sub-algorithms)
	/// </summary>
	void SendStatusMessages(Macad::Occt::Message_ExecStatus^ theFilter, Macad::Occt::Message_Gravity theTraceLevel);
	/// <summary>
	/// Print messages for all status flags that have been set during
	/// algorithm execution, excluding statuses that are NOT set
	/// in theFilter.
	/// 
	/// The messages are taken from resource file, names being
	/// constructed as {dynamic class type}.{status name},
	/// for instance, "Message_Algorithm.Fail5".
	/// If message is not found in resources for this class and all
	/// its base types, surrogate text is printed.
	/// 
	/// For the statuses having number or string parameters,
	/// theMaxCount defines maximal number of numbers or strings to be
	/// included in the message
	/// 
	/// Note that this method is virtual; this allows descendant
	/// classes to customize message output (e.g. by adding
	/// messages from other sub-algorithms)
	/// </summary>
	void SendStatusMessages(Macad::Occt::Message_ExecStatus^ theFilter);
	/// <summary>
	/// Convenient variant of SendStatusMessages() with theFilter
	/// having defined all WARN, ALARM, and FAIL (but not DONE)
	/// status flags
	/// </summary>
	void SendMessages(Macad::Occt::Message_Gravity theTraceLevel, int theMaxCount);
	/// <summary>
	/// Convenient variant of SendStatusMessages() with theFilter
	/// having defined all WARN, ALARM, and FAIL (but not DONE)
	/// status flags
	/// </summary>
	void SendMessages(Macad::Occt::Message_Gravity theTraceLevel);
	/// <summary>
	/// Convenient variant of SendStatusMessages() with theFilter
	/// having defined all WARN, ALARM, and FAIL (but not DONE)
	/// status flags
	/// </summary>
	void SendMessages();
	/// <summary>
	/// Add statuses to this algorithm from other algorithm
	/// (including messages)
	/// </summary>
	void AddStatus(Macad::Occt::Message_Algorithm^ theOther);
	/// <summary>
	/// Add statuses to this algorithm from other algorithm, but
	/// only those items are moved that correspond to statuses
	/// set in theStatus
	/// </summary>
	void AddStatus(Macad::Occt::Message_ExecStatus^ theStatus, Macad::Occt::Message_Algorithm^ theOther);
	/// <summary>
	/// Return the numbers associated with the indicated status;
	/// Null handle if no such status or no numbers associated with it
	/// </summary>
	Macad::Occt::TColStd_HPackedMapOfInteger^ GetMessageNumbers(Macad::Occt::Message_Status% theStatus);
	/// <summary>
	/// Return the strings associated with the indicated status;
	/// Null handle if no such status or no strings associated with it
	/// </summary>
	Macad::Occt::TColStd_HSequenceOfHExtendedString^ GetMessageStrings(Macad::Occt::Message_Status% theStatus);
	/// <summary>
	/// Prepares a string containing a list of integers contained
	/// in theError map, but not more than theMaxCount
	/// </summary>
	static Macad::Occt::TCollection_ExtendedString^ PrepareReport(Macad::Occt::TColStd_HPackedMapOfInteger^ theError, int theMaxCount);
	/// <summary>
	/// Prepares a string containing a list of names contained
	/// in theReportSeq sequence, but not more than theMaxCount
	/// </summary>
	static Macad::Occt::TCollection_ExtendedString^ PrepareReport(Macad::Occt::TColStd_SequenceOfHExtendedString^ theReportSeq, int theMaxCount);
}; // class Message_Algorithm

//---------------------------------------------------------------------
//  Class  Message_AttributeMeter
//---------------------------------------------------------------------
/// <summary>
/// Alert object storing alert metrics values.
/// Start and stop values for each metric.
/// </summary>
public ref class Message_AttributeMeter sealed : public Macad::Occt::Message_Attribute
{

#ifdef Include_Message_AttributeMeter_h
public:
	Include_Message_AttributeMeter_h
#endif

public:
	Message_AttributeMeter(::Message_AttributeMeter* nativeInstance)
		: Macad::Occt::Message_Attribute( nativeInstance )
	{}

	Message_AttributeMeter(::Message_AttributeMeter& nativeInstance)
		: Macad::Occt::Message_Attribute( nativeInstance )
	{}

	property ::Message_AttributeMeter* NativeInstance
	{
		::Message_AttributeMeter* get()
		{
			return static_cast<::Message_AttributeMeter*>(_NativeInstance);
		}
	}

	static Macad::Occt::Message_AttributeMeter^ CreateDowncasted(::Message_AttributeMeter* instance);

public:
	/// <summary>
	/// Constructor with string argument
	/// </summary>
	Message_AttributeMeter(Macad::Occt::TCollection_AsciiString^ theName);
	Message_AttributeMeter(Macad::Occt::Message_AttributeMeter^ parameter1);
	/// <summary>
	/// Returns default value of the metric when it is not defined
	/// </summary>
	/// <returns>
	/// undefined value
	/// </returns>
	static double UndefinedMetricValue();
	/// <summary>
	/// Checks whether the attribute has values for the metric
	/// </summary>
	/// <param name="theMetric">
	/// [in] metric type
	/// </param>
	/// <returns>
	/// true if the metric values exist in the attribute
	/// </returns>
	bool HasMetric(Macad::Occt::Message_MetricType% theMetric);
	/// <summary>
	/// Returns true when both values of the metric are set.
	/// </summary>
	/// <param name="theMetric">
	/// [in] metric type
	/// </param>
	/// <returns>
	/// true if metric values are valid
	/// </returns>
	bool IsMetricValid(Macad::Occt::Message_MetricType% theMetric);
	/// <summary>
	/// Returns start value for the metric
	/// </summary>
	/// <param name="theMetric">
	/// [in] metric type
	/// </param>
	/// <returns>
	/// real value
	/// </returns>
	double StartValue(Macad::Occt::Message_MetricType% theMetric);
	/// <summary>
	/// Sets start values for the metric
	/// </summary>
	/// <param name="theMetric">
	/// [in] metric type
	/// </param>
	void SetStartValue(Macad::Occt::Message_MetricType% theMetric, double theValue);
	/// <summary>
	/// Returns stop value for the metric
	/// </summary>
	/// <param name="theMetric">
	/// [in] metric type
	/// </param>
	/// <returns>
	/// real value
	/// </returns>
	double StopValue(Macad::Occt::Message_MetricType% theMetric);
	/// <summary>
	/// Sets stop values for the metric
	/// </summary>
	/// <param name="theMetric">
	/// [in] metric type
	/// </param>
	void SetStopValue(Macad::Occt::Message_MetricType% theMetric, double theValue);
	/// <summary>
	/// Sets start values of default report metrics into the alert
	/// </summary>
	/// <param name="theAlert">
	/// an alert
	/// </param>
	static void StartAlert(Macad::Occt::Message_AlertExtended^ theAlert);
	/// <summary>
	/// Sets stop values of default report metrics into the alert
	/// </summary>
	/// <param name="theAlert">
	/// an alert
	/// </param>
	static void StopAlert(Macad::Occt::Message_AlertExtended^ theAlert);
	/// <summary>
	/// Sets current values of default report metrics into the alert.
	/// Processed only alert with Message_AttributeMeter attribute
	/// </summary>
	/// <param name="theAlert">
	/// an alert
	/// </param>
	/// <param name="theStartValue">
	/// flag, if true, the start value is collected otherwise stop
	/// </param>
	static void SetAlertMetrics(Macad::Occt::Message_AlertExtended^ theAlert, bool theStartValue);
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Message_AttributeMeter

//---------------------------------------------------------------------
//  Class  Message_AttributeObject
//---------------------------------------------------------------------
/// <summary>
/// Alert object storing a transient object
/// </summary>
public ref class Message_AttributeObject sealed : public Macad::Occt::Message_Attribute
{

#ifdef Include_Message_AttributeObject_h
public:
	Include_Message_AttributeObject_h
#endif

public:
	Message_AttributeObject(::Message_AttributeObject* nativeInstance)
		: Macad::Occt::Message_Attribute( nativeInstance )
	{}

	Message_AttributeObject(::Message_AttributeObject& nativeInstance)
		: Macad::Occt::Message_Attribute( nativeInstance )
	{}

	property ::Message_AttributeObject* NativeInstance
	{
		::Message_AttributeObject* get()
		{
			return static_cast<::Message_AttributeObject*>(_NativeInstance);
		}
	}

	static Macad::Occt::Message_AttributeObject^ CreateDowncasted(::Message_AttributeObject* instance);

public:
	/// <summary>
	/// Constructor with string argument
	/// </summary>
	Message_AttributeObject(Macad::Occt::Standard_Transient^ theObject, Macad::Occt::TCollection_AsciiString^ theName);
	/// <summary>
	/// Constructor with string argument
	/// </summary>
	Message_AttributeObject(Macad::Occt::Standard_Transient^ theObject);
	Message_AttributeObject(Macad::Occt::Message_AttributeObject^ parameter1);
	/// <summary>
	/// Returns object
	/// </summary>
	/// <returns>
	/// the object instance
	/// </returns>
	Macad::Occt::Standard_Transient^ Object();
	/// <summary>
	/// Sets the object
	/// </summary>
	/// <param name="theObject">
	/// an instance
	/// </param>
	void SetObject(Macad::Occt::Standard_Transient^ theObject);
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Message_AttributeObject

//---------------------------------------------------------------------
//  Class  Message_AttributeStream
//---------------------------------------------------------------------
/// <summary>
/// Alert object storing stream value
/// </summary>
public ref class Message_AttributeStream : public Macad::Occt::Message_Attribute
{

#ifdef Include_Message_AttributeStream_h
public:
	Include_Message_AttributeStream_h
#endif

protected:
	Message_AttributeStream(InitMode init)
		: Macad::Occt::Message_Attribute( init )
	{}

public:
	Message_AttributeStream(::Message_AttributeStream* nativeInstance)
		: Macad::Occt::Message_Attribute( nativeInstance )
	{}

	Message_AttributeStream(::Message_AttributeStream& nativeInstance)
		: Macad::Occt::Message_Attribute( nativeInstance )
	{}

	property ::Message_AttributeStream* NativeInstance
	{
		::Message_AttributeStream* get()
		{
			return static_cast<::Message_AttributeStream*>(_NativeInstance);
		}
	}

	static Macad::Occt::Message_AttributeStream^ CreateDowncasted(::Message_AttributeStream* instance);

public:
	/// <summary>
	/// Constructor with string argument
	/// </summary>
	/* Method skipped due to unknown mapping: void Message_AttributeStream(stringstream theStream, TCollection_AsciiString theName, ) */
	/// <summary>
	/// Constructor with string argument
	/// </summary>
	/* Method skipped due to unknown mapping: void Message_AttributeStream(stringstream theStream, TCollection_AsciiString theName, ) */
	/// <summary>
	/// Returns stream value
	/// </summary>
	/* Method skipped due to unknown mapping: stringstream Stream() */
	/// <summary>
	/// Sets stream value
	/// </summary>
	/* Method skipped due to unknown mapping: void SetStream(stringstream theStream, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/// <summary>
	/// Dumps the content of me into the stream
	/// </summary>
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Message_AttributeStream

//---------------------------------------------------------------------
//  Class  Message_ProgressRange
//---------------------------------------------------------------------
/// <summary>
/// Auxiliary class representing a part of the global progress scale allocated by
/// a step of the progress scope, see Message_ProgressScope::Next().
/// 
/// A range object takes responsibility of advancing the progress by the size of
/// allocated step, which is then performed depending on how it is used:
/// 
/// - If Message_ProgressScope object is created using this range as argument, then
/// this respondibility is taken over by that scope.
/// 
/// - Otherwise, a range advances progress directly upon destruction.
/// 
/// A range object can be copied, the responsibility for progress advancement is
/// then taken by the copy.
/// The same range object may be used (either copied or used to create scope) only once.
/// Any consequent attempts to use range will give no result on the progress;
/// in debug mode, an assert message will be generated.
/// 
/// </summary>
/// @sa Message_ProgressScope for more details
public ref class Message_ProgressRange sealed : public BaseClass<::Message_ProgressRange>
{

#ifdef Include_Message_ProgressRange_h
public:
	Include_Message_ProgressRange_h
#endif

public:
	Message_ProgressRange(::Message_ProgressRange* nativeInstance)
		: BaseClass<::Message_ProgressRange>( nativeInstance, true )
	{}

	Message_ProgressRange(::Message_ProgressRange& nativeInstance)
		: BaseClass<::Message_ProgressRange>( &nativeInstance, false )
	{}

	property ::Message_ProgressRange* NativeInstance
	{
		::Message_ProgressRange* get()
		{
			return static_cast<::Message_ProgressRange*>(_NativeInstance);
		}
	}

public:
	/// <summary>
	/// Constructor of the empty range
	/// </summary>
	Message_ProgressRange();
	/// <summary>
	/// Copy constructor disarms the source
	/// </summary>
	Message_ProgressRange(Macad::Occt::Message_ProgressRange^ theOther);
	/// <summary>
	/// Returns true if ProgressIndicator signals UserBreak
	/// </summary>
	bool UserBreak();
	/// <summary>
	/// Returns false if ProgressIndicator signals UserBreak
	/// </summary>
	bool More();
	/// <summary>
	/// Returns true if this progress range is attached to some indicator.
	/// </summary>
	bool IsActive();
	/// <summary>
	/// Closes the current range and advances indicator
	/// </summary>
	void Close();
}; // class Message_ProgressRange

//---------------------------------------------------------------------
//  Class  Message_ProgressScope
//---------------------------------------------------------------------
/// <summary>
/// Message_ProgressScope class provides convenient way to advance progress
/// indicator in context of complex program organized in hierarchical way,
/// where usually it is difficult (or even not possible) to consider process
/// as linear with fixed step.
/// 
/// On every level (sub-operation) in hierarchy of operations
/// the local instance of the Message_ProgressScope class is created.
/// It takes a part of the upper-level scope (via Message_ProgressRange) and provides
/// a way to consider this part as independent scale with locally defined range.
/// 
/// The position on the local scale may be advanced using the method Next(),
/// which allows iteration-like advancement. This method can take argument to
/// advance by the specified value (with default step equal to 1).
/// This method returns Message_ProgressRange object that takes responsibility
/// of making the specified step, either directly at its destruction or by
/// delegating this task to another sub-scope created from that range object.
/// 
/// It is important that sub-scope must have life time less than
/// the life time of its parent scope that provided the range.
/// The usage pattern is to create scope objects as local variables in the
/// functions that do the job, and pass range objects returned by Next() to
/// the functions of the lower level, to allow them creating their own scopes.
/// 
/// The scope has a name that can be used in visualization of the progress.
/// It can be null. Note that when C string literal is used as a name, then its
/// value is not copied, just pointer is stored. In other variants (char pointer
/// or a string class) the string is copied, which is additional overhead.
/// 
/// The same instance of the progress scope! must not be used concurrently from different threads.
/// For the algorithm running its tasks in parallel threads, a common scope is
/// created before the parallel execution, and the range objects produced by method
/// Next() are used to initialise the data pertinent to each task.
/// Then the progress is advanced within each task using its own range object.
/// See example below.
/// 
/// Note that while a range of the scope is specified using Standard_Real
/// (double) parameter, it is expected to be a positive integer value.
/// If the range is not an integer, method Next() shall be called with
/// explicit step argument, and the rounded value returned by method Value()
/// may be not coherent with the step and range.
/// 
/// A scope can be created with option "infinite". This is useful when
/// the number of steps is not known by the time of the scope creation.
/// In this case the progress will be advanced logarithmically, approaching
/// the end of the scope at infinite number of steps. The parameter Max
/// for infinite scope indicates number of steps corresponding to mid-range.
/// 
/// A progress scope created with empty constructor is not connected to any
/// progress indicator, and passing the range created on it to any algorithm
/// allows it executing safely without actual progress indication.
/// 
/// Example of preparation of progress indicator:
/// 
/// </summary>
/// @code{.cpp}
/// Handle(Message_ProgressIndicator) aProgress = ...; // assume it can be null
/// func (Message_ProgressIndicator::Start (aProgress));
/// @endcode
/// 
/// Example of usage in sequential process:
/// 
/// @code{.cpp}
/// Message_ProgressScope aWholePS(aRange, "Whole process", 100);
/// 
/// // do one step taking 20%
/// func1 (aWholePS.Next (20)); // func1 will take 20% of the whole scope
/// if (aWholePS.UserBreak()) // exit prematurely if the user requested break
/// return;
/// 
/// // ... do next step taking 50%
/// func2 (aWholePS.Next (50));
/// if (aWholePS.UserBreak())
/// return;
/// @endcode
/// 
/// Example of usage in nested cycle:
/// 
/// @code{.cpp}
/// // Outer cycle
/// Message_ProgressScope anOuter (theProgress, "Outer", nbOuter);
/// for (Standard_Integer i = 0; i < nbOuter && anOuter.More(); i++)
/// {
/// // Inner cycle
/// Message_ProgressScope anInner (anOuter.Next(), "Inner", nbInner);
/// for (Standard_Integer j = 0; j < nbInner && anInner.More(); j++)
/// {
/// // Cycle body
/// func (anInner.Next());
/// }
/// }
/// @endcode
/// 
/// Example of use in function:
/// 
/// @code{.cpp}
/// //! Implementation of iterative algorithm showing its progress
/// func (const Message_ProgressRange& theProgress)
/// {
/// // Create local scope covering the given progress range.
/// // Set this scope to count aNbSteps steps.
/// Message_ProgressScope aScope (theProgress, "", aNbSteps);
/// for (Standard_Integer i = 0; i < aNbSteps && aScope.More(); i++)
/// {
/// // Optional: pass range returned by method Next() to the nested algorithm
/// // to allow it to show its progress too (by creating its own scope object).
/// // In any case the progress will advance to the next step by the end of the func2 call.
/// func2 (aScope.Next());
/// }
/// }
/// @endcode
/// 
/// Example of usage in parallel process:
/// 
/// @code{.cpp}
/// struct Task
/// {
/// Data& Data;
/// Message_ProgressRange Range;
/// 
/// Task (const Data& theData, const Message_ProgressRange& theRange)
/// : Data (theData), Range (theRange) {}
/// };
/// struct Functor
/// {
/// void operator() (Task& theTask) const
/// {
/// // Note: it is essential that this method is executed only once for the same Task object
/// Message_ProgressScope aPS (theTask.Range, NULL, theTask.Data.NbItems);
/// for (Standard_Integer i = 0; i < theTask.Data.NbSteps && aPS.More(); i++)
/// {
/// do_job (theTask.Data.Item[i], aPS.Next());
/// }
/// }
/// };
/// ...
/// {
/// std::vector<Data> aData = ...;
/// std::vector<Task> aTasks;
/// 
/// Message_ProgressScope aPS (aRootRange, "Data processing", aData.size());
/// for (Standard_Integer i = 0; i < aData.size(); ++i)
/// aTasks.push_back (Task (aData[i], aPS.Next()));
/// 
/// OSD_Parallel::ForEach (aTasks.begin(), aTasks.end(), Functor());
/// }
/// @endcode
/// 
/// For lightweight algorithms that do not need advancing the progress
/// within individual tasks the code can be simplified to avoid inner scopes:
/// 
/// @code
/// struct Functor
/// {
/// void operator() (Task& theTask) const
/// {
/// if (theTask.Range.More())
/// {
/// do_job (theTask.Data);
/// // advance the progress
/// theTask.Range.Close();
/// }
/// }
/// };
/// @endcode
public ref class Message_ProgressScope sealed : public BaseClass<::Message_ProgressScope>
{

#ifdef Include_Message_ProgressScope_h
public:
	Include_Message_ProgressScope_h
#endif

public:
	Message_ProgressScope(::Message_ProgressScope* nativeInstance)
		: BaseClass<::Message_ProgressScope>( nativeInstance, true )
	{}

	Message_ProgressScope(::Message_ProgressScope& nativeInstance)
		: BaseClass<::Message_ProgressScope>( &nativeInstance, false )
	{}

	property ::Message_ProgressScope* NativeInstance
	{
		::Message_ProgressScope* get()
		{
			return static_cast<::Message_ProgressScope*>(_NativeInstance);
		}
	}

public:
	/// <summary>
	/// Creates dummy scope.
	/// It can be safely passed to algorithms; no progress indication will be done.
	/// </summary>
	Message_ProgressScope();
	/// <summary>
	/// Creates a new scope taking responsibility of the part of the progress
	/// scale described by theRange. The new scope has own range from 0 to
	/// theMax, which is mapped to the given range.
	/// 
	/// The topmost scope is created and owned by Message_ProgressIndicator
	/// and its pointer is contained in the Message_ProgressRange returned by the Start() method of progress indicator.
	/// 
	/// </summary>
	/// <param name="theRange">
	/// [in][out] range to fill (will be disarmed)
	/// </param>
	/// <param name="theName">
	///  [in]      new scope name
	/// </param>
	/// <param name="theMax">
	///   [in]      number of steps in scope
	/// </param>
	/// <param name="isInfinite">
	/// [in]    infinite flag
	/// </param>
	Message_ProgressScope(Macad::Occt::Message_ProgressRange^ theRange, Macad::Occt::TCollection_AsciiString^ theName, double theMax, bool isInfinite);
	/// <summary>
	/// Creates a new scope taking responsibility of the part of the progress
	/// scale described by theRange. The new scope has own range from 0 to
	/// theMax, which is mapped to the given range.
	/// 
	/// The topmost scope is created and owned by Message_ProgressIndicator
	/// and its pointer is contained in the Message_ProgressRange returned by the Start() method of progress indicator.
	/// 
	/// </summary>
	/// <param name="theRange">
	/// [in][out] range to fill (will be disarmed)
	/// </param>
	/// <param name="theName">
	///  [in]      new scope name
	/// </param>
	/// <param name="theMax">
	///   [in]      number of steps in scope
	/// </param>
	/// <param name="isInfinite">
	/// [in]    infinite flag
	/// </param>
	Message_ProgressScope(Macad::Occt::Message_ProgressRange^ theRange, Macad::Occt::TCollection_AsciiString^ theName, double theMax);
	/// <summary>
	/// Creates a new scope taking responsibility of the part of the progress
	/// scale described by theRange. The new scope has own range from 0 to
	/// theMax, which is mapped to the given range.
	/// 
	/// The topmost scope is created and owned by Message_ProgressIndicator
	/// and its pointer is contained in the Message_ProgressRange returned by the Start() method of progress indicator.
	/// 
	/// </summary>
	/// <param name="theRange">
	/// [in][out] range to fill (will be disarmed)
	/// </param>
	/// <param name="theName">
	///  [in]      empty scope name (only NULL is accepted as argument)
	/// </param>
	/// <param name="theMax">
	///   [in]      number of steps in scope
	/// </param>
	/// <param name="isInfinite">
	/// [in]    infinite flag
	/// </param>
	/* Method skipped due to unknown mapping: void Message_ProgressScope(Message_ProgressRange theRange, NullString theName, Standard_Real theMax, Standard_Boolean isInfinite, ) */
	/// <summary>
	/// Creates a new scope taking responsibility of the part of the progress
	/// scale described by theRange. The new scope has own range from 0 to
	/// theMax, which is mapped to the given range.
	/// 
	/// The topmost scope is created and owned by Message_ProgressIndicator
	/// and its pointer is contained in the Message_ProgressRange returned by the Start() method of progress indicator.
	/// 
	/// </summary>
	/// <param name="theRange">
	/// [in][out] range to fill (will be disarmed)
	/// </param>
	/// <param name="theName">
	///  [in]      empty scope name (only NULL is accepted as argument)
	/// </param>
	/// <param name="theMax">
	///   [in]      number of steps in scope
	/// </param>
	/// <param name="isInfinite">
	/// [in]    infinite flag
	/// </param>
	/* Method skipped due to unknown mapping: void Message_ProgressScope(Message_ProgressRange theRange, NullString theName, Standard_Real theMax, Standard_Boolean isInfinite, ) */
	/// <summary>
	/// Sets the name of the scope.
	/// </summary>
	void SetName(Macad::Occt::TCollection_AsciiString^ theName);
	/// <summary>
	/// Returns true if ProgressIndicator signals UserBreak
	/// </summary>
	bool UserBreak();
	/// <summary>
	/// Returns false if ProgressIndicator signals UserBreak
	/// </summary>
	bool More();
	/// <summary>
	/// Advances position by specified step and returns the range
	/// covering this step
	/// </summary>
	Macad::Occt::Message_ProgressRange^ Next(double theStep);
	/// <summary>
	/// Advances position by specified step and returns the range
	/// covering this step
	/// </summary>
	Macad::Occt::Message_ProgressRange^ Next();
	/// <summary>
	/// Force update of presentation of the progress indicator.
	/// Should not be called concurrently.
	/// </summary>
	void Show();
	/// <summary>
	/// Returns true if this progress scope is attached to some indicator.
	/// </summary>
	bool IsActive();
	/// <summary>
	/// Returns the name of the scope (may be null).
	/// Scopes with null name (e.g. root scope) should
	/// be bypassed when reporting progress to the user.
	/// </summary>
	System::String^ Name();
	/// <summary>
	/// Returns parent scope (null for top-level scope)
	/// </summary>
	Macad::Occt::Message_ProgressScope^ Parent();
	/// <summary>
	/// Returns the maximal value of progress in this scope
	/// </summary>
	double MaxValue();
	/// <summary>
	/// Returns the current value of progress in this scope.
	/// 
	/// The value is computed by mapping current global progress into
	/// this scope range; the result is rounded up to integer.
	/// Note that if MaxValue() is not an integer, Value() can be
	/// greater than MaxValue() due to that rounding.
	/// 
	/// This method should not be called concurrently while the progress
	/// is advancing, except from implementation of method Show() in
	/// descendant of Message_ProgressIndicator.
	/// </summary>
	double Value();
	/// <summary>
	/// Returns the infinite flag
	/// </summary>
	bool IsInfinite();
	/// <summary>
	/// Get the portion of the indicator covered by this scope (from 0 to 1)
	/// </summary>
	double GetPortion();
	/// <summary>
	/// Closes the scope and advances the progress to its end.
	/// Closed scope should not be used.
	/// </summary>
	void Close();
}; // class Message_ProgressScope

//---------------------------------------------------------------------
//  Class  Message_Level
//---------------------------------------------------------------------
/// <summary>
/// This class is an instance of Sentry to create a level in a message report
/// Constructor of the class add new (active) level in the report, destructor removes it
/// While the level is active in the report, new alerts are added below the level root alert.
/// 
/// The first added alert is a root alert, other are added below the root alert
/// 
/// If alert has Message_AttributeMeter attribute, active metrics of the default report are stored in
/// the attribute: start value of metric on adding alert, stop on adding another alert or closing (delete) the level
/// in the report.
/// 
/// Processing of this class is implemented in Message_Report, it is used only inside it.
/// Levels using should be only through using OCCT_ADD_MESSAGE_LEVEL_SENTRY only. No other code is required outside.
/// </summary>
public ref class Message_Level sealed : public BaseClass<::Message_Level>
{

#ifdef Include_Message_Level_h
public:
	Include_Message_Level_h
#endif

public:
	Message_Level(::Message_Level* nativeInstance)
		: BaseClass<::Message_Level>( nativeInstance, true )
	{}

	Message_Level(::Message_Level& nativeInstance)
		: BaseClass<::Message_Level>( &nativeInstance, false )
	{}

	property ::Message_Level* NativeInstance
	{
		::Message_Level* get()
		{
			return static_cast<::Message_Level*>(_NativeInstance);
		}
	}

public:
	/// <summary>
	/// Constructor.
	/// One string key is used for all alert meters.
	/// The perf meter is not started automatically, it will be done in AddAlert() method
	/// </summary>
	Message_Level(Macad::Occt::TCollection_AsciiString^ theName);
	Message_Level(Macad::Occt::Message_Level^ parameter1);
	/// <summary>
	/// Returns root alert of the level
	/// </summary>
	/// <returns>
	/// alert instance or NULL
	/// </returns>
	Macad::Occt::Message_AlertExtended^ RootAlert();
	/// <summary>
	/// Sets the root alert. Starts collects alert metrics if active.
	/// </summary>
	/// <param name="theAlert">
	/// an alert
	/// </param>
	void SetRootAlert(Macad::Occt::Message_AlertExtended^ theAlert, bool isRequiredToStart);
	/// <summary>
	/// Adds new alert on the level. Stops the last alert metric, appends the alert and starts the alert metrics collecting.
	/// Sets root alert beforehand this method using, if the root is NULL, it does nothing.
	/// </summary>
	/// <param name="theGravity">
	/// an alert gravity
	/// </param>
	/// <param name="theAlert">
	/// an alert
	/// </param>
	/// <returns>
	/// true if alert is added
	/// </returns>
	bool AddAlert(Macad::Occt::Message_Gravity theGravity, Macad::Occt::Message_Alert^ theAlert);
}; // class Message_Level

//---------------------------------------------------------------------
//  Class  Message_MsgFile
//---------------------------------------------------------------------
/// <summary>
/// A tool providing facility to load definitions of message strings from
/// resource file(s).
/// 
/// The message file is an ASCII file which defines a set of messages.
/// Each message is identified by its keyword (string).
/// 
/// All lines in the file starting with the exclamation sign
/// (perhaps preceding by spaces and/or tabs) are ignored as comments.
/// 
/// Each line in the file starting with the dot character "."
/// (perhaps preceding by spaces and/or tabs) defines the keyword.
/// The keyword is a string starting from the next symbol after dot
/// and ending at the symbol preceding ending newline character "\n".
/// 
/// All the lines in the file after the keyword and before next
/// keyword (and which are not comments) define the message for that
/// keyword. If the message consists of several lines, the message
/// string will contain newline symbols "\n" between parts (but not
/// at the end).
/// 
/// The experimental support of Unicode message files is provided.
/// These are distinguished by two bytes FF.FE or FE.FF at the beginning.
/// 
/// The loaded messages are stored in static data map; all methods of that
/// class are also static.
/// </summary>
public ref class Message_MsgFile sealed : public BaseClass<::Message_MsgFile>
{

#ifdef Include_Message_MsgFile_h
public:
	Include_Message_MsgFile_h
#endif

public:
	Message_MsgFile(::Message_MsgFile* nativeInstance)
		: BaseClass<::Message_MsgFile>( nativeInstance, true )
	{}

	Message_MsgFile(::Message_MsgFile& nativeInstance)
		: BaseClass<::Message_MsgFile>( &nativeInstance, false )
	{}

	property ::Message_MsgFile* NativeInstance
	{
		::Message_MsgFile* get()
		{
			return static_cast<::Message_MsgFile*>(_NativeInstance);
		}
	}

public:
	Message_MsgFile();
	Message_MsgFile(Macad::Occt::Message_MsgFile^ parameter1);
	/// <summary>
	/// Load message file <theFileName> from directory <theDirName>
	/// or its sub-directory
	/// </summary>
	static bool Load(System::String^ theDirName, System::String^ theFileName);
	/// <summary>
	/// Load the messages from the given file, additive to any previously
	/// loaded messages. Messages with same keywords, if already present,
	/// are replaced with the new ones.
	/// </summary>
	static bool LoadFile(System::String^ theFName);
	/// <summary>
	/// Loads the messages from the file with name (without extension) given by environment variable.
	/// Extension of the file name is given separately. If its not defined, it is taken:
	/// - by default from environment CSF_LANGUAGE,
	/// - if not defined either, as "us".
	/// </summary>
	/// @name theEnvName  environment variable name
	/// @name theFileName file name without language suffix
	/// @name theLangExt  language file name extension
	/// <returns>
	/// TRUE on success
	/// </returns>
	static bool LoadFromEnv(System::String^ theEnvName, System::String^ theFileName, System::String^ theLangExt);
	/// <summary>
	/// Loads the messages from the file with name (without extension) given by environment variable.
	/// Extension of the file name is given separately. If its not defined, it is taken:
	/// - by default from environment CSF_LANGUAGE,
	/// - if not defined either, as "us".
	/// </summary>
	/// @name theEnvName  environment variable name
	/// @name theFileName file name without language suffix
	/// @name theLangExt  language file name extension
	/// <returns>
	/// TRUE on success
	/// </returns>
	static bool LoadFromEnv(System::String^ theEnvName, System::String^ theFileName);
	/// <summary>
	/// Loads the messages from the given text buffer.
	/// </summary>
	/// <param name="theContent">
	/// string containing the messages
	/// </param>
	/// <param name="theLength">
	///  length of the buffer;
	/// when -1 specified - theContent will be considered as NULL-terminated string
	/// </param>
	static bool LoadFromString(System::String^ theContent, int theLength);
	/// <summary>
	/// Loads the messages from the given text buffer.
	/// </summary>
	/// <param name="theContent">
	/// string containing the messages
	/// </param>
	/// <param name="theLength">
	///  length of the buffer;
	/// when -1 specified - theContent will be considered as NULL-terminated string
	/// </param>
	static bool LoadFromString(System::String^ theContent);
	/// <summary>
	/// Adds new message to the map. Parameter <key> gives
	/// the key of the message, <text> defines the message itself.
	/// If there already was defined the message identified by the
	/// same keyword, it is replaced with the new one.
	/// </summary>
	static bool AddMsg(Macad::Occt::TCollection_AsciiString^ key, Macad::Occt::TCollection_ExtendedString^ text);
	/// <summary>
	/// Returns True if message with specified keyword is registered
	/// </summary>
	static bool HasMsg(Macad::Occt::TCollection_AsciiString^ key);
	static Macad::Occt::TCollection_ExtendedString^ Msg(System::String^ key);
	/// <summary>
	/// Gives the text for the message identified by the keyword <key>.
	/// If there are no messages with such keyword defined, the error message is returned.
	/// In that case reference to static string is returned, it can be changed with next call(s) to Msg().
	/// Note: The error message is constructed like 'Unknown message: <key>', and can
	/// itself be customized by defining message with key Message_Msg_BadKeyword.
	/// </summary>
	static Macad::Occt::TCollection_ExtendedString^ Msg(Macad::Occt::TCollection_AsciiString^ key);
}; // class Message_MsgFile

//---------------------------------------------------------------------
//  Class  Message_PrinterOStream
//---------------------------------------------------------------------
/// <summary>
/// Implementation of a message printer associated with an std::ostream
/// The std::ostream may be either externally defined one (e.g. std::cout),
/// or file stream maintained internally (depending on constructor).
/// </summary>
public ref class Message_PrinterOStream sealed : public Macad::Occt::Message_Printer
{

#ifdef Include_Message_PrinterOStream_h
public:
	Include_Message_PrinterOStream_h
#endif

public:
	Message_PrinterOStream(::Message_PrinterOStream* nativeInstance)
		: Macad::Occt::Message_Printer( nativeInstance )
	{}

	Message_PrinterOStream(::Message_PrinterOStream& nativeInstance)
		: Macad::Occt::Message_Printer( nativeInstance )
	{}

	property ::Message_PrinterOStream* NativeInstance
	{
		::Message_PrinterOStream* get()
		{
			return static_cast<::Message_PrinterOStream*>(_NativeInstance);
		}
	}

	static Macad::Occt::Message_PrinterOStream^ CreateDowncasted(::Message_PrinterOStream* instance);

public:
	/// <summary>
	/// Empty constructor, defaulting to cout
	/// </summary>
	Message_PrinterOStream(Macad::Occt::Message_Gravity theTraceLevel);
	/// <summary>
	/// Create printer for output to a specified file.
	/// The option theDoAppend specifies whether file should be
	/// appended or rewritten.
	/// For specific file names (cout, cerr) standard streams are used
	/// </summary>
	Message_PrinterOStream(System::String^ theFileName, bool theDoAppend, Macad::Occt::Message_Gravity theTraceLevel);
	/// <summary>
	/// Create printer for output to a specified file.
	/// The option theDoAppend specifies whether file should be
	/// appended or rewritten.
	/// For specific file names (cout, cerr) standard streams are used
	/// </summary>
	Message_PrinterOStream(System::String^ theFileName, bool theDoAppend);
	Message_PrinterOStream(Macad::Occt::Message_PrinterOStream^ parameter1);
	/// <summary>
	/// Setup console text color.
	/// 
	/// On Windows, this would affect active terminal color output.
	/// On other systems, this would put special terminal codes;
	/// the terminal should support these codes or them will appear in text otherwise.
	/// The same will happen when stream is redirected into text file.
	/// 
	/// Beware that within multi-threaded environment inducing console colors
	/// might lead to colored text mixture due to concurrency.
	/// </summary>
	/* Method skipped due to unknown mapping: void SetConsoleTextColor(ostream theOStream, Message_ConsoleColor theTextColor, bool theIsIntenseText, ) */
	/// <summary>
	/// Setup console text color.
	/// 
	/// On Windows, this would affect active terminal color output.
	/// On other systems, this would put special terminal codes;
	/// the terminal should support these codes or them will appear in text otherwise.
	/// The same will happen when stream is redirected into text file.
	/// 
	/// Beware that within multi-threaded environment inducing console colors
	/// might lead to colored text mixture due to concurrency.
	/// </summary>
	/* Method skipped due to unknown mapping: void SetConsoleTextColor(ostream theOStream, Message_ConsoleColor theTextColor, bool theIsIntenseText, ) */
	/// <summary>
	/// Flushes the output stream and destroys it if it has been
	/// specified externally with option doFree (or if it is internal
	/// file stream)
	/// </summary>
	void Close();
	/// <summary>
	/// Returns reference to the output stream
	/// </summary>
	/* Method skipped due to unknown mapping: ostream GetStream() */
	/// <summary>
	/// Returns TRUE if text output into console should be colorized depending on message gravity; TRUE by default.
	/// </summary>
	bool ToColorize();
	/// <summary>
	/// Set if text output into console should be colorized depending on message gravity.
	/// </summary>
	void SetToColorize(bool theToColorize);
}; // class Message_PrinterOStream

//---------------------------------------------------------------------
//  Class  Message_PrinterSystemLog
//---------------------------------------------------------------------
/// <summary>
/// Implementation of a message printer associated with system log.
/// Implemented for the following systems:
/// - Windows, through ReportEventW().
/// - Android, through __android_log_write().
/// - UNIX/Linux, through syslog().
/// </summary>
public ref class Message_PrinterSystemLog sealed : public Macad::Occt::Message_Printer
{

#ifdef Include_Message_PrinterSystemLog_h
public:
	Include_Message_PrinterSystemLog_h
#endif

public:
	Message_PrinterSystemLog(::Message_PrinterSystemLog* nativeInstance)
		: Macad::Occt::Message_Printer( nativeInstance )
	{}

	Message_PrinterSystemLog(::Message_PrinterSystemLog& nativeInstance)
		: Macad::Occt::Message_Printer( nativeInstance )
	{}

	property ::Message_PrinterSystemLog* NativeInstance
	{
		::Message_PrinterSystemLog* get()
		{
			return static_cast<::Message_PrinterSystemLog*>(_NativeInstance);
		}
	}

	static Macad::Occt::Message_PrinterSystemLog^ CreateDowncasted(::Message_PrinterSystemLog* instance);

public:
	/// <summary>
	/// Main constructor.
	/// </summary>
	Message_PrinterSystemLog(Macad::Occt::TCollection_AsciiString^ theEventSourceName, Macad::Occt::Message_Gravity theTraceLevel);
	/// <summary>
	/// Main constructor.
	/// </summary>
	Message_PrinterSystemLog(Macad::Occt::TCollection_AsciiString^ theEventSourceName);
	Message_PrinterSystemLog(Macad::Occt::Message_PrinterSystemLog^ parameter1);
}; // class Message_PrinterSystemLog

//---------------------------------------------------------------------
//  Class  Message_PrinterToReport
//---------------------------------------------------------------------
/// <summary>
/// Implementation of a message printer associated with Message_Report
/// Send will create a new alert of the report. If string is sent, an alert is created by Eol only.
/// The alerts are sent into set report or default report of Message.
/// </summary>
public ref class Message_PrinterToReport sealed : public Macad::Occt::Message_Printer
{

#ifdef Include_Message_PrinterToReport_h
public:
	Include_Message_PrinterToReport_h
#endif

public:
	Message_PrinterToReport(::Message_PrinterToReport* nativeInstance)
		: Macad::Occt::Message_Printer( nativeInstance )
	{}

	Message_PrinterToReport(::Message_PrinterToReport& nativeInstance)
		: Macad::Occt::Message_Printer( nativeInstance )
	{}

	property ::Message_PrinterToReport* NativeInstance
	{
		::Message_PrinterToReport* get()
		{
			return static_cast<::Message_PrinterToReport*>(_NativeInstance);
		}
	}

	static Macad::Occt::Message_PrinterToReport^ CreateDowncasted(::Message_PrinterToReport* instance);

public:
	/// <summary>
	/// Create printer for redirecting messages into report.
	/// </summary>
	Message_PrinterToReport();
	Message_PrinterToReport(Macad::Occt::Message_PrinterToReport^ parameter1);
	/// <summary>
	/// Returns the current or default report
	/// </summary>
	Macad::Occt::Message_Report^ Report();
	/// <summary>
	/// Sets the printer report
	/// </summary>
	/// <param name="theReport">
	/// report for messages processing, if NULL, the default report is used
	/// </param>
	void SetReport(Macad::Occt::Message_Report^ theReport);
	/// <summary>
	/// Send a string message with specified trace level.
	/// Stream is converted to string value.
	/// Default implementation calls first method Send().
	/// </summary>
	/* Method skipped due to unknown mapping: void SendStringStream(stringstream theStream, Message_Gravity theGravity, ) */
	/// <summary>
	/// Send a string message with specified trace level.
	/// The object is converted to string in format: <object kind> : <object pointer>.
	/// The parameter theToPutEol specified whether end-of-line should be added to the end of the message.
	/// Default implementation calls first method Send().
	/// </summary>
	void SendObject(Macad::Occt::Standard_Transient^ theObject, Macad::Occt::Message_Gravity theGravity);
}; // class Message_PrinterToReport

}; // namespace Occt
}; // namespace Macad
