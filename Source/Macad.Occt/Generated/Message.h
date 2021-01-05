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
public enum class Message_MetricType
{
	Message_MetricType_None = 0,
	Message_MetricType_ThreadCPUUserTime = 1,
	Message_MetricType_ThreadCPUSystemTime = 2,
	Message_MetricType_ProcessCPUUserTime = 3,
	Message_MetricType_ProcessCPUSystemTime = 4,
	Message_MetricType_MemPrivate = 5,
	Message_MetricType_MemVirtual = 6,
	Message_MetricType_MemWorkingSet = 7,
	Message_MetricType_MemWorkingSetPeak = 8,
	Message_MetricType_MemSwapUsage = 9,
	Message_MetricType_MemSwapUsagePeak = 10,
	Message_MetricType_MemHeapUsage = 11
}; // enum  class Message_MetricType

//---------------------------------------------------------------------
//  Enum  Message_StatusType
//---------------------------------------------------------------------
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
	Macad::Occt::Message_Gravity GetTraceLevel();
	void SetTraceLevel(Macad::Occt::Message_Gravity theTraceLevel);
	void Send(Macad::Occt::TCollection_ExtendedString^ theString, Macad::Occt::Message_Gravity theGravity);
	void Send(System::String^ theString, Macad::Occt::Message_Gravity theGravity);
	void Send(Macad::Occt::TCollection_AsciiString^ theString, Macad::Occt::Message_Gravity theGravity);
	/* Method skipped due to unknown mapping: void SendStringStream(stringstream theStream, Message_Gravity theGravity, ) */
	void SendObject(Macad::Occt::Standard_Transient^ theObject, Macad::Occt::Message_Gravity theGravity);
}; // class Message_Printer

//---------------------------------------------------------------------
//  Class  Message_Messenger
//---------------------------------------------------------------------
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
	Message_Messenger();
	Message_Messenger(Macad::Occt::Message_Printer^ thePrinter);
	Message_Messenger(Macad::Occt::Message_Messenger^ parameter1);
	bool AddPrinter(Macad::Occt::Message_Printer^ thePrinter);
	bool RemovePrinter(Macad::Occt::Message_Printer^ thePrinter);
	/* Method skipped due to unknown mapping: Standard_Integer RemovePrinters(Standard_Type theType, ) */
	Macad::Occt::Message_SequenceOfPrinters^ Printers();
	Macad::Occt::Message_SequenceOfPrinters^ ChangePrinters();
	void Send(System::String^ theString, Macad::Occt::Message_Gravity theGravity);
	void Send(System::String^ theString);
	/* Method skipped due to unknown mapping: void Send(stringstream theStream, Message_Gravity theGravity, ) */
	/* Method skipped due to unknown mapping: void Send(stringstream theStream, Message_Gravity theGravity, ) */
	void Send(Macad::Occt::TCollection_AsciiString^ theString, Macad::Occt::Message_Gravity theGravity);
	void Send(Macad::Occt::TCollection_AsciiString^ theString);
	void Send(Macad::Occt::TCollection_ExtendedString^ theString, Macad::Occt::Message_Gravity theGravity);
	void Send(Macad::Occt::TCollection_ExtendedString^ theString);
	/* Method skipped due to unknown mapping: StreamBuffer Send(Message_Gravity theGravity, ) */
	void Send(Macad::Occt::Standard_Transient^ theObject, Macad::Occt::Message_Gravity theGravity);
	void Send(Macad::Occt::Standard_Transient^ theObject);
	/* Method skipped due to unknown mapping: StreamBuffer SendFail() */
	/* Method skipped due to unknown mapping: StreamBuffer SendAlarm() */
	/* Method skipped due to unknown mapping: StreamBuffer SendWarning() */
	/* Method skipped due to unknown mapping: StreamBuffer SendInfo() */
	/* Method skipped due to unknown mapping: StreamBuffer SendTrace() */
	void SendFail(Macad::Occt::TCollection_AsciiString^ theMessage);
	void SendAlarm(Macad::Occt::TCollection_AsciiString^ theMessage);
	void SendWarning(Macad::Occt::TCollection_AsciiString^ theMessage);
	void SendInfo(Macad::Occt::TCollection_AsciiString^ theMessage);
	void SendTrace(Macad::Occt::TCollection_AsciiString^ theMessage);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Message_Messenger

