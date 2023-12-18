// Generated wrapper code for package Message

#include "OcctPCH.h"
#include "Message.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "TCollection.h"
#include "Standard.h"


//---------------------------------------------------------------------
//  Class  Message_ListOfAlert
//---------------------------------------------------------------------

Macad::Occt::Message_ListOfAlert::Message_ListOfAlert()
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Message_ListOfAlert();
}

Macad::Occt::Message_ListOfAlert::Message_ListOfAlert(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
    : Macad::Occt::NCollection_BaseList(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Message_ListOfAlert(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

int Macad::Occt::Message_ListOfAlert::Size()
{
    int _result = ((::Message_ListOfAlert*)_NativeInstance)->Size();
    return _result;
}

Macad::Occt::Message_ListOfAlert^ Macad::Occt::Message_ListOfAlert::Assign(Macad::Occt::Message_ListOfAlert^ theOther)
{
    ::Message_ListOfAlert* _result = new ::Message_ListOfAlert();
    *_result = ((::Message_ListOfAlert*)_NativeInstance)->Assign(*(::Message_ListOfAlert*)theOther->NativeInstance);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Message_ListOfAlert(_result);
}

void Macad::Occt::Message_ListOfAlert::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
    ((::Message_ListOfAlert*)_NativeInstance)->Clear(Handle(::NCollection_BaseAllocator)(theAllocator->NativeInstance));
}

void Macad::Occt::Message_ListOfAlert::Clear()
{
    ((::Message_ListOfAlert*)_NativeInstance)->Clear(0L);
}

void Macad::Occt::Message_ListOfAlert::RemoveFirst()
{
    ((::Message_ListOfAlert*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::Message_ListOfAlert::Reverse()
{
    ((::Message_ListOfAlert*)_NativeInstance)->Reverse();
}



//---------------------------------------------------------------------
//  Class  Message_Printer
//---------------------------------------------------------------------

Macad::Occt::Message_Gravity Macad::Occt::Message_Printer::GetTraceLevel()
{
    ::Message_Gravity _result = ((::Message_Printer*)_NativeInstance)->GetTraceLevel();
    return (Macad::Occt::Message_Gravity)_result;
}

void Macad::Occt::Message_Printer::SetTraceLevel(Macad::Occt::Message_Gravity theTraceLevel)
{
    ((::Message_Printer*)_NativeInstance)->SetTraceLevel((::Message_Gravity)theTraceLevel);
}

void Macad::Occt::Message_Printer::Send(Macad::Occt::TCollection_ExtendedString^ theString, Macad::Occt::Message_Gravity theGravity)
{
    ((::Message_Printer*)_NativeInstance)->Send(*(::TCollection_ExtendedString*)theString->NativeInstance, (::Message_Gravity)theGravity);
}

void Macad::Occt::Message_Printer::Send(System::String^ theString, Macad::Occt::Message_Gravity theGravity)
{
    const char* sz_theString = (char*)(void*)Marshal::StringToHGlobalAnsi(theString);
    ((::Message_Printer*)_NativeInstance)->Send(sz_theString, (::Message_Gravity)theGravity);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString);
}

void Macad::Occt::Message_Printer::Send(Macad::Occt::TCollection_AsciiString^ theString, Macad::Occt::Message_Gravity theGravity)
{
    ((::Message_Printer*)_NativeInstance)->Send(*(::TCollection_AsciiString*)theString->NativeInstance, (::Message_Gravity)theGravity);
}

void Macad::Occt::Message_Printer::SendObject(Macad::Occt::Standard_Transient^ theObject, Macad::Occt::Message_Gravity theGravity)
{
    ((::Message_Printer*)_NativeInstance)->SendObject(Handle(::Standard_Transient)(theObject->NativeInstance), (::Message_Gravity)theGravity);
}

Macad::Occt::Message_Printer^ Macad::Occt::Message_Printer::CreateDowncasted(::Message_Printer* instance)
{
    return gcnew Macad::Occt::Message_Printer( instance );
}



//---------------------------------------------------------------------
//  Class  Message_Messenger
//---------------------------------------------------------------------

Macad::Occt::Message_Messenger::Message_Messenger()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Message_Messenger();
}

Macad::Occt::Message_Messenger::Message_Messenger(Macad::Occt::Message_Printer^ thePrinter)
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Message_Messenger(Handle(::Message_Printer)(thePrinter->NativeInstance));
}

bool Macad::Occt::Message_Messenger::AddPrinter(Macad::Occt::Message_Printer^ thePrinter)
{
    bool _result = ((::Message_Messenger*)_NativeInstance)->AddPrinter(Handle(::Message_Printer)(thePrinter->NativeInstance));
    return _result;
}

bool Macad::Occt::Message_Messenger::RemovePrinter(Macad::Occt::Message_Printer^ thePrinter)
{
    bool _result = ((::Message_Messenger*)_NativeInstance)->RemovePrinter(Handle(::Message_Printer)(thePrinter->NativeInstance));
    return _result;
}

void Macad::Occt::Message_Messenger::Send(System::String^ theString, Macad::Occt::Message_Gravity theGravity)
{
    const char* sz_theString = (char*)(void*)Marshal::StringToHGlobalAnsi(theString);
    ((::Message_Messenger*)_NativeInstance)->Send(sz_theString, (::Message_Gravity)theGravity);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString);
}

void Macad::Occt::Message_Messenger::Send(System::String^ theString)
{
    const char* sz_theString = (char*)(void*)Marshal::StringToHGlobalAnsi(theString);
    ((::Message_Messenger*)_NativeInstance)->Send(sz_theString, Message_Warning);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString);
}

