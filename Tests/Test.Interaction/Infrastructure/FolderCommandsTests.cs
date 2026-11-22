using Macad.Interaction;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Interaction.Infrastructure;

[TestFixture]
public class FolderCommandsTests
{
    [SetUp]
    public void SetUp()
    {
        Context.InitWithView(500);
    }

    //--------------------------------------------------------------------------------------------------

    [TearDown]
    public void TearDown()
    {
        Context.Current.Deinit();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateAndRemoveFolder()
    {
        var folders = Context.Current.Document.Folders;
        FolderCommands.CreateFolder.Execute(null);
        Assert.That(folders.Count, Is.EqualTo(1));
        var parent = folders[0];
        Assert.That(parent.Name, Is.EqualTo(FolderUtils.DefaultFolderName));

        FolderCommands.CreateFolder.Execute(parent);
        Assert.That(folders.Count, Is.EqualTo(2));
        Assert.That(folders[1].Parent, Is.EqualTo(parent));

        Assert.That(FolderUtils.RemoveFolders([parent], askUser: false), Is.True);
        Assert.That(folders.Count, Is.EqualTo(1));
        Assert.That(folders[0].Parent, Is.Null);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ExpandToSelection()
    {
        var ctx = Context.Current;
        var body = TestGeomGenerator.CreateBox().Body;
        ctx.Document.Add(body);
        var other = TestGeomGenerator.CreateBox().Body;
        ctx.Document.Add(other);

        var outer = FolderUtils.AddFolder(null);
        var inner = FolderUtils.AddFolder(outer);
        var unrelated = FolderUtils.AddFolder(null);
        Assert.That(FolderUtils.MoveToFolder([body], inner), Is.True);
        Assert.That(FolderUtils.MoveToFolder([other], unrelated), Is.True);
        outer.IsExpanded = false;
        inner.IsExpanded = false;
        unrelated.IsExpanded = false;

        // Nothing selected
        ctx.WorkspaceController.Selection.SelectEntity(null);
        Assert.That(FolderCommands.ExpandToSelection.CanExecute(), Is.False);

        // Body in collapsed folders
        ctx.WorkspaceController.Selection.SelectEntity(body);
        Assert.That(FolderUtils.GetCollapsedFolders([body]), Is.EquivalentTo(new[] { outer, inner }));
        Assert.That(FolderCommands.ExpandToSelection.CanExecute(), Is.True);
        FolderCommands.ExpandToSelection.Execute();

        Assert.That(outer.IsExpanded, Is.True);
        Assert.That(inner.IsExpanded, Is.True);
        Assert.That(unrelated.IsExpanded, Is.False);
        Assert.That(FolderCommands.ExpandToSelection.CanExecute(), Is.False);

        // Not an undo step
        Assert.That(ctx.UndoHandler.HasPendingChanges, Is.False);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RenameFolder()
    {
        var parent = FolderUtils.AddFolder(null);
        var a = FolderUtils.AddFolder(parent);
        var b = FolderUtils.AddFolder(parent);
        var other = FolderUtils.AddFolder(null);

        Assert.That(FolderUtils.RenameFolder(a, "  Parts "), Is.True);
        Assert.That(a.Name, Is.EqualTo("Parts"), "Trimmed");
        Assert.That(Context.Current.UndoHandler.HasPendingChanges, Is.False, "Committed");

        Assert.That(FolderUtils.RenameFolder(b, "Parts"), Is.True);
        Assert.That(b.Name, Is.Not.EqualTo("Parts"), "Unique among siblings");
        Assert.That(b.Name, Does.StartWith("Parts"));

        Assert.That(FolderUtils.RenameFolder(other, "Parts"), Is.True);
        Assert.That(other.Name, Is.EqualTo("Parts"), "Other parent");

        Assert.That(FolderUtils.RenameFolder(a, "Parts"), Is.False, "Unchanged");
        Assert.That(FolderUtils.RenameFolder(a, "   "), Is.False, "Empty");
        Assert.That(FolderUtils.RenameFolder(null, "X"), Is.False);
        Assert.That(a.Name, Is.EqualTo("Parts"));

        Context.Current.UndoHandler.DoUndo(1);
        Assert.That(other.Name, Is.Not.EqualTo("Parts"), "Undoable");
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RenameEntity()
    {
        var ctx = Context.Current;
        var body = TestGeomGenerator.CreateBox().Body;
        ctx.Document.Add(body);
        ctx.UndoHandler.Commit();
        var oldName = body.Name;

        Assert.That(EntityUtils.RenameEntity(body, " Housing  "), Is.True);
        Assert.That(body.Name, Is.EqualTo("Housing"), "Trimmed");
        Assert.That(ctx.UndoHandler.HasPendingChanges, Is.False, "Committed");

        Assert.That(EntityUtils.RenameEntity(body, "Housing"), Is.False, "Unchanged");
        Assert.That(EntityUtils.RenameEntity(body, ""), Is.False, "Empty");
        Assert.That(EntityUtils.RenameEntity(null, "X"), Is.False);

        var notInDocument = TestGeomGenerator.CreateBox().Body;
        Assert.That(EntityUtils.RenameEntity(notInDocument, "X"), Is.False, "Not in document");

        ctx.UndoHandler.DoUndo(1);
        Assert.That(body.Name, Is.EqualTo(oldName), "Undoable");
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MoveToFolderRejectsCycles()
    {
        var outer = FolderUtils.AddFolder(null);
        var inner = FolderUtils.AddFolder(outer);

        Assert.That(FolderUtils.CanMoveToFolder([outer], inner), Is.False);
        Assert.That(FolderUtils.CanMoveToFolder([inner], inner), Is.False);
        Assert.That(FolderUtils.CanMoveToFolder([inner], outer), Is.False, "No change");
        Assert.That(FolderUtils.CanMoveToFolder([inner], null), Is.True);
        Assert.That(FolderUtils.MoveToFolder([inner], null), Is.True);
        Assert.That(inner.Parent, Is.Null);
    }

    //--------------------------------------------------------------------------------------------------
}
