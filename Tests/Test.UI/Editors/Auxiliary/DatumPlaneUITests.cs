using System.IO;
using FlaUI.Core.Input;
using FlaUI.Core.WindowsAPI;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Editors.Auxiliary;

[TestFixture]
public class DatumPlaneUITests : UITestBase
{
    [Test]
    public void CreateDatumPlane()
    {
        // Start tool
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateDatumPlane");

        // Check for instance
        Assert.AreEqual(1, Pipe.GetValue<int>("$Context.Document.EntityCount"));
            
        // Check property panel for correct creation
        var panel = MainWindow.PropertyView.FindPanelByClass("DatumPlanePropertyPanel");
        Assert.NotNull(panel);
        Assert.AreEqual("DatumPlane_1", panel.GetValue<string>("EntityName"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void PropertyPanelDimension()
    {
        // Start tool
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateDatumPlane");
        var panel = MainWindow.PropertyView.FindPanelByClass("DatumPlanePropertyPanel");
        Assert.NotNull(panel);

        // Edit size, keep aspect
        Assert.IsTrue(panel.IsChecked("KeepAspectRatio"));
        panel.EnterValue("DimensionX", 50.0);
        Assert.AreEqual(50.0, panel.GetValue<double>("DimensionY"));
        panel.EnterValue("DimensionY", 25.0);
        Assert.AreEqual(25.0, panel.GetValue<double>("DimensionX"));

        // Edit size, no aspect
        panel.Click("KeepAspectRatio");
        Assert.IsFalse(panel.IsChecked("KeepAspectRatio"));
        panel.EnterValue("DimensionX", 10.0);
        Assert.AreEqual(25.0, panel.GetValue<double>("DimensionY"));
        panel.EnterValue("DimensionY", 15.0);
        Assert.AreEqual(10.0, panel.GetValue<double>("DimensionX"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LoadImage()
    {
        string path = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UITests\SourceData\Image_300x150.png"));

        // Start tool
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateDatumPlane");
        var panel = MainWindow.PropertyView.FindPanelByClass("DatumPlanePropertyPanel");
        Assert.NotNull(panel);

        // Load without aspect correction
        Assert.IsTrue(panel.IsChecked("KeepAspectRatio"));
        panel.Click("LoadImageFile");

        Assert.IsTrue(FileDialogAdaptor.IsDialogOpen(MainWindow));
        var fileDialog = new FileDialogAdaptor(MainWindow);
        fileDialog.Load(path);

        Assert.IsTrue(TaskDialogAdaptor.IsTaskDialogOpen(MainWindow));
        var taskDialog = new TaskDialogAdaptor(MainWindow);
        taskDialog.ClickButton(TaskDialogAdaptor.Button.No);

        Assert.IsNotEmpty(Pipe.GetValue<string>("$Selected.ImageFilePath"));
        Assert.AreEqual(100.0, panel.GetValue<double>("DimensionX"));
        Assert.AreEqual(100.0, panel.GetValue<double>("DimensionY"));

        // Load with aspect correction
        Assert.IsTrue(panel.IsChecked("KeepAspectRatio"));
        panel.Click("LoadImageFile");

        Assert.IsTrue(FileDialogAdaptor.IsDialogOpen(MainWindow));
        fileDialog = new FileDialogAdaptor(MainWindow);
        fileDialog.Load(path);

        Assert.IsTrue(TaskDialogAdaptor.IsTaskDialogOpen(MainWindow));
        taskDialog = new TaskDialogAdaptor(MainWindow);
        taskDialog.ClickButton(TaskDialogAdaptor.Button.Yes);

        Assert.IsNotEmpty(Pipe.GetValue<string>("$Selected.ImageFilePath"));
        Assert.AreEqual(79.4, panel.GetValue<double>("DimensionX"), 0.1);
        Assert.AreEqual(39.7, panel.GetValue<double>("DimensionY"), 0.1);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateSketchOnPlane()
    {
        // Start tool
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateDatumPlane");

        // Select as WorkingPlane
        MainWindow.Viewport.ClickRelative(0.5, 0.5, MouseButton.Right, false);
        Assert.That(ContextMenuAdaptor.IsContextMenuOpen(MainWindow, "ViewportContextMenu"));
        var contextMenu = new ContextMenuAdaptor(MainWindow, "ViewportContextMenu");
        contextMenu.ClickMenuItem("Set as Working Plane");

        // Create sketch on new plane
        MainWindow.Ribbon.ClickButton("CreateSketch");
        MainWindow.Viewport.ClickRelative(0.5, 0.55);
        Assert.AreEqual("SketchEditorTool", Pipe.GetValue<string>("$Context.EditorState.ActiveTool"));

        // Exit sketch editor
        Pipe.TypeKey(VirtualKeyShort.ESCAPE);
        Assert.AreEqual("", Pipe.GetValue<string>("$Context.EditorState.ActiveTool"));

        // Let it crash
        MainWindow.Viewport.ClickRelative(0.5, 0.5, MouseButton.Right, false);
    }
}