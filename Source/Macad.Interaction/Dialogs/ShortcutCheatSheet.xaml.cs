using System;
using System.Collections.Generic;
using System.Linq;
using System.Windows;
using System.Windows.Data;
using Macad.Common;
using Macad.Presentation;

namespace Macad.Interaction.Dialogs;

public partial class ShortcutCheatSheet : Dialog
{
    public struct ShortcutInfo
    {
        public string Scope { get; init; }
        public string Title { get; init; }
        public string Description { get; init; }
        public IEnumerable<string> Keys { get; init; }
    }

    //--------------------------------------------------------------------------------------------------

    public List<ShortcutInfo> Shortcuts { get; } = new();

    //--------------------------------------------------------------------------------------------------

    public ShortcutCheatSheet()
    {
        _CreateShortcutList();

        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

    void _CreateShortcutList()
    {
        var scopes = InteractiveContext.Current.ShortcutHandler.GetScopes();
        foreach (var scope in scopes)
        {
            var shortcuts = InteractiveContext.Current.ShortcutHandler.GetShortcutsForScope(scope);
            foreach (var shortcut in shortcuts)
            {
                ShortcutInfo si = new()
                {
                    Scope = StringUtils.CamelCaseToWords(scope),
                    Title = shortcut.Command.GetTitle(shortcut.Parameter) ?? shortcut.Command.GetHeader(shortcut.Parameter),
                    Description = shortcut.Command.GetDescription(shortcut.Parameter),
                    Keys = shortcut.GetKeyStrings()
                };
                Shortcuts.Add(si);
            }
        }

        CollectionView view = (CollectionView)CollectionViewSource.GetDefaultView(Shortcuts);
        PropertyGroupDescription groupDescription = new PropertyGroupDescription(nameof(ShortcutInfo.Scope));
        view.GroupDescriptions.Add(groupDescription);
    }

    //--------------------------------------------------------------------------------------------------
    
    public static bool Execute(Window ownerWindow)
    {
        ShortcutCheatSheet dlg = new ()
        {
            Owner = ownerWindow
        };
        return dlg.ShowDialog();
    }

    //--------------------------------------------------------------------------------------------------

}