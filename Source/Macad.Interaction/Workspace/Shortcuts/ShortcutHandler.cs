using System;
using System.Collections.Generic;
using System.Linq;
using System.Windows.Input;
using Macad.Presentation;

namespace Macad.Interaction;

public sealed class ShortcutHandler
{
    //--------------------------------------------------------------------------------------------------

    readonly Dictionary<string, List<Shortcut>> _ShortcutScopes = new();

    //--------------------------------------------------------------------------------------------------

    public ShortcutHandler()
    {
        // Register to action
        IActionCommand.GetShortcutDefaultHandler = GetShortcutForCommand;
    }

    //--------------------------------------------------------------------------------------------------

    public IEnumerable<string> GetScopes()
    {
        return _ShortcutScopes.Keys;
    }

    //--------------------------------------------------------------------------------------------------

    public void AddShortcut(string scope, Shortcut shortcut)
    {
        if (!_ShortcutScopes.TryGetValue(scope, out var shortcutList))
        {
            shortcutList = new List<Shortcut>();
            _ShortcutScopes.Add(scope, shortcutList);
        }

        shortcutList.Add(shortcut);
    }

    //--------------------------------------------------------------------------------------------------

    public void AddShortcuts(string scope, IEnumerable<Shortcut> shortcut)
    {
        if (!_ShortcutScopes.TryGetValue(scope, out var shortcutList))
        {
            shortcutList = new List<Shortcut>();
            _ShortcutScopes.Add(scope, shortcutList);
        }

        shortcutList.AddRange(shortcut);
    }

    //--------------------------------------------------------------------------------------------------
    
    public bool KeyPressed(string scope, Key key, ModifierKeys modifierKeys)
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

    public IEnumerable<Shortcut> GetShortcutsForScope(string scope)
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