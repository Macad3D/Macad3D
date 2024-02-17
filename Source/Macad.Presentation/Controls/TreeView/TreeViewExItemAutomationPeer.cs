using System;
using System.Windows;
using System.Windows.Automation;
using System.Windows.Automation.Peers;

namespace Macad.Presentation.TreeView;

#region

using System.Collections.Generic;
using System.Reflection;
using System.Windows.Automation.Provider;
using System.Windows.Controls;
using System.Windows.Media;

#endregion

class TreeViewExItemAutomationPeer : AutomationPeer, 
    ISelectionItemProvider,
    IScrollItemProvider,
    IExpandCollapseProvider,
    IValueProvider,
    IRawElementProviderSimple
{
    TreeViewExItem treeViewExItem;
    TreeViewExAutomationPeer treeViewExAutomationPeer;
    string requestedValue;

    public TreeViewExItemAutomationPeer(TreeViewExItem treeViewExItem, TreeViewExAutomationPeer treeViewExAutomationPeer)
    {
        this.treeViewExItem = treeViewExItem;
        this.treeViewExAutomationPeer = treeViewExAutomationPeer;
    }

    #region Overrides
    protected override string GetAutomationIdCore()
    {
        return treeViewExItem.GetValue(AutomationProperties.AutomationIdProperty) as string;
    }

    protected override string GetAcceleratorKeyCore()
    {
        return string.Empty;
    }

    protected override string GetAccessKeyCore()
    {
        return string.Empty;
    }

    protected override Rect GetBoundingRectangleCore()
    {
        // Return the general transform for the specified visual object.
        var contentPresenter = treeViewExItem.Template.FindName("content", treeViewExItem) as ContentPresenter;
        GeneralTransform transform = contentPresenter.TransformToAncestor(treeViewExItem.ParentTreeView);
        Point p = transform.Transform(new Point(0, 0));
        p = treeViewExItem.ParentTreeView.PointToScreen(p);
        Rect rect = new Rect(p, contentPresenter.RenderSize);
        return rect;
    }

    protected override Point GetClickablePointCore()
    {
        var contentPresenter = treeViewExItem.Template.FindName("content", treeViewExItem) as ContentPresenter;
        GeneralTransform transform = contentPresenter.TransformToAncestor(treeViewExItem.ParentTreeView);
        Point p = transform.Transform(new Point(1, 1));
        p = treeViewExItem.ParentTreeView.PointToScreen(p);

        return p;
    }

    protected override List<AutomationPeer> GetChildrenCore()
    {
        List<AutomationPeer> children = new List<AutomationPeer>();

        children = GetChildPeers(treeViewExItem);

        return children;
    }

    private List<AutomationPeer> GetChildPeers(UIElement element)
    {
        var list = new List<AutomationPeer>();
        for (int i = 0; i < VisualTreeHelper.GetChildrenCount(element); i++)
        {
            var child = VisualTreeHelper.GetChild(element, i) as UIElement;
            if (child != null)
            {
                AutomationPeer childPeer;
                childPeer = UIElementAutomationPeer.CreatePeerForElement(child);
                if (childPeer != null)
                {
                    list.Add(childPeer);
                }
                else
                {
                    list.AddRange(GetChildPeers(child));
                }
            }
        }
        return list;
    }

    protected override string GetClassNameCore()
    {
        return treeViewExItem.GetType().ToString();
    }

    protected override string GetHelpTextCore()
    {
        return string.Empty;
    }

    protected override string GetItemStatusCore()
    {
        return string.Empty;
    }

    protected override string GetItemTypeCore()
    {
        return string.Empty;
    }

    protected override AutomationPeer GetLabeledByCore()
    {
        return null;
    }

    protected override string GetNameCore()
    {
        if (treeViewExItem.DataContext == null)
        {
            return treeViewExItem.ToString();
        }

        return treeViewExItem.DataContext.ToString();
    }

    protected override AutomationOrientation GetOrientationCore()
    {
        return AutomationOrientation.Vertical;
    }

    protected override bool HasKeyboardFocusCore()
    {
        return treeViewExItem.IsKeyboardFocused;
    }

    protected override bool IsContentElementCore()
    {
        return true;
    }

    protected override bool IsControlElementCore()
    {
        return true;
    }

    protected override bool IsEnabledCore()
    {
        return treeViewExItem.IsEnabled;
    }

    protected override bool IsKeyboardFocusableCore()
    {
        return treeViewExItem.IsFocused;
    }

    protected override bool IsOffscreenCore()
    {
        if (treeViewExItem.ParentTreeViewItem != null && !treeViewExItem.ParentTreeViewItem.IsExpanded) return true;
        return false;
    }

    protected override bool IsPasswordCore()
    {
        return false;
    }

    protected override bool IsRequiredForFormCore()
    {
        return false;
    }

    protected override void SetFocusCore()
    {
    }

    protected override AutomationControlType GetAutomationControlTypeCore()
    {
        return AutomationControlType.TreeItem;
    }

    public override object GetPattern(PatternInterface patternInterface)
    {
        if (patternInterface == PatternInterface.ExpandCollapse)
        {
            return this;
        }

        if (patternInterface == PatternInterface.SelectionItem)
        {
            return this;
        }

        if (patternInterface == PatternInterface.ScrollItem)
        {
            return this;
        }

        if (patternInterface == PatternInterface.Value)
        {
            return this;
        }

        return null;
    }

    #endregion

    #region IExpandCollapseProvider

    ExpandCollapseState IExpandCollapseProvider.ExpandCollapseState
    {
        get
        {
            if (!treeViewExItem.HasItems)
            {
                return ExpandCollapseState.LeafNode;
            }

            if (!treeViewExItem.IsExpanded)
            {
                return ExpandCollapseState.Collapsed;
            }

            return ExpandCollapseState.Expanded;
        }
    }

    void IExpandCollapseProvider.Collapse()
    {
        if (!IsEnabled())
        {
            throw new ElementNotEnabledException();
        }

        if (!treeViewExItem.HasItems)
        {
            throw new InvalidOperationException("Cannot collapse because item has no children.");
        }

        treeViewExItem.IsExpanded = false;
    }

    void IExpandCollapseProvider.Expand()
    {
        if (!IsEnabled())
        {
            throw new ElementNotEnabledException();
        }

        if (!treeViewExItem.HasItems)
        {
            throw new InvalidOperationException("Cannot expand because item has no children.");
        }

        treeViewExItem.IsExpanded = true;
    }

    #endregion

    #region Public Methods

    bool ISelectionItemProvider.IsSelected
    {
        get
        {
            return treeViewExItem.IsSelected;
        }
    }

    IRawElementProviderSimple ISelectionItemProvider.SelectionContainer
    {
        get
        {
            return ProviderFromPeer(treeViewExAutomationPeer);
        }
    }

    void IScrollItemProvider.ScrollIntoView()
    {

        treeViewExItem.BringIntoView();
    }

    void ISelectionItemProvider.AddToSelection()
    {
        throw new NotImplementedException();
    }

    void ISelectionItemProvider.RemoveFromSelection()
    {

        throw new NotImplementedException();
    }

    void ISelectionItemProvider.Select()
    {
        treeViewExItem.ParentTreeView.Selection.SelectFromUiAutomation(treeViewExItem);
    }

    #endregion

    #region IValueProvider Members

    bool IValueProvider.IsReadOnly
    {
        get
        {
            return !treeViewExItem.IsEditable;
        }
    }

    void IValueProvider.SetValue(string value)
    {
        try
        {
            if (String.IsNullOrWhiteSpace(value)) return;

            string[] ids = value.Split(new[] { ';' });

            object obj;
            if (ids.Length > 0 && ids[0] == "Context")
            {
                obj = treeViewExItem.DataContext;
            }
            else
            {
                obj = treeViewExItem;
            }

            if (ids.Length < 2)
            {
                requestedValue = obj.ToString();
            }
            else
            {
                Type type = obj.GetType();
                PropertyInfo pi = type.GetProperty(ids[1]);
                requestedValue = pi.GetValue(obj, null).ToString();
            }
        }
        catch (Exception ex)
        {
            requestedValue = ex.ToString();
        }
    }

    string IValueProvider.Value
    {
        get
        {
            if (requestedValue == null)
            {
                return treeViewExItem.DataContext.ToString();
            }

            return requestedValue;
        }
    }

    #endregion

    #region IRawElementProvider
    public object GetPatternProvider(int patternId)
    {
        return this;
    }

    public object GetPropertyValue(int propertyId)
    {
        return AutomationProperty.LookupById(propertyId);
    }

    public IRawElementProviderSimple HostRawElementProvider
    {
        get { return this; }
    }

    public ProviderOptions ProviderOptions
    {
        get { return System.Windows.Automation.Provider.ProviderOptions.OverrideProvider; }
    }
    #endregion
}