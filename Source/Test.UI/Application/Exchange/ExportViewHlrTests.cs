using System.IO;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Application.Exchange
{
    [TestFixture]
    public class ExportViewpHlrTests : UITestBase
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
            MainWindow.Ribbon.SelectGroup("Toolbox");
            MainWindow.Ribbon.ClickButton("ExportViewHlr");
            var dlg = new WindowAdaptor(MainWindow, "ExportViewportHlr");
            dlg.ClickButton("Ok");

            var fileDlg = new FileDialogAdaptor(MainWindow);
            fileDlg.SelectFileType("*.svg");
            fileDlg.Save(path, checkFile:false);
            Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));
            Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExportViewportHlr"));

            dlg = new WindowAdaptor(MainWindow, "ExchangerSettings");
            dlg.ClickButton("Ok");
            Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));

            FileDialogAdaptor.CheckFileExists(path);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ExportHlrCancelSettings()
        {
            var path = Path.Combine(FileDialogAdaptor.GetTempPath(), "hlr.svg");

            // Cancel export settings
            MainWindow.Ribbon.SelectGroup("Toolbox");
            MainWindow.Ribbon.ClickButton("ExportViewHlr");
            var dlg = new WindowAdaptor(MainWindow, "ExportViewportHlr");
            dlg.ClickButton("Ok");

            var fileDlg = new FileDialogAdaptor(MainWindow);
            fileDlg.SelectFileType("*.svg");
            fileDlg.Save(path, checkFile:false);
            Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));
            Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExportViewportHlr"));

            dlg = new WindowAdaptor(MainWindow, "ExchangerSettings");
            dlg.ClickButton("Cancel");
            Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));

            Assert.IsFalse(System.IO.File.Exists(path));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ExportHlrCancelFileDlg()
        {
            // Cancel FileDlg
            MainWindow.Ribbon.SelectGroup("Toolbox");
            MainWindow.Ribbon.ClickButton("ExportViewHlr");
            var dlg = new WindowAdaptor(MainWindow, "ExportViewportHlr");
            dlg.ClickButton("Ok");

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
            MainWindow.Ribbon.SelectGroup("Toolbox");
            MainWindow.Ribbon.ClickButton("ExportViewHlr");
            var dlg = new WindowAdaptor(MainWindow, "ExportViewportHlr");
            dlg.ClickButton("Cancel");
            Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExportViewportHlr"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ExportHlrAsDxf()
        {
            var path = Path.Combine(FileDialogAdaptor.GetTempPath(), "hlr.dxf");

            // Do Export
            MainWindow.Ribbon.SelectGroup("Toolbox");
            MainWindow.Ribbon.ClickButton("ExportViewHlr");
            var dlg = new WindowAdaptor(MainWindow, "ExportViewportHlr");
            dlg.ClickButton("Ok");

            var fileDlg = new FileDialogAdaptor(MainWindow);
            fileDlg.SelectFileType("*.dxf");
            fileDlg.Save(path, checkFile:false);
            Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));
            Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExportViewportHlr"));

            dlg = new WindowAdaptor(MainWindow, "ExchangerSettings");
            dlg.ClickButton("Ok");
            Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));

            FileDialogAdaptor.CheckFileExists(path);
        }

        //--------------------------------------------------------------------------------------------------

    }
}