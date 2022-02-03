using System.IO;
using Macad.Test.Utils;
using Macad.Core.Shapes;
using Macad.Interaction.Editors.Shapes;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Multiply
{
    [TestFixture]
    public class MirrorTests
    {
        const string _BasePath = @"Interaction\Multiply\Mirror";

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
        public void CreateByFace()
        {
            var ctx = Context.Current;

            var body = TestGeomGenerator.CreateImprint().Body;

            ctx.ViewportController.ZoomFitAll();

            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.WorkspaceController.StartTool(new CreateMirrorTool(body));
            Assert.That(ctx.WorkspaceController.CurrentTool is CreateMirrorTool);

            Assert.Multiple(() =>
            {
                ctx.MoveTo(300, 350);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateByFace01"));

                ctx.ClickAt(300, 350);
                Assert.IsNull(ctx.WorkspaceController.CurrentTool);
                Assert.That(body.Shape is Mirror);

                ctx.MoveTo(0, 0);
                ctx.ViewportController.ZoomFitAll();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateByFace02"));
            });
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ReselectFace()
        {
            var ctx = Context.Current;

            var body = TestGeomGenerator.CreateImprint().Body;

            ctx.ViewportController.ZoomFitAll();

            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.WorkspaceController.StartTool(new CreateMirrorTool(body));
            Assert.That(ctx.WorkspaceController.CurrentTool is CreateMirrorTool);

            ctx.ClickAt(300, 350);
            var mirrorShape = body.Shape as Mirror;
            Assert.IsNotNull(mirrorShape);

            ctx.WorkspaceController.StartTool(new CreateMirrorTool(mirrorShape));
            ctx.ClickAt(140, 320);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ReselectFace01"));
        }

        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void Create2DByEdge()
        {
            var ctx = Context.Current;

            var body = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric, true).Body;

            ctx.ViewportController.ZoomFitAll();

            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.WorkspaceController.StartTool(new CreateMirrorTool(body));
            Assert.That(ctx.WorkspaceController.CurrentTool is CreateMirrorTool);

            Assert.Multiple(() =>
            {
                ctx.MoveTo(300, 209);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateByEdge01"));

                ctx.ClickAt(300, 209);
                Assert.IsNull(ctx.WorkspaceController.CurrentTool);
                Assert.That(body.Shape is Mirror);

                ctx.MoveTo(0, 0);
                ctx.ViewportController.ZoomFitAll();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateByEdge02"));
            });
        }
                
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void Reselect2DEdge()
        {
            var ctx = Context.Current;

            var body = TestSketchGenerator.CreateSketch(TestSketchGenerator.SketchType.SimpleAsymmetric, true).Body;

            ctx.ViewportController.ZoomFitAll();

            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.WorkspaceController.StartTool(new CreateMirrorTool(body));
            Assert.That(ctx.WorkspaceController.CurrentTool is CreateMirrorTool);

            ctx.ClickAt(300, 209);
            var mirrorShape = body.Shape as Mirror;
            Assert.IsNotNull(mirrorShape);

            ctx.WorkspaceController.StartTool(new CreateMirrorTool(mirrorShape));
            ctx.ClickAt(397, 311);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ReselectEdge01"));
        }
                
        //--------------------------------------------------------------------------------------------------

    }
}