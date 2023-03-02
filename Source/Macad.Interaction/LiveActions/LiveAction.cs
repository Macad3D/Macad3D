using Macad.Common;

namespace Macad.Interaction;

public abstract class LiveAction : BaseObject, IMouseEventHandler
{
        public MouseEventData LastMouseEventData { get; protected set; }

        //--------------------------------------------------------------------------------------------------

        public WorkspaceController WorkspaceController
        {
            get { return _WorkspaceController; }
            set
            {
                _WorkspaceController = value;
            }
        }

        //--------------------------------------------------------------------------------------------------

        public object Owner { get; private set; }

        //--------------------------------------------------------------------------------------------------

        WorkspaceController _WorkspaceController;

        //--------------------------------------------------------------------------------------------------

        protected LiveAction(object owner)
        {
            Owner = owner;
        }

        //--------------------------------------------------------------------------------------------------

        public virtual bool Start()
        {
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        public virtual void Stop()
        {
            if (WorkspaceController == null)
                return;

            Deactivate();
            WorkspaceController.HudManager?.SetCursor(null);
            WorkspaceController.RemoveLiveAction(this);
        }

        //--------------------------------------------------------------------------------------------------

        public virtual void Activate() {}

        //--------------------------------------------------------------------------------------------------

        public virtual void Deactivate() {}

        //--------------------------------------------------------------------------------------------------

        #region IMouseEventHandler

        public virtual bool OnMouseMove(MouseEventData data)
        {
            LastMouseEventData = data;
            return false;
        }

        //--------------------------------------------------------------------------------------------------

        public virtual bool OnMouseDown(MouseEventData data)
        {
            LastMouseEventData = data;
            return false;
        }

        //--------------------------------------------------------------------------------------------------

        public virtual bool OnMouseUp(MouseEventData data)
        {
            LastMouseEventData = data;
            return false;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion
}