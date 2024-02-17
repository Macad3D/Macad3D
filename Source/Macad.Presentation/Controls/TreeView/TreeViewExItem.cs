// --------------------------------------------------------------------------------------------------------------------
// <summary>
//   Defines the TreeViewExItem type.
// </summary>
// --------------------------------------------------------------------------------------------------------------------

using System;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;

namespace Macad.Presentation.TreeView;

#region

using System.Collections.Generic;
using System.Collections.Specialized;
using System.Linq;
using System.Windows.Automation.Peers;
using System.Windows.Input;
using System.Windows.Markup;
using System.Windows.Media;

#endregion

/// <summary>
/// An item of the TreeViewEx.
/// </summary>
public class TreeViewExItem : HeaderedItemsControl
{
    #region Constants and Fields
    internal double itemTopInTreeSystem; // for virtualization purposes
    internal int hierachyLevel;// for virtualization purposes

    public static DependencyProperty IsCurrentDropTargetProperty = DependencyProperty.Register(
        "IsCurrentDropTarget", typeof(bool), typeof(TreeViewExItem), new FrameworkPropertyMetadata(false, null));

    public static DependencyProperty IsEditableProperty = DependencyProperty.Register(
        "IsEditable", typeof(bool), typeof(TreeViewExItem), new FrameworkPropertyMetadata(true, null));

    public static DependencyProperty IsEditingProperty = DependencyProperty.Register(
        "IsEditing", typeof(bool), typeof(TreeViewExItem), new FrameworkPropertyMetadata(false, new PropertyChangedCallback(OnIsEditingChanged)));

    public static DependencyProperty IsExpandedProperty = DependencyProperty.Register(
        "IsExpanded", typeof(bool), typeof(TreeViewExItem), new FrameworkPropertyMetadata(true));

    public static DependencyProperty IsSelectedProperty = DependencyProperty.Register(
        "IsSelected", typeof(bool), typeof(TreeViewExItem), new FrameworkPropertyMetadata(false, null));

    public static DependencyProperty TemplateEditProperty = DependencyProperty.Register(
        "TemplateEdit", typeof(DataTemplate), typeof(TreeViewExItem), new FrameworkPropertyMetadata(null, null));

    public static readonly DependencyProperty IndentationProperty =
        DependencyProperty.Register("Indentation", typeof(double), typeof(TreeViewExItem), new PropertyMetadata(10.0));


    #endregion

    // Using a DependencyProperty as the backing store for Offset.  This enables animation, styling, binding, etc...
    #region Constructors and Destructors

    static TreeViewExItem()
    {
        DefaultStyleKeyProperty.OverrideMetadata(typeof(TreeViewExItem), new FrameworkPropertyMetadata(typeof(TreeViewExItem)));

        FrameworkElementFactory vPanel = new FrameworkElementFactory(typeof(VirtualizingTreePanel));
        vPanel.SetValue(VirtualizingTreePanel.IsItemsHostProperty, true);
        ItemsPanelTemplate vPanelTemplate = new ItemsPanelTemplate();
        vPanelTemplate.VisualTree = vPanel;
        ItemsPanelProperty.OverrideMetadata(typeof(TreeViewExItem), new FrameworkPropertyMetadata(vPanelTemplate));

        KeyboardNavigation.DirectionalNavigationProperty.OverrideMetadata(typeof(TreeViewExItem), new FrameworkPropertyMetadata(KeyboardNavigationMode.Continue));
        KeyboardNavigation.TabNavigationProperty.OverrideMetadata(typeof(TreeViewExItem), new FrameworkPropertyMetadata(KeyboardNavigationMode.None));
        IsTabStopProperty.OverrideMetadata(typeof(TreeViewExItem), new FrameworkPropertyMetadata(false));
    }

    public TreeViewExItem()
    {
    }

    #endregion

    #region Properties

