using Macad.Common;
using Macad.Presentation;
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

        DescriptorLength = AppServices.Units.GetDescriptor(PhysicalQuantity.Length);

        Loaded += (_, __) =>
        {
            AppServices.Units.MeasurementSettingsChanged += OnMeasurementSettingsChanged;
        };

        Unloaded += (_, __) =>
        {
            AppServices.Units.MeasurementSettingsChanged -= OnMeasurementSettingsChanged;
        };
    }

    //--------------------------------------------------------------------------------------------------

    void OnMeasurementSettingsChanged()
    {
        DescriptorLength = AppServices.Units.GetDescriptor(PhysicalQuantity.Length);
    }

    //--------------------------------------------------------------------------------------------------
}