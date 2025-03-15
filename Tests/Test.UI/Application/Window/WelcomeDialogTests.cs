using System.IO;
using System.Linq;
using FlaUI.Core.Input;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Application.Window;

[TestFixture]
public class WelcomeDialogTests
{
    public ApplicationAdaptor App { get; private set; }
    public WindowAdaptor WelcomeDialog { get; private set; }
    public MainWindowAdaptor MainWindow { get; private set; }

    [SetUp]
    public void SetUp()
    {
        App = new ApplicationAdaptor();
        App.Init("");

        MainWindow = new MainWindowAdaptor(App);
        WelcomeDialog = new WindowAdaptor(MainWindow, "WelcomeDialog");
    }

    //--------------------------------------------------------------------------------------------------

    [TearDown]
    public void Stop()
    {
        App?.Cleanup();
        App = null;
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateNewModel()
    {
        WelcomeDialog.Click("CreateNewButton");
        Wait.UntilResponsive(WelcomeDialog.Window);
        Wait.UntilResponsive(MainWindow.Window);

        Assert.IsFalse(WelcomeDialog.IsWindowEnabled());
        Assert.AreEqual(0, MainWindow.Document.GetItems().Count());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void OpenExistingModel()
    {
        WelcomeDialog.Click("OpenExistingButton");
        var fileDlg = new FileDialogAdaptor(WelcomeDialog);
        Assert.AreEqual("Open Model...", fileDlg.Title);
        fileDlg.ClickButton(FileDialogAdaptor.Button.Cancel);
        Assert.IsTrue(WelcomeDialog.IsWindowEnabled());

        WelcomeDialog.Click("OpenExistingButton");
        string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UITests\SourceData\Cylinder.model"));
        FileDialogAdaptor.DoLoadModel(WelcomeDialog, path);

        Wait.UntilResponsive(WelcomeDialog.Window);
        Wait.UntilResponsive(MainWindow.Window);

        Assert.IsFalse(WelcomeDialog.IsWindowEnabled());
        Assert.Greater(MainWindow.Document.GetItems().Count(), 0);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void OpenSampleModel()
    {
        WelcomeDialog.Click("OpenSampleButton");
        string path = "WoodpeckerCase.model";
        FileDialogAdaptor.DoLoadModel(WelcomeDialog, path);

        Wait.UntilResponsive(WelcomeDialog.Window);
        Wait.UntilResponsive(MainWindow.Window);

        Assert.IsFalse(WelcomeDialog.IsWindowEnabled());
        Assert.Greater(MainWindow.Document.GetItems().Count(), 0);
    }

    //--------------------------------------------------------------------------------------------------
}