void Macad::Occt::Message_Messenger::Send(Macad::Occt::TCollection_AsciiString^ theString, Macad::Occt::Message_Gravity theGravity)
{
    ((::Message_Messenger*)_NativeInstance)->Send(*(::TCollection_AsciiString*)theString->NativeInstance, (::Message_Gravity)theGravity);
}

void Macad::Occt::Message_Messenger::Send(Macad::Occt::TCollection_AsciiString^ theString)
{
    ((::Message_Messenger*)_NativeInstance)->Send(*(::TCollection_AsciiString*)theString->NativeInstance, Message_Warning);
}

void Macad::Occt::Message_Messenger::Send(Macad::Occt::TCollection_ExtendedString^ theString, Macad::Occt::Message_Gravity theGravity)
{
    ((::Message_Messenger*)_NativeInstance)->Send(*(::TCollection_ExtendedString*)theString->NativeInstance, (::Message_Gravity)theGravity);
}

void Macad::Occt::Message_Messenger::Send(Macad::Occt::TCollection_ExtendedString^ theString)
{
    ((::Message_Messenger*)_NativeInstance)->Send(*(::TCollection_ExtendedString*)theString->NativeInstance, Message_Warning);
}

void Macad::Occt::Message_Messenger::Send(Macad::Occt::Standard_Transient^ theObject, Macad::Occt::Message_Gravity theGravity)
{
    ((::Message_Messenger*)_NativeInstance)->Send(Handle(::Standard_Transient)(theObject->NativeInstance), (::Message_Gravity)theGravity);
}

void Macad::Occt::Message_Messenger::Send(Macad::Occt::Standard_Transient^ theObject)
{
    ((::Message_Messenger*)_NativeInstance)->Send(Handle(::Standard_Transient)(theObject->NativeInstance), Message_Warning);
}

void Macad::Occt::Message_Messenger::SendFail(Macad::Occt::TCollection_AsciiString^ theMessage)
{
    ((::Message_Messenger*)_NativeInstance)->SendFail(*(::TCollection_AsciiString*)theMessage->NativeInstance);
}

void Macad::Occt::Message_Messenger::SendAlarm(Macad::Occt::TCollection_AsciiString^ theMessage)
{
    ((::Message_Messenger*)_NativeInstance)->SendAlarm(*(::TCollection_AsciiString*)theMessage->NativeInstance);
}

