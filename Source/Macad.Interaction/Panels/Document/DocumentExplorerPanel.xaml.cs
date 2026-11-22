using System.Collections.Generic;
using System.Linq;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Controls.Primitives;
using System.Windows.Input;
using System.Windows.Media;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Presentation.TreeView;

namespace Macad.Interaction.Panels;

public partial class DocumentExplorerPanel : UserControl
{
    public DocumentExplorerPanelModel Model => (DocumentExplorerPanelModel)DataContext;

    //--------------------------------------------------------------------------------------------------

    public DocumentExplorerPanel()
    {
        DataContext = new DocumentExplorerPanelModel();

        InitializeComponent();
        AddHandler(KeyDownEvent, new KeyEventHandler(_HandledKeyDown), true);
    }

    //--------------------------------------------------------------------------------------------------

    void TreeView_OnOnSelecting(object sender, SelectionChangedCancelEventArgs e)
    {
        Model.ChangeSelection(e.ItemsToSelect, e.ItemsToUnSelect);
        e.Cancel = true;
    }

    //--------------------------------------------------------------------------------------------------

    void FrameworkElement_OnToolTipOpening(object sender, ToolTipEventArgs e)
    {
        var senderElement = e.OriginalSource as FrameworkElement;
        if (senderElement?.DataContext == null)
            return;
            
        List<MessageItem> messageList = null;
        switch (senderElement?.DataContext)
        {
            case Body body:
                messageList = InteractiveContext.Current.MessageHandler.GetEntityMessages(body.Shape);
                break;
        }

        if (messageList == null || messageList.Count == 0)
        {
            senderElement.ToolTip = "";
            e.Handled = true;
        }
        else
        {
            senderElement.ToolTip = string.Join("\n", messageList.Select(mi => mi.ToShortString()));
        }
    }

    //--------------------------------------------------------------------------------------------------

    void UserControl_KeyDown(object sender, KeyEventArgs e)
    {
        if (e.OriginalSource is TextBoxBase)
            return;

        e.Handled = Model.KeyDown(e);
    }

    //--------------------------------------------------------------------------------------------------

    void _HandledKeyDown(object sender, KeyEventArgs e)
    {
        // The tree item handles F2 itself, which would hide it from the regular handler
        if (!e.Handled || e.Key != Key.F2 || Model.IsNameEditing || e.OriginalSource is TextBoxBase)
            return;

        Model.KeyDown(e);
    }

    //--------------------------------------------------------------------------------------------------

    void TreeView_PreviewMouseRightButtonDown(object sender, MouseButtonEventArgs e)
    {
        // Select the item under the mouse, so that the context menu works on it
        var item = _FindAncestor<TreeViewExItem>(e.OriginalSource as DependencyObject);
        if (item == null)
        {
            Model.ChangeSelection(new object[0], Model.SelectedItems.ToArray());
            return;
        }

        if (Model.SelectedItems.Contains(item.DataContext))
            return;

        Model.ChangeSelection(new[] { item.DataContext }, Model.SelectedItems.ToArray());
    }

    //--------------------------------------------------------------------------------------------------

    static T _FindAncestor<T>(DependencyObject element) where T : DependencyObject
    {
        while (element != null)
        {
            if (element is T typed)
                return typed;
            element = element is System.Windows.Media.Visual or System.Windows.Media.Media3D.Visual3D
                          ? VisualTreeHelper.GetParent(element)
                          : LogicalTreeHelper.GetParent(element);
        }
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    #region Renaming

    void _RenameBox_LostFocus(object sender, RoutedEventArgs e)
    {
        if (sender is TextBox { IsVisible: true } box)
        {
            Model.FinishRenaming(box.Text);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _RenameBox_IsVisibleChanged(object sender, DependencyPropertyChangedEventArgs e)
    {
        if (sender is TextBox { IsVisible: true } box)
        {
            box.Text = DocumentExplorerPanelModel.GetItemName(box.DataContext);
            box.SelectAll();
            box.Focus();
            Keyboard.Focus(box);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _RenameBox_PreviewKeyDown(object sender, KeyEventArgs e)
    {
        if (sender is not TextBox box)
            return;

        if (e.Key == Key.Escape)
        {
            Model.CancelRenaming();
            e.Handled = true;
        }
        else if (e.Key == Key.Enter)
        {
            Model.FinishRenaming(box.Text);
            e.Handled = true;
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    //--------------------------------------------------------------------------------------------------
}