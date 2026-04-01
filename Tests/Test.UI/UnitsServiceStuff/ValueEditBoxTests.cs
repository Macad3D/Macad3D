using Macad.Common;
using Macad.Presentation;
using Macad.Test.UI.Framework;
using NUnit.Framework;
using System.Reflection;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Input;

namespace Macad.Test.UI.UnitsServiceStuff;

[TestFixture]
public class ValueEditBoxTests : UITestBase
{
    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        Reset();

        // Initialize UnitsService for all tests
        var provider = new UnitsSettingsProvider(new UnitsParameterSet
        {
            LengthUnit = UnitId.Millimeter,
            LengthPrecision = 1,
            AngleUnit = UnitId.Degree,
            AnglePrecision = 1,
            TimeUnit = UnitId.Second,
            TimePrecision = 2
        });

        var units = new UnitsService(provider);
        AppServices.Units = units;
        units.RaiseMeasurementSettingsChanged();
    }

    //--------------------------------------------------------------------------------------------------
    // BASIC FORMATTING
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ValueEditBox_Formats_With_MeasurementDescriptor()
    {
        var desc = new MeasurementDescriptor(UnitId.Percentage, 0);

        var box = new ValueEditBox
        {
            Measurement = desc,
            Value = 0.42
        };

        box.UpdateLayout();

        // Numeric part only
        Assert.AreEqual("42", box.Text);

        // Suffix is separate
        Assert.AreEqual("%", UnitSymbolProvider.GetSymbol(desc.UnitId));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ValueEditBox_Parses_Text_To_Value()
    {
        var desc = new MeasurementDescriptor(UnitId.Percentage, 1);

        var box = new ValueEditBox
        {
            Measurement = desc
        };

        // Enable parsing via binding
        BindingOperations.SetBinding(box, ValueEditBox.ValueProperty, new Binding("Dummy")
        {
            Source = new object()
        });

        box.UpdateLayout();

        // Simulate user typing "12.3%"
        box.Text = "12.3%";
        box.MoveFocus(new TraversalRequest(FocusNavigationDirection.Next));

        typeof(ValueEditBox)
            .GetMethod("_CommitTextChange", BindingFlags.Instance | BindingFlags.NonPublic)
            .Invoke(box, null);

        Assert.That(box.Value, Is.EqualTo(0.123).Within(1e-9));
    }

    //--------------------------------------------------------------------------------------------------
    // NEGATIVE + ZERO FORMATTING
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ValueEditBox_Formats_Negative_And_Zero()
    {
        var desc = new MeasurementDescriptor(UnitId.Millimeter, 1);
        var box = new ValueEditBox { Measurement = desc };

        box.Value = 0.0;
        box.UpdateLayout();

        Assert.AreEqual("0.0", box.Text);
        Assert.AreEqual("mm", UnitSymbolProvider.GetSymbol(desc.UnitId));

        box.Value = -42.3;
        box.UpdateLayout();

        Assert.AreEqual("-42.3", box.Text);
        Assert.AreEqual("mm", UnitSymbolProvider.GetSymbol(desc.UnitId));
    }

    //--------------------------------------------------------------------------------------------------
    // DESCRIPTOR CHANGE
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ValueEditBox_Updates_When_MeasurementDescriptor_Changes()
    {
        var box = new ValueEditBox
        {
            Measurement = new MeasurementDescriptor(UnitId.Millimeter, 1),
            Value = 42.123
        };

        box.UpdateLayout();

        Assert.AreEqual("42.1", box.Text);
        Assert.AreEqual("mm", UnitSymbolProvider.GetSymbol(UnitId.Millimeter));

        // Increase precision
        box.Measurement = new MeasurementDescriptor(UnitId.Millimeter, 3);
        box.UpdateLayout();

        Assert.AreEqual("42.123", box.Text);
        Assert.AreEqual("mm", UnitSymbolProvider.GetSymbol(UnitId.Millimeter));
    }

    //--------------------------------------------------------------------------------------------------
    // ERROR HANDLING
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ValueEditBox_Shows_Error_On_Invalid_Input()
    {
        var desc = new MeasurementDescriptor(UnitId.Millimeter, 1);

        var box = new ValueEditBox { Measurement = desc };

        BindingOperations.SetBinding(box, ValueEditBox.ValueProperty, new Binding("Dummy")
        {
            Source = new object()
        });

        box.Text = "not-a-number";

        typeof(ValueEditBox)
            .GetMethod("_CommitTextChange", BindingFlags.Instance | BindingFlags.NonPublic)
            .Invoke(box, null);

        Assert.IsTrue(box.EvaluationError);
    }

    //--------------------------------------------------------------------------------------------------
    // SOURCE UPDATED
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ValueEditBox_Raises_SourceUpdated_On_Commit()
    {
        var desc = new MeasurementDescriptor(UnitId.Number, 2);

        var box = new ValueEditBox { Measurement = desc };

        var source = new DummySource();
        BindingOperations.SetBinding(
            box,
            TextBox.TextProperty,
            new Binding("Dummy")
            {
                Source = source,
                NotifyOnSourceUpdated = true
            }
        );

        box.UpdateLayout();

        bool updated = false;
        box.SourceUpdated += (_, __) => updated = true;

        box.Text = "42.5";

        typeof(ValueEditBox)
            .GetMethod("_CommitTextChange", BindingFlags.Instance | BindingFlags.NonPublic)
            .Invoke(box, null);

        Assert.IsTrue(updated);
    }

    public class DummySource
    {
        public string Dummy { get; set; }
    }

    //--------------------------------------------------------------------------------------------------
    // FORMULA + DECIMAL INPUT TESTS
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AcceptOneDecimalPointForValue()
    {
        TestDataGenerator.GenerateBox(MainWindow);

        var boxPanel = MainWindow.PropertyView.FindPanelByClass("BoxPropertyPanel");
        Assert.That(boxPanel, Is.Not.Null);

        boxPanel.EnterValue("BoxLength", "1.55", true);
        Assert.AreEqual(1.55, Pipe.GetValue<double>("$Selected.Shape.DimensionX"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AcceptMultipleDecimalPointsForFormular()
    {
        TestDataGenerator.GenerateBox(MainWindow);

        var boxPanel = MainWindow.PropertyView.FindPanelByClass("BoxPropertyPanel");
        Assert.That(boxPanel, Is.Not.Null);

        boxPanel.EnterValue("BoxLength", "=1.5+1.5+1.5", true);
        Assert.AreEqual(4.5, Pipe.GetValue<double>("$Selected.Shape.DimensionX"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AcceptOneMinusForValue()
    {
        TestDataGenerator.GenerateBox(MainWindow);

        var boxPanel = MainWindow.PropertyView.FindPanelByClass("BoxPropertyPanel");
        Assert.That(boxPanel, Is.Not.Null);

        boxPanel.EnterValue("BoxLength", "-1.5", true);
        Assert.AreEqual(-1.5, Pipe.GetValue<double>("$Selected.Shape.DimensionX"));

        boxPanel.EnterValue("BoxLength", "-2.5-5", true);
        Assert.AreEqual(-7.5, Pipe.GetValue<double>("$Selected.Shape.DimensionX"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AcceptMultipleMinusForFormular()
    {
        TestDataGenerator.GenerateBox(MainWindow);

        var boxPanel = MainWindow.PropertyView.FindPanelByClass("BoxPropertyPanel");
        Assert.That(boxPanel, Is.Not.Null);

        boxPanel.EnterValue("BoxLength", "=10-5-2", true);
        Assert.AreEqual(3.0, Pipe.GetValue<double>("$Selected.Shape.DimensionX"));
    }
}
