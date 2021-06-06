using System.IO;
using System.Threading;
using Macad.Core;
using Macad.Test.Utils;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Editors.Shapes;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Modify
{
    [TestFixture]
    public class ImprintToolTests
    {
        const string _BasePath = @"Interaction\Modify\Imprint";

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
        public void CreateImprint()
        {
            var ctx = Context.Current;

            var body = TestGeomGenerator.CreateBox().Body;
            TransformUtils.Translate(body, new Vec(10, 10, 0));
            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.ViewportController.ZoomFitAll();

            var tool = new CreateImprintTool(body);
            Assert.That(ctx.WorkspaceController.StartTool(tool));

            ctx.MoveTo(90, 250);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Create1"));

            ctx.SelectAt(90, 250);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Create2"));
            Assert.That(ctx.WorkspaceController.CurrentTool, Is.TypeOf(typeof(SketchEditorTool)));
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SelectionFilterOnCreate()
        {
            var ctx = Context.Current;

            var body = TestGeomGenerator.CreateImprint().Body;
            TransformUtils.Translate(body, new Vec(10, 10, 0));
            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.ViewportController.ZoomFitAll();

            var tool = new CreateImprintTool(body);
            Assert.That(ctx.WorkspaceController.StartTool(tool));

            ctx.MoveTo(90, 250);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectionFilterOnCreate1"));

            ctx.MoveTo(200, 277);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectionFilterOnCreate2"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ImprintReselectTargetFace()
        {
            var ctx = Context.Current;
            var body = TestGeomGenerator.CreateBox().Body;
            TransformUtils.Translate(body, new Vec(10, 10, 0));
            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.ViewportController.ZoomFitAll();

            // Build imprint
            var tool = new CreateImprintTool(body);
            Assume.That(ctx.WorkspaceController.StartTool(tool));
            ctx.SelectAt(90, 250);
            var sketchTool = ctx.WorkspaceController.CurrentTool as SketchEditorTool;
            Assume.That(sketchTool != null);

            Assert.Multiple(() =>
            {
                sketchTool.StartSegmentCreation<SketchSegmentCircleCreator>();
                ctx.SelectAt(250, 250);
                ctx.SelectAt(150, 250);
                sketchTool.Stop();
                ctx.MoveTo(250, 250);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ReselectTargetFace1"));

                // Start reselection, then cancel it
                ctx.WorkspaceController.StartTool(new CreateImprintTool(body.Shape as Imprint));
                ctx.MoveTo(300, 250);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ReselectTargetFace2"));
                ctx.WorkspaceController.CancelTool(ctx.WorkspaceController.CurrentTool, true);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ReselectTargetFace4"));

                // Start reselection, perform
                ctx.WorkspaceController.StartTool(new CreateImprintTool(body.Shape as Imprint));
                ctx.SelectAt(300, 250);
                AssertHelper.IsSameViewport(@Path.Combine(_BasePath, "ReselectTargetFace3"));
                Assert.IsNull(ctx.WorkspaceController.CurrentTool);
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        [Apartment(System.Threading.ApartmentState.STA)]
        public void SketchPropertyPanels()
        {
            var ctx = Context.Current;
            var propPanels = ctx.EnablePropertyPanels();
            
            var body = TestGeomGenerator.CreateBox().Body;
            TransformUtils.Translate(body, new Vec(10, 10, 0));
            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.ViewportController.ZoomFitAll();

            var tool = new CreateImprintTool(body);
            Assert.That(ctx.WorkspaceController.StartTool(tool));
            ctx.SelectAt(90, 250);
            Assert.IsInstanceOf<SketchEditorTool>(ctx.WorkspaceController.CurrentTool);

            // Body, BodyShape, Imprint, Sketch, SketchPoints, SketchSegments, SketchConstraints
            Assert.AreEqual(7, propPanels.Count);
        }

        //--------------------------------------------------------------------------------------------------

    }
}