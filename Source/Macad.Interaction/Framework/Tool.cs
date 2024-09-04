using System;
using System.Collections.Generic;
using System.Diagnostics;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Interaction.Visual;
using Macad.Occt;

namespace Macad.Interaction;

public abstract class Tool : WorkspaceControl
{
    #region Properties

    public string Id { get; protected set; }

    //--------------------------------------------------------------------------------------------------

    public bool IsActive { get; private set; }

    //--------------------------------------------------------------------------------------------------

    public ToolAction CurrentAction
    {
        get { return _Actions?.Count > 0 ? _Actions[0] : null; }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Member / ctor

    List<ToolAction> _Actions;
    List<InteractiveEntity> _OverriddenVisualShapes;

    //--------------------------------------------------------------------------------------------------

    protected Tool()
    {
        Id = GetType().Name;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Base Functions

    public bool Start()
    {
        if (OnStart())
        {
            IsActive = true;
            WorkspaceController.Invalidate();
            return true;
        }

        return false;
    }

    //--------------------------------------------------------------------------------------------------

    protected virtual bool OnStart()
    {
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public bool Cancel(bool force)
    {
        if (!OnCancel() && !force)
            return false;

        if(IsActive)
            Stop();
        return true;
    }

    //--------------------------------------------------------------------------------------------------
        
    protected virtual bool OnCancel()
    {
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public void Stop()
    {
        IsActive = false;
        OnStop();
        Cleanup();

        WorkspaceController.RemoveTool(this);
        WorkspaceController.Invalidate();

        Debug.Assert(CleanedUp);
    }

    //--------------------------------------------------------------------------------------------------
                
    protected virtual void OnStop()
    {}

    //--------------------------------------------------------------------------------------------------

    public virtual bool PrepareUndo()
    {
        return Cancel(false);
    }

    //--------------------------------------------------------------------------------------------------

    protected override void Cleanup()
    {
        StopAllActions();
        RestoreAllVisualShapes();
        base.Cleanup();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Actions

    protected bool StartAction(ToolAction toolAction, bool exclusive = true)
    {
        if(_Actions?.Contains(toolAction) ?? false)
            return true;
            
        try
        {
            if (exclusive)
            {
                StopAllActions();
            }

            if (toolAction != null)
            {
                toolAction.WorkspaceController = WorkspaceController;
                if (!toolAction.Start())
                    return false;

                _Actions ??= new();
                _Actions.Insert(0, toolAction);
                OnToolActionChanged();
            }
            return true;
        }
        catch (Exception e)
        {
            Messages.Exception($"Starting tool action {toolAction.GetType().Name} failed.", e);
            return false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected void StopAction(ToolAction toolAction)
    {
        if (toolAction == null)
            return;

        _Actions?.Remove(toolAction);
        toolAction.Stop();
        OnToolActionChanged();
    }

    //--------------------------------------------------------------------------------------------------

    protected void StopAllActions()
    {
        if (_Actions != null)
        {
            // Copy reference to disable chaning the enumeration
            var actions = _Actions;
            _Actions = null;
            foreach (var action in actions)
            {
                StopAction(action);
            }
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    protected override IEnumerable<WorkspaceControl> GetChildren()
    {
        if (_Actions == null) 
            yield break;

        foreach (var action in _Actions)
        {
            yield return action;
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Override Visual Shapes

    protected void OverrideVisualShape(InteractiveEntity entity, TopoDS_Shape brepShape)
    {
        _OverriddenVisualShapes ??= new();
        if(!_OverriddenVisualShapes.Contains(entity))
            _OverriddenVisualShapes.Add(entity);

        var visualShape = WorkspaceController.VisualObjects.Get(entity) as VisualShape;
        if (visualShape != null)
        {
            visualShape.OverrideBrep = brepShape;
            WorkspaceController.Invalidate();
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected void RestoreVisualShape(InteractiveEntity entity)
    {
        var visualShape = WorkspaceController.VisualObjects.Get(entity) as VisualShape;
        if (visualShape != null)
        {
            visualShape.OverrideBrep = null;
            WorkspaceController.Invalidate();
        }
        _OverriddenVisualShapes?.Remove(entity);
    }

    //--------------------------------------------------------------------------------------------------

    protected void RestoreAllVisualShapes()
    {
        if (_OverriddenVisualShapes != null)
        {
            // Copy reference to disable chaning the enumeration
            var entities = _OverriddenVisualShapes;
            _OverriddenVisualShapes = null;
            foreach (var entity in entities)
            {
                RestoreVisualShape(entity);
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Delete, Duplicate, Clipboard

    public virtual bool CanDelete()
    {
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public virtual void Delete()
    {
    }

    //--------------------------------------------------------------------------------------------------

    public virtual bool CanDuplicate()
    {
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public virtual void Duplicate()
    {
    }

    //--------------------------------------------------------------------------------------------------

    public virtual bool CanCopyToClipboard()
    {
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public virtual void CopyToClipboard()
    {
    }

    //--------------------------------------------------------------------------------------------------

    public virtual bool CanPasteFromClipboard()
    {
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public virtual IEnumerable<InteractiveEntity> PasteFromClipboard()
    {
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Overrides

    public override bool OnEntitySelectionChanging(IEnumerable<InteractiveEntity> entitiesToSelect, IEnumerable<InteractiveEntity> entitiesToUnSelect)
    {
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Events

    void OnToolActionChanged()
    {
        RaisePropertyChanged(nameof(CurrentAction));
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}