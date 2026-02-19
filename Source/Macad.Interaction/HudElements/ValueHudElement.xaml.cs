using Macad.Common;
using Macad.Presentation;
using System.Windows;
using System.Windows.Data;
using System.Windows.Input;

namespace Macad.Interaction;

public partial class ValueHudElement : HudElement
{
    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty DescriptorProperty =
        DependencyProperty.Register(
            nameof(Descriptor),
            typeof(MeasurementDescriptor),
            typeof(HudElement),
            new PropertyMetadata(null));

    public MeasurementDescriptor Descriptor
    {
        get => (MeasurementDescriptor)GetValue(DescriptorProperty);
        set => SetValue(DescriptorProperty, value);
    }

    //--------------------------------------------------------------------------------------------------

    public string Label
    {
        get { return _Label; }
        set
        {
            if (_Label != value)
            {
                _Label = value;
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public double Value
    {
        get { return _Value; }
        set
        {
            if (_Value != value)
            {
                _Value = value;
                RaisePropertyChanged();
                IsInKeyboardMode = false;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsInKeyboardMode
    {
        get { return _IsInKeyboardMode; }
        set
        {
            if (_IsInKeyboardMode != value)
            {
                _IsInKeyboardMode = value;
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    string _Label;
    double _Value;
    bool _IsInKeyboardMode;

    //--------------------------------------------------------------------------------------------------

    public override void SimulatedKeyDown(KeyEventArgs eventArgs)
    {
        // Set keyboard mode in assumption that the input is valid
        bool wasKeyboardMode = IsInKeyboardMode;
        _IsInKeyboardMode = true;

        ValueEditBox.SimulatedKeyDown(eventArgs, !wasKeyboardMode);

        if (eventArgs.Handled)
        {
            if (wasKeyboardMode != _IsInKeyboardMode)
            {
                // Key was valid, accept new keyboard mode
                RaisePropertyChanged(nameof(IsInKeyboardMode));
            }
        }
        else
        {
            if (wasKeyboardMode != _IsInKeyboardMode)
            {
                // Reset keyboard mode
                _IsInKeyboardMode = false;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public delegate void ValueEnteredEvent(ValueHudElement hudElement, double newValue);

    public event ValueEnteredEvent ValueEntered;

    internal void RaiseValueEntered()
    {
        ValueEntered?.Invoke(this, Value);
    }

    //--------------------------------------------------------------------------------------------------

    public ValueHudElement()
    {
        InitializeComponent();
        SourceUpdated += _OnSourceUpdated;
    }

    //--------------------------------------------------------------------------------------------------

    public override void Cleanup()
    {
        ValueEntered = null;
        base.Cleanup();
    }

    //--------------------------------------------------------------------------------------------------

    void _OnSourceUpdated(object sender, DataTransferEventArgs eventArgs)
    {
        if (eventArgs.TargetObject == ValueEditBox)
        {
            IsInKeyboardMode = false;
            RaiseValueEntered();
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    public void SetValue(double value)
    {
        Value = value;
    }

    //--------------------------------------------------------------------------------------------------

}