using System;
using System.Collections.Generic;
using System.Linq;
using System.Windows.Forms;
using System.Windows.Input;
using Macad.Presentation;
using static System.Formats.Asn1.AsnWriter;

namespace Macad.Interaction;

public enum ShortcutScope
{
    Application,
    Workspace
}

//--------------------------------------------------------------------------------------------------

public class ShortcutHandler
{
    //--------------------------------------------------------------------------------------------------

    readonly Dictionary<ShortcutScope, List<Shortcut>> _ShortcutScopes = new();

    //--------------------------------------------------------------------------------------------------

    public ShortcutHandler()
    {
        // TODO: Read in from external config file
        _ShortcutScopes.Add(ShortcutScope.Application, [
            new(Key.Y, ModifierKeys.Control, WorkspaceCommands.DoRedo),
            new(Key.Z, ModifierKeys.Control, WorkspaceCommands.DoUndo),
            new(Key.C, ModifierKeys.Control, WorkspaceCommands.CopyToClipboard),
            new(Key.X, ModifierKeys.Control, WorkspaceCommands.CutToClipboard),
            new(Key.V, ModifierKeys.Control, WorkspaceCommands.PasteFromClipboard)
        ]);

        _ShortcutScopes.Add(ShortcutScope.Workspace, [
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

        // Register
        IActionCommand.GetShortcutDefaultHandler = GetShortcutForCommand;
    }

    //--------------------------------------------------------------------------------------------------

    public void AddShortcut(ShortcutScope scope, Shortcut shortcut)
    {
        if (!_ShortcutScopes.TryGetValue(scope, out var shortcutList))
        {
            shortcutList = new List<Shortcut>();
            _ShortcutScopes.Add(scope, shortcutList);
        }

        shortcutList.Add(shortcut);
    }

    //--------------------------------------------------------------------------------------------------

    public bool KeyPressed(ShortcutScope scope, Key key, ModifierKeys modifierKeys)
    {
        if (!_ShortcutScopes.ContainsKey(scope))
            return false;

        var shortcut = _ShortcutScopes[scope].Find(s => s.Key == key && s.ModifierKeys == modifierKeys);
        if (shortcut?.Command == null || !shortcut.Command.CanExecute(shortcut.Parameter))
            return false;

        shortcut.Command.Execute(shortcut.Parameter);
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public IEnumerable<Shortcut> GetShortcutsForScope(ShortcutScope scope)
    {
        if (_ShortcutScopes.TryGetValue(scope, out var list))
            return list;

        return Array.Empty<Shortcut>();
    }

    //--------------------------------------------------------------------------------------------------
    
    public string GetShortcutForCommand(IActionCommand command, object param)
    {
        var shortcut = _ShortcutScopes.Values
                                      .Select(list => list.FirstOrDefault(s => s.Command == command && s.Parameter == param))
                                      .FirstOrDefault(s => s != null);
        if(shortcut == null)
            return null;

        return shortcut.GetKeyString();
    }

    //--------------------------------------------------------------------------------------------------

}