    public bool IsCurrentDropTarget
    {
        get
        {
            return (bool)GetValue(IsCurrentDropTargetProperty);
        }

        set
        {
            SetValue(IsCurrentDropTargetProperty, value);
        }
    }

    public bool IsEditable
    {
        get
        {
            return (bool)GetValue(IsEditableProperty);
        }

        set
        {
            SetValue(IsEditableProperty, value);
        }
    }

    public bool IsEditing
    {
        get
        {
            return (bool)GetValue(IsEditingProperty);
        }

        internal set
        {
            SetValue(IsEditingProperty, value);
        }
    }

    public double Indentation
    {
        get { return (double)GetValue(IndentationProperty); }
        set { SetValue(IndentationProperty, value); }
    }

    public bool IsExpanded
    {
        get
        {
            return (bool)GetValue(IsExpandedProperty);
        }

        set
        {
            SetValue(IsExpandedProperty, value);
        }
    }

    public bool IsSelected
    {
        get
        {
            return (bool)GetValue(IsSelectedProperty);
        }

        set
        {
            // Debug.WriteLine("IsSelected of " + DataContext + " is " + value + " from " + ParentItemsControl.GetHashCode());
            if (BindingOperations.GetBindingExpression(this, IsSelectedProperty)?.ParentBinding?.Mode != BindingMode.OneWay)
            {
                SetValue(IsSelectedProperty, value);
            }
        }
    }

    public new bool IsVisible
    {
        get
        {
            if (Visibility != Visibility.Visible) return false;
            TreeViewExItem currentItem = ParentTreeViewItem;
            while (currentItem != null)
            {
                if (!currentItem.IsExpanded) return false;
                currentItem = currentItem.ParentTreeViewItem;
            }

            return true;
        }
    }

    public TreeViewExItem ParentTreeViewItem { get { return ItemsControl.ItemsControlFromItemContainer(this) as TreeViewExItem; } }

    public TreeViewEx ParentTreeView { get; set; }

    public DataTemplate TemplateEdit
    {
        get
        {
            return (DataTemplate)GetValue(TemplateEditProperty);
        }

        set
        {
            SetValue(TemplateEditProperty, value);
        }
    }

    [DependsOn("Indentation")]
    public double Offset
    {
        get
        {
            if (ParentTreeViewItem == null) return 0;
            return ParentTreeViewItem.Offset + Indentation;
        }
    }

    private bool IsExpandableOnInput
    {
        get
        {
            return IsEnabled;
        }
    }

    #endregion

    #region Public Methods and Operators

    /// <summary>
    /// Send down the IsVirtualizing property if it's set on this element.
    /// </summary>
    /// <param name="element"></param>
    /// <param name="item"></param>
    protected override void PrepareContainerForItemOverride(DependencyObject element, object item)
    {
        base.PrepareContainerForItemOverride(element, item);
    }

    // Synchronizes the value of the child's IsVirtualizing property with that of the parent's
    internal static void IsVirtualizingPropagationHelper(DependencyObject parent, DependencyObject element)
    {
        SynchronizeValue(VirtualizingStackPanel.IsVirtualizingProperty, parent, element);
        SynchronizeValue(VirtualizingStackPanel.VirtualizationModeProperty, parent, element);
        TreeViewExItem tveItem = element as TreeViewExItem;
    }

    private static void SynchronizeValue(DependencyProperty dp, DependencyObject parent, DependencyObject child)
    {
        object value = parent.GetValue(dp);
        child.SetValue(dp, value);
    }

    /// <summary>
    ///     This method is invoked when the Items property changes.
    /// </summary>
    protected override void OnItemsChanged(NotifyCollectionChangedEventArgs e)
    {
        switch (e.Action)
        {
            case NotifyCollectionChangedAction.Remove:
                if (ParentTreeView != null && ParentTreeView.Selection != null) // happens during unload or when removing if never realized
                    ParentTreeView.Selection.ClearObsoleteItems(e.OldItems.Cast<object>());
                break;

            case NotifyCollectionChangedAction.Reset:
            case NotifyCollectionChangedAction.Replace:
            case NotifyCollectionChangedAction.Add:
            case NotifyCollectionChangedAction.Move:
                break;

            default:
                throw new NotSupportedException();
        }
    }

