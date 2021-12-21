using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Windows.Input;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Presentation;

namespace Macad.Interaction
{
    public abstract class ToolAction : IContextMenuItemProvider
    {
        #region Events

        public delegate void ToolActionEventHandler(ToolAction toolAction);

        //--------------------------------------------------------------------------------------------------

        public event ToolActionEventHandler Previewed;

        protected void RaisePreviewed()
        {
            Previewed?.Invoke(this);
        }

        //--------------------------------------------------------------------------------------------------

        public event ToolActionEventHandler Finished;

        protected void RaiseFinished()
        {
            Finished?.Invoke(this);
        }
        
        //--------------------------------------------------------------------------------------------------

        #endregion

        public MouseEventData LastMouseEventData { get; private set; }

        public bool IsFinished
        {
            get { return _IsFinished; }
            protected set
            {
                _IsFinished = value;
                if (_IsFinished)
                {
                    RaiseFinished();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

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

        public object Owner { get; private set; }

        //--------------------------------------------------------------------------------------------------

        public virtual SnapMode SupportedSnapModes => SnapMode.None;

        //--------------------------------------------------------------------------------------------------

        bool _IsFinished;
        WorkspaceController _WorkspaceController;

        //--------------------------------------------------------------------------------------------------

        protected ToolAction(object owner)
        {
            Owner = owner;
        }

        //--------------------------------------------------------------------------------------------------

        public abstract bool Start();

        //--------------------------------------------------------------------------------------------------

        public virtual bool Cancel(bool force)
        {
            Stop();
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        public virtual void Reset()
        {
            IsFinished = false;
        }

        //--------------------------------------------------------------------------------------------------

        public virtual void Stop()
        {
            WorkspaceController.RemoveToolAction(this);
        }

        //--------------------------------------------------------------------------------------------------

        public virtual bool OnMouseMove(MouseEventData data)
        {
            LastMouseEventData = data;
            RaisePreviewed();
            return false;
        }

        //--------------------------------------------------------------------------------------------------

        public virtual bool OnMouseDown(MouseEventData data)
        {
            return false;
        }

        //--------------------------------------------------------------------------------------------------

        public virtual bool OnMouseUp(MouseEventData data, bool shiftSelected)
        {
            return false;
        }

        //--------------------------------------------------------------------------------------------------

        public virtual bool OnKeyPressed(Key key)
        {
            return false;
        }

        //--------------------------------------------------------------------------------------------------

        public virtual bool OnEntitySelectionChanging(IEnumerable<InteractiveEntity> interactiveEntities, IEnumerable<InteractiveEntity> enumerable)
        {
            return true;
        }

        //--------------------------------------------------------------------------------------------------
        
        #region IActionCommandProvider

        public virtual void EnrichContextMenu(ContextMenuItems itemList)
        {
            return;
        }
       
        #endregion

    }
}