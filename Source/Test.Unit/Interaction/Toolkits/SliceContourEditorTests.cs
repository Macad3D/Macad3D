using System.IO;
using Macad.Test.Utils;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Toolkits;
using Macad.Core.Topology;
using Macad.Interaction;
using Macad.Interaction.Editors.Toolkits;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Toolkits
{
    [TestFixture]
    public class SliceContourEditorTests
    {
        const string _BasePath = @"Interaction\Toolkits\SliceContour";

        //--------------------------------------------------------------------------------------------------

        [TearDown]
        public void TearDown()
        {
            Context.Current.Deinit();
        }

        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void CreateComponent()
        {
            Context.InitWithDefault();

            var ctx = Context.Current;
            var body = TestGeomGenerator.CreateImprint()?.Body;
            Assume.That(body != null);
            ctx.Document.Add(body);
            ctx.WorkspaceController.Selection.SelectEntity(body);
            
            Assert.IsTrue(ToolboxCommands.CreateSliceContour.CanExecute());
            ToolboxCommands.CreateSliceContour.Execute();

            var tool = ctx.WorkspaceController.CurrentTool as SliceContourEditTool;
            Assert.IsNotNull(tool);

            Assert.AreEqual(1, body.Components.Count);
            var component = body.Components[0] as SliceContourComponent;
            Assert.IsNotNull(component);
            Assert.AreEqual(1, component.LayerCount);
        }

        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void ShowReconstructed()
        {
            Context.InitWithView(500);
            var ctx = Context.Current;
            var body = TestGeomGenerator.CreateImprint()?.Body;
            Assume.That(body != null);
            ctx.Document.Add(body);
            ctx.ViewportController.ZoomFitAll();

            Assert.Multiple(() =>
            {
                ctx.WorkspaceController.Selection.SelectEntity(body);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ShowReconstructed01"));

                // Start tool
                Assert.IsTrue(ToolboxCommands.CreateSliceContour.CanExecute());
                ToolboxCommands.CreateSliceContour.Execute();

                // Check tool, it should automatically show the reconstructed version
                var tool = ctx.WorkspaceController.CurrentTool as SliceContourEditTool;
                Assert.IsNotNull(tool);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ShowReconstructed02"));

                // No highlight
                ctx.MoveTo(192, 347);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ShowReconstructed02"));
                ctx.MoveTo(0, 0);

                // Deselect
                ToolboxCommands.CreateSliceContour.Execute();
                Assert.IsNull(ctx.WorkspaceController.CurrentTool);

                // Body must be the original and not be selected
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ShowReconstructed01"));
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void UpdateOnChanges()
        {
            Context.InitWithView(500);
            var ctx = Context.Current;
            var body = TestGeomGenerator.CreateImprint()?.Body;
            Assume.That(body != null);
            ctx.Document.Add(body);
            ctx.ViewportController.ZoomFitAll();

            Assert.Multiple(() =>
            {
                ctx.WorkspaceController.Selection.SelectEntity(body);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ShowReconstructed01"));

                // Start tool
                Assert.IsTrue(ToolboxCommands.CreateSliceContour.CanExecute());
                ToolboxCommands.CreateSliceContour.Execute();

                // Check tool, it should automatically show the reconstructed version
                var tool = ctx.WorkspaceController.CurrentTool as SliceContourEditTool;
                Assert.IsNotNull(tool);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ShowReconstructed02"));

                // Edit layer count
                tool.Component.LayerCount = 4;
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ShowReconstructed03"));
                tool.Component.LayerCount = 1;

                // Edit box size
                var box = body.Shape.Predecessor as Box;
                box.DimensionX = 8;
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ShowReconstructed04"));

                // Move body
                body.Position = new Pnt(1, 0, 0);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ShowReconstructed05"));

                // Change body layer
                var layer = new Layer();
                layer.Color = new Color(0, 1, 0);
                ctx.Layers.Add(layer);
                body.Layer = layer;
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ShowReconstructed06"));
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void NoAutoFaceDetection()
        {
            Context.InitWithView(500);
            var ctx = Context.Current;
            // Create a shape with a planar face, but without an opposite face
            var cylinder = Cylinder.Create(10, 10);
            var body = Body.Create(cylinder);
            var face = cylinder.GetSubshapeReference(SubshapeType.Face, 1);
            var edge = cylinder.GetSubshapeReference(SubshapeType.Edge, 0);
            var taper = Taper.Create(cylinder.Body, face, edge, 22.5);
            taper.BaseParameter = 0.0;
            Assert.IsTrue(taper.Make(Shape.MakeFlags.None));
            
            ctx.Document.Add(body);
            ctx.ViewportController.ZoomFitAll();

            // Start tool
            ctx.WorkspaceController.Selection.SelectEntity(body);
            Assert.IsTrue(ToolboxCommands.CreateSliceContour.CanExecute());
            ToolboxCommands.CreateSliceContour.Execute();

            var tool = ctx.WorkspaceController.CurrentTool as SliceContourEditTool;
            Assert.IsNotNull(tool);
            Assert.IsNotNull(ctx.WorkspaceController.CurrentToolAction);
            
            // Check selection filter
            ctx.MoveTo(150, 300);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "NoAutoFaceDetection02"));

            ctx.MoveTo(250, 250);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "NoAutoFaceDetection01"));

            ctx.ClickAt(250, 250);
            Assert.IsNull(ctx.WorkspaceController.CurrentToolAction);

            // Component should exist, even if it can not work correctly
            var component = body.FindComponent<SliceContourComponent>();
            Assert.IsNotNull(component);
            Assert.IsFalse(component.IsValid);
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SelectionContext()
        {
            Context.InitWithView(500);
            var ctx = Context.Current;
            var body = TestGeomGenerator.CreateImprint()?.Body;
            Assume.That(body != null);
            ctx.Document.Add(body);

            var otherBody = TestGeomGenerator.CreateBox()?.Body;
            Assume.That(otherBody != null);
            otherBody.Position = new Pnt(10, 0, 0);

            ctx.ViewportController.ZoomFitAll();

            Assert.Multiple(() =>
            {
                // Start tool
                ctx.WorkspaceController.Selection.SelectEntity(body);
                Assert.IsTrue(ToolboxCommands.CreateSliceContour.CanExecute());
                ToolboxCommands.CreateSliceContour.Execute();
                ctx.MoveTo(200, 350);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectionContext01"));

                // Deselect
                ToolboxCommands.CreateSliceContour.Execute();
                Assert.IsNull(ctx.WorkspaceController.CurrentTool);
                ctx.MoveTo(200, 351);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectionContext02"));
            });
        }
    }
}