using System.IO;
using Macad.Test.Utils;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Editors.Shapes;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Primitives2D.Sketch
{
    [TestFixture]
    public class CreateSketchTests
    {
        const string _BasePath = @"Interaction\Primitives2D\Sketch\Create";

        //--------------------------------------------------------------------------------------------------

        [SetUp]
        public void SetUp()
        {
            Context.InitWithView(500);
            Context.Current.Workspace.GridEnabled = true;
        }

        [TearDown]
        public void TearDown()
        {
            Context.Current.Deinit();
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void CreateSketchInXY()
        {
            var ctx = Context.Current;

            ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
            var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
            Assert.That(sketchEditTool, Is.Not.Null);

            Assert.Multiple(() =>
            {
                // Create Circle
                sketchEditTool.StartSegmentCreation<SketchSegmentCircleCreator>();
                ctx.ClickAt(250, 250); // Center point
                ctx.ClickAt(100, 250); // Rim point
                ctx.MoveTo(50, 50); // Move crsr out of the way
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateSketchInXY1"));

                // Leave editor
                sketchEditTool.Stop();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateSketchInXY2"));

                // Selectable
                ctx.MoveTo(100, 250); // Rim point
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateSketchInXY3"));
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void CreateSketchOnFace()
        {
            var ctx = Context.Current;

            var body = TestGeomGenerator.CreateBox().Body;
            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.ViewportController.ZoomFitAll();

            var sketchEditTool = new CreateSketchTool(CreateSketchTool.CreateMode.Interactive);
            Assert.That(ctx.WorkspaceController.StartTool(sketchEditTool));
            Assert.That(sketchEditTool, Is.Not.Null);

            Assert.Multiple(() =>
            {
                ctx.MoveTo(90, 250);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateSketchOnFace1"));

                ctx.SelectAt(90, 250);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateSketchOnFace2"));
                Assert.That(ctx.WorkspaceController.CurrentTool, Is.TypeOf(typeof(SketchEditorTool)));
            });
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void CreateOnFaceSelectionFilter()
        {
            var ctx = Context.Current;

            var body = TestGeomGenerator.CreateImprint().Body;
            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.ViewportController.ZoomFitAll();

            var sketchEditTool = new CreateSketchTool(CreateSketchTool.CreateMode.Interactive);
            Assert.That(ctx.WorkspaceController.StartTool(sketchEditTool));
            Assert.That(sketchEditTool, Is.Not.Null);

            Assert.Multiple(() =>
            {
                ctx.MoveTo(200, 277);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateOnFaceSelectionFilter1"));

                ctx.MoveTo(220, 265);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateOnFaceSelectionFilter2"));
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void CreateSketchOnBoundFace()
        {
            var ctx = Context.Current;

            var box = Box.Create(10, 20, 2);
            var body = Body.Create(box);
            body.Position = new Pnt(5, 5, 0);
            var flange = FlangeSheet.Create(body, new SubshapeReference(SubshapeType.Face, box.Guid, 2), 45);
            flange.Reverse = true;

            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.ViewportController.ZoomFitAll();

            var createImprintTool = new CreateImprintTool(body, Imprint.ImprintMode.Cutout);
            Assert.That(ctx.WorkspaceController.StartTool(createImprintTool));
            Assert.That(createImprintTool, Is.Not.Null);

            Assert.Multiple(() =>
            {
                ctx.MoveTo(180, 180);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateSketchOnBoundFace01"));

                ctx.SelectAt(180, 180);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateSketchOnBoundFace02"));
                var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
                Assert.That(sketchEditTool, Is.Not.Null);

                sketchEditTool.StartSegmentCreation<SketchSegmentCircleCreator>();
                ctx.ClickAt(250, 250); // Center point
                ctx.ClickAt(200, 250); // Rim point
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateSketchOnBoundFace03"));
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void EmptySketchMarker()
        {
            var ctx = Context.Current;

            ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
            var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
            Assert.That(sketchEditTool, Is.Not.Null);
            var sketch = sketchEditTool.Sketch;

            Assert.Multiple(() =>
            {
                // In Editor, no marker
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EmptySketchMarker01"));
                sketchEditTool.Stop();

                // Out of Editor, marker
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EmptySketchMarker02"));

                // Enter editor, no marker
                sketchEditTool = new SketchEditorTool(sketch);
                ctx.WorkspaceController.StartTool(sketchEditTool);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EmptySketchMarker01"));

                // Create Circle, no marker
                sketchEditTool.StartSegmentCreation<SketchSegmentCircleCreator>();
                ctx.ClickAt(200, 200); // Center point
                ctx.MoveTo(100, 100);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EmptySketchMarker03"));
                ctx.ClickAt(100, 250); // Rim point
                ctx.MoveTo(50, 50); // Move crsr out of the way
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EmptySketchMarker04"));

                // Leave editor, no marker
                sketchEditTool.Stop();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EmptySketchMarker05"));
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SegmentsVisibleOverClippedObjects()
        {
            var ctx = Context.Current;

            var box = Box.Create(10, 10, 2);
            var body = Body.Create(box);

            ctx.ViewportController.ZoomFitAll();

            ctx.WorkspaceController.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
            var sketchEditTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
            Assert.That(sketchEditTool, Is.Not.Null);

            Assert.Multiple(() =>
            {
                // Create Circle
                sketchEditTool.StartSegmentCreation<SketchSegmentCircleCreator>();
                ctx.ClickAt(250, 250); // Center point
                ctx.ClickAt(100, 250); // Rim point
                ctx.MoveTo(50, 50); // Move crsr out of the way
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SegmentsVisibleOverClippedObjects1"));
            });

        }

        //--------------------------------------------------------------------------------------------------

    }
}