using System;
using System.ComponentModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Windows.Controls;
using System.Windows.Input;
using Macad.Common;

namespace Macad.Interaction;

public abstract class HudElement: UserControl, INotifyPropertyChanged, IDisposable
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
        
    WorkspaceController _WorkspaceController;

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

    public virtual void Initialize()
    {
    }

    //--------------------------------------------------------------------------------------------------

    public virtual void Cleanup()
    {
        PropertyChanged = null;
    }

    //--------------------------------------------------------------------------------------------------

    public static T CreateElement<T>(BaseObject instance, WorkspaceController workspaceController) where T: HudElement
    {
        var element = Activator.CreateInstance(typeof(T)) as T;
        if (element != null)
        {
            element.WorkspaceController = workspaceController;
            element.Initialize();
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