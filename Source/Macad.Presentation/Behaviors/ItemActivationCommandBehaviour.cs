using System.Windows;
using System.Windows.Controls;
using System.Windows.Controls.Primitives;
using System.Windows.Input;

namespace Macad.Presentation;

/// <summary>
/// Executes a command when an item of a list is activated, either by double-clicking it
/// or by pressing Enter while it is selected. The activated item is passed as command parameter.
/// </summary>
public class ItemActivationCommandBehaviour : Behavior<Selector>
{
    public static DependencyProperty CommandProperty =
        DependencyProperty.Register("Command", typeof(ICommand), typeof(ItemActivationCommandBehaviour), new UIPropertyMetadata(null));

    public ICommand Command
    {
        get => (ICommand)GetValue(CommandProperty);
        set => SetValue(CommandProperty, value);
    }

    //--------------------------------------------------------------------------------------------------

    public override void OnAttached(Selector target)
    {
        target.MouseDoubleClick += _Target_MouseDoubleClick;
        target.PreviewKeyDown += _Target_PreviewKeyDown;
    }

    //--------------------------------------------------------------------------------------------------

    public override void OnDetached(Selector target)
    {
        target.MouseDoubleClick -= _Target_MouseDoubleClick;
        target.PreviewKeyDown -= _Target_PreviewKeyDown;
    }

    //--------------------------------------------------------------------------------------------------

    void _Target_MouseDoubleClick(object sender, MouseButtonEventArgs e)
    {
        if (e.ChangedButton != MouseButton.Left
            || sender is not Selector selector
            || e.OriginalSource is not DependencyObject source)
        {
            return;
        }

        // Only react on items, not on scrollbars or empty space
        if (ItemsControl.ContainerFromElement(selector, source) is not FrameworkElement container)
            return;

        var item = selector.ItemContainerGenerator.ItemFromContainer(container);
        if (item == DependencyProperty.UnsetValue)
            return;

        if (_Execute(item))
        {
            e.Handled = true;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _Target_PreviewKeyDown(object sender, KeyEventArgs e)
    {
        if (e.Key != Key.Enter
            || Keyboard.Modifiers != ModifierKeys.None
            || sender is not Selector selector
            || selector.SelectedItem == null)
        {
            return;
        }

        if (_Execute(selector.SelectedItem))
        {
            e.Handled = true;
        }
    }

    //--------------------------------------------------------------------------------------------------

    bool _Execute(object item)
    {
        if (Command == null || !Command.CanExecute(item))
            return false;

        Command.Execute(item);
        return true;
    }
}