void Macad::Occt::Message_Messenger::SendWarning(Macad::Occt::TCollection_AsciiString^ theMessage)
{
    ((::Message_Messenger*)_NativeInstance)->SendWarning(*(::TCollection_AsciiString*)theMessage->NativeInstance);
}

void Macad::Occt::Message_Messenger::SendInfo(Macad::Occt::TCollection_AsciiString^ theMessage)
{
    ((::Message_Messenger*)_NativeInstance)->SendInfo(*(::TCollection_AsciiString*)theMessage->NativeInstance);
}

void Macad::Occt::Message_Messenger::SendTrace(Macad::Occt::TCollection_AsciiString^ theMessage)
{
    ((::Message_Messenger*)_NativeInstance)->SendTrace(*(::TCollection_AsciiString*)theMessage->NativeInstance);
}

void Macad::Occt::Message_Messenger::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Message_Messenger*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Message_Messenger::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Message_Messenger*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::Message_Messenger^ Macad::Occt::Message_Messenger::CreateDowncasted(::Message_Messenger* instance)
{
    return gcnew Macad::Occt::Message_Messenger( instance );
}



//---------------------------------------------------------------------
//  Class  Message_Report
//---------------------------------------------------------------------

Macad::Occt::Message_Report::Message_Report()
    : Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
    NativeInstance = new ::Message_Report();
}

Macad::Occt::Message_ListOfAlert^ Macad::Occt::Message_Report::GetAlerts(Macad::Occt::Message_Gravity theGravity)
{
    ::Message_ListOfAlert* _result = new ::Message_ListOfAlert();
    *_result = (::Message_ListOfAlert)((::Message_Report*)_NativeInstance)->GetAlerts((::Message_Gravity)theGravity);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::Message_ListOfAlert(_result);
}

bool Macad::Occt::Message_Report::IsActiveInMessenger(Macad::Occt::Message_Messenger^ theMessenger)
{
    bool _result = ((::Message_Report*)_NativeInstance)->IsActiveInMessenger(Handle(::Message_Messenger)(theMessenger->NativeInstance));
    return _result;
}

bool Macad::Occt::Message_Report::IsActiveInMessenger()
{
    bool _result = ((::Message_Report*)_NativeInstance)->IsActiveInMessenger(nullptr);
    return _result;
}

void Macad::Occt::Message_Report::ActivateInMessenger(bool toActivate, Macad::Occt::Message_Messenger^ theMessenger)
{
    ((::Message_Report*)_NativeInstance)->ActivateInMessenger(toActivate, Handle(::Message_Messenger)(theMessenger->NativeInstance));
}

void Macad::Occt::Message_Report::ActivateInMessenger(bool toActivate)
{
    ((::Message_Report*)_NativeInstance)->ActivateInMessenger(toActivate, nullptr);
}

void Macad::Occt::Message_Report::UpdateActiveInMessenger(Macad::Occt::Message_Messenger^ theMessenger)
{
    ((::Message_Report*)_NativeInstance)->UpdateActiveInMessenger(Handle(::Message_Messenger)(theMessenger->NativeInstance));
}

void Macad::Occt::Message_Report::UpdateActiveInMessenger()
{
    ((::Message_Report*)_NativeInstance)->UpdateActiveInMessenger(nullptr);
}

void Macad::Occt::Message_Report::Clear()
{
    ((::Message_Report*)_NativeInstance)->Clear();
}

void Macad::Occt::Message_Report::Clear(Macad::Occt::Message_Gravity theGravity)
{
    ((::Message_Report*)_NativeInstance)->Clear((::Message_Gravity)theGravity);
}

void Macad::Occt::Message_Report::SetActiveMetric(Macad::Occt::Message_MetricType theMetricType, bool theActivate)
{
    ((::Message_Report*)_NativeInstance)->SetActiveMetric((::Message_MetricType)theMetricType, theActivate);
}

