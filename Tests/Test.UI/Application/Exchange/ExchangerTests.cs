using System.IO;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Application.Exchange;

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

        MainWindow.Ribbon.ClickFileMenuItem("Exchange", "ExportSelectedBrep");

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

        MainWindow.Ribbon.ClickFileMenuItem("Exchange", "ExportSelectedBrep");

        var fileDlg = new FileDialogAdaptor(MainWindow);
        fileDlg.SelectFileType(".brep");
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
    public void ExportSolidBrep()
    {
        var path = Path.Combine(FileDialogAdaptor.GetTempPath(), "testexport.brep");
        TestDataGenerator.GenerateBox(MainWindow);

        MainWindow.Ribbon.ClickFileMenuItem("Exchange", "ExportSelectedBrep");

        var fileDlg = new FileDialogAdaptor(MainWindow);
        fileDlg.SelectFileType(".brep");
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
    public void ExportSolidIges()
    {
        var path = Path.Combine(FileDialogAdaptor.GetTempPath(), "testexport.iges");
        TestDataGenerator.GenerateBox(MainWindow);

        MainWindow.Ribbon.ClickFileMenuItem("Exchange", "ExportSelectedBrep");

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

        MainWindow.Ribbon.ClickFileMenuItem("Exchange", "ExportSelectedBrep");

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

        MainWindow.Ribbon.ClickFileMenuItem("Exchange", "ExportSelectedBrep");

        var fileDlg = new FileDialogAdaptor(MainWindow);
        fileDlg.SelectFileType(".obj");
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
    public void ExportSolidStl()
    {
        var path = Path.Combine(FileDialogAdaptor.GetTempPath(), "testexport.stl");
        TestDataGenerator.GenerateBox(MainWindow);

        MainWindow.Ribbon.ClickFileMenuItem("Exchange", "ExportSelectedBrep");

        var fileDlg = new FileDialogAdaptor(MainWindow);
        fileDlg.SelectFileType(".stl");
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
    public void ImportSolidCancelFileDlg()
    {
        string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UITests\SourceData\ImportMesh.obj"));

        MainWindow.Ribbon.ClickFileMenuItem("Exchange", "ImportFileToModel");

        var fileDlg = new FileDialogAdaptor(MainWindow);
        fileDlg.Cancel();
        Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));
        Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));
        Assert.That(Pipe.GetValue<int>("$Context.Document.EntityCount") == 0);
    }
                                                
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ImportSolidCancelExchangerSettings()
    {
        string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UITests\SourceData\ImportMesh.obj"));

        MainWindow.Ribbon.ClickFileMenuItem("Exchange", "ImportFileToModel");

        var fileDlg = new FileDialogAdaptor(MainWindow);
        fileDlg.SelectFileType(".obj");
        fileDlg.Load(path);
        Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));

        var dlg = new WindowAdaptor(MainWindow, "ExchangerSettings");
        Assert.IsNotNull(dlg);
        dlg.Click("Cancel");
        Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));
        Assert.That(Pipe.GetValue<int>("$Context.Document.EntityCount") == 0);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ImportSolidBrep()
    {
        string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UITests\SourceData\ImprintRingFace.brep"));

        MainWindow.Ribbon.ClickFileMenuItem("Exchange", "ImportFileToModel");

        var fileDlg = new FileDialogAdaptor(MainWindow);
        fileDlg.SelectFileType(".brep");
        fileDlg.Load(path);
        Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));

        Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));
        Assert.That(Pipe.GetValue<int>("$Context.Document.EntityCount") > 0);
    }
                                
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ImportSolidIges()
    {
        string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UITests\SourceData\ImportSolid.igs"));

        MainWindow.Ribbon.ClickFileMenuItem("Exchange", "ImportFileToModel");

        var fileDlg = new FileDialogAdaptor(MainWindow);
        fileDlg.SelectFileType(".iges");
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
    public void ImportSolidStep()
    {
        string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UITests\SourceData\ImportSolid.stp"));

        MainWindow.Ribbon.ClickFileMenuItem("Exchange", "ImportFileToModel");

        var fileDlg = new FileDialogAdaptor(MainWindow);
        fileDlg.SelectFileType(".step");
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
    public void ImportSolidObj()
    {
        string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UITests\SourceData\ImportMesh.obj"));

        MainWindow.Ribbon.ClickFileMenuItem("Exchange", "ImportFileToModel");

        var fileDlg = new FileDialogAdaptor(MainWindow);
        fileDlg.SelectFileType(".obj");
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
    public void ImportSolidStl()
    {
        string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UITests\SourceData\ImportMesh.stl"));

        MainWindow.Ribbon.ClickFileMenuItem("Exchange", "ImportFileToModel");

        var fileDlg = new FileDialogAdaptor(MainWindow);
        fileDlg.SelectFileType(".stl");
        fileDlg.Load(path);
        Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));

        Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));
        Assert.That(Pipe.GetValue<int>("$Context.Document.EntityCount") > 0);
    }
                
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ExportWithDifferentExtension()
    {
        var path = Path.Combine(FileDialogAdaptor.GetTempPath(), "testexport.stl");
        TestDataGenerator.GenerateBox(MainWindow);

        MainWindow.Ribbon.ClickFileMenuItem("Exchange", "ExportSelectedBrep");

        var fileDlg = new FileDialogAdaptor(MainWindow);
        fileDlg.SelectFileType(".obj");
        fileDlg.Save(path, checkFile:false);
        Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));

        var dlg = new WindowAdaptor(MainWindow, "ExchangerSettings");
        Assert.IsNotNull(dlg);
        dlg.Click("Ok");
        Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));

        FileDialogAdaptor.CheckFileExists(path);

        // Validate this is a STL file
        using var reader = File.OpenText(path);
        Assert.That(reader.ReadLine()?.StartsWith("solid ") ?? false);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ExportWithInvalidExtension()
    {
        var typoPath = Path.Combine(FileDialogAdaptor.GetTempPath(), "testexport.invalid");
        var path = typoPath + ".stl";
        File.Delete(path);

        TestDataGenerator.GenerateBox(MainWindow);

        MainWindow.Ribbon.ClickFileMenuItem("Exchange", "ExportSelectedBrep");

        var fileDlg = new FileDialogAdaptor(MainWindow);
        fileDlg.SelectFileType(".stl");
        fileDlg.Save(typoPath, checkFile:false);
        Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));

        var dlg = new WindowAdaptor(MainWindow, "ExchangerSettings");
        Assert.IsNotNull(dlg);
        dlg.Click("Ok");
        Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));

        FileDialogAdaptor.CheckFileExists(path);

        // Validate this is a STL file
        using var reader = File.OpenText(path);
        Assert.That(reader.ReadLine()?.StartsWith("solid ") ?? false);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [TestCase(true, false, TestName = "Binary")]
    [TestCase(false, false, TestName = "EmbedData")]
    [TestCase(false, true, TestName = "ExternalData")]
    public void ExportSolidGltf(bool binary, bool embed)
    {
        var path = Path.Combine(FileDialogAdaptor.GetTempPath(), binary ? "testexport.glb" : "testexport.gltf");
        File.Delete(path);
        var path2 = Path.Combine(FileDialogAdaptor.GetTempPath(), "testexport.bin");
        File.Delete(path2);
        TestDataGenerator.GenerateBox(MainWindow);

        MainWindow.Ribbon.ClickFileMenuItem("Exchange", "ExportSelectedBrep");

        var fileDlg = new FileDialogAdaptor(MainWindow);
        fileDlg.SelectFileType(".glb");
        fileDlg.Save(path, checkFile: false);
        Assert.IsFalse(FileDialogAdaptor.IsDialogOpen(MainWindow));

        var dlg = new WindowAdaptor(MainWindow, "ExchangerSettings");
        Assert.IsNotNull(dlg);
        dlg.Click(binary ? "ExportBinaryTrue" : "ExportBinaryFalse");
        Assert.That(dlg.IsChecked("ExportBinaryTrue"), Is.EqualTo(binary));
        Assert.That(dlg.IsChecked("ExportBinaryFalse"), Is.Not.EqualTo(binary));
        Assert.That(dlg.Exists("EmbedBufferTrue"), Is.Not.EqualTo(binary));
        Assert.That(dlg.Exists("EmbedBufferFalse"), Is.Not.EqualTo(binary));
        if (!binary)
        {
            dlg.Click(embed ? "EmbedBufferTrue" : "EmbedBufferFalse");
            Assert.That(dlg.IsChecked("EmbedBufferTrue"), Is.EqualTo(embed));
            Assert.That(dlg.IsChecked("EmbedBufferFalse"), Is.Not.EqualTo(embed));
        }
        dlg.Click("Ok");
        Assert.That(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"), Is.False);

        FileDialogAdaptor.CheckFileExists(path);
        if (!binary && !embed)
        {
            FileDialogAdaptor.CheckFileExists(path2);
        }
    }

    //--------------------------------------------------------------------------------------------------
}