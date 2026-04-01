using System;
using NUnit.Framework;
using Macad.Common;
using Macad.Interaction;
using Macad.Presentation;
using System.Windows;
using System.Windows.Media;

namespace Macad.Test.UI.Units;

[TestFixture]
public class UnitSystemSwitchingTests
{
    Window _Window;

    //--------------------------------------------------------------------------------------------------
    // Test window setup
    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        _Window = new Window
        {
            Width = 300,
            Height = 200,
            WindowStyle = WindowStyle.None,
            ShowInTaskbar = false,
            ShowActivated = false
        };

        if (AppServices.Units == null)
        {
            var set = new UnitsParameterSet()
            {
                LengthUnit = UnitId.Millimeter,
                LengthPrecision = 2,
                AngleUnit = UnitId.Degree,
                AnglePrecision = 2,
                TimeUnit = UnitId.Second,
                TimePrecision = 2,
            };

            AppServices.Units = new UnitsService(new UnitsSettingsProvider(set));
        }

        _Window.Show();
        DoEvents();
    }

    [TearDown]
    public void TearDown()
    {
        _Window.Close();
    }

    void DoEvents()
    {
        var frame = new System.Windows.Threading.DispatcherFrame();
        System.Windows.Threading.Dispatcher.CurrentDispatcher.BeginInvoke(
            System.Windows.Threading.DispatcherPriority.Background,
            new System.Windows.Threading.DispatcherOperationCallback(delegate (object f)
            {
                ((System.Windows.Threading.DispatcherFrame)f).Continue = false;
                return null;
            }), frame);
        System.Windows.Threading.Dispatcher.PushFrame(frame);
    }

    //--------------------------------------------------------------------------------------------------
    // Unit switching helper
    //--------------------------------------------------------------------------------------------------

    void SetLengthUnits(UnitId unitId, int precision)
    {
        var provider = new UnitsSettingsProvider(new UnitsParameterSet
        {
            LengthUnit = unitId,
            LengthPrecision = precision,

            AngleUnit = UnitId.Degree,
            AnglePrecision = 1,

            TimeUnit = UnitId.Second,
            TimePrecision = 2
        });

        var units = new UnitsService(provider);
        AppServices.Units = units;
        units.RaiseMeasurementSettingsChanged();

        DoEvents();
    }

    //--------------------------------------------------------------------------------------------------
    // TESTS
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ValueEditBox_Reformats_OnUnitSystemChange()
    {
        // Start in fractional inches (1/16")
        SetLengthUnits(UnitId.InchFractional, 16);

        var veb = new ValueEditBox
        {
            Measurement = AppServices.Units.GetDescriptor(PhysicalQuantity.Length),
            Value = 25.4 // kernel mm
        };

        _Window.Content = veb;
        DoEvents();

        // Should display "1\"" (1 inch)
        Assert.That(veb.Text, Does.Contain("1"));

        // Switch to centimeters with 2 decimals
        SetLengthUnits(UnitId.Centimeter, 2);

        veb.Measurement = AppServices.Units.GetDescriptor(PhysicalQuantity.Length);
        DoEvents();

        // Should now display "2.54cm"
        Assert.That(veb.Text, Does.Contain("2.54"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MeasurementTextBlock_Reformats_OnUnitSystemChange()
    {
        // Start in inches
        SetLengthUnits(UnitId.InchFractional, 16);

        var mtb = new MeasurementTextBlock
        {
            Measurement = AppServices.Units.GetDescriptor(PhysicalQuantity.Length),
            Value = 50.8 // kernel mm
        };

        _Window.Content = mtb;
        DoEvents();

        Assert.That(mtb.Text, Does.Contain("2")); // 2 inches

        // Switch to millimeters with 1 decimal
        SetLengthUnits(UnitId.Millimeter, 1);

        mtb.Measurement = AppServices.Units.GetDescriptor(PhysicalQuantity.Length);
        DoEvents();

        Assert.That(mtb.Text, Does.Contain("50.8"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void KernelValue_RemainsConstant()
    {
        SetLengthUnits(UnitId.InchFractional, 16);

        var veb = new ValueEditBox
        {
            Measurement = AppServices.Units.GetDescriptor(PhysicalQuantity.Length),
            Value = 100.0 // kernel mm
        };

        _Window.Content = veb;
        DoEvents();

        double before = veb.Value;

        // Switch to meters
        SetLengthUnits(UnitId.Meter, 3);

        double after = veb.Value;

        Assert.That(after, Is.EqualTo(before).Within(1e-9));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SwitchingUnits_RaisesEvent()
    {
        SetLengthUnits(UnitId.Millimeter, 2);

        bool raised = false;

        AppServices.Units.MeasurementSettingsChanged += () => raised = true;

        AppServices.Units.RaiseMeasurementSettingsChanged();

        Assert.That(raised, Is.True);
    }


    //--------------------------------------------------------------------------------------------------

    [Test]
    public void HudElement_Reformats_OnUnitSystemChange()
    {
        SetLengthUnits(UnitId.InchFractional, 16);

        var hud = new LabelHudElement
        {
            Measurement = AppServices.Units.GetDescriptor(PhysicalQuantity.Length),
            Value = 25.4
        };

        _Window.Content = hud;
        DoEvents();

        var mtb = FindVisualChild<MeasurementTextBlock>(hud);
        Assert.That(mtb, Is.Not.Null);
        Assert.That(mtb.Text, Does.Contain("1"));

        SetLengthUnits(UnitId.Centimeter, 2);

        hud.Measurement = AppServices.Units.GetDescriptor(PhysicalQuantity.Length);
        DoEvents();

        mtb = FindVisualChild<MeasurementTextBlock>(hud);
        Assert.That(mtb.Text, Does.Contain("2.54"));
    }

    //--------------------------------------------------------------------------------------------------

    static T FindVisualChild<T>(DependencyObject parent) where T : DependencyObject
    {
        if (parent == null)
            return null;

        int count = VisualTreeHelper.GetChildrenCount(parent);
        for (int i = 0; i < count; i++)
        {
            var child = VisualTreeHelper.GetChild(parent, i);

            if (child is T typed)
                return typed;

            var result = FindVisualChild<T>(child);
            if (result != null)
                return result;
        }

        return null;
    }
}