void Macad::Occt::Message_Report::ClearMetrics()
{
    ((::Message_Report*)_NativeInstance)->ClearMetrics();
}

int Macad::Occt::Message_Report::Limit()
{
    int _result = ((::Message_Report*)_NativeInstance)->Limit();
    return _result;
}

void Macad::Occt::Message_Report::SetLimit(int theLimit)
{
    ((::Message_Report*)_NativeInstance)->SetLimit(theLimit);
}

void Macad::Occt::Message_Report::Dump(System::IO::TextWriter^ theOS)
{
    std::ostringstream oss_theOS;
    ((::Message_Report*)_NativeInstance)->Dump(oss_theOS);
    theOS->Write(gcnew System::String(oss_theOS.str().c_str()));
}

void Macad::Occt::Message_Report::Dump(System::IO::TextWriter^ theOS, Macad::Occt::Message_Gravity theGravity)
{
    std::ostringstream oss_theOS;
    ((::Message_Report*)_NativeInstance)->Dump(oss_theOS, (::Message_Gravity)theGravity);
    theOS->Write(gcnew System::String(oss_theOS.str().c_str()));
}

void Macad::Occt::Message_Report::SendMessages(Macad::Occt::Message_Messenger^ theMessenger)
{
    ((::Message_Report*)_NativeInstance)->SendMessages(Handle(::Message_Messenger)(theMessenger->NativeInstance));
}

void Macad::Occt::Message_Report::SendMessages(Macad::Occt::Message_Messenger^ theMessenger, Macad::Occt::Message_Gravity theGravity)
{
    ((::Message_Report*)_NativeInstance)->SendMessages(Handle(::Message_Messenger)(theMessenger->NativeInstance), (::Message_Gravity)theGravity);
}

void Macad::Occt::Message_Report::Merge(Macad::Occt::Message_Report^ theOther)
{
    ((::Message_Report*)_NativeInstance)->Merge(Handle(::Message_Report)(theOther->NativeInstance));
}

void Macad::Occt::Message_Report::Merge(Macad::Occt::Message_Report^ theOther, Macad::Occt::Message_Gravity theGravity)
{
    ((::Message_Report*)_NativeInstance)->Merge(Handle(::Message_Report)(theOther->NativeInstance), (::Message_Gravity)theGravity);
}

void Macad::Occt::Message_Report::DumpJson(System::IO::TextWriter^ theOStream, int theDepth)
{
    std::ostringstream oss_theOStream;
    ((::Message_Report*)_NativeInstance)->DumpJson(oss_theOStream, theDepth);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

void Macad::Occt::Message_Report::DumpJson(System::IO::TextWriter^ theOStream)
{
    std::ostringstream oss_theOStream;
    ((::Message_Report*)_NativeInstance)->DumpJson(oss_theOStream, -1);
    theOStream->Write(gcnew System::String(oss_theOStream.str().c_str()));
}

Macad::Occt::Message_Report^ Macad::Occt::Message_Report::CreateDowncasted(::Message_Report* instance)
{
    return gcnew Macad::Occt::Message_Report( instance );
}



//---------------------------------------------------------------------
//  Class  Message
//---------------------------------------------------------------------

Macad::Occt::Message::Message()
    : Macad::Occt::BaseClass<::Message>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Message();
}

Macad::Occt::Message_Messenger^ Macad::Occt::Message::DefaultMessenger()
{
    Handle(::Message_Messenger) _result = ::Message::DefaultMessenger();
    return _result.IsNull() ? nullptr : Macad::Occt::Message_Messenger::CreateDowncasted(_result.get());
}

void Macad::Occt::Message::Send(Macad::Occt::TCollection_AsciiString^ theMessage, Macad::Occt::Message_Gravity theGravity)
{
    ::Message::Send(*(::TCollection_AsciiString*)theMessage->NativeInstance, (::Message_Gravity)theGravity);
}

