using System;
using System.Collections.ObjectModel;
using System.ComponentModel;
using System.Linq;
using System.Windows;
using System.Windows.Input;
using Macad.Common;

namespace Macad.Interaction.Panels
{
    public class ViewportPanelModel : BaseObject, IHudManager
    {
        #region Properties

        public WorkspaceController WorkspaceController
        {
            get { return _WorkspaceController; }
            private set
            {
                if (_WorkspaceController != value)
                {
                    _WorkspaceController = value;
                    if (_WorkspaceController != null)
                    {
                        _WorkspaceController.HudManager = this;
                    }
                    else
                    {
                        HudElements.Clear();
                    }
                    _WorkspaceController = value;
                    RaisePropertyChanged();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        public ViewportController ViewportController
        {
            get { return _ViewportController; }
            private set
            {
                _ViewportController = value;
                RaisePropertyChanged();
            }
        }

        //--------------------------------------------------------------------------------------------------

        public ObservableCollection<HudElement> HudElements { get; } = new();

        //--------------------------------------------------------------------------------------------------

        public CustomMenuItems DynamicContextMenuItems { get; } = new();

        //--------------------------------------------------------------------------------------------------

        public Cursor Cursor
        {
            get { return _Cursor; }
            set
            {
                _Cursor = value;
                RaisePropertyChanged();
            }
        }

        //--------------------------------------------------------------------------------------------------

        WorkspaceController _WorkspaceController;
        ViewportController _ViewportController;
        Cursor _Cursor;

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Property handler

        internal ViewportPanelModel()
        {
            InteractiveContext.Current.PropertyChanged += Context_PropertyChanged;
            WorkspaceController = InteractiveContext.Current.WorkspaceController;
            ViewportController = InteractiveContext.Current.ViewportController;
        }

        //--------------------------------------------------------------------------------------------------

        void Context_PropertyChanged(object sender, PropertyChangedEventArgs e)
        {
            if (e.PropertyName == "WorkspaceController")
            {
                WorkspaceController = (sender as InteractiveContext)?.WorkspaceController;
            }
            else if (e.PropertyName == "ViewportController")
            {
                ViewportController = (sender as InteractiveContext)?.ViewportController;
            }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Control Callbacks
        
        public bool KeyDown(KeyEventArgs keyEventArgs)
        {
            var elements = HudElements.ToArray();
            foreach (var hudElement in elements )
            {
                hudElement.SimulatedKeyDown(keyEventArgs);
                if (keyEventArgs.Handled)
                    return true;
            }

            // Forward to workspace
            if (!(InteractiveContext.Current?.WorkspaceController is null))
            {
                if (InteractiveContext.Current.ShortcutHandler.KeyPressed(ShortcutScope.Workspace, keyEventArgs.Key, Keyboard.Modifiers)
                    || InteractiveContext.Current.WorkspaceController.KeyPressed(keyEventArgs.Key))
                {
                    return true;
                }
            }

            return false;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region IHudManager

        public T CreateElement<T>(object owner, BaseObject instance = null) where T : HudElement
        {
            var element = HudElement.CreateElement<T>(owner, instance, WorkspaceController);
            HudElements.Add(element);
            return element;
        }

        //--------------------------------------------------------------------------------------------------

        public void SetCursor(Cursor cursor)
        {
            Cursor = cursor;
        }

        //--------------------------------------------------------------------------------------------------

        public void RemoveElement(HudElement element)
        {
            if (HudElements.Contains(element))
                HudElements.Remove(element);
        }

        //--------------------------------------------------------------------------------------------------
        
        public void RemoveElements(Func<HudElement, bool> predicate)
        {
            var toRemove = HudElements.Where(predicate).ToArray();
            foreach (var element in toRemove)
            {
                HudElements.Remove(element);
            }
        }

        //--------------------------------------------------------------------------------------------------
        
        #endregion

        #region Context Actions

        public void UpdateContextActions()
        {
            void __AddCommands(ICustomMenuProvider provider)
            {
                if (provider == null)
                    return;

                int oldcount = DynamicContextMenuItems.Count;
                provider.EnrichContextMenu(DynamicContextMenuItems);
                if (DynamicContextMenuItems.Count > oldcount)
                {
                    DynamicContextMenuItems.AddSeparator();
                }
            }

            //--------------------------------------------------------------------------------------------------

            DynamicContextMenuItems.Clear();
            __AddCommands(WorkspaceController.CurrentToolAction);
            __AddCommands(WorkspaceController.CurrentTool);
            if (WorkspaceController.CurrentTool == null)
            {
                __AddCommands(WorkspaceController.CurrentEditor);
            }
            __AddCommands(WorkspaceController);
        }

        //--------------------------------------------------------------------------------------------------

        #endregion
    }

}