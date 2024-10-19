using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Runtime.CompilerServices;
using Macad.Core.Topology;
using Macad.Common;
using Macad.Common.Serialization;

namespace Macad.Core;

public sealed class UndoHandler : BaseObject
{
    #region Enums

    public enum TopologyAction
    {
        Added,
        Removed,
        Moved
    }

    #endregion

    #region Properties

    public bool CanUndo
    {
        get { return _UndoStack.Count > 0; }
    }

    public bool CanRedo
    {
        get { return _RedoStack.Count > 0; }
    }

    internal LimitedStack<UndoAction[]> UndoStack
    {
        get { return _UndoStack; }
    }

    internal LimitedStack<UndoAction[]> RedoStack
    {
        get { return _RedoStack; }
    }

    #endregion

    readonly IUndoableTopology _Document;
    readonly LimitedStack<UndoAction[]> _RedoStack;
    readonly LimitedStack<UndoAction[]> _UndoStack;
    readonly List<UndoAction> _PendingActions = new List<UndoAction>();
    bool _IsRestoring;

    //--------------------------------------------------------------------------------------------------

    internal UndoHandler(IUndoableTopology document)
    {
        _Document = document;
        _UndoStack = new LimitedStack<UndoAction[]>(500);
        _RedoStack = new LimitedStack<UndoAction[]>(500);
    }

    //--------------------------------------------------------------------------------------------------

    void RaisePropertyChanged()
    {
        RaisePropertyChanged("CanUndo");
        RaisePropertyChanged("CanRedo");
    }

    //--------------------------------------------------------------------------------------------------

    public void Commit()
    {
        if (!_IsRestoring)
        {
            Commit(false);
            _RedoStack.Clear();
        }
    }

    //--------------------------------------------------------------------------------------------------

    void Commit(bool toRedoStack)
    {
        var stack = toRedoStack ? _RedoStack : _UndoStack;
        if (_PendingActions.Count > 0)
        {
            // ReSharper disable once CoVariantArrayConversion
            // Reverse action list to undo the last at first
            _PendingActions.Reverse();
            stack.Push(_PendingActions.ToArray());
            _PendingActions.Clear();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void AddPropertyChange(Entity instance, [CallerMemberName] string propertyName = "", object clone = null)
    {
        var propInfo = instance.GetType().GetProperty(propertyName, BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance );
        if (propInfo == null) 
            return;

        if (!propInfo.GetCustomAttributes(typeof(SerializeMemberAttribute), true).Any())
            return;

        var action = (PropertyUndoAction)_PendingActions.FirstOrDefault(a => a.InstanceGuid.Equals(instance.Guid) && a is PropertyUndoAction);
        if (action == null)
        {
            action = new PropertyUndoAction(instance.Guid);
            _PendingActions.Add(action);
        }
        action.Set(propInfo, instance, clone);
    }

    //--------------------------------------------------------------------------------------------------

    public void AddDataBlockChange(IUndoableDataBlob instance)
    {
        // Note: Only the first value change should be saved, or the original state will be lost. 
        var action = (DataBlobUndoAction)_PendingActions.FirstOrDefault(a => a.InstanceGuid.Equals(instance.Guid) && a is DataBlobUndoAction);
        if (action != null)
            return;

        action = new DataBlobUndoAction(instance.Guid);
        if (action.Set(instance))
        {
            _PendingActions.Add(action);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void AddTopologyChange(TopologyAction topologyAction, IUndoableTopology container, Entity instance)
    {
        // We save every change, so we can rewind it later step by step
        var action = new TopologyUndoAction(container.Guid);
        if (action.Set(instance, container, topologyAction))
        {
            _PendingActions.Add(action);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void DoUndo(int steps)
    {
        while ((steps > 0) && (_UndoStack.Count > 0))
        {
            Restore(false);
            steps--;
        }

        Commit(true);
        RaisePropertyChanged();
    }

    //--------------------------------------------------------------------------------------------------

    public void DoRedo(int steps)
    {
        while ((steps > 0) && (_RedoStack.Count > 0))
        {
            Restore(true);
            steps--;
        }

        Commit(false);
        RaisePropertyChanged();
    }

    //--------------------------------------------------------------------------------------------------

    void Restore(bool fromRedoStack)
    {
        var stack = fromRedoStack ? _RedoStack : _UndoStack;

        _IsRestoring = true;
        var actions = stack.Pop();
        foreach (var action in actions)
        {
            var instance = FindEntityInstance(action.InstanceGuid);
                
            // Skip if instance is not found, it must be part of a topology action
            if(instance == null)
                continue;
            //Debug.Assert(instance != null);

            instance.OnBeforeUndo();

            action.Restore(instance, this);

            instance.OnAfterUndo();
        }
        _IsRestoring = false;
    }

    //--------------------------------------------------------------------------------------------------

    public Entity FindEntityInstance(Guid instanceGuid)
    {
        return _Document.FindInstance(instanceGuid);
    }
}