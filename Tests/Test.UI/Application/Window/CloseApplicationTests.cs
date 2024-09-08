using System.Linq;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Application.Window;

[TestFixture]
public class CloseApplicationTests
{
    public ApplicationAdaptor App { get; private set; }
    public MainWindowAdaptor MainWindow { get; private set; }

    [SetUp]
    public void SetUp()
    {
        App = new ApplicationAdaptor();
        App.Init("-nowelcome");

        // Create main window
        MainWindow = new MainWindowAdaptor(App);
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
    public void CloseApplicationNoChanges()
    {
        MainWindow.ClickCloseButton();
        Assert.That(() => App.Application.HasExited, Is.True.After(10).Seconds.PollEvery(100));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CloseApplicationSaveChangesCancel()
    {
        TestDataGenerator.GenerateBox(MainWindow);
        MainWindow.ClickCloseButton();

        // Save model?
        var dlg = new TaskDialogAdaptor(MainWindow);
        Assert.That(dlg.Title, Is.EqualTo("Unsaved Changes"));
        dlg.ClickButton(TaskDialogAdaptor.Button.Cancel);

        // Check that box is still there
        Assert.AreEqual(1, MainWindow.Document.GetItems().Count());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CloseApplicationSaveChangesNo()
    {
        TestDataGenerator.GenerateBox(MainWindow);
        MainWindow.ClickCloseButton();

        // Save model?
        var dlg = new TaskDialogAdaptor(MainWindow);
        Assert.That(dlg.Title, Is.EqualTo("Unsaved Changes"));
        dlg.ClickButton(TaskDialogAdaptor.Button.No);

        Assert.That(() => App.Application.HasExited, Is.True.After(10).Seconds.PollEvery(100));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CloseApplicationSaveChangesCancel2()
    {
        TestDataGenerator.GenerateBox(MainWindow);
        MainWindow.ClickCloseButton();

        // Save model?
        var dlg = new TaskDialogAdaptor(MainWindow);
        Assert.That(dlg.Title, Is.EqualTo("Unsaved Changes"));
        dlg.ClickButton(TaskDialogAdaptor.Button.Yes);

        var fileDlg = new FileDialogAdaptor(MainWindow);
        Assert.That(fileDlg.Title, Is.EqualTo("Saving Model..."));
        fileDlg.ClickButton(FileDialogAdaptor.Button.Cancel);

        // Check that button box is still there
        Assert.AreEqual(1, MainWindow.Document.GetItems().Count());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CloseApplicationSaveChanges()
    {
        TestDataGenerator.GenerateBox(MainWindow);
        MainWindow.ClickCloseButton();

        // Save model?
        var dlg = new TaskDialogAdaptor(MainWindow);
        Assert.That(dlg.Title, Is.EqualTo("Unsaved Changes"));
        dlg.ClickButton(TaskDialogAdaptor.Button.Yes);

        FileDialogAdaptor.DoSaveModel(MainWindow); 

        Assert.That(() => App.Application.HasExited, Is.True.After(10).Seconds.PollEvery(100));
    }

    //--------------------------------------------------------------------------------------------------

}