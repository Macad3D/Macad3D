using System;
using System.Text;
using Macad.Core.Topology;

namespace Macad.Core;

public enum MessageSeverity
{
    Trace = 0,
    Info = 1,
    Warning = 2,
    Error = 3
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

public class MessageItem
{
    public DateTime TimeStamp { get; }
    public string Text { get; }
    public MessageSeverity Severity { get; }
    public string[] Explanation { get; }
    public WeakReference<Entity> Sender { get; }

    //--------------------------------------------------------------------------------------------------

    static readonly char[] _LineBreaks = { '\n', '\r' };

    //--------------------------------------------------------------------------------------------------

    public MessageItem(MessageSeverity severity, string text, string explanation=null, Entity sender=null)
    {
        TimeStamp = DateTime.Now;
        Severity = severity;
        Text = text;
        Sender = sender != null ? new WeakReference<Entity>(sender) : null;
        Explanation = explanation?.Split(_LineBreaks, StringSplitOptions.RemoveEmptyEntries);
    }

    //--------------------------------------------------------------------------------------------------

    public override string ToString()
    {
        var sb = new StringBuilder();
        switch (Severity)
        {
            case MessageSeverity.Trace:
                sb.Append("Trace: ");
                break;
            case MessageSeverity.Info:
                sb.Append("Info: ");
                break;
            case MessageSeverity.Warning:
                sb.Append("Warning: ");
                break;
            case MessageSeverity.Error:
                sb.Append("Error: ");
                break;
        }

        if (Sender != null && Sender.TryGetTarget(out var senderEntity))
        {
            sb.Append('[');
            sb.Append(senderEntity.Name);
            sb.Append("] ");
        }

        sb.AppendLine(Text);
        if (Explanation != null)
        {
            foreach (var s in Explanation)
            {
                sb.AppendLine(s);
            }
        }

        return sb.ToString();
    }

    //--------------------------------------------------------------------------------------------------

    public string ToShortString()
    {
        string result;
        switch (Severity)
        {
            case MessageSeverity.Trace:
                result = "Trace: ";
                break;
            case MessageSeverity.Info:
                result = "Info: ";
                break;
            case MessageSeverity.Warning:
                result = "Warning: ";
                break;
            case MessageSeverity.Error:
                result = "Error: ";
                break;
            default:
                result = "";
                break;
        }

        return result + Text;
    }

    //--------------------------------------------------------------------------------------------------

}