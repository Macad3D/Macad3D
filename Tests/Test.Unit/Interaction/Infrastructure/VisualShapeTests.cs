using System.IO;
using System.Windows;
using System.Windows.Input;
using Macad.Test.Utils;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Infrastructure;

[TestFixture]
public class VisualShapeTests
{
    const string _BasePath = @"Interaction\Infrastructure\VisualShape";

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
    public void InteractionModes()
    {
        var ctx = Context.Current;

        var body = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        ctx.ViewportController.ZoomFitAll();
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "InteractionModeNormal"));

        ctx.ViewportController.MouseMove(new Point(250, 250));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "InteractionModeHilighted"));

        ctx.ViewportController.MouseDown();
        ctx.ViewportController.MouseUp();
        ctx.ViewportController.MouseMove(new Point(0,0));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "InteractionModeSelected"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void InteractionModesLocked()
    {
        var ctx = Context.Current;

        var body = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body.Layer.IsLocked = true;
        ctx.ViewportController.ZoomFitAll();
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "InteractionModeNormal"));

        ctx.ViewportController.MouseMove(new Point(250, 250));
        // Expected: No hilighting
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "InteractionModeNormal"));

        ctx.ViewportController.MouseDown();
        ctx.ViewportController.MouseUp();
        ctx.ViewportController.MouseMove(new Point(0, 0));
        // Expected: No selection
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "InteractionModeNormal"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LayerInteractions()
    {
        var ctx = Context.Current;

        var layer1 = new Layer { Color = new(1.0f, 0.0f, 0.0f) };
        ctx.Layers.Add(layer1);
        var body1 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body1.Layer = layer1;

        var layer2 = new Layer { Color = new(0.0f, 1.0f, 0.0f) };
        ctx.Layers.Add(layer2);
        var body2 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body2.Layer = layer2;
        body2.Position = new Pnt(-20, 20, 0);

        ctx.ViewportController.ZoomFitAll();

        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LayerInteractions"));

        // Default settings
        // Expected: Both layers are selectable
        ctx.ViewportController.MouseMove(new Point(125, 250));
        ctx.ViewportController.MouseDown();
        ctx.ViewportController.MouseUp();
        Assert.That(ctx.WorkspaceController.Selection.SelectedEntities.Contains(body1));

        ctx.ViewportController.MouseMove(new Point(375, 250));
        ctx.ViewportController.MouseDown();
        ctx.ViewportController.MouseUp();
        Assert.That(ctx.WorkspaceController.Selection.SelectedEntities.Contains(body2));

        // Isolate Layer 2
        // Expected: only layer 2 is selectable
        ctx.Layers.ActiveLayer = layer2;
        ctx.Layers.IsolateActiveLayer = true;

        ctx.ViewportController.MouseMove(new Point(125, 250));
        ctx.ViewportController.MouseDown();
        ctx.ViewportController.MouseUp();
        Assert.That(ctx.WorkspaceController.Selection.SelectedEntities.Contains(body1), Is.False);

        ctx.ViewportController.MouseMove(new Point(375, 250));
        ctx.ViewportController.MouseDown();
        ctx.ViewportController.MouseUp();
        Assert.That(ctx.WorkspaceController.Selection.SelectedEntities.Contains(body2));

        // De-Isolate layer 2, lock layer 2
        // Expected: only layer 1 is selectable
        ctx.Layers.IsolateActiveLayer = false;
        layer2.IsLocked = true;

        ctx.ViewportController.MouseMove(new Point(125, 250));
        ctx.ViewportController.MouseDown();
        ctx.ViewportController.MouseUp();
        Assert.That(ctx.WorkspaceController.Selection.SelectedEntities.Contains(body1));

        ctx.ViewportController.MouseMove(new Point(375, 250));
        ctx.ViewportController.MouseDown();
        ctx.ViewportController.MouseUp();
        Assert.That(ctx.WorkspaceController.Selection.SelectedEntities.Contains(body2), Is.False);

        // Hide layer 2
        layer2.IsVisible = false;
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LayerInteractionsHide"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LayerSwitch()
    {
        var ctx = Context.Current;

        var layer1 = new Layer {Name = "Red", Color = new(1.0f, 0.0f, 0.0f) };
        ctx.Layers.Add(layer1);
        var body1 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body1.Layer = layer1;

        var layer2 = new Layer {Name = "Green", Color = new(0.0f, 1.0f, 0.0f) };
        ctx.Layers.Add(layer2);

        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.Invalidate(false, true);

        Assert.Multiple(() =>
        {
            // Switch layer of object, color should change
            body1.Layer = layer2;
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LayerSwitch02"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Colors()
    {
        var ctx = Context.Current;

        var body = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        ctx.ViewportController.ZoomFitAll();

        body.Layer.Color = new(0.0f, 1.0f, 0.0f);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Colors"));

        ctx.ViewportController.MouseMove(new Point(250, 250));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ColorsHilighted"));

        ctx.ViewportController.MouseDown();
        ctx.ViewportController.MouseUp();
        ctx.ViewportController.MouseMove(new Point(0, 0));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ColorsSelected"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LineStyles()
    {
        var ctx = Context.Current;

        var body = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            body.Layer.LineStyle = LineStyle.Solid;
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LineStyleSolid"));

            body.Layer.LineStyle = LineStyle.Dash;
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LineStyleDash"));

            body.Layer.LineStyle = LineStyle.ShortDash;
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LineStyleShortDash"));

            body.Layer.LineStyle = LineStyle.Dot;
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LineStyleDot"));

            body.Layer.LineStyle = LineStyle.DotDash;
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LineStyleDotDash"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LineThickness()
    {
        var ctx = Context.Current;

        var body = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        ctx.ViewportController.ZoomFitAll();

        body.Layer.LineThickness = Core.LineThickness.Normal;
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LineThicknessNormal"));

        body.Layer.LineThickness = Core.LineThickness.Thick;
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LineThicknessThick"));

        body.Layer.LineThickness = Core.LineThickness.Thin;
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LineThicknessThin"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void PresentationMode()
    {
        var ctx = Context.Current;

        var body = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        ctx.ViewportController.ZoomFitAll();

        body.Layer.PresentationMode = Core.PresentationMode.Solid;
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "PresentationModeSolid"));

        body.Layer.PresentationMode = Core.PresentationMode.SolidWithBoundary;
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "PresentationModeSolidWithBoundary"));

        body.Layer.PresentationMode = Core.PresentationMode.Wireframe;
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "PresentationModeWireframe"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Transparency()
    {
        var ctx = Context.Current;

        var body = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        ctx.ViewportController.ZoomFitAll();

        body.Layer.Transparency = 0.5f;
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Transparency1"));

        body.Layer.Transparency = 1.0f;
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Transparency2"));

        body.Layer.Transparency = 0.0f;
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Transparency3"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void TransparencySelection()
    {
        var ctx = Context.Current;

        var body = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        ctx.ViewportController.ZoomFitAll();

        body.Layer.Transparency = 0.5f;
        ctx.ViewportController.MouseMove(new Point(250, 250));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "TransparencyHilighted"));

        ctx.ViewportController.MouseDown();
        ctx.ViewportController.MouseUp();
        ctx.ViewportController.MouseMove(new Point(0, 0));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "TransparencySelected"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CollapsedToSolidTransform()
    {
        // Bugcheck: The solid operand shape, which is created by collapsing a body on deletion,
        // is not drawn at the correct place (but is correctly processed in the making of the body)
        var model = CoreContext.Current.Document;
        var boxBody = Body.Create(new Box()
        {
            DimensionX = 20,
            DimensionY = 20,
            DimensionZ = 10,
        });
        boxBody.Position = new Pnt(-10, -10, 0);
        model.Add(boxBody);

        var sphereBody = Body.Create(new Sphere()
        {
            Radius = 20
        });
        sphereBody.Position = new Pnt(-15, 0, 0);
        model.Add(sphereBody);

        BooleanCut.Create(boxBody, new BodyShapeOperand(sphereBody));

        Context.Current.ViewportController.ZoomFitAll();

        model.SafeDelete(new[] {sphereBody});

        boxBody.Shape = (boxBody.RootShape as ModifierBase).Operands[1] as Shape;
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CollapsedToSolidTransform3"));
    }
      
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void DuplicatedImmediatelyVisible()
    {
        // Bugcheck: This tests that after duplicating a body, the doublette is 
        // visible without any other action.
        var ctx = Context.Current;
        var body = TestGeomGenerator.CreateBox().Body;
        ctx.Document.Add(body);
        ctx.WorkspaceController.Selection.SelectEntity(body);
        ctx.WorkspaceController.Duplicate();
        Assert.That(ctx.Document.EntityCount == 2);

        // Deselect and hide original
        ctx.WorkspaceController.Selection.SelectEntity(null);
        body.IsVisible = false;

        ctx.ViewportController.ZoomFitAll();
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "DuplicatedImmediatelyVisible"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void PastedImmediatelyVisible()
    {
        // Bugcheck: This tests that after duplicating a body, the doublette is 
        // visible without any other action.
        var ctx = Context.Current;
        var body = TestGeomGenerator.CreateBox().Body;
        ctx.Document.Add(body);
        ctx.WorkspaceController.Selection.SelectEntity(body);
        ctx.WorkspaceController.CopyToClipboard();
        ctx.WorkspaceController.PasteFromClipboard();
        Assert.That(ctx.Document.EntityCount == 2);

        // Deselect and hide original
        ctx.WorkspaceController.Selection.SelectEntity(null);
        body.IsVisible = false;

        ctx.ViewportController.ZoomFitAll();
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "DuplicatedImmediatelyVisible"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void IsolateSelection()
    {
        var ctx = Context.Current;

        var body1 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        var body2 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body2.Position = new Pnt(-20, 20, 0);
        var body3 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body3.Position = new Pnt(20, 20, 0);

        ctx.ViewportController.ZoomFitAll();
        Assert.IsFalse(WorkspaceCommands.ToggleIsolateSelection.CanExecute());

        // Single-Select
        ctx.SelectAt(230, 180);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "IsolateSelection01"));

        Assert.IsTrue(WorkspaceCommands.ToggleIsolateSelection.CanExecute());
        WorkspaceCommands.ToggleIsolateSelection.Execute();
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "IsolateSelection02"));

        Assert.IsTrue(WorkspaceCommands.ToggleIsolateSelection.CanExecute());
        WorkspaceCommands.ToggleIsolateSelection.Execute();
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "IsolateSelection01"));

        // Multi-Select
        ctx.SelectAt(230, 330, ModifierKeys.Shift);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "IsolateSelection11"));

        Assert.IsTrue(WorkspaceCommands.ToggleIsolateSelection.CanExecute());
        WorkspaceCommands.ToggleIsolateSelection.Execute();
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "IsolateSelection12"));

        Assert.IsTrue(WorkspaceCommands.ToggleIsolateSelection.CanExecute());
        WorkspaceCommands.ToggleIsolateSelection.Execute();
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "IsolateSelection11"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ReleaseIsolationOnSelection()
    {
        var ctx = Context.Current;

        var body1 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        var body2 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body2.Position = new Pnt(-20, 20, 0);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            // Isolate 1
            ctx.WorkspaceController.Selection.SelectEntity(body1);
            Assert.IsTrue(WorkspaceCommands.ToggleIsolateSelection.CanExecute());
            WorkspaceCommands.ToggleIsolateSelection.Execute();
            // 1: Isolated, 2: Hidden
//                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ReleaseIsolationOnSelection01"));
                
            // Select 2 while 1 is isolated
            ctx.WorkspaceController.Selection.SelectEntity(body2);
            // 1: Unselected, 2: Isolated
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ReleaseIsolationOnSelection02"));

            // Isolate 2
            Assert.IsTrue(WorkspaceCommands.ToggleIsolateSelection.CanExecute());
            WorkspaceCommands.ToggleIsolateSelection.Execute();
            // 1: Hidden, 2: Isolated
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ReleaseIsolationOnSelection03"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ErrorMarker()
    {
        var ctx = Context.Current;

        var box = TestGeomGenerator.CreateBox();
        var face = box.GetSubshapeReference(SubshapeType.Face, 1);
        var edge = box.GetSubshapeReference(SubshapeType.Edge, 4);
        var taper = Taper.Create(box.Body, face, edge, 22.5);

        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ErrorMarkerInvisible"));

            taper.Angle = 80;
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ErrorMarkerVisible"));

            taper.Angle = 22.5;
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ErrorMarkerInvisible"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Apartment(System.Threading.ApartmentState.STA)]
    [Description("Bug: After duplication and view changes (e.g. isolation of another body) the clone is drawn highlighted.")]
    public void SelectionHighlightAfterTransform()
    {
        var ctx = Context.Current;

        var body1 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        var body2 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body2.Position = new Pnt(10, 0, 0);

        Assert.Multiple(() =>
        {
            ctx.WorkspaceController.Selection.SelectEntity(body1);
            ctx.ViewportController.ZoomFitAll();
            //AssertHelper.IsSameViewport(Path.Combine(BasePath, "SelectionHighlightAfterTransform01"));

            // Transform 1
            WorkspaceCommands.Transform.Execute();
            ctx.ViewportController.ZoomFitAll();
            //AssertHelper.IsSameViewport(Path.Combine(BasePath, "SelectionHighlightAfterTransform02"));
            ctx.MoveTo(280, 175);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(280, 50);
            ctx.ViewportController.MouseUp();
            ctx.ViewportController.ZoomFitAll();
            //AssertHelper.IsSameViewport(Path.Combine(BasePath, "SelectionHighlightAfterTransform03"));
            ctx.ClickAt(1, 1);
            ctx.WorkspaceController.Selection.SelectEntity(body2);

            // Check update of selection structures
            ctx.MoveTo(240, 160); // Should
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectionHighlightAfterTransform07"));

            // Select and isolate 1
                
            Assert.IsTrue(WorkspaceCommands.ToggleIsolateSelection.CanExecute());
            WorkspaceCommands.ToggleIsolateSelection.Execute();
            //AssertHelper.IsSameViewport(Path.Combine(BasePath, "SelectionHighlightAfterTransform04"));

            // De-isolate, check highlighting of 2
            Assert.IsTrue(WorkspaceCommands.ToggleIsolateSelection.CanExecute());
            WorkspaceCommands.ToggleIsolateSelection.Execute();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectionHighlightAfterTransform05"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SketchSelectionSensitivity()
    {
        var body = TestSketchGenerator.CreateRectangle(10, 10).Body;
        var ctx = Context.Current;
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            // Enhanced sensitivity for sketches
            ctx.ClickAt(352, 160);
            Assert.IsFalse(ctx.WorkspaceController.Selection.SelectedEntities.Contains(body), "1");
            ctx.ClickAt(352, 170);
            Assert.IsTrue(ctx.WorkspaceController.Selection.SelectedEntities.Contains(body), "2");

            // Restore original sensitivity when converted to solid
            Extrude.Create(body);
            ctx.WorkspaceController.Invalidate(forceRedraw:true);

            ctx.ClickAt(352, 160);
            Assert.IsFalse(ctx.WorkspaceController.Selection.SelectedEntities.Contains(body), "3");
            ctx.ClickAt(352, 170);
            Assert.IsTrue(ctx.WorkspaceController.Selection.SelectedEntities.Contains(body), "4");
            //AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SketchSelectionSensitivity01"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("Covers the situation where a solid visual gets replaced with a shape of an empty sketch")]
    public void ShapeTypeChange()
    {
        var imprint = TestGeomGenerator.CreateImprint();
        var ctx = Context.Current;
        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.Invalidate(forceRedraw:true);

        imprint.Sketch.DeleteSegment(imprint.Sketch.Segments[0]);
        imprint.Sketch.Make(Shape.MakeFlags.None);
        imprint.Body.Shape = imprint.Sketch;

        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ShapeTypeChange01"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Ghosting()
    {
        var ctx = Context.Current;

        var box = TestGeomGenerator.CreateBox();
        box.Body.IsVisible = false;
        ctx.WorkspaceController.Selection.SelectEntity(box.Body);
            
        Assert.Multiple(() =>
        {
            ctx.ViewportController.ZoomFitAll();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Ghosting01"));

            // Update BRep
            box.DimensionX = box.DimensionX * 2.0;
            ctx.ViewportController.ZoomFitAll();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Ghosting02"));
        });
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void GhostingTriggeredByLayerToggle()
    {
        var ctx = Context.Current;

        var box = TestGeomGenerator.CreateBox();
        ctx.WorkspaceController.Selection.SelectEntity(box.Body);
        ctx.ViewportController.ZoomFitAll();
            
        Assert.Multiple(() =>
        {
            // Toggle layer visibility AFTER selection
            box.Body.Layer.IsVisible = false;
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "GhostingTriggeredByLayerToggle01"));
            box.Body.Layer.IsVisible = true;
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "GhostingTriggeredByLayerToggle02"));
        });
    }
}