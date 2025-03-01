// Generated wrapper code for package Message

#pragma once

#include "NCollection.h"

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
    Trace = 0,
    Info = 1,
    Warning = 2,
    Alarm = 3,
    Fail = 4
}; // enum  class Message_Gravity

//---------------------------------------------------------------------
//  Enum  Message_MetricType
//---------------------------------------------------------------------
/// <summary>
/// Specifies kind of report information to collect
/// </summary>
public enum class Message_MetricType
{
    None = 0,
    ThreadCPUUserTime = 1,
    ThreadCPUSystemTime = 2,
    ProcessCPUUserTime = 3,
    ProcessCPUSystemTime = 4,
    WallClock = 5,
    MemPrivate = 6,
    MemVirtual = 7,
    MemWorkingSet = 8,
    MemWorkingSetPeak = 9,
    MemSwapUsage = 10,
    MemSwapUsagePeak = 11,
    MemHeapUsage = 12
}; // enum  class Message_MetricType

//---------------------------------------------------------------------
//  Class  Message_ListOfAlert
//---------------------------------------------------------------------
public ref class Message_ListOfAlert sealed
    : public Macad::Occt::NCollection_BaseList
{

#ifdef Include_Message_ListOfAlert_h
public:
    Include_Message_ListOfAlert_h
#endif

public:
    Message_ListOfAlert(::Message_ListOfAlert* nativeInstance)
        : Macad::Occt::NCollection_BaseList( nativeInstance )
    {}

    Message_ListOfAlert(::Message_ListOfAlert& nativeInstance)
        : Macad::Occt::NCollection_BaseList( nativeInstance )
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
    int Size();
    Macad::Occt::Message_ListOfAlert^ Assign(Macad::Occt::Message_ListOfAlert^ theOther);
    void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
    void Clear();
    /* Method skipped due to unknown mapping: Message_Alert First() */
    /* Method skipped due to unknown mapping: Message_Alert Last() */
    /* Method skipped due to unknown mapping: Message_Alert Append(Message_Alert theItem, ) */
    /* Method skipped due to unknown mapping: Message_Alert Prepend(Message_Alert theItem, ) */
    void RemoveFirst();
    /* Method skipped due to unknown mapping: void Remove(Iterator theIter, ) */
    /* Method skipped due to unknown mapping: Message_Alert InsertBefore(Message_Alert theItem, Iterator theIter, ) */
    /* Method skipped due to unknown mapping: Message_Alert InsertAfter(Message_Alert theItem, Iterator theIter, ) */
    void Reverse();
}; // class Message_ListOfAlert

