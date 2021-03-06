using System.Windows.Input;
using FlaUI.Core.WindowsAPI;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Editors.Primitives
{
    [TestFixture]
    public class SketchUITests : UITestBase
    {
        [SetUp]
        public void SetUp()
        {
            Reset();
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void CreateSketch()
        {
            MainWindow.Ribbon.SelectGroup("Model");
            MainWindow.Ribbon.ClickButton("CreateSketch");

            // Button not lit
            MainWindow.Ribbon.SelectGroup("Model");
            Assert.IsFalse(MainWindow.Ribbon.IsButtonChecked("CreateSketch"));

            // Body and shape created
            var bodyPanel = MainWindow.PropertyView.FindPanelByClass("BodyPropertyPanel");
            Assert.NotNull(bodyPanel);
            Assert.AreEqual("Sketch_1", bodyPanel.GetValue<string>("BodyName"));

            // All panels shown
            var sketchPanel = MainWindow.PropertyView.FindPanelByClass("SketchPropertyPanel");
            Assert.That(sketchPanel, Is.Not.Null);
            sketchPanel = MainWindow.PropertyView.FindPanelByClass("SketchPointsPropertyPanel");
            Assert.That(sketchPanel, Is.Not.Null);
            sketchPanel = MainWindow.PropertyView.FindPanelByClass("SketchSegmentsPropertyPanel");
            Assert.That(sketchPanel, Is.Not.Null);
            sketchPanel = MainWindow.PropertyView.FindPanelByClass("SketchConstraintsPropertyPanel");
            Assert.That(sketchPanel, Is.Not.Null);

            // SketchEditTool running
            Assert.AreEqual("SketchEditorTool", Pipe.GetValue<string>("$Context.EditorState.ActiveTool"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void CreateSketchOnFace()
        {
            TestDataGenerator.GenerateBox(MainWindow);

            MainWindow.Ribbon.SelectGroup("Model");
            MainWindow.Ribbon.OpenSplitButtonMenu("CreateSketch");
            var contextMenu = new ContextMenuAdaptor(MainWindow);
            contextMenu.ClickMenuItem("CreateSketchInteractive");

            // Button lit
            Assert.IsTrue(MainWindow.Ribbon.IsButtonChecked("CreateSketch"));

            // CreateSketchTool running
            Assert.AreEqual("CreateSketchTool", Pipe.GetValue<string>("$Context.EditorState.ActiveTool"));

            // Select
            MainWindow.Viewport.ClickRelative(0.5, 0.5);

            // Button unlit
            MainWindow.Ribbon.SelectGroup("Model");
            Assert.IsFalse(MainWindow.Ribbon.IsButtonChecked("CreateSketch"));

            // Body and shape created
            var bodyPanel = MainWindow.PropertyView.FindPanelByClass("BodyPropertyPanel");
            Assert.NotNull(bodyPanel);
            Assert.AreEqual("Sketch_1", bodyPanel.GetValue<string>("BodyName"));

            // All panels shown
            var sketchPanel = MainWindow.PropertyView.FindPanelByClass("SketchPropertyPanel");
            Assert.That(sketchPanel, Is.Not.Null);
            sketchPanel = MainWindow.PropertyView.FindPanelByClass("SketchPointsPropertyPanel");
            Assert.That(sketchPanel, Is.Not.Null);
            sketchPanel = MainWindow.PropertyView.FindPanelByClass("SketchSegmentsPropertyPanel");
            Assert.That(sketchPanel, Is.Not.Null);
            sketchPanel = MainWindow.PropertyView.FindPanelByClass("SketchConstraintsPropertyPanel");
            Assert.That(sketchPanel, Is.Not.Null);

            // SketchEditTool running
            Assert.AreEqual("SketchEditorTool", Pipe.GetValue<string>("$Context.EditorState.ActiveTool"));
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void CreateLineSegment()
        {
            MainWindow.Ribbon.SelectGroup("Model");
            MainWindow.Ribbon.ClickButton("CreateSketch");

            MainWindow.Ribbon.SelectGroup("Sketch");
            MainWindow.Ribbon.ClickButton("CreateLineSegment");
            Assert.IsTrue(MainWindow.Ribbon.IsButtonChecked("CreateLineSegment"));

            MainWindow.Viewport.ClickRelative(0.4, 0.5);
            MainWindow.Viewport.ClickRelative(0.6, 0.5);
            Assert.IsFalse(MainWindow.Ribbon.IsButtonChecked("CreateLineSegment"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void CreateHorizontalVerticalDistanceConstraints()
        {
            MainWindow.Ribbon.SelectGroup("Model");
            MainWindow.Ribbon.ClickButton("CreateSketch");

            MainWindow.Ribbon.SelectGroup("Sketch");
            MainWindow.Ribbon.ClickButton("CreateLineSegment");
            MainWindow.Viewport.ClickRelative(0.4, 0.5);
            MainWindow.Viewport.ClickRelative(0.6, 0.5);
            MainWindow.Viewport.ClickRelative(0.1, 0.1); // Deselect

            // Constraints unavailable
            Assert.IsFalse(MainWindow.Ribbon.IsButtonEnabled("CreateHorizontalDistanceConstraint"));
            Assert.IsFalse(MainWindow.Ribbon.IsButtonEnabled("CreateVerticalDistanceConstraint"));

            // Select point, constraints available
            MainWindow.Viewport.ClickRelative(0.6, 0.5);
            Assert.IsTrue(MainWindow.Ribbon.IsButtonEnabled("CreateHorizontalDistanceConstraint"));
            Assert.IsTrue(MainWindow.Ribbon.IsButtonEnabled("CreateVerticalDistanceConstraint"));

            // Create one constraint, it is disabled now
            MainWindow.Ribbon.ClickButton("CreateVerticalDistanceConstraint");
            MainWindow.Viewport.ClickRelative(0.6, 0.5); // Reselect segment
            Assert.IsTrue(MainWindow.Ribbon.IsButtonEnabled("CreateHorizontalDistanceConstraint"));
            Assert.IsFalse(MainWindow.Ribbon.IsButtonEnabled("CreateVerticalDistanceConstraint"));

            // Turn, button enable should swap
            MainWindow.Ribbon.ClickButton("TurnSketchViewCW");
            Assert.IsFalse(MainWindow.Ribbon.IsButtonEnabled("CreateHorizontalDistanceConstraint"));
            Assert.IsTrue(MainWindow.Ribbon.IsButtonEnabled("CreateVerticalDistanceConstraint"));

            // Turn, button enable should swap
            MainWindow.Ribbon.ClickButton("TurnSketchViewCW");
            Assert.IsTrue(MainWindow.Ribbon.IsButtonEnabled("CreateHorizontalDistanceConstraint"));
            Assert.IsFalse(MainWindow.Ribbon.IsButtonEnabled("CreateVerticalDistanceConstraint"));

            // Turn, button enable should swap
            MainWindow.Ribbon.ClickButton("TurnSketchViewCW");
            Assert.IsFalse(MainWindow.Ribbon.IsButtonEnabled("CreateHorizontalDistanceConstraint"));
            Assert.IsTrue(MainWindow.Ribbon.IsButtonEnabled("CreateVerticalDistanceConstraint"));

            // Turn, button enable should swap
            MainWindow.Ribbon.ClickButton("TurnSketchViewCW");
            Assert.IsTrue(MainWindow.Ribbon.IsButtonEnabled("CreateHorizontalDistanceConstraint"));
            Assert.IsFalse(MainWindow.Ribbon.IsButtonEnabled("CreateVerticalDistanceConstraint"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void CreateHorizontalVerticalConstraints()
        {
            MainWindow.Ribbon.SelectGroup("Model");
            MainWindow.Ribbon.ClickButton("CreateSketch");

            MainWindow.Ribbon.SelectGroup("Sketch");
            MainWindow.Ribbon.ClickButton("CreateLineSegment");
            MainWindow.Viewport.ClickRelative(0.4, 0.5);
            MainWindow.Viewport.ClickRelative(0.6, 0.5);
            MainWindow.Viewport.ClickRelative(0.1, 0.1); // Deselect

            // Constraints navailable
            Assert.IsFalse(MainWindow.Ribbon.IsButtonEnabled("CreateHorizontalConstraint"));
            Assert.IsFalse(MainWindow.Ribbon.IsButtonEnabled("CreateVerticalConstraint"));

            // Select segment, constraints available
            MainWindow.Viewport.ClickRelative(0.5, 0.5);
            Assert.IsTrue(MainWindow.Ribbon.IsButtonEnabled("CreateHorizontalConstraint"));
            Assert.IsTrue(MainWindow.Ribbon.IsButtonEnabled("CreateVerticalConstraint"));

            // Create one constraint, it is disabled now
            MainWindow.Ribbon.ClickButton("CreateHorizontalConstraint");
            Assert.IsFalse(MainWindow.Ribbon.IsButtonEnabled("CreateHorizontalConstraint"));
            Assert.IsFalse(MainWindow.Ribbon.IsButtonEnabled("CreateVerticalConstraint"));

            // Create the other constraint, it is disabled now
            Pipe.TypeKey(VirtualKeyShort.CONTROL, VirtualKeyShort.KEY_Z);
            MainWindow.Ribbon.ClickButton("CreateVerticalConstraint");
            Assert.IsFalse(MainWindow.Ribbon.IsButtonEnabled("CreateHorizontalConstraint"));
            Assert.IsFalse(MainWindow.Ribbon.IsButtonEnabled("CreateVerticalConstraint"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void RecenterGrid()
        {
            // Create Sketch
            MainWindow.Ribbon.SelectGroup("Model");
            MainWindow.Ribbon.ClickButton("CreateSketch");

            MainWindow.Ribbon.SelectGroup("Sketch");
            MainWindow.Ribbon.ClickButton("CreateLineSegment");
            MainWindow.Viewport.ClickRelative(0.4, 0.5);
            MainWindow.Viewport.ClickRelative(0.6, 0.5);

            // Check current grid center
            Assert.AreEqual(0.0, Pipe.GetValue<double>("$Context.WorkspaceController.Workspace.WorkingPlane.Location.X"));

            // Push Recenter Btn, push again, click => no recenter
            Assert.IsTrue(MainWindow.Ribbon.IsButtonEnabled("RecenterGrid"));
            Assert.IsFalse(MainWindow.Ribbon.IsButtonChecked("RecenterGrid"));
            MainWindow.Ribbon.ClickButton("RecenterGrid");
            Assert.IsTrue(MainWindow.Ribbon.IsButtonChecked("RecenterGrid"));
            MainWindow.Ribbon.ClickButton("RecenterGrid");
            Assert.IsFalse(MainWindow.Ribbon.IsButtonChecked("RecenterGrid"));
            MainWindow.Viewport.ClickRelative(0.7, 0.7);
            Assert.AreEqual(0.0, Pipe.GetValue<double>("$Context.WorkspaceController.Workspace.WorkingPlane.Location.X"));

            // Push Recenter Btn, press esc => no recenter, sketch editor still alive
            MainWindow.Ribbon.ClickButton("RecenterGrid");
            Assert.IsTrue(MainWindow.Ribbon.IsButtonChecked("RecenterGrid"));
            Pipe.TypeKey(VirtualKeyShort.ESC);
            Assert.IsFalse(MainWindow.Ribbon.IsButtonChecked("RecenterGrid"));
            MainWindow.Viewport.ClickRelative(0.7, 0.7);
            Assert.AreEqual(0.0, Pipe.GetValue<double>("$Context.WorkspaceController.Workspace.WorkingPlane.Location.X"));

            // Push Recenter Btn, click => recenter, sketch editor still alive
            MainWindow.Ribbon.ClickButton("RecenterGrid");
            Assert.IsTrue(MainWindow.Ribbon.IsButtonChecked("RecenterGrid"));
            MainWindow.Viewport.ClickRelative(0.7, 0.7);
            Assert.IsFalse(MainWindow.Ribbon.IsButtonChecked("RecenterGrid"));
            Assert.AreNotEqual(0.0, Pipe.GetValue<double>("$Context.WorkspaceController.Workspace.WorkingPlane.Location.X"));
        }

        //--------------------------------------------------------------------------------------------------
         
        [Test]
        public void SplitSegment()
        {
            // Create Sketch
            MainWindow.Ribbon.SelectGroup("Model");
            MainWindow.Ribbon.ClickButton("CreateSketch");

            MainWindow.Ribbon.SelectGroup("Sketch");
            MainWindow.Ribbon.ClickButton("CreateLineSegment");
            MainWindow.Viewport.ClickRelative(0.4, 0.5);
            MainWindow.Viewport.ClickRelative(0.6, 0.5);
            Assert.IsTrue(MainWindow.Ribbon.IsButtonEnabled("SplitElement"));

            // Press button to start tool, press again to cancel
            MainWindow.Ribbon.ClickButton("SplitElement");
            Assert.IsTrue(MainWindow.Ribbon.IsButtonChecked("SplitElement"));
            MainWindow.Ribbon.ClickButton("SplitElement");
            Assert.IsFalse(MainWindow.Ribbon.IsButtonChecked("SplitElement"));

            // Split segment.
            MainWindow.Ribbon.ClickButton("SplitElement");
            Assert.IsTrue(MainWindow.Ribbon.IsButtonChecked("SplitElement"));
            MainWindow.Viewport.ClickRelative(0.5, 0.5);
            Assert.IsTrue(MainWindow.Ribbon.IsButtonChecked("SplitElement"));
            MainWindow.Viewport.ClickRelative(0.55, 0.5);
            Assert.IsTrue(MainWindow.Ribbon.IsButtonChecked("SplitElement"));
            MainWindow.Ribbon.ClickButton("SplitElement");
            Assert.IsFalse(MainWindow.Ribbon.IsButtonChecked("SplitElement"));

            Assert.AreEqual(3, Pipe.GetValue<int>("$Sketch.Segments.Count"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ConvertSegment()
        {
            MainWindow.Ribbon.SelectGroup("Model");
            MainWindow.Ribbon.ClickButton("CreateSketch");
            MainWindow.Ribbon.SelectGroup("Sketch");

            MainWindow.Ribbon.ClickButton("ConvertSegment");
            var menu = new ContextMenuAdaptor(MainWindow);
            Assert.IsFalse(menu.IsMenuItemEnabled("ConvertSegmentToBezier"));

            MainWindow.Ribbon.ClickButton("CreateLineSegment");
            MainWindow.Viewport.ClickRelative(0.4, 0.5);
            MainWindow.Viewport.ClickRelative(0.6, 0.5);

            // Enabled? Then click!
            MainWindow.Ribbon.ClickButton("ConvertSegment");
            menu = new ContextMenuAdaptor(MainWindow);
            Assert.IsTrue(menu.IsMenuItemEnabled("ConvertSegmentToBezier"));
            menu.ClickMenuItem("ConvertSegmentToBezier");

            Assert.AreEqual(4, Pipe.GetValue<int>("$Sketch.Points.Count"));
            MainWindow.Ribbon.ClickButton("ConvertSegment");
            menu = new ContextMenuAdaptor(MainWindow);
            Assert.IsFalse(menu.IsMenuItemEnabled("ConvertSegmentToBezier"));
        }

        //--------------------------------------------------------------------------------------------------

    }
}