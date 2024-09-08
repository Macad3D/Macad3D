using FlaUI.Core.Input;
using FlaUI.Core.Tools;
using NUnit.Framework;

namespace Macad.Test.UI.Framework;

public class UITestBase
{
    public ApplicationAdaptor App { get; private set; }

    public MainWindowAdaptor MainWindow { get; private set; }

    public DebugPipeClient Pipe { get; private set; }

    protected bool KeepAppRunning;
    protected bool EnableWelcomeDialog;

    //--------------------------------------------------------------------------------------------------

    [OneTimeSetUp]
    public void OneTimeSetUp()
    {
        App = new ApplicationAdaptor();
        App.Init(EnableWelcomeDialog ? "" : "-nowelcome");

        // Create main window
        MainWindow = new MainWindowAdaptor(App);

        Pipe = new DebugPipeClient();
    }

    //--------------------------------------------------------------------------------------------------

    [OneTimeTearDown]
    public void OneTimeTearDown()
    {
        if (KeepAppRunning)
        {
            TestContext.Out.WriteLine("!!! WARNING !!!  App closing on test tear down was disabled!");
            return;
        }
        App?.Cleanup();
        App = null;

        Pipe?.Cleanup();
        App = null;
    }

    //--------------------------------------------------------------------------------------------------

    public void Reset()
    {
        MainWindow.Ribbon.ClickFileMenuItem("NewModel");

        // Save model?
        if (TaskDialogAdaptor.IsTaskDialogOpen(MainWindow))
        {
            var dlg = new TaskDialogAdaptor(MainWindow);
            Assert.That(dlg, Is.Not.Null);
            Assert.That(dlg.Title, Is.EqualTo("Unsaved Changes"));
            dlg.ClickButton(TaskDialogAdaptor.Button.No);
        }

        Mouse.Position = MainWindow.Window.BoundingRectangle.Center();
        Wait.UntilResponsive(MainWindow.Window);
    }

    //--------------------------------------------------------------------------------------------------

}