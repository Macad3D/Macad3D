using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.ComponentModel;
using System.Linq;
using System.Runtime.CompilerServices;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Occt.Helper;

namespace Macad.Core;

public sealed class MessageHandler : IDisposable
{
    #region Properties

    public ObservableCollection<MessageItem> MessageItems
    {
        get { return _MessageItems; }
        set
        {
            if (_MessageItems != value)
            {
                _MessageItems = value;
                RaiseStaticPropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public Entity CurrentReferenceEntity
    {
        get { return _ProcessingEntitiesStack.Count > 0 ? _ProcessingEntitiesStack.Peek() : null; }
    }

    //--------------------------------------------------------------------------------------------------
        
    #endregion

    #region Member

    ObservableCollection<MessageItem> _MessageItems;
    ConditionalWeakTable<Entity, List<MessageItem>> _EntityMessages;

    readonly Stack<Entity> _ProcessingEntitiesStack = new Stack<Entity>();

    MessageRouter _MessageRouter;

    [ThreadStatic]
    static readonly bool _IsMainThread = true;

    //--------------------------------------------------------------------------------------------------

    #endregion        
            
    #region Initialization and Property handling

    public MessageHandler()
    {
        _MessageItems = new ObservableCollection<MessageItem>();
        _EntityMessages = new ConditionalWeakTable<Entity, List<MessageItem>>();
        //Messages(MessageSeverity.Warning, "This is an extended Warning.", "And this is extended Information.\nMultiline if you want to.");
            
        _MessageRouter = new MessageRouter();
        _MessageRouter.MessageArrived += _MessageRouter_MessageArrived;
        _MessageRouter.TraceLevel = Message_Gravity.Warning;
    }

    //--------------------------------------------------------------------------------------------------

    ~MessageHandler()
    {
        Dispose(false);
    }

    //--------------------------------------------------------------------------------------------------

    public void Dispose()
    {
        Dispose(true);
        GC.SuppressFinalize(this);
    }

    //--------------------------------------------------------------------------------------------------

    void Dispose(bool disposing)
    {
        _MessageRouter?.Dispose();
        _MessageRouter = null;
    }

    //--------------------------------------------------------------------------------------------------

    void _MessageRouter_MessageArrived(string text, Message_Gravity gravity)
    {
        if (!_IsMainThread)
        {
            // Don't accept messages from other threads than the main thread yet
            return;
        }

        MessageSeverity severity;
        switch (gravity)
        {
            case Message_Gravity.Trace:
                severity = MessageSeverity.Trace;
                break;
            case Message_Gravity.Info:
                severity = MessageSeverity.Info;
                break;
            case Message_Gravity.Warning:
                severity = MessageSeverity.Warning;
                break;
            case Message_Gravity.Alarm:
                severity = MessageSeverity.Warning;
                break;
            case Message_Gravity.Fail:
                severity = MessageSeverity.Error;
                break;
            default:
                throw new ArgumentOutOfRangeException(nameof(gravity), gravity, null);
        }

        AddMessage(new MessageItem(severity, text));
    }

    //--------------------------------------------------------------------------------------------------

    public event EventHandler<PropertyChangedEventArgs> StaticPropertyChanged;

    public void RaiseStaticPropertyChanged([CallerMemberName] String propertyName = "")
    {
        StaticPropertyChanged?.Invoke(null, new PropertyChangedEventArgs(propertyName));
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Messages

    public event EventHandler<MessageItem> MessageThrown;

    //--------------------------------------------------------------------------------------------------

    public void AddMessage(MessageItem message)
    {
        if (message.Sender != null && message.Sender.TryGetTarget(out var entity))
        {
            var list = _EntityMessages.GetValue(entity, key => new List<MessageItem>());
            list.Add(message);
        }

        _MessageItems.Add(message);
        MessageThrown?.Invoke(message.Sender, message);
    }

    //--------------------------------------------------------------------------------------------------

    public void ClearEntityMessages(Entity entity)
    {
        if (!_EntityMessages.TryGetValue(entity, out var messages))
        {
            return;
        }

        messages.ForEach(item => _MessageItems.Remove(item));
        _EntityMessages.Remove(entity);
    }

    //--------------------------------------------------------------------------------------------------

    public void ClearAllEntityMessages()
    {
        foreach (var item in _MessageItems.ToArray())
        {
            if(item.Sender == null)
                continue;

            _MessageItems.Remove(item);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public List<MessageItem> GetEntityMessages(Entity entity)
    {
        return _EntityMessages.TryGetValue(entity, out var list) ? list : null;
    }

    //--------------------------------------------------------------------------------------------------
        
    #endregion

    #region Processing

    public enum ProgressMessageEventReason
    {
        ProcessingStarted,
        ProcessingStopped
    }

    //--------------------------------------------------------------------------------------------------

    public class ProgressMessageEventArgs : EventArgs
    {
        public ProgressMessageEventReason Reason;
        public string Description;

        public ProgressMessageEventArgs(ProgressMessageEventReason reason, string description)
        {
            Reason = reason;
            Description = description;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public event EventHandler<ProgressMessageEventArgs> ProgressMessage;

    //--------------------------------------------------------------------------------------------------

    public void OnProcessingStarted(Entity referenceEntity, string description)
    {
        _ProcessingEntitiesStack.Push(referenceEntity);

        if (_ProcessingEntitiesStack.Count == 1)
        {
            ProgressMessage?.Invoke(this, new ProgressMessageEventArgs(ProgressMessageEventReason.ProcessingStarted, description));
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void OnProcessingStopped()
    {
        if (_ProcessingEntitiesStack.Count > 0)
        {
            _ProcessingEntitiesStack.Pop();
        }

        if (_ProcessingEntitiesStack.Count == 0)
        {
            ProgressMessage?.Invoke(this, new ProgressMessageEventArgs(ProgressMessageEventReason.ProcessingStopped, null));
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}