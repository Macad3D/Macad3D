using System.Linq;
using FlaUI.Core.WindowsAPI;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Application.Edit;

[TestFixture]
public class TopologyEditTests : UITestBase
{
    [SetUp]
    public void SetUp()
    {
        Reset();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void DeleteBodyTest()
    {
        TestDataGenerator.GenerateBox(MainWindow);
        Pipe.TypeKey(VirtualKeyShort.DELETE);

        // Check that box is away
        Assert.AreEqual(0, MainWindow.Document.GetItems().Count());
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void DeleteBodyViaRibbon()
    {
        TestDataGenerator.GenerateBox(MainWindow);
        MainWindow.Ribbon.SelectTab(RibbonTabs.Edit);
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("Delete"));
        MainWindow.Ribbon.ClickButton("Delete");
            
        // Check that box is away
        Assert.AreEqual(0, MainWindow.Document.GetItems().Count());
        Assert.IsFalse(MainWindow.Ribbon.IsEnabled("Delete"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Duplicate()
    {
        TestDataGenerator.GenerateBox(MainWindow);
        MainWindow.Ribbon.SelectTab(RibbonTabs.Edit);
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("Duplicate"));
        MainWindow.Ribbon.ClickButton("Duplicate");

        // Check that box is duplicated
        Assert.AreEqual(2, MainWindow.Document.GetItems().Count());
        Assert.AreEqual(1, MainWindow.Document.GetSelectedItems().Count());
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void DuplicateReuseBodyReference()
    {
        TestDataGenerator.GenerateBodyReference(MainWindow);
        MainWindow.Ribbon.SelectTab(RibbonTabs.Edit);
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("Duplicate"));
        MainWindow.Ribbon.ClickButton("Duplicate");

        var dlg = new TaskDialogAdaptor(MainWindow);
        Assert.That(dlg, Is.Not.Null);
        Assert.That(dlg.Title,  Is.EqualTo("Foreign Body References") );
        dlg.ClickButton(TaskDialogAdaptor.Button.Command1);

        // Check that box is duplicated
        Assert.AreEqual(3, MainWindow.Document.GetItems().Count());
        Assert.AreEqual(1, MainWindow.Document.GetSelectedItems().Count());
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void DuplicateCloneBodyReference()
    {
        TestDataGenerator.GenerateBodyReference(MainWindow);
        MainWindow.Ribbon.SelectTab(RibbonTabs.Edit);
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("Duplicate"));
        MainWindow.Ribbon.ClickButton("Duplicate");

        var dlg = new TaskDialogAdaptor(MainWindow);
        Assert.That(dlg, Is.Not.Null);
        Assert.That(dlg.Title,  Is.EqualTo("Foreign Body References") );
        dlg.ClickButton(TaskDialogAdaptor.Button.Command2);

        // Check that box is duplicated
        Assert.AreEqual(4, MainWindow.Document.GetItems().Count());
        Assert.AreEqual(1, MainWindow.Document.GetSelectedItems().Count());
    }
        
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void DuplicateCancelBodyReferenceDialog()
    {
        TestDataGenerator.GenerateBodyReference(MainWindow);
        MainWindow.Ribbon.SelectTab(RibbonTabs.Edit);
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("Duplicate"));
        MainWindow.Ribbon.ClickButton("Duplicate");

        var dlg = new TaskDialogAdaptor(MainWindow);
        Assert.That(dlg, Is.Not.Null);
        Assert.That(dlg.Title,  Is.EqualTo("Foreign Body References") );
        dlg.Close();

        // Check that box is not duplicated
        Assert.AreEqual(2, MainWindow.Document.GetItems().Count());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CopyToAndPasteFromClipboard()
    {
        TestDataGenerator.GenerateBox(MainWindow);
        MainWindow.Ribbon.SelectTab(RibbonTabs.Edit);
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("CopyClipboard"));
        MainWindow.Ribbon.ClickButton("CopyClipboard");
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("PasteClipboard"));
        MainWindow.Ribbon.ClickButton("PasteClipboard");

        // Check that box is duplicated
        Assert.AreEqual(2, MainWindow.Document.GetItems().Count());
        Assert.AreEqual(1, MainWindow.Document.GetSelectedItems().Count());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CutToAndPasteFromClipboard()
    {
        TestDataGenerator.GenerateBox(MainWindow);
        MainWindow.Ribbon.SelectTab(RibbonTabs.Edit);
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("CutClipboard"));
        MainWindow.Ribbon.ClickButton("CutClipboard");
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("PasteClipboard"));
        MainWindow.Ribbon.ClickButton("PasteClipboard");

        // Check that box exists only once
        Assert.AreEqual(1, MainWindow.Document.GetItems().Count());
        Assert.AreEqual(1, MainWindow.Document.GetSelectedItems().Count());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CopyPasteWithBodyReference()
    {
        TestDataGenerator.GenerateBodyReference(MainWindow);
        MainWindow.Ribbon.SelectTab(RibbonTabs.Edit);
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("CopyClipboard"));
        MainWindow.Ribbon.ClickButton("CopyClipboard");
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("PasteClipboard"));
        MainWindow.Ribbon.ClickButton("PasteClipboard");

        var dlg = new TaskDialogAdaptor(MainWindow);
        Assert.That(dlg, Is.Not.Null);
        Assert.That(dlg.Title,  Is.EqualTo("Foreign Body References") );
        dlg.ClickButton(TaskDialogAdaptor.Button.Command1);

        // Check that box is duplicated
        Assert.AreEqual(3, MainWindow.Document.GetItems().Count());
        Assert.AreEqual(1, MainWindow.Document.GetSelectedItems().Count());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CutPasteWithBodyReference()
    {
        TestDataGenerator.GenerateBodyReference(MainWindow);
        MainWindow.Ribbon.SelectTab(RibbonTabs.Edit);
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("CutClipboard"));
        MainWindow.Ribbon.ClickButton("CutClipboard");

        MainWindow.Document.SelectItem("Box_1");
        MainWindow.Ribbon.ClickButton("Delete");

        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("PasteClipboard"));
        MainWindow.Ribbon.ClickButton("PasteClipboard");

        Assert.IsFalse(TaskDialogAdaptor.IsTaskDialogOpen(MainWindow));

        // Check that box is duplicated
        Assert.AreEqual(2, MainWindow.Document.GetItems().Count());
        Assert.AreEqual(1, MainWindow.Document.GetSelectedItems().Count());
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void CopyWithBodyReferenceToNewModel()
    {
        TestDataGenerator.GenerateBodyReference(MainWindow);
        MainWindow.Ribbon.SelectTab(RibbonTabs.Edit);
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("CutClipboard"));
        MainWindow.Ribbon.ClickButton("CutClipboard");

        Reset(); // Creates new model

        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("PasteClipboard"));
        MainWindow.Ribbon.ClickButton("PasteClipboard");

        Assert.IsFalse(TaskDialogAdaptor.IsTaskDialogOpen(MainWindow));

        // Check that box is duplicated
        Assert.AreEqual(2, MainWindow.Document.GetItems().Count());
        Assert.AreEqual(1, MainWindow.Document.GetSelectedItems().Count());
    }

    //--------------------------------------------------------------------------------------------------

}