using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Windows;
using System.Windows.Automation;
using System.Windows.Controls;
using Macad.Common;
using Macad.Presentation;

namespace Macad.Interaction;

public interface IContextMenuItemProvider
{
    void EnrichContextMenu(ContextMenuItems itemList);
}
    
//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

public sealed class ContextMenuItems : ObservableCollection<Control>
{
    readonly Stack<MenuItem> _GroupItems = new();

    //--------------------------------------------------------------------------------------------------

    public void AddCommand(IActionCommand command, object param = null, string overrideTitle = null)
    {
        var mi = new MenuItem
        {
            CommandParameter = param
        };

        var autoId = command.GetHeader(param) ?? command.GetTitle(param);
        if (!autoId.IsNullOrEmpty())
        {
            AutomationProperties.SetAutomationId(mi, autoId);
        }

        Command.SetAction(mi, command);

        if (!overrideTitle.IsNullOrEmpty())
        {
            mi.Header = overrideTitle;
        }

        if (_GroupItems.Count > 0)
        {
            var gi = _GroupItems.Peek();
            gi.Items.Add(mi);
            gi.IsEnabled = true;
        }
        else
        {
            Add(mi);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void AddCommandIfExecutable(IActionCommand command, object param, string overrideTitle = null)
    {
        if (command.CanExecute(param))
        {
            AddCommand(command, param, overrideTitle);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void AddSeparator(string header = null)
    {
        Control newSeperator = header.IsNullOrEmpty() ? new Separator() 
                                   : (Control)new MenuItem()
                                   {
                                       Header = header,
                                       Style = Application.Current.FindResource("Macad.Styles.MenuItem.GroupHeader") as Style
                                   };
        if (_GroupItems.Count > 0)
        {
            _GroupItems.Peek().Items.Add(newSeperator);
        }
        else
        {
            Add(newSeperator);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void AddGroup(string header)
    {
        var mi = new MenuItem
        {
            Header = header,
            IsEnabled = false
        };

        if (_GroupItems.Count > 0)
        {
            _GroupItems.Peek().Items.Add(mi);
        }
        else
        {
            Add(mi);
        }

        _GroupItems.Push(mi);
    }

    //--------------------------------------------------------------------------------------------------

    public void CloseGroup()
    {
        if (_GroupItems.Count > 0)
        {
            _GroupItems.Pop();
        }
    }

    //--------------------------------------------------------------------------------------------------

}