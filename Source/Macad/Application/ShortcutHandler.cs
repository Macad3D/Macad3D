using System.Collections.Generic;
using System.Windows.Input;
using Macad.Interaction;
using Macad.Presentation;

namespace Macad.Window
{
    public enum ShortcutScope
    {
        Application,
        Workspace
    }

    public class ShortcutHandler
    {
        class Shortcut
        {
            public Key Key { get; }
            public ModifierKeys ModifierKeys { get; }
            public ICommand Command { get; }
            public object Parameter { get; }

            public Shortcut(Key key, ICommand command, object parameter = null)
                : this(key, ModifierKeys.None, command, parameter)
            {
            }

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
                new(Key.F1, ApplicationCommands.Help),
                new(Key.Escape, WorkspaceCommands.Escape),
                new(Key.Y, ModifierKeys.Control, WorkspaceCommands.DoRedoCommand),
                new(Key.Z, ModifierKeys.Control, WorkspaceCommands.DoUndoCommand),
                new(Key.C, ModifierKeys.Control, WorkspaceCommands.CopyToClipboardCommand),
                new(Key.X, ModifierKeys.Control, WorkspaceCommands.CutToClipboardCommand),
                new(Key.V, ModifierKeys.Control, WorkspaceCommands.PasteFromClipboardCommand),
                new(Key.S, ModifierKeys.Control, DocumentCommands.SaveAll),
            });

            _ShortcutScopes.Add(ShortcutScope.Workspace, new List<Shortcut>
            {
                new(Key.G, WorkspaceCommands.ToggleGrid),
                new(Key.S, WorkspaceCommands.ToggleSnappingEnabled),
                new(Key.T, WorkspaceCommands.TransformShape),
                new(Key.W, WorkspaceCommands.AlignWorkingPlane),
                new(Key.Delete, WorkspaceCommands.DeleteEntityCommand),
                new(Key.D, ModifierKeys.Control, WorkspaceCommands.DuplicateEntityCommand),
                new(Key.R, ModifierKeys.Control, ModelCommands.CreateReference),
                new(Key.Space, WorkspaceCommands.ToggleIsolateSelection),
            });

            // Register
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