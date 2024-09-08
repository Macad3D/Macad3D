using System.IO;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Editors.Toolkits;

[TestFixture]
public class ScriptUITests : UITestBase
{
    [SetUp]
    public void SetUp()
    {
        Reset();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RunScript()
    {
        MainWindow.Ribbon.SelectTab(RibbonTabs.Toolbox);

        // Abort file window
        MainWindow.Ribbon.ClickButton("RunScript");
        var fileDlg = new FileDialogAdaptor(MainWindow);
        Assert.That(fileDlg.Title, Is.EqualTo("Open Script..."));
        fileDlg.Close();

        // Select
        MainWindow.Ribbon.ClickButton("RunScript");
        fileDlg = new FileDialogAdaptor(MainWindow);
        Assert.That(fileDlg.Title, Is.EqualTo("Open Script..."));
        fileDlg.Load(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UnitTests\SourceData\Scripts\CreateBoxBody.csx"));

        // Check for body
        Assert.AreEqual(1, Pipe.GetValue<int>("$Context.Document.EntityCount"));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RunScriptError()
    {
        MainWindow.Ribbon.SelectTab(RibbonTabs.Toolbox);

        MainWindow.Ribbon.ClickButton("RunScript");
        var fileDlg = new FileDialogAdaptor(MainWindow);
        Assert.That(fileDlg.Title, Is.EqualTo("Open Script..."));
        fileDlg.Load(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UnitTests\SourceData\Scripts\CompilerError.csx"));

        Assert.IsTrue(TaskDialogAdaptor.IsTaskDialogOpen(MainWindow));
        var errordlg = new TaskDialogAdaptor(MainWindow);
        Assert.AreEqual("Run script failed", errordlg.Title);
        errordlg.Close();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ScriptAddToMru()
    {
        MainWindow.Ribbon.SelectTab(RibbonTabs.Toolbox);
        MainWindow.Ribbon.ClickButton("RunScript");
        var fileDlg = new FileDialogAdaptor(MainWindow);
        Assert.That(fileDlg.Title, Is.EqualTo("Open Script..."));
        fileDlg.Load(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UnitTests\SourceData\Scripts\CreateBoxBody.csx"));
        Assert.AreEqual(1, Pipe.GetValue<int>("$Context.Document.EntityCount"));
            
        MainWindow.Ribbon.OpenSplitButtonMenu("RunScript");
        Assert.IsTrue(ContextMenuAdaptor.IsContextMenuOpen(MainWindow));
        var context = new ContextMenuAdaptor(MainWindow);
        context.ClickMenuItem("CreateBoxBody");
        Assert.AreEqual(2, Pipe.GetValue<int>("$Context.Document.EntityCount"));
    }

}