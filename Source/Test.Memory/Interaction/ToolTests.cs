using System.Windows;
using JetBrains.dotMemoryUnit;
using Macad.Test.Utils;
using Macad.Core.Shapes;
using Macad.Core.Toolkits;
using Macad.Interaction;
using Macad.Interaction.Editors.Shapes;
using Macad.Interaction.Editors.Toolkits;
using Macad.Interaction.Visual;
using Macad.Occt.Ext;
using Macad.Test.Memory.TestHelper;
using NUnit.Framework;

namespace Macad.Test.Memory.Interaction
{
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
                ctx.ViewportController.MouseUp(false);
                ctx.ViewportController.MouseMove(new Point(450, 250));
                ctx.ViewportController.MouseDown();
                ctx.ViewportController.MouseUp(false);
                ctx.ViewportController.MouseMove(new Point(450, 200));
                ctx.ViewportController.MouseDown();
                ctx.ViewportController.MouseUp(false);
                ctx.ViewportController.MouseMove(new Point(0, 0));

                Assume.That(ctx.WorkspaceController.CurrentToolAction, Is.Null);
                Assume.That(ctx.WorkspaceController.CurrentTool, Is.Null);
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
        public void CreateCylinder()
        {
            void __CreateAndReleaseTool()
            {
                var ctx = Context.Current;

                ctx.WorkspaceController.StartTool(new CreateCylinderTool());
                ctx.ViewportController.MouseMove(new Point(250, 250));
                ctx.ViewportController.MouseDown();
                ctx.ViewportController.MouseUp(false);
                ctx.ViewportController.MouseMove(new Point(450, 250));
                ctx.ViewportController.MouseDown();
                ctx.ViewportController.MouseUp(false);
                ctx.ViewportController.MouseMove(new Point(450, 200));
                ctx.ViewportController.MouseDown();
                ctx.ViewportController.MouseUp(false);
                ctx.ViewportController.MouseMove(new Point(0, 0));

                Assume.That(ctx.WorkspaceController.CurrentToolAction, Is.Null);
                Assume.That(ctx.WorkspaceController.CurrentTool, Is.Null);
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
        public void CreateSphere()
        {
            void __CreateAndReleaseTool()
            {
                var ctx = Context.Current;

                ctx.WorkspaceController.StartTool(new CreateSphereTool());
                ctx.ViewportController.MouseMove(new Point(250, 250));
                ctx.ViewportController.MouseDown();
                ctx.ViewportController.MouseUp(false);
                ctx.ViewportController.MouseMove(new Point(450, 250));
                ctx.ViewportController.MouseDown();
                ctx.ViewportController.MouseUp(false);
                ctx.ViewportController.MouseMove(new Point(0, 0));

                Assume.That(ctx.WorkspaceController.CurrentToolAction, Is.Null);
                Assume.That(ctx.WorkspaceController.CurrentTool, Is.Null);
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
        public void CreateSliceContour()
        {
            void __CreateAndReleaseTool()
            {
                var ctx = Context.Current;
                var body = TestGeomGenerator.CreateImprint()?.Body;
                Assume.That(body != null);
                ctx.Document.Add(body);
                ctx.WorkspaceController.Selection.SelectEntity(body);
            
                Assume.That(ToolboxCommands.CreateSliceContour.CanExecute());
                ToolboxCommands.CreateSliceContour.Execute();

                var tool = ctx.WorkspaceController.CurrentTool as SliceContourEditTool;
                Assume.That(tool, Is.Not.Null);

                ctx.WorkspaceController.CancelTool(tool, false);
                Assume.That(ctx.WorkspaceController.CurrentToolAction, Is.Null);
                Assume.That(ctx.WorkspaceController.CurrentTool, Is.Null);
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
                Assume.That(body != null);
                ctx.Document.Add(body);
                ctx.WorkspaceController.Selection.SelectEntity(body);
            
                Assume.That(ToolboxCommands.CreateEtchingMask.CanExecute());
                ToolboxCommands.CreateEtchingMask.Execute();

                var tool = ctx.WorkspaceController.CurrentTool as EtchingMaskEditTool;
                Assume.That(tool, Is.Not.Null);

                ctx.WorkspaceController.CancelTool(tool, false);
                Assume.That(ctx.WorkspaceController.CurrentToolAction, Is.Null);
                Assume.That(ctx.WorkspaceController.CurrentTool, Is.Null);
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
                Assume.That(sketchEditTool, Is.Not.Null);
                var sketch = sketchEditTool.Sketch;

                // Create segments
                sketchEditTool.StartSegmentCreation<SketchSegmentRectangleCreator>();
                ctx.ClickAt(100, 100);
                ctx.ClickAt(400, 400);

                // Create constraints
                ctx.ClickAt(100, 250);
                Assume.That(sketchEditTool.CreateConstraint<SketchConstraintVertical>().Count > 0);
                ctx.ClickAt(100, 250);
                Assume.That(sketchEditTool.CreateConstraint<SketchConstraintLength>().Count > 0);
                ctx.ClickAt(100, 250);
                ctx.ClickAt(250, 100, true);
                Assume.That(sketchEditTool.CreateConstraint<SketchConstraintEqual>().Count > 0);
                ctx.ClickAt(100, 250);
                ctx.ClickAt(400, 250, true);
                Assume.That(sketchEditTool.CreateConstraint<SketchConstraintParallel>().Count > 0);
                ctx.ClickAt(400, 250);
                ctx.ClickAt(250, 400, true);
                Assume.That(sketchEditTool.CreateConstraint<SketchConstraintEqual>().Count > 0);
                ctx.WorkspaceController.Invalidate(forceRedraw: true);

                ctx.WorkspaceController.CancelTool(sketchEditTool, false);
                Assume.That(ctx.WorkspaceController.CurrentToolAction, Is.Null);
                Assume.That(ctx.WorkspaceController.CurrentTool, Is.Null);

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
}