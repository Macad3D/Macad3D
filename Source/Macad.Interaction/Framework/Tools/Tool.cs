using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Windows.Input;
using Macad.Common;
using Macad.Core.Topology;
using Macad.Presentation;

namespace Macad.Interaction
{
    public abstract class Tool : BaseObject, IMouseEventHandler, IContextMenuItemProvider
    {
        #region Properties

        public string StatusText
        {
            get { return _StatusText; }
            set
            {
                _StatusText = value;
                RaisePropertyChanged();
            }
        }

        //--------------------------------------------------------------------------------------------------

        public string Id { get; protected set; }

        //--------------------------------------------------------------------------------------------------

        public bool IsClosed { get; private set; }

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
        

        #endregion

        #region Member

        string _StatusText;
        WorkspaceController _WorkspaceController;

        //--------------------------------------------------------------------------------------------------

        protected Tool()
        {
            Id = this?.GetType().Name ?? "";
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Base Functions

        public abstract bool Start();

        //--------------------------------------------------------------------------------------------------

        public virtual bool Cancel(bool force)
        {
            if(!IsClosed)
                Stop();
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        public virtual void Stop()
        {
            IsClosed = true;
            WorkspaceController.HudManager?.SetCursor(null);
            WorkspaceController.RemoveTool(this);
            WorkspaceController.Invalidate();
        }

        //--------------------------------------------------------------------------------------------------
        
        public virtual bool PrepareUndo()
        {
            return Cancel(false);
        }

        //--------------------------------------------------------------------------------------------------
        

        #endregion

        #region IMouseEventHandler

        public virtual bool OnMouseMove(MouseEventData data)
        {
            return false;
        }

        //--------------------------------------------------------------------------------------------------

        public virtual bool OnMouseDown(MouseEventData data)
        {
            return false;
        }

        //--------------------------------------------------------------------------------------------------

        public virtual bool OnMouseUp(MouseEventData data, bool additive)
        {
            return false;
        }

        #endregion
        
        #region Event Callbacks

        //--------------------------------------------------------------------------------------------------

        public virtual bool OnKeyPressed(Key key)
        {
            return false;
        }

        //--------------------------------------------------------------------------------------------------

        public virtual bool OnEntitySelectionChanging(IEnumerable<Entity> entitiesToSelect, IEnumerable<Entity> entitiesToUnSelect)
        {
            return true;
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

        #region IActionCommandProvider

        public virtual void EnrichContextMenu(ContextMenuItems itemList)
        {
            return;
        }
       
        #endregion

    }
}