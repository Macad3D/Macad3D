using System.Collections.Generic;
using System.ComponentModel;

namespace Macad.Presentation.TreeView;

public class SelectionChangedCancelEventArgs : CancelEventArgs
{
    public IEnumerable<object> ItemsToUnSelect { get; private set; }
    public IEnumerable<object> ItemsToSelect { get; private set; }

    public SelectionChangedCancelEventArgs(IEnumerable<object> itemsToSelect, IEnumerable<object> itemsToUnSelect)
    {
        ItemsToSelect = itemsToSelect;
        ItemsToUnSelect = itemsToUnSelect;
    }
}