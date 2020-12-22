using System.IO;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Application.Exchange
{
    [TestFixture]
    public class ExchangerTests : UITestBase
    {
        [SetUp]
        public void SetUp()
        {
            Reset();
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ExportSolidCancelFileDlg()
        {
            var path = Path.Combine(FileDialogAdaptor.GetTempPath(), "testexport.brep");
            System.IO.File.Delete(path);
            TestDataGenerator.GenerateBox(MainWindow);

            MainWindow.Ribbon.ClickFileMenuItem("ExportSelectedBrep");

            var fileDlg = new FileDialogAdaptor(MainWindow);
            fileDlg.Cancel();
            Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));
            Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));

            Assert.IsFalse(System.IO.File.Exists(path));
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ExportSolidCancelExchangerSettings()
        {
            var path = Path.Combine(FileDialogAdaptor.GetTempPath(), "testexport.brep");
            TestDataGenerator.GenerateBox(MainWindow);

            MainWindow.Ribbon.ClickFileMenuItem("ExportSelectedBrep");

            var fileDlg = new FileDialogAdaptor(MainWindow);
            fileDlg.SelectFileType(".brep");
            fileDlg.Save(path, checkFile:false);
            Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));

            var dlg = new WindowAdaptor(MainWindow, "ExchangerSettings");
            Assert.IsNotNull(dlg);
            dlg.ClickButton("Cancel");
            Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));

            Assert.IsFalse(System.IO.File.Exists(path));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ExportSolidBrep()
        {
            var path = Path.Combine(FileDialogAdaptor.GetTempPath(), "testexport.brep");
            TestDataGenerator.GenerateBox(MainWindow);

            MainWindow.Ribbon.ClickFileMenuItem("ExportSelectedBrep");

            var fileDlg = new FileDialogAdaptor(MainWindow);
            fileDlg.SelectFileType(".brep");
            fileDlg.Save(path, checkFile:false);
            Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));

            var dlg = new WindowAdaptor(MainWindow, "ExchangerSettings");
            Assert.IsNotNull(dlg);
            dlg.ClickButton("Ok");
            Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));

            FileDialogAdaptor.CheckFileExists(path);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ExportSolidIges()
        {
            var path = Path.Combine(FileDialogAdaptor.GetTempPath(), "testexport.iges");
            TestDataGenerator.GenerateBox(MainWindow);

            MainWindow.Ribbon.ClickFileMenuItem("ExportSelectedBrep");

            var fileDlg = new FileDialogAdaptor(MainWindow);
            fileDlg.SelectFileType(".iges");
            fileDlg.Save(path, checkFile:false);
            Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));

            Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));

            FileDialogAdaptor.CheckFileExists(path);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ExportSolidStep()
        {
            var path = Path.Combine(FileDialogAdaptor.GetTempPath(), "testexport.step");
            TestDataGenerator.GenerateBox(MainWindow);

            MainWindow.Ribbon.ClickFileMenuItem("ExportSelectedBrep");

            var fileDlg = new FileDialogAdaptor(MainWindow);
            fileDlg.SelectFileType(".step");
            fileDlg.Save(path, checkFile:false);
            Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));

            Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));

            FileDialogAdaptor.CheckFileExists(path);
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ExportSolidObj()
        {
            var path = Path.Combine(FileDialogAdaptor.GetTempPath(), "testexport.obj");
            TestDataGenerator.GenerateBox(MainWindow);

            MainWindow.Ribbon.ClickFileMenuItem("ExportSelectedBrep");

            var fileDlg = new FileDialogAdaptor(MainWindow);
            fileDlg.SelectFileType(".obj");
            fileDlg.Save(path, checkFile:false);
            Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));

            var dlg = new WindowAdaptor(MainWindow, "ExchangerSettings");
            Assert.IsNotNull(dlg);
            dlg.ClickButton("Ok");
            Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));

            FileDialogAdaptor.CheckFileExists(path);
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ExportSolidStl()
        {
            var path = Path.Combine(FileDialogAdaptor.GetTempPath(), "testexport.stl");
            TestDataGenerator.GenerateBox(MainWindow);

            MainWindow.Ribbon.ClickFileMenuItem("ExportSelectedBrep");

            var fileDlg = new FileDialogAdaptor(MainWindow);
            fileDlg.SelectFileType(".stl");
            fileDlg.Save(path, checkFile:false);
            Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));

            var dlg = new WindowAdaptor(MainWindow, "ExchangerSettings");
            Assert.IsNotNull(dlg);
            dlg.ClickButton("Ok");
            Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));

            FileDialogAdaptor.CheckFileExists(path);
        }
                                                                
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ImportSolidCancelFileDlg()
        {
            string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UITests\SourceData\ImportMesh.obj"));

            MainWindow.Ribbon.ClickFileMenuItem("ImportFileToModel");

            var fileDlg = new FileDialogAdaptor(MainWindow);
            fileDlg.Cancel();
            Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));
            Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));
            Assert.That(Pipe.GetValue<int>("$Context.Document.ChildCount") == 0);
        }
                                                
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ImportSolidCancelExchangerSettings()
        {
            string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UITests\SourceData\ImportMesh.obj"));

            MainWindow.Ribbon.ClickFileMenuItem("ImportFileToModel");

            var fileDlg = new FileDialogAdaptor(MainWindow);
            fileDlg.SelectFileType(".obj");
            fileDlg.Load(path);
            Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));

            var dlg = new WindowAdaptor(MainWindow, "ExchangerSettings");
            Assert.IsNotNull(dlg);
            dlg.ClickButton("Cancel");
            Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));
            Assert.That(Pipe.GetValue<int>("$Context.Document.ChildCount") == 0);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ImportSolidBrep()
        {
            string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UITests\SourceData\ImprintRingFace.brep"));

            MainWindow.Ribbon.ClickFileMenuItem("ImportFileToModel");

            var fileDlg = new FileDialogAdaptor(MainWindow);
            fileDlg.SelectFileType(".brep");
            fileDlg.Load(path);
            Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));

            Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));
            Assert.That(Pipe.GetValue<int>("$Context.Document.ChildCount") > 0);
        }
                                
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ImportSolidIges()
        {
            string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UITests\SourceData\ImportSolid.igs"));

            MainWindow.Ribbon.ClickFileMenuItem("ImportFileToModel");

            var fileDlg = new FileDialogAdaptor(MainWindow);
            fileDlg.SelectFileType(".iges");
            fileDlg.Load(path);
            Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));

            var dlg = new WindowAdaptor(MainWindow, "ExchangerSettings");
            Assert.IsNotNull(dlg);
            dlg.ClickButton("Ok");
            Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));
            Assert.That(Pipe.GetValue<int>("$Context.Document.ChildCount") > 0);
        }
                                
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ImportSolidStep()
        {
            string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UITests\SourceData\ImportSolid.stp"));

            MainWindow.Ribbon.ClickFileMenuItem("ImportFileToModel");

            var fileDlg = new FileDialogAdaptor(MainWindow);
            fileDlg.SelectFileType(".step");
            fileDlg.Load(path);
            Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));

            var dlg = new WindowAdaptor(MainWindow, "ExchangerSettings");
            Assert.IsNotNull(dlg);
            dlg.ClickButton("Ok");
            Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));
            Assert.That(Pipe.GetValue<int>("$Context.Document.ChildCount") > 0);
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ImportSolidObj()
        {
            string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UITests\SourceData\ImportMesh.obj"));

            MainWindow.Ribbon.ClickFileMenuItem("ImportFileToModel");

            var fileDlg = new FileDialogAdaptor(MainWindow);
            fileDlg.SelectFileType(".obj");
            fileDlg.Load(path);
            Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));

            var dlg = new WindowAdaptor(MainWindow, "ExchangerSettings");
            Assert.IsNotNull(dlg);
            dlg.ClickButton("Ok");
            Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));
            Assert.That(Pipe.GetValue<int>("$Context.Document.ChildCount") > 0);
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ImportSolidStl()
        {
            string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UITests\SourceData\ImportMesh.stl"));

            MainWindow.Ribbon.ClickFileMenuItem("ImportFileToModel");

            var fileDlg = new FileDialogAdaptor(MainWindow);
            fileDlg.SelectFileType(".stl");
            fileDlg.Load(path);
            Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));

            Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));
            Assert.That(Pipe.GetValue<int>("$Context.Document.ChildCount") > 0);
        }
    }
}