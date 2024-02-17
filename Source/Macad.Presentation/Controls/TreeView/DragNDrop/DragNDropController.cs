using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Input;

namespace Macad.Presentation.TreeView;

using System.Linq;
using System.Windows.Media;

internal sealed class DragNDropController : InputSubscriberBase, IDisposable
{
    readonly AutoScroller _AutoScroller;

    List<TreeViewExItem> _DraggableItems;

    Stopwatch _StopWatch;

    InsertAdorner _InsertAdorner;

    const int DragAreaSize = 5;

    public DragNDropController(TreeViewEx treeViewEx, AutoScroller autoScroller)
        : base(treeViewEx)
    {
        this._AutoScroller = autoScroller;
    }

    internal override void Initialized()
    {
        base.Initialized();
        TreeView.AllowDrop = true;

        TreeView.Drop += OnDrop;
        TreeView.DragOver += OnDragOver;
        TreeView.DragLeave += OnDragLeave;
    }

    void OnDragLeave(object sender, DragEventArgs e)
    {
        if (!IsMouseOverTreeView(e.GetPosition(TreeView)))
        {
            CleanUpAdorners();
        }
    }

    bool IsMouseOverTreeView(Point pos)
    {
        HitTestResult hitTestResult = VisualTreeHelper.HitTest(TreeView, pos);
        if (hitTestResult == null || hitTestResult.VisualHit == null) return false;

        return true;
    }

    public bool Enabled { get; set; }

    bool CanDrag { get { return _DraggableItems != null && _DraggableItems.Count > 0; } }

    internal override void OnMouseDown(MouseButtonEventArgs e)
    {
        base.OnMouseDown(e);
        if (CheckOverScrollBar(e.GetPosition(TreeView))) return;

        // initalize draggable items on click. Doing that in mouse move results in drag operations,
        // when the border is visible.
        _DraggableItems = GetDraggableItems(e.GetPosition(TreeView));
        //if (CanDrag)
        //{
        //e.Handled = true;
        //}
    }

    internal override void OnMouseUp(MouseButtonEventArgs e)
    {
        base.OnMouseUp(e);

        // otherwise drops are triggered even if no node was selected in drop
        _DraggableItems = null;
    }

    internal override void OnMouseMove(MouseEventArgs e)
    {
        if (!IsLeftButtonDown ||CheckOverScrollBar(e.GetPosition(TreeView)))
        {
            CleanUpAdorners();

            return;
        }

        if (!CanDrag) return;

        DragContent dragData = new DragContent();
        foreach (var item in _DraggableItems)
        {
            DragParameters dragParameters = new DragParameters(item);
            TreeView.DragCommand.Execute(dragParameters);
            dragData.Add(dragParameters.DraggedObject);
        }

        DragStart(dragData);
        DragDo(dragData);
        DragEnd();
        e.Handled = true;
    }

    void CleanUpAdorners()
    {
        if (_InsertAdorner != null)
        {
            _InsertAdorner.Dispose();
            _InsertAdorner = null;
        }
    }

    /// <summary>
    /// Scrolls if mouse is pressed and over scroll border. 
    /// </summary>
    /// <param name="position">Mouse position relative to treeView control.</param>
    /// <returns>Returns true if over scroll border, otherwise false.</returns>
    internal bool TryScroll(Point position)
    {
        if (!IsLeftButtonDown) return false;

        double scrollDelta;
        if ((position.Y < AutoScroller.ScrollBorderSize) && _AutoScroller.CanScrollUp)
        {
            //scroll down
            scrollDelta = -AutoScroller.ScrollDelta;
        }
        else if (((TreeView.RenderSize.Height - position.Y) < AutoScroller.ScrollBorderSize) && _AutoScroller.CanScrollDown)
        {
            //scroll up
            scrollDelta = AutoScroller.ScrollDelta;
        }
        else
        {
            _StopWatch = null;
            return false;
        }

        if (_StopWatch == null || _StopWatch.ElapsedMilliseconds > AutoScroller.ScrollDelay)
        {
            _AutoScroller.Scroll(scrollDelta);
            _StopWatch = new Stopwatch();
            _StopWatch.Start();
        }

        return true;
    }

