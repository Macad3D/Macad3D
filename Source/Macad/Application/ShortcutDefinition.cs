using System.Windows.Input;
using Macad.Interaction;

namespace Macad.Window;

internal static class ShortcutDefinition
{
    internal static void RegisterShortcuts(ShortcutHandler handler)
    {
        handler.AddShortcuts("Application", [
            new(Key.F1, AppCommands.ShowHelp),
            new(Key.F1, ModifierKeys.Control, AppCommands.ShowShortcutCheatSheet),
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
            ]);
    }
}