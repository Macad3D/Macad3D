using FlaUI.Core.WindowsAPI;
using Macad.Test.UI.Framework;
using NUnit.Framework;
using System;

namespace Macad.Test.UI.Editors.Toolkits;

[TestFixture]
public class EtchingMaskUITests : UITestBase
{
    [SetUp]
    public void SetUp()
    {
        Reset();
    }

    //--------------------------------------------------------------------------------------------------

    public void GenerateBox()
    {
        // Start tool
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateBox");
        Assert.That(MainWindow.Ribbon.IsChecked("CreateBox"), Is.True);

        // Three point creation
        var viewport = MainWindow.Viewport;
        viewport.ClickRelative(0.2, 0.2);
        viewport.ClickRelative(0.8, 0.8);
        viewport.ClickRelative(0.8, 0.7);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ToolStartAndStop()
    {
        var viewport = MainWindow.Viewport;

        // Create box
        GenerateBox();

        // Click button to start tool
        MainWindow.Ribbon.SelectTab(RibbonTabs.Toolbox);
        MainWindow.Ribbon.ClickButton("CreateEtchingMask");
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("CreateEtchingMask"));

        Assert.AreEqual("\"EtchingMaskEditTool\"", Pipe.GetValue("$Context.WorkspaceController.CurrentTool.Id"));
        var propPanel = MainWindow.PropertyView.FindPanelByClass("EtchingMaskPropertyPanel");
        Assert.IsNotNull(propPanel);

        // Click button to stop tool
        MainWindow.Ribbon.ClickButton("CreateEtchingMask");
        Assert.IsFalse(MainWindow.Ribbon.IsChecked("CreateEtchingMask"));

        Assert.AreEqual("?null", Pipe.GetValue("$Context.WorkspaceController.CurrentTool"));
        propPanel = MainWindow.PropertyView.FindPanelByClass("EtchingMaskPropertyPanel");
        Assert.IsNull(propPanel);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Export()
    {
        var viewport = MainWindow.Viewport;

        // Create box
        GenerateBox();

        // Click button to start tool
        MainWindow.Ribbon.SelectTab(RibbonTabs.Toolbox);
        MainWindow.Ribbon.ClickButton("CreateEtchingMask");
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("CreateEtchingMask"));

        Assert.AreEqual("\"EtchingMaskEditTool\"", Pipe.GetValue("$Context.WorkspaceController.CurrentTool.Id"));
        var propPanel = MainWindow.PropertyView.FindPanelByClass("EtchingMaskPropertyPanel");
        Assert.IsNotNull(propPanel);

        propPanel.Click("ExportVectorFile");
            
        var fileDlg = new FileDialogAdaptor(MainWindow);
        Assert.That(fileDlg.Title, Is.EqualTo("Export..."));
        fileDlg.Save("ExportedEtchingMask.svg");
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ReselectBaseFace()
    {
        var viewport = MainWindow.Viewport;

        // Create box
        GenerateBox();

        // Click button to start tool
        MainWindow.Ribbon.SelectTab(RibbonTabs.Toolbox);
        MainWindow.Ribbon.ClickButton("CreateEtchingMask");
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("CreateEtchingMask"));

        Assert.AreEqual("\"EtchingMaskEditTool\"", Pipe.GetValue("$Context.WorkspaceController.CurrentTool.Id"));
        var propPanel = MainWindow.PropertyView.FindPanelByClass("EtchingMaskPropertyPanel");
        Assert.IsNotNull(propPanel);
        Assert.AreEqual(4, MainWindow.PropertyView.GetPanelCount());

        // Complete reselection
        propPanel.Click("ReselectBaseFace");
        Assert.IsTrue(propPanel.IsChecked("ReselectBaseFace"));
        viewport.ClickRelative(0.5, 0.5);
        Assert.IsFalse(propPanel.IsChecked("ReselectBaseFace"));
        Assert.AreEqual(4, MainWindow.PropertyView.GetPanelCount());

        // Cancel by button
        propPanel.Click("ReselectBaseFace");
        Assert.IsTrue(propPanel.IsChecked("ReselectBaseFace"));
        propPanel.Click("ReselectBaseFace");
        Assert.IsFalse(propPanel.IsChecked("ReselectBaseFace"));
        Assert.AreEqual(4, MainWindow.PropertyView.GetPanelCount());

        // Cancel by Escape, tool should still be active
        propPanel.Click("ReselectBaseFace");
        Assert.IsTrue(propPanel.IsChecked("ReselectBaseFace"));
        viewport.ClickRelative(0.1, 0.1);
        Pipe.TypeKey(VirtualKeyShort.ESCAPE);
        Assert.AreEqual("\"EtchingMaskEditTool\"", Pipe.GetValue("$Context.WorkspaceController.CurrentTool.Id"));
        Assert.IsFalse(propPanel.IsChecked("ReselectBaseFace"));
        Assert.AreEqual(4, MainWindow.PropertyView.GetPanelCount());

        // Second Escape cancels tool
        Pipe.TypeKey(VirtualKeyShort.ESCAPE);
        Assert.AreEqual("?null", Pipe.GetValue("$Context.WorkspaceController.CurrentTool"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void HidePanels()
    {
        // Create box
        GenerateBox();

        // Click button to start tool
        MainWindow.Ribbon.SelectTab(RibbonTabs.Toolbox);
        MainWindow.Ribbon.ClickButton("CreateEtchingMask");
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("CreateEtchingMask"));

        Assert.AreEqual("\"EtchingMaskEditTool\"", Pipe.GetValue("$Context.WorkspaceController.CurrentTool.Id"));
        var propPanel = MainWindow.PropertyView.FindPanelByClass("EtchingMaskPropertyPanel");
        Assert.IsNotNull(propPanel);
        Assert.IsFalse(propPanel.IsCollapsed());

        var boxPropPanel = MainWindow.PropertyView.FindPanelByClass("BoxPropertyPanel");
        Assert.IsNull(boxPropPanel);
            
        var bodyShapePropPanel = MainWindow.PropertyView.FindPanelByClass("BodyShapePropertyPanel");
        Assert.IsNull(bodyShapePropPanel);

        var bodyPropPanel = MainWindow.PropertyView.FindPanelByClass("BodyPropertyPanel");
        Assert.IsNotNull(bodyPropPanel);
        Assert.IsFalse(bodyPropPanel.IsCollapsed());

        // Cancel tool
        Pipe.TypeKey(VirtualKeyShort.ESCAPE);
        Assert.AreEqual("?null", Pipe.GetValue("$Context.WorkspaceController.CurrentTool"));

        boxPropPanel = MainWindow.PropertyView.FindPanelByClass("BoxPropertyPanel");
        Assert.IsNotNull(boxPropPanel);
        Assert.IsFalse(boxPropPanel.IsCollapsed());

        bodyShapePropPanel = MainWindow.PropertyView.FindPanelByClass("BodyShapePropertyPanel");
        Assert.IsNotNull(bodyShapePropPanel);
        Assert.IsFalse(bodyShapePropPanel.IsCollapsed());

        Assert.IsFalse(bodyPropPanel.IsCollapsed());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ChangeReferencedShape()
    {
        // Create box
        GenerateBox();
        Guid boxGuid = Pipe.GetValue<Guid>("$Selected.Shape.Guid");

        // Click button to start tool
        MainWindow.Ribbon.SelectTab(RibbonTabs.Toolbox);
        MainWindow.Ribbon.ClickButton("CreateEtchingMask");

        var propPanel = MainWindow.PropertyView.FindPanelByClass("EtchingMaskPropertyPanel");
        Assert.IsNotNull(propPanel);
        propPanel.Click("ShapeGuidSelectButton");
        var buttonMenu = MainWindow.FindContextMenu();
        Assert.That(buttonMenu, Is.Not.Null);
        buttonMenu.ClickMenuItem("SelectCurrent");
        Assert.That(Pipe.GetValue<Guid>("$Selected.Components.[0].ShapeGuid"), Is.EqualTo(boxGuid));

        propPanel.Click("ShapeGuidSelectButton");
        buttonMenu = MainWindow.FindContextMenu();
        Assert.That(buttonMenu, Is.Not.Null);
        buttonMenu.ClickMenuItem("SelectTop");
        Assert.That(Pipe.GetValue("$Selected.Components.[0].ShapeGuid"), Is.EqualTo("?null"));
    }

    //--------------------------------------------------------------------------------------------------

}