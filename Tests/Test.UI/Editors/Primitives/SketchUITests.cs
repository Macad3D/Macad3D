using FlaUI.Core.Input;
using FlaUI.Core.WindowsAPI;
using Macad.Common;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Editors.Primitives;

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
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateSketch");
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("CreateSketch"));
        MainWindow.Viewport.ClickRelative(0.5, 0.55);

        // Button not lit
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        Assert.IsFalse(MainWindow.Ribbon.IsChecked("CreateSketch"));

        // Sketch editor already started, All panels shown?
        var sketchPanel = MainWindow.PropertyView.FindPanelByClass("SketchPointsPropertyPanel");
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

        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.OpenSplitButtonMenu("CreateSketch");
        var contextMenu = new ContextMenuAdaptor(MainWindow);
        contextMenu.ClickMenuItem("CreateSketchInteractive");

        // Button lit
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("CreateSketch"));

        // CreateSketchTool running
        Assert.AreEqual("CreateSketchTool", Pipe.GetValue<string>("$Context.EditorState.ActiveTool"));

        // Select
        MainWindow.Viewport.ClickRelative(0.5, 0.3);

        // Button unlit
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        Assert.IsFalse(MainWindow.Ribbon.IsChecked("CreateSketch"));

        // Sketch editor already started, All panels shown?
        var sketchPanel = MainWindow.PropertyView.FindPanelByClass("SketchPointsPropertyPanel");
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
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateSketch");
        MainWindow.Viewport.ClickRelative(0.5, 0.55);

        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);
        MainWindow.Ribbon.ClickButton("CreateLineSegment");
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("CreateLineSegment"));

        MainWindow.Viewport.ClickRelative(0.4, 0.5);
        MainWindow.Viewport.ClickRelative(0.6, 0.5);
        Assert.IsFalse(MainWindow.Ribbon.IsChecked("CreateLineSegment"));
    }
            
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void StopSegmentCreation()
    {
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateSketch");
        MainWindow.Viewport.ClickRelative(0.5, 0.55);

        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);
        MainWindow.Ribbon.ClickButton("CreateLineSegment");
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("CreateLineSegment"));

        MainWindow.Viewport.ClickRelative(0.4, 0.5);
        MainWindow.Ribbon.ClickButton("CreateLineSegment");
        Assert.IsFalse(MainWindow.Ribbon.IsChecked("CreateLineSegment"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateHorizontalVerticalDistanceConstraints()
    {
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateSketch");
        MainWindow.Viewport.ClickRelative(0.5, 0.55);

        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);
        MainWindow.Ribbon.ClickButton("CreateLineSegment");
        MainWindow.Viewport.ClickRelative(0.4, 0.5);
        MainWindow.Viewport.ClickRelative(0.6, 0.5);
        MainWindow.Viewport.ClickRelative(0.1, 0.1); // Deselect

        // Constraints unavailable
        Assert.IsFalse(MainWindow.Ribbon.IsEnabled("CreateHorizontalDistanceConstraint"));
        Assert.IsFalse(MainWindow.Ribbon.IsEnabled("CreateVerticalDistanceConstraint"));

        // Select point, constraints available
        MainWindow.Viewport.ClickRelative(0.6, 0.5);
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("CreateHorizontalDistanceConstraint"));
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("CreateVerticalDistanceConstraint"));

        // Create one constraint, it is disabled now
        MainWindow.Ribbon.ClickButton("CreateVerticalDistanceConstraint");
        MainWindow.Viewport.ClickRelative(0.6, 0.5); // Reselect segment
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("CreateHorizontalDistanceConstraint"));
        Assert.IsFalse(MainWindow.Ribbon.IsEnabled("CreateVerticalDistanceConstraint"));

        // Turn, button enable should swap
        MainWindow.Ribbon.ClickButton("TurnSketchViewCW");
        Assert.IsFalse(MainWindow.Ribbon.IsEnabled("CreateHorizontalDistanceConstraint"));
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("CreateVerticalDistanceConstraint"));

        // Turn, button enable should swap
        MainWindow.Ribbon.ClickButton("TurnSketchViewCW");
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("CreateHorizontalDistanceConstraint"));
        Assert.IsFalse(MainWindow.Ribbon.IsEnabled("CreateVerticalDistanceConstraint"));

        // Turn, button enable should swap
        MainWindow.Ribbon.ClickButton("TurnSketchViewCW");
        Assert.IsFalse(MainWindow.Ribbon.IsEnabled("CreateHorizontalDistanceConstraint"));
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("CreateVerticalDistanceConstraint"));

        // Turn, button enable should swap
        MainWindow.Ribbon.ClickButton("TurnSketchViewCW");
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("CreateHorizontalDistanceConstraint"));
        Assert.IsFalse(MainWindow.Ribbon.IsEnabled("CreateVerticalDistanceConstraint"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateHorizontalVerticalConstraints()
    {
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateSketch");
        MainWindow.Viewport.ClickRelative(0.5, 0.55);

        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);
        MainWindow.Ribbon.ClickButton("CreateLineSegment");
        MainWindow.Viewport.ClickRelative(0.4, 0.5);
        MainWindow.Viewport.ClickRelative(0.6, 0.5);
        MainWindow.Viewport.ClickRelative(0.1, 0.1); // Deselect

        // Constraints navailable
        Assert.IsFalse(MainWindow.Ribbon.IsEnabled("CreateHorizontalConstraint"));
        Assert.IsFalse(MainWindow.Ribbon.IsEnabled("CreateVerticalConstraint"));

        // Select segment, constraints available
        MainWindow.Viewport.ClickRelative(0.5, 0.5);
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("CreateHorizontalConstraint"));
        Assert.IsFalse(MainWindow.Ribbon.IsEnabled("CreateVerticalConstraint"));

        // Create one constraint, it is disabled now
        MainWindow.Ribbon.ClickButton("CreateHorizontalConstraint");
        Assert.IsFalse(MainWindow.Ribbon.IsEnabled("CreateHorizontalConstraint"));
        Assert.IsFalse(MainWindow.Ribbon.IsEnabled("CreateVerticalConstraint"));

        // Create the other constraint, it is disabled now
        Pipe.TypeKey(VirtualKeyShort.CONTROL, VirtualKeyShort.KEY_Z);
        MainWindow.Ribbon.ClickButton("CreateVerticalConstraint");
        Assert.IsFalse(MainWindow.Ribbon.IsEnabled("CreateHorizontalConstraint"));
        Assert.IsFalse(MainWindow.Ribbon.IsEnabled("CreateVerticalConstraint"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RecenterGrid()
    {
        // Create Sketch
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateSketch");
        MainWindow.Viewport.ClickRelative(0.5, 0.55);

        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);
        MainWindow.Ribbon.ClickButton("CreateLineSegment");
        MainWindow.Viewport.ClickRelative(0.4, 0.5);
        MainWindow.Viewport.ClickRelative(0.6, 0.5);

        // Check current grid center
        Assert.AreEqual(0.0, Pipe.GetValue<double>("$Context.WorkspaceController.Workspace.WorkingPlane.Location.X"));

        // Push Recenter Btn, push again, click => no recenter
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("RecenterGrid"));
        Assert.IsFalse(MainWindow.Ribbon.IsChecked("RecenterGrid"));
        MainWindow.Ribbon.ClickButton("RecenterGrid");
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("RecenterGrid"));
        MainWindow.Ribbon.ClickButton("RecenterGrid");
        Assert.IsFalse(MainWindow.Ribbon.IsChecked("RecenterGrid"));
        MainWindow.Viewport.ClickRelative(0.7, 0.7);
        Assert.AreEqual(0.0, Pipe.GetValue<double>("$Context.WorkspaceController.Workspace.WorkingPlane.Location.X"));

        // Push Recenter Btn, press esc => no recenter, sketch editor still alive
        MainWindow.Ribbon.ClickButton("RecenterGrid");
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("RecenterGrid"));
        Pipe.TypeKey(VirtualKeyShort.ESC);
        Assert.IsFalse(MainWindow.Ribbon.IsChecked("RecenterGrid"));
        MainWindow.Viewport.ClickRelative(0.7, 0.7);
        Assert.AreEqual(0.0, Pipe.GetValue<double>("$Context.WorkspaceController.Workspace.WorkingPlane.Location.X"));

        // Push Recenter Btn, click => recenter, sketch editor still alive
        MainWindow.Ribbon.ClickButton("RecenterGrid");
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("RecenterGrid"));
        MainWindow.Viewport.ClickRelative(0.7, 0.7);
        Assert.IsFalse(MainWindow.Ribbon.IsChecked("RecenterGrid"));
        Assert.AreNotEqual(0.0, Pipe.GetValue<double>("$Context.WorkspaceController.Workspace.WorkingPlane.Location.X"));
    }

    //--------------------------------------------------------------------------------------------------
         
    [Test]
    public void SplitSegment()
    {
        // Create Sketch
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateSketch");
        MainWindow.Viewport.ClickRelative(0.5, 0.55);

        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);
        MainWindow.Ribbon.ClickButton("CreateLineSegment");
        MainWindow.Viewport.ClickRelative(0.4, 0.5);
        MainWindow.Viewport.ClickRelative(0.6, 0.5);
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("SplitElement"));

        // Press button to start tool, press again to cancel
        MainWindow.Ribbon.ClickButton("SplitElement");
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("SplitElement"));
        MainWindow.Ribbon.ClickButton("SplitElement");
        Assert.IsFalse(MainWindow.Ribbon.IsChecked("SplitElement"));

        // Split segment.
        MainWindow.Ribbon.ClickButton("SplitElement");
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("SplitElement"));
        MainWindow.Viewport.ClickRelative(0.5, 0.5);
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("SplitElement"));
        MainWindow.Viewport.ClickRelative(0.55, 0.5);
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("SplitElement"));
        MainWindow.Ribbon.ClickButton("SplitElement");
        Assert.IsFalse(MainWindow.Ribbon.IsChecked("SplitElement"));

        Assert.AreEqual(3, Pipe.GetValue<int>("$Sketch.Segments.Count"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ConvertSegment()
    {
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateSketch");
        MainWindow.Viewport.ClickRelative(0.5, 0.55);
        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);

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

    [Test]
    public void CreateCircleWithValueHudElement()
    {
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateSketch");
        MainWindow.Viewport.ClickRelative(0.5, 0.55);
        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);

        MainWindow.Ribbon.ClickButton("CreateCircleSegment");
        MainWindow.Viewport.ClickRelative(0.4, 0.5);
        MainWindow.Viewport.MoveRelative(0.6, 0.5);

        Pipe.TypeText("2");
        Pipe.TypeKey(VirtualKeyShort.ENTER);

        Assert.AreEqual(1, Pipe.GetValue<int>("$Sketch.Segments.Count"));
        Assert.AreEqual(2.0, Pipe.GetValue<double>("$Sketch.Segments.[0].Radius($Sketch.Points)"));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateLineWithValueHudElement()
    {
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateSketch");
        MainWindow.Viewport.ClickRelative(0.5, 0.55);
        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);

        MainWindow.Ribbon.ClickButton("CreateLineSegment");
        MainWindow.Viewport.ClickRelative(0.4, 0.5);
        MainWindow.Viewport.MoveRelative(0.6, 0.5);

        Pipe.TypeText("2");
        Pipe.TypeKey(VirtualKeyShort.ENTER);

        Assert.AreEqual(1, Pipe.GetValue<int>("$Sketch.Segments.Count"));
        Assert.AreEqual(2.0, Pipe.GetValue<double>("$Sketch.Segments.[0].Length($Sketch.Points)"));
    }
                
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateArcCenterWithValueHudElement()
    {
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateSketch");
        MainWindow.Viewport.ClickRelative(0.5, 0.55);
        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);

        MainWindow.Ribbon.ClickButton("CreateArcCenterSegment");
        MainWindow.Viewport.ClickRelative(0.4, 0.5);
        MainWindow.Viewport.MoveRelative(0.6, 0.5);

        Pipe.TypeText("2");
        Pipe.TypeKey(VirtualKeyShort.ENTER);
        Pipe.TypeText("90");
        Pipe.TypeKey(VirtualKeyShort.ENTER);

        Assert.AreEqual(1, Pipe.GetValue<int>("$Sketch.Segments.Count"));
        Assert.AreEqual(2.0, Pipe.GetValue<double>("$Sketch.Segments.[0].Radius($Sketch.Points)"), 1e-7);
        Assert.AreEqual(90.0.ToRad(), Pipe.GetValue<double>("$Sketch.Segments.[0].Angle($Sketch.Points)"), 1e-7);
    }
                        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateArcRimWithValueHudElement()
    {
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateSketch");
        MainWindow.Viewport.ClickRelative(0.5, 0.55);
        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);

        MainWindow.Ribbon.ClickButton("CreateArcRimSegment");
        MainWindow.Viewport.ClickRelative(0.4, 0.5);
        MainWindow.Viewport.ClickRelative(0.6, 0.5);
        MainWindow.Viewport.MoveRelative(0.5, 0.6);

        Pipe.TypeText("2");
        Pipe.TypeKey(VirtualKeyShort.ENTER);

        Assert.AreEqual(1, Pipe.GetValue<int>("$Sketch.Segments.Count"));
        Assert.AreEqual(2.0, Pipe.GetValue<double>("$Sketch.Segments.[0].Radius($Sketch.Points)"), 1e-7);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateEllipseWithValueHudElement()
    {
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateSketch");
        MainWindow.Viewport.ClickRelative(0.5, 0.55);
        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);

        MainWindow.Ribbon.ClickButton("CreateEllipseCenterSegment");
        MainWindow.Viewport.ClickRelative(0.4, 0.5);
        MainWindow.Viewport.MoveRelative(0.6, 0.5);
        Pipe.TypeText("2");
        Pipe.TypeKey(VirtualKeyShort.ENTER);
        MainWindow.Viewport.MoveRelative(0.55, 0.4);
        Pipe.TypeText("3");
        Pipe.TypeKey(VirtualKeyShort.ENTER);

        Assert.AreEqual(1, Pipe.GetValue<int>("$Sketch.Segments.Count"));
    }
                
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateBezier2WithValueHudElement()
    {
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateSketch");
        MainWindow.Viewport.ClickRelative(0.5, 0.55);
        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);

        MainWindow.Ribbon.ClickButton("CreateBezier2Segment");
        MainWindow.Viewport.ClickRelative(0.4, 0.5);
        MainWindow.Viewport.MoveRelative(0.6, 0.5);

        Pipe.TypeText("2");
        Pipe.TypeKey(VirtualKeyShort.ENTER);

        MainWindow.Viewport.ClickRelative(0.5, 0.4);

        Assert.AreEqual(1, Pipe.GetValue<int>("$Sketch.Segments.Count"));
    }
                        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateBezier3WithValueHudElement()
    {
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateSketch");
        MainWindow.Viewport.ClickRelative(0.5, 0.55);
        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);

        MainWindow.Ribbon.ClickButton("CreateBezier3Segment");
        MainWindow.Viewport.ClickRelative(0.4, 0.5);
        MainWindow.Viewport.MoveRelative(0.6, 0.5);

        Pipe.TypeText("2");
        Pipe.TypeKey(VirtualKeyShort.ENTER);

        MainWindow.Viewport.ClickRelative(0.45, 0.4);
        MainWindow.Viewport.ClickRelative(0.55, 0.4);

        Assert.AreEqual(1, Pipe.GetValue<int>("$Sketch.Segments.Count"));
    }
                                
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateRectangleWithValueHudElement()
    {
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateSketch");
        MainWindow.Viewport.ClickRelative(0.5, 0.55);
        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);

        MainWindow.Ribbon.ClickButton("CreateRectangleSegment");
        MainWindow.Viewport.ClickRelative(0.4, 0.5);
        MainWindow.Viewport.MoveRelative(0.6, 0.5);

        Pipe.TypeText("2");
        Pipe.TypeKey(VirtualKeyShort.ENTER);
        Pipe.TypeText("4");
        Pipe.TypeKey(VirtualKeyShort.ENTER);

        Assert.AreEqual(4, Pipe.GetValue<int>("$Sketch.Segments.Count"));
    }
                                        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void WeldPoints()
    {
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateSketch");
        MainWindow.Viewport.ClickRelative(0.5, 0.55);
        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);

        MainWindow.Ribbon.ClickButton("CreateRectangleSegment");
        MainWindow.Viewport.ClickRelative(0.3, 0.3);
        MainWindow.Viewport.ClickRelative(0.7, 0.7);
            
        MainWindow.Viewport.ClickRelative(0.3, 0.3);
        Assert.IsFalse(MainWindow.Ribbon.IsEnabled("WeldElements"));

        Keyboard.Press(VirtualKeyShort.SHIFT);
        MainWindow.Viewport.ClickRelative(0.7, 0.3);
        Keyboard.Release(VirtualKeyShort.SHIFT);
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("WeldElements"));

        MainWindow.Ribbon.ClickButton("WeldElements");

        Assert.AreEqual(3, Pipe.GetValue<int>("$Sketch.Segments.Count"));
        Assert.AreEqual(3, Pipe.GetValue<int>("$Sketch.Points.Count"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void UpdateOnManualPointEdit()
    {
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateSketch");
        MainWindow.Viewport.ClickRelative(0.5, 0.55);
        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);
            
        MainWindow.Ribbon.ClickButton("CreateRectangleSegment");
        MainWindow.Viewport.ClickRelative(0.3, 0.3);
        MainWindow.Viewport.ClickRelative(0.7, 0.7);
            
        // Select rectangle
        MainWindow.Viewport.ClickRelative(0.3, 0.3);
        var sketchPanel = MainWindow.PropertyView.FindPanelByClass("SketchPointsPropertyPanel");
        Assert.That(sketchPanel, Is.Not.Null);

        var oldX = Pipe.GetValue<double>("$Sketch.Points.[0].X");
        var oldY = Pipe.GetValue<double>("$Sketch.Points.[0].Y");

        sketchPanel.EnterValue("PointX", 0.0);
        sketchPanel.EnterValue("PointY", 0.0);

        Assert.AreNotEqual(oldX, Pipe.GetValue<double>("$Sketch.Points.[0].X"));
        Assert.AreNotEqual(oldY, Pipe.GetValue<double>("$Sketch.Points.[0].Y"));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void UpdateOnManualPointEditWithConstraint()
    {
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateSketch");
        MainWindow.Viewport.ClickRelative(0.5, 0.55);
        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);
            
        MainWindow.Ribbon.ClickButton("CreateRectangleSegment");
        MainWindow.Viewport.ClickRelative(0.3, 0.3);
        MainWindow.Viewport.ClickRelative(0.7, 0.7);
        
        // Create constraint
        MainWindow.Viewport.ClickRelative(0.5, 0.3);
        MainWindow.Ribbon.ClickButton("CreateHorizontalConstraint");
        MainWindow.Viewport.ClickRelative(0.3, 0.5);
        MainWindow.Ribbon.ClickButton("CreateVerticalConstraint");

        // Select rectangle
        MainWindow.Viewport.ClickRelative(0.3, 0.3);
        var sketchPanel = MainWindow.PropertyView.FindPanelByClass("SketchPointsPropertyPanel");
        Assert.That(sketchPanel, Is.Not.Null);

        sketchPanel.EnterValue("PointX", -2.1);
        sketchPanel.EnterValue("PointY", 2.4);

        Assert.AreEqual(-2.1, Pipe.GetValue<double>("$Sketch.Points.[0].X"));
        Assert.AreEqual(2.4, Pipe.GetValue<double>("$Sketch.Points.[0].Y"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void UpdateOnManualConstraintParameterEdit()
    {
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateSketch");
        MainWindow.Viewport.ClickRelative(0.5, 0.55);
        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);

        MainWindow.Ribbon.ClickButton("CreateCircleSegment");
        MainWindow.Viewport.ClickRelative(0.4, 0.5);
        MainWindow.Viewport.ClickRelative(0.6, 0.5);

        MainWindow.Ribbon.ClickButton("CreateCircleRadiusConstraint");
           
        var sketchPanel = MainWindow.PropertyView.FindPanelByClass("SketchConstraintsPropertyPanel");
        Assert.That(sketchPanel, Is.Not.Null);

        var oldX0 = Pipe.GetValue<double>("$Sketch.Points.[0].X");
        var oldX1 = Pipe.GetValue<double>("$Sketch.Points.[1].X");

        sketchPanel.EnterValue("ParamValue", 3.0);

        Assert.AreNotEqual(oldX0, Pipe.GetValue<double>("$Sketch.Points.[0].X"));
        Assert.AreNotEqual(oldX1, Pipe.GetValue<double>("$Sketch.Points.[1].X"));
    }
            
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreatePolyLineSegment()
    {
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateSketch");
        MainWindow.Viewport.ClickRelative(0.5, 0.55);

        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);
        MainWindow.Ribbon.ClickButton("CreatePolyLineSegment");
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("CreatePolyLineSegment"));
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("CreateLineSegment"));

        MainWindow.Viewport.ClickRelative(0.4, 0.5);
        MainWindow.Viewport.ClickRelative(0.6, 0.5);
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("CreatePolyLineSegment"));
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("CreateLineSegment"));

        MainWindow.Ribbon.ClickButton("CreateBezier2Segment");
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("CreatePolyLineSegment"));
        Assert.IsFalse(MainWindow.Ribbon.IsChecked("CreateLineSegment"));
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("CreateBezier2Segment"));

        MainWindow.Ribbon.ClickButton("CreatePolyLineSegment");
        Assert.IsFalse(MainWindow.Ribbon.IsChecked("CreatePolyLineSegment"));
        Assert.IsFalse(MainWindow.Ribbon.IsChecked("CreateBezier2Segment"));
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ScaleElement()
    {
        // Create Sketch
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateSketch");
        MainWindow.Viewport.ClickRelative(0.5, 0.55);
        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);
        Assert.IsFalse(MainWindow.Ribbon.IsEnabled("ScaleElement"));

        MainWindow.Ribbon.ClickButton("CreateLineSegment");
        MainWindow.Viewport.ClickRelative(0.4, 0.5);
        MainWindow.Viewport.ClickRelative(0.6, 0.5);
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("ScaleElement"));
        Assert.IsFalse(MainWindow.Ribbon.IsChecked("ScaleElement"));

        MainWindow.Ribbon.ClickButton("ScaleElement");
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("ScaleElement"));
        MainWindow.Ribbon.ClickButton("ScaleElement");
        Assert.IsFalse(MainWindow.Ribbon.IsChecked("ScaleElement"));
    }

    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void MirrorElement()
    {
        // Create Sketch
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateSketch");
        MainWindow.Viewport.ClickRelative(0.5, 0.55);
        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);
        Assert.IsFalse(MainWindow.Ribbon.IsEnabled("MirrorElement"));

        MainWindow.Ribbon.ClickButton("CreateLineSegment");
        MainWindow.Viewport.ClickRelative(0.4, 0.5);
        MainWindow.Viewport.ClickRelative(0.6, 0.5);
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("MirrorElement"));
        Assert.IsFalse(MainWindow.Ribbon.IsChecked("MirrorElement"));

        MainWindow.Ribbon.ClickButton("MirrorElement");
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("MirrorElement"));
        MainWindow.Ribbon.ClickButton("MirrorElement");
        Assert.IsFalse(MainWindow.Ribbon.IsChecked("MirrorElement"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void OffsetSegment()
    {
        // Create Sketch
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateSketch");
        MainWindow.Viewport.ClickRelative(0.5, 0.55);
        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);
        Assert.IsFalse(MainWindow.Ribbon.IsEnabled("OffsetSegment"));

        MainWindow.Ribbon.ClickButton("CreateLineSegment");
        MainWindow.Viewport.ClickRelative(0.4, 0.5);
        MainWindow.Viewport.ClickRelative(0.6, 0.5);
        Assert.IsTrue(MainWindow.Ribbon.IsEnabled("OffsetSegment"));
        Assert.IsFalse(MainWindow.Ribbon.IsChecked("OffsetSegment"));

        MainWindow.Ribbon.ClickButton("OffsetSegment");
        Assert.IsTrue(MainWindow.Ribbon.IsChecked("OffsetSegment"));
        MainWindow.Ribbon.ClickButton("OffsetSegment");
        Assert.IsFalse(MainWindow.Ribbon.IsChecked("OffsetSegment"));
    }

    //--------------------------------------------------------------------------------------------------

}