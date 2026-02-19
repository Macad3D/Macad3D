using Macad.Common;
using System;
using System.ComponentModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Input;

namespace Macad.Interaction;

public abstract class HudElement: UserControl, INotifyPropertyChanged, IDisposable
{
    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty DescriptorLengthProperty =
        DependencyProperty.Register(
            nameof(DescriptorLength),
            typeof(MeasurementDescriptor),
            typeof(HudElement),
            new PropertyMetadata(null));

    public MeasurementDescriptor DescriptorLength
    {
        get { return (MeasurementDescriptor)GetValue(DescriptorLengthProperty); }
        set { SetValue(DescriptorLengthProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty DescriptorAngleProperty =
    DependencyProperty.Register(
        nameof(DescriptorAngle),
        typeof(MeasurementDescriptor),
        typeof(HudElement),
        new PropertyMetadata(null));

    public MeasurementDescriptor DescriptorAngle
    {
        get { return (MeasurementDescriptor)GetValue(DescriptorAngleProperty); }
        set { SetValue(DescriptorAngleProperty, value); }
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
        DescriptorAngle = UnitsService.GetDescriptor(PhysicalQuantities.Angle);
        DescriptorLength = UnitsService.GetDescriptor(PhysicalQuantities.Length);
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