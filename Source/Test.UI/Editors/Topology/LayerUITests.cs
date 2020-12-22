using System.Linq;
using Macad.Test.UI.Framework;
using Macad.Common;
using NUnit.Framework;

namespace Macad.Test.UI.Editors.Topology
{
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
            MainWindow.Ribbon.SelectGroup("Edit");
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

    }
}