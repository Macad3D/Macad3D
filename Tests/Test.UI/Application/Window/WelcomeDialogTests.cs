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
        Assert.IsTrue(WelcomeDialog.IsVisible("SampleList"));

        string samplesPath = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\Samples"));
        int sampleCount = Directory.GetFiles(samplesPath, "*.model").Length;
        var items = WelcomeDialog.GetListBoxItems("SampleList").ToArray();
        Assert.AreEqual(sampleCount, items.Length);
        Assert.That(items, Contains.Item("Woodpecker Case (Milling)"));

        // Single click only selects
        WelcomeDialog.ClickListBoxItem("SampleList", "Woodpecker Case (Milling)", doubleClick: false);
        Assert.IsTrue(WelcomeDialog.IsWindowEnabled());
        Assert.IsTrue(WelcomeDialog.IsVisible("SampleList"));

        // Double click opens
        WelcomeDialog.ClickListBoxItem("SampleList", "Woodpecker Case (Milling)", doubleClick: true);

        Wait.UntilResponsive(WelcomeDialog.Window);
        Wait.UntilResponsive(MainWindow.Window);

        Assert.IsFalse(WelcomeDialog.IsWindowEnabled());
        Assert.Greater(MainWindow.Document.GetItems().Count(), 0);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SampleGalleryBack()
    {
        Assert.IsTrue(WelcomeDialog.IsVisible("RecentList"));

        WelcomeDialog.Click("OpenSampleButton");
        Assert.IsTrue(WelcomeDialog.IsVisible("SampleList"));
        Assert.IsFalse(WelcomeDialog.IsVisible("RecentList"));

        WelcomeDialog.Click("SamplesBackButton");
        Assert.IsTrue(WelcomeDialog.IsVisible("RecentList"));
        Assert.IsFalse(WelcomeDialog.IsVisible("SampleList"));
        Assert.IsTrue(WelcomeDialog.IsWindowEnabled());
    }

    //--------------------------------------------------------------------------------------------------
}