//---------------------------------------------------------------------
//  Class  Message_Report
//---------------------------------------------------------------------
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
	Message_Report();
	void AddAlert(Macad::Occt::Message_Gravity theGravity, Macad::Occt::Message_Alert^ theAlert);
	Macad::Occt::Message_ListOfAlert^ GetAlerts(Macad::Occt::Message_Gravity theGravity);
	/* Method skipped due to unknown mapping: Standard_Boolean HasAlert(Standard_Type theType, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean HasAlert(Standard_Type theType, Message_Gravity theGravity, ) */
	bool IsActiveInMessenger(Macad::Occt::Message_Messenger^ theMessenger);
	bool IsActiveInMessenger();
	void ActivateInMessenger(bool toActivate, Macad::Occt::Message_Messenger^ theMessenger);
	void ActivateInMessenger(bool toActivate);
	void UpdateActiveInMessenger(Macad::Occt::Message_Messenger^ theMessenger);
	void UpdateActiveInMessenger();
	void AddLevel(Macad::Occt::Message_Level^ theLevel, Macad::Occt::TCollection_AsciiString^ theName);
	void RemoveLevel(Macad::Occt::Message_Level^ theLevel);
	void Clear();
	void Clear(Macad::Occt::Message_Gravity theGravity);
	/* Method skipped due to unknown mapping: void Clear(Standard_Type theType, ) */
	/* Method skipped due to unknown mapping: NCollection_IndexedMap<Message_MetricType, NCollection_DefaultHasher<Message_MetricType> > ActiveMetrics() */
	void SetActiveMetric(Macad::Occt::Message_MetricType theMetricType, bool theActivate);
	void ClearMetrics();
	int Limit();
	void SetLimit(int theLimit);
	/* Method skipped due to unknown mapping: void Dump(ostream theOS, ) */
	/* Method skipped due to unknown mapping: void Dump(ostream theOS, Message_Gravity theGravity, ) */
	void SendMessages(Macad::Occt::Message_Messenger^ theMessenger);
	void SendMessages(Macad::Occt::Message_Messenger^ theMessenger, Macad::Occt::Message_Gravity theGravity);
	void Merge(Macad::Occt::Message_Report^ theOther);
	void Merge(Macad::Occt::Message_Report^ theOther, Macad::Occt::Message_Gravity theGravity);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Message_Report

//---------------------------------------------------------------------
//  Class  Message
//---------------------------------------------------------------------
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
	static Macad::Occt::Message_Messenger^ DefaultMessenger();
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
	static Macad::Occt::TCollection_AsciiString^ FillTime(int Hour, int Minute, double Second);
	static Macad::Occt::Message_Report^ DefaultReport(bool theToCreate);
	static Macad::Occt::Message_Report^ DefaultReport();
	static bool MetricFromString(System::String^ theString, Macad::Occt::Message_MetricType% theType);
	static System::String^ MetricToString(Macad::Occt::Message_MetricType theType);
	static Macad::Occt::Message_MetricType MetricFromString(System::String^ theString);
	/* Method skipped due to unknown mapping: Standard_Boolean ToOSDMetric(Message_MetricType theMetric, Counter theMemInfo, ) */
	/* Method skipped due to unknown mapping: Standard_Boolean ToMessageMetric(Counter theMemInfo, Message_MetricType theMetric, ) */
}; // class Message

//---------------------------------------------------------------------
//  Class  Message_Alert
//---------------------------------------------------------------------
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
	System::String^ GetMessageKey();
	bool SupportsMerge();
	bool Merge(Macad::Occt::Message_Alert^ theTarget);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Message_Alert

//---------------------------------------------------------------------
//  Class  Message_Attribute
//---------------------------------------------------------------------
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
	Message_Attribute(Macad::Occt::TCollection_AsciiString^ theName);
	Message_Attribute(Macad::Occt::Message_Attribute^ parameter1);
	System::String^ GetMessageKey();
	Macad::Occt::TCollection_AsciiString^ GetName();
	void SetName(Macad::Occt::TCollection_AsciiString^ theName);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Message_Attribute

