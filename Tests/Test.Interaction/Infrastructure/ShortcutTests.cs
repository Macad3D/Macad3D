using System.Linq;
using System.Windows.Input;
using Macad.Interaction;
using NUnit.Framework;

namespace Macad.Test.Interaction.Infrastructure;

[TestFixture]
public class ShortcutTests
{
    [Test]
    public void GetShortcutsForScope()
    {
        ShortcutHandler sh = _CreateAndFillShortcutHandler();
        Assert.That(sh.GetShortcutsForScope("Application").Count(), Is.EqualTo(6));
        Assert.That(sh.GetShortcutsForScope("Workspace").Count(), Is.EqualTo(12));
        Assert.That(sh.GetShortcutsForScope("SketchEditorTool").Count(), Is.EqualTo(7));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void GetShortcutForCommand()
    {
        ShortcutHandler sh = _CreateAndFillShortcutHandler();
        Assert.That(sh.GetShortcutForCommand(WorkspaceCommands.ToggleGrid, null), Is.EqualTo("G"));
        Assert.That(sh.GetShortcutForCommand(WorkspaceCommands.DuplicateEntity, null), Is.EqualTo("Ctrl D"));
        Assert.That(sh.GetShortcutForCommand(SketchCommands.CreateSegment, SketchCommands.Segments.Arc), Is.EqualTo("Ctrl A"));
        Assert.That(sh.GetShortcutForCommand(SketchCommands.CreateSegment, SketchCommands.Segments.Line), Is.EqualTo("Ctrl L"));
    }

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    ShortcutHandler _CreateAndFillShortcutHandler()
    {
        ShortcutHandler handler = new();
        handler.AddShortcuts("Application", [
            new(Key.S, ModifierKeys.Control, DocumentCommands.SaveAll),
            new(Key.Y, ModifierKeys.Control, WorkspaceCommands.DoRedo),
            new(Key.Z, ModifierKeys.Control, WorkspaceCommands.DoUndo),
            new(Key.C, ModifierKeys.Control, WorkspaceCommands.CopyToClipboard),
            new(Key.X, ModifierKeys.Control, WorkspaceCommands.CutToClipboard),
            new(Key.V, ModifierKeys.Control, WorkspaceCommands.PasteFromClipboard)
        ]);

        handler.AddShortcuts("Workspace", [
            new(Key.G, WorkspaceCommands.ToggleGrid),
            new(Key.S, WorkspaceCommands.ToggleSnappingEnabled),
            new(Key.F, WorkspaceCommands.ZoomFitSelected),
            new(Key.F, ModifierKeys.Control, WorkspaceCommands.ZoomFitAll),
            new(Key.T, WorkspaceCommands.Transform),
            new(Key.W, WorkspaceCommands.AlignWorkingPlane),
            new(Key.Delete, WorkspaceCommands.DeleteEntity),
            new(Key.D, ModifierKeys.Control, WorkspaceCommands.DuplicateEntity),
            new(Key.R, ModifierKeys.Control, ModelCommands.CreateReference),
            new(Key.I, WorkspaceCommands.ToggleIsolateSelection),
            new(Key.E, WorkspaceCommands.StartEditing),
            new(Key.Escape, WorkspaceCommands.Escape)
        ]);

        handler.AddShortcuts("SketchEditorTool", [
            new(Key.C, SketchCommands.CreatePolyLine),
            new(Key.P, SketchCommands.SplitElement),
            new(Key.W, SketchCommands.WeldElements),
            new(Key.A, SketchCommands.ToggleAuxiliaryFlag),
            new(Key.R, SketchCommands.RecenterGrid),
            new(Key.A, ModifierKeys.Control, SketchCommands.CreateSegment, SketchCommands.Segments.Arc),
            new(Key.L, ModifierKeys.Control, SketchCommands.CreateSegment, SketchCommands.Segments.Line),
        ]);
        return handler;
    }
}