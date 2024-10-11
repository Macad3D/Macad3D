using System.IO;
using System.Linq;
using Macad.Test.Utils;
using Macad.Core;
using Macad.Interaction;
using Macad.Interaction.Editors.Shapes;
using Macad.Interaction.Visual;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Infrastructure;

[TestFixture]
public class SelectionContextTests
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

    const string _BasePath = @"Interaction\Infrastructure\SelectionContext";

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void InclusionMode()
    {
        var ctx = Context.Current;
        var sel = ctx.WorkspaceController.Selection;

        var body1 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body1.Position = new Pnt(-15, 0, 0);
        var body2 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body2.Position = new Pnt(15, 0, 0);
        ctx.ViewportController.ZoomFitAll();

        // Select first
        ctx.SelectAt(350, 180);
        Assert.That(sel.SelectedEntities.Count, Is.EqualTo(1));
        Assert.That(sel.SelectedEntities[0], Is.EqualTo(body1));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelected"));

        // Select second
        ctx.SelectAt(150, 290);
        Assert.That(sel.SelectedEntities.Count, Is.EqualTo(1));
        Assert.That(sel.SelectedEntities[0], Is.EqualTo(body2));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SecondSelected"));
            
        // Enter selection context
        var selContext = sel.OpenContext();
        selContext.Include(body1);

        // Select first (is selected)
        ctx.SelectAt(350, 180);
        Assert.That(sel.SelectedEntities.Count, Is.EqualTo(1));
        Assert.That(sel.SelectedEntities[0], Is.EqualTo(body1));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelected"));

        // Select second (is not selected)
        ctx.SelectAt(150, 290);
        Assert.That(sel.SelectedEntities.Count, Is.EqualTo(0));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Neutral"));

        // Back to neutral
        sel.CloseContext(selContext);

        // Select first
        ctx.SelectAt(350, 180);
        Assert.That(sel.SelectedEntities.Count, Is.EqualTo(1));
        Assert.That(sel.SelectedEntities[0], Is.EqualTo(body1));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelected"));

        // Select second
        ctx.SelectAt(150, 290);
        Assert.That(sel.SelectedEntities.Count, Is.EqualTo(1));
        Assert.That(sel.SelectedEntities[0], Is.EqualTo(body2));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SecondSelected"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ExclusionMode()
    {
        var ctx = Context.Current;
        var sel = ctx.WorkspaceController.Selection;

        var body1 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body1.Position = new Pnt(-15, 0, 0);
        var body2 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body2.Position = new Pnt(15, 0, 0);
        ctx.ViewportController.ZoomFitAll();

        // Select first
        ctx.SelectAt(350, 180);
        Assert.That(sel.SelectedEntities.Count, Is.EqualTo(1));
        Assert.That(sel.SelectedEntities[0], Is.EqualTo(body1));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelected"));

        // Select second
        ctx.SelectAt(150, 290);
        Assert.That(sel.SelectedEntities.Count, Is.EqualTo(1));
        Assert.That(sel.SelectedEntities[0], Is.EqualTo(body2));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SecondSelected"));

        // Enter selection context
        var selContext = sel.OpenContext(SelectionContext.Options.IncludeAll);
        selContext.Exclude(body1);

        // Select first (is not selected)
        ctx.SelectAt(350, 180);
        Assert.That(sel.SelectedEntities.Count, Is.EqualTo(0));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Neutral"));

        // Select second (is selected)
        ctx.SelectAt(150, 290);
        Assert.That(sel.SelectedEntities.Count, Is.EqualTo(1));
        Assert.That(sel.SelectedEntities[0], Is.EqualTo(body2));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SecondSelected"));

        // Back to neutral
        sel.CloseContext(selContext);

        // Select first
        ctx.SelectAt(350, 180);
        Assert.That(sel.SelectedEntities.Count, Is.EqualTo(1));
        Assert.That(sel.SelectedEntities[0], Is.EqualTo(body1));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelected"));

        // Select second
        ctx.SelectAt(150, 290);
        Assert.That(sel.SelectedEntities.Count, Is.EqualTo(1));
        Assert.That(sel.SelectedEntities[0], Is.EqualTo(body2));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SecondSelected"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void KeepSelection()
    {
        var ctx = Context.Current;
        var sel = ctx.WorkspaceController.Selection;

        var body1 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body1.Position = new Pnt(-15, 0, 0);
        var body2 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body2.Position = new Pnt(15, 0, 0);
        ctx.ViewportController.ZoomFitAll();

        // Select first
        ctx.SelectAt(350, 180);
        Assert.That(sel.SelectedEntities.Count, Is.EqualTo(1));
        Assert.That(sel.SelectedEntities[0], Is.EqualTo(body1));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelected"));

        // Enter selection context
        var selContext = sel.OpenContext(SelectionContext.Options.IncludeAll);
        selContext.Exclude(body1);

        // Hilite second (is lit)
        ctx.MoveTo(150, 290);
        Assert.That(sel.SelectedEntities.Count, Is.EqualTo(1));
        Assert.That(sel.SelectedEntities[0], Is.EqualTo(body1));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelectedSecondHilighted"));

        // Hilite first (is not lit)
        ctx.MoveTo(350, 180);
        Assert.That(sel.SelectedEntities.Count, Is.EqualTo(1));
        Assert.That(sel.SelectedEntities[0], Is.EqualTo(body1));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelected"));

        // Back to neutral
        sel.CloseContext(selContext);

        // First still selected
        ctx.MoveTo(150, 290);
        Assert.That(sel.SelectedEntities.Count, Is.EqualTo(1));
        Assert.That(sel.SelectedEntities[0], Is.EqualTo(body1));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelectedSecondHilighted"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void NewSelectedList()
    {
        var ctx = Context.Current;
        var sel = ctx.WorkspaceController.Selection;

        var body1 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body1.Position = new Pnt(-15, 0, 0);
        var body2 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body2.Position = new Pnt(15, 0, 0);
        ctx.ViewportController.ZoomFitAll();

        // Select first
        ctx.SelectAt(350, 180);
        Assert.That(sel.SelectedEntities.Count, Is.EqualTo(1));
        Assert.That(sel.SelectedEntities[0], Is.EqualTo(body1));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelected"));

        // Enter selection context
        var selContext = sel.OpenContext(SelectionContext.Options.NewSelectedList | SelectionContext.Options.IncludeAll);
        selContext.Exclude(body1);

        // Hilite second (is lit)
        ctx.MoveTo(150, 290);
        Assert.AreEqual(0, sel.SelectedEntities.Count);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SecondHilighted"));

        // Hilite first (is not lit)
        ctx.MoveTo(350, 180);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Neutral"));

        // Back to neutral
        sel.CloseContext(selContext);

        // First selected again
        ctx.MoveTo(150, 290);
        Assert.That(sel.SelectedEntities.Count, Is.EqualTo(1));
        Assert.That(sel.SelectedEntities[0], Is.EqualTo(body1));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelectedSecondHilighted"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SelectFaces()
    {
        var ctx = Context.Current;
        var sel = ctx.WorkspaceController.Selection;

        var body1 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body1.Position = new Pnt(-15, 0, 0);
        var body2 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body2.Position = new Pnt(15, 0, 0);
        ctx.ViewportController.ZoomFitAll();

        // Select first
        ctx.SelectAt(350, 180);
        Assert.That(sel.SelectedEntities.Count, Is.EqualTo(1));
        Assert.That(sel.SelectedEntities[0], Is.EqualTo(body1));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelected"));

        // Enter selection context
        var selContext = sel.OpenContext();
        selContext.SetSubshapeSelection(SubshapeTypes.Face);
        selContext.Include(body1);

        // Hilite face of first (is lit)
        ctx.MoveTo(300, 180);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectFaces00"));

        // Hilite face of second (not lit)
        ctx.MoveTo(120, 300);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelected"));

        // Back to neutral
        sel.CloseContext(selContext);

        // Select second
        ctx.MoveTo(120, 300);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelectedSecondHilighted"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SelectEdges()
    {
        var ctx = Context.Current;
        var sel = ctx.WorkspaceController.Selection;

        var body1 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body1.Position = new Pnt(-15, 0, 0);
        var body2 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body2.Position = new Pnt(15, 0, 0);
        ctx.ViewportController.ZoomFitAll();

        // Select first
        ctx.SelectAt(350, 180);
        Assert.That(sel.SelectedEntities.Count, Is.EqualTo(1));
        Assert.That(sel.SelectedEntities[0], Is.EqualTo(body1));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelected"));

        // Enter selection context
        var selContext = sel.OpenContext();
        selContext.SetSubshapeSelection(SubshapeTypes.Edge);
        selContext.Include(body1);

        // Hilite edge of first (is lit)
        ctx.MoveTo(283, 167);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectEdges00"));

        // Hilite edge of second (not lit)
        ctx.MoveTo(138, 314);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelected"));

        // Back to neutral
        sel.CloseContext(selContext);

        // Select second
        ctx.MoveTo(120, 300);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelectedSecondHilighted"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SelectWires()
    {
        var ctx = Context.Current;
        var sel = ctx.WorkspaceController.Selection;

        var body1 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body1.Position = new Pnt(-15, 0, 0);
        var body2 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body2.Position = new Pnt(15, 0, 0);
        ctx.ViewportController.ZoomFitAll();

        // Select first
        ctx.SelectAt(350, 180);
        Assert.That(sel.SelectedEntities.Count, Is.EqualTo(1));
        Assert.That(sel.SelectedEntities[0], Is.EqualTo(body1));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelected"));

        // Enter selection context
        var selContext = sel.OpenContext();
        selContext.SetSubshapeSelection(SubshapeTypes.Wire);
        selContext.Include(body1);

        // Hilite wire of first (is lit)
        ctx.MoveTo(274, 217);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectWires00"));

        // Hilite wire of second (not lit)
        ctx.MoveTo(92, 337);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelected"));

        // Back to neutral
        sel.CloseContext(selContext);

        // Select second
        ctx.MoveTo(120, 300);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelectedSecondHilighted"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SelectVertices()
    {
        var ctx = Context.Current;
        var sel = ctx.WorkspaceController.Selection;

        var body1 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body1.Position = new Pnt(-15, 0, 0);
        var body2 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body2.Position = new Pnt(15, 0, 0);
        ctx.ViewportController.ZoomFitAll();

        // Select first
        ctx.SelectAt(350, 180);
        Assert.That(sel.SelectedEntities.Count, Is.EqualTo(1));
        Assert.That(sel.SelectedEntities[0], Is.EqualTo(body1));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelected"));

        // Enter selection context
        var selContext = sel.OpenContext();
        selContext.SetSubshapeSelection(SubshapeTypes.Vertex);
        selContext.Include(body1);

        // Hilite vertex of first (is lit)
        ctx.MoveTo(348, 258);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectVertices00"));

        // Hilite vertex of second (not lit)
        ctx.MoveTo(153, 371);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelected"));

        // Back to neutral
        sel.CloseContext(selContext);

        // Select second
        ctx.MoveTo(120, 300);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelectedSecondHilighted"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AddNewShape()
    {
        var ctx = Context.Current;
        var sel = ctx.WorkspaceController.Selection;

        var body1 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body1.Position = new Pnt(-15, 0, 0);

        // Enter selection context
        var selContext = sel.OpenContext(SelectionContext.Options.IncludeAll);
        selContext.SetSubshapeSelection(SubshapeTypes.Face);

        // Hilite face of first (to force AIS update)
        ctx.MoveTo(300, 180);

        // Add another body while context is open
        var body2 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body2.Position = new Pnt(15, 0, 0);
        ctx.ViewportController.ZoomFitAll();

        // Hilite face of second
        ctx.MoveTo(120, 300);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "AddedNewShape00"));

        // Back to neutral
        sel.CloseContext(selContext);

        // Select second
        ctx.MoveTo(120, 300);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SecondHilighted"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void HideActivatedShape()
    {
        // The case is: Enter sel context with include-all, then hide the body.
        // That means: The AIS object is existing, but erased.
        var ctx = Context.Current;
        var sel = ctx.WorkspaceController.Selection;

        var body1 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body1.Position = new Pnt(-15, 0, 0);
        var body2 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body2.Position = new Pnt(15, 0, 0);
        ctx.ViewportController.ZoomFitAll();

        // Enter selection context
        var selContext = sel.OpenContext(SelectionContext.Options.IncludeAll);
        selContext.SetSubshapeSelection(SubshapeTypes.Face);

        // Remove shape before AIS update
        var visShape2 = ctx.WorkspaceController.VisualObjects.Get(body2) as VisualShape;
        visShape2.IsHidden = true;

        // Hilite face of first (to force AIS update)
        ctx.MoveTo(300, 180);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "HideActivatedShape00"));

        // Back to neutral
        sel.CloseContext(selContext);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RemoveIncludedShape()
    {
        var ctx = Context.Current;
        var sel = ctx.WorkspaceController.Selection;

        var body1 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body1.Position = new Pnt(-15, 0, 0);
        var body2 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body2.Position = new Pnt(15, 0, 0);
        ctx.ViewportController.ZoomFitAll();

        // Enter selection context
        var selContext = sel.OpenContext();
        selContext.SetSubshapeSelection(SubshapeTypes.Face);
        selContext.Include(body2);

        // Hilite face of first (to force AIS update)
        ctx.MoveTo(300, 180);

        // Remove shape
        body2.Remove();
        var visShape2 = ctx.WorkspaceController.VisualObjects.Get(body2) as VisualShape;
        Assert.That(visShape2, Is.Null);

        // Force AIS update by enhancing include list
        selContext.Include(body1);
        ctx.MoveTo(120, 300);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "RemoveIncludedShape00"));

        // Back to neutral
        sel.CloseContext(selContext);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void KeepSelectionAcrossSelectionContices()
    {
        var ctx = Context.Current;
        var sketch = TestSketchGenerator.CreateRectangle(10, 19);
        var body = sketch.Body;
        ctx.WorkspaceController.Selection.SelectEntity(body);
        Assert.AreEqual(body, ctx.WorkspaceController.Selection.SelectedEntities.FirstOrDefault());

        var sketchEditTool = new SketchEditorTool(sketch);
        ctx.WorkspaceController.StartTool(sketchEditTool);
        Assert.IsInstanceOf<SketchEditorTool>(ctx.WorkspaceController.CurrentTool);
        Assert.AreEqual(0, ctx.WorkspaceController.Selection.SelectedEntities.Count);

        ctx.WorkspaceController.CancelTool(sketchEditTool, false);
        Assert.IsNull(ctx.WorkspaceController.CurrentTool);
        Assert.AreEqual(body, ctx.WorkspaceController.Selection.SelectedEntities.FirstOrDefault());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SelectedVisibilityChange()
    {
        // While an entity is in selection of a prior context, it is not visible in the workspace.
        // This should not change in the visibility of the entity is changed.
        var ctx = Context.Current;
        var sel = ctx.WorkspaceController.Selection;

        var body1 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body1.Position = new Pnt(-15, 0, 0);
        var body2 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
        body2.Position = new Pnt(15, 0, 0);
        ctx.ViewportController.ZoomFitAll();

        // Select first
        ctx.SelectAt(350, 180);
        Assert.That(sel.SelectedEntities.Count, Is.EqualTo(1));
        Assert.That(sel.SelectedEntities[0], Is.EqualTo(body1));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelected"));

        // Enter selection context
        var selContext = sel.OpenContext(SelectionContext.Options.NewSelectedList | SelectionContext.Options.IncludeAll);
        selContext.Exclude(body1);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Neutral"));

        // Hide - should be unselected ghost
        body1.IsVisible = false;
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstGhost"));

        // Show - should be unselected normal
        body1.IsVisible = true;
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Neutral"));

        // Back to neutral - should be selected again
        sel.CloseContext(selContext);
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "FirstSelected"));
    }
}