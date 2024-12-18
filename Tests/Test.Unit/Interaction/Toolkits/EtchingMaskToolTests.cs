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

namespace Macad.Test.Unit.Interaction.Toolkits;

[TestFixture]
public class EtchingMaskToolTests
{
    const string _BasePath = @"Interaction\Toolkits\EtchingMask";

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
            
        Assert.IsTrue(ToolboxCommands.CreateEtchingMask.CanExecute());
        ToolboxCommands.CreateEtchingMask.Execute();

        var tool = ctx.WorkspaceController.CurrentTool as EtchingMaskEditTool;
        Assert.IsNotNull(tool);

        Assert.AreEqual(1, body.Components.Count);
        var component = body.Components[0] as EtchingMaskComponent;
        Assert.IsNotNull(component);
        Assert.AreEqual(2, component.LayerCount);
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
            Assert.IsTrue(ToolboxCommands.CreateEtchingMask.CanExecute());
            ToolboxCommands.CreateEtchingMask.Execute();

            // Check tool, it should automatically show the reconstructed version
            var tool = ctx.WorkspaceController.CurrentTool as EtchingMaskEditTool;
            Assert.IsNotNull(tool);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ShowReconstructed02"));

            // Deselect
            ToolboxCommands.CreateEtchingMask.Execute();
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
        Assert.That(body != null);
        ctx.Document.Add(body);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.WorkspaceController.Selection.SelectEntity(body);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ShowReconstructed01"));

            // Start tool
            Assert.IsTrue(ToolboxCommands.CreateEtchingMask.CanExecute());
            ToolboxCommands.CreateEtchingMask.Execute();

            // Check tool, it should automatically show the reconstructed version
            var tool = ctx.WorkspaceController.CurrentTool as EtchingMaskEditTool;
            Assert.IsNotNull(tool);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ShowReconstructed02"));

            // Edit layer count
            tool.Component.LayerCount = 1;
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ShowReconstructed03"));

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
        Assert.IsTrue(ToolboxCommands.CreateEtchingMask.CanExecute());
        ToolboxCommands.CreateEtchingMask.Execute();

        var tool = ctx.WorkspaceController.CurrentTool as EtchingMaskEditTool;
        Assert.IsNotNull(tool);
        Assert.IsNotNull(ctx.WorkspaceController.CurrentTool.CurrentAction);

        // Check selection filter
        ctx.MoveTo(150, 300);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "NoAutoFaceDetection02"));

        ctx.MoveTo(250, 250);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "NoAutoFaceDetection01"));

        ctx.ClickAt(250, 250);
        Assert.IsNull(ctx.WorkspaceController.CurrentTool.CurrentAction);

        var component = body.FindComponent<EtchingMaskComponent>();
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
            Assert.IsTrue(ToolboxCommands.CreateEtchingMask.CanExecute());
            ToolboxCommands.CreateEtchingMask.Execute();
            ctx.MoveTo(200, 350);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectionContext01"));

            // Deselect
            ToolboxCommands.CreateEtchingMask.Execute();
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
        Assert.IsTrue(ToolboxCommands.CreateEtchingMask.CanExecute());
        ToolboxCommands.CreateEtchingMask.Execute();
        var tool = ctx.WorkspaceController.CurrentTool as EtchingMaskEditTool;
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
        Assert.IsTrue(ToolboxCommands.CreateEtchingMask.CanExecute());
        ToolboxCommands.CreateEtchingMask.Execute();
        var tool = ctx.WorkspaceController.CurrentTool as EtchingMaskEditTool;
        Assert.IsNotNull(tool);
        Assert.IsTrue(tool.Component.IsValid);

        tool.ToggleFaceSelection();
        tool.Cancel(false);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ReselectCanceled01"));
    }

    //--------------------------------------------------------------------------------------------------

}