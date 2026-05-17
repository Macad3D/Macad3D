using Macad.Common.Interop;
using Macad.Common.Serialization;
using Macad.Core;
using Macad.Interaction;
using Macad.Interaction.Editors.Shapes;
using Macad.Interaction.Panels;
using Macad.Test.Utils;
using NUnit.Framework;
using System;
using System.IO;
using System.Linq;
using System.Windows.Input;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Core.Topology;

namespace Macad.Test.Interaction.Infrastructure;

[TestFixture]
public class MultiViewportTests
{
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

    const string _BasePath = @"Interaction\Infrastructure\MultiViewport";

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SerializeSingleLayout()
    {
        IViewportFrame frame = ViewportLayoutBuilder.Build(ViewportLayoutBuilder.Layout.Single, InteractiveContext.Current.Workspace);
        string serialized = Serializer.Serialize(frame);
        Assert.That(serialized, Is.Not.Null.Or.Empty);

        IViewportFrame deserialized = Serializer.Deserialize<IViewportFrame>(serialized);
        Assert.That(deserialized, Is.Not.Null);
        Assert.That(deserialized, Is.TypeOf<ViewportContentFrame>());
        Assert.That(deserialized.GetContentFrames().Max(frame => frame.ViewportIndex), Is.EqualTo(0));
        Assert.That(deserialized.GetContentFrame(0), Is.TypeOf<ViewportContentFrame>());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SerializeHorDualLayout()
    {
        IViewportFrame frame = ViewportLayoutBuilder.Build(ViewportLayoutBuilder.Layout.DualHorizontal, InteractiveContext.Current.Workspace);
        string serialized = Serializer.Serialize(frame);
        Assert.That(serialized, Is.Not.Null.Or.Empty);

        IViewportFrame deserialized = Serializer.Deserialize<IViewportFrame>(serialized);
        Assert.That(deserialized, Is.Not.Null);
        Assert.That(deserialized, Is.TypeOf<ViewportHorizontalSplitFrame>());
        Assert.That(deserialized.GetContentFrames().Max(frame => frame.ViewportIndex), Is.EqualTo(1));
        Assert.That(deserialized.GetContentFrame(0), Is.TypeOf<ViewportContentFrame>());
        Assert.That(deserialized.GetContentFrame(1), Is.TypeOf<ViewportContentFrame>());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SerializeVerDualLayout()
    {
        IViewportFrame frame = ViewportLayoutBuilder.Build(ViewportLayoutBuilder.Layout.DualVertical, InteractiveContext.Current.Workspace);
        string serialized = Serializer.Serialize(frame);
        Assert.That(serialized, Is.Not.Null.Or.Empty);

        IViewportFrame deserialized = Serializer.Deserialize<IViewportFrame>(serialized);
        Assert.That(deserialized, Is.Not.Null);
        Assert.That(deserialized, Is.TypeOf<ViewportVerticalSplitFrame>());
        Assert.That(deserialized.GetContentFrames().Max(frame => frame.ViewportIndex), Is.EqualTo(1));
        Assert.That(deserialized.GetContentFrame(0), Is.TypeOf<ViewportContentFrame>());
        Assert.That(deserialized.GetContentFrame(1), Is.TypeOf<ViewportContentFrame>());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SerializeQuadLayout()
    {
        IViewportFrame frame = ViewportLayoutBuilder.Build(ViewportLayoutBuilder.Layout.Quad, InteractiveContext.Current.Workspace);
        string serialized = Serializer.Serialize(frame);
        Assert.That(serialized, Is.Not.Null.Or.Empty);

        IViewportFrame deserialized = Serializer.Deserialize<IViewportFrame>(serialized);
        Assert.That(deserialized, Is.Not.Null);
        Assert.That(deserialized, Is.TypeOf<ViewportQuadSplitFrame>());
        Assert.That(deserialized.GetContentFrames().Max(frame => frame.ViewportIndex), Is.EqualTo(3));
        Assert.That(deserialized.GetContentFrame(0), Is.TypeOf<ViewportContentFrame>());
        Assert.That(deserialized.GetContentFrame(1), Is.TypeOf<ViewportContentFrame>());
        Assert.That(deserialized.GetContentFrame(2), Is.TypeOf<ViewportContentFrame>());
        Assert.That(deserialized.GetContentFrame(3), Is.TypeOf<ViewportContentFrame>());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void InitialSingleLayout()
    {
        var ctx = Context.Current;

        TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        ctx.ViewportController.ZoomFitAll();

        var workspace = InteractiveContext.Current.Workspace;
        workspace.ViewportLayout = ViewportLayoutBuilder.Build(ViewportLayoutBuilder.Layout.Single, workspace);
        Assert.That(workspace.Viewports.Count, Is.EqualTo(1));
        Assert.That(workspace.Viewports[0].Name, Is.EqualTo("Main"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [TestCase(ViewportLayoutBuilder.Layout.DualHorizontal)]
    [TestCase(ViewportLayoutBuilder.Layout.DualVertical)]
    public void InitialDualLayout(ViewportLayoutBuilder.Layout layout)
    {
        var ctx = Context.Current;

        TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        ctx.ViewportController.ZoomFitAll();

        var workspace = InteractiveContext.Current.Workspace;
        workspace.ViewportLayout = ViewportLayoutBuilder.Build(layout, workspace);
        Assert.That(workspace.Viewports.Count, Is.EqualTo(2));
        Assert.That(workspace.Viewports[0].Name, Is.EqualTo("Main"));
        Assert.That(workspace.Viewports[1].Name, Is.EqualTo("Secondary"));

        AssertHelper.IsSameViewport(Path.Combine(_BasePath, $"InitialLayout_{layout}01"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [TestCase(ViewportLayoutBuilder.Layout.TripleLeft)]
    [TestCase(ViewportLayoutBuilder.Layout.TripleRight)]
    [TestCase(ViewportLayoutBuilder.Layout.TripleTop)]
    [TestCase(ViewportLayoutBuilder.Layout.TripleBottom)]
    public void InitialTripleLayout(ViewportLayoutBuilder.Layout layout)
    {
        var ctx = Context.Current;
        var viewportParameterSet = InteractiveContext.Current.Parameters.Get<ViewportParameterSet>();
        viewportParameterSet.ShowTrihedron = true;

        TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        ctx.ViewportController.ZoomFitAll();

        var workspace = InteractiveContext.Current.Workspace;
        workspace.ViewportLayout = ViewportLayoutBuilder.Build(layout, workspace);
        Assert.That(workspace.Viewports.Count, Is.EqualTo(3));
        Assert.That(workspace.Viewports[0].Name, Is.EqualTo("Main"));
        Assert.That(workspace.Viewports[1].Name, Is.EqualTo("Aux1"));
        switch (layout)
        {
            case ViewportLayoutBuilder.Layout.TripleRight:
            case ViewportLayoutBuilder.Layout.TripleLeft:
                Assert.That(workspace.Viewports[2].Name, Is.EqualTo("Aux3"));
                break;
            case ViewportLayoutBuilder.Layout.TripleTop:
            case ViewportLayoutBuilder.Layout.TripleBottom:
                Assert.That(workspace.Viewports[2].Name, Is.EqualTo("Aux2"));
                break;
        }

        AssertHelper.IsSameViewport(Path.Combine(_BasePath, $"InitialLayout_{layout}01"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [TestCase(ViewportLayoutBuilder.Layout.Quad)]
    [TestCase(ViewportLayoutBuilder.Layout.QuadRight)]
    [TestCase(ViewportLayoutBuilder.Layout.QuadLeft)]
    [TestCase(ViewportLayoutBuilder.Layout.QuadBottom)]
    [TestCase(ViewportLayoutBuilder.Layout.QuadTop)]
    public void InitialQuadLayout(ViewportLayoutBuilder.Layout layout)
    {
        var ctx = Context.Current;
        var viewportParameterSet = InteractiveContext.Current.Parameters.Get<ViewportParameterSet>();
        viewportParameterSet.ShowTrihedron = true;

        TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        ctx.ViewportController.ZoomFitAll();

        var workspace = InteractiveContext.Current.Workspace;
        workspace.ViewportLayout = ViewportLayoutBuilder.Build(layout, workspace);
        Assert.That(workspace.Viewports.Count, Is.EqualTo(4));
        Assert.That(workspace.Viewports[0].Name, Is.EqualTo("Main"));
        Assert.That(workspace.Viewports[1].Name, Is.EqualTo("Aux1"));
        Assert.That(workspace.Viewports[2].Name, Is.EqualTo("Aux2"));
        Assert.That(workspace.Viewports[3].Name, Is.EqualTo("Aux3"));

        AssertHelper.IsSameViewport(Path.Combine(_BasePath, $"InitialLayout_{layout}01"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [TestCase(ViewUtils.ViewForwardDirection.XPos)]
    [TestCase(ViewUtils.ViewForwardDirection.XNeg)]
    [TestCase(ViewUtils.ViewForwardDirection.YPos)]
    [TestCase(ViewUtils.ViewForwardDirection.YNeg)]
    public void InitialViewports(ViewUtils.ViewForwardDirection forwardDirection)
    {
        var ctx = Context.Current;
        var viewportParameterSet = InteractiveContext.Current.Parameters.Get<ViewportParameterSet>();
        viewportParameterSet.ForwardDirection = forwardDirection;
        viewportParameterSet.ShowTrihedron = true;
        viewportParameterSet.ShowViewCube = true;
        viewportParameterSet.ViewCubeSize = 100;

        TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        ctx.ViewportController.ZoomFitAll();

        var workspace = InteractiveContext.Current.Workspace;
        workspace.ViewportLayout = ViewportLayoutBuilder.Build(ViewportLayoutBuilder.Layout.Quad, workspace);
        Assert.That(workspace.Viewports.Count, Is.EqualTo(4));
        Assert.That(workspace.Viewports[0].Name, Is.EqualTo("Main"));
        Assert.That(workspace.Viewports[1].Name, Is.EqualTo("Aux1"));
        Assert.That(workspace.Viewports[2].Name, Is.EqualTo("Aux2"));
        Assert.That(workspace.Viewports[3].Name, Is.EqualTo("Aux3"));

        AssertHelper.IsSameViewport(Path.Combine(_BasePath, $"InitialViewports_{forwardDirection}01"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SwitchBetweenLayouts()
    {
        var ctx = Context.Current;

        TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            var workspaceController = InteractiveContext.Current.WorkspaceController;
            workspaceController.Workspace.ViewportLayout = ViewportLayoutBuilder.Build(ViewportLayoutBuilder.Layout.Single, workspaceController.Workspace);
            Assert.That(workspaceController.ViewportControllers.Count, Is.EqualTo(1));
            Assert.That(workspaceController.ViewportControllers[0].IsVisible, Is.True);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SwitchBetweenLayouts01"));

            workspaceController.Workspace.ViewportLayout = ViewportLayoutBuilder.Build(ViewportLayoutBuilder.Layout.DualHorizontal, InteractiveContext.Current.Workspace);
            Assert.That(workspaceController.ViewportControllers.Count, Is.EqualTo(2));
            Assert.That(workspaceController.ViewportControllers[0].IsVisible, Is.True);
            Assert.That(workspaceController.ViewportControllers[1].IsVisible, Is.True);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SwitchBetweenLayouts02"));

            workspaceController.Workspace.ViewportLayout = ViewportLayoutBuilder.Build(ViewportLayoutBuilder.Layout.Quad, InteractiveContext.Current.Workspace);
            Assert.That(workspaceController.ViewportControllers.Count, Is.EqualTo(5));
            Assert.That(workspaceController.ViewportControllers[0].IsVisible, Is.True);
            Assert.That(workspaceController.ViewportControllers[1].IsVisible, Is.False);
            Assert.That(workspaceController.ViewportControllers[2].IsVisible, Is.True);
            Assert.That(workspaceController.ViewportControllers[3].IsVisible, Is.True);
            Assert.That(workspaceController.ViewportControllers[4].IsVisible, Is.True);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SwitchBetweenLayouts03"));

            workspaceController.Workspace.ViewportLayout = ViewportLayoutBuilder.Build(ViewportLayoutBuilder.Layout.Single, InteractiveContext.Current.Workspace);
            Assert.That(workspaceController.ViewportControllers.Count, Is.EqualTo(5));
            Assert.That(workspaceController.ViewportControllers[0].IsVisible, Is.True);
            Assert.That(workspaceController.ViewportControllers[1].IsVisible, Is.False);
            Assert.That(workspaceController.ViewportControllers[2].IsVisible, Is.False);
            Assert.That(workspaceController.ViewportControllers[3].IsVisible, Is.False);
            Assert.That(workspaceController.ViewportControllers[4].IsVisible, Is.False);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SwitchBetweenLayouts01"));

            workspaceController.Workspace.ViewportLayout = ViewportLayoutBuilder.Build(ViewportLayoutBuilder.Layout.Quad, InteractiveContext.Current.Workspace);
            Assert.That(workspaceController.ViewportControllers.Count, Is.EqualTo(5));
            Assert.That(workspaceController.ViewportControllers[0].IsVisible, Is.True);
            Assert.That(workspaceController.ViewportControllers[1].IsVisible, Is.False);
            Assert.That(workspaceController.ViewportControllers[2].IsVisible, Is.True);
            Assert.That(workspaceController.ViewportControllers[3].IsVisible, Is.True);
            Assert.That(workspaceController.ViewportControllers[4].IsVisible, Is.True);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SwitchBetweenLayouts03"));

        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Hilight()
    {
        var ctx = Context.Current;

        _InitQuadView();
        ctx.ViewportController.Zoom(-5);

        Assert.Multiple(() =>
        {
            // Top Left
            ctx.MoveTo(40, 40);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Hilight01"));
            ctx.MoveTo(50, 120);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Hilight02"));

            // Top Right
            ctx.MoveTo(320, 40);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Hilight01"));
            ctx.MoveTo(300, 120);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Hilight02"));

            // Bottom Left
            ctx.MoveTo(40, 300);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Hilight01"));
            ctx.MoveTo(50, 380);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Hilight02"));

            // Bottom Right
            ctx.MoveTo(300, 300);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Hilight01"));
            ctx.MoveTo(375, 375);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Hilight02"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Select()
    {
        var ctx = Context.Current;

        _InitQuadView();

        Assert.Multiple(() =>
        {
            // Top Left
            ctx.ClickAt(150, 120);
            Assert.That(ctx.WorkspaceController.Selection.SelectedEntities.Count, Is.EqualTo(1));
            Assert.That(ctx.WorkspaceController.ViewportController, Is.EqualTo(ctx.WorkspaceController.GetViewportController(1)));
            ctx.ClickAt(40, 40);
            Assert.That(ctx.WorkspaceController.Selection.SelectedEntities.Count, Is.EqualTo(0));
            Assert.That(ctx.WorkspaceController.ViewportController, Is.EqualTo(ctx.WorkspaceController.GetViewportController(1)));

            // Top Right
            ctx.ClickAt(420, 120);
            Assert.That(ctx.WorkspaceController.Selection.SelectedEntities.Count, Is.EqualTo(1));
            Assert.That(ctx.WorkspaceController.ViewportController, Is.EqualTo(ctx.WorkspaceController.GetViewportController(2)));
            ctx.ClickAt(320, 40);
            Assert.That(ctx.WorkspaceController.Selection.SelectedEntities.Count, Is.EqualTo(0));
            Assert.That(ctx.WorkspaceController.ViewportController, Is.EqualTo(ctx.WorkspaceController.GetViewportController(2)));

            // Bottom Left
            ctx.ClickAt(150, 380);
            Assert.That(ctx.WorkspaceController.Selection.SelectedEntities.Count, Is.EqualTo(1));
            Assert.That(ctx.WorkspaceController.ViewportController, Is.EqualTo(ctx.WorkspaceController.GetViewportController(3)));
            ctx.ClickAt(24, 441);
            Assert.That(ctx.WorkspaceController.Selection.SelectedEntities.Count, Is.EqualTo(0));
            Assert.That(ctx.WorkspaceController.ViewportController, Is.EqualTo(ctx.WorkspaceController.GetViewportController(3)));

            // Bottom Right
            ctx.ClickAt(400, 350);
            Assert.That(ctx.WorkspaceController.Selection.SelectedEntities.Count, Is.EqualTo(1));
            Assert.That(ctx.WorkspaceController.ViewportController, Is.EqualTo(ctx.WorkspaceController.GetViewportController(0)));
            ctx.ClickAt(300, 300);
            Assert.That(ctx.WorkspaceController.Selection.SelectedEntities.Count, Is.EqualTo(0));
            Assert.That(ctx.WorkspaceController.ViewportController, Is.EqualTo(ctx.WorkspaceController.GetViewportController(0)));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ViewCube()
    {
        var ctx = Context.Current;

        var viewportParameterSet = InteractiveContext.Current.Parameters.Get<ViewportParameterSet>();
        viewportParameterSet.ShowTrihedron = true;
        viewportParameterSet.ShowViewCube = true;
        viewportParameterSet.ViewCubeSize = 100;

        _InitQuadView();

        Assert.Multiple(() =>
        {
            // Top Left
            ctx.ClickAt(40, 40);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ViewCube01"));

            // Bottom Right
            ctx.ClickAt(400, 350);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ViewCube02"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Resize()
    {
        var ctx = Context.Current;
        _InitQuadView();

        Win32Api.SetWindowPos(new(ctx.RenderWindow, ctx.RenderWindow.Handle), new(null, IntPtr.Zero), 0, 0, 600, 400, Win32Api.SWP_NOMOVE | Win32Api.SWP_NOZORDER);
        ctx.RenderWindow.Resize();
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Resize01"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MaximizeViewport()
    {
        var ctx = Context.Current;
        _InitQuadView();

        Assert.Multiple(() =>
        {
            ctx.WorkspaceController.ViewportLayoutManager.MaximizeViewport(ctx.WorkspaceController.GetViewportController(1));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MaximizeViewport01"));
            ctx.WorkspaceController.ViewportLayoutManager.MaximizeViewport(ctx.WorkspaceController.GetViewportController(3));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MaximizeViewport02"));
            ctx.WorkspaceController.ViewportLayoutManager.MaximizeViewport(null);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MaximizeViewport03"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MaximizeViewportCommand()
    {
        var ctx = Context.Current;
        var body = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        ctx.ViewportController.ZoomFitAll();


        Assert.Multiple(() =>
        {
            // Only when multi-view
            Assert.That(WorkspaceCommands.ToggleMaximizeViewport.CanExecute(), Is.False);
            ctx.Workspace.ViewportLayout = ViewportLayoutBuilder.Build(ViewportLayoutBuilder.Layout.Quad, ctx.Workspace);
            Assert.That(WorkspaceCommands.ToggleMaximizeViewport.CanExecute(), Is.True);

            // Toggle
            Assert.That(ctx.WorkspaceController.ViewportLayoutManager.HasMaximizedViewport, Is.False);
            WorkspaceCommands.ToggleMaximizeViewport.Execute();
            Assert.That(ctx.WorkspaceController.ViewportLayoutManager.HasMaximizedViewport, Is.True);
            WorkspaceCommands.ToggleMaximizeViewport.Execute();
            Assert.That(ctx.WorkspaceController.ViewportLayoutManager.HasMaximizedViewport, Is.False);
            WorkspaceCommands.ToggleMaximizeViewport.Execute();
            Assert.That(ctx.WorkspaceController.ViewportLayoutManager.HasMaximizedViewport, Is.True);

            // Reset by layout switch
            ctx.Workspace.ViewportLayout = ViewportLayoutBuilder.Build(ViewportLayoutBuilder.Layout.TripleBottom, ctx.Workspace);
            Assert.That(ctx.WorkspaceController.ViewportLayoutManager.HasMaximizedViewport, Is.False);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [TestCase(MouseButtons.Middle)]
    [TestCase(MouseButtons.Right)]
    [TestCase(MouseButtons.Left)]
    public void MoveMouseBeyondViewport(MouseButtons mouseButton)
    {
        var ctx = Context.Current;
        _InitQuadView();
        ctx.WorkspaceController.ViewportLayoutManager.SpacingBetweenViewports = 5;

        ctx.ClickAt(260, 270);
        Assert.That(ctx.ViewportController, Is.EqualTo(ctx.WorkspaceController.GetViewportController(0)));

        ctx.WorkspaceController.ViewportLayoutManager.FindViewport(new(260, 270), out var viewport, out var viewportPosition);
        ctx.MouseControl.MouseDown(viewport, viewportPosition, mouseButton, 1, mouseButton, ModifierKeys.None);
        ctx.MoveTo(200, 270, mouseButton);
        Assert.That(ctx.ViewportController, Is.EqualTo(ctx.WorkspaceController.GetViewportController(0)));
        ctx.MoveTo(200, 200, mouseButton);
        Assert.That(ctx.ViewportController, Is.EqualTo(ctx.WorkspaceController.GetViewportController(0)));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, $"MoveMouseBeyondViewport_{mouseButton}01"));

        // Move on space between viewports
        ctx.MoveTo(300, 250, mouseButton);
        Assert.That(ctx.ViewportController, Is.EqualTo(ctx.WorkspaceController.GetViewportController(0)));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, $"MoveMouseBeyondViewport_{mouseButton}02"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void TouchRotateBeyondViewport()
    {
        var ctx = Context.Current;
        _InitQuadView();
        ctx.WorkspaceController.ViewportLayoutManager.SpacingBetweenViewports = 5;

        ctx.ClickAt(260, 270);
        Assert.That(ctx.ViewportController, Is.EqualTo(ctx.WorkspaceController.GetViewportController(0)));

        Assert.Multiple(() =>
        {
            ctx.WorkspaceController.ViewportLayoutManager.FindViewport(new(260, 270), out var viewport, out var viewportPosition);
            ctx.TouchControl.TouchDown(0, viewport, viewportPosition, ModifierKeys.None);
            ctx.WorkspaceController.ViewportLayoutManager.FindViewport(new(200, 270), out viewport, out viewportPosition);
            ctx.TouchControl.TouchMove(0, viewport, viewportPosition, ModifierKeys.None);
            Assert.That(ctx.ViewportController, Is.EqualTo(ctx.WorkspaceController.GetViewportController(0)));

            ctx.WorkspaceController.ViewportLayoutManager.FindViewport(new(200, 200), out viewport, out viewportPosition);
            ctx.TouchControl.TouchMove(0, viewport, viewportPosition, ModifierKeys.None);
            Assert.That(ctx.ViewportController, Is.EqualTo(ctx.WorkspaceController.GetViewportController(0)));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "TouchRotateBeyondViewport01"));

            // Move on space between viewports
            ctx.WorkspaceController.ViewportLayoutManager.FindViewport(new(300, 250), out viewport, out viewportPosition);
            ctx.TouchControl.TouchMove(0, viewport, viewportPosition, ModifierKeys.None);
            Assert.That(ctx.ViewportController, Is.EqualTo(ctx.WorkspaceController.GetViewportController(0)));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "TouchRotateBeyondViewport02"));
        });
        ctx.TouchControl.TouchUp(0, null, new(), ModifierKeys.None);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void TouchPanBeyondViewport()
    {
        var ctx = Context.Current;
        _InitQuadView();
        ctx.WorkspaceController.ViewportLayoutManager.SpacingBetweenViewports = 5;

        ctx.ClickAt(260, 270);
        Assert.That(ctx.ViewportController, Is.EqualTo(ctx.WorkspaceController.GetViewportController(0)));

        Assert.Multiple(() =>
        {
            ctx.WorkspaceController.ViewportLayoutManager.FindViewport(new(260, 270), out var viewport, out var viewportPosition);
            ctx.TouchControl.TouchDown(0, viewport, viewportPosition, ModifierKeys.None);
            ctx.WorkspaceController.ViewportLayoutManager.FindViewport(new(260, 280), out viewport, out viewportPosition);
            ctx.TouchControl.TouchDown(1, viewport, viewportPosition, ModifierKeys.None);
            ctx.WorkspaceController.ViewportLayoutManager.FindViewport(new(100, 270), out viewport, out viewportPosition);
            ctx.TouchControl.TouchMove(0, viewport, viewportPosition, ModifierKeys.None);
            ctx.WorkspaceController.ViewportLayoutManager.FindViewport(new(100, 280), out viewport, out viewportPosition);
            ctx.TouchControl.TouchMove(1, viewport, viewportPosition, ModifierKeys.None);
            Assert.That(ctx.ViewportController, Is.EqualTo(ctx.WorkspaceController.GetViewportController(0)));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "TouchPanBeyondViewport01"));

            // Move on space between viewports
            ctx.WorkspaceController.ViewportLayoutManager.FindViewport(new(300, 249), out viewport, out viewportPosition);
            ctx.TouchControl.TouchMove(0, viewport, viewportPosition, ModifierKeys.None);
            ctx.WorkspaceController.ViewportLayoutManager.FindViewport(new(300, 251), out viewport, out viewportPosition);
            ctx.TouchControl.TouchMove(1, viewport, viewportPosition, ModifierKeys.None);
            Assert.That(ctx.ViewportController, Is.EqualTo(ctx.WorkspaceController.GetViewportController(0)));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "TouchPanBeyondViewport02"));
        });
        ctx.TouchControl.TouchUp(0, null, new(), ModifierKeys.None);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void TouchMultiPointDifferentViewport()
    {
        var ctx = Context.Current;
        _InitQuadView();
        ctx.WorkspaceController.ViewportLayoutManager.SpacingBetweenViewports = 5;

        ctx.ClickAt(260, 270);
        Assert.That(ctx.ViewportController, Is.EqualTo(ctx.WorkspaceController.GetViewportController(0)));

        Assert.Multiple(() =>
        {
            ctx.WorkspaceController.ViewportLayoutManager.FindViewport(new(275, 240), out var viewport, out var viewportPosition);
            ctx.TouchControl.TouchDown(0, viewport, viewportPosition, ModifierKeys.None);
            ctx.WorkspaceController.ViewportLayoutManager.FindViewport(new(275, 280), out viewport, out viewportPosition);
            ctx.TouchControl.TouchMove(0, viewport, viewportPosition, ModifierKeys.None);
            ctx.WorkspaceController.ViewportLayoutManager.FindViewport(new(275, 300), out viewport, out viewportPosition);
            ctx.TouchControl.TouchDown(1, viewport, viewportPosition, ModifierKeys.None);
            ctx.WorkspaceController.ViewportLayoutManager.FindViewport(new(275, 100), out viewport, out viewportPosition);
            ctx.TouchControl.TouchMove(0, viewport, viewportPosition, ModifierKeys.None);
            ctx.WorkspaceController.ViewportLayoutManager.FindViewport(new(275, 140), out viewport, out viewportPosition);
            ctx.TouchControl.TouchMove(1, viewport, viewportPosition, ModifierKeys.None);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "TouchMultiPointDifferentViewport01"));
        });
        ctx.TouchControl.TouchUp(0, null, new(), ModifierKeys.None);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void PointAction()
    {
        var ctx = Context.Current;
        _InitQuadView();

        ctx.WorkspaceController.StartTool(new CreateBoxTool());

        Assert.Multiple(() =>
        {
            // Corner 1
            ctx.MoveTo(375, 473);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "PointAction01"));
            ctx.ClickAt(375, 473);

            // Corner 2
            ctx.MoveTo(212, 286);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "PointAction02"));
            ctx.ClickAt(212, 286);

            // Height
            ctx.ClickAt(464, 60);

            var box = (ctx.WorkspaceController.Selection.SelectedEntities.FirstOrDefault() as Body)?.Shape as Box;
            Assert.That(box, Is.Not.Null);
            Assert.That(box.DimensionX, Is.EqualTo(22).Within(0.5));
            Assert.That(box.DimensionY, Is.EqualTo(22).Within(0.5));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AxisValueAction()
    {
        var ctx = Context.Current;
        _InitQuadView();

        ctx.WorkspaceController.StartTool(new CreateBoxTool());

        Assert.Multiple(() =>
        {
            // Corners
            ctx.ClickAt(375, 473);
            ctx.ClickAt(212, 286);

            // Height
            ctx.MoveTo(461, 73);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AxisValueAction01"));
            ctx.ClickAt(461, 73);

            var box = (ctx.WorkspaceController.Selection.SelectedEntities.FirstOrDefault() as Body)?.Shape as Box;
            Assert.That(box, Is.Not.Null);
            Assert.That(box.DimensionX, Is.EqualTo(22).Within(0.5));
            Assert.That(box.DimensionY, Is.EqualTo(22).Within(0.5));
            Assert.That(box.DimensionZ, Is.EqualTo(10).Within(0.5));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Snap3DToGrid()
    {
        var ctx = Context.Current;
        _InitQuadView();

        ctx.Workspace.GridEnabled = true;
        ctx.Workspace.GridStep = 1.0;
        ctx.EditorState.SnapToGridSelected = true;
        ctx.EditorState.SnapToEdgeSelected = false;
        ctx.EditorState.SnapToVertexSelected = false;
        ctx.EditorState.SnappingEnabled = true;
        ctx.WorkspaceController.StartTool(new CreateBoxTool());

        Assert.Multiple(() =>
        {
            // Corner 1
            ctx.MoveTo(375, 473);
            ctx.ClickAt(375, 473);

            // Corner 2
            ctx.MoveTo(212, 286);
            ctx.ClickAt(212, 286);

            // Height
            ctx.ClickAt(464, 60);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Snap3DToGrid01"));

            var box = (ctx.WorkspaceController.Selection.SelectedEntities.FirstOrDefault() as Body)?.Shape as Box;
            Assert.That(box, Is.Not.Null);
            Assert.That(box.DimensionX, Is.EqualTo(22));
            Assert.That(box.DimensionY, Is.EqualTo(22));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void TranslateAction()
    {
        var ctx = Context.Current;
        var body = _InitQuadView();
        ctx.ViewportController.ZoomFitAll();

        var tool = new TransformTool([body], TransformTool.PivotPoint.EntityPivot, TransformTool.Options.WorldSpaceOrientation);
        ctx.WorkspaceController.StartTool(tool);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(120, 295);
            ctx.MouseDown(60, 295, MouseButtons.Left);
            ctx.MoveTo(60, 295, MouseButtons.Left);
            ctx.MouseUp(60, 295, MouseButtons.Left);
            //AssertHelper.IsSameViewport(Path.Combine(_BasePath, "TranslateAction01"));
            Assert.That(body.Position.X, Is.EqualTo(-2.5).Within(0.2));

            ctx.MouseDown(60, 295, MouseButtons.Left);
            ctx.MoveTo(260, 295, MouseButtons.Left);
            ctx.MouseUp(260, 295, MouseButtons.Left);
            //AssertHelper.IsSameViewport(Path.Combine(_BasePath, "TranslateAction02"));
            Assert.That(body.Position.X, Is.EqualTo(-27.5).Within(0.2));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RotateAction()
    {
        var ctx = Context.Current;
        var body = _InitQuadView();
        ctx.ViewportController.ZoomFitAll();

        var tool = new TransformTool([body], TransformTool.PivotPoint.EntityPivot, TransformTool.Options.WorldSpaceOrientation);
        ctx.WorkspaceController.StartTool(tool);
        tool.ToggleTransformMode();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(181, 393);
            ctx.MouseDown(181, 393, MouseButtons.Left);
            ctx.MoveTo(244, 387, MouseButtons.Left);
            ctx.MouseUp(244, 387, MouseButtons.Left);
            Assert.That(body.Rotation.ToEuler().yaw.ToDeg(), Is.EqualTo(36.0).Within(2.0));
            //AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RotateAction01"));

            ctx.MouseDown(244, 387, MouseButtons.Left);
            ctx.MoveTo(274, 372, MouseButtons.Left);
            ctx.MouseUp(274, 372, MouseButtons.Left);
            //AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RotateAction02"));
            Assert.That(body.Rotation.ToEuler().yaw.ToDeg(), Is.EqualTo(55.0).Within(2.0));

            ctx.MouseDown(244, 387, MouseButtons.Left);
            ctx.MoveTo(300, 193, MouseButtons.Left);
            ctx.MouseUp(300, 193, MouseButtons.Left);
            //AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RotateAction03"));
            Assert.That(body.Rotation.ToEuler().yaw.ToDeg(), Is.EqualTo(150.0).Within(2.0));
        });
    }

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    Body _InitQuadView()
    {
        var ctx = Context.Current;

        var body =TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        ctx.ViewportController.ZoomFitAll();

        ctx.Workspace.ViewportLayout = ViewportLayoutBuilder.Build(ViewportLayoutBuilder.Layout.Quad, ctx.Workspace);
        return body;
    }
}