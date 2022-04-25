using System.IO;
using Macad.Common;
using Macad.Core.Topology;
using Macad.Test.Utils;
using Macad.Interaction;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Common
{
    [TestFixture]
    public class AlignWorkingPlaneToolTests
    {
        const string _BasePath = @"Interaction\Common\AlignWorkingPlane";

        //--------------------------------------------------------------------------------------------------

        [SetUp]
        public void SetUp()
        {
            Context.InitWithView(500);
            var ctx = Context.Current;
            ctx.Workspace.GridEnabled = true;
            ctx.Workspace.V3dViewer.DisplayPrivilegedPlane(true);
        }

        [TearDown]
        public void TearDown()
        {
            Context.Current.Deinit();
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void AlignOnFace()
        {
            var ctx = Context.Current;

            var body = TestGeomGenerator.CreateImprint().Body;
            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.ViewportController.ZoomFitAll();

            Assert.Multiple(() =>
            {
                var tool = new AlignWorkingPlaneTool(AlignWorkingPlaneTool.AlignWorkingPlaneModes.All);
                Assert.That(ctx.WorkspaceController.StartTool(tool));

                ctx.MoveTo(350, 330);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AlignOnFace1"));

                ctx.SelectAt(350, 330);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AlignOnFace2"));
            });
        }

        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void AlignOnReversedFace()
        {
            var ctx = Context.Current;

            var body = TestGeomGenerator.CreateImprint().Body;
            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.ViewportController.ZoomFitAll();
            TransformUtils.Rotate(body, Ax1.OZ, 180.0.ToRad());

            Assert.Multiple(() =>
            {
                var tool = new AlignWorkingPlaneTool(AlignWorkingPlaneTool.AlignWorkingPlaneModes.All);
                Assert.That(ctx.WorkspaceController.StartTool(tool));

                ctx.MoveTo(350, 330);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AlignOnReversedFace1"));

                ctx.SelectAt(350, 330);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AlignOnReversedFace2"));
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void AlignOnEdge()
        {
            var ctx = Context.Current;

            var body = TestGeomGenerator.CreateBox().Body;
            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.ViewportController.ZoomFitAll();

            var tool = new AlignWorkingPlaneTool(AlignWorkingPlaneTool.AlignWorkingPlaneModes.All);
            Assert.That(ctx.WorkspaceController.StartTool(tool));

            ctx.MoveTo(174, 207);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AlignOnEdge1"));

            ctx.SelectAt(174, 207);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AlignOnEdge2"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void AlignOnVertex()
        {
            var ctx = Context.Current;

            var body = TestGeomGenerator.CreateBox().Body;
            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.ViewportController.ZoomFitAll();

            var tool = new AlignWorkingPlaneTool(AlignWorkingPlaneTool.AlignWorkingPlaneModes.All);
            Assert.That(ctx.WorkspaceController.StartTool(tool));

            ctx.MoveTo(250, 250);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AlignOnVertex1"));

            ctx.SelectAt(250, 250);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AlignOnVertex2"));
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SelectionFilter()
        {
            var ctx = Context.Current;

            var body = TestGeomGenerator.CreateImprint().Body;
            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.ViewportController.ZoomFitAll();

            var tool = new AlignWorkingPlaneTool(AlignWorkingPlaneTool.AlignWorkingPlaneModes.All);
            Assert.That(ctx.WorkspaceController.StartTool(tool));

            ctx.MoveTo(90, 250);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectionFilter1"));

            ctx.SelectAt(200, 277);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectionFilter2"));
        }

        //--------------------------------------------------------------------------------------------------
    }
}