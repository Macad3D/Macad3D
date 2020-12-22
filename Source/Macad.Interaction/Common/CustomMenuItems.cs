using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Windows;
using System.Windows.Controls;
using Macad.Common;
using Macad.Presentation;

namespace Macad.Interaction
{
    public interface ICustomMenuProvider
    {
        void EnrichContextMenu(CustomMenuItems itemList);
    }
    
    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    public sealed class CustomMenuItems : ObservableCollection<Control>
    {
        readonly Stack<MenuItem> _GroupItems = new Stack<MenuItem>();

        //--------------------------------------------------------------------------------------------------

        public void AddCommand(IActionCommand command, object param = null)
        {
            var mi = new MenuItem
            {
                CommandParameter = param
            };
            Command.SetAction(mi, command);

            if (_GroupItems.Count > 0)
                _GroupItems.Peek().Items.Add(mi);
            else
                Add(mi);
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
                _GroupItems.Peek().Items.Add(newSeperator);
            else
                Add(newSeperator);
        }

        //--------------------------------------------------------------------------------------------------

        public void AddGroup(string header)
        {
            var mi = new MenuItem
            {
                Header = header
            };

            if (_GroupItems.Count > 0)
                _GroupItems.Peek().Items.Add(mi);
            else
                Add(mi);

            _GroupItems.Push(mi);
        }

        //--------------------------------------------------------------------------------------------------

        public void CloseGroup()
        {
            if (_GroupItems.Count > 0)
                _GroupItems.Pop();
        }

        //--------------------------------------------------------------------------------------------------

    }
}