using System.IO;
using NUnit.Framework;

namespace Macad.Test.UI.Framework;

public static class TestDataGenerator
{
    public static void GenerateBox(MainWindowAdaptor mainWindow)
    {
        // Start tool
        mainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        mainWindow.Ribbon.ClickButton("CreateBox");
        Assert.IsTrue(mainWindow.Ribbon.IsChecked("CreateBox"));

        // Three point creation
        var viewport = mainWindow.Viewport;
        viewport.ClickRelative(0.3, 0.3);
        viewport.ClickRelative(0.6, 0.6);
        viewport.ClickRelative(0.6, 0.3);
    }

    //--------------------------------------------------------------------------------------------------
        
    public static void GenerateCylinder(MainWindowAdaptor mainWindow)
    {
        // Start tool
        mainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        mainWindow.Ribbon.ClickButton("CreateCylinder");
        Assert.IsTrue(mainWindow.Ribbon.IsChecked("CreateCylinder"));

        // Three point creation
        var viewport = mainWindow.Viewport;
        viewport.ClickRelative(0.5, 0.5);
        viewport.ClickRelative(0.6, 0.6);
        viewport.ClickRelative(0.6, 0.3);
    }

    //--------------------------------------------------------------------------------------------------

    public static void GenerateBodyReference(MainWindowAdaptor mainWindow)
    {
        var viewport = mainWindow.Viewport;

        // Create Box
        mainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        mainWindow.Ribbon.ClickButton("CreateBox");
        Assert.IsTrue(mainWindow.Ribbon.IsChecked("CreateBox"));
        viewport.ClickRelative(0.3, 0.3);
        viewport.ClickRelative(0.6, 0.6);
        viewport.ClickRelative(0.6, 0.3);

        // Create Second Box
        mainWindow.Ribbon.ClickButton("CreateBox");
        Assert.IsTrue(mainWindow.Ribbon.IsChecked("CreateBox"));
        viewport.ClickRelative(0.4, 0.6);
        viewport.ClickRelative(0.5, 0.5);
        viewport.ClickRelative(0.5, 0.4);

        // Bool Op
        mainWindow.Ribbon.ClickButton("CreateBooleanCut");
        Assert.IsTrue(mainWindow.Ribbon.IsChecked("CreateBooleanCut"));
        viewport.ClickRelative(0.33, 0.33);
    }

    //--------------------------------------------------------------------------------------------------

    public static void GenerateSketch(MainWindowAdaptor mainWindow)
    {
        var viewport = mainWindow.Viewport;

        // Create Sketch
        mainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        mainWindow.Ribbon.ClickButton("CreateSketch");
        viewport.ClickRelative(0.5, 0.55);

        // Draw
        mainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);
        mainWindow.Ribbon.ClickButton("CreatePolyLineSegment");
        Assert.IsTrue(mainWindow.Ribbon.IsChecked("CreatePolyLineSegment"));
        viewport.ClickRelative(0.3, 0.3);
        viewport.ClickRelative(0.3, 0.6);
        viewport.ClickRelative(0.6, 0.6);
        viewport.ClickRelative(0.6, 0.3);
        viewport.ClickRelative(0.3, 0.3);
        Assert.IsFalse(mainWindow.Ribbon.IsChecked("CreatePolyLineSegment"));
    }

    //--------------------------------------------------------------------------------------------------

    public static void GenerateDatumPlane(MainWindowAdaptor mainWindow)
    {
        mainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        mainWindow.Ribbon.ClickButton("CreateDatumPlane");
    }

    //--------------------------------------------------------------------------------------------------

    public static void GenerateMesh(MainWindowAdaptor mainWindow)
    {
        string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UITests\SourceData\ImportMesh.stl"));
        mainWindow.Ribbon.ClickFileMenuItem("Exchange", "ImportFileToModel");

        var fileDlg = new FileDialogAdaptor(mainWindow);
        fileDlg.SelectFileType(".stl");
        fileDlg.Load(path);
    }

    //--------------------------------------------------------------------------------------------------

}