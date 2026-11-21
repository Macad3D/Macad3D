using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Application.Window;

[TestFixture]
public class DialogCloseButtonTests : UITestBase
{
    const string CloseButtonId = "PART_CloseButton";

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        Reset();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void HiddenByDefault()
    {
        // The task dialog does not enable the close button
        TestDataGenerator.GenerateBox(MainWindow);
        MainWindow.ClickCloseButton();

        var dlg = new TaskDialogAdaptor(MainWindow);
        Assume.That(dlg.Title, Is.EqualTo("Unsaved Changes"));
        Assert.That(dlg.Exists(CloseButtonId), Is.False);

        dlg.ClickButton(TaskDialogAdaptor.Button.Cancel);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AboutDialog()
    {
        MainWindow.Ribbon.ClickFileMenuItem("ShowAboutDialog");

        var dlg = new WindowAdaptor(MainWindow, "AboutDialog");
        dlg.Click(CloseButtonId);

        Assert.That(WindowAdaptor.IsWindowOpen(MainWindow, "AboutDialog"), Is.False);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ShortcutCheatSheet()
    {
        MainWindow.Click("ToolbarShowShortcutCheatSheet");

        var dlg = new WindowAdaptor(MainWindow, "ShortcutCheatSheet");
        dlg.Click(CloseButtonId);

        Assert.That(WindowAdaptor.IsWindowOpen(MainWindow, "ShortcutCheatSheet"), Is.False);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void PreferencesDialog()
    {
        MainWindow.Ribbon.ClickFileMenuItem("Settings", "PreferencesDialog");

        var dlg = new WindowAdaptor(MainWindow, "PreferencesDialog");
        dlg.Click(CloseButtonId);

        Assert.That(WindowAdaptor.IsWindowOpen(MainWindow, "PreferencesDialog"), Is.False);
    }

    //--------------------------------------------------------------------------------------------------
}
