using Macad.Common;
using Macad.Presentation;
using System.Windows.Data;
using System.Windows.Input;

namespace Macad.Interaction;

public partial class MultiValueHudElement : HudElement
{
    public string Label1
    {
        get { return _Label1; }
        set
        {
            if (_Label1 != value)
            {
                _Label1 = value;
                RaisePropertyChanged();
            }
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    public double Value1
    {
        get { return _Value1; }
        set
        {
            if (_Value1 != value)
            {
                _Value1 = value;
                RaisePropertyChanged();
                IsInKeyboardMode1 = false;
                IsInKeyboardMode2 = false;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public MeasurementDescriptor Measurement1
    {
        get { return _Descriptor1; }
        set
        {
            if (_Descriptor1 != value)
            {
                _Descriptor1 = value;
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsInKeyboardMode1
    {
        get { return _IsInKeyboardMode1; }
        set
        {
            if (_IsInKeyboardMode1 != value)
            {
                _IsInKeyboardMode1 = value;
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public string Label2
    {
        get { return _Label2; }
        set
        {
            if (_Label2 != value)
            {
                _Label2 = value;
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public double Value2
    {
        get { return _Value2; }
        set
        {
            if (_Value2 != value)
            {
                _Value2 = value;
                RaisePropertyChanged();
                IsInKeyboardMode1 = false;
                IsInKeyboardMode2 = false;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public MeasurementDescriptor Measurement2
    {
        get { return _Descriptor2; }
        set
        {
            if (_Descriptor2 != value)
            {
                _Descriptor2 = value;
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsInKeyboardMode2
    {
        get { return _IsInKeyboardMode2; }
        set
        {
            if (_IsInKeyboardMode2 != value)
            {
                _IsInKeyboardMode2 = value;
                RaisePropertyChanged();
            }
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    string _Label1;
    double _Value1;
    MeasurementDescriptor _Descriptor1;
    bool _IsInKeyboardMode1;
    string _Label2;
    double _Value2;
    MeasurementDescriptor _Descriptor2;
    bool _IsInKeyboardMode2;
    bool _FirstFromKeyboard = true;

    //--------------------------------------------------------------------------------------------------

    public override void SimulatedKeyDown(KeyEventArgs eventArgs)
    {
        if (IsInKeyboardMode2)
        {
            ValueEditBox2.SimulatedKeyDown(eventArgs, _FirstFromKeyboard);
            if (eventArgs.Handled)
            {
                _FirstFromKeyboard = false;
            }
            return;
        }

        ValueEditBox1.SimulatedKeyDown(eventArgs, !IsInKeyboardMode1);
        if (eventArgs.Handled)
        {
            IsInKeyboardMode1 = !IsInKeyboardMode2;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public delegate void MultiValueEnteredEvent(MultiValueHudElement hudElement, double newValue1, double newValue2);

    public event MultiValueEnteredEvent MultiValueEntered;

    internal void RaiseMultiValueEntered()
    {
        MultiValueEntered?.Invoke(this, Value1, Value2);
    }

    //--------------------------------------------------------------------------------------------------

    public MultiValueHudElement()
    {
        InitializeComponent();
        SourceUpdated += _OnSourceUpdated;
    }

    //--------------------------------------------------------------------------------------------------

    public override void Cleanup()
    {
        MultiValueEntered = null;
        base.Cleanup();
    }

    //--------------------------------------------------------------------------------------------------

    void _OnSourceUpdated(object sender, DataTransferEventArgs eventArgs)
    {
        if (eventArgs.TargetObject == ValueEditBox1)
        {
            IsInKeyboardMode1 = false;
            IsInKeyboardMode2 = true;
            _FirstFromKeyboard = true;
        }
        else if (eventArgs.TargetObject == ValueEditBox2)
        {
            IsInKeyboardMode1 = false;
            IsInKeyboardMode2 = false;
            _FirstFromKeyboard = true;
            RaiseMultiValueEntered();
        }
    }
                
    //--------------------------------------------------------------------------------------------------

    public void SetValues(double value1, double value2)
    {
        Value1 = value1;
        Value2 = value2;
    }

    //--------------------------------------------------------------------------------------------------

    public void SetValue1(double value)
    {
        Value1 = value;
    }

    //--------------------------------------------------------------------------------------------------

    public void SetValue2(double value)
    {
        Value2 = value;
    }

    //--------------------------------------------------------------------------------------------------

}