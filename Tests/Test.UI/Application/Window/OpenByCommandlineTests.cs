using System.IO;
using FlaUI.Core.Input;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Application.Window;

[TestFixture]
public class OpenByCommandlineTests
{
    const string _BasePath = @"..\..\Data\UITests\SourceData";
        
    //--------------------------------------------------------------------------------------------------

    public ApplicationAdaptor App { get; private set; }
    public MainWindowAdaptor MainWindow { get; private set; }

    //--------------------------------------------------------------------------------------------------

    [TearDown]
    public void Stop()
    {
        App?.Cleanup();
        App = null;
        MainWindow = null;
    }
        
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void OpenModelByCommandLine()
    {            
        string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, _BasePath, "Cylinder.model"));
            
        App = new ApplicationAdaptor();
        App.Init($"\"{path}\"");
        MainWindow = new MainWindowAdaptor(App);
        Wait.UntilResponsive(MainWindow.Window);

        var pipe = new DebugPipeClient();
        Assert.That(pipe.GetValue<int>("$Context.Document.EntityCount") > 0);
    }
                
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void OpenSolidBrepByCommandLine()
    {            
        string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, _BasePath, "ImprintRingFace.brep"));
            
        App = new ApplicationAdaptor();
        App.Init($"\"{path}\"");
        MainWindow = new MainWindowAdaptor(App);
        Wait.UntilResponsive(MainWindow.Window);

        var pipe = new DebugPipeClient();
        Assert.That(pipe.GetValue<int>("$Context.Document.EntityCount") > 0);
    }
                        
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void OpenSolidIgesByCommandLine()
    {            
        string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, _BasePath, "ImportSolid.igs"));
            
        App = new ApplicationAdaptor();
        App.Init($"\"{path}\"");
        MainWindow = new MainWindowAdaptor(App);
        Wait.UntilResponsive(MainWindow.Window);

        var dlg = new WindowAdaptor(MainWindow, "ExchangerSettings");
        Assert.IsNotNull(dlg);
        dlg.Click("Ok");
        Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));

        var pipe = new DebugPipeClient();
        Assert.That(pipe.GetValue<int>("$Context.Document.EntityCount") > 0);
    }
                                
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void OpenSolidStepByCommandLine()
    {            
        string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, _BasePath, "ImportSolid.stp"));
            
        App = new ApplicationAdaptor();
        App.Init($"\"{path}\"");
        MainWindow = new MainWindowAdaptor(App);
        Wait.UntilResponsive(MainWindow.Window);

        var dlg = new WindowAdaptor(MainWindow, "ExchangerSettings");
        Assert.IsNotNull(dlg);
        dlg.Click("Ok");
        Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));

        var pipe = new DebugPipeClient();
        Assert.That(pipe.GetValue<int>("$Context.Document.EntityCount") > 0);
    }
                                        
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void OpenMeshObjByCommandLine()
    {            
        string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, _BasePath, "ImportMesh.obj"));
            
        App = new ApplicationAdaptor();
        App.Init($"\"{path}\"");
        MainWindow = new MainWindowAdaptor(App);
        Wait.UntilResponsive(MainWindow.Window);

        var dlg = new WindowAdaptor(MainWindow, "ExchangerSettings");
        Assert.IsNotNull(dlg);
        dlg.Click("Ok");
        Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ExchangerSettings"));

        var pipe = new DebugPipeClient();
        Assert.That(pipe.GetValue<int>("$Context.Document.EntityCount") > 0);
    }
                                                
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void OpenMeshStlByCommandLine()
    {            
        string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, _BasePath, "ImportMesh.stl"));
            
        App = new ApplicationAdaptor();
        App.Init($"\"{path}\"");
        MainWindow = new MainWindowAdaptor(App);
        Wait.UntilResponsive(MainWindow.Window);

        var pipe = new DebugPipeClient();
        Assert.That(pipe.GetValue<int>("$Context.Document.EntityCount") > 0);
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RunScriptByCommandLine()
    {
        string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, _BasePath, "CreateBoxBody.csx"));
            
        App = new ApplicationAdaptor();
        App.Init($"-runscript=\"{path}\"");
        MainWindow = new MainWindowAdaptor(App);
        Wait.UntilResponsive(MainWindow.Window);

        var pipe = new DebugPipeClient();
        Assert.AreEqual(1, pipe.GetValue<int>("$Context.Document.EntityCount"));
           
    }
                
    //--------------------------------------------------------------------------------------------------
                
    [Test]
    public void RunScriptWithErrorsByCommandLine()
    {
        string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, _BasePath, "CompilerError.csx"));
            
        App = new ApplicationAdaptor();
        App.Init($"-runscript=\"{path}\"");
        MainWindow = new MainWindowAdaptor(App);
        Wait.UntilResponsive(MainWindow.Window);

        var dlg = new TaskDialogAdaptor(MainWindow);
        Assert.IsNotNull(dlg);
    }
                
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void OpenModelAndRunScriptByCommandLine()
    {
        string modelpath = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, _BasePath, "Cylinder.model"));
        string scriptpath = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, _BasePath, "CreateBoxBody.csx"));
            
        App = new ApplicationAdaptor();
        App.Init($"-runscript=\"{scriptpath}\" {modelpath}");
        MainWindow = new MainWindowAdaptor(App);
        Wait.UntilResponsive(MainWindow.Window);

        var pipe = new DebugPipeClient();
        Assert.AreEqual(2, pipe.GetValue<int>("$Context.Document.EntityCount"));
           
    }
}