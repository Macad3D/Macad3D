using Macad.Common;
using System.Windows;
using System.Windows.Controls;

namespace Macad.Window;

/// <summary>
/// Interaction logic for MainWindowStatusBar.xaml
/// </summary>
public partial class MainWindowStatusBar : UserControl
{
    //--------------------------------------------------------------------------------------------------

    public MeasurementDescriptor DescriptorLength
    {
        get { return (MeasurementDescriptor)GetValue(DescriptorLengthProperty); }
        set { SetValue(DescriptorLengthProperty, value); }
    }

    public static readonly DependencyProperty DescriptorLengthProperty =
        DependencyProperty.Register(
            nameof(DescriptorLength),
            typeof(MeasurementDescriptor),
            typeof(MainWindowStatusBar),
            new PropertyMetadata(null));

    //--------------------------------------------------------------------------------------------------

    public MainWindowStatusBar()
    {
        InitializeComponent();
        DescriptorLength = UnitsService.GetDescriptor(PhysicalQuantities.Length);

        Loaded += (_, __) =>
        {
            UnitsService.MeasurementSettingsChanged += OnMeasurementSettingsChanged;
        };

        Unloaded += (_, __) =>
        {
            UnitsService.MeasurementSettingsChanged -= OnMeasurementSettingsChanged;
        };
    }

    //--------------------------------------------------------------------------------------------------

    void OnMeasurementSettingsChanged()
    {
        DescriptorLength = UnitsService.GetDescriptor(PhysicalQuantities.Length);
    }

    //--------------------------------------------------------------------------------------------------
}