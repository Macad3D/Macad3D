using System.Linq;
using System.Threading;
using System.Threading.Tasks;
using Macad.Core;
using Macad.Mcp;
using Macad.Test.Utils;
using ModelContextProtocol;
using NUnit.Framework;
using static Macad.Test.Mcp.McpTestUtils;

namespace Macad.Test.Mcp;

[TestFixture]
[Apartment(ApartmentState.STA)]
public class FolderToolsTests
{
    FolderTools _Tools;
    PrimitiveTools _Primitives;
    DocumentTools _Document;

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        Context.InitWithDefault();
        _Tools = new FolderTools();
        _Primitives = new PrimitiveTools();
        _Document = new DocumentTools();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task ListFolders_Empty()
    {
        await _Primitives.CreateBox(1, 1, 1, name: "Box");

        var result = await _Tools.ListFolders();

        Assert.That(result.Folders, Is.Empty);
        Assert.That(result.RootBodies, Is.EqualTo(new[] { "Box" }));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task CreateNestedFolders()
    {
        var parent = await _Tools.CreateFolder("Car");
        var child = await _Tools.CreateFolder("Wheels", parent: "Car");
        var duplicate = await _Tools.CreateFolder("Wheels", parent: parent.Guid);

        Assert.That(child.Parent, Is.EqualTo(parent.Guid));
        Assert.That(child.Path, Is.EqualTo("Car/Wheels"));
        Assert.That(duplicate.Name, Is.EqualTo("Wheels 2"));

        var result = await _Tools.ListFolders();
        Assert.That(result.Folders.Select(f => f.Path), Is.EqualTo(new[] { "Car", "Car/Wheels", "Car/Wheels 2" }));
        Assert.That(result.Folders[0].Folders, Is.EquivalentTo(new[] { "Wheels", "Wheels 2" }));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task MoveBodiesToFolder()
    {
        await _Primitives.CreateBox(1, 1, 1, name: "Box");
        await _Primitives.CreateCylinder(1, 1, name: "Wheel");
        await _Tools.CreateFolder("Car");
        await _Tools.CreateFolder("Wheels", parent: "Car");

        var result = await _Tools.MoveToFolder(bodies: ["Wheel"], folder: "Car/Wheels");

        Assert.That(result.RootBodies, Is.EqualTo(new[] { "Box" }));
        Assert.That(result.Folders.Single(f => f.Name == "Wheels").Bodies, Is.EqualTo(new[] { "Wheel" }));
        Assert.That((await _Document.ListBodies()).Single(b => b.Name == "Wheel").Folder, Is.EqualTo("Car/Wheels"));
        Assert.That((await _Document.GetBody("Wheel")).Folder, Is.EqualTo("Car/Wheels"));
        Assert.That((await _Document.ListBodies()).Single(b => b.Name == "Box").Folder, Is.Null);

        // Back to root, one undo step
        await _Tools.MoveToFolder(bodies: ["Wheel"]);
        Assert.That((await _Tools.ListFolders()).RootBodies, Is.EquivalentTo(new[] { "Box", "Wheel" }));
        CoreContext.Current.UndoHandler.DoUndo(1);
        Assert.That((await _Tools.ListFolders()).RootBodies, Is.EqualTo(new[] { "Box" }));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task MoveFolder_RejectsCycle()
    {
        await _Tools.CreateFolder("A");
        await _Tools.CreateFolder("B", parent: "A");

        var ex = Assert.ThrowsAsync<McpException>(() => _Tools.MoveToFolder(folders: ["A"], folder: "A/B"));
        Assert.That(ex.Message, Does.Contain("cannot be moved"));

        var result = await _Tools.MoveToFolder(folders: ["A/B"]);
        Assert.That(result.Folders.Select(f => f.Path), Is.EquivalentTo(new[] { "A", "B" }));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task RenameFolder()
    {
        var folder = await _Tools.CreateFolder("Old");
        await _Tools.CreateFolder("Taken");

        var renamed = await _Tools.RenameFolder(folder.Guid, "New");
        Assert.That(renamed.Name, Is.EqualTo("New"));

        renamed = await _Tools.RenameFolder("New", "Taken");
        Assert.That(renamed.Name, Is.EqualTo("Taken 2"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task DeleteFolder_MovesContentToParent()
    {
        await _Primitives.CreateBox(1, 1, 1, name: "Box");
        await _Tools.CreateFolder("Parent");
        await _Tools.CreateFolder("Middle", parent: "Parent");
        await _Tools.CreateFolder("Child", parent: "Parent/Middle");
        await _Tools.MoveToFolder(bodies: ["Box"], folder: "Middle");

        var result = await _Tools.DeleteFolder("Middle");

        Assert.That(result.Folders.Select(f => f.Path), Is.EqualTo(new[] { "Parent", "Parent/Child" }));
        Assert.That(result.Folders[0].Bodies, Is.EqualTo(new[] { "Box" }));

        CoreContext.Current.UndoHandler.DoUndo(1);
        result = await _Tools.ListFolders();
        Assert.That(result.Folders.Select(f => f.Path), Is.EqualTo(new[] { "Parent", "Parent/Middle", "Parent/Middle/Child" }));
        Assert.That(result.Folders[1].Bodies, Is.EqualTo(new[] { "Box" }));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task ResolveFolder_Errors()
    {
        await _Tools.CreateFolder("A");
        await _Tools.CreateFolder("X", parent: "A");
        await _Tools.CreateFolder("X");

        Assert.ThrowsAsync<McpException>(() => _Tools.RenameFolder("Missing", "Y"));
        var ex = Assert.ThrowsAsync<McpException>(() => _Tools.RenameFolder("X", "Y"));
        Assert.That(ex.Message, Does.Contain("Use the path or guid"));

        var renamed = await _Tools.RenameFolder("A/X", "Y");
        Assert.That(renamed.Path, Is.EqualTo("A/Y"));
    }

    //--------------------------------------------------------------------------------------------------
}
