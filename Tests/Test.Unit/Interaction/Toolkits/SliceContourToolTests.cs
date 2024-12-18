using System.IO;
using System.Windows.Input;
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

namespace Macad.Test.Unit.Interaction.Toolkits;

[TestFixture]
public class SliceContourToolTests
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
        Assert.That(body != null);
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
        Assert.That(body != null);
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

            // Turn off and on again
            tool.ShowReconstruction = false;
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ShowReconstructed04"));
            tool.ShowReconstruction = true;
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ShowReconstructed02"));

            // Highlight
            ctx.MoveTo(192, 347);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ShowReconstructed03"));
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
    public void RestoreReconstructSetting()
    {
        Context.InitWithView(500);
        var ctx = Context.Current;
        var body = TestGeomGenerator.CreateImprint()?.Body;
        Assert.That(body != null);
        ctx.Document.Add(body);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            // Set reconstruction to false
            ctx.WorkspaceController.Selection.SelectEntity(body);
            Assert.IsTrue(ToolboxCommands.CreateSliceContour.CanExecute());
            ToolboxCommands.CreateSliceContour.Execute();
            var tool = ctx.WorkspaceController.CurrentTool as SliceContourEditTool;
            Assert.IsNotNull(tool);
            tool.ShowReconstruction = false;
            tool.Stop();
                
            // Check of reconstruction setting is restored next time the editor is started
            Assert.IsTrue(ToolboxCommands.CreateSliceContour.CanExecute());
            ToolboxCommands.CreateSliceContour.Execute();
            tool = ctx.WorkspaceController.CurrentTool as SliceContourEditTool;
            Assert.IsNotNull(tool);
            Assert.IsFalse(tool.ShowReconstruction);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void UpdateOnChanges()
    {
        Context.InitWithView(500);
        var ctx = Context.Current;
        var body = TestGeomGenerator.CreateImprint()?.Body;
        Assert.That(body != null);
        ctx.Document.Add(body);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.WorkspaceController.Selection.SelectEntity(body);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "UpdateOnChanges01"));

            // Start tool
            Assert.IsTrue(ToolboxCommands.CreateSliceContour.CanExecute());
            ToolboxCommands.CreateSliceContour.Execute();

            // Check tool, it should automatically show the reconstructed version
            var tool = ctx.WorkspaceController.CurrentTool as SliceContourEditTool;
            Assert.IsNotNull(tool);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "UpdateOnChanges02"));

            // Edit layer count
            tool.Component.LayerCount = 4;
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "UpdateOnChanges03"));
            tool.Component.LayerCount = 1;

            // Edit box size
            var box = body.Shape.Predecessor as Box;
            box.DimensionX = 8;
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "UpdateOnChanges04"));

            // Move body
            body.Position = new Pnt(1, 0, 0);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "UpdateOnChanges05"));

            // Change body layer
            var layer = new Layer();
            layer.Color = new Color(0, 1, 0);
            ctx.Layers.Add(layer);
            body.Layer = layer;
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "UpdateOnChanges06"));
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
        Assert.IsNotNull(ctx.WorkspaceController.CurrentTool.CurrentAction);
            
        // Check selection filter
        ctx.MoveTo(150, 300);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "NoAutoFaceDetection02"));

        ctx.MoveTo(250, 250);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "NoAutoFaceDetection01"));

        ctx.ClickAt(250, 250);

        // Component should exist, even if it can not work correctly
        var component = body.FindComponent<SliceContourComponent>();
        Assert.That(component, Is.Not.Null);
        Assert.That(component.IsValid, Is.True);
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SelectionContext()
    {
        Context.InitWithView(500);
        var ctx = Context.Current;
        var body = TestGeomGenerator.CreateImprint()?.Body;
        Assert.That(body != null);
        ctx.Document.Add(body);

        var otherBody = TestGeomGenerator.CreateBox()?.Body;
        Assert.That(otherBody != null);
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

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("Ensure face selection on other source shapes than the current.")]
    public void ReselectWithDifferentShape()
    {
        var ctx = Context.InitWithView(500);
        var box = TestGeomGenerator.CreateBox();
        var array = LinearArray.Create(box.Body);
        array.Quantity1 = 1;
        array.Quantity2 = 3;

        ctx.ViewportController.ZoomFitAll();

        // Start tool
        ctx.WorkspaceController.Selection.SelectEntity(box.Body);
        Assert.IsTrue(ToolboxCommands.CreateSliceContour.CanExecute());
        ToolboxCommands.CreateSliceContour.Execute();
        var tool = ctx.WorkspaceController.CurrentTool as SliceContourEditTool;
        Assert.IsNotNull(tool);
        Assert.IsTrue(tool.Component.IsValid);

        tool.Component.ShapeGuid = box.Guid;
        tool.ToggleFaceSelection();
        ctx.ClickAt(150,100);
        Assert.IsTrue(tool.Component.IsValid);
        Assert.AreEqual(box.Guid, tool.Component.ReferenceFace.ShapeId);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ReselectCanceled()
    {
        var ctx = Context.InitWithView(500);
        var box = TestGeomGenerator.CreateBox();
        box.DimensionZ = 5;

        ctx.ViewportController.ZoomFitAll();

        // Start tool
        ctx.WorkspaceController.Selection.SelectEntity(box.Body);
        Assert.IsTrue(ToolboxCommands.CreateSliceContour.CanExecute());
        ToolboxCommands.CreateSliceContour.Execute();
        var tool = ctx.WorkspaceController.CurrentTool as SliceContourEditTool;
        Assert.IsNotNull(tool);
        Assert.IsTrue(tool.Component.IsValid);

        tool.ToggleFaceSelection();
        tool.Cancel(false);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ReselectCanceled01"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MoveLayer()
    {
        Context.InitWithView(500);
        var ctx = Context.Current;
        var imprint = TestGeomGenerator.CreateImprint();
        imprint.Depth = 10;
        var body = imprint.Body;
        Assert.That(body != null);
        ctx.ViewportController.ZoomFitAll();

        ctx.WorkspaceController.Selection.SelectEntity(body);
        Assert.IsTrue(ToolboxCommands.CreateSliceContour.CanExecute());
        ToolboxCommands.CreateSliceContour.Execute();
        var tool = ctx.WorkspaceController.CurrentTool as SliceContourEditTool;
        tool.Component.LayerCount = 3;
        Assert.IsNotNull(tool);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(298, 308);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MoveLayer01"));
            ctx.ViewportController.MouseDown();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MoveLayer02"));
            Assert.IsTrue(ctx.TestHudManager.HintMessage.Contains("interval"));

            ctx.MoveTo(298, 270);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MoveLayer03"));

            ctx.ViewportController.MouseUp();
            Assert.IsNull(ctx.TestHudManager.HintMessage);
            Assert.IsNull(ctx.TestHudManager.CurrentCursor);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MoveLayer04"));
        });
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void MoveSubsequentLayer()
    {
        Context.InitWithView(500);
        var ctx = Context.Current;
        var imprint = TestGeomGenerator.CreateImprint();
        imprint.Depth = 10;
        var body = imprint.Body;
        Assert.That(body != null);
        ctx.ViewportController.ZoomFitAll();

        ctx.WorkspaceController.Selection.SelectEntity(body);
        Assert.IsTrue(ToolboxCommands.CreateSliceContour.CanExecute());
        ToolboxCommands.CreateSliceContour.Execute();
        var tool = ctx.WorkspaceController.CurrentTool as SliceContourEditTool;
        tool.Component.LayerCount = 3;
        Assert.IsNotNull(tool);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(298, 308);
            ctx.ViewportController.MouseDown();
            Assert.IsTrue(ctx.TestHudManager.HintMessage.Contains("interval"));

            ctx.MoveTo(298, 280, ModifierKeys.Shift);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MoveSubsequentLayer03"));

            ctx.ViewportController.MouseUp();
        });
    }

    //--------------------------------------------------------------------------------------------------
                
    [Test]
    public void MoveLayerClamp()
    {
        Context.InitWithView(500);
        var ctx = Context.Current;
        ctx.Workspace.GridStep = 1.0;
        var imprint = TestGeomGenerator.CreateImprint();
        imprint.Depth = 10;
        var body = imprint.Body;
        Assert.That(body != null);
        ctx.ViewportController.ZoomFitAll();

        ctx.WorkspaceController.Selection.SelectEntity(body);
        Assert.IsTrue(ToolboxCommands.CreateSliceContour.CanExecute());
        ToolboxCommands.CreateSliceContour.Execute();
        var tool = ctx.WorkspaceController.CurrentTool as SliceContourEditTool;
        tool.Component.LayerCount = 3;
        Assert.IsNotNull(tool);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(298, 308);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(298, 280, ModifierKeys.Control);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MoveLayerClamp03"));
            Assert.AreEqual(7.0, tool.Component.CustomLayerInterval[1]);

            ctx.ViewportController.MouseUp();
        });
    }

    //--------------------------------------------------------------------------------------------------
                        
    [Test]
    public void MoveLayerLowerLimit()
    {
        Context.InitWithView(500);
        var ctx = Context.Current;
        var imprint = TestGeomGenerator.CreateImprint();
        imprint.Depth = 10;
        var body = imprint.Body;
        Assert.That(body != null);
        ctx.ViewportController.ZoomFitAll();

        ctx.WorkspaceController.Selection.SelectEntity(body);
        Assert.IsTrue(ToolboxCommands.CreateSliceContour.CanExecute());
        ToolboxCommands.CreateSliceContour.Execute();
        var tool = ctx.WorkspaceController.CurrentTool as SliceContourEditTool;
        tool.Component.LayerCount = 3;
        Assert.IsNotNull(tool);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(358, 383);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(358, 420);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MoveLayerLowerLimit01"));
            Assert.AreEqual(0.0, tool.Component.CustomLayerInterval[0]);

            ctx.ViewportController.MouseUp();
        });
    }

    //--------------------------------------------------------------------------------------------------
                                
    [Test]
    public void MoveLayerUpperLimit()
    {
        Context.InitWithView(500);
        var ctx = Context.Current;
        var imprint = TestGeomGenerator.CreateImprint();
        imprint.Depth = 10;
        var body = imprint.Body;
        Assert.That(body != null);
        ctx.ViewportController.ZoomFitAll();

        ctx.WorkspaceController.Selection.SelectEntity(body);
        Assert.IsTrue(ToolboxCommands.CreateSliceContour.CanExecute());
        ToolboxCommands.CreateSliceContour.Execute();
        var tool = ctx.WorkspaceController.CurrentTool as SliceContourEditTool;
        tool.Component.LayerCount = 3;
        Assert.IsNotNull(tool);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(358, 383);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(358, 300);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MoveLayerUpperLimit01"));
            Assert.AreEqual(0.0, tool.Component.CustomLayerInterval[1]);

            ctx.ViewportController.MouseUp();
        });
    }

    //--------------------------------------------------------------------------------------------------

}