using System;
using System.Linq;
using System.Text.RegularExpressions;
using Macad.Test.Utils;
using Macad.Common.Serialization;
using Macad.Core;
using Macad.Core.Topology;
using NUnit.Framework;

namespace Macad.Test.Core.Infrastructure;

[TestFixture]
public class FolderTests
{
    [SetUp]
    public void SetUp()
    {
        Context.InitWithDefault();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EmptyByDefault()
    {
        var fc = Context.Current.Document.Folders;
        Assert.IsNotNull(fc);
        Assert.That(fc.Count, Is.EqualTo(0));
        Assert.IsNull(fc.Find(Guid.Empty));
        Assert.IsNull(fc.Find(Guid.NewGuid()));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EntityIsAtRootByDefault()
    {
        var body = _CreateBodyInModel();
        Assert.That(body.FolderId, Is.EqualTo(Guid.Empty));
        Assert.IsNull(body.Folder);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AddNestedAndMoveEntity()
    {
        var fc = Context.Current.Document.Folders;
        var parent = new Folder { Name = "Parent" };
        fc.Add(parent);
        var child = new Folder { Name = "Child" };
        fc.Add(child, parent);

        Assert.That(fc.Find(parent.Guid), Is.EqualTo(parent));
        Assert.That(child.Parent, Is.EqualTo(parent));
        Assert.IsNull(parent.Parent);
        Assert.That(fc.GetChildren(null), Is.EquivalentTo(new[] { parent }));
        Assert.That(fc.GetChildren(parent), Is.EquivalentTo(new[] { child }));

        var body = _CreateBodyInModel();
        body.Folder = child;
        Assert.That(body.FolderId, Is.EqualTo(child.Guid));
        Assert.That(body.Folder, Is.EqualTo(child));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void UnknownFolderIdResolvesToRoot()
    {
        var body = _CreateBodyInModel();
        body.FolderId = Guid.NewGuid();
        Assert.IsNull(body.Folder);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CycleDetection()
    {
        var fc = Context.Current.Document.Folders;
        var a = new Folder { Name = "A" };
        fc.Add(a);
        var b = new Folder { Name = "B" };
        fc.Add(b, a);
        var c = new Folder { Name = "C" };
        fc.Add(c, b);

        Assert.That(fc.IsSameOrAncestor(a, c), Is.True);
        Assert.That(fc.IsSameOrAncestor(a, a), Is.True);
        Assert.That(fc.IsSameOrAncestor(c, a), Is.False);
        Assert.That(fc.CanMove(a, c), Is.False);
        Assert.That(fc.CanMove(a, a), Is.False);
        Assert.That(fc.CanMove(c, a), Is.True);
        Assert.That(fc.CanMove(c, null), Is.True);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RemoveMovesContentToParent()
    {
        var fc = Context.Current.Document.Folders;
        var parent = new Folder { Name = "Parent" };
        fc.Add(parent);
        var middle = new Folder { Name = "Middle" };
        fc.Add(middle, parent);
        var child = new Folder { Name = "Child" };
        fc.Add(child, middle);
        var body = _CreateBodyInModel();
        body.Folder = middle;

        fc.Remove(middle);

        Assert.IsNull(fc.Find(middle.Guid));
        Assert.That(child.Parent, Is.EqualTo(parent));
        Assert.That(body.Folder, Is.EqualTo(parent));

        fc.Remove(parent);
        Assert.IsNull(child.Parent);
        Assert.IsNull(body.Folder);
        Assert.That(body.FolderId, Is.EqualTo(Guid.Empty));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Serialization()
    {
        var model = Context.Current.Document;
        var fc = model.Folders;
        var parent = new Folder { Name = "Parent", IsExpanded = false };
        fc.Add(parent);
        var child = new Folder { Name = "Child" };
        fc.Add(child, parent);
        var body = _CreateBodyInModel();
        body.Folder = child;

        var s = Serializer.Serialize(model, new SerializationContext());

        Context.InitWithDefault();
        var newModel = Serializer.Deserialize<Model>(s, new SerializationContext());
        Context.Current.Document = newModel;

        var newParent = newModel.Folders.Find(parent.Guid);
        var newChild = newModel.Folders.Find(child.Guid);
        Assert.IsNotNull(newParent);
        Assert.IsNotNull(newChild);
        Assert.That(newParent.Name, Is.EqualTo("Parent"));
        Assert.That(newParent.IsExpanded, Is.False);
        Assert.That(newChild.IsExpanded, Is.True);
        Assert.That(newChild.Parent, Is.EqualTo(newParent));
        var newBody = newModel.FindInstance(body.Guid) as Body;
        Assert.IsNotNull(newBody);
        Assert.That(newBody.Folder, Is.EqualTo(newChild));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LoadModelWithoutFolders()
    {
        var model = Context.Current.Document;
        var body = _CreateBodyInModel();
        var s = Serializer.Serialize(model, new SerializationContext());
        Assert.That(s, Does.Contain("Folders"));

        // Simulate a file written before folders existed
        s = Regex.Replace(s, @",Folders:!Topology\.FolderCollection\{[^{}]*\}", "");
        Assert.That(s, Does.Not.Contain("Folders"));

        Context.InitWithDefault();
        var newModel = Serializer.Deserialize<Model>(s, new SerializationContext());
        Context.Current.Document = newModel;
        Assert.IsNotNull(newModel.Folders);
        Assert.That(newModel.Folders.Count, Is.EqualTo(0));
        var newBody = newModel.FindInstance(body.Guid) as Body;
        Assert.IsNotNull(newBody);
        Assert.IsNull(newBody.Folder);

        // Folders can be added
        newModel.Folders.Add(new Folder());
        Assert.That(newModel.Folders.Count, Is.EqualTo(1));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void PropertyUndo()
    {
        var fc = Context.Current.Document.Folders;
        var folder = new Folder { Name = "Old" };
        fc.Add(folder);
        var body = _CreateBodyInModel();
        Context.Current.UndoHandler.Commit();

        folder.Name = "New";
        body.Folder = folder;
        Context.Current.UndoHandler.Commit();

        Context.Current.UndoHandler.DoUndo(1);
        Assert.That(folder.Name, Is.EqualTo("Old"));
        Assert.IsNull(body.Folder);

        Context.Current.UndoHandler.DoRedo(1);
        Assert.That(folder.Name, Is.EqualTo("New"));
        Assert.That(body.Folder, Is.EqualTo(folder));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ExpandStateIsNotUndoable()
    {
        var fc = Context.Current.Document.Folders;
        var folder = new Folder { Name = "F" };
        fc.Add(folder);
        Context.Current.UndoHandler.Commit();

        folder.IsExpanded = false;
        Assert.That(Context.Current.UndoHandler.HasPendingChanges, Is.False);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void TopologyUndo()
    {
        var fc = Context.Current.Document.Folders;
        var parent = new Folder { Name = "Parent" };
        fc.Add(parent);
        Context.Current.UndoHandler.Commit();
        var folder = new Folder { Name = "Folder" };
        fc.Add(folder, parent);
        var guid = folder.Guid;
        var body = _CreateBodyInModel();
        body.Folder = folder;
        Context.Current.UndoHandler.Commit();

        // Undo add
        Context.Current.UndoHandler.DoUndo(1);
        Assert.IsNull(fc.Find(guid));
        Context.Current.UndoHandler.DoRedo(1);
        Assert.IsNotNull(fc.Find(guid));
        Assert.That(fc.Find(guid).Name, Is.EqualTo("Folder"));
        Assert.That(fc.Find(guid).Parent, Is.EqualTo(parent));
        // Redo recreated the body instance
        body = Context.Current.Document.FindInstance(body.Guid) as Body;
        Assert.IsNotNull(body);
        Assert.That(body.Folder, Is.EqualTo(fc.Find(guid)));

        // Undo remove restores folder and membership
        fc.Remove(fc.Find(guid));
        Context.Current.UndoHandler.Commit();
        Assert.IsNull(fc.Find(guid));
        Assert.That(body.Folder, Is.EqualTo(parent));

        Context.Current.UndoHandler.DoUndo(1);
        Assert.IsNotNull(fc.Find(guid));
        Assert.That(fc.Find(guid).Parent, Is.EqualTo(parent));
        Assert.That(body.Folder, Is.EqualTo(fc.Find(guid)));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void UniqueName()
    {
        var fc = Context.Current.Document.Folders;
        Assert.That(fc.MakeUniqueName("New Folder", null), Is.EqualTo("New Folder"));
        fc.Add(new Folder { Name = "New Folder" });
        Assert.That(fc.MakeUniqueName("New Folder", null), Is.EqualTo("New Folder 2"));
        fc.Add(new Folder { Name = "New Folder 2" });
        Assert.That(fc.MakeUniqueName("New Folder", null), Is.EqualTo("New Folder 3"));

        // The renamed folder itself does not count
        var self = fc.First(f => f.Name == "New Folder 2");
        Assert.That(fc.MakeUniqueName("New Folder 2", null, self), Is.EqualTo("New Folder 2"));

        // Other parents do not count
        var parent = fc.First();
        Assert.That(fc.MakeUniqueName("New Folder", parent), Is.EqualTo("New Folder"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ExpandStateDoesNotMarkUnsaved()
    {
        var model = Context.Current.Document;
        var folder = new Folder { Name = "F" };
        model.Folders.Add(folder);
        model.ResetUnsavedChanges();

        folder.IsExpanded = false;
        Assert.That(model.HasUnsavedChanges, Is.False);

        folder.Name = "G";
        Assert.That(model.HasUnsavedChanges, Is.True);
    }

    //--------------------------------------------------------------------------------------------------
    //  Helper functions
    //--------------------------------------------------------------------------------------------------

    static Body _CreateBodyInModel()
    {
        var body = TestGeomGenerator.CreateBox().Body;
        Context.Current.Document.Add(body);
        return body;
    }

    //--------------------------------------------------------------------------------------------------

}
