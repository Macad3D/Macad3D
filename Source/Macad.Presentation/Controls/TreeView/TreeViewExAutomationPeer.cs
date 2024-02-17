using System.Windows.Automation.Peers;

namespace Macad.Presentation.TreeView;

#region

using System.Collections.Generic;
using System.Windows.Automation.Provider;

#endregion

public sealed class TreeViewExAutomationPeer : ItemsControlAutomationPeer, ISelectionProvider
{
    #region Constructors and Destructors

    public TreeViewExAutomationPeer(TreeViewEx owner)
        : base(owner)
    {
    }

    #endregion

    #region Public Properties

    public bool CanSelectMultiple
    {
        get
        {
            return true;
        }
    }

    public bool IsSelectionRequired
    {
        get
        {
            return false;
        }
    }

    #endregion

    #region Public Methods

    public override object GetPattern(PatternInterface patternInterface)
    {
        if (patternInterface == PatternInterface.Selection)
        {
            return this;
        }

        return base.GetPattern(patternInterface);
    }

    #endregion

    #region Explicit Interface Methods

    IRawElementProviderSimple[] ISelectionProvider.GetSelection()
    {
        List<IRawElementProviderSimple> list = new List<IRawElementProviderSimple>();

        TreeViewEx treeView = (TreeViewEx)Owner;
        foreach (var item in treeView.GetTreeViewItemsFor(treeView.SelectedItems))
        {
            list.Add(new TreeViewExItemAutomationPeer(item, this));
        }
         
        return list.ToArray();
    }

    #endregion
    //internal Dictionary<TreeViewExItem, TreeViewExItemDataAutomationPeer> dict = new Dictionary<TreeViewExItem, TreeViewExItemDataAutomationPeer>();
    #region Methods

    /// <summary>
    /// When overridden in a derived class, creates a new instance of the <see cref="T:System.Windows.Automation.Peers.ItemAutomationPeer"/> for a data item in the <see cref="P:System.Windows.Controls.ItemsControl.Items"/> collection of this <see cref="T:System.Windows.Controls.ItemsControl"/>.
    /// </summary>
    /// <param name="item">
    /// The data item that is associated with this <see cref="T:System.Windows.Automation.Peers.ItemAutomationPeer"/>.
    /// </param>
    /// <returns>
    /// The new <see cref="T:System.Windows.Automation.Peers.ItemAutomationPeer"/> created.
    /// </returns>
    protected override ItemAutomationPeer CreateItemAutomationPeer(object item)
    {
        return null;
    }

    protected override AutomationControlType GetAutomationControlTypeCore()
    {
        return AutomationControlType.Tree;
    }

    protected override string GetClassNameCore()
    {
        return "TreeViewEx";
    }

    protected override List<AutomationPeer> GetChildrenCore()
    {
        List<AutomationPeer> children = new List<AutomationPeer>();
        TreeViewEx treeView = (TreeViewEx)Owner;
            
        for (int i = 0; i < treeView.Items.Count; i++)
        {
            TreeViewExItem child = treeView.ItemContainerGenerator.ContainerFromIndex(i) as TreeViewExItem;
            if(child == null) continue;
            children.Add(new TreeViewExItemAutomationPeer(child, this));
        }

        return children;
    }
    #endregion
}