using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Presentation;

namespace Macad.Interaction;

public abstract class Editor : WorkspaceControl
{
    #region Entity

    public abstract Entity GetEntity();

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Start/Stop

    public virtual void Init(WorkspaceController workspaceController, Entity entity)
    {
        WorkspaceController = workspaceController;
    }

    //--------------------------------------------------------------------------------------------------

    public void Start()
    {
        if (Active)
            return;
        Active = true;

        OnStart();
        UpdateToolsState();
    }

    //--------------------------------------------------------------------------------------------------

    public void Stop()
    {
        if (!Active)
            return;
        Active = false;

        StopTools();
        OnStop();
        Cleanup();

        Debug.Assert(CleanedUp);
    }

    //--------------------------------------------------------------------------------------------------

    protected virtual void OnStart()
    {}

    //--------------------------------------------------------------------------------------------------

    protected virtual void OnStop()
    {
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
        
    #region Tools

    public bool Active { get; private set; }
    public bool ToolsActive { get; private set; }
    List<LiveAction> _Actions;

    //--------------------------------------------------------------------------------------------------

    public void UpdateToolsState()
    {
        // Conditions for tools start
        bool toStart = WorkspaceController.CurrentTool == null;
        var entity = GetEntity();
        var body = entity as Body;

        if (entity is Shape shape)
        {
            body = shape.Body;
            toStart &= shape.Body.IsShapeEffective(shape);
        }

        if (body != null)
        {
            toStart &= body.IsVisible;
            if (body.Layer != null)
            {
                toStart &= body.Layer.IsVisible;
            }
        }

        if(toStart && !ToolsActive)
            StartTools();
        else if(!toStart && ToolsActive)
            StopTools();
    }

    //--------------------------------------------------------------------------------------------------

    public void StartTools()
    {
        if (ToolsActive || !Active)
            return;
        ToolsActive = true;

        OnToolsStart();
    }

    //--------------------------------------------------------------------------------------------------

    public void StopTools()
    {
        if(!ToolsActive)
            return;
        ToolsActive = false;

        OnToolsStop();
        RemoveHintMessage();
        RemoveHudElements();
        StopAllActions();
    }

    //--------------------------------------------------------------------------------------------------

    protected virtual void OnToolsStart()
    {
        GetChildren().OfType<Editor>().ForEach(child => child.StartTools());
    }

    //--------------------------------------------------------------------------------------------------

    protected virtual void OnToolsStop()
    {
        GetChildren().OfType<Editor>().ForEach(child => child.StopTools());
    }

    //--------------------------------------------------------------------------------------------------

    protected bool StartAction(LiveAction liveAction)
    {
        _Actions ??= new();
        if(liveAction == null || _Actions.Contains(liveAction))
            return false;
            
        try
        {
            liveAction.WorkspaceController = WorkspaceController;
            if (!liveAction.Start())
                return false;

            _Actions.Add(liveAction);
            return true;
        }
        catch (Exception e)
        {
            Debug.WriteLine(e);
            return false;
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    protected void StopAction(LiveAction liveAction)
    {
        if (liveAction == null)
            return;

        _Actions?.Remove(liveAction);
            
        liveAction.Stop();
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
    
    #region Start Editing

    public virtual (IActionCommand Command, object Parameter) GetStartEditingCommand()
    {
        if ((GetEntity() as Shape)?.Predecessor is Sketch sketch)
        {
            return (SketchCommands.StartSketchEditor, sketch);
        }

        return (null, null);
    }
    
    //--------------------------------------------------------------------------------------------------
    
    #endregion

    #region Static Registration and Create

    static readonly Dictionary<Type, Type> _RegisteredEditors = new();
        
    //--------------------------------------------------------------------------------------------------

    public static void RegisterEditor<TObject,TEditor>() 
        where TObject: Entity
        where TEditor: Editor
    {
        var objectType = typeof(TObject);
        var editorType = typeof(TEditor);
        if (!_RegisteredEditors.ContainsKey(objectType))
            _RegisteredEditors.Add(objectType, editorType);
    }

    //--------------------------------------------------------------------------------------------------

    public static void UnregisterEditor(Type objectType, Type editorType)
    {
        if (_RegisteredEditors.ContainsKey(objectType))
            _RegisteredEditors.Remove(objectType);
    }

    //--------------------------------------------------------------------------------------------------

    public static Editor CreateEditor(Entity entity)
    {
        if (!_RegisteredEditors.TryGetValue(entity.GetType(), out var editorType))
            return null;

        var editor = Activator.CreateInstance(editorType) as Editor;
        editor?.Init(InteractiveContext.Current.WorkspaceController, entity);
        return editor;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

public abstract class Editor<T> : Editor where T: Entity
{
    public T Entity { get; private set; }

    //--------------------------------------------------------------------------------------------------

    public override void Init(WorkspaceController workspaceController, Entity entity)
    {
        base.Init(workspaceController, entity);
        Entity = entity as T;
    }

    //--------------------------------------------------------------------------------------------------

    public override Entity GetEntity()
    {
        return Entity;
    }
        
    //--------------------------------------------------------------------------------------------------

    protected static void RegisterEditor<TEditor>() where TEditor : Editor
    {
        RegisterEditor<T,TEditor>();
    }

    //--------------------------------------------------------------------------------------------------
}