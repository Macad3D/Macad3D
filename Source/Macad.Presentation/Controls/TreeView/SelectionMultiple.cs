namespace Macad.Presentation.TreeView;

using System.Collections.Generic;
using System.Linq;
using System.Windows.Input;

/// <summary>
/// Logic for the multiple selection
/// </summary>
internal class SelectionMultiple : InputSubscriberBase
{
    #region Private fields and constructor
    private readonly TreeViewEx treeViewEx;

    private object lastShiftRoot;

    public SelectionMultiple(TreeViewEx treeViewEx) 
        : base(treeViewEx)
    {
        this.treeViewEx = treeViewEx;
    }
    #endregion

    #region Properties

    internal static bool IsControlKeyDown
    {
        get
        {
            return (Keyboard.Modifiers & ModifierKeys.Control) == ModifierKeys.Control;
        }
    }

    private static bool IsShiftKeyDown
    {
        get
        {
            return (Keyboard.Modifiers & ModifierKeys.Shift) == ModifierKeys.Shift;
        }
    }

    #endregion

    #region Private helper methods

    private TreeViewExItem GetFocusedItem()
    {
        foreach (var item in TreeViewElementFinder.FindAll(treeViewEx, false))
        {
            if (item.IsFocused) return item;
        }

        return null;
    }
    #endregion

    #region Private modify selection methods

    private void ToggleItem(TreeViewExItem item)
    {
        if (treeViewEx.SelectedItems.Contains(item.DataContext))
        {
            ModifySelection(null, item.DataContext);
        }
        else
        {
            ModifySelection(item.DataContext, null);
        }
    }

    private bool ModifySelection(object itemToSelect, List<object> itemsToUnselect)
    {
        List<object> itemsToSelect = new List<object>();
        if (itemsToSelect != null) itemsToSelect.Add(itemToSelect);

        if (itemsToUnselect == null) itemsToUnselect = new List<object>();

        return ModifySelection(itemsToSelect, itemsToUnselect);
    }

    private bool ModifySelection(List<object> itemsToSelect, object itemToUnselect)
    {
        if (itemsToSelect == null) itemsToSelect = new List<object>();

        List<object> itemsToUnselect = new List<object>();
        if (itemToUnselect != null) itemsToUnselect.Add(itemToUnselect);

        return ModifySelection(itemsToSelect, itemsToUnselect);
    }

    private bool ModifySelection(List<object> itemsToSelect, List<object> itemsToUnselect)
    {
        //clean up any duplicate or unnecessery input
        OptimizeModifySelection(itemsToSelect, itemsToUnselect);

        //check if there's anything to do.
        if (itemsToSelect.Count == 0 && itemsToUnselect.Count == 0)
        {
            return false;
        }

        // notify listeners what is about to change.
        // Let them cancel and/or handle the selection list themself
        bool allowed = treeViewEx.CheckSelectionAllowed(itemsToSelect, itemsToUnselect);
        if (!allowed) return false;

        // Unselect and then select items
        foreach (object itemToUnSelect in itemsToUnselect)
        {
            treeViewEx.SelectedItems.Remove(itemToUnSelect);
        }

        foreach (object itemToSelect in itemsToSelect)
        {
            treeViewEx.SelectedItems.Add(itemToSelect);
        }

        object lastSelectedItem = itemsToSelect.LastOrDefault();

        if (itemsToUnselect.Contains(lastShiftRoot)) lastShiftRoot = null;
        if (!(TreeView.SelectedItems.Contains(lastShiftRoot) && IsShiftKeyDown)) lastShiftRoot = lastSelectedItem;

        return true;
    }

    private void OptimizeModifySelection(List<object> itemsToSelect, List<object> itemsToUnselect)
    {
        // check for items in both lists and remove them in unselect list
        List<object> biggerList;
        List<object> smallerList;
        if (itemsToSelect.Count > itemsToUnselect.Count)
        {
            biggerList = itemsToSelect;
            smallerList = itemsToUnselect;
        }
        else
        {
            smallerList = itemsToUnselect;
            biggerList = itemsToSelect;
        }

        List<object> temporaryList = new List<object>();
        foreach (object item in biggerList)
        {
            if (smallerList.Contains(item))
            {
                temporaryList.Add(item);
            }
        }

        foreach (var item in temporaryList)
        {
            itemsToUnselect.Remove(item);
        }

        // check for itemsToSelect allready in treeViewEx.SelectedItems
        temporaryList.Clear();
        foreach (object item in itemsToSelect)
        {
            if (treeViewEx.SelectedItems.Contains(item))
            {
                temporaryList.Add(item);
            }
        }

        foreach (var item in temporaryList)
        {
            itemsToSelect.Remove(item);
        }

        // check for itemsToUnSelect not in treeViewEx.SelectedItems
        temporaryList.Clear();
        foreach (object item in itemsToUnselect)
        {
            if (!treeViewEx.SelectedItems.Contains(item))
            {
                temporaryList.Add(item);
            }
        }

        foreach (var item in temporaryList)
        {
            itemsToUnselect.Remove(item);
        }
    }

    private void SelectSingleItem(TreeViewExItem item)
    {
        // selection with SHIFT is not working in virtualized mode. Thats because the Items are not visible.
        // Therefor the children cannot be found/selected.
        if (IsShiftKeyDown && treeViewEx.SelectedItems.Count > 0 && !treeViewEx.IsVirtualizing && treeViewEx.AllowMultiSelection)
        {
            SelectWithShift(item);
        }
        else if (IsControlKeyDown && treeViewEx.AllowMultiSelection)
        {
            ToggleItem(item);
        }
        else
        {
            List<object> itemsToUnSelect = new List<object>((IEnumerable<object>)treeViewEx.SelectedItems);
            if (itemsToUnSelect.Contains(item.DataContext))
            {
                itemsToUnSelect.Remove(item.DataContext);
            }
            ModifySelection(item.DataContext, itemsToUnSelect);
        }

    }

