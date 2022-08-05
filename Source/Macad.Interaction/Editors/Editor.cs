using System;
using System.Collections.Generic;
using System.Diagnostics;
using Macad.Common;
using Macad.Core.Topology;

namespace Macad.Interaction
{
    public abstract class Editor : BaseObject, IContextMenuItemProvider
    {
        public abstract void Init(WorkspaceController workspaceController, Entity entity);
        public abstract void Start();
        public abstract void Stop();
        public abstract Entity GetEntity();

        //--------------------------------------------------------------------------------------------------

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
        public WorkspaceController WorkspaceController
        {
            get { return _WorkspaceController; }
            set
            {
                Debug.Assert(_WorkspaceController == null || _WorkspaceController == value, "WorkspaceController cannot be changed");
                _WorkspaceController = value;
            }
        }

        //--------------------------------------------------------------------------------------------------

        public T Entity { get; private set; }

        //--------------------------------------------------------------------------------------------------

        WorkspaceController _WorkspaceController;

        //--------------------------------------------------------------------------------------------------

        public override void Init(WorkspaceController workspaceController, Entity entity)
        {
            _WorkspaceController = workspaceController;
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