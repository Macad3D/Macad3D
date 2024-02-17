
using System.Collections.Generic;
using System.Windows;

namespace Macad.Presentation.TreeView;

public class DropParameters
{
    public readonly TreeViewExItem DropToItem;
    public object DropToObject => DropToItem?.DataContext;
    public readonly IDataObject DropData;
    public IEnumerable<object> DroppedObjects => _Content?.Items;

    public bool IsInsertion => InsertAtIndex != -1;
    public readonly int InsertAtIndex;

    readonly DragContent _Content;

    public DropParameters(TreeViewExItem dropToItem, IDataObject dropData)
        : this(dropToItem, dropData, -1)
    {
    }

    public DropParameters(TreeViewExItem dropToItem, IDataObject dropData, int index)
    {
        this.DropToItem = dropToItem;
        this.DropData = dropData;
        this.InsertAtIndex = index;

        _Content = dropData.GetData(typeof(DragContent)) as DragContent;
    }
                
}