    #endregion

    #region Overrides InputSubscriberBase

    TreeViewExItem _ItemForDeferredSelection;

    internal override void OnMouseDown(MouseButtonEventArgs e)
    {
        base.OnMouseDown(e);

        _ItemForDeferredSelection = null;

        TreeViewExItem item = GetTreeViewItemUnderMouse(e.GetPosition(treeViewEx));
        if (item == null) return;
        if (e.ChangedButton != MouseButton.Left && !(e.ChangedButton == MouseButton.Right && item.ContextMenu != null)) return;            
        if (item.IsEditing) return;

        // Do not select on MouseDown if part of the selection list
        // To enable drag'n'drop, this selction is done in MouseUp
        if (treeViewEx.SelectedItems.Count > 1 && item.IsSelected)
        {
            _ItemForDeferredSelection = item;
            return;
        }

        SelectSingleItem(item);

        PresentationHelper.ForceFocus(item);
    }

    internal override void OnMouseUp(MouseButtonEventArgs e)
    {
        base.OnMouseUp(e);

        TreeViewExItem item = GetTreeViewItemUnderMouse(e.GetPosition(treeViewEx));
        if (item == null) return;
        if (e.ChangedButton != MouseButton.Left && !(e.ChangedButton == MouseButton.Right && item.ContextMenu != null)) return;
        if (item.IsEditing) return;

        // To enable drag'n'drop, this selection is done in MouseUp
        if (ReferenceEquals(_ItemForDeferredSelection, item))
        {
            SelectSingleItem(item);
            _ItemForDeferredSelection = null;
        }
    }

    private void SelectWithShift(TreeViewExItem item)
    {
        object firstSelectedItem;
        if (lastShiftRoot != null)
        {
            firstSelectedItem = lastShiftRoot;
        }
        else
        {
            if (treeViewEx.SelectedItems.Count > 0)
            {
                firstSelectedItem = treeViewEx.SelectedItems[0];
            }
            else
            {
                firstSelectedItem = null;
            }
        }

        TreeViewExItem shiftRootItem = treeViewEx.GetTreeViewItemsFor(new List<object> { firstSelectedItem }).First();

        List<object> itemsToSelect = treeViewEx.GetNodesToSelectBetween(shiftRootItem, item).Select(x => x.DataContext).ToList();
        List<object> itemsToUnSelect = ((IEnumerable<object>)treeViewEx.SelectedItems).ToList();

        ModifySelection(itemsToSelect, itemsToUnSelect);
    }
    #endregion


    #region ISelectionStrategy Members

    public void SelectFromUiAutomation(TreeViewExItem item)
    {
        SelectSingleItem(item);

        PresentationHelper.ForceFocus(item);
    }

    public void SelectFromProperty(TreeViewExItem item, bool isSelected)
    {
        // we do not check if selection is allowed, because selecting on that way is no user action.
        // Hopefully the programmer knows what he does...
        if (isSelected)
        {
            treeViewEx.SelectedItems.Add(item.DataContext);
            lastShiftRoot = item.DataContext;
            //FocusHelper.Focus(item);
        }
        else
        {
            treeViewEx.SelectedItems.Remove(item.DataContext);
        }
    }

    public void SelectFirst()
    {
        TreeViewExItem item = TreeViewElementFinder.FindFirst(treeViewEx, true);
        if (item != null)
        {
            SelectSingleItem(item);
        }

        PresentationHelper.ForceFocus(item);
    }

    public void SelectLast()
    {
        TreeViewExItem item = TreeViewElementFinder.FindLast(treeViewEx, true);
        if (item != null)
        {
            SelectSingleItem(item);
        }

        PresentationHelper.ForceFocus(item);
    }

    public void SelectNextFromKey()
    {
        TreeViewExItem item = GetFocusedItem();
        item = TreeViewElementFinder.FindNext(item, true);
        if (item == null) return;

        // if ctrl is pressed just focus it, so it can be selected by space. Otherwise select it.
        if (!IsControlKeyDown)
        {
            SelectSingleItem(item);
        }

        PresentationHelper.ForceFocus(item);
    }

    public void SelectPreviousFromKey()
    {
        List<TreeViewExItem> items = TreeViewElementFinder.FindAll(treeViewEx, true).ToList();
        TreeViewExItem item = GetFocusedItem();
        item = treeViewEx.GetPreviousItem(item, items);
        if (item == null) return;

        // if ctrl is pressed just focus it, so it can be selected by space. Otherwise select it.
        if (!IsControlKeyDown)
        {
            SelectSingleItem(item);
        }

        PresentationHelper.ForceFocus(item);
    }

    public void SelectCurrentBySpace()
    {
        TreeViewExItem item = GetFocusedItem();
        SelectSingleItem(item);
        PresentationHelper.ForceFocus(item);
    }

    public void ClearObsoleteItems(IEnumerable<object> items)
    {
        foreach (object itemToUnSelect in items)
        {
            if (treeViewEx.SelectedItems.Contains(itemToUnSelect)) treeViewEx.SelectedItems.Remove(itemToUnSelect);
        }

        if (items.Contains(lastShiftRoot)) lastShiftRoot = null;
    }

    #endregion
}