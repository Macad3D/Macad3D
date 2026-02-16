using System.Globalization;
using System.Linq;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Controls.Primitives;
using System.Windows.Data;
using System.Windows.Input;
using Fluent;
using Macad.Common;
using Macad.Interaction;
using Macad.Presentation;

namespace Macad.Window;

/// <summary>
/// Interaction logic for MainWindowRibbon.xaml
/// </summary>
public partial class MainWindowRibbon : UserControl
{
    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty DescriptorAngleProperty =
        DependencyProperty.Register(
        nameof(DescriptorAngle),
        typeof(MeasurementDescriptor),
        typeof(MainWindowRibbon),
        new PropertyMetadata(null));

    public MeasurementDescriptor DescriptorAngle
    {
        get => (MeasurementDescriptor)GetValue(DescriptorAngleProperty);
        set => SetValue(DescriptorAngleProperty, value);
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty DescriptorDimensionless0dpProperty =
        DependencyProperty.Register(
        nameof(DescriptorDimensionless0dp),
        typeof(MeasurementDescriptor),
        typeof(MainWindowRibbon),
        new PropertyMetadata(null));

    public MeasurementDescriptor DescriptorDimensionless0dp
    {
        get => (MeasurementDescriptor)GetValue(DescriptorDimensionless0dpProperty);
        set => SetValue(DescriptorDimensionless0dpProperty, value);
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty DescriptorDimensionless2dpProperty =
    DependencyProperty.Register(
    nameof(DescriptorDimensionless2dp),
    typeof(MeasurementDescriptor),
    typeof(MainWindowRibbon),
    new PropertyMetadata(null));

    public MeasurementDescriptor DescriptorDimensionless2dp
    {
        get => (MeasurementDescriptor)GetValue(DescriptorDimensionless2dpProperty);
        set => SetValue(DescriptorDimensionless2dpProperty, value);
    }

    //--------------------------------------------------------------------------------------------------

    public MeasurementDescriptor DescriptorPercentage0dp { get; set; }

    //--------------------------------------------------------------------------------------------------

    public MainWindowRibbon()
    {
        InitializeComponent();
        InitializeDescriptors();
        RibbonLocalization.Current.Culture = CultureInfo.InvariantCulture;
        UnitsService.MeasurementSettingsChanged += OnMeasurementSettingsChanged;
    }

    //--------------------------------------------------------------------------------------------------

    void InitializeDescriptors()
    {
        DescriptorPercentage0dp = new MeasurementDescriptor(PhysicalQuantities.Dimensionless, DimensionlessUnits.Percentage, DimensionlessPrecision.Decimal_0);
        DescriptorDimensionless0dp = new MeasurementDescriptor(PhysicalQuantities.Dimensionless, DimensionlessUnits.None, DimensionlessPrecision.Decimal_0);
        DescriptorDimensionless2dp = new MeasurementDescriptor(PhysicalQuantities.Dimensionless, DimensionlessUnits.None, DimensionlessPrecision.Decimal_2);
        DescriptorAngle = UnitsService.GetDescriptor(PhysicalQuantities.Angle);
    }

    //--------------------------------------------------------------------------------------------------

    void OnMeasurementSettingsChanged()
    {
        InitializeDescriptors();
    }

    //--------------------------------------------------------------------------------------------------

    void _ContextualGroup_IsVisibleChanged(object sender, DependencyPropertyChangedEventArgs e)
    {
        if ((!(bool)e.OldValue) && (bool)e.NewValue)
        {
            var group = sender as RibbonContextualTabGroup;
            var tabItem = group?.Items.FirstOrDefault();
            if (tabItem != null)
            {
                Dispatcher.BeginInvoke(() => tabItem.IsSelected = true);
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _CloseMenuOnSourceUpdated(object sender, DataTransferEventArgs e)
    {
        var element = PresentationHelper.FindLogicalParent<DropDownButton>(sender as FrameworkElement);
        if (element != null)
        {
            element.IsDropDownOpen = false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _RecentFilesMenuItem_Click(object sender, RoutedEventArgs e)
    {
        RibbonFileMenu.IsDropDownOpen = false;
    }

    //--------------------------------------------------------------------------------------------------

    void _KeyDown(object sender, KeyEventArgs e)
    {
        if (e.OriginalSource is TextBoxBase)
            return;

        // Forward to workspace
        e.Handled = AppContext.Current.ShortcutHandler.KeyPressed("Workspace", e.Key, Keyboard.Modifiers);
    }

    //--------------------------------------------------------------------------------------------------

}