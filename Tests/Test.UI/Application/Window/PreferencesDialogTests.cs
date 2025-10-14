using System.Linq;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Application.Window;

public class PreferencesDialogTests : UITestBase
{
    [SetUp]
    public void SetUp()
    {
        Reset();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void OpenClose()
    {
        MainWindow.Ribbon.ClickFileMenuItem("Settings", "PreferencesDialog");
        Assert.IsTrue(WindowAdaptor.IsWindowOpen(MainWindow, "PreferencesDialog"));

        var dlg = new WindowAdaptor(MainWindow, "PreferencesDialog");
        dlg.Click("CloseBtn");

        Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "PreferencesDialog"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ChangeSet()
    {
        MainWindow.Ribbon.ClickFileMenuItem("Settings", "PreferencesDialog");
        Assume.That(WindowAdaptor.IsWindowOpen(MainWindow, "PreferencesDialog"));
        var dlg = new WindowAdaptor(MainWindow, "PreferencesDialog");

        // Assumes that "Application" is the first parameter set and has a parameter "Theme"
        Assert.That(dlg.Exists("Theme"));
        dlg.SelectListBoxItem("ParameterSetList", 1);
        Assert.That(!dlg.Exists("Theme"));

        dlg.Close();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RestartNoChanges()
    {
        MainWindow.Ribbon.ClickFileMenuItem("Settings", "PreferencesDialog");
        Assume.That(WindowAdaptor.IsWindowOpen(MainWindow, "PreferencesDialog"));
        var dlg = new WindowAdaptor(MainWindow, "PreferencesDialog");
        Assert.That(!dlg.Exists("RestartBtn"));

        // Assumes that "Application" is the first parameter set and has a parameter "Theme"
        dlg.SelectComboBoxItem("Theme", "Dark");
        dlg.SelectComboBoxItem("Theme", "Light");
        Assert.That(dlg.Exists("RestartBtn"));

        dlg.Click("RestartBtn");
        Assert.That(() => App.Application.HasExited, Is.True.After(10).Seconds.PollEvery(100));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RestartChangesDiscard()
    {
        TestDataGenerator.GenerateBox(MainWindow);

        MainWindow.Ribbon.ClickFileMenuItem("Settings", "PreferencesDialog");
        Assume.That(WindowAdaptor.IsWindowOpen(MainWindow, "PreferencesDialog"));
        var dlg = new WindowAdaptor(MainWindow, "PreferencesDialog");
        Assert.That(!dlg.Exists("RestartBtn"));

        // Assumes that "Application" is the first parameter set and has a parameter "Theme"
        dlg.SelectComboBoxItem("Theme", "Dark");
        dlg.SelectComboBoxItem("Theme", "Light");
        Assert.That(dlg.Exists("RestartBtn"));

        dlg.Click("RestartBtn");

        // Save model?
        var dlg2 = new TaskDialogAdaptor(MainWindow);
        Assert.That(dlg2.Title, Is.EqualTo("Unsaved Changes"));
        dlg2.ClickButton(TaskDialogAdaptor.Button.No);

        Assert.That(() => App.Application.HasExited, Is.True.After(10).Seconds.PollEvery(100));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RestartChangesCancel()
    {
        TestDataGenerator.GenerateBox(MainWindow);

        MainWindow.Ribbon.ClickFileMenuItem("Settings", "PreferencesDialog");
        Assume.That(WindowAdaptor.IsWindowOpen(MainWindow, "PreferencesDialog"));
        var dlg = new WindowAdaptor(MainWindow, "PreferencesDialog");
        Assert.That(!dlg.Exists("RestartBtn"));

        // Assumes that "Application" is the first parameter set and has a parameter "Theme"
        dlg.SelectComboBoxItem("Theme", "Dark");
        dlg.SelectComboBoxItem("Theme", "Light");
        Assert.That(dlg.Exists("RestartBtn"));

        dlg.Click("RestartBtn");

        // Save model?
        var dlg2 = new TaskDialogAdaptor(MainWindow);
        Assert.That(dlg2.Title, Is.EqualTo("Unsaved Changes"));
        dlg2.ClickButton(TaskDialogAdaptor.Button.Cancel);

        // Check that dialog is still there
        dlg = new WindowAdaptor(MainWindow, "PreferencesDialog");
        Assert.That(dlg, Is.Not.Null);

        dlg.Close();
    }
}