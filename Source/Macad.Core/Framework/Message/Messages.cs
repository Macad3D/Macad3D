using System;
using System.Runtime.InteropServices;
using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Core;

public static class Messages
{
    public static void Trace(string line, string explanation = null, Entity sender = null)
    {
        var handler = CoreContext.Current?.MessageHandler;
        handler?.AddMessage(new MessageItem(MessageSeverity.Trace, line, explanation, sender ?? handler.CurrentReferenceEntity));
    }

    //--------------------------------------------------------------------------------------------------

    public static void Info(string line, string explanation = null, Entity sender = null)
    {
        var handler = CoreContext.Current?.MessageHandler;
        handler?.AddMessage(new MessageItem(MessageSeverity.Info, line, explanation, sender ?? handler.CurrentReferenceEntity));
    }

    //--------------------------------------------------------------------------------------------------

    public static void Warning(string line, string explanation = null, Entity sender = null)
    {
        var handler = CoreContext.Current?.MessageHandler;
        handler?.AddMessage(new MessageItem(MessageSeverity.Warning, line, explanation, sender ?? handler.CurrentReferenceEntity));
    }

    //--------------------------------------------------------------------------------------------------

    public static void Error(string line, string explanation = null, Entity sender = null)
    {
        var handler = CoreContext.Current?.MessageHandler;
        handler?.AddMessage(new MessageItem(MessageSeverity.Error, line, explanation, sender ?? handler.CurrentReferenceEntity));
    }

    //--------------------------------------------------------------------------------------------------

    public static void Exception(string line, Exception exception, Entity sender = null)
    {
        string msg;
        if (exception is SEHException)
        {
            // Try to get infos from native
            var info = Interop.ExceptionHelper.GetNativeExceptionInfo(Marshal.GetExceptionPointers());
            if (info != null)
            {
                msg = $"{info.Message} [{info.Source}]";
            }
            else
            {
                msg = "Unknown native exception.";
            }
        }
        else
        {
            msg = $"{exception.Message} [ {exception.GetType().FullName} ]";
        }

        string expl = "Exception: " + msg + "\n" + exception.StackTrace;
        var handler = CoreContext.Current?.MessageHandler;
        handler?.AddMessage(new MessageItem(MessageSeverity.Error, line, expl, sender ?? handler.CurrentReferenceEntity));
    }

    //--------------------------------------------------------------------------------------------------

    public static void Report(Message_Report report)
    {
        report.SendMessages(Message.DefaultMessenger());
    }

    //--------------------------------------------------------------------------------------------------

}