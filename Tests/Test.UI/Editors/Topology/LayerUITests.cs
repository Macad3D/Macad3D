using System.Linq;
using FlaUI.Core.WindowsAPI;
using Macad.Test.UI.Framework;
using Macad.Common;
using NUnit.Framework;

namespace Macad.Test.UI.Editors.Topology;

[TestFixture]
public class LayerUITests : UITestBase
{
    [SetUp]
    public void SetUp()
    {
        Reset();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SelectColorFromRibbon()
    {
        MainWindow.Ribbon.SelectTab(RibbonTabs.Edit);
        MainWindow.Ribbon.ClickButton("ActiveLayerVisual");
        Assert.IsTrue(ContextMenuAdaptor.IsContextMenuOpen(MainWindow, "LayerVisualPanel"));
        var visualPanel = new ContextMenuAdaptor(MainWindow, "LayerVisualPanel");
        visualPanel.ExpandComboBox("ColorPicker");
        Assert.IsTrue(ContextMenuAdaptor.IsContextMenuOpen(MainWindow, "ColorPickerPopup"));
        var colorPicker = new ContextMenuAdaptor(MainWindow, "ColorPickerPopup");
        var colors = colorPicker.GetListBoxItems("ColorList").ToList();
        Assert.Less(10, colors.Count());
        colorPicker.SelectListBoxItem("ColorList", 10);
        var color = new Color( colors[10].Split(',')[2] );
        var layerValue = Pipe.GetValue("$Context.Layers.ActiveLayer.Color");
        Assert.AreEqual(color.ToString(), layerValue);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MoveLayer()
    {
        var layerPanel = MainWindow.Layers;

        // Add two layer
        layerPanel.AddLayer();
        var layer1 = Pipe.GetValue("$Context.Layers.[1]");
        layerPanel.AddLayer();
        var layer2 = Pipe.GetValue("$Context.Layers.[2]");

        // Move layer to swap positions
        layerPanel.GetLayerItem(2).Drag(-30);

        // Positions should be swapped
        Assert.AreEqual(layer1, Pipe.GetValue("$Context.Layers.[2]"));
        Assert.AreEqual(layer2, Pipe.GetValue("$Context.Layers.[1]"));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CannotMoveAfrontDefaultLayer()
    {
        var layerPanel = MainWindow.Layers;

        // Add two layer
        layerPanel.AddLayer();
        var layer1 = Pipe.GetValue("$Context.Layers.[1]");
        layerPanel.AddLayer();
        var layer2 = Pipe.GetValue("$Context.Layers.[2]");

        // Move layer to swap positions
        layerPanel.GetLayerItem(2).Drag(-52);

        // Positions should be kept
        Assert.AreEqual(layer1, Pipe.GetValue("$Context.Layers.[1]"));
        Assert.AreEqual(layer2, Pipe.GetValue("$Context.Layers.[2]"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void DefaultLayerCannotMove()
    {
        var layerPanel = MainWindow.Layers;

        // Add two layer
        layerPanel.AddLayer();
        var layer1 = Pipe.GetValue("$Context.Layers.[1]");
        layerPanel.AddLayer();
        var layer2 = Pipe.GetValue("$Context.Layers.[2]");

        // Move layer to swap positions
        layerPanel.GetLayerItem(0).Drag(34);

        // Positions should be swapped
        Assert.AreEqual(layer1, Pipe.GetValue("$Context.Layers.[1]"));
        Assert.AreEqual(layer2, Pipe.GetValue("$Context.Layers.[2]"));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RenameLayer()
    {
        var layerPanel = MainWindow.Layers;

        layerPanel.AddLayer();
        var layerItem = layerPanel.GetLayerItem(1);
        Assert.That(layerItem.Text == "Unnamed");

        // Start editing
        layerPanel.SelectItem(1);
        layerPanel.Click("RenameLayer");
        layerItem.SetValue("LayerRenameBox", "MyLayer");
        Pipe.PressKey(VirtualKeyShort.ENTER);
        Assert.AreEqual("MyLayer", layerPanel.GetLayerItem(1).Text);
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SelectableAfterRenameLayer()
    {
        var layerPanel = MainWindow.Layers;

        layerPanel.AddLayer();
        layerPanel.AddLayer();
        layerPanel.AddLayer();
        var layerItem = layerPanel.GetLayerItem(1);
        Assert.That(layerItem.Text == "Unnamed");

        // Start editing
        layerPanel.SelectItem(1);
        layerPanel.Click("RenameLayer");
        layerItem.SetValue("LayerRenameBox", "ExtraLongLayerName");

        // Stop editing
        layerPanel.SelectItem(2);
        Assert.IsFalse(layerPanel.GetLayerItem(1).IsSelected);

        // Can reselect item?
        layerPanel.SelectItem(1);
        Assert.IsTrue(layerPanel.GetLayerItem(1).IsSelected);
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ActivateOnDoubleClick()
    {
        var layerPanel = MainWindow.Layers;

        layerPanel.AddLayer();
        var layerItem = layerPanel.GetLayerItem(1);
        layerItem.Click(doubleClick: true);
        var layerGuid = Pipe.GetValue("$Context.Layers.[1].Guid");
        Assert.AreEqual(layerGuid, Pipe.GetValue("$Context.Layers.ActiveLayer.Guid"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void DontActivateOnButtonDoubleClick()
    {
        var layerPanel = MainWindow.Layers;

        layerPanel.AddLayer();
        var layerItem = layerPanel.GetLayerItem(1);
        layerItem.Click();
        layerItem.Click("ToggleIsVisible", doubleClick: true);
        var layerGuid = Pipe.GetValue("$Context.Layers.[1].Guid");
        Assert.AreNotEqual(layerGuid, Pipe.GetValue("$Context.Layers.ActiveLayer.Guid"));
    }
}