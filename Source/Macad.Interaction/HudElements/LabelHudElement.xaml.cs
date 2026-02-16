using Macad.Common;
using System.Windows;

namespace Macad.Interaction;

public partial class LabelHudElement : HudElement
{
    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty ValueProperty =
        DependencyProperty.Register(
            nameof(Value),
            typeof(double),
            typeof(LabelHudElement),
            new PropertyMetadata(0.0));

    public double Value
    {
        get => (double)GetValue(ValueProperty);
        set => SetValue(ValueProperty, value);
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty TextValueProperty =
        DependencyProperty.Register(
            nameof(TextValue),
            typeof(string),
            typeof(LabelHudElement),
            new PropertyMetadata(null));

    public string TextValue
    {
        get => (string)GetValue(TextValueProperty);
        set => SetValue(TextValueProperty, value);
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty MeasurementProperty =
        DependencyProperty.Register(
            nameof(Measurement),
            typeof(MeasurementDescriptor),
            typeof(LabelHudElement),
            new PropertyMetadata(null));

    public MeasurementDescriptor Measurement
    {
        get => (MeasurementDescriptor)GetValue(MeasurementProperty);
        set => SetValue(MeasurementProperty, value);
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty LabelProperty =
        DependencyProperty.Register(
            nameof(Label),
            typeof(string),
            typeof(LabelHudElement),
            new PropertyMetadata(null));

    public string Label
    {
        get => (string)GetValue(LabelProperty);
        set => SetValue(LabelProperty, value);
    }

    //--------------------------------------------------------------------------------------------------

    public LabelHudElement()
    {
        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------
}