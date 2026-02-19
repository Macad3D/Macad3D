using System.Collections.Generic;
using System.Linq;
using System.Windows.Input;
using Macad.Test.Utils;
using Macad.Core.Shapes;
using Macad.Interaction;
using Macad.Interaction.Editors.Shapes;
using Macad.Interaction.Editors.Toolkits;
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
        MemoryAssert.IsCollected(() =>
        {
            var ctx = Context.Current;
            var tool = new CreateBoxTool();
            ctx.WorkspaceController.StartTool(tool);
            var action1 = tool.CurrentAction;
            ctx.ClickAt(50, 250);
            var action2 = tool.CurrentAction;
            ctx.ClickAt(450, 250);
            var action3 = tool.CurrentAction;
            ctx.ClickAt(450, 200);
            Assume.That(ctx.WorkspaceController.CurrentTool?.CurrentAction, Is.Null);
            Assume.That(ctx.WorkspaceController.CurrentTool, Is.Null);

            return [tool, action1, action2, action3];
        });
    }

    //--------------------------------------------------------------------------------------------------
                
    [Test]
    public void CreateBoxCancelled()
    {
        MemoryAssert.IsCollected(() =>
        {
            var ctx = Context.Current;
            var tool = new CreateBoxTool();
            ctx.WorkspaceController.StartTool(tool);
            var action1 = tool.CurrentAction;
            ctx.ClickAt(50, 250);
            ctx.WorkspaceController.Invalidate(forceRedraw: true);
            var action2 = tool.CurrentAction;
            ctx.ClickAt(450, 250);
            ctx.WorkspaceController.Invalidate(forceRedraw: true);
            var action3 = tool.CurrentAction;
            ctx.MoveTo(450, 200);
            var visObj = ctx.WorkspaceController.VisualObjects.GetAll().First();
            ctx.WorkspaceController.CancelTool(ctx.WorkspaceController.CurrentTool, false);
            ctx.WorkspaceController.Invalidate(forceRedraw: true);
            Assume.That(ctx.WorkspaceController.CurrentTool?.CurrentAction, Is.Null);
            Assume.That(ctx.WorkspaceController.CurrentTool, Is.Null);

            return [tool, action1, action2, action3, visObj];
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateCylinder()
    {
        MemoryAssert.IsCollected(() =>
        {
            var ctx = Context.Current;
            var tool = new CreateCylinderTool();
            ctx.WorkspaceController.StartTool(tool);
            var action1 = tool.CurrentAction;
            ctx.ClickAt(250, 250);
            var action2 = tool.CurrentAction;
            ctx.ClickAt(450, 250);
            var action3 = tool.CurrentAction;
            ctx.ClickAt(450, 200);
            Assume.That(ctx.WorkspaceController.CurrentTool?.CurrentAction, Is.Null);
            Assume.That(ctx.WorkspaceController.CurrentTool, Is.Null);

            return [tool, action1, action2, action3];
        });
    }

    //--------------------------------------------------------------------------------------------------
                
    [Test]
    public void CreateCylinderCancelled()
    {
        MemoryAssert.IsCollected(() =>
        {
            var ctx = Context.Current;
            var tool = new CreateBoxTool();
            ctx.WorkspaceController.StartTool(tool);
            var action1 = tool.CurrentAction;
            ctx.ClickAt(250, 250);
            ctx.WorkspaceController.Invalidate(forceRedraw: true);
            var action2 = tool.CurrentAction;
            ctx.ClickAt(450, 250);
            ctx.WorkspaceController.Invalidate(forceRedraw: true);
            var action3 = tool.CurrentAction;
            ctx.MoveTo(450, 200);
            var visObj = ctx.WorkspaceController.VisualObjects.GetAll().First();
            ctx.WorkspaceController.CancelTool(ctx.WorkspaceController.CurrentTool, false);
            ctx.WorkspaceController.Invalidate(forceRedraw: true);
            Assume.That(ctx.WorkspaceController.CurrentTool?.CurrentAction, Is.Null);
            Assume.That(ctx.WorkspaceController.CurrentTool, Is.Null);

            return [tool, action1, action2, action3, visObj];
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateSphere()
    {
        MemoryAssert.IsCollected(() =>
        {
            var ctx = Context.Current;
            var tool = new CreateSphereTool();
            ctx.WorkspaceController.StartTool(tool);
            var action1 = tool.CurrentAction;
            ctx.ClickAt(250, 250);
            var action2 = tool.CurrentAction;
            ctx.ClickAt(450, 250);
            Assume.That(ctx.WorkspaceController.CurrentTool?.CurrentAction, Is.Null);
            Assume.That(ctx.WorkspaceController.CurrentTool, Is.Null);

            return [tool, action1, action2];
        });
    }
           
    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void CreateSphereCancelled()
    {
        MemoryAssert.IsCollected(() =>
        {
            var ctx = Context.Current;
            var tool = new CreateBoxTool();
            ctx.WorkspaceController.StartTool(tool);
            var action1 = tool.CurrentAction;
            ctx.ClickAt(250, 250);
            ctx.WorkspaceController.Invalidate(forceRedraw: true);
            var action2 = tool.CurrentAction;
            ctx.MoveTo(450, 200);
            var visObj = ctx.WorkspaceController.VisualObjects.GetAll().First();
            ctx.WorkspaceController.CancelTool(ctx.WorkspaceController.CurrentTool, false);
            ctx.WorkspaceController.Invalidate(forceRedraw: true);
            Assume.That(ctx.WorkspaceController.CurrentTool?.CurrentAction, Is.Null);
            Assume.That(ctx.WorkspaceController.CurrentTool, Is.Null);

            return [tool, action1, action2, visObj];
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateSliceContour()
    {
        MemoryAssert.IsCollected(() =>
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
            Assume.That(ctx.WorkspaceController.CurrentTool?.CurrentAction, Is.Null);
            Assume.That(ctx.WorkspaceController.CurrentTool, Is.Null);

            return tool;
        });
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateEtchingMask()
    {
        MemoryAssert.IsCollected(() =>
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
            Assume.That(ctx.WorkspaceController.CurrentTool?.CurrentAction, Is.Null);
            Assume.That(ctx.WorkspaceController.CurrentTool, Is.Null);

            return tool;
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SketchEditor()
    {
        MemoryAssert.IsCollected(() =>
        {
            List<object> objectsToCheck = new();
            var ctx = Context.Current;
            ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
            var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
            Assume.That(sketchEditTool, Is.Not.Null);
            objectsToCheck.Add(sketchEditTool);
            var sketch = sketchEditTool.Sketch;
            objectsToCheck.Add(sketch);

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
            ctx.ClickAt(250, 100, ModifierKeys.Shift);
            Assume.That(sketchEditTool.CreateConstraint<SketchConstraintEqual>().Count > 0);
            ctx.ClickAt(100, 250);
            ctx.ClickAt(400, 250, ModifierKeys.Shift);
            Assume.That(sketchEditTool.CreateConstraint<SketchConstraintParallel>().Count > 0);
            ctx.ClickAt(400, 250);
            ctx.ClickAt(250, 400, ModifierKeys.Shift);
            Assume.That(sketchEditTool.CreateConstraint<SketchConstraintEqual>().Count > 0);
            ctx.WorkspaceController.Invalidate(forceRedraw: true);

            objectsToCheck.AddRange(sketch.Segments.Values);
            objectsToCheck.AddRange(sketch.Constraints);
            var constraintElements = sketchEditTool.Elements.ConstraintElements;
            objectsToCheck.AddRange(constraintElements);
            var constraintVisuals = constraintElements.SelectMany(elem => elem.VisualObjects);
            objectsToCheck.AddRange(constraintVisuals);
            objectsToCheck.AddRange(constraintVisuals.Select(visObj => visObj.AisObject));

            ctx.WorkspaceController.CancelTool(sketchEditTool, false);
            Assume.That(ctx.WorkspaceController.CurrentTool?.CurrentAction, Is.Null);
            Assume.That(ctx.WorkspaceController.CurrentTool, Is.Null);

            InteractiveContext.Current.WorkspaceController.Delete();
            ctx.UndoHandler.UndoStack.Clear();

            return objectsToCheck;
        });
    }
}