using FlaUI.Core.AutomationElements;
using FlaUI.Core.Input;
using NUnit.Framework;
using System;
using System.Globalization;
using System.IO;
using System.Threading;

namespace Macad.Test.UI.Framework;

public static class UITestHelpers
{
    //--------------------------------------------------------------------------------------------------

    static readonly object _Lock = new();
    static readonly string _LogFile = Path.Combine(AppDomain.CurrentDomain.BaseDirectory, "macad-ui-trace.txt");

    //--------------------------------------------------------------------------------------------------

    public static void Log(string message)
    {
        lock (_Lock)
        {
            File.AppendAllText(_LogFile, $"[{DateTime.Now:HH:mm:ss.fff}] {message}{Environment.NewLine}");
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static FormAdaptor WaitForPanel(MainWindowAdaptor mainWindow, string className, string expectedChildId = null, int timeoutMs = 3000)
    {
        var sw = System.Diagnostics.Stopwatch.StartNew();

        while (sw.ElapsedMilliseconds < timeoutMs)
        {
            var panels = mainWindow.PropertyView.FindPanelsByClass(className);

            foreach (var panel in panels)
            {
                // Skip invisible/offscreen panels
                if (panel.Element.Properties.IsOffscreen.ValueOrDefault)
                    continue;

                // Wait for the panel root to be responsive
                WaitForElementReady(panel);

                // If no specific child is required, we're done
                if (expectedChildId == null)
                    return panel;

                // If a specific child is required, wait for it to appear
                if (panel.Exists(expectedChildId))
                    return panel;
            }

            Thread.Sleep(50);
        }

        Assert.Fail($"Panel '{className}' did not become ready within {timeoutMs}ms.");
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool Until(Func<bool> condition, int timeoutMs = 2000, int intervalMs = 50)
    {
        var sw = System.Diagnostics.Stopwatch.StartNew();
        while (sw.ElapsedMilliseconds < timeoutMs)
        {
            if (condition())
                return true;

            Thread.Sleep(intervalMs);
        }
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public static void WaitForViewportReady(ViewportAdaptor viewport, int timeoutMs = 3000)
    {
        var sw = System.Diagnostics.Stopwatch.StartNew();

        while (sw.ElapsedMilliseconds < timeoutMs)
        {
            try
            {
                var element = viewport.Element;
                if (element == null)
                    continue;

                var rect = element.BoundingRectangle;
                if (rect.Width <= 0 || rect.Height <= 0)
                    continue;

                if (element.Properties.IsOffscreen.ValueOrDefault)
                    continue;

                if (!Wait.UntilResponsive(element))
                    continue;

                return;
            }
            catch
            {
                Thread.Sleep(50);
            }
        }

        Assert.Fail("Viewport never became ready.");
    }

    //--------------------------------------------------------------------------------------------------

    public static void WaitForElementReady(FormAdaptor adaptor, int timeoutMs = 2000)
    {
        var sw = System.Diagnostics.Stopwatch.StartNew();

        while (sw.ElapsedMilliseconds < timeoutMs)
        {
            try
            {
                var element = adaptor.Element;
                if (element == null)
                    continue;

                if (!element.Properties.IsOffscreen.ValueOrDefault &&
                    Wait.UntilResponsive(element))
                {
                    return;
                }
            }
            catch
            {
                Thread.Sleep(50);
            }
        }

        Assert.Fail("Element never became ready.");
    }

    //--------------------------------------------------------------------------------------------------

    public static string WaitForStringValue(FormAdaptor panel, string id, int timeoutMs = 3000)
    {
        string value = null;
        var start = DateTime.Now;

        while ((DateTime.Now - start).TotalMilliseconds < timeoutMs)
        {
            value = panel.GetValue<string>(id);

            if (!string.IsNullOrWhiteSpace(value) &&
                value != "INVALID" &&
                value != "NaN")
            {
                return value;
            }

            Thread.Sleep(50);
        }

        throw new Exception($"Timeout waiting for valid value for '{id}'. Last value: '{value}'");
    }

    //--------------------------------------------------------------------------------------------------

    public static double ParseUnitValue(string text)
    {
        text = text.Trim();

        if (text.EndsWith("mm", StringComparison.OrdinalIgnoreCase))
            text = text.Substring(0, text.Length - 2);

        return double.Parse(text, CultureInfo.InvariantCulture);
    }

    //--------------------------------------------------------------------------------------------------

    public static FormAdaptor ActivateShapeToolAndOpenPanel(MainWindowAdaptor mainWindow,
                                                            ViewportAdaptor viewport,
                                                            string ribbonButtonId,
                                                            string panelClassName,
                                                            double clickX = 0.5,
                                                            double clickY = 0.5)
    {
        mainWindow.Ribbon.ClickButton(ribbonButtonId);
        UITestHelpers.Until(() => mainWindow.Ribbon.IsChecked(ribbonButtonId), 500);
        viewport.ClickRelative(clickX, clickY);
        UITestHelpers.WaitForViewportReady(viewport);
        var panel = UITestHelpers.WaitForPanel(mainWindow, panelClassName);

        return panel;
    }

    //--------------------------------------------------------------------------------------------------
}
