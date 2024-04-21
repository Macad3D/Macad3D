using System.Globalization;
using System.Linq;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Controls.Primitives;
using System.Windows.Data;
using System.Windows.Input;
using Fluent;
using Macad.Interaction;
using Macad.Presentation;

namespace Macad.Window;

/// <summary>
/// Interaction logic for MainWindowRibbon.xaml
/// </summary>
public partial class MainWindowRibbon : UserControl
{
    public MainWindowRibbon()
    {
        InitializeComponent();
        RibbonLocalization.Current.Culture = CultureInfo.InvariantCulture;
    }

    //--------------------------------------------------------------------------------------------------

    void _ContextualGroup_IsVisibleChanged(object sender, DependencyPropertyChangedEventArgs e)
    {
        if ((!(bool)e.OldValue) && (bool)e.NewValue)
        {
            var group = sender as RibbonContextualTabGroup;
            var tabItem = group?.Items.FirstOrDefault();
            if (tabItem != null)
            {
                Dispatcher.BeginInvoke(() => tabItem.IsSelected = true);
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _CloseMenuOnSourceUpdated(object sender, DataTransferEventArgs e)
    {
        var element = PresentationHelper.FindLogicalParent<DropDownButton>(sender as FrameworkElement);
        if (element != null)
        {
            element.IsDropDownOpen = false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _RecentFilesMenuItem_Click(object sender, RoutedEventArgs e)
    {
        RibbonFileMenu.IsDropDownOpen = false;
    }

    //--------------------------------------------------------------------------------------------------

    void _KeyDown(object sender, KeyEventArgs e)
    {
        if (e.OriginalSource is TextBoxBase)
            return;

        // Forward to workspace
        e.Handled = AppContext.Current.ShortcutHandler.KeyPressed("Workspace", e.Key, Keyboard.Modifiers);
    }

    //--------------------------------------------------------------------------------------------------

}