    private static void OnIsEditingChanged(DependencyObject d, DependencyPropertyChangedEventArgs e)
    {
        if (d is TreeViewEx || d is TreeViewExItem) return;

        throw new InvalidOperationException("IsEditing can only be set internally");
    }

    /// <summary>
    ///     Returns true if the item is or should be its own container.
    /// </summary>
    /// <param name="item">The item to test.</param>
    /// <returns>true if its type matches the container type.</returns>
    protected override bool IsItemItsOwnContainerOverride(object item)
    {
        return item is TreeViewExItem;
    }

    /// <summary>
    ///     Create or identify the element used to display the given item.
    /// </summary>
    /// <returns>The container.</returns>
    protected override DependencyObject GetContainerForItemOverride()
    {
        return new TreeViewExItem();
    }

    public override string ToString()
    {
        if (DataContext != null)
        {
            return string.Format("{0} ({1})", DataContext, base.ToString());
        }

        return base.ToString();
    }

    protected override AutomationPeer OnCreateAutomationPeer()
    {
        return new TreeViewExItemAutomationPeer(this, ParentTreeView.automationPeer);
    }

    public override void OnApplyTemplate()
    {
        base.OnApplyTemplate();

        if (ParentTreeView?.SelectedItems != null && ParentTreeView.SelectedItems.Contains(DataContext))
        {
            if (BindingOperations.GetBindingExpression(this, IsSelectedProperty)?.ParentBinding?.Mode == BindingMode.OneWay)
            {
                ParentTreeView.Selection?.SelectFromProperty(this, false);
            }
            else
            {
                IsSelected = true;
            }
        }
    }

    protected override void OnKeyDown(KeyEventArgs e)
    {
        base.OnKeyDown(e);
        if (!e.Handled)
        {
            Key key = e.Key;
            switch (key)
            {
                case Key.Left:
                    if (IsExpanded)
                    {
                        IsExpanded = false;
                    }

                    e.Handled = true;
                    break;
                case Key.Right:
                    IsExpanded = true;
                    e.Handled = true;
                    break;
                case Key.Up:
                    ParentTreeView.Selection.SelectPreviousFromKey();
                    e.Handled = true;
                    break;
                case Key.Down:
                    ParentTreeView.Selection.SelectNextFromKey();
                    e.Handled = true;
                    break;
                case Key.Add:
                    if (IsExpandableOnInput && !IsExpanded)
                    {
                        IsExpanded = true;
                    }

                    e.Handled = true;
                    break;
                case Key.Subtract:
                    if (IsExpandableOnInput && IsExpanded)
                    {
                        IsExpanded = false;
                    }

                    e.Handled = true;
                    break;
                case Key.F2:
                    e.Handled = StartEditing();
                    break;
                case Key.Escape:
                case Key.Return:
                    e.Handled = StopEditing();
                    break;
                /* Selection is done by moving with cursor keys, space is needed for workspace.*/
                //case Key.Space:
                //    ParentTreeView.Selection.SelectCurrentBySpace();
                //    e.Handled = true;
                //    break;
                case Key.Home:
                    ParentTreeView.Selection.SelectFirst();
                    e.Handled = true;
                    break;
                case Key.End:
                    ParentTreeView.Selection.SelectLast();
                    e.Handled = true;
                    break;
            }
        }
    }

    public bool StartEditing()
    {
        if (TemplateEdit != null && IsFocused && IsEditable)
        {
            ParentTreeView.StartEditing(this);
            return true;
        }

        return false;
    }

