using System.Windows;
using System.Windows.Controls;

namespace Macad.Presentation.TreeView;

using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;

/// <summary>
/// Base for a class, which wants to be provided with mouse events.
/// </summary>
internal class InputSubscriberBase
{
    protected internal TreeViewEx TreeView { get; private set; }

    protected internal bool IsLeftButtonDown { get; set; }

    protected InputSubscriberBase(TreeViewEx treeView)
    {
        TreeView = treeView;
    }

    internal virtual void Initialized()
    {
    }

    internal virtual void OnScrollChanged(ScrollChangedEventArgs e)
    {
    }

    internal virtual void OnMouseDown(MouseButtonEventArgs e)
    {
    }

    internal virtual void OnMouseUp(MouseButtonEventArgs e)
    {
    }

    internal virtual void OnMouseMove(MouseEventArgs e)
    {
    }

    internal Point GetMousePosition()
    {
        Point currentPoint = Mouse.GetPosition(TreeView);
        return currentPoint;
    }

    internal Point GetMousePositionRelativeToContent()
    {
        Point currentPoint = Mouse.GetPosition(TreeView);

        currentPoint = new Point(currentPoint.X + TreeView.ScrollViewer.ContentHorizontalOffset, currentPoint.Y + TreeView.ScrollViewer.ContentVerticalOffset);
        return currentPoint;
    }

    protected bool IsMouseOverAdorner(Point positionRelativeToTree)
    {
        HitTestResult hitTestResult = VisualTreeHelper.HitTest(TreeView, positionRelativeToTree);
        if (hitTestResult == null || hitTestResult.VisualHit == null) return false;

        Adorner item = null;
        DependencyObject currentObject = hitTestResult.VisualHit;

        while (item == null && currentObject != null)
        {
            item = currentObject as Adorner;
            if (item != null) return true;

            currentObject = VisualTreeHelper.GetParent(currentObject);
        }

        return false;
    }

    protected TreeViewExItem GetTreeViewItemUnderMouse(Point positionRelativeToTree)
    {
        FrameworkElement child = TreeView.InputHitTest(positionRelativeToTree) as FrameworkElement;
            
        while (child != null)
        {
            if (child is TreeViewExItem treeViewExItem) return GetVisible(treeViewExItem);
            if (child.DataContext is InsertContent insertContent) return  GetVisible(insertContent.Item);
            if (child is TreeViewEx) return null;
            child = VisualTreeHelper.GetParent(child) as FrameworkElement;
        }

        return null;
    }

    private TreeViewExItem GetVisible(TreeViewExItem treeViewExItem)
    {
        if (treeViewExItem.IsVisible) return treeViewExItem;
        return null;
    }

}