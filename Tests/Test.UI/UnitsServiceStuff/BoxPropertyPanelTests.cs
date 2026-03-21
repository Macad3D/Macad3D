using System.Collections.Generic;
using Macad.Common;
using Macad.Interaction;
using Macad.Presentation;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.UnitsServiceStuff;

[TestFixture]
public class BoxPropertyPanelTests : UITestBase
{
    FormAdaptor _Panel;
    FormAdaptor _BoxPanel;
    ViewportAdaptor _Viewport;

    //--------------------------------------------------------------------------------------------------

    // Helper: strip unit suffix from formatted string
    string StripUnit(string formatted, MeasurementDescriptor desc)
    {
        var symbol = UnitSymbolProvider.GetSymbol(desc.UnitId);
        return formatted.EndsWith(symbol)
            ? formatted.Substring(0, formatted.Length - symbol.Length)
            : formatted;
    }

    //--------------------------------------------------------------------------------------------------

    // Measurement Provider (Simulated)
    class SimulateMeasurementSettingsProvider : IUnitsSettingsProvider
    {
        readonly Dictionary<PhysicalQuantity, (UnitId unit, int precision)> _Map =
            new()
            {
                { PhysicalQuantity.Length, (UnitId.Millimeter, 2) },
                { PhysicalQuantity.Angle,  (UnitId.Degree,     0) }
            };

        public UnitsParameterSet GetUnitsParameterSet()
        {
            return new UnitsParameterSet
            {
                LengthUnit = UnitId.Millimeter,
                LengthPrecision = 2,
                AngleUnit = UnitId.Degree,
                AnglePrecision = 0,
                TimeUnit = UnitId.Second,
                TimePrecision = 2
            };
        }

        public UnitId GetUnitId(PhysicalQuantity quantity)
        {
            return _Map.TryGetValue(quantity, out var v) ? v.unit : UnitId.Number;
        }