    void DragDo(DragContent dragData)
    {
        DragDrop.DoDragDrop(TreeView, new DataObject(dragData), DragDropEffects.All);
    }

    void DragEnd()
    {
        _AutoScroller.IsEnabled = false;

        // Remove the drag adorner from the adorner layer.
        CleanUpAdorners();

        if (_InsertAdorner != null)
        {
            _InsertAdorner.Dispose();
            _InsertAdorner = null;
        }

        if (_ItemMouseIsOver != null)
        {
            _ItemMouseIsOver.IsCurrentDropTarget = false;
            _ItemMouseIsOver = null;
        }
    }

    void DragStart(DragContent dragData)
    {
        _AutoScroller.IsEnabled = true;
    }

    CanInsertReturn CanInsert(TreeViewExItem item, Func<UIElement, Point> getPositionDelegate, IDataObject data)
    {
        if (TreeView.DropCommand == null) return null;

        if (item == null)
        {
            return null;
        }
        else
        {
            // get position over element
            Size size = item.RenderSize;
            Point positionRelativeToItem = getPositionDelegate(item);

            // decide whether to insert before or after item
            bool after = true;
            if (positionRelativeToItem.Y > DragAreaSize)
            {
                if (size.Height - positionRelativeToItem.Y > DragAreaSize)
                {
                    return null;
                }
            }
            else
            {
                after = false;
            }

            // get index, where to insert
            TreeViewExItem parentItem = item.ParentTreeViewItem;
            ItemContainerGenerator itemContainerGenerator = (parentItem != null)?parentItem.ItemContainerGenerator:TreeView.ItemContainerGenerator;
            int index = itemContainerGenerator.IndexFromContainer(item);                
            if (after)
            {
                // dont allow insertion after item, if item has children
                if (item.HasItems) return null;
                index++;
            }

            // ask if insertion is allowed
            if (TreeView.DropCommand.CanExecute(new DropParameters(parentItem, data, index)))
            {
                return new CanInsertReturn("", index, !after);
            }
        }

        return null;
    }

    bool CanDrop(TreeViewExItem item, IDataObject data)
    {
        if (TreeView.DropCommand == null) return false;

        return TreeView.DropCommand.CanExecute(new DropParameters(item, data));
    }

    void OnDrop(object sender, DragEventArgs e)
    {
        e.Handled = true;

        TreeViewExItem item = GetTreeViewItemUnderMouse(e.GetPosition(TreeView));
        //if (item == null)
        //{
        //    CleanUpAdorners();
        //    return;
        //}

        CanInsertReturn canInsertReturn = CanInsert(item, e.GetPosition, e.Data);
        if (canInsertReturn != null)
        {
            // insert and return
            TreeView.DropCommand.Execute(new DropParameters(item.ParentTreeViewItem, e.Data, canInsertReturn.Index));
            CleanUpAdorners();
            return;
        }

        // check if drop is possible
        if (CanDrop(item, e.Data))
        {
            // drop and return
            TreeView.DropCommand.Execute(new DropParameters(item, e.Data));
        }

        DragEnd();
    }