//---------------------------------------------------------------------
//  Class  Message_Printer
//---------------------------------------------------------------------
/// <summary>
/// Abstract interface class defining printer as output context for text messages
/// 
/// The message, besides being text string, has associated gravity
/// level, which can be used by printer to decide either to process a message or ignore it.
/// </summary>
public ref class Message_Printer
    : public Macad::Occt::Standard_Transient
{

#ifdef Include_Message_Printer_h
public:
    Include_Message_Printer_h
#endif

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

public:
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
    /* Method skipped due to unknown mapping: void SendStringStream(stringstream theStream, Message_Gravity theGravity, ) */
    /// <summary>
    /// Send a string message with specified trace level.
    /// The object is converted to string in format: <object kind> : <object pointer>.
    /// Default implementation calls first method Send().
    /// </summary>
    void SendObject(Macad::Occt::Standard_Transient^ theObject, Macad::Occt::Message_Gravity theGravity);
    static Macad::Occt::Message_Printer^ CreateDowncasted(::Message_Printer* instance);
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
public ref class Message_Messenger sealed
    : public Macad::Occt::Standard_Transient
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
    /* Method skipped due to unknown mapping: int RemovePrinters(Standard_Type theType, ) */
    /* Method skipped due to unknown mapping: Message_SequenceOfPrinters Printers() */
    /* Method skipped due to unknown mapping: Message_SequenceOfPrinters ChangePrinters() */
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
    /* Method skipped due to unknown mapping: void Send(stringstream theStream, Message_Gravity theGravity, ) */
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
    /* Method skipped due to unknown mapping: StreamBuffer Send(Message_Gravity theGravity, ) */
    /// <summary>
    /// See above
    /// </summary>
    void Send(Macad::Occt::Standard_Transient^ theObject, Macad::Occt::Message_Gravity theGravity);
    /// <summary>
    /// See above
    /// </summary>
    void Send(Macad::Occt::Standard_Transient^ theObject);
    /* Method skipped due to unknown mapping: StreamBuffer SendFail() */
    /* Method skipped due to unknown mapping: StreamBuffer SendAlarm() */
    /* Method skipped due to unknown mapping: StreamBuffer SendWarning() */
    /* Method skipped due to unknown mapping: StreamBuffer SendInfo() */
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
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Message_Messenger^ CreateDowncasted(::Message_Messenger* instance);
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
public ref class Message_Report sealed
    : public Macad::Occt::Standard_Transient
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

public:
    /// <summary>
    /// Empty constructor
    /// </summary>
    Message_Report();
    /* Method skipped due to unknown mapping: void AddAlert(Message_Gravity theGravity, Message_Alert theAlert, ) */
    /// <summary>
    /// Returns list of collected alerts with specified gravity
    /// </summary>
    Macad::Occt::Message_ListOfAlert^ GetAlerts(Macad::Occt::Message_Gravity theGravity);
    /* Method skipped due to unknown mapping: bool HasAlert(Standard_Type theType, ) */
    /* Method skipped due to unknown mapping: bool HasAlert(Standard_Type theType, Message_Gravity theGravity, ) */
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
    /// Creates an instance of Message_PrinterToReport with the current report and register it in
    /// messenger
    /// </summary>
    /// <param name="toActivate">
    /// if true, activated else deactivated
    /// </param>
    /// <param name="theMessenger">
    /// the messenger. If it's NULL, the default messenger is used
    /// </param>
    void ActivateInMessenger(bool toActivate, Macad::Occt::Message_Messenger^ theMessenger);
    /// <summary>
    /// Creates an instance of Message_PrinterToReport with the current report and register it in
    /// messenger
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
    /* Method skipped due to unknown mapping: void AddLevel(Message_Level theLevel, TCollection_AsciiString theName, ) */
    /* Method skipped due to unknown mapping: void RemoveLevel(Message_Level theLevel, ) */
    /// <summary>
    /// Clears all collected alerts
    /// </summary>
    void Clear();
    /// <summary>
    /// Clears collected alerts with specified gravity
    /// </summary>
    void Clear(Macad::Occt::Message_Gravity theGravity);
    /* Method skipped due to unknown mapping: void Clear(Standard_Type theType, ) */
    /* Method skipped due to unknown mapping: NCollection_IndexedMap<Message_MetricType> ActiveMetrics() */
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
    void Dump(System::IO::TextWriter^ theOS);
    /// <summary>
    /// Dumps collected alerts with specified gravity to stream
    /// </summary>
    void Dump(System::IO::TextWriter^ theOS, Macad::Occt::Message_Gravity theGravity);
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
    void DumpJson(System::IO::TextWriter^ theOStream, int theDepth);
    /// <summary>
    /// Dumps the content of me into the stream
    /// </summary>
    void DumpJson(System::IO::TextWriter^ theOStream);
    static Macad::Occt::Message_Report^ CreateDowncasted(::Message_Report* instance);
}; // class Message_Report

//---------------------------------------------------------------------
//  Class  Message
//---------------------------------------------------------------------
/// <summary>
/// Defines
/// - tools to work with messages
/// - basic tools intended for progress indication
/// </summary>
public ref class Message sealed
    : public Macad::Occt::BaseClass<::Message>
{

#ifdef Include_Message_h
public:
    Include_Message_h
#endif

public:
    Message(::Message* nativeInstance)
        : Macad::Occt::BaseClass<::Message>( nativeInstance, true )
    {}

    Message(::Message& nativeInstance)
        : Macad::Occt::BaseClass<::Message>( &nativeInstance, false )
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
    /// <summary>
    /// Defines default messenger for OCCT applications.
    /// This is global static instance of the messenger.
    /// By default, it contains single printer directed to std::cout.
    /// It can be customized according to the application needs.
    /// 
    /// The following syntax can be used to print messages:
    /// </summary>
    /// @code
    /// Message::DefaultMessenger()->Send ("My Warning", Message_Warning);
    /// Message::SendWarning ("My Warning"); // short-cut for Message_Warning
    /// Message::SendWarning() << "My Warning with " << theCounter << " arguments";
    /// Message::SendFail ("My Failure"); // short-cut for Message_Fail
    /// @endcode
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
    /* Method skipped due to unknown mapping: bool ToOSDMetric(Message_MetricType theMetric, Counter theMemInfo, ) */
    /* Method skipped due to unknown mapping: bool ToMessageMetric(Counter theMemInfo, Message_MetricType theMetric, ) */
}; // class Message

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
public ref class Message_ProgressRange sealed
    : public Macad::Occt::BaseClass<::Message_ProgressRange>
{

#ifdef Include_Message_ProgressRange_h
public:
    Include_Message_ProgressRange_h
#endif

public:
    Message_ProgressRange(::Message_ProgressRange* nativeInstance)
        : Macad::Occt::BaseClass<::Message_ProgressRange>( nativeInstance, true )
    {}

    Message_ProgressRange(::Message_ProgressRange& nativeInstance)
        : Macad::Occt::BaseClass<::Message_ProgressRange>( &nativeInstance, false )
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

}; // namespace Occt
}; // namespace Macad
