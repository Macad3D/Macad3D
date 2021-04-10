using System;
using System.Diagnostics;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Input;
using Macad.Common;

namespace Macad.Interaction
{
    public abstract class HudElement: UserControl, IDisposable
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

        protected static void PropertyChangedStaticCallback(DependencyObject dependencyObject, DependencyPropertyChangedEventArgs eventArgs)
        {
            var instance = dependencyObject as HudElement;
            if (instance != null)
            {
                instance.PropertyChangedCallback(eventArgs);
            }
        }

        protected abstract void PropertyChangedCallback(DependencyPropertyChangedEventArgs eventArgs);

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

    }
}