    protected override void OnKeyUp(KeyEventArgs e)
    {
        base.OnKeyUp(e);
        if (!e.Handled)
        {
            Key key = e.Key;
            switch (key)
            {
                case Key.Left:
                case Key.Right:
                case Key.Up:
                case Key.Down:
                case Key.Add:
                case Key.Subtract:
                case Key.Space:
                    IEnumerable<TreeViewExItem> items = TreeViewElementFinder.FindAll(ParentTreeView, false);
                    TreeViewExItem focusedItem = items.FirstOrDefault(x => x.IsFocused);

                    if (focusedItem != null)
                    {
                        focusedItem.BringIntoView(new Rect(1, 1, 1, 1));
                    }

                    break;
            }
        }
    }

    protected override void OnMouseDoubleClick(MouseButtonEventArgs e)
    {
        base.OnMouseDoubleClick(e);
        if (IsKeyboardFocused)
        {
            IsExpanded = !IsExpanded;
        }
    }

    protected override void OnPropertyChanged(DependencyPropertyChangedEventArgs e)
    {
        //if (e.Property.Name == "IsEditing")
        //{
        //    if ((bool)e.NewValue == false)
        //    {
        //        StopEditing();
        //    }
        //    else
        //    {
        //        ParentTreeView.IsEditingManager.SetEditedObject(this);
        //    }
        //}

        if (ParentTreeView != null && ParentTreeView.Selection != null && e.Property.Name == "IsSelected")
        {
            if (ParentTreeView.SelectedItems.Contains(DataContext) != IsSelected)
            {
                ParentTreeView.Selection.SelectFromProperty(this, IsSelected);
            }
        }

        base.OnPropertyChanged(e);
    }

    private bool StopEditing()
    {
        return ParentTreeView.StopEditing();
    }

    #endregion

    #region Brushes properties

    #region Brushes focused
    public static DependencyProperty BackgroundFocusedProperty = DependencyProperty.Register(
        "BackgroundFocused",
        typeof(Brush),
        typeof(TreeViewExItem),
        new FrameworkPropertyMetadata(SystemColors.HighlightBrush, null));

    public static DependencyProperty BorderBrushFocusedProperty = DependencyProperty.Register(
        "BorderBrushFocused",
        typeof(Brush),
        typeof(TreeViewExItem),
        new FrameworkPropertyMetadata(Brushes.Transparent, null));

    public Brush BackgroundFocused
    {
        get
        {
            return (Brush)GetValue(BackgroundFocusedProperty);
        }

        set
        {
            SetValue(BackgroundFocusedProperty, value);
        }
    }

    public Brush BorderBrushFocused
    {
        get
        {
            return (Brush)GetValue(BorderBrushFocusedProperty);
        }

        set
        {
            SetValue(BorderBrushFocusedProperty, value);
        }
    }
    #endregion

    #region Brushes selected and focused
    public static DependencyProperty BackgroundFocusedSelectedProperty =
        DependencyProperty.Register(
            "BackgroundFocusedSelected",
            typeof(Brush),
            typeof(TreeViewExItem),
            new FrameworkPropertyMetadata(Brushes.DarkGray, null));

    public static DependencyProperty BorderBrushFocusedSelectedProperty =
        DependencyProperty.Register(
            "BorderBrushFocusedSelected",
            typeof(Brush),
            typeof(TreeViewExItem),
            new FrameworkPropertyMetadata(Brushes.Black, null));

    public Brush BackgroundFocusedSelected
    {
        get
        {
            return (Brush)GetValue(BackgroundFocusedSelectedProperty);
        }

        set
        {
            SetValue(BackgroundFocusedSelectedProperty, value);
        }
    }

    public Brush BorderBrushFocusedSelected
    {
        get
        {
            return (Brush)GetValue(BorderBrushFocusedSelectedProperty);
        }

        set
        {
            SetValue(BorderBrushFocusedSelectedProperty, value);
        }
    }
    #endregion

    #region Brushes hovered

    public static DependencyProperty BackgroundHoveredProperty = DependencyProperty.Register(
        "BackgroundHovered",
        typeof(Brush),
        typeof(TreeViewExItem),
        new FrameworkPropertyMetadata(Brushes.LightGray, null));

