
namespace Macad.Presentation.TreeView;

public class DragParameters
{
    public readonly TreeViewExItem DragItem;
    public object DraggedObject => DragItem?.DataContext;

    public DragParameters(TreeViewExItem dragItem)
    {
        DragItem = dragItem;
    }
}