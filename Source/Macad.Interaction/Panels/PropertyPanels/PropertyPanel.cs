using System;
using System.Windows;
using Macad.Common;

namespace Macad.Interaction.Panels;

public abstract class PropertyPanel : PanelBase, IDisposable
{
    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty DescriptorAngleProperty =
        DependencyProperty.Register(
            nameof(DescriptorAngle),
            typeof(MeasurementDescriptor),
            typeof(PropertyPanel),
            new PropertyMetadata(null));
    public MeasurementDescriptor DescriptorAngle
    {
        get => (MeasurementDescriptor)GetValue(DescriptorAngleProperty);
        set => SetValue(DescriptorAngleProperty, value);
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty DescriptorLengthProperty =
        DependencyProperty.Register(
            nameof(DescriptorLength),
            typeof(MeasurementDescriptor),
            typeof(PropertyPanel),
            new PropertyMetadata(null));

    public MeasurementDescriptor DescriptorLength
    {
        get => (MeasurementDescriptor)GetValue(DescriptorLengthProperty);
        set => SetValue(DescriptorLengthProperty, value);
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty DescriptorDimensionless0dpProperty =
    DependencyProperty.Register(
        nameof(DescriptorDimensionless0dp),
        typeof(MeasurementDescriptor),
        typeof(PropertyPanel),
        new PropertyMetadata(null));

    public MeasurementDescriptor DescriptorDimensionless0dp
    {
        get => (MeasurementDescriptor)GetValue(DescriptorDimensionless0dpProperty);
        set => SetValue(DescriptorDimensionless0dpProperty, value);
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty DescriptorDimensionlessPercentage1dpProperty =
    DependencyProperty.Register(
        nameof(DescriptorDimensionlessPercentage1dp),
        typeof(MeasurementDescriptor),
        typeof(PropertyPanel),
        new PropertyMetadata(null));

    public MeasurementDescriptor DescriptorDimensionlessPercentage1dp
    {
        get => (MeasurementDescriptor)GetValue(DescriptorDimensionlessPercentage1dpProperty);
        set => SetValue(DescriptorDimensionlessPercentage1dpProperty, value);
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty DescriptorDimensionless2dpProperty =
    DependencyProperty.Register(
        nameof(DescriptorDimensionless2dp),
        typeof(MeasurementDescriptor),
        typeof(PropertyPanel),
        new PropertyMetadata(null));

    public MeasurementDescriptor DescriptorDimensionless2dp
    {
        get => (MeasurementDescriptor)GetValue(DescriptorDimensionless2dpProperty);
        set => SetValue(DescriptorDimensionless2dpProperty, value);
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty HeaderButtonsProperty = 
        DependencyProperty.Register("HeaderButtons", typeof(FrameworkElement), typeof(PropertyPanel), new PropertyMetadata(default(FrameworkElement)));

    public FrameworkElement HeaderButtons
    {
        get { return (FrameworkElement) GetValue(HeaderButtonsProperty); }
        set { SetValue(HeaderButtonsProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty HeaderProperty = DependencyProperty.Register(
        "Header", typeof(string), typeof(PropertyPanel), new PropertyMetadata("Unknown"));

    public string Header
    {
        get { return (string) GetValue(HeaderProperty); }
        set { SetValue(HeaderProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty IsCollapsedProperty = DependencyProperty.Register(
        "IsCollapsed", typeof(bool), typeof(PropertyPanel), new PropertyMetadata(default(bool)));

    public bool IsCollapsed
    {
        get { return (bool) GetValue(IsCollapsedProperty); }
        set { SetValue(IsCollapsedProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    protected WorkspaceController WorkspaceController { get; private set; }

    protected IPropertyPanelManager PanelManager { get; private set; }

    // The instance will be consumed by property view, so must be public
    // ReSharper disable once MemberCanBeProtected.Global
    public BaseObject Instance { get; set; } 

    bool _IsDisposed = false;
        
    //--------------------------------------------------------------------------------------------------

    protected PropertyPanel()
    {
        SourceUpdated += OnSourceUpdated;
        InitializeDescriptors();
    }

    //--------------------------------------------------------------------------------------------------

    public void Dispose()
    {
        Dispose(true);
        GC.SuppressFinalize(this);
    }

    //--------------------------------------------------------------------------------------------------

    void OnMeasurementSettingsChanged()
    {
        InitializeDescriptors();
    }

    //--------------------------------------------------------------------------------------------------

    protected virtual void Dispose(bool disposing)
    {
        if (_IsDisposed)
            return;
                    
        Cleanup();
        WorkspaceController = null;
        PanelManager = null;
        Instance = null;
        SourceUpdated -= OnSourceUpdated;
        UnitsService.MeasurementSettingsChanged -= OnMeasurementSettingsChanged;

        _IsDisposed = true;
    }

    //--------------------------------------------------------------------------------------------------

    public abstract void Initialize(BaseObject instance);
    public abstract void Cleanup();

    //--------------------------------------------------------------------------------------------------

    protected void InitializeDescriptors()
    {
        DescriptorAngle = UnitsService.GetDescriptor(PhysicalQuantities.Angle);
        DescriptorLength = UnitsService.GetDescriptor(PhysicalQuantities.Length);
        DescriptorDimensionless0dp = new MeasurementDescriptor(PhysicalQuantities.Dimensionless, DimensionlessUnits.None, DimensionlessPrecision.Decimal_0);
        DescriptorDimensionlessPercentage1dp = new MeasurementDescriptor(PhysicalQuantities.Dimensionless, DimensionlessUnits.Percentage, DimensionlessPrecision.Decimal_1);
        DescriptorDimensionless2dp = new MeasurementDescriptor(PhysicalQuantities.Dimensionless, DimensionlessUnits.None, DimensionlessPrecision.Decimal_2);
    }

    //--------------------------------------------------------------------------------------------------

    #region Value Commit

    protected virtual void OnSourceUpdated(object sender, System.Windows.Data.DataTransferEventArgs e)
    {
        CommitChange();
    }

    //--------------------------------------------------------------------------------------------------

    protected virtual void CommitChange()
    {
        InteractiveContext.Current?.UndoHandler?.Commit();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    public static T CreatePanel<T>(BaseObject instance) where T: PropertyPanel
    {
        if (InteractiveContext.Current?.PropertyPanelManager == null)
            return null;

        var panel = Activator.CreateInstance(typeof(T)) as T;
        if (panel != null)
        {
            panel.WorkspaceController = InteractiveContext.Current.WorkspaceController;
            panel.PanelManager = InteractiveContext.Current.PropertyPanelManager;
            panel.Instance = instance;
            panel.Initialize(instance);
        }
        return panel;
    }

    //--------------------------------------------------------------------------------------------------

    public virtual void OnAddedToPane(IPropertyPanelManager manager)
    {
        UnitsService.MeasurementSettingsChanged += OnMeasurementSettingsChanged;
    }

    //--------------------------------------------------------------------------------------------------

}