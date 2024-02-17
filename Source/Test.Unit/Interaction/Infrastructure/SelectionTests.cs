using System.IO;
using System.Windows;
using System.Windows.Input;
using Macad.Test.Utils;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction;
using Macad.Interaction.Editors.Shapes;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Infrastructure;

[TestFixture]
public class SelectionTests
{
    const string _BasePath = @"Interaction\Infrastructure\Selection";

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
    public void SingleSelection()
    {
        var ctx = Context.Current;
        var sel = ctx.WorkspaceController.Selection;

        var body1 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body1.Position = new Pnt(-15, 0, 0);
        var body2 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body2.Position = new Pnt(15, 0, 0);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SingleSelection01"));

            // Select first
            ctx.ClickAt(350, 180);
            Assert.That(sel.SelectedEntities.Count, Is.EqualTo(1));
            Assert.That(sel.SelectedEntities[0], Is.EqualTo(body1));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SingleSelection02"));

            // Select second
            ctx.ClickAt(150, 290);
            Assert.That(sel.SelectedEntities.Count, Is.EqualTo(1));
            Assert.That(sel.SelectedEntities[0], Is.EqualTo(body2));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SingleSelection03"));

            // Unselect
            ctx.ClickAt(0, 0);
            Assert.That(sel.SelectedEntities.Count, Is.EqualTo(0));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SingleSelection04"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MultiSelection()
    {
        var ctx = Context.Current;
        var sel = ctx.WorkspaceController.Selection;

        var body1 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body1.Position = new Pnt(-15, 0, 0);
        var body2 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body2.Position = new Pnt(15, 0, 0);
        ctx.ViewportController.ZoomFitAll();
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SingleSelection01"));

        // Select both
        ctx.ClickAt(350, 180);
        ctx.ClickAt(150, 290, ModifierKeys.Shift);
        ctx.MoveTo(0, 0);
        Assert.That(sel.SelectedEntities.Count, Is.EqualTo(2));
        Assert.That(sel.SelectedEntities[0], Is.EqualTo(body1));
        Assert.That(sel.SelectedEntities[1], Is.EqualTo(body2));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MultiSelection02"));

        // Select single again
        ctx.ClickAt(150, 290);
        Assert.That(sel.SelectedEntities.Count, Is.EqualTo(1));
        Assert.That(sel.SelectedEntities[0], Is.EqualTo(body2));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SingleSelection03"));

        // Unselect
        ctx.MoveTo(0, 0);
        ctx.ViewportController.MouseDown();
        ctx.ViewportController.MouseUp();
        Assert.That(sel.SelectedEntities.Count, Is.EqualTo(0));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SingleSelection04"));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void MultiSelectionAdd()
    {
        var ctx = Context.Current;
        var sel = ctx.WorkspaceController.Selection;

        var body1 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body1.Position = new Pnt(-15, 0, 0);
        var body2 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body2.Position = new Pnt(15, 0, 0);
        var body3 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body3.Position = new Pnt(0, 30, 0);
        ctx.ViewportController.ZoomFitAll();

        // Select All
        ctx.ClickAt(250, 155);
        ctx.ClickAt(115, 235, ModifierKeys.Shift);
        ctx.ClickAt(315, 280, ModifierKeys.Shift);
        Assert.That(sel.SelectedEntities.Count, Is.EqualTo(3));
        Assert.That(sel.SelectedEntities[0], Is.EqualTo(body1));
        Assert.That(sel.SelectedEntities[1], Is.EqualTo(body2));
        Assert.That(sel.SelectedEntities[2], Is.EqualTo(body3));

        // Click again, should stay selected
        ctx.ClickAt(250, 155, ModifierKeys.Shift);
        ctx.ClickAt(115, 235, ModifierKeys.Shift);
        ctx.ClickAt(315, 280, ModifierKeys.Shift);
        Assert.That(sel.SelectedEntities.Count, Is.EqualTo(3));
        Assert.That(sel.SelectedEntities[0], Is.EqualTo(body1));
        Assert.That(sel.SelectedEntities[1], Is.EqualTo(body2));
        Assert.That(sel.SelectedEntities[2], Is.EqualTo(body3));

        ctx.MoveTo(0, 0);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MultiSelectionAdd01"));
    }

    //--------------------------------------------------------------------------------------------------
                
    [Test]
    public void MultiSelectionToggle()
    {
        var ctx = Context.Current;
        var sel = ctx.WorkspaceController.Selection;

        var body1 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body1.Position = new Pnt(-15, 0, 0);
        var body2 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body2.Position = new Pnt(15, 0, 0);
        var body3 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body3.Position = new Pnt(0, 30, 0);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            // Select All
            ctx.ClickAt(250, 155);
            ctx.ClickAt(115, 235, ModifierKeys.Control);
            ctx.ClickAt(315, 280, ModifierKeys.Control);
            Assert.That(sel.SelectedEntities.Count, Is.EqualTo(3));
            Assert.That(sel.SelectedEntities[0], Is.EqualTo(body1));
            Assert.That(sel.SelectedEntities[1], Is.EqualTo(body2));
            Assert.That(sel.SelectedEntities[2], Is.EqualTo(body3));

            // Click again, should stay selected
            ctx.ClickAt(315, 280, ModifierKeys.Control);
            Assert.That(sel.SelectedEntities.Count, Is.EqualTo(2));
            Assert.That(sel.SelectedEntities[0], Is.EqualTo(body1));
            Assert.That(sel.SelectedEntities[1], Is.EqualTo(body2));
            ctx.MoveTo(0, 0);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MultiSelectionToggle01"));

            ctx.ClickAt(115, 235, ModifierKeys.Control);
            Assert.That(sel.SelectedEntities.Count, Is.EqualTo(1));
            Assert.That(sel.SelectedEntities[0], Is.EqualTo(body1));
            ctx.MoveTo(0, 0);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MultiSelectionToggle02"));

            ctx.ClickAt(250, 155, ModifierKeys.Control);
            Assert.That(sel.SelectedEntities.Count, Is.EqualTo(0));
            ctx.MoveTo(0, 0);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "MultiSelectionToggle03"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SelectionRestoreAfterBrepUpdate()
    {
        var ctx = Context.Current;
        var sel = ctx.WorkspaceController.Selection;

        var body1 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        ctx.ViewportController.ZoomFitAll();

        // Select
        ctx.ViewportController.MouseMove(new Point(250, 250));
        ctx.ViewportController.MouseDown();
        ctx.ViewportController.MouseUp();
        ctx.ViewportController.MouseMove(new Point(0, 0));
        Assert.That(sel.SelectedEntities.Count, Is.EqualTo(1));
        Assert.That(sel.SelectedEntities[0], Is.EqualTo(body1));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectionRestoreAfterBrepUpdate1"));

        // Update
        Chamfer.Create(body1, new[] {new SubshapeReference(SubshapeType.Edge, body1.Shape.Guid, 14)});
        Assert.That(sel.SelectedEntities.Count, Is.EqualTo(1));
        Assert.That(sel.SelectedEntities[0], Is.EqualTo(body1));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectionRestoreAfterBrepUpdate2"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RubberbandRectangleSelection()
    {
        var ctx = Context.Current;
        var sel = ctx.WorkspaceController.Selection;

        var body1 = Body.Create(Box.Create(10, 10, 10));
        body1.Position = new Pnt(-15, 0, 0);
        var body2 = Body.Create(Cylinder.Create(6, 8));
        body2.Position = new Pnt(15, 0, 0);
        var body3 = Body.Create(Sphere.Create(8));
        body2.Position = new Pnt(0, 15, 0);
        ctx.ViewportController.ZoomFitAll();

        // Select two of three
        ctx.MoveTo(170, 30);
        ctx.ViewportController.MouseDown();
        ctx.ViewportController.StartRubberbandSelection(ViewportController.RubberbandSelectionMode.Rectangle, false);
        ctx.MoveTo(400, 400);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RubberbandSelection01"));

        ctx.ViewportController.MouseUp();
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RubberbandSelection02"));
        Assert.AreEqual(2, sel.SelectedEntities.Count);

        // Additional selection
        ctx.MoveTo(30, 120);
        ctx.ViewportController.MouseDown();
        ctx.ViewportController.StartRubberbandSelection(ViewportController.RubberbandSelectionMode.Rectangle, false);
        ctx.MoveTo(290, 420);
        ctx.ViewportController.MouseUp(ModifierKeys.Shift);
        Assert.AreEqual(3, sel.SelectedEntities.Count);

        // Reduce selection
        ctx.MoveTo(30, 120);
        ctx.ViewportController.MouseDown();
        ctx.ViewportController.StartRubberbandSelection(ViewportController.RubberbandSelectionMode.Rectangle, false);
        ctx.MoveTo(290, 420);
        ctx.ViewportController.MouseUp(ModifierKeys.Control);
        Assert.AreEqual(2, sel.SelectedEntities.Count);
            
        // Exclusive selection
        ctx.MoveTo(30, 120);
        ctx.ViewportController.MouseDown();
        ctx.ViewportController.StartRubberbandSelection(ViewportController.RubberbandSelectionMode.Rectangle, false);
        ctx.MoveTo(290, 420);
        ctx.ViewportController.MouseUp();
        Assert.AreEqual(1, sel.SelectedEntities.Count);

        // Empty selection
        ctx.MoveTo(10, 10);
        ctx.ViewportController.MouseDown();
        ctx.ViewportController.StartRubberbandSelection(ViewportController.RubberbandSelectionMode.Rectangle, false);
        ctx.MoveTo(100, 100);
        ctx.ViewportController.MouseUp();
        Assert.AreEqual(0, sel.SelectedEntities.Count);
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RubberbandRectangleTouchedSelection()
    {
        var ctx = Context.Current;
        var sel = ctx.WorkspaceController.Selection;

        var body1 = Body.Create(Box.Create(10, 10, 10));
        body1.Position = new Pnt(-15, 0, 0);
        var body2 = Body.Create(Cylinder.Create(6, 8));
        body2.Position = new Pnt(15, 0, 0);
        var body3 = Body.Create(Sphere.Create(8));
        body2.Position = new Pnt(0, 15, 0);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            // Select two of three
            ctx.MoveTo(400, 400);
            ctx.ViewportController.MouseDown();
            ctx.ViewportController.StartRubberbandSelection(ViewportController.RubberbandSelectionMode.Rectangle, true);
            ctx.MoveTo(170, 270);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RubberbandSelection31"));

            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RubberbandSelection32"));
            Assert.AreEqual(2, sel.SelectedEntities.Count);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RubberbandFreehandSelection()
    {
        var ctx = Context.Current;
        var sel = ctx.WorkspaceController.Selection;

        var body1 = Body.Create(Box.Create(10, 10, 10));
        body1.Position = new Pnt(-15, 0, 0);
        var body2 = Body.Create(Cylinder.Create(6, 8));
        body2.Position = new Pnt(15, 0, 0);
        var body3 = Body.Create(Cylinder.Create(4, 6));
        body2.Position = new Pnt(0, 15, 0);
        ctx.ViewportController.ZoomFitAll();

        // Select two of three
        ctx.MoveTo(300, 50);
        ctx.ViewportController.MouseDown();
        ctx.ViewportController.StartRubberbandSelection(ViewportController.RubberbandSelectionMode.Freehand, false);
        ctx.MoveTo(395, 120);
        ctx.MoveTo(378, 430);
        ctx.MoveTo(188, 446);
        ctx.MoveTo(130, 250);
        ctx.MoveTo(150, 120);
            
        Assert.Multiple(() =>
        {
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RubberbandSelection11"));

            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RubberbandSelection12"));
            Assert.AreEqual(2, sel.SelectedEntities.Count);
        });
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RubberbandFreehandTouchedSelection()
    {
        var ctx = Context.Current;
        var sel = ctx.WorkspaceController.Selection;

        var body1 = Body.Create(Box.Create(10, 10, 10));
        body1.Position = new Pnt(-15, 0, 0);
        var body2 = Body.Create(Cylinder.Create(6, 8));
        body2.Position = new Pnt(15, 0, 0);
        var body3 = Body.Create(Cylinder.Create(4, 6));
        body2.Position = new Pnt(0, 15, 0);
        ctx.ViewportController.ZoomFitAll();

        // Select two of three
        ctx.MoveTo(300, 50);
        ctx.ViewportController.MouseDown();
        ctx.ViewportController.StartRubberbandSelection(ViewportController.RubberbandSelectionMode.Freehand, true);
        ctx.MoveTo(395, 120);
        ctx.MoveTo(392, 237);
        ctx.MoveTo(317, 253);
        ctx.MoveTo(159, 140);
        Assert.Multiple(() =>
        {
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RubberbandSelection21"));

            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RubberbandSelection22"));
            Assert.AreEqual(2, sel.SelectedEntities.Count);
        });
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("Bug: Rubberband selection does not work after using the sketch editor")]
    public void RubberbandSelectionAfterSketchEditor()
    {
        var ctx = Context.Current;
        var sel = ctx.WorkspaceController.Selection;

        var sketch = TestSketchGenerator.CreateSketch(createBody: true);
        ctx.ViewportController.ZoomFitAll();
            
        // Test if it works before sketch editing
        Assert.AreEqual(0, sel.SelectedEntities.Count);
        ctx.MoveTo(10, 10);
        ctx.ViewportController.MouseDown();
        ctx.ViewportController.StartRubberbandSelection(ViewportController.RubberbandSelectionMode.Rectangle, false);
        ctx.MoveTo(490, 490);
        ctx.ViewportController.MouseUp();
        Assert.AreEqual(1, sel.SelectedEntities.Count);

        // Enter and leave sketch editor
        var tool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(tool);
        ctx.MoveTo(100, 100);
        ctx.WorkspaceController.CancelTool(tool, false);
        ctx.WorkspaceController.Invalidate(forceRedraw:true);

        // Test if it works after sketch editing
        sel.SelectEntity(null);
        Assert.AreEqual(0, sel.SelectedEntities.Count);
        ctx.MoveTo(10, 10);
        ctx.ViewportController.MouseDown();
        ctx.ViewportController.StartRubberbandSelection(ViewportController.RubberbandSelectionMode.Rectangle, false);
        ctx.MoveTo(490, 490);
        ctx.ViewportController.MouseUp();
        Assert.AreEqual(1, sel.SelectedEntities.Count);
    }
        
}