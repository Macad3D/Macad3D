using System.IO;
using Macad.Test.Utils;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Editors.Shapes;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Modify
{
    [TestFixture]
    public class BooleanToolTests
    {
        const string _BasePath = @"Interaction\Modify\Boolean";

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
        public void CommonSimple()
        {
            var ctx = Context.Current;

            var body1 = _CreateBodies(true);
            ctx.ViewportController.ZoomFitAll();

            // Select First
            ctx.SelectAt(220, 200);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelected"));

            // Hilight Second
            ctx.WorkspaceController.StartTool(new BooleanOperationTool(BooleanOperationTool.Operations.Common));
            ctx.MoveTo(230, 330);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SecondHiglighted"));

            // Select Second
            ctx.SelectAt(230, 330);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CommonSimple"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void CommonPreselect()
        {
            var ctx = Context.Current;

            var body1 = _CreateBodies(true);
            ctx.ViewportController.ZoomFitAll();

            // Select First
            ctx.SelectAt(220, 200);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelected"));

            // Select Second
            ctx.SelectAt(230, 330, true);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "TwoSelected"));

            // Select Third
            ctx.SelectAt(350, 150, true);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ThreeSelected"));

            // Do it
            ctx.WorkspaceController.StartTool(new BooleanOperationTool(BooleanOperationTool.Operations.Common));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CommonPreselect"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void CutSimple()
        {
            var ctx = Context.Current;

            var body1 = _CreateBodies(true);
            ctx.ViewportController.ZoomFitAll();

            // Select First
            ctx.SelectAt(220, 200);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelected"));

            // Hilight Second
            ctx.WorkspaceController.StartTool(new BooleanOperationTool(BooleanOperationTool.Operations.Cut));
            ctx.MoveTo(230, 330);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SecondHiglighted"));

            // Select Second
            ctx.SelectAt(230, 330);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CutSimple"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void CutPreselect()
        {
            var ctx = Context.Current;

            var body1 = _CreateBodies(true);
            ctx.ViewportController.ZoomFitAll();

            // Select First
            ctx.SelectAt(220, 200);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelected"));

            // Select Second
            ctx.SelectAt(230, 330, true);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "TwoSelected"));

            // Select Third
            ctx.SelectAt(350, 150, true);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ThreeSelected"));

            // Do it
            ctx.WorkspaceController.StartTool(new BooleanOperationTool(BooleanOperationTool.Operations.Cut));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CutPreselect"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void FuseSimple()
        {
            var ctx = Context.Current;

            var body1 = _CreateBodies(true);
            ctx.ViewportController.ZoomFitAll();

            // Select First
            ctx.SelectAt(220, 200);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelected"));

            // Hilight Second
            ctx.WorkspaceController.StartTool(new BooleanOperationTool(BooleanOperationTool.Operations.Fuse));
            ctx.MoveTo(230, 330);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SecondHiglighted"));

            // Select Second
            ctx.SelectAt(230, 330);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FuseSimple"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void FusePreselect()
        {
            var ctx = Context.Current;

            var body1 = _CreateBodies(true);
            ctx.ViewportController.ZoomFitAll();

            // Select First
            ctx.SelectAt(220, 200);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelected"));

            // Select Second
            ctx.SelectAt(230, 330, true);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "TwoSelected"));

            // Select Third
            ctx.SelectAt(350, 150, true);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ThreeSelected"));

            // Do it
            ctx.WorkspaceController.StartTool(new BooleanOperationTool(BooleanOperationTool.Operations.Fuse));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FusePreselect"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void Undo()
        {
            var ctx = Context.Current;

            var body1 = _CreateBodies(true);
            ctx.Document.UndoHandler.Commit();
            ctx.ViewportController.ZoomFitAll();

            // Use Boolean Tool
            ctx.SelectAt(220, 200);
            ctx.WorkspaceController.StartTool(new BooleanOperationTool(BooleanOperationTool.Operations.Common));
            ctx.SelectAt(230, 330);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CommonSimple"));

            // Undo
            Assert.That(ctx.Document.UndoHandler.CanUndo);
            ctx.Document.UndoHandler.DoUndo(1);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Undo"));
        }

        //--------------------------------------------------------------------------------------------------

        Body _CreateBodies(bool bigsize)
        {
            var target = Body.Create(new Box()
            {
                DimensionX = 20,
                DimensionY = 20,
                DimensionZ = 10,
            });
            target.Position = new Pnt(10, 10, 0);

            var operands = new IShapeOperand[2];
            var body = Body.Create(new Cylinder()
            {
                Radius = bigsize ? 20 : 10,
                Height = 15
            });
            body.Position = new Pnt(0, 10, 0);
            operands[0] = new BodyShapeOperand(body);

            body = Body.Create(new Sphere()
            {
                Radius = 15
            });
            body.Position = new Pnt(10, 10, 5);

            return target;
        }

        //--------------------------------------------------------------------------------------------------

    }
}