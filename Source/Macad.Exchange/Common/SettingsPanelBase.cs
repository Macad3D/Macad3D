using System;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using System.Windows;
using System.Windows.Controls;

namespace Macad.Exchange;

public class SettingsPanelBase : UserControl, INotifyPropertyChanged
{
    #region INotifyPropertyChanged

    public event PropertyChangedEventHandler PropertyChanged;

    protected virtual void RaisePropertyChanged([CallerMemberName] String propertyName = "")
    {
        PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(propertyName));
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region PropertyChangedCallback routing

    protected static void PropertyChangedStaticCallback(DependencyObject dependencyObject, DependencyPropertyChangedEventArgs eventArgs)
    {
        var instance = dependencyObject as SettingsPanelBase;
        instance?.PropertyChangedCallback(eventArgs);
    }

    //--------------------------------------------------------------------------------------------------

    protected virtual void PropertyChangedCallback(DependencyPropertyChangedEventArgs eventArgs)
    {
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}