using System.IO;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Application.Exchange;

[TestFixture]
public class SketchExchangerTests : UITestBase
{
    [SetUp]
    public void SetUp()
    {
        Reset();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ExportSketchCancelFileDlg()
    {
        var path = Path.Combine(FileDialogAdaptor.GetTempPath(), "sketch.svg");
        System.IO.File.Delete(path);
        TestDataGenerator.GenerateSketch(MainWindow);

        // Do Export
        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);
        MainWindow.Ribbon.ClickButton("SketchExchange");
        var menu = new ContextMenuAdaptor(MainWindow);
        menu.ClickMenuItem("ExportAllToFile");

        var fileDlg = new FileDialogAdaptor(MainWindow);
        fileDlg.Cancel();
        Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));
        Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));

        Assert.IsFalse(System.IO.File.Exists(path));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ExportSketchToSvgCancelExchangerSettings()
    {
        var path = Path.Combine(FileDialogAdaptor.GetTempPath(), "sketch.svg");
        TestDataGenerator.GenerateSketch(MainWindow);

        // Do Export
        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);
        MainWindow.Ribbon.ClickButton("SketchExchange");
        var menu = new ContextMenuAdaptor(MainWindow);
        menu.ClickMenuItem("ExportAllToFile");

        var fileDlg = new FileDialogAdaptor(MainWindow);
        fileDlg.SelectFileType("*.svg");
        fileDlg.Save(path, checkFile:false);
        Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));

        var dlg = new WindowAdaptor(MainWindow, "ExchangerSettings");
        Assert.IsNotNull(dlg);
        dlg.Click("Cancel");
        Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));

        Assert.IsFalse(System.IO.File.Exists(path));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ExportSketchToSvg()
    {
        var path = Path.Combine(FileDialogAdaptor.GetTempPath(), "sketch.svg");
        TestDataGenerator.GenerateSketch(MainWindow);

        // Do Export
        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);
        MainWindow.Ribbon.ClickButton("SketchExchange");
        var menu = new ContextMenuAdaptor(MainWindow);
        menu.ClickMenuItem("ExportAllToFile");

        var fileDlg = new FileDialogAdaptor(MainWindow);
        fileDlg.SelectFileType("*.svg");
        fileDlg.Save(path, checkFile:false);
        Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));

        var dlg = new WindowAdaptor(MainWindow, "ExchangerSettings");
        Assert.IsNotNull(dlg);
        dlg.Click("Ok");
        Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));

        FileDialogAdaptor.CheckFileExists(path);
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ExportSketchToDxf()
    {
        var path = Path.Combine(FileDialogAdaptor.GetTempPath(), "sketch.dxf");
        TestDataGenerator.GenerateSketch(MainWindow);

        // Do Export
        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);
        MainWindow.Ribbon.ClickButton("SketchExchange");
        var menu = new ContextMenuAdaptor(MainWindow);
        menu.ClickMenuItem("ExportAllToFile");

        var fileDlg = new FileDialogAdaptor(MainWindow);
        fileDlg.SelectFileType("*.dxf");
        fileDlg.Save(path, checkFile:false);
        Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));

        var dlg = new WindowAdaptor(MainWindow, "ExchangerSettings");
        Assert.IsNotNull(dlg);
        dlg.Click("Ok");
        Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));

        FileDialogAdaptor.CheckFileExists(path);
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ImportSketchCancelFileDlg()
    {
        TestDataGenerator.GenerateSketch(MainWindow);

        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);
        MainWindow.Ribbon.ClickButton("SketchExchange");
        var menu = new ContextMenuAdaptor(MainWindow);
        menu.ClickMenuItem("ImportFromFile");

        var fileDlg = new FileDialogAdaptor(MainWindow);
        fileDlg.Cancel();
        Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));
        Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));

        Assert.AreEqual(4, Pipe.GetValue<int>("$Sketch.Segments.Count"));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ImportSketchCancelExchangerSettings()
    {
        string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UITests\SourceData\ImportSketch.svg"));
        TestDataGenerator.GenerateSketch(MainWindow);

        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);
        MainWindow.Ribbon.ClickButton("SketchExchange");
        var menu = new ContextMenuAdaptor(MainWindow);
        menu.ClickMenuItem("ImportFromFile");

        var fileDlg = new FileDialogAdaptor(MainWindow);
        fileDlg.SelectFileType("*.svg");
        fileDlg.Load(path);
        Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));

        var dlg = new WindowAdaptor(MainWindow, "ExchangerSettings");
        Assert.IsNotNull(dlg);
        dlg.Click("Cancel");
        Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));

        Assert.AreEqual(4, Pipe.GetValue<int>("$Sketch.Segments.Count"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ImportSketchFromSvg()
    {
        string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UITests\SourceData\ImportSketch.svg"));
        TestDataGenerator.GenerateSketch(MainWindow);

        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);
        MainWindow.Ribbon.ClickButton("SketchExchange");
        var menu = new ContextMenuAdaptor(MainWindow);
        menu.ClickMenuItem("ImportFromFile");

        var fileDlg = new FileDialogAdaptor(MainWindow);
        fileDlg.SelectFileType("*.svg");
        fileDlg.Load(path);
        Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));

        var dlg = new WindowAdaptor(MainWindow, "ExchangerSettings");
        Assert.IsNotNull(dlg);
        dlg.Click("Ok");
        Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));

        Assert.AreEqual(5, Pipe.GetValue<int>("$Sketch.Segments.Count"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ReplaceSketchFromSvg()
    {
        string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UITests\SourceData\ImportSketch.svg"));
        TestDataGenerator.GenerateSketch(MainWindow);

        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);
        MainWindow.Ribbon.ClickButton("SketchExchange");
        var menu = new ContextMenuAdaptor(MainWindow);
        menu.ClickMenuItem("ReplaceFromFile");

        var fileDlg = new FileDialogAdaptor(MainWindow);
        fileDlg.SelectFileType("*.svg");
        fileDlg.Load(path);
        Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));

        var dlg = new WindowAdaptor(MainWindow, "ExchangerSettings");
        Assert.IsNotNull(dlg);
        dlg.Click("Ok");
        Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));

        Assert.AreEqual(1, Pipe.GetValue<int>("$Sketch.Segments.Count"));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ImportSketchFromDxf()
    {
        string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UITests\SourceData\ImportSketch.dxf"));
        TestDataGenerator.GenerateSketch(MainWindow);

        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);
        MainWindow.Ribbon.ClickButton("SketchExchange");
        var menu = new ContextMenuAdaptor(MainWindow);
        menu.ClickMenuItem("ImportFromFile");

        var fileDlg = new FileDialogAdaptor(MainWindow);
        fileDlg.SelectFileType("*.dxf");
        fileDlg.Load(path);
        Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));

        var dlg = new WindowAdaptor(MainWindow, "ExchangerSettings");
        Assert.IsNotNull(dlg);
        dlg.Click("Ok");
        Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));

        Assert.AreEqual(5, Pipe.GetValue<int>("$Sketch.Segments.Count"));
    }
                                       
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ImportIntoNewSketchSvg()
    {
        string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UITests\SourceData\ImportSketch.svg"));

        MainWindow.Ribbon.ClickFileMenuItem("Exchange", "ImportFileToSketch");

        var fileDlg = new FileDialogAdaptor(MainWindow);
        fileDlg.SelectFileType(".svg");
        fileDlg.Load(path);
        Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));

        var dlg = new WindowAdaptor(MainWindow, "ExchangerSettings");
        Assert.IsNotNull(dlg);
        dlg.Click("Ok");
        Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));

        Assert.That(Pipe.GetValue<int>("$Context.Document.EntityCount") > 0);
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ImportIntoNewSketchDxf()
    {
        string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UITests\SourceData\ImportSketch.dxf"));

        MainWindow.Ribbon.ClickFileMenuItem("Exchange", "ImportFileToSketch");

        var fileDlg = new FileDialogAdaptor(MainWindow);
        fileDlg.SelectFileType(".dxf");
        fileDlg.Load(path);
        Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));

        var dlg = new WindowAdaptor(MainWindow, "ExchangerSettings");
        Assert.IsNotNull(dlg);
        dlg.Click("Ok");
        Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));

        Assert.That(Pipe.GetValue<int>("$Context.Document.EntityCount") > 0);
    }
}