//---------------------------------------------------------------------
//  Class  Message_CompositeAlerts
//---------------------------------------------------------------------
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
	Message_CompositeAlerts();
	Message_CompositeAlerts(Macad::Occt::Message_CompositeAlerts^ parameter1);
	Macad::Occt::Message_ListOfAlert^ Alerts(Macad::Occt::Message_Gravity theGravity);
	bool AddAlert(Macad::Occt::Message_Gravity theGravity, Macad::Occt::Message_Alert^ theAlert);
	bool RemoveAlert(Macad::Occt::Message_Gravity theGravity, Macad::Occt::Message_Alert^ theAlert);
	bool HasAlert(Macad::Occt::Message_Alert^ theAlert);
	/* Method skipped due to unknown mapping: Standard_Boolean HasAlert(Standard_Type theType, Message_Gravity theGravity, ) */
	void Clear();
	void Clear(Macad::Occt::Message_Gravity theGravity);
	/* Method skipped due to unknown mapping: void Clear(Standard_Type theType, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Message_CompositeAlerts

//---------------------------------------------------------------------
//  Class  Message_AlertExtended
//---------------------------------------------------------------------
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
	Message_AlertExtended();
	Message_AlertExtended(Macad::Occt::Message_AlertExtended^ parameter1);
	static Macad::Occt::Message_Alert^ AddAlert(Macad::Occt::Message_Report^ theReport, Macad::Occt::Message_Attribute^ theAttribute, Macad::Occt::Message_Gravity theGravity);
	System::String^ GetMessageKey();
	Macad::Occt::Message_Attribute^ Attribute();
	void SetAttribute(Macad::Occt::Message_Attribute^ theAttribute);
	Macad::Occt::Message_CompositeAlerts^ CompositeAlerts(bool theToCreate);
	Macad::Occt::Message_CompositeAlerts^ CompositeAlerts();
	bool SupportsMerge();
	bool Merge(Macad::Occt::Message_Alert^ theTarget);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Message_AlertExtended

//---------------------------------------------------------------------
//  Class  Message_ExecStatus
//---------------------------------------------------------------------
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
	enum class StatusMask
	{
		MType = 65280,
		MIndex = 255
	}; // enum  class StatusMask

	//---------------------------------------------------------------------
	//  Enum  StatusRange
	//---------------------------------------------------------------------
	enum class StatusRange
	{
		FirstStatus = 1,
		StatusesPerType = 32,
		NbStatuses = 128,
		LastStatus = 129
	}; // enum  class StatusRange

	Message_ExecStatus();
	Message_ExecStatus(Macad::Occt::Message_Status status);
	Message_ExecStatus(Macad::Occt::Message_ExecStatus^ parameter1);
	void Set(Macad::Occt::Message_Status status);
	bool IsSet(Macad::Occt::Message_Status status);
	void Clear(Macad::Occt::Message_Status status);
	bool IsDone();
	bool IsFail();
	bool IsWarn();
	bool IsAlarm();
	void SetAllDone();
	void SetAllWarn();
	void SetAllAlarm();
	void SetAllFail();
	void ClearAllDone();
	void ClearAllWarn();
	void ClearAllAlarm();
	void ClearAllFail();
	void Clear();
	void Add(Macad::Occt::Message_ExecStatus^ theOther);
	void And(Macad::Occt::Message_ExecStatus^ theOther);
	static int StatusIndex(Macad::Occt::Message_Status status);
	static int LocalStatusIndex(Macad::Occt::Message_Status status);
	static Macad::Occt::Message_StatusType TypeOfStatus(Macad::Occt::Message_Status status);
	static Macad::Occt::Message_Status StatusByIndex(int theIndex);
}; // class Message_ExecStatus

//---------------------------------------------------------------------
//  Class  Message_Msg
//---------------------------------------------------------------------
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
	Message_Msg();
	Message_Msg(Macad::Occt::Message_Msg^ theMsg);
	Message_Msg(System::String^ theKey);
	Message_Msg(Macad::Occt::TCollection_ExtendedString^ theKey);
	void Set(System::String^ theMsg);
	void Set(Macad::Occt::TCollection_ExtendedString^ theMsg);
	Macad::Occt::Message_Msg^ Arg(System::String^ theString);
	Macad::Occt::Message_Msg^ Arg(Macad::Occt::TCollection_AsciiString^ theString);
	Macad::Occt::Message_Msg^ Arg(Macad::Occt::TCollection_HAsciiString^ theString);
	Macad::Occt::Message_Msg^ Arg(Macad::Occt::TCollection_ExtendedString^ theString);
	Macad::Occt::Message_Msg^ Arg(Macad::Occt::TCollection_HExtendedString^ theString);
	Macad::Occt::Message_Msg^ Arg(int theInt);
	Macad::Occt::Message_Msg^ Arg(double theReal);
	Macad::Occt::TCollection_ExtendedString^ Original();
	Macad::Occt::TCollection_ExtendedString^ Value();
	bool IsEdited();
	Macad::Occt::TCollection_ExtendedString^ Get();
}; // class Message_Msg

//---------------------------------------------------------------------
//  Class  Message_Algorithm
//---------------------------------------------------------------------
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
	Message_Algorithm();
	Message_Algorithm(Macad::Occt::Message_Algorithm^ parameter1);
	void SetStatus(Macad::Occt::Message_Status% theStat);
	void SetStatus(Macad::Occt::Message_Status% theStat, int theInt);
	void SetStatus(Macad::Occt::Message_Status% theStat, System::String^ theStr, bool noRepetitions);
	void SetStatus(Macad::Occt::Message_Status% theStat, System::String^ theStr);
	void SetStatus(Macad::Occt::Message_Status% theStat, Macad::Occt::TCollection_AsciiString^ theStr, bool noRepetitions);
	void SetStatus(Macad::Occt::Message_Status% theStat, Macad::Occt::TCollection_AsciiString^ theStr);
	void SetStatus(Macad::Occt::Message_Status% theStat, Macad::Occt::TCollection_HAsciiString^ theStr, bool noRepetitions);
	void SetStatus(Macad::Occt::Message_Status% theStat, Macad::Occt::TCollection_HAsciiString^ theStr);
	void SetStatus(Macad::Occt::Message_Status% theStat, Macad::Occt::TCollection_ExtendedString^ theStr, bool noRepetitions);
	void SetStatus(Macad::Occt::Message_Status% theStat, Macad::Occt::TCollection_ExtendedString^ theStr);
	void SetStatus(Macad::Occt::Message_Status% theStat, Macad::Occt::TCollection_HExtendedString^ theStr, bool noRepetitions);
	void SetStatus(Macad::Occt::Message_Status% theStat, Macad::Occt::TCollection_HExtendedString^ theStr);
	void SetStatus(Macad::Occt::Message_Status% theStat, Macad::Occt::Message_Msg^ theMsg);
	Macad::Occt::Message_ExecStatus^ GetStatus();
	Macad::Occt::Message_ExecStatus^ ChangeStatus();
	void ClearStatus();
	void SetMessenger(Macad::Occt::Message_Messenger^ theMsgr);
	Macad::Occt::Message_Messenger^ GetMessenger();
	void SendStatusMessages(Macad::Occt::Message_ExecStatus^ theFilter, Macad::Occt::Message_Gravity theTraceLevel, int theMaxCount);
	void SendStatusMessages(Macad::Occt::Message_ExecStatus^ theFilter, Macad::Occt::Message_Gravity theTraceLevel);
	void SendStatusMessages(Macad::Occt::Message_ExecStatus^ theFilter);
	void SendMessages(Macad::Occt::Message_Gravity theTraceLevel, int theMaxCount);
	void SendMessages(Macad::Occt::Message_Gravity theTraceLevel);
	void SendMessages();
	void AddStatus(Macad::Occt::Message_Algorithm^ theOther);
	void AddStatus(Macad::Occt::Message_ExecStatus^ theStatus, Macad::Occt::Message_Algorithm^ theOther);
	Macad::Occt::TColStd_HPackedMapOfInteger^ GetMessageNumbers(Macad::Occt::Message_Status% theStatus);
	Macad::Occt::TColStd_HSequenceOfHExtendedString^ GetMessageStrings(Macad::Occt::Message_Status% theStatus);
	static Macad::Occt::TCollection_ExtendedString^ PrepareReport(Macad::Occt::TColStd_HPackedMapOfInteger^ theError, int theMaxCount);
	static Macad::Occt::TCollection_ExtendedString^ PrepareReport(Macad::Occt::TColStd_SequenceOfHExtendedString^ theReportSeq, int theMaxCount);
}; // class Message_Algorithm

//---------------------------------------------------------------------
//  Class  Message_AttributeMeter
//---------------------------------------------------------------------
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
	Message_AttributeMeter(Macad::Occt::TCollection_AsciiString^ theName);
	Message_AttributeMeter(Macad::Occt::Message_AttributeMeter^ parameter1);
	static double UndefinedMetricValue();
	bool HasMetric(Macad::Occt::Message_MetricType% theMetric);
	bool IsMetricValid(Macad::Occt::Message_MetricType% theMetric);
	double StartValue(Macad::Occt::Message_MetricType% theMetric);
	void SetStartValue(Macad::Occt::Message_MetricType% theMetric, double theValue);
	double StopValue(Macad::Occt::Message_MetricType% theMetric);
	void SetStopValue(Macad::Occt::Message_MetricType% theMetric, double theValue);
	static void StartAlert(Macad::Occt::Message_AlertExtended^ theAlert);
	static void StopAlert(Macad::Occt::Message_AlertExtended^ theAlert);
	static void SetAlertMetrics(Macad::Occt::Message_AlertExtended^ theAlert, bool theStartValue);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Message_AttributeMeter

//---------------------------------------------------------------------
//  Class  Message_AttributeObject
//---------------------------------------------------------------------
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
	Message_AttributeObject(Macad::Occt::Standard_Transient^ theObject, Macad::Occt::TCollection_AsciiString^ theName);
	Message_AttributeObject(Macad::Occt::Standard_Transient^ theObject);
	Message_AttributeObject(Macad::Occt::Message_AttributeObject^ parameter1);
	Macad::Occt::Standard_Transient^ Object();
	void SetObject(Macad::Occt::Standard_Transient^ theObject);
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Message_AttributeObject

//---------------------------------------------------------------------
//  Class  Message_AttributeStream
//---------------------------------------------------------------------
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
	/* Method skipped due to unknown mapping: void Message_AttributeStream(stringstream theStream, TCollection_AsciiString theName, ) */
	/* Method skipped due to unknown mapping: void Message_AttributeStream(stringstream theStream, TCollection_AsciiString theName, ) */
	/* Method skipped due to unknown mapping: stringstream Stream() */
	/* Method skipped due to unknown mapping: void SetStream(stringstream theStream, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
	/* Method skipped due to unknown mapping: void DumpJson(ostream theOStream, Standard_Integer theDepth, ) */
}; // class Message_AttributeStream