    public static DependencyProperty BorderBrushHoveredProperty = DependencyProperty.Register(
        "BorderBrushHovered",
        typeof(Brush),
        typeof(TreeViewExItem),
        new FrameworkPropertyMetadata(Brushes.Transparent, null));

    public Brush BackgroundHovered
    {
        get
        {
            return (Brush)GetValue(BackgroundHoveredProperty);
        }

        set
        {
            SetValue(BackgroundHoveredProperty, value);
        }
    }

    public Brush BorderBrushHovered
    {
        get
        {
            return (Brush)GetValue(BorderBrushHoveredProperty);
        }

        set
        {
            SetValue(BorderBrushHoveredProperty, value);
        }
    }
    #endregion

    #region Brushes selected and hovered
    public static DependencyProperty BackgroundSelectedHoveredProperty = DependencyProperty.Register(
        "BackgroundSelectedHovered",
        typeof(Brush),
        typeof(TreeViewExItem),
        new FrameworkPropertyMetadata(Brushes.DarkGray, null));

    public static DependencyProperty BorderBrushSelectedHoveredProperty =
        DependencyProperty.Register(
            "BorderBrushSelectedHovered",
            typeof(Brush),
            typeof(TreeViewExItem),
            new FrameworkPropertyMetadata(Brushes.Black, null));

    public Brush BorderBrushSelectedHovered
    {
        get
        {
            return (Brush)GetValue(BorderBrushSelectedHoveredProperty);
        }
        set
        {
            SetValue(BorderBrushSelectedHoveredProperty, value);
        }
    }

    public Brush BackgroundSelectedHovered
    {
        get
        {
            return (Brush)GetValue(BackgroundSelectedHoveredProperty);
        }
        set
        {
            SetValue(BackgroundSelectedHoveredProperty, value);
        }
    }
    #endregion

    #region Brushes selected
    public static DependencyProperty BackgroundSelectedProperty = DependencyProperty.Register(
        "BackgroundSelected",
        typeof(Brush),
        typeof(TreeViewExItem),
        new FrameworkPropertyMetadata(Brushes.LightGray, null));

    public static DependencyProperty BorderBrushSelectedProperty = DependencyProperty.Register(
        "BorderBrushSelected",
        typeof(Brush),
        typeof(TreeViewExItem),
        new FrameworkPropertyMetadata(Brushes.Transparent, null));

    public Brush BackgroundSelected
    {
        get
        {
            return (Brush)GetValue(BackgroundSelectedProperty);
        }

        set
        {
            SetValue(BackgroundSelectedProperty, value);
        }
    }

    public Brush BorderBrushSelected
    {
        get
        {
            return (Brush)GetValue(BorderBrushSelectedProperty);
        }

        set
        {
            SetValue(BorderBrushSelectedProperty, value);
        }
    }
    #endregion

    #region Brushes disabled
    public static DependencyProperty BackgroundInactiveProperty = DependencyProperty.Register(
        "BackgroundInactive",
        typeof(Brush),
        typeof(TreeViewExItem),
        new FrameworkPropertyMetadata(Brushes.LightGray, null));

    public static DependencyProperty BorderBrushInactiveProperty =
        DependencyProperty.Register(
            "BorderBrushInactive",
            typeof(Brush),
            typeof(TreeViewExItem),
            new FrameworkPropertyMetadata(Brushes.Black, null));

    public Brush BackgroundInactive
    {
        get
        {
            return (Brush)GetValue(BackgroundInactiveProperty);
        }

        set
        {
            SetValue(BackgroundInactiveProperty, value);
        }
    }

    public Brush BorderBrushInactive
    {
        get
        {
            return (Brush)GetValue(BorderBrushInactiveProperty);
        }

        set
        {
            SetValue(BorderBrushInactiveProperty, value);
        }
    }
    #endregion
    #endregion
}