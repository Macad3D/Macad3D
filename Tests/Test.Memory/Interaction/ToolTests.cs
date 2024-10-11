using System.Windows;
using System.Windows.Input;
using JetBrains.dotMemoryUnit;
using Macad.Test.Utils;
using Macad.Core.Shapes;
using Macad.Core.Toolkits;
using Macad.Core.Topology;
using Macad.Interaction;
using Macad.Interaction.Editors.Shapes;
using Macad.Interaction.Editors.Toolkits;
using Macad.Interaction.Visual;
using Macad.Occt.Ext;
using NUnit.Framework;

namespace Macad.Test.Memory.Interaction;

[TestFixture]
public class ToolTests
{
    [SetUp]
    public void SetUp()
    {
        Context.InitWithView(500);
    }

    [TearDown]
    public void TearDown()
    {
        Context.Current.Deinit();
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void CreateBox()
    {
        void __CreateAndReleaseTool()
        {
            var ctx = Context.Current;

            ctx.WorkspaceController.StartTool(new CreateBoxTool());
            ctx.ViewportController.MouseMove(new Point(50, 250));
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseUp();
            ctx.ViewportController.MouseMove(new Point(450, 250));
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseUp();
            ctx.ViewportController.MouseMove(new Point(450, 200));
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseUp();
            ctx.ViewportController.MouseMove(new Point(0, 0));

            Assert.That(ctx.WorkspaceController.CurrentTool?.CurrentAction, Is.Null);
            Assert.That(ctx.WorkspaceController.CurrentTool, Is.Null);
        }

        __CreateAndReleaseTool();

        dotMemory.Check(memory =>
        {
            Assert.AreEqual(0, memory.ObjectsCount<CreateBoxTool>(), "Tool is still alive");
            Assert.AreEqual(0, memory.ObjectsCount<PointAction>(), "PointAction is alive");
            Assert.AreEqual(0, memory.ObjectsCount<AxisValueAction>(), "AxisValueAction is alive");
        });
    }

    //--------------------------------------------------------------------------------------------------
                
    [Test]
    public void CreateBoxCancelled()
    {
        void __CreateAndReleaseTool()
        {
            var ctx = Context.Current;

            ctx.WorkspaceController.StartTool(new CreateBoxTool());
            ctx.ViewportController.MouseMove(new Point(50, 250));
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseUp();
            ctx.WorkspaceController.Invalidate(forceRedraw:true);
            ctx.ViewportController.MouseMove(new Point(450, 250));
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseUp();
            ctx.WorkspaceController.Invalidate(forceRedraw:true);
            ctx.ViewportController.MouseMove(new Point(450, 200));
            ctx.WorkspaceController.CancelTool(ctx.WorkspaceController.CurrentTool, false);
            ctx.WorkspaceController.Invalidate(forceRedraw:true);
            ctx.ViewportController.MouseMove(new Point(0,0));

            Assert.That(ctx.WorkspaceController.CurrentTool?.CurrentAction, Is.Null);
            Assert.That(ctx.WorkspaceController.CurrentTool, Is.Null);
        }

        __CreateAndReleaseTool();

        dotMemory.Check(memory =>
        {
            Assert.AreEqual(0, memory.ObjectsCount<CreateBoxTool>(), "Tool is still alive");
            Assert.AreEqual(0, memory.ObjectsCount<Body>(), "Body is alive");
            Assert.AreEqual(0, memory.ObjectsCount<Box>(), "Box is alive");
            Assert.AreEqual(0, memory.ObjectsCount<VisualShape>(), "VisualShape is alive");
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateCylinder()
    {
        void __CreateAndReleaseTool()
        {
            var ctx = Context.Current;

            ctx.WorkspaceController.StartTool(new CreateCylinderTool());
            ctx.ViewportController.MouseMove(new Point(250, 250));
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseUp();
            ctx.ViewportController.MouseMove(new Point(450, 250));
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseUp();
            ctx.ViewportController.MouseMove(new Point(450, 200));
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseUp();
            ctx.ViewportController.MouseMove(new Point(0, 0));

            Assert.That(ctx.WorkspaceController.CurrentTool?.CurrentAction, Is.Null);
            Assert.That(ctx.WorkspaceController.CurrentTool, Is.Null);
        }

        __CreateAndReleaseTool();

        dotMemory.Check(memory =>
        {
            Assert.AreEqual(0, memory.ObjectsCount<CreateCylinderTool>(), "Tool is still alive");
            Assert.AreEqual(0, memory.ObjectsCount<PointAction>(), "PointAction is alive");
            Assert.AreEqual(0, memory.ObjectsCount<AxisValueAction>(), "AxisValueAction is alive");
        });
    }
        
    //--------------------------------------------------------------------------------------------------
                
    [Test]
    public void CreateCylinderCancelled()
    {
        void __CreateAndReleaseTool()
        {
            var ctx = Context.Current;

            ctx.WorkspaceController.StartTool(new CreateCylinderTool());
            ctx.ViewportController.MouseMove(new Point(250, 250));
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseUp();
            ctx.WorkspaceController.Invalidate(forceRedraw:true);
            ctx.ViewportController.MouseMove(new Point(450, 250));
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseUp();
            ctx.WorkspaceController.Invalidate(forceRedraw:true);
            ctx.ViewportController.MouseMove(new Point(450, 200));
            ctx.WorkspaceController.CancelTool(ctx.WorkspaceController.CurrentTool, false);
            ctx.WorkspaceController.Invalidate(forceRedraw:true);
            ctx.ViewportController.MouseMove(new Point(0,0));

            Assert.That(ctx.WorkspaceController.CurrentTool?.CurrentAction, Is.Null);
            Assert.That(ctx.WorkspaceController.CurrentTool, Is.Null);
        }

        __CreateAndReleaseTool();

        dotMemory.Check(memory =>
        {
            Assert.AreEqual(0, memory.ObjectsCount<CreateBoxTool>(), "Tool is still alive");
            Assert.AreEqual(0, memory.ObjectsCount<Body>(), "Body is alive");
            Assert.AreEqual(0, memory.ObjectsCount<Cylinder>(), "Cylinder is alive");
            Assert.AreEqual(0, memory.ObjectsCount<VisualShape>(), "VisualShape is alive");
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateSphere()
    {
        void __CreateAndReleaseTool()
        {
            var ctx = Context.Current;

            ctx.WorkspaceController.StartTool(new CreateSphereTool());
            ctx.ViewportController.MouseMove(new Point(250, 250));
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseUp();
            ctx.ViewportController.MouseMove(new Point(450, 250));
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseUp();
            ctx.ViewportController.MouseMove(new Point(0, 0));

            Assert.That(ctx.WorkspaceController.CurrentTool?.CurrentAction, Is.Null);
            Assert.That(ctx.WorkspaceController.CurrentTool, Is.Null);
        }

        __CreateAndReleaseTool();

        dotMemory.Check(memory =>
        {
            Assert.AreEqual(0, memory.ObjectsCount<CreateSphereTool>(), "Tool is still alive");
            Assert.AreEqual(0, memory.ObjectsCount<PointAction>(), "PointAction is alive");
            Assert.AreEqual(0, memory.ObjectsCount<AxisValueAction>(), "AxisValueAction is alive");
        });
    }
           
    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void CreateSphereCancelled()
    {
        void __CreateAndReleaseTool()
        {
            var ctx = Context.Current;

            ctx.WorkspaceController.StartTool(new CreateSphereTool());
            ctx.ViewportController.MouseMove(new Point(250, 250));
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseUp();
            ctx.WorkspaceController.Invalidate(forceRedraw:true);
            ctx.ViewportController.MouseMove(new Point(450, 250));
            ctx.WorkspaceController.CancelTool(ctx.WorkspaceController.CurrentTool, false);
            ctx.WorkspaceController.Invalidate(forceRedraw:true);
            ctx.ViewportController.MouseMove(new Point(0,0));

            Assert.That(ctx.WorkspaceController.CurrentTool?.CurrentAction, Is.Null);
            Assert.That(ctx.WorkspaceController.CurrentTool, Is.Null);
        }

        __CreateAndReleaseTool();

        dotMemory.Check(memory =>
        {
            Assert.AreEqual(0, memory.ObjectsCount<CreateBoxTool>(), "Tool is still alive");
            Assert.AreEqual(0, memory.ObjectsCount<Body>(), "Body is alive");
            Assert.AreEqual(0, memory.ObjectsCount<Sphere>(), "Sphere is alive");
            Assert.AreEqual(0, memory.ObjectsCount<VisualShape>(), "VisualShape is alive");
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateSliceContour()
    {
        void __CreateAndReleaseTool()
        {
            var ctx = Context.Current;
            var body = TestGeomGenerator.CreateImprint()?.Body;
            Assert.That(body != null);
            ctx.Document.Add(body);
            ctx.WorkspaceController.Selection.SelectEntity(body);
            
            Assert.That(ToolboxCommands.CreateSliceContour.CanExecute());
            ToolboxCommands.CreateSliceContour.Execute();

            var tool = ctx.WorkspaceController.CurrentTool as SliceContourEditTool;
            Assert.That(tool, Is.Not.Null);

            ctx.WorkspaceController.CancelTool(tool, false);
            Assert.That(ctx.WorkspaceController.CurrentTool?.CurrentAction, Is.Null);
            Assert.That(ctx.WorkspaceController.CurrentTool, Is.Null);
        }

        __CreateAndReleaseTool();

        dotMemory.Check(memory =>
        {
            Assert.AreEqual(0, memory.ObjectsCount<SliceContourEditTool>(), "Tool is still alive");
            Assert.AreEqual(1, memory.ObjectsCount<SliceContourComponent>(), "SliceContourComponent is dead");
        });
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateEtchingMask()
    {
        void __CreateAndReleaseTool()
        {
            var ctx = Context.Current;
            var body = TestGeomGenerator.CreateImprint()?.Body;
            Assert.That(body != null);
            ctx.Document.Add(body);
            ctx.WorkspaceController.Selection.SelectEntity(body);
            
            Assert.That(ToolboxCommands.CreateEtchingMask.CanExecute());
            ToolboxCommands.CreateEtchingMask.Execute();

            var tool = ctx.WorkspaceController.CurrentTool as EtchingMaskEditTool;
            Assert.That(tool, Is.Not.Null);

            ctx.WorkspaceController.CancelTool(tool, false);
            Assert.That(ctx.WorkspaceController.CurrentTool?.CurrentAction, Is.Null);
            Assert.That(ctx.WorkspaceController.CurrentTool, Is.Null);
        }

        __CreateAndReleaseTool();

        dotMemory.Check(memory =>
        {
            Assert.AreEqual(0, memory.ObjectsCount<EtchingMaskEditTool>(), "Tool is still alive");
            Assert.AreEqual(1, memory.ObjectsCount<EtchingMaskComponent>(), "SliceContourComponent is dead");
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SketchEditor()
    {
        void __CreateAndDelete()
        {
            var ctx = Context.Current;
            ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
            var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
            Assert.That(sketchEditTool, Is.Not.Null);
            var sketch = sketchEditTool.Sketch;

            // Create segments
            sketchEditTool.StartSegmentCreation<SketchSegmentRectangleCreator>();
            ctx.ClickAt(100, 100);
            ctx.ClickAt(400, 400);

            // Create constraints
            ctx.ClickAt(100, 250);
            Assert.That(sketchEditTool.CreateConstraint<SketchConstraintVertical>().Count > 0);
            ctx.ClickAt(100, 250);
            Assert.That(sketchEditTool.CreateConstraint<SketchConstraintLength>().Count > 0);
            ctx.ClickAt(100, 250);
            ctx.ClickAt(250, 100, ModifierKeys.Shift);
            Assert.That(sketchEditTool.CreateConstraint<SketchConstraintEqual>().Count > 0);
            ctx.ClickAt(100, 250);
            ctx.ClickAt(400, 250, ModifierKeys.Shift);
            Assert.That(sketchEditTool.CreateConstraint<SketchConstraintParallel>().Count > 0);
            ctx.ClickAt(400, 250);
            ctx.ClickAt(250, 400, ModifierKeys.Shift);
            Assert.That(sketchEditTool.CreateConstraint<SketchConstraintEqual>().Count > 0);
            ctx.WorkspaceController.Invalidate(forceRedraw: true);

            ctx.WorkspaceController.CancelTool(sketchEditTool, false);
            Assert.That(ctx.WorkspaceController.CurrentTool?.CurrentAction, Is.Null);
            Assert.That(ctx.WorkspaceController.CurrentTool, Is.Null);

            InteractiveContext.Current.WorkspaceController.Delete();
            ctx.UndoHandler.UndoStack.Clear();
        }

        __CreateAndDelete();

        dotMemory.Check(memory =>
        {
            Assert.AreEqual(0, memory.ObjectsCount<SketchEditorTool>(), "Tool is still alive");
            Assert.AreEqual(0, memory.ObjectsCount<Sketch>(), "Sketch is still alive");
            Assert.AreEqual(0, memory.ObjectsCount<SketchSegmentLine>(), "SketchSegmentLine is still alive");
            Assert.AreEqual(0, memory.ObjectsCount<SketchConstraintPerpendicular>(), "SketchConstraintPerpendicular is still alive");
            Assert.AreEqual(0, memory.ObjectsCount<SketchEditorConstraintElement>(), "SketchEditorConstraintElement is still alive");
            Assert.AreEqual(0, memory.ObjectsCount<Marker>(), "Marker is still alive");
            Assert.AreEqual(0, memory.ObjectsCount<AIS_PointEx>(), "AIS_PointEx is still alive");
        });
    }
}