//---------------------------------------------------------------------
//  Class  Message_Level
//---------------------------------------------------------------------
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
	Message_Level(Macad::Occt::TCollection_AsciiString^ theName);
	Message_Level(Macad::Occt::Message_Level^ parameter1);
	Macad::Occt::Message_AlertExtended^ RootAlert();
	void SetRootAlert(Macad::Occt::Message_AlertExtended^ theAlert, bool isRequiredToStart);
	bool AddAlert(Macad::Occt::Message_Gravity theGravity, Macad::Occt::Message_Alert^ theAlert);
}; // class Message_Level

//---------------------------------------------------------------------
//  Class  Message_MsgFile
//---------------------------------------------------------------------
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
	static bool Load(System::String^ theDirName, System::String^ theFileName);
	static bool LoadFile(System::String^ theFName);
	static bool LoadFromEnv(System::String^ theEnvName, System::String^ theFileName, System::String^ theLangExt);
	static bool LoadFromEnv(System::String^ theEnvName, System::String^ theFileName);
	static bool LoadFromString(System::String^ theContent, int theLength);
	static bool LoadFromString(System::String^ theContent);
	static bool AddMsg(Macad::Occt::TCollection_AsciiString^ key, Macad::Occt::TCollection_ExtendedString^ text);
	static bool HasMsg(Macad::Occt::TCollection_AsciiString^ key);
	static Macad::Occt::TCollection_ExtendedString^ Msg(System::String^ key);
	static Macad::Occt::TCollection_ExtendedString^ Msg(Macad::Occt::TCollection_AsciiString^ key);
}; // class Message_MsgFile

