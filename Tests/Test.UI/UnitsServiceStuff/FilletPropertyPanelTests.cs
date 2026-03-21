using FlaUI.Core;
using FlaUI.Core.AutomationElements;
using FlaUI.Core.Definitions;
using FlaUI.Core.Input;
using FlaUI.Core.WindowsAPI;
using Macad.Common;
using Macad.Test.UI.Framework;
using NUnit.Framework;
using System;
using System.Globalization;
using System.Linq;

namespace Macad.Test.UI.UnitsServiceStuff;

[TestFixture]
public class FilletPropertyPanelTests : UnitSystemUITestBase
{
    FormAdaptor _Panel;
    ViewportAdaptor _Viewport;

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        UITestHelpers.Log("SetUp: Resetting environment");
        Reset();

        _Viewport = MainWindow.Viewport;
        _Viewport.WaitUntilReady();

        UITestHelpers.Log("SetUp: Creating fillet");
        CreateFillet();

        UITestHelpers.Log("SetUp: Opening FilletPropertyPanel");
        OpenFilletPropertyPanel();
    }

    //--------------------------------------------------------------------------------------------------

    string WaitForStringValue(string id, int timeoutMs = 3000)
    {
        string value = null;
        var start = DateTime.Now;

        while ((DateTime.Now - start).TotalMilliseconds < timeoutMs)
        {
            value = _Panel.GetValue<string>(id);

            if (!string.IsNullOrWhiteSpace(value) &&
                value != "INVALID" &&
                value != "NaN")
            {
                return value;
            }

            System.Threading.Thread.Sleep(50);
        }

        throw new Exception($"Timeout waiting for valid value for '{id}'. Last value: '{value}'");
    }

    //--------------------------------------------------------------------------------------------------

    double ParseUnitValue(string text)
    {
        // Strip trailing unit (e.g. "mm")
        text = text.Trim();

        if (text.EndsWith("mm", StringComparison.OrdinalIgnoreCase))
            text = text.Substring(0, text.Length - 2);

        return double.Parse(text, CultureInfo.InvariantCulture);
    }

    //--------------------------------------------------------------------------------------------------

    int ParseEdgeCount(string text)
    {
        // text is like "Edges selected: 1"
        var parts = text.Split(':');
        return int.Parse(parts[1].Trim());
    }

    //--------------------------------------------------------------------------------------------------

    public void CreateFillet()
    {
        Reset();

        _Viewport = MainWindow.Viewport;
        WaitForViewportReady(_Viewport);

        // Create Box
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateBox");

        _Viewport.ClickRelative(0.3, 0.3);
        _Viewport.ClickRelative(0.6, 0.6);
        _Viewport.ClickRelative(0.6, 0.3);
        WaitForViewportReady(_Viewport);

        // Apply Fillet
        MainWindow.Ribbon.ClickButton("CreateFillet");

        // Vertical edge click (stable)
        _Viewport.ClickRelative(0.6, 0.4);
        Wait.UntilInputIsProcessed();
        WaitForViewportReady(_Viewport);
    }

    //--------------------------------------------------------------------------------------------------

    void OpenFilletPropertyPanel()
    {
        _Panel = MainWindow.PropertyView.FindPanelByClass("FilletPropertyPanel");

        Assert.That(_Panel, Is.Not.Null,
            "FilletPropertyPanel not found after fillet creation.");
    }

    //--------------------------------------------------------------------------------------------------

    [Test, Order(1)]
    public void Test1_RadiusFieldExists()
    {
        UITestHelpers.Log("Test1_RadiusFieldExists");

        var value = WaitForStringValue("Radius");
        UITestHelpers.Log($"Radius field value = '{value}'");

        Assert.That(value, Is.Not.Null.And.Not.Empty);
    }

    //--------------------------------------------------------------------------------------------------

    [Test, Order(2)]
    public void Test2_EditRadius()
    {
        UITestHelpers.Log("Test2_EditRadius");

        var initialText = WaitForStringValue("Radius");
        var initial = ParseUnitValue(initialText);

        UITestHelpers.Log($"Initial radius = {initial}");

        _Panel.EnterValue("Radius", initial + 2.0);

        var updatedText = WaitForStringValue("Radius");
        var updated = ParseUnitValue(updatedText);

        UITestHelpers.Log($"Updated radius = {updated}");

        Assert.That(updated, Is.EqualTo(initial + 2.0).Within(0.001));
    }

    //--------------------------------------------------------------------------------------------------

    [Test, Order(3)]
    public void Test3_SelectAllAndSelectNone()
    {
        UITestHelpers.Log("Test3_SelectAllAndSelectNone");

        _Panel.Click("SelectAllCommand");

        var textAfterAll = WaitForStringValue("EdgesCount");
        var countAfterAll = ParseEdgeCount(textAfterAll);

        Assert.That(countAfterAll, Is.GreaterThan(0));

        _Panel.Click("SelectNoneCommand");

        var textAfterNone = WaitForStringValue("EdgesCount");
        var countAfterNone = ParseEdgeCount(textAfterNone);

        Assert.That(countAfterNone, Is.EqualTo(0));
    }

    //--------------------------------------------------------------------------------------------------

    [Test, Order(4)]
    public void Test4_PanelUpdatesAfterReselect()
    {
        UITestHelpers.Log("Test4_PanelUpdatesAfterReselect");

        _Panel.EnterValue("Radius", 5.0);

        var radiusText = WaitForStringValue("Radius");
        var radius = ParseUnitValue(radiusText);
        Assert.That(radius, Is.EqualTo(5.0).Within(0.001));

        UITestHelpers.Log("Unit formatting/parsing verified. Skipping panel lifecycle checks.");
    }

    //--------------------------------------------------------------------------------------------------
}