        public int GetPrecision(PhysicalQuantity quantity)
        {
            return _Map.TryGetValue(quantity, out var v) ? v.precision : 2;
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUpViewport()
    {
        _Viewport = MainWindow.Viewport;
        Assert.That(_Viewport, Is.Not.Null);
    }

    //--------------------------------------------------------------------------------------------------

    void ReselectBox()
    {
        _Viewport.ClickRelative(0.9, 0.5);
        _Viewport.ClickRelative(0.5, 0.5);
    }

    //--------------------------------------------------------------------------------------------------

    FormAdaptor WaitForPanel()
    {
        var panel = MainWindow.PropertyView.FindPanelByClass("BoxPropertyPanel");
        Assert.That(panel, Is.Not.Null);
        return panel;
    }

    //--------------------------------------------------------------------------------------------------

    MeasurementDescriptor GetLengthDescriptor()
    {
        var desc = AppServices.Units.GetDescriptor(PhysicalQuantity.Length);
        Assert.That(desc, Is.Not.Null);
        return desc;
    }

    //--------------------------------------------------------------------------------------------------
    // TEST 1 — Create Box
    //--------------------------------------------------------------------------------------------------

    [Test, Order(1)]
    public void CreateBox()
    {
        Reset();

        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateBox");
        Assert.That(MainWindow.Ribbon.IsChecked("CreateBox"), Is.True);

        _Viewport.ClickRelative(0.3, 0.3);
        _Viewport.ClickRelative(0.6, 0.6);
        _Viewport.ClickRelative(0.6, 0.3);

        Assert.That(MainWindow.Ribbon.IsChecked("CreateBox"), Is.False);

        _BoxPanel = WaitForPanel();
        _Panel = _BoxPanel;
    }

    //--------------------------------------------------------------------------------------------------
    // TEST 2 — Edit Height
    //--------------------------------------------------------------------------------------------------

    [Test, Order(2)]
    public void EditHeight_FullPipeline()
    {
        ReselectBox();
        _BoxPanel = WaitForPanel();

        var uiText = _BoxPanel.GetValue<string>("BoxHeight");
        Assert.That(uiText, Is.Not.Null);

        var desc = GetLengthDescriptor();

        Assert.That(AppServices.Units.TryParseExpression(uiText, desc, out var originalKernel), Is.True);

        var displayValue = UnitConversionService.ConvertToDisplayUnits(originalKernel, desc.UnitId, desc.PhysicalQuantity);
        var newDisplayValue = displayValue + 2.0;
        var newKernelValue = UnitConversionService.ConvertToKernelUnits(newDisplayValue, desc.UnitId, desc.PhysicalQuantity);
        var formatted = AppServices.Units.Format(newKernelValue, desc);

        _BoxPanel.EnterValue("BoxHeight", formatted);

        ReselectBox();
        _BoxPanel = WaitForPanel();

        var uiAfter = _BoxPanel.GetValue<string>("BoxHeight");
        Assert.That(uiAfter, Is.EqualTo(StripUnit(formatted, desc)));
    }

    //--------------------------------------------------------------------------------------------------
    // TEST 3 — Fields Exist
    //--------------------------------------------------------------------------------------------------

    [Test, Order(3)]
    public void FieldsExist()
    {
        _Panel = WaitForPanel();

        Assert.That(_Panel.GetValue<string>("BoxLength"), Is.Not.Null);
        Assert.That(_Panel.GetValue<string>("BoxWidth"), Is.Not.Null);
        Assert.That(_Panel.GetValue<string>("BoxHeight"), Is.Not.Null);
    }

    //--------------------------------------------------------------------------------------------------
    // TEST 4 — Edit Length
    //--------------------------------------------------------------------------------------------------

    [Test, Order(4)]
    public void EditLength_FullPipeline()
    {
        ReselectBox();
        _Panel = WaitForPanel();

        var uiText = _Panel.GetValue<string>("BoxLength");
        Assert.That(uiText, Is.Not.Null);

        var desc = GetLengthDescriptor();

        Assert.That(AppServices.Units.TryParseExpression(uiText, desc, out var originalKernel), Is.True);

        var displayValue = UnitConversionService.ConvertToDisplayUnits(originalKernel, desc.UnitId, desc.PhysicalQuantity);
        var newDisplayValue = displayValue + 5.0;
        var newKernelValue = UnitConversionService.ConvertToKernelUnits(newDisplayValue, desc.UnitId, desc.PhysicalQuantity);
        var formatted = AppServices.Units.Format(newKernelValue, desc);

        _Panel.EnterValue("BoxLength", formatted);

        ReselectBox();
        _Panel = WaitForPanel();

        var uiAfter = _Panel.GetValue<string>("BoxLength");
        Assert.That(uiAfter, Is.EqualTo(StripUnit(formatted, desc)));
    }

    //--------------------------------------------------------------------------------------------------
    // TEST 5 — Edit Width
    //--------------------------------------------------------------------------------------------------

    [Test, Order(5)]
    public void EditWidth_FullPipeline()
    {
        ReselectBox();
        _Panel = WaitForPanel();

        var uiText = _Panel.GetValue<string>("BoxWidth");
        Assert.That(uiText, Is.Not.Null);

        var desc = GetLengthDescriptor();

        Assert.That(AppServices.Units.TryParseExpression(uiText, desc, out var originalKernel), Is.True);

        var displayValue = UnitConversionService.ConvertToDisplayUnits(originalKernel, desc.UnitId, desc.PhysicalQuantity);
        var newDisplayValue = displayValue + 3.0;
        var newKernelValue = UnitConversionService.ConvertToKernelUnits(newDisplayValue, desc.UnitId, desc.PhysicalQuantity);
        var formatted = AppServices.Units.Format(newKernelValue, desc);

        _Panel.EnterValue("BoxWidth", formatted);

        ReselectBox();
        _Panel = WaitForPanel();

        var uiAfter = _Panel.GetValue<string>("BoxWidth");
        Assert.That(uiAfter, Is.EqualTo(StripUnit(formatted, desc)));
    }

    //--------------------------------------------------------------------------------------------------
    // TEST 6 — Edit Height (Panel)
    //--------------------------------------------------------------------------------------------------

    [Test, Order(6)]
    public void EditHeightPanel_FullPipeline()
    {
        ReselectBox();
        _Panel = WaitForPanel();

        var uiText = _Panel.GetValue<string>("BoxHeight");
        Assert.That(uiText, Is.Not.Null);

        var desc = GetLengthDescriptor();

        Assert.That(AppServices.Units.TryParseExpression(uiText, desc, out var originalKernel), Is.True);

        var displayValue = UnitConversionService.ConvertToDisplayUnits(originalKernel, desc.UnitId, desc.PhysicalQuantity);
        var newDisplayValue = displayValue + 2.0;
        var newKernelValue = UnitConversionService.ConvertToKernelUnits(newDisplayValue, desc.UnitId, desc.PhysicalQuantity);
        var formatted = AppServices.Units.Format(newKernelValue, desc);

        _Panel.EnterValue("BoxHeight", formatted);

        ReselectBox();
        _Panel = WaitForPanel();

        var uiAfter = _Panel.GetValue<string>("BoxHeight");
        Assert.That(uiAfter, Is.EqualTo(StripUnit(formatted, desc)));
    }

    //--------------------------------------------------------------------------------------------------
    // TEST 7 — Panel Updates After Reselect
    //--------------------------------------------------------------------------------------------------

    [Test, Order(7)]
    public void PanelUpdatesAfterReselect_FullPipeline()
    {
        ReselectBox();
        _Panel = WaitForPanel();

        var uiText = _Panel.GetValue<string>("BoxLength");
        Assert.That(uiText, Is.Not.Null);

        var desc = GetLengthDescriptor();

        Assert.That(AppServices.Units.TryParseExpression(uiText, desc, out var originalKernel), Is.True);

        var newKernelValue = UnitConversionService.ConvertToKernelUnits(42.0, desc.UnitId, desc.PhysicalQuantity);
        var formatted = AppServices.Units.Format(newKernelValue, desc);

        _Panel.EnterValue("BoxLength", formatted);

        ReselectBox();
        _Panel = WaitForPanel();

        var uiAfter = _Panel.GetValue<string>("BoxLength");
        Assert.That(uiAfter, Is.EqualTo(StripUnit(formatted, desc)));
    }

    //--------------------------------------------------------------------------------------------------
}
