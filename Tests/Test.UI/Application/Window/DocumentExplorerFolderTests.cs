using System.Linq;
using System.Threading;
using FlaUI.Core.Definitions;
using FlaUI.Core.Input;
using FlaUI.Core.WindowsAPI;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Application.Window;

[TestFixture]
public class DocumentExplorerFolderTests : UITestBase
{
    [SetUp]
    public void SetUp()
    {
        Reset();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AddFolderFromToolbarMenu()
    {
        _AddFolder("MyFolder");

        Assert.That(Pipe.GetValue<int>("$Context.Document.Folders.Count"), Is.EqualTo(1));
        Assert.That(Pipe.GetValue<string>("$Context.Document.Folders.[0].Name"), Is.EqualTo("MyFolder"));
        var folders = MainWindow.Document.GetFolderItems().ToArray();
        Assert.That(folders.Length, Is.EqualTo(1));
        Assert.That(folders[0].Text, Is.EqualTo("MyFolder"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FoldersAreShownBeforeEntities()
    {
        TestDataGenerator.GenerateBox(MainWindow);
        _AddFolder("MyFolder");

        var items = MainWindow.Document.GetItems().ToArray();
        Assert.That(items.Select(i => i.Text), Is.EqualTo(new[] { "MyFolder", "Box_1" }));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AddNestedFolderFromContextMenu()
    {
        _AddFolder("Parent");
        var parent = MainWindow.Document.FindItem("Parent");
        MainWindow.Document.RightClickItem(parent);
        Assert.That(ContextMenuAdaptor.IsContextMenuOpen(MainWindow, "DocumentTreeContextMenu"));
        new ContextMenuAdaptor(MainWindow, "DocumentTreeContextMenu").ClickMenuItem("AddFolder");
        _TypeName("Child");

        Assert.That(Pipe.GetValue<int>("$Context.Document.Folders.Count"), Is.EqualTo(2));
        Assert.That(Pipe.GetValue("$Context.Document.Folders.[1].Parent.Name"), Does.Contain("Parent"));
        Assert.That(MainWindow.Document.GetFolderItems().Count(), Is.EqualTo(1));
        Assert.That(MainWindow.Document.FindItem("Child"), Is.Not.Null);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RenameFolderWithF2()
    {
        _AddFolder("Old");
        MainWindow.Document.SelectItem("Old");
        Pipe.TypeKey(VirtualKeyShort.F2);
        _TypeName("New");

        Assert.That(Pipe.GetValue<string>("$Context.Document.Folders.[0].Name"), Is.EqualTo("New"));
        Assert.That(MainWindow.Document.FindItem("New"), Is.Not.Null);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RenameFolderCanBeCancelled()
    {
        _AddFolder("Old");
        MainWindow.Document.SelectItem("Old");
        _ClickExplorerMenuItem("RenameFolder");
        Pipe.TypeText("New");
        Pipe.TypeKey(VirtualKeyShort.ESCAPE);

        Assert.That(Pipe.GetValue<string>("$Context.Document.Folders.[0].Name"), Is.EqualTo("Old"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RenameEntityWithF2()
    {
        TestDataGenerator.GenerateBox(MainWindow);
        MainWindow.Document.SelectItem("Box_1");
        Pipe.TypeKey(VirtualKeyShort.F2);
        _TypeName("Housing");

        Assert.That(Pipe.GetValue<string>("$Selected.Name"), Is.EqualTo("Housing"));
        Assert.That(MainWindow.Document.GetItems().Select(i => i.Text), Is.EqualTo(new[] { "Housing" }));

        // Undo restores the name
        _ClickRibbonButton("Undo");
        Assert.That(MainWindow.Document.GetItems().Select(i => i.Text), Is.EqualTo(new[] { "Box_1" }));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RenameEntityFromContextMenu()
    {
        TestDataGenerator.GenerateBox(MainWindow);
        var menu = "DocumentTreeContextMenu";

        // Cancelled
        MainWindow.Document.RightClickItem(MainWindow.Document.FindItem("Box_1"));
        new ContextMenuAdaptor(MainWindow, menu).ClickMenuItem("RenameEntity");
        Thread.Sleep(200); // Rename box is opened deferred
        Pipe.TypeText("Housing");
        Pipe.TypeKey(VirtualKeyShort.ESCAPE);
        Assert.That(Pipe.GetValue<string>("$Selected.Name"), Is.EqualTo("Box_1"));

        // Accepted
        MainWindow.Document.RightClickItem(MainWindow.Document.FindItem("Box_1"));
        new ContextMenuAdaptor(MainWindow, menu).ClickMenuItem("RenameEntity");
        _TypeName("Housing");
        Assert.That(Pipe.GetValue<string>("$Selected.Name"), Is.EqualTo("Housing"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RenameEntityInCollapsedFolderFromToolbarMenu()
    {
        TestDataGenerator.GenerateBox(MainWindow);
        _AddFolder("MyFolder");
        MainWindow.Viewport.ClickRelative(0.1, 0.1); // Deselect
        MainWindow.Document.DragItem(MainWindow.Document.FindItem("Box_1"), MainWindow.Document.FindItem("MyFolder"));
        MainWindow.Document.SelectItem("MyFolder");
        Pipe.TypeKey(VirtualKeyShort.LEFT);
        Assert.That(_IsExpanded("MyFolder"), Is.False);

        // Select the box in the viewport, it is hidden in the collapsed folder
        MainWindow.Viewport.ClickRelative(0.45, 0.45);
        _ClickExplorerMenuItem("RenameEntity");
        _TypeName("Housing");

        Assert.That(_IsExpanded("MyFolder"), Is.True, "Folder is expanded to show the rename box");
        Assert.That(Pipe.GetValue<string>("$Selected.Name"), Is.EqualTo("Housing"));
        Assert.That(MainWindow.Document.FindItem("MyFolder").Items.Select(i => i.Text), Is.EqualTo(new[] { "Housing" }));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void DragBodyIntoFolderAndBack()
    {
        TestDataGenerator.GenerateBox(MainWindow);
        _AddFolder("MyFolder");
        MainWindow.Viewport.ClickRelative(0.1, 0.1); // Deselect

        var box = MainWindow.Document.FindItem("Box_1");
        var folder = MainWindow.Document.FindItem("MyFolder");
        MainWindow.Document.DragItem(box, folder);

        // Only the folder is at root, the box is inside
        Assert.That(MainWindow.Document.GetItems().Select(i => i.Text), Is.EqualTo(new[] { "MyFolder" }));
        Assert.That(MainWindow.Document.FindItem("MyFolder").Items.Select(i => i.Text), Is.EqualTo(new[] { "Box_1" }));

        // Undo moves it back
        _ClickRibbonButton("Undo");
        Assert.That(MainWindow.Document.GetItems().Select(i => i.Text), Is.EqualTo(new[] { "MyFolder", "Box_1" }));
        _ClickRibbonButton("Redo");
        Assert.That(MainWindow.Document.GetItems().Select(i => i.Text), Is.EqualTo(new[] { "MyFolder" }));

        // Drop on empty space moves to root
        box = MainWindow.Document.FindItem("Box_1");
        MainWindow.Document.DragItem(box, MainWindow.Document.GetEmptyTreePoint());
        Assert.That(MainWindow.Document.GetItems().Select(i => i.Text), Is.EqualTo(new[] { "MyFolder", "Box_1" }));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void DragFolderIntoFolder()
    {
        _AddFolder("A");
        _AddFolderAtRoot("B");

        MainWindow.Document.DragItem(MainWindow.Document.FindItem("B"), MainWindow.Document.FindItem("A"));
        Assert.That(MainWindow.Document.GetItems().Select(i => i.Text), Is.EqualTo(new[] { "A" }));

        // Parent can not be dropped into its child
        MainWindow.Document.DragItem(MainWindow.Document.FindItem("A"), MainWindow.Document.FindItem("B"));
        Assert.That(MainWindow.Document.GetItems().Select(i => i.Text), Is.EqualTo(new[] { "A" }));
        Assert.That(MainWindow.Document.FindItem("A").Items.Select(i => i.Text), Is.EqualTo(new[] { "B" }));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ExpandToSelection()
    {
        TestDataGenerator.GenerateBox(MainWindow);
        _AddFolder("MyFolder");
        MainWindow.Viewport.ClickRelative(0.1, 0.1); // Deselect
        MainWindow.Document.DragItem(MainWindow.Document.FindItem("Box_1"), MainWindow.Document.FindItem("MyFolder"));
        MainWindow.Document.SelectItem("MyFolder");
        Pipe.TypeKey(VirtualKeyShort.LEFT);
        Assert.That(_IsExpanded("MyFolder"), Is.False);

        // Select the box in the viewport, it is hidden in the collapsed folder
        MainWindow.Viewport.ClickRelative(0.45, 0.45);
        Assert.That(Pipe.GetValue<int>("$Context.WorkspaceController.Selection.SelectedEntities.Count"), Is.EqualTo(1));

        _ClickExplorerMenuItem("ExpandToSelection");
        Assert.That(_IsExpanded("MyFolder"), Is.True);
        Assert.That(Pipe.GetValue<bool>("$Context.Document.Folders.[0].IsExpanded"), Is.True);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CollapseAndExpandFolder()
    {
        TestDataGenerator.GenerateBox(MainWindow);
        _AddFolder("MyFolder");
        MainWindow.Viewport.ClickRelative(0.1, 0.1); // Deselect
        MainWindow.Document.DragItem(MainWindow.Document.FindItem("Box_1"), MainWindow.Document.FindItem("MyFolder"));
        Assert.That(Pipe.GetValue<bool>("$Context.Document.Folders.[0].IsExpanded"), Is.True);

        MainWindow.Document.SelectItem("MyFolder");
        Pipe.TypeKey(VirtualKeyShort.LEFT);
        Assert.That(Pipe.GetValue<bool>("$Context.Document.Folders.[0].IsExpanded"), Is.False);
        Assert.That(_IsExpanded("MyFolder"), Is.False);

        Pipe.TypeKey(VirtualKeyShort.RIGHT);
        Assert.That(Pipe.GetValue<bool>("$Context.Document.Folders.[0].IsExpanded"), Is.True);
        Assert.That(_IsExpanded("MyFolder"), Is.True);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RemoveFolderMovesContentToRoot()
    {
        TestDataGenerator.GenerateBox(MainWindow);
        _AddFolder("MyFolder");
        MainWindow.Viewport.ClickRelative(0.1, 0.1); // Deselect
        MainWindow.Document.DragItem(MainWindow.Document.FindItem("Box_1"), MainWindow.Document.FindItem("MyFolder"));

        var folder = MainWindow.Document.FindItem("MyFolder");
        MainWindow.Document.RightClickItem(folder);
        new ContextMenuAdaptor(MainWindow, "DocumentTreeContextMenu").ClickMenuItem("RemoveFolder");
        Assert.That(TaskDialogAdaptor.IsTaskDialogOpen(MainWindow));
        new TaskDialogAdaptor(MainWindow).ClickButton(TaskDialogAdaptor.Button.Ok);

        Assert.That(Pipe.GetValue<int>("$Context.Document.Folders.Count"), Is.EqualTo(0));
        Assert.That(Pipe.GetValue<int>("$Context.Document.EntityCount"), Is.EqualTo(1));
        Assert.That(MainWindow.Document.GetItems().Select(i => i.Text), Is.EqualTo(new[] { "Box_1" }));

        // Undo restores the folder with its content
        _ClickRibbonButton("Undo");
        Assert.That(Pipe.GetValue<int>("$Context.Document.Folders.Count"), Is.EqualTo(1));
        Assert.That(MainWindow.Document.GetItems().Select(i => i.Text), Is.EqualTo(new[] { "MyFolder" }));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RemoveFolderWithDeleteKey()
    {
        _AddFolder("MyFolder");
        MainWindow.Document.SelectItem("MyFolder");
        // Real input, the pipe would block while the modal dialog is open
        Keyboard.Type(VirtualKeyShort.DELETE);
        Wait.UntilInputIsProcessed();
        Assert.That(TaskDialogAdaptor.IsTaskDialogOpen(MainWindow));
        new TaskDialogAdaptor(MainWindow).ClickButton(TaskDialogAdaptor.Button.Ok);

        Assert.That(Pipe.GetValue<int>("$Context.Document.Folders.Count"), Is.EqualTo(0));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FilterShowsOnlyFoldersWithMatches()
    {
        TestDataGenerator.GenerateBox(MainWindow);
        _AddFolder("WithBox");
        _AddFolderAtRoot("Empty");
        MainWindow.Viewport.ClickRelative(0.1, 0.1); // Deselect
        MainWindow.Document.DragItem(MainWindow.Document.FindItem("Box_1"), MainWindow.Document.FindItem("WithBox"));

        // Collapse folder, filtering must show it expanded
        MainWindow.Document.SelectItem("WithBox");
        Pipe.TypeKey(VirtualKeyShort.LEFT);
        Assert.That(_IsExpanded("WithBox"), Is.False);

        MainWindow.Document.EnterValue("FilterStringBox", "box", true);
        Thread.Sleep(500); // Filter string is processed deferred
        Assert.That(MainWindow.Document.GetItems().Select(i => i.Text), Is.EqualTo(new[] { "WithBox" }));
        Assert.That(_IsExpanded("WithBox"), Is.True);

        // Reset restores folders and collapsed state
        MainWindow.Document.Click("ResetNameFilter");
        Assert.That(MainWindow.Document.GetItems().Select(i => i.Text), Is.EqualTo(new[] { "Empty", "WithBox" }));
        Assert.That(_IsExpanded("WithBox"), Is.False);
        Assert.That(Pipe.GetValue<bool>("$Context.Document.Folders.[0].IsExpanded"), Is.False);
    }

    //--------------------------------------------------------------------------------------------------

    #region Helper

    bool _IsExpanded(string folderName)
    {
        var item = MainWindow.Document.FindItem(folderName);
        Assert.That(item, Is.Not.Null, $"Folder {folderName} not found");
        return item.ExpandCollapseState == ExpandCollapseState.Expanded;
    }

    //--------------------------------------------------------------------------------------------------

    void _ClickRibbonButton(string id)
    {
        MainWindow.Ribbon.SelectTab(RibbonTabs.Edit);
        MainWindow.Ribbon.ClickButton(id);
        Thread.Sleep(200); // Explorer is updated deferred
    }

    //--------------------------------------------------------------------------------------------------

    void _ClickExplorerMenuItem(string id)
    {
        MainWindow.Document.Click("ExplorerMenu");
        Assert.That(ContextMenuAdaptor.IsContextMenuOpen(MainWindow, "ExplorerContextMenu"));
        new ContextMenuAdaptor(MainWindow, "ExplorerContextMenu").ClickMenuItem(id);
    }

    //--------------------------------------------------------------------------------------------------

    void _TypeName(string name)
    {
        Thread.Sleep(200); // Rename box is opened deferred
        Pipe.TypeText(name);
        Pipe.TypeKey(VirtualKeyShort.ENTER);
        Wait.UntilInputIsProcessed();
    }

    //--------------------------------------------------------------------------------------------------

    void _AddFolder(string name)
    {
        _ClickExplorerMenuItem("AddFolder");
        _TypeName(name);
    }

    //--------------------------------------------------------------------------------------------------

    void _AddFolderAtRoot(string name)
    {
        // Click on empty space to deselect everything, so the folder is added at root
        MainWindow.Document.RightClickItemAt(MainWindow.Document.GetEmptyTreePoint());
        Pipe.TypeKey(VirtualKeyShort.ESCAPE); // Close context menu
        _AddFolder(name);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}
