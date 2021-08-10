using System;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using System.Windows.Controls;
using System.Windows.Input;
using Macad.Common;

namespace Macad.Interaction
{
    public abstract class HudElement: UserControl, INotifyPropertyChanged, IDisposable
    {
        public WorkspaceController WorkspaceController { get; private set; }

        public BaseObject Instance { get; set; }

        public object Owner { get; private set; }

        //--------------------------------------------------------------------------------------------------

        protected HudElement()
        {
            MinHeight = 25;
        }

        //--------------------------------------------------------------------------------------------------

        public void Dispose()
        {
            Dispose(true);
            GC.SuppressFinalize(this);
        }

        //--------------------------------------------------------------------------------------------------

        protected virtual void Dispose(bool disposing)
        {
            if (disposing)
            {
                Cleanup();
            }
        }

        //--------------------------------------------------------------------------------------------------

        public virtual void Initialize(BaseObject instance)
        {
        }

        //--------------------------------------------------------------------------------------------------

        public virtual void Cleanup()
        {
        }

        //--------------------------------------------------------------------------------------------------

        public static T CreateElement<T>(object owner, BaseObject instance, WorkspaceController workspaceController) where T: HudElement
        {
            var element = Activator.CreateInstance(typeof(T)) as T;
            if (element != null)
            {
                element.Owner = owner;
                element.WorkspaceController = workspaceController;
                element.Instance = instance;
                element.Initialize(instance);
            }
            return element;
        }

        //--------------------------------------------------------------------------------------------------

        public virtual void SimulatedKeyDown(KeyEventArgs eventArgs)
        {
            return;
        }

        //--------------------------------------------------------------------------------------------------

        #region INotifyPropertyChanged

        public event PropertyChangedEventHandler PropertyChanged;

        protected virtual void RaisePropertyChanged([CallerMemberName] String propertyName = "")
        {
            PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(propertyName));
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

    }
}