using System;
using System.Collections.Generic;
using Macad.Core.Topology;

namespace Macad.Interaction
{
    public abstract class Editor : WorkspaceControl, IContextMenuItemProvider
    {
        public abstract Entity GetEntity();

        //--------------------------------------------------------------------------------------------------

        #region Show and Hide

        public virtual void Init(WorkspaceController workspaceController, Entity entity)
        {
            WorkspaceController = workspaceController;
        }

        //--------------------------------------------------------------------------------------------------

        public void Start()
        {
            OnStart();
            StartTools();
        }

        //--------------------------------------------------------------------------------------------------

        public void Stop()
        {
            StopTools();
            OnStop();
            Cleanup();
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

        public bool ToolsActive { get; private set; }
        List<LiveAction> _LiveActions;

        //--------------------------------------------------------------------------------------------------

        public void StartTools()
        {
            if (ToolsActive)
            {
                // Re-initialize
                StopTools(); 
            }

            OnToolsStart();
            ToolsActive = true;
        }

        //--------------------------------------------------------------------------------------------------

        public void StopTools()
        {
            if(!ToolsActive)
                return;

            OnToolsStop();
            RemoveHintMessage();
            RemoveHudElements();
            RemoveLiveActions();
            ToolsActive = false;
        }

        //--------------------------------------------------------------------------------------------------

        protected virtual void OnToolsStart()
        {}

        //--------------------------------------------------------------------------------------------------

        protected virtual void OnToolsStop()
        {}

        //--------------------------------------------------------------------------------------------------

        protected void AddLiveAction(LiveAction liveAction)
        {
            WorkspaceController.StartLiveAction(liveAction);
            _LiveActions ??= new();
            _LiveActions.Add(liveAction);
        }

        //--------------------------------------------------------------------------------------------------
        
        protected void RemoveLiveAction(LiveAction liveAction)
        {
            WorkspaceController.RemoveLiveAction(liveAction);
            _LiveActions?.Remove(liveAction);
        }

        //--------------------------------------------------------------------------------------------------

        protected void RemoveLiveActions()
        {
            if (_LiveActions == null)
                return;

            _LiveActions.ForEach(WorkspaceController.RemoveLiveAction);
            _LiveActions.Clear();
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

        #region IActionCommandProvider

        public virtual void EnrichContextMenu(ContextMenuItems itemList)
        {
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
}