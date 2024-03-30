using System.Collections.Generic;
using Macad.Presentation;
using System.Windows.Input;

namespace Macad.Interaction;

public sealed class Shortcut
{
    public Key Key { get; }
    public ModifierKeys ModifierKeys { get; }
    public IActionCommand Command { get; }
    public object Parameter { get; }

    public Shortcut(Key key, IActionCommand command, object parameter = null)
        : this(key, ModifierKeys.None, command, parameter)
    {
    }

    //--------------------------------------------------------------------------------------------------

    public Shortcut(Key key, ModifierKeys modifierKeys, IActionCommand command, object parameter = null)
    {
        Key = key;
        ModifierKeys = modifierKeys;
        Command = command;
        Parameter = parameter;
    }

    //--------------------------------------------------------------------------------------------------
    
    public IEnumerable<string> GetKeyStrings()
    {
        if (ModifierKeys.HasFlag(ModifierKeys.Control))
            yield return "Ctrl";
        if (ModifierKeys.HasFlag(ModifierKeys.Alt))
            yield return "Alt";
        if (ModifierKeys.HasFlag(ModifierKeys.Shift))
            yield return "Shift";

        yield return Key.ToString();
    }

    //--------------------------------------------------------------------------------------------------

    public string GetKeyString(string separator = " ")
    {
        return string.Join(separator, GetKeyStrings());
    }

    //--------------------------------------------------------------------------------------------------
    
}