void Macad::Occt::Message::SendFail(Macad::Occt::TCollection_AsciiString^ theMessage)
{
    ::Message::SendFail(*(::TCollection_AsciiString*)theMessage->NativeInstance);
}

void Macad::Occt::Message::SendAlarm(Macad::Occt::TCollection_AsciiString^ theMessage)
{
    ::Message::SendAlarm(*(::TCollection_AsciiString*)theMessage->NativeInstance);
}

void Macad::Occt::Message::SendWarning(Macad::Occt::TCollection_AsciiString^ theMessage)
{
    ::Message::SendWarning(*(::TCollection_AsciiString*)theMessage->NativeInstance);
}

void Macad::Occt::Message::SendInfo(Macad::Occt::TCollection_AsciiString^ theMessage)
{
    ::Message::SendInfo(*(::TCollection_AsciiString*)theMessage->NativeInstance);
}

void Macad::Occt::Message::SendTrace(Macad::Occt::TCollection_AsciiString^ theMessage)
{
    ::Message::SendTrace(*(::TCollection_AsciiString*)theMessage->NativeInstance);
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::Message::FillTime(int Hour, int Minute, double Second)
{
    ::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
    *_result = ::Message::FillTime(Hour, Minute, Second);
    return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

Macad::Occt::Message_Report^ Macad::Occt::Message::DefaultReport(bool theToCreate)
{
    Handle(::Message_Report) _result = ::Message::DefaultReport(theToCreate);
    return _result.IsNull() ? nullptr : Macad::Occt::Message_Report::CreateDowncasted(_result.get());
}

Macad::Occt::Message_Report^ Macad::Occt::Message::DefaultReport()
{
    Handle(::Message_Report) _result = ::Message::DefaultReport(false);
    return _result.IsNull() ? nullptr : Macad::Occt::Message_Report::CreateDowncasted(_result.get());
}

bool Macad::Occt::Message::MetricFromString(System::String^ theString, Macad::Occt::Message_MetricType% theType)
{
    const char* sz_theString = (char*)(void*)Marshal::StringToHGlobalAnsi(theString);
    pin_ptr<Macad::Occt::Message_MetricType> pp_theType = &theType;
    bool _result = ::Message::MetricFromString(sz_theString, *(::Message_MetricType*)pp_theType);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString);
    return _result;
}

System::String^ Macad::Occt::Message::MetricToString(Macad::Occt::Message_MetricType theType)
{
    Standard_CString _result = ::Message::MetricToString((::Message_MetricType)theType);
    return gcnew System::String(_result);
}

Macad::Occt::Message_MetricType Macad::Occt::Message::MetricFromString(System::String^ theString)
{
    const char* sz_theString = (char*)(void*)Marshal::StringToHGlobalAnsi(theString);
    ::Message_MetricType _result = ::Message::MetricFromString(sz_theString);
    Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theString);
    return (Macad::Occt::Message_MetricType)_result;
}



//---------------------------------------------------------------------
//  Class  Message_ProgressRange
//---------------------------------------------------------------------

Macad::Occt::Message_ProgressRange::Message_ProgressRange()
    : Macad::Occt::BaseClass<::Message_ProgressRange>(BaseClass::InitMode::Uninitialized)
{
    _NativeInstance = new ::Message_ProgressRange();
}

bool Macad::Occt::Message_ProgressRange::UserBreak()
{
    bool _result = ((::Message_ProgressRange*)_NativeInstance)->UserBreak();
    return _result;
}

bool Macad::Occt::Message_ProgressRange::More()
{
    bool _result = ((::Message_ProgressRange*)_NativeInstance)->More();
    return _result;
}

bool Macad::Occt::Message_ProgressRange::IsActive()
{
    bool _result = ((::Message_ProgressRange*)_NativeInstance)->IsActive();
    return _result;
}

void Macad::Occt::Message_ProgressRange::Close()
{
    ((::Message_ProgressRange*)_NativeInstance)->Close();
}