//---------------------------------------------------------------------
//  Class  Message_PrinterOStream
//---------------------------------------------------------------------
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
	Message_PrinterOStream(Macad::Occt::Message_Gravity theTraceLevel);
	Message_PrinterOStream(System::String^ theFileName, bool theDoAppend, Macad::Occt::Message_Gravity theTraceLevel);
	Message_PrinterOStream(System::String^ theFileName, bool theDoAppend);
	Message_PrinterOStream(Macad::Occt::Message_PrinterOStream^ parameter1);
	/* Method skipped due to unknown mapping: void SetConsoleTextColor(ostream theOStream, Message_ConsoleColor theTextColor, bool theIsIntenseText, ) */
	/* Method skipped due to unknown mapping: void SetConsoleTextColor(ostream theOStream, Message_ConsoleColor theTextColor, bool theIsIntenseText, ) */
	void Close();
	/* Method skipped due to unknown mapping: ostream GetStream() */
	bool ToColorize();
	void SetToColorize(bool theToColorize);
}; // class Message_PrinterOStream

//---------------------------------------------------------------------
//  Class  Message_PrinterSystemLog
//---------------------------------------------------------------------
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
	Message_PrinterSystemLog(Macad::Occt::TCollection_AsciiString^ theEventSourceName, Macad::Occt::Message_Gravity theTraceLevel);
	Message_PrinterSystemLog(Macad::Occt::TCollection_AsciiString^ theEventSourceName);
	Message_PrinterSystemLog(Macad::Occt::Message_PrinterSystemLog^ parameter1);
}; // class Message_PrinterSystemLog

