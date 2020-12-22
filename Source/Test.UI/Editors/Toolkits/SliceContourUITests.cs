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

        public void GenerateBox()
        {
            // Start tool
            MainWindow.Ribbon.SelectGroup("Model");
            MainWindow.Ribbon.ClickButton("CreateBox");
            Assert.That(MainWindow.Ribbon.IsButtonChecked("CreateBox"), Is.True);

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
            MainWindow.Ribbon.SelectGroup("Toolbox");
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
            MainWindow.Ribbon.SelectGroup("Toolbox");
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
            MainWindow.Ribbon.SelectGroup("Toolbox");
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
            MainWindow.Ribbon.SelectGroup("Toolbox");
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

    }
}