    TreeViewExItem _ItemMouseIsOver;
    void OnDragOver(object sender, DragEventArgs e)
    {
        e.Effects = DragDropEffects.None;
        e.Handled = true;

        // drag over is the only event which returns the position
        Point point = e.GetPosition(TreeView);

        if (TryScroll(point)) return;

        if (IsMouseOverAdorner(point)) return;
        var itemsPresenter = TreeView.ScrollViewer.Content as ItemsPresenter;
        /*
        if (itemsPresenter.InputHitTest(e.GetPosition(itemsPresenter)) == null)
        {
            if (insertAdorner != null) insertAdorner.Dispose();
            return;
        }
        */

        if (_ItemMouseIsOver != null)
        {
            _ItemMouseIsOver.IsCurrentDropTarget = false;
        }

        _ItemMouseIsOver = GetTreeViewItemUnderMouse(point);
        //if (itemMouseIsOver == null) return;
        CanInsertReturn canInsertReturn = CanInsert(_ItemMouseIsOver, e.GetPosition, e.Data);
        if (canInsertReturn != null)
        {
            e.Effects = DragDropEffects.Move;

            if (_InsertAdorner == null)
            {
                _InsertAdorner = new InsertAdorner(_ItemMouseIsOver, new InsertContent { Before = canInsertReturn.Before });
            }
            else
            {
                _InsertAdorner.Dispose();
                _InsertAdorner = new InsertAdorner(_ItemMouseIsOver, new InsertContent { Before = canInsertReturn.Before });
            }

            _ItemMouseIsOver.IsCurrentDropTarget = false;
        }
        else
        {
            if (_InsertAdorner != null)
            {
                _InsertAdorner.Dispose();
                _InsertAdorner = null;
            }

            if (CanDrop(_ItemMouseIsOver, e.Data))
            {
                e.Effects = DragDropEffects.Move;
                if (_ItemMouseIsOver != null)
                {
                    _ItemMouseIsOver.IsCurrentDropTarget = true;
                }
            }
        }
    }

    bool CheckOverScrollBar(Point positionRelativeToTree)
    {
        if (TreeView.ScrollViewer.ComputedVerticalScrollBarVisibility == Visibility.Visible
            && positionRelativeToTree.X > TreeView.RenderSize.Width - SystemParameters.ScrollWidth)
        {
            return true;
        }

        if (TreeView.ScrollViewer.ComputedHorizontalScrollBarVisibility == Visibility.Visible
            && positionRelativeToTree.Y > TreeView.RenderSize.Height - SystemParameters.ScrollHeight)
        {
            return true;
        }
          
        return false;
    }

    List<TreeViewExItem> GetDraggableItems(Point mousePositionRelativeToTree)
    {
        if (TreeView.DragCommand == null) return new List<TreeViewExItem>();
            
        List<TreeViewExItem> items = TreeView.GetTreeViewItemsFor(TreeView.SelectedItems).ToList();
        TreeViewExItem itemUnderMouse = GetTreeViewItemUnderMouse(mousePositionRelativeToTree);
        if(itemUnderMouse == null) return new List<TreeViewExItem>();

        if (items.Contains(itemUnderMouse))
        {
            foreach (var item in items)
            {
                if (!TreeView.DragCommand.CanExecute(new DragParameters(item)))
                {
                    // if one item is not draggable, nothing can be dragged
                    return new List<TreeViewExItem>();
                }
            }

            return items;
        }

        //mouse is not over an selected item. We have to check if it is over the content. In this case we have to select and start drag n drop.
        var contentPresenter = itemUnderMouse.Template.FindName("content", itemUnderMouse) as ContentPresenter;
        if (contentPresenter.IsMouseOver)
        {
            if(TreeView.DragCommand.CanExecute(new DragParameters(itemUnderMouse)))
                return new List<TreeViewExItem> { itemUnderMouse };
        }

        return new List<TreeViewExItem>();
    }

    public void Dispose()
    {
        CleanUpAdorners();

        if (TreeView != null)
        {
            TreeView.Drop -= OnDrop;
            TreeView.DragOver -= OnDragOver;
            TreeView.DragLeave -= OnDragLeave;
        }

        if (_ItemMouseIsOver != null)
        {
            _ItemMouseIsOver.IsCurrentDropTarget = false;
            _ItemMouseIsOver = null;
        }
    }
}