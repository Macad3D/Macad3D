using System.IO;
using System.Windows;
using System.Windows.Input;
using FlaUI.Core.Input;
using FlaUI.Core.WindowsAPI;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Editors.Toolkits
{
    [TestFixture]
    public class SliceContourUITests : UITestBase
    {
        [SetUp]
        public void SetUp()
        {
            Reset();
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
            MainWindow.Ribbon.ClickButton("CreateSliceContour");
            Assert.IsTrue(MainWindow.Ribbon.IsButtonChecked("CreateSliceContour"));

            Assert.AreEqual("\"SliceContourEditTool\"", Pipe.GetValue("$Context.WorkspaceController.CurrentTool.Id"));
            var propPanel = MainWindow.PropertyView.FindPanelByClass("SliceContourPropertyPanel");
            Assert.IsNotNull(propPanel);

            // Click button to stop tool
            MainWindow.Ribbon.ClickButton("CreateSliceContour");
            Assert.IsFalse(MainWindow.Ribbon.IsButtonChecked("CreateSliceContour"));

            Assert.AreEqual("?null", Pipe.GetValue("$Context.WorkspaceController.CurrentTool"));
            propPanel = MainWindow.PropertyView.FindPanelByClass("SliceContourPropertyPanel");
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
            MainWindow.Ribbon.ClickButton("CreateSliceContour");
            Assert.IsTrue(MainWindow.Ribbon.IsButtonChecked("CreateSliceContour"));

            Assert.AreEqual("\"SliceContourEditTool\"", Pipe.GetValue("$Context.WorkspaceController.CurrentTool.Id"));
            var propPanel = MainWindow.PropertyView.FindPanelByClass("SliceContourPropertyPanel");
            Assert.IsNotNull(propPanel);

            propPanel.ClickButton("ExportVectorFile");
            
            var fileDlg = new FileDialogAdaptor(MainWindow);
            Assert.That(fileDlg.Title, Is.EqualTo("Export..."));
            fileDlg.Save("ExportedSliceContour.svg");
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
            MainWindow.Ribbon.ClickButton("CreateSliceContour");
            Assert.IsTrue(MainWindow.Ribbon.IsButtonChecked("CreateSliceContour"));

            Assert.AreEqual("\"SliceContourEditTool\"", Pipe.GetValue("$Context.WorkspaceController.CurrentTool.Id"));
            var propPanel = MainWindow.PropertyView.FindPanelByClass("SliceContourPropertyPanel");
            Assert.IsNotNull(propPanel);
            Assert.AreEqual(4, MainWindow.PropertyView.GetPanelCount());

            // Complete reselection
            propPanel.ClickButton("ReselectBaseFace");
            Assert.IsTrue(propPanel.IsButtonChecked("ReselectBaseFace"));
            viewport.ClickRelative(0.5, 0.5);
            Assert.IsFalse(propPanel.IsButtonChecked("ReselectBaseFace"));
            Assert.AreEqual(4, MainWindow.PropertyView.GetPanelCount());

            // Cancel by button
            propPanel.ClickButton("ReselectBaseFace");
            Assert.IsTrue(propPanel.IsButtonChecked("ReselectBaseFace"));
            propPanel.ClickButton("ReselectBaseFace");
            Assert.IsFalse(propPanel.IsButtonChecked("ReselectBaseFace"));
            Assert.AreEqual(4, MainWindow.PropertyView.GetPanelCount());

            // Cancel by Escape, tool should still be active
            propPanel.ClickButton("ReselectBaseFace");
            Assert.IsTrue(propPanel.IsButtonChecked("ReselectBaseFace"));
            viewport.ClickRelative(0.1, 0.1);
            Pipe.TypeKey(VirtualKeyShort.ESCAPE);
            Assert.AreEqual("\"SliceContourEditTool\"", Pipe.GetValue("$Context.WorkspaceController.CurrentTool.Id"));
            Assert.IsFalse(propPanel.IsButtonChecked("ReselectBaseFace"));
            Assert.AreEqual(4, MainWindow.PropertyView.GetPanelCount());

            // Second Escape cancels tool
            Pipe.TypeKey(VirtualKeyShort.ESCAPE);
            Assert.AreEqual("?null", Pipe.GetValue("$Context.WorkspaceController.CurrentTool"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void HidePanels()
        {
            var viewport = MainWindow.Viewport;

            // Create box
            GenerateBox();

            // Click button to start tool
            MainWindow.Ribbon.SelectTab(RibbonTabs.Toolbox);
            MainWindow.Ribbon.ClickButton("CreateSliceContour");
            Assert.IsTrue(MainWindow.Ribbon.IsButtonChecked("CreateSliceContour"));

            Assert.AreEqual("\"SliceContourEditTool\"", Pipe.GetValue("$Context.WorkspaceController.CurrentTool.Id"));
            var propPanel = MainWindow.PropertyView.FindPanelByClass("SliceContourPropertyPanel");
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
        public void CustomInterval()
        {
            // Create box
            GenerateBox();

            // Click button to start tool
            MainWindow.Ribbon.SelectTab(RibbonTabs.Toolbox);
            MainWindow.Ribbon.ClickButton("CreateSliceContour");
            var propPanel = MainWindow.PropertyView.FindPanelByClass("SliceContourPropertyPanel");
            Assert.IsNotNull(propPanel);

            // Select Custom
            propPanel.ClickButton("CustomInterval");
            Assert.IsNotNull(Pipe.GetValue<double[]>("$Selected.Components.[0].CustomLayerInterval"));
            Assert.IsTrue(propPanel.ControlExists("CustomIntervalValue0"));

            // Select Auto
            propPanel.ClickButton("AutoInterval");
            Assert.IsNull(Pipe.GetValue<double[]>("$Selected.Components.[0].CustomLayerInterval"));
            Assert.IsFalse(propPanel.ControlExists("CustomIntervalValue0"));
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void CustomIntervalChangeCount()
        {
            // Create box
            GenerateBox();

            // Click button to start tool
            MainWindow.Ribbon.SelectTab(RibbonTabs.Toolbox);
            MainWindow.Ribbon.ClickButton("CreateSliceContour");
            var propPanel = MainWindow.PropertyView.FindPanelByClass("SliceContourPropertyPanel");
            Assert.IsNotNull(propPanel);

            // Select Custom
            propPanel.ClickButton("CustomInterval");
            Assert.AreEqual(1, Pipe.GetValue<double[]>("$Selected.Components.[0].CustomLayerInterval").Length);
            Assert.IsTrue(propPanel.ControlExists("CustomIntervalValue0"));
            Assert.IsFalse(propPanel.ControlExists("CustomIntervalValue1"));

            // Inc 
            propPanel.EnterValue("LayerCount", 2);
            Assert.AreEqual(2, Pipe.GetValue<double[]>("$Selected.Components.[0].CustomLayerInterval").Length);
            Assert.IsTrue(propPanel.ControlExists("CustomIntervalValue1"));

            // Dec
            propPanel.EnterValue("LayerCount", 1);
            Assert.AreEqual(1, Pipe.GetValue<double[]>("$Selected.Components.[0].CustomLayerInterval").Length);
            Assert.IsFalse(propPanel.ControlExists("CustomIntervalValue1"));
        }
                
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void CustomIntervalValueChange()
        {
            // Create box
            GenerateBox();

            // Click button to start tool
            MainWindow.Ribbon.SelectTab(RibbonTabs.Toolbox);
            MainWindow.Ribbon.ClickButton("CreateSliceContour");
            var propPanel = MainWindow.PropertyView.FindPanelByClass("SliceContourPropertyPanel");
            Assert.IsNotNull(propPanel);

            // Select Custom
            propPanel.EnterValue("LayerCount", 2);
            propPanel.ClickButton("CustomInterval");
            Assert.AreEqual(2, Pipe.GetValue<double[]>("$Selected.Components.[0].CustomLayerInterval").Length);

            // Set Values
            propPanel.EnterValue("CustomIntervalValue0", 2);
            Assert.AreEqual(2, Pipe.GetValue<double[]>("$Selected.Components.[0].CustomLayerInterval")[0]);
            Assert.AreEqual(2, propPanel.GetValue<double>("CustomIntervalOffset0"));

            propPanel.EnterValue("CustomIntervalValue1", 3);
            Assert.AreEqual(3, Pipe.GetValue<double[]>("$Selected.Components.[0].CustomLayerInterval")[1]);
            Assert.AreEqual(5, propPanel.GetValue<double>("CustomIntervalOffset1"));

            // Set Offset
            propPanel.EnterValue("CustomIntervalOffset0", 3);
            Assert.AreEqual(3, Pipe.GetValue<double[]>("$Selected.Components.[0].CustomLayerInterval")[0]);
            Assert.AreEqual(3, propPanel.GetValue<double>("CustomIntervalValue0"));

            propPanel.EnterValue("CustomIntervalOffset1", 5);
            Assert.AreEqual(2, Pipe.GetValue<double[]>("$Selected.Components.[0].CustomLayerInterval")[1]);
            Assert.AreEqual(2, propPanel.GetValue<double>("CustomIntervalValue1"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ToggleReconstruction()
        {
            // Create box
            GenerateBox();

            // Click button to start tool
            MainWindow.Ribbon.SelectTab(RibbonTabs.Toolbox);
            MainWindow.Ribbon.ClickButton("CreateSliceContour");
            var propPanel = MainWindow.PropertyView.FindPanelByClass("SliceContourPropertyPanel");
            Assert.IsNotNull(propPanel);

            Assert.IsTrue(Pipe.GetValue<bool>("$Tool.ShowReconstruction"));
            Assert.IsTrue(propPanel.GetToggle("ShowReconstruction"));

            propPanel.ClickToggle("ShowReconstruction");
            Assert.IsFalse(Pipe.GetValue<bool>("$Tool.ShowReconstruction"));
            Assert.IsFalse(propPanel.GetToggle("ShowReconstruction"));

            propPanel.ClickToggle("ShowReconstruction");
            Assert.IsTrue(Pipe.GetValue<bool>("$Tool.ShowReconstruction"));
            Assert.IsTrue(propPanel.GetToggle("ShowReconstruction"));
        }

        //--------------------------------------------------------------------------------------------------
        //--------------------------------------------------------------------------------------------------

        #region Helper

        public void GenerateBox()
        {
            // Start tool
            MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
            MainWindow.Ribbon.ClickButton("CreateBox");
            Assert.That(MainWindow.Ribbon.IsButtonChecked("CreateBox"), Is.True);

            // Three point creation
            var viewport = MainWindow.Viewport;
            viewport.ClickRelative(0.2, 0.2);
            viewport.ClickRelative(0.8, 0.8);
            viewport.ClickRelative(0.8, 0.7);
        }

        //--------------------------------------------------------------------------------------------------

        #endregion
    }
}