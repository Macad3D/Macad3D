using System.Linq;
using System.Threading;
using System.Threading.Tasks;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Mcp;
using Macad.Occt;
using Macad.Test.Utils;
using ModelContextProtocol;
using NUnit.Framework;
using static Macad.Test.Mcp.McpTestUtils;

namespace Macad.Test.Mcp;

[TestFixture]
[Apartment(ApartmentState.STA)]
public class DocumentToolsTests
{
    DocumentTools _Tools;
    PrimitiveTools _Primitives;

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        Context.InitWithDefault();
        _Tools = new DocumentTools();
        _Primitives = new PrimitiveTools();
    }

    //--------------------------------------------------------------------------------------------------

    #region list_bodies

    [Test]
    public async Task ListBodies_Empty()
    {
        Assert.That(await _Tools.ListBodies(), Is.Empty);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task ListBodies()
    {
        var box = await _Primitives.CreateBox(1, 1, 1, name: "A");
        await _Primitives.CreateSphere(1, name: "B");

        var list = await _Tools.ListBodies();

        Assert.That(list.Select(b => b.Name), Is.EqualTo(new[] { "A", "B" }));
        Assert.That(list[0].Guid, Is.EqualTo(box.Guid));
        Assert.That(list[0].Shape, Is.EqualTo("Box"));
        Assert.That(list[0].ShapeType, Is.EqualTo("Solid"));
        Assert.That(list[0].Visible, Is.True);
        Assert.That(list[0].HasErrors, Is.False);
        Assert.That(list[0].UsedBy, Is.Empty);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task ListBodies_ShowsOperandUsage()
    {
        CreateCutBodies();

        var list = await _Tools.ListBodies();

        Assert.That(list.Single(b => b.Name == "Tool").UsedBy, Is.EqualTo(new[] { "Target" }));
        Assert.That(list.Single(b => b.Name == "Target").Shape, Is.EqualTo("BooleanCut"));
    }

    #endregion

    //--------------------------------------------------------------------------------------------------

    #region get_body

    [Test]
    public async Task GetBody()
    {
        await _Primitives.CreateBox(10, 20, 30, 1, 2, 3, "Box");

        var details = await _Tools.GetBody("Box");

        Assert.That(details.Name, Is.EqualTo("Box"));
        Assert.That(details.Position, Is.EqualTo(new[] { 1.0, 2.0, 3.0 }));
        Assert.That(details.ShapeStack, Is.EqualTo(new[] { "Box" }));
        Assert.That(details.HasErrors, Is.False);
        Assert.That(details.Errors, Is.Empty);
        Assert.That(details.Volume, Is.EqualTo(6000).Within(1e-3));
        Assert.That(details.Area, Is.EqualTo(2 * (200 + 600 + 300)).Within(1e-3));

        var bb = details.BoundingBox;
        Assert.That(bb, Is.Not.Null);
        Assert.That(bb.MinX, Is.EqualTo(1).Within(1e-3));
        Assert.That(bb.MinY, Is.EqualTo(2).Within(1e-3));
        Assert.That(bb.MinZ, Is.EqualTo(3).Within(1e-3));
        Assert.That(bb.SizeX, Is.EqualTo(10).Within(1e-3));
        Assert.That(bb.SizeY, Is.EqualTo(20).Within(1e-3));
        Assert.That(bb.SizeZ, Is.EqualTo(30).Within(1e-3));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task GetBody_CylinderBoundingBoxIsTight()
    {
        await _Primitives.CreateCylinder(5, 10, name: "Cyl");

        var bb = (await _Tools.GetBody("Cyl")).BoundingBox;

        Assert.That(bb.SizeX, Is.EqualTo(10).Within(1e-3));
        Assert.That(bb.SizeY, Is.EqualTo(10).Within(1e-3));
        Assert.That(bb.SizeZ, Is.EqualTo(10).Within(1e-3));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task GetBody_ShapeStackTopFirst()
    {
        CreateCutBodies();

        var details = await _Tools.GetBody("Target");

        Assert.That(details.ShapeStack, Is.EqualTo(new[] { "BooleanCut", "Box" }));
        Assert.That(details.Volume, Is.LessThan(1000));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void GetBody_Unknown()
    {
        Assert.ThrowsAsync<McpException>(async () => await _Tools.GetBody("Nothing"));
    }

    #endregion

    //--------------------------------------------------------------------------------------------------

    #region rename_body

    [Test]
    public async Task RenameBody()
    {
        var info = await _Primitives.CreateBox(1, 1, 1, name: "Old");

        var renamed = await _Tools.RenameBody(info.Guid, "New");

        Assert.That(renamed.Name, Is.EqualTo("New"));
        Assert.That(FindBody("New").Guid.ToString(), Is.EqualTo(info.Guid));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task RenameBody_SameName_Unchanged()
    {
        await _Primitives.CreateBox(1, 1, 1, name: "Same");

        Assert.That((await _Tools.RenameBody("Same", "Same")).Name, Is.EqualTo("Same"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task RenameBody_NameTaken_GetsUniqueName()
    {
        await _Primitives.CreateBox(1, 1, 1, name: "A");
        await _Primitives.CreateBox(1, 1, 1, name: "B");

        var renamed = await _Tools.RenameBody("B", "A");

        Assert.That(renamed.Name, Is.Not.EqualTo("A").And.StartsWith("A"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task RenameBody_EmptyName()
    {
        await _Primitives.CreateBox(1, 1, 1, name: "A");

        Assert.ThrowsAsync<McpException>(async () => await _Tools.RenameBody("A", " "));
    }

    #endregion

    //--------------------------------------------------------------------------------------------------

    #region delete_body

    [Test]
    public async Task DeleteBody()
    {
        await _Primitives.CreateBox(1, 1, 1, name: "A");

        await _Tools.DeleteBody("A");

        Assert.That(CoreContext.Current.Document.EntityCount, Is.Zero);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task DeleteBody_IsUndoable()
    {
        await _Primitives.CreateBox(1, 1, 1, name: "A");
        await _Tools.DeleteBody("A");

        CoreContext.Current.UndoHandler.DoUndo(1);

        Assert.That(FindBody("A"), Is.Not.Null);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task DeleteBody_UsedAsOperand_KeepsUser()
    {
        var target = CreateCutBodies();
        var volumeBefore = (await _Tools.GetBody("Target")).Volume;

        var result = await _Tools.DeleteBody("Tool");

        Assert.That(result, Does.Contain("Target"));
        Assert.That(CoreContext.Current.Document.OfType<Body>().Select(b => b.Name), Is.EqualTo(new[] { "Target" }));
        Assert.That((await _Tools.GetBody("Target")).Volume, Is.EqualTo(volumeBefore).Within(1e-3));
        Assert.That(target.HasErrors, Is.False);
    }

    #endregion

    //--------------------------------------------------------------------------------------------------

    #region duplicate_body

    [Test]
    public async Task DuplicateBody()
    {
        await _Primitives.CreateBox(10, 10, 10, 1, 2, 3, "A");

        var copy = await _Tools.DuplicateBody("A", "B");

        Assert.That(copy.Name, Is.EqualTo("B"));
        var original = FindBody("A");
        var duplicate = FindBody("B");
        Assert.That(duplicate, Is.Not.SameAs(original));
        Assert.That(duplicate.Shape, Is.Not.SameAs(original.Shape));
        Assert.That(duplicate.Position, Is.EqualTo(new Pnt(1, 2, 3)));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task DuplicateBody_IsIndependent()
    {
        await _Primitives.CreateBox(10, 10, 10, name: "A");
        await _Tools.DuplicateBody("A");

        var copy = CoreContext.Current.Document.OfType<Body>().Single(b => b.Name != "A");
        ((Box)copy.Shape).DimensionX = 20;

        Assert.That(((Box)FindBody("A").Shape).DimensionX, Is.EqualTo(10).Within(1e-6));
        Assert.That(copy.Name, Does.StartWith("A"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task DuplicateBody_CopiesShapeStackAndOperands()
    {
        CreateCutBodies();

        var copy = await _Tools.DuplicateBody("Target", "Copy");

        var details = await _Tools.GetBody(copy.Guid);
        Assert.That(details.ShapeStack, Is.EqualTo(new[] { "BooleanCut", "Box" }));
        var bodies = await _Tools.ListBodies();
        Assert.That(bodies, Has.Count.EqualTo(4));
        Assert.That(bodies.Single(b => b.Name == "Tool").UsedBy, Is.EqualTo(new[] { "Target" }));

        // The copy uses its own operand, with a unique name
        var copiedTool = bodies.Single(b => b.UsedBy.Contains("Copy"));
        Assert.That(copiedTool.Name, Is.Not.EqualTo("Tool"));
        Assert.That(copiedTool.Visible, Is.False);
    }

    #endregion

    //--------------------------------------------------------------------------------------------------

    #region set_visibility

    [Test]
    public async Task SetVisibility()
    {
        await _Primitives.CreateBox(1, 1, 1, name: "A");

        await _Tools.SetVisibility("A", false);
        Assert.That(FindBody("A").IsVisible, Is.False);

        await _Tools.SetVisibility("A", true);
        Assert.That(FindBody("A").IsVisible, Is.True);
    }

    #endregion

    //--------------------------------------------------------------------------------------------------

    #region undo, redo

    [Test]
    public async Task Undo_RemovesCreatedBody()
    {
        await _Primitives.CreateBox(1, 1, 1, name: "A");

        var state = await _Tools.Undo();

        Assert.That(state.Steps, Is.EqualTo(1));
        Assert.That(state.CanRedo, Is.True);
        Assert.That(CoreContext.Current.Document.EntityCount, Is.Zero);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task UndoRedo_MultipleSteps()
    {
        await _Primitives.CreateBox(1, 1, 1, name: "A");
        await _Tools.RenameBody("A", "B");
        await _Tools.SetVisibility("B", false);

        var undo = await _Tools.Undo(2);
        Assert.That(undo.Steps, Is.EqualTo(2));
        Assert.That(FindBody("A").IsVisible, Is.True);

        var redo = await _Tools.Redo(5);
        Assert.That(redo.Steps, Is.EqualTo(2));
        Assert.That(redo.CanRedo, Is.False);
        Assert.That(FindBody("B").IsVisible, Is.False);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Undo_NothingToUndo()
    {
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Undo());
        Assert.ThrowsAsync<McpException>(async () => await _Tools.Redo());
    }

    //--------------------------------------------------------------------------------------------------

    [TestCase(0)]
    [TestCase(-1)]
    public async Task Undo_InvalidSteps(int steps)
    {
        await _Primitives.CreateBox(1, 1, 1);

        Assert.ThrowsAsync<McpException>(async () => await _Tools.Undo(steps));
    }

    #endregion

    //--------------------------------------------------------------------------------------------------

    #region new_document

    [Test]
    public async Task NewDocument()
    {
        var oldDocument = CoreContext.Current.Document;
        await _Primitives.CreateBox(1, 1, 1);
        oldDocument.ResetUnsavedChanges();

        await _Tools.NewDocument();

        Assert.That(CoreContext.Current.Document, Is.Not.SameAs(oldDocument));
        Assert.That(CoreContext.Current.Document.EntityCount, Is.Zero);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task NewDocument_UnsavedChanges_Refused()
    {
        var oldDocument = CoreContext.Current.Document;
        await _Primitives.CreateBox(1, 1, 1);

        var ex = Assert.ThrowsAsync<McpException>(async () => await _Tools.NewDocument());

        Assert.That(ex.Message, Does.Contain("unsaved").And.Contain("discardUnsavedChanges"));
        Assert.That(CoreContext.Current.Document, Is.SameAs(oldDocument));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task NewDocument_DiscardUnsavedChanges()
    {
        var oldDocument = CoreContext.Current.Document;
        await _Primitives.CreateBox(1, 1, 1);

        await _Tools.NewDocument(discardUnsavedChanges: true);

        Assert.That(CoreContext.Current.Document, Is.Not.SameAs(oldDocument));
        Assert.That(CoreContext.Current.Document.EntityCount, Is.Zero);
        Assert.That(CoreContext.Current.Document.HasUnsavedChanges, Is.False);
    }

    #endregion

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    // Creates a box body "Target" with a cylinder "Tool" cut out of it.
    static Body CreateCutBodies()
    {
        var target = Body.Create(Box.Create(10, 10, 10));
        target.Name = "Target";
        CoreContext.Current.Document.Add(target);
        var tool = Body.Create(Cylinder.Create(2, 20));
        tool.Name = "Tool";
        tool.Position = new Pnt(5, 5, -5);
        CoreContext.Current.Document.Add(tool);
        BooleanCut.Create(target, new BodyShapeOperand(tool));
        CoreContext.Current.UndoHandler.Commit();
        return target;
    }
}
