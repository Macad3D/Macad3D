using System.IO;
using System.Linq;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Application.Exchange;

[TestFixture]
public class FileDropTests : UITestBase
{
    [SetUp]
    public void SetUp()
    {
        Reset();
        TestDataGenerator.GenerateBox(MainWindow);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CancelTaskDialog()
    {
        string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UITests\SourceData\ImprintRingFace.brep"));
        Assert.That(MainWindow.SendFileDrop(path));

        var dlg = new TaskDialogAdaptor(MainWindow);
        Assert.That(dlg, Is.Not.Null);
        Assert.That(dlg.Title,  Is.EqualTo("Import Data") );

        dlg.ClickButton(TaskDialogAdaptor.Button.Cancel);

        // Check that box is still there
        Assert.AreEqual(1, MainWindow.Document.GetItems().Count());
        Assert.AreEqual("Box_1", MainWindow.Document.GetItems().First().Name);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ImportMerged()
    {
        string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UITests\SourceData\ImprintRingFace.brep"));
        Assert.That(MainWindow.SendFileDrop(path));

        var dlg = new TaskDialogAdaptor(MainWindow);
        Assert.That(dlg, Is.Not.Null);
        Assert.That(dlg.Title, Is.EqualTo("Import Data"));

        dlg.ClickButton(TaskDialogAdaptor.Button.Command2);

        // Check that data was imported
        Assert.AreEqual(2, MainWindow.Document.GetItems().Count());

        // Undo action
        MainWindow.Ribbon.SelectTab(RibbonTabs.Edit);
        MainWindow.Ribbon.ClickButton("Undo");
        Assert.AreEqual(1, MainWindow.Document.GetItems().Count());
        Assert.AreEqual("Box_1", MainWindow.Document.GetItems().First().Name);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ImportToNewModel()
    {
        string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UITests\SourceData\ImprintRingFace.brep"));
        Assert.That(MainWindow.SendFileDrop(path));

        var dlg = new TaskDialogAdaptor(MainWindow);
        Assert.That(dlg, Is.Not.Null);
        Assert.That(dlg.Title, Is.EqualTo("Import Data"));

        dlg.ClickButton(TaskDialogAdaptor.Button.Command1);

        // Save model?
        dlg = new TaskDialogAdaptor(MainWindow);
        Assert.That(dlg, Is.Not.Null);
        Assert.That(dlg.Title, Is.EqualTo("Unsaved Changes"));
        dlg.ClickButton(TaskDialogAdaptor.Button.No);

        // Check that button box is not there
        Assert.AreEqual(1, MainWindow.Document.GetItems().Count());
        Assert.AreEqual("ImprintRingFace", MainWindow.Document.GetItems().First().Name);

        // Undo action not available, box is not there
        MainWindow.Ribbon.SelectTab(RibbonTabs.Edit);
        MainWindow.Ribbon.ClickButton("Undo");
        Assert.AreEqual(0, MainWindow.Document.GetItems().Count());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ImportToNewModelCancelSave()
    {
        string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UITests\SourceData\ImprintRingFace.brep"));
        Assert.That(MainWindow.SendFileDrop(path));

        var dlg = new TaskDialogAdaptor(MainWindow);
        Assert.That(dlg, Is.Not.Null);
        Assert.That(dlg.Title, Is.EqualTo("Import Data"));

        dlg.ClickButton(TaskDialogAdaptor.Button.Command1);

        // Save model?
        dlg = new TaskDialogAdaptor(MainWindow);
        Assert.That(dlg, Is.Not.Null);
        Assert.That(dlg.Title, Is.EqualTo("Unsaved Changes"));

        dlg.ClickButton(TaskDialogAdaptor.Button.Cancel, false);

        // Check that box is still there
        Assert.AreEqual(1, MainWindow.Document.GetItems().Count());
        Assert.AreEqual("Box_1", MainWindow.Document.GetItems().First().Name);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LoadModel()
    {
        string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UITests\SourceData\Cylinder.model"));
        Assert.That(MainWindow.SendFileDrop(path));

        // Save model?
        var dlg = new TaskDialogAdaptor(MainWindow);
        Assert.That(dlg, Is.Not.Null);
        Assert.That(dlg.Title, Is.EqualTo("Unsaved Changes"));
        dlg.ClickButton(TaskDialogAdaptor.Button.No);

        // Check that box is not selectable anymore
        Assert.AreEqual(1, MainWindow.Document.GetItems().Count());
        Assert.AreEqual("Cylinder", MainWindow.Document.GetItems().First().Name);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LoadModelCancelSave()
    {
        string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UITests\SourceData\Cylinder.model"));
        Assert.That(MainWindow.SendFileDrop(path));

        // Save model?
        var dlg = new TaskDialogAdaptor(MainWindow);
        Assert.That(dlg, Is.Not.Null);
        Assert.That(dlg.Title, Is.EqualTo("Unsaved Changes"));
        dlg.ClickButton(TaskDialogAdaptor.Button.Cancel);

        // Check that box is still here
        Assert.AreEqual(1, MainWindow.Document.GetItems().Count());
        Assert.AreEqual("Box_1", MainWindow.Document.GetItems().First().Name);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ImportToSketch()
    {
        string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UITests\SourceData\ImportSketch.dxf"));
        Assert.That(MainWindow.SendFileDrop(path));
            
        var dlg = new WindowAdaptor(MainWindow, "ExchangerSettings");
        Assert.IsNotNull(dlg);
        dlg.Click("Ok");
        Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));

        // Check that data was imported
        Assert.AreEqual(2, MainWindow.Document.GetItems().Count());

        // Undo action
        MainWindow.Ribbon.SelectTab(RibbonTabs.Edit);
        MainWindow.Ribbon.ClickButton("Undo");

        // Check that box is still here
        Assert.AreEqual(1, MainWindow.Document.GetItems().Count());
        Assert.AreEqual("Box_1", MainWindow.Document.GetItems().First().Name);
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ImportToSketchCanceled()
    {
        string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UITests\SourceData\ImportSketch.dxf"));
        Assert.That(MainWindow.SendFileDrop(path));
            
        var dlg = new WindowAdaptor(MainWindow, "ExchangerSettings");
        Assert.IsNotNull(dlg);
        dlg.Click("Cancel");
        Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));

        // Check that box is still alone
        Assert.AreEqual(1, MainWindow.Document.GetItems().Count());
        Assert.AreEqual("Box_1", MainWindow.Document.GetItems().First().Name);
    }
}