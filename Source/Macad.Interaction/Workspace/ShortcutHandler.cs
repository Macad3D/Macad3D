using System.Collections.Generic;
using System.Windows.Input;
using Macad.Presentation;

namespace Macad.Interaction
{
    public enum ShortcutScope
    {
        Application,
        Workspace
    }

    //--------------------------------------------------------------------------------------------------

    public class ShortcutHandler
    {
        public class Shortcut
        {
            public Key Key { get; }
            public ModifierKeys ModifierKeys { get; }
            public ICommand Command { get; }
            public object Parameter { get; }

            public Shortcut(Key key, ICommand command, object parameter = null)
                : this(key, ModifierKeys.None, command, parameter)
            {
            }

            //--------------------------------------------------------------------------------------------------

            public Shortcut(Key key, ModifierKeys modifierKeys, ICommand command, object parameter = null)
            {
                Key = key;
                ModifierKeys = modifierKeys;
                Command = command;
                Parameter = parameter;

                if (command is IActionCommand actionCommand)
                {
                    actionCommand.Shortcut = GetKeyString();
                }
            }

            //--------------------------------------------------------------------------------------------------

            public string GetKeyString()
            {
                if (ModifierKeys != ModifierKeys.None)
                {
                    return $"{ModifierKeys.ToString()} + {Key.ToString()}";
                }
                else
                {
                    return Key.ToString();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        readonly Dictionary<ShortcutScope, List<Shortcut>> _ShortcutScopes = new();

        //--------------------------------------------------------------------------------------------------

        public ShortcutHandler()
        {
            // TODO: Read in from external config file
            _ShortcutScopes.Add(ShortcutScope.Application, new List<Shortcut>
            {
                new(Key.Y, ModifierKeys.Control, WorkspaceCommands.DoRedo),
                new(Key.Z, ModifierKeys.Control, WorkspaceCommands.DoUndo),
                new(Key.C, ModifierKeys.Control, WorkspaceCommands.CopyToClipboard),
                new(Key.X, ModifierKeys.Control, WorkspaceCommands.CutToClipboard),
                new(Key.V, ModifierKeys.Control, WorkspaceCommands.PasteFromClipboard),
            });

            _ShortcutScopes.Add(ShortcutScope.Workspace, new List<Shortcut>
            {
                new(Key.G, WorkspaceCommands.ToggleGrid),
                new(Key.S, WorkspaceCommands.ToggleSnappingEnabled),
                new(Key.T, WorkspaceCommands.Transform),
                new(Key.W, WorkspaceCommands.AlignWorkingPlane),
                new(Key.Delete, WorkspaceCommands.DeleteEntity),
                new(Key.D, ModifierKeys.Control, WorkspaceCommands.DuplicateEntity),
                new(Key.R, ModifierKeys.Control, ModelCommands.CreateReference),
                new(Key.I, WorkspaceCommands.ToggleIsolateSelection),
                new(Key.E, WorkspaceCommands.StartEditing),
                new(Key.Escape, WorkspaceCommands.Escape),
            });

            // Register
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

        public string GetKeyString(ICommand command)
        {
            foreach (var shortcutScope in _ShortcutScopes)
            {
                foreach (var shortcut in shortcutScope.Value)
                {
                    if (shortcut.Command.Equals(command))
                        return shortcut.GetKeyString();
                }
            }

            return null;
        }
    }
}