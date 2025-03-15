using System.IO;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Application.Exchange;

[TestFixture]
public class ExportViewHlrTests : UITestBase
{
    [SetUp]
    public void SetUp()
    {
        Reset();
        TestDataGenerator.GenerateBox(MainWindow);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ExportHlrAsSvg()
    {
        var path = Path.Combine(FileDialogAdaptor.GetTempPath(), "hlr.svg");

        // Do Export
        MainWindow.Ribbon.SelectTab(RibbonTabs.Toolbox);
        MainWindow.Ribbon.ClickButton("ExportViewHlr");
        var dlg = new WindowAdaptor(MainWindow, "ExportViewportHlr");

        _SaveSvgFromExportDialog(dlg, path);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ExportHlrCancelSettings()
    {
        var path = Path.Combine(FileDialogAdaptor.GetTempPath(), "hlr.svg");

        // Cancel export settings
        MainWindow.Ribbon.SelectTab(RibbonTabs.Toolbox);
        MainWindow.Ribbon.ClickButton("ExportViewHlr");
        var dlg = new WindowAdaptor(MainWindow, "ExportViewportHlr");
        dlg.Click("Ok");

        var fileDlg = new FileDialogAdaptor(MainWindow);
        fileDlg.SelectFileType("*.svg");
        fileDlg.Save(path, checkFile:false);
        Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));
        Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExportViewportHlr"));

        dlg = new WindowAdaptor(MainWindow, "ExchangerSettings");
        dlg.Click("Cancel");
        Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));

        Assert.IsFalse(File.Exists(path));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ExportHlrCancelFileDlg()
    {
        // Cancel FileDlg
        MainWindow.Ribbon.SelectTab(RibbonTabs.Toolbox);
        MainWindow.Ribbon.ClickButton("ExportViewHlr");
        var dlg = new WindowAdaptor(MainWindow, "ExportViewportHlr");
        dlg.Click("Ok");

        var fileDlg = new FileDialogAdaptor(MainWindow);
        fileDlg.ClickButton(FileDialogAdaptor.Button.Cancel);
        Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));
        Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExportViewportHlr"));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ExportHlrCancel()
    {
        // Cancel dialog
        MainWindow.Ribbon.SelectTab(RibbonTabs.Toolbox);
        MainWindow.Ribbon.ClickButton("ExportViewHlr");
        var dlg = new WindowAdaptor(MainWindow, "ExportViewportHlr");
        dlg.Click("Cancel");
        Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExportViewportHlr"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ExportHlrAsDxf()
    {
        var path = Path.Combine(FileDialogAdaptor.GetTempPath(), "hlr.dxf");

        // Do Export
        MainWindow.Ribbon.SelectTab(RibbonTabs.Toolbox);
        MainWindow.Ribbon.ClickButton("ExportViewHlr");
        var dlg = new WindowAdaptor(MainWindow, "ExportViewportHlr");
        dlg.Click("Ok");

        var fileDlg = new FileDialogAdaptor(MainWindow);
        fileDlg.SelectFileType("*.dxf");
        fileDlg.Save(path, checkFile:false);
        Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));
        Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExportViewportHlr"));

        dlg = new WindowAdaptor(MainWindow, "ExchangerSettings");
        dlg.Click("Ok");
        Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));

        FileDialogAdaptor.CheckFileExists(path);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ExportSelectionOption()
    {
        TestDataGenerator.GenerateCylinder(MainWindow);
        var path1 = Path.Combine(FileDialogAdaptor.GetTempPath(), "hlr1.svg");
        var path2 = Path.Combine(FileDialogAdaptor.GetTempPath(), "hlr2.svg");
        var path3 = Path.Combine(FileDialogAdaptor.GetTempPath(), "hlr3.svg");

        // Box selected
        MainWindow.Ribbon.SelectTab(RibbonTabs.Toolbox);
        MainWindow.Ribbon.ClickButton("ExportViewHlr");
        var dlg = new WindowAdaptor(MainWindow, "ExportViewportHlr");
        Assert.IsTrue(dlg.Exists("IncludeSelectedElementsOnly"));
        Assert.IsTrue(dlg.IsChecked("IncludeSelectedElementsOnly"));
        _SaveSvgFromExportDialog(dlg, path1);

        // Box selected, option disabled
        MainWindow.Ribbon.SelectTab(RibbonTabs.Toolbox);
        MainWindow.Ribbon.ClickButton("ExportViewHlr");
        dlg = new WindowAdaptor(MainWindow, "ExportViewportHlr");
        Assert.IsTrue(dlg.Exists("IncludeSelectedElementsOnly"));
        dlg.Click("IncludeSelectedElementsOnly");
        Assert.IsFalse(dlg.IsChecked("IncludeSelectedElementsOnly"));
        _SaveSvgFromExportDialog(dlg, path2);
        Assert.Less(new FileInfo(path1).Length, new FileInfo(path2).Length);

        // Box unselected
        MainWindow.Viewport.ClickRelative(0.1, 0.1);
        MainWindow.Ribbon.ClickButton("ExportViewHlr");
        dlg = new WindowAdaptor(MainWindow, "ExportViewportHlr");
        Assert.IsFalse(dlg.Exists("IncludeSelectedElementsOnly"));
        _SaveSvgFromExportDialog(dlg, path3);
        Assert.AreEqual(new FileInfo(path2).Length, new FileInfo(path3).Length);
    }

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    void _SaveSvgFromExportDialog(WindowAdaptor dlg, string path1)
    {
        dlg.Click("Ok");
        var fileDlg = new FileDialogAdaptor(MainWindow);
        fileDlg.SelectFileType("*.svg");
        fileDlg.Save(path1, checkFile: false);
        dlg = new WindowAdaptor(MainWindow, "ExchangerSettings");
        dlg.Click("Ok");
        FileDialogAdaptor.CheckFileExists(path1);
    }

    //--------------------------------------------------------------------------------------------------

}