//---------------------------------------------------------------------
//  Class  Message_PrinterToReport
//---------------------------------------------------------------------
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
	Message_PrinterToReport();
	Message_PrinterToReport(Macad::Occt::Message_PrinterToReport^ parameter1);
	Macad::Occt::Message_Report^ Report();
	void SetReport(Macad::Occt::Message_Report^ theReport);
	/* Method skipped due to unknown mapping: void SendStringStream(stringstream theStream, Message_Gravity theGravity, ) */
	void SendObject(Macad::Occt::Standard_Transient^ theObject, Macad::Occt::Message_Gravity theGravity);
}; // class Message_PrinterToReport

//---------------------------------------------------------------------
//  Class  Message_ProgressRange
//---------------------------------------------------------------------
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
	Message_ProgressRange();
	Message_ProgressRange(Macad::Occt::Message_ProgressRange^ theOther);
	bool UserBreak();
	bool More();
	bool IsActive();
	void Close();
}; // class Message_ProgressRange

//---------------------------------------------------------------------
//  Class  Message_ProgressScope
//---------------------------------------------------------------------
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
	Message_ProgressScope();
	Message_ProgressScope(Macad::Occt::Message_ProgressRange^ theRange, Macad::Occt::TCollection_AsciiString^ theName, double theMax, bool isInfinite);
	Message_ProgressScope(Macad::Occt::Message_ProgressRange^ theRange, Macad::Occt::TCollection_AsciiString^ theName, double theMax);
	/* Method skipped due to unknown mapping: void Message_ProgressScope(Message_ProgressRange theRange, NullString theName, Standard_Real theMax, Standard_Boolean isInfinite, ) */
	/* Method skipped due to unknown mapping: void Message_ProgressScope(Message_ProgressRange theRange, NullString theName, Standard_Real theMax, Standard_Boolean isInfinite, ) */
	void SetName(Macad::Occt::TCollection_AsciiString^ theName);
	bool UserBreak();
	bool More();
	Macad::Occt::Message_ProgressRange^ Next(double theStep);
	Macad::Occt::Message_ProgressRange^ Next();
	void Show();
	bool IsActive();
	System::String^ Name();
	Macad::Occt::Message_ProgressScope^ Parent();
	double MaxValue();
	double Value();
	bool IsInfinite();
	double GetPortion();
	void Close();
}; // class Message_ProgressScope

}; // namespace Occt
}; // namespace Macad
