using System.IO;
using Macad.Test.Utils;
using Macad.Core.Shapes;
using Macad.Interaction.Editors.Shapes;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Modify
{
    [TestFixture]
    public class TaperToolTests
    {
        const string _BasePath = @"Interaction\Modify\Taper";

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
        public void CreateWithEdge()
        {
            var ctx = Context.Current;

            var body = TestGeomGenerator.CreateBox().Body;
            body.Translate(new Vec(10, 10, 0));
            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.ViewportController.ZoomFitAll();

            var tool = new CreateTaperTool(body);
            Assert.That(ctx.WorkspaceController.StartTool(tool));

            Assert.Multiple(() =>
            {
                // Select face
                ctx.MoveTo(90, 250);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateWithEdge1"));
                ctx.SelectAt(90, 250);

                // Select edge
                ctx.MoveTo(150, 190);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateWithEdge2"));
                ctx.SelectAt(150, 190);

                // Finished
                Assert.IsNull(ctx.WorkspaceController.CurrentTool);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateWithEdge3"));
            });
        }

        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void CreateWithVertex()
        {
            var ctx = Context.Current;

            var body = TestGeomGenerator.CreateBox().Body;
            body.Translate(new Vec(10, 10, 0));
            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.ViewportController.ZoomFitAll();

            var tool = new CreateTaperTool(body);
            Assert.That(ctx.WorkspaceController.StartTool(tool));

            Assert.Multiple(() =>
            {
                // Select face
                ctx.SelectAt(90, 250);

                // Select vertex
                ctx.MoveTo(250, 250);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateWithVertex2"));
                ctx.SelectAt(250, 250);

                // Finished
                Assert.IsNull(ctx.WorkspaceController.CurrentTool);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateWithVertex3"));
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ReselectEdge()
        {
            var ctx = Context.Current;

            var body = TestGeomGenerator.CreateBox().Body;
            body.Translate(new Vec(10, 10, 0));
            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.ViewportController.ZoomFitAll();

            var tool = new CreateTaperTool(body);
            Assert.That(ctx.WorkspaceController.StartTool(tool));

            // Select face and edge
            ctx.SelectAt(90, 250);
            ctx.SelectAt(150, 190);
            Assert.IsNull(ctx.WorkspaceController.CurrentTool);

            Assert.Multiple(() =>
            {
                tool = new CreateTaperTool(body.Shape as Taper);
                Assert.That(ctx.WorkspaceController.StartTool(tool));

                // Select face
                ctx.MoveTo(350, 300);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ReselectEdge1"));
                ctx.SelectAt(350, 300);

                // Select edge
                ctx.SelectAt(446, 242);
                Assert.IsNull(ctx.WorkspaceController.CurrentTool);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ReselectEdge3"));
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SelectOnlyFaceEdges()
        {
            var ctx = Context.Current;

            var body = TestGeomGenerator.CreateBox().Body;
            body.Translate(new Vec(10, 10, 0));
            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.ViewportController.ZoomFitAll();

            var tool = new CreateTaperTool(body);
            Assert.That(ctx.WorkspaceController.StartTool(tool));

            Assert.Multiple(() =>
            {
                // Select face
                ctx.SelectAt(90, 250);

                // Hilight edge of face
                ctx.MoveTo(150, 190);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectOnlyFaceEdges1"));

                // Ignore other edge
                ctx.MoveTo(446, 242);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectOnlyFaceEdges2"));
            });
        }

        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void SelectNoSeamEdges()
        {
            var ctx = Context.Current;

            var body = TestGeomGenerator.CreateCylinder().Body;
            body.Translate(new Vec(10, 10, 0));
            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.ViewportController.ZoomFitAll();

            var tool = new CreateTaperTool(body);
            Assert.That(ctx.WorkspaceController.StartTool(tool));

            Assert.Multiple(() =>
            {
                // Select face
                ctx.SelectAt(90, 250);

                ctx.MoveTo(150, 190);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectNoSeamEdges1"));
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void TakeEdgeParameter()
        {
            var ctx = Context.Current;

            var body = TestGeomGenerator.CreateCylinder().Body;
            body.Translate(new Vec(10, 10, 0));
            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.ViewportController.ZoomFitAll();

            var tool = new CreateTaperTool(body);
            Assert.That(ctx.WorkspaceController.StartTool(tool));

            Assert.Multiple(() =>
            {
                ctx.SelectAt(250, 180); // Select face
                ctx.SelectAt(250, 277); // Select edge
                Assert.IsNull(ctx.WorkspaceController.CurrentTool);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "TakeEdgeParameter1"));

                tool = new CreateTaperTool(body.Shape as Taper);
                Assert.That(ctx.WorkspaceController.StartTool(tool));
                ctx.SelectAt(250, 180); // Select face
                ctx.SelectAt(350, 112); // Select edge
                Assert.IsNull(ctx.WorkspaceController.CurrentTool);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "TakeEdgeParameter2"));
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void FirstParameterNotNull()
        {
            // Issue: If first parameter of the edge is not null, the calculated location was not correct
            var ctx = Context.Current;

            var body = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "BoxJointShape_Source.brep"));
            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.ViewportController.ZoomFitAll();

            var tool = new CreateTaperTool(body);
            Assert.That(ctx.WorkspaceController.StartTool(tool));

            Assert.Multiple(() =>
            {
                ctx.SelectAt(250, 180); // Select face

                ctx.MoveTo(168, 190); // Highlight edge
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstParameterNotNull1"));
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void VertexConcave()
        {
            // If the vertex is a concave corner, check direction
            var ctx = Context.Current;

            var body = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "BoxJointShape_Source.brep"));
            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.ViewportController.ZoomFitAll();

            var tool = new CreateTaperTool(body);
            Assert.That(ctx.WorkspaceController.StartTool(tool));

            Assert.Multiple(() =>
            {
                ctx.SelectAt(250, 180); // Select face

                ctx.MoveTo(353, 136); // Highlight vertex
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "VertexConcave1"));
            });
        }

        //--------------------------------------------------------------------------------------------------

    }
}