using FlaUI.Core.Input;
using FlaUI.Core.Tools;
using Macad.Common;
using Macad.Presentation;
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
        Pipe = null;
    }

    //--------------------------------------------------------------------------------------------------

    public void Reset()
    {
        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(MainWindow.Window);
        MainWindow.Ribbon.ClickFileMenuItem("NewModel");

        // Save model?
        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(MainWindow.Window);
        
        if (TaskDialogAdaptor.IsTaskDialogOpen(MainWindow))
        {
            var dlg = new TaskDialogAdaptor(MainWindow);
            Assert.That(dlg, Is.Not.Null);
            Assert.That(dlg.Title, Is.EqualTo("Unsaved Changes"));
            dlg.ClickButton(TaskDialogAdaptor.Button.No);
            Wait.UntilInputIsProcessed();
            Wait.UntilResponsive(MainWindow.Window);
        }

        AppServices.Units.RebuildDescriptors();
        AppServices.Units.RaiseMeasurementSettingsChanged();

        Mouse.Position = MainWindow.Window.BoundingRectangle.Center();
        Wait.UntilResponsive(MainWindow.Window);
        MainWindow.Viewport.WaitUntilReady();
    }

    //--------------------------------------------------------------------------------------------------

}