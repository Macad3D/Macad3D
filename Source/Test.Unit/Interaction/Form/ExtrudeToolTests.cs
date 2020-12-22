using System.IO;
using Macad.Test.Utils;
using Macad.Core.Shapes;
using Macad.Interaction.Editors.Shapes;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Form
{
    [TestFixture]
    public class ExtrudeToolTests
    {
        const string _BasePath = @"Interaction\Form\Extrude";

        //--------------------------------------------------------------------------------------------------

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
        public void CreateExtrude()
        {
            var ctx = Context.Current;

            var sketch = TestGeomGenerator.CreateSketch();
            var body = TestGeomGenerator.CreateBody(sketch, new Pnt(10, 10, 0));
            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.ViewportController.ZoomFitAll();
            ctx.MoveTo(90, 250);

            var tool = new CreateExtrudeTool(body);
            Assert.That(ctx.WorkspaceController.StartTool(tool));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateExtrude01"));
            Assert.That(ctx.WorkspaceController.CurrentTool, Is.Null);
        }

        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void CreateExtrudeSolid()
        {
            var ctx = Context.Current;

            var shape = TestGeomGenerator.CreateImprint();
            ctx.WorkspaceController.Selection.SelectEntity(shape.Body);
            ctx.ViewportController.ZoomFitAll();
            ctx.MoveTo(90, 250);

            var tool = new CreateExtrudeTool(shape.Body);
            Assert.That(ctx.WorkspaceController.StartTool(tool));
            ctx.MoveTo(90, 250);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateExtrudeSolid01"));

            ctx.SelectAt(90, 260);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateExtrudeSolid02"));
            var extrude = shape.Body.Shape as Extrude;
            Assert.IsNotNull( extrude );
            Assert.That(ctx.WorkspaceController.CurrentTool, Is.Null);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ReselectExtrudeSolid()
        {
            var ctx = Context.Current;

            var shape = TestGeomGenerator.CreateImprint();
            ctx.WorkspaceController.Selection.SelectEntity(shape.Body);
            ctx.ViewportController.ZoomFitAll();
            ctx.MoveTo(90, 250);

            var tool = new CreateExtrudeTool(shape.Body);
            Assert.That(ctx.WorkspaceController.StartTool(tool));
            ctx.SelectAt(90, 260);
            var extrude = shape.Body.Shape as Extrude;
            Assert.IsNotNull( extrude );
            Assert.That(ctx.WorkspaceController.CurrentTool, Is.Null);

            tool = new CreateExtrudeTool(extrude);
            Assert.That(ctx.WorkspaceController.StartTool(tool));
            ctx.SelectAt(250, 250);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateExtrudeSolid10"));
            Assert.That(ctx.WorkspaceController.CurrentTool, Is.Null);
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ExtrudeFromNotSelectable()
        {
            var ctx = Context.Current;

            var sketch = TestGeomGenerator.CreateSketch();
            var body = TestGeomGenerator.CreateBody(sketch, new Pnt(10, 10, 0));
            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.ViewportController.ZoomFitAll();
            ctx.WorkspaceController.Invalidate(false, true);

            // Create Extrude from sketch
            var tool = new CreateExtrudeTool(body);
            Assert.That(ctx.WorkspaceController.StartTool(tool));
            Assert.That(ctx.WorkspaceController.CurrentTool, Is.Null);
            ctx.WorkspaceController.Invalidate(false, true);

            // Make sure that the whole shape is selectable
            ctx.WorkspaceController.Selection.SelectEntity(null);
            ctx.WorkspaceController.Invalidate(false, true);
            ctx.SelectAt(250, 250);
            Assert.AreEqual(1, ctx.WorkspaceController.Selection.SelectedEntities.Count);
        }

        //--------------------------------------------------------------------------------------------------
        
    }
}