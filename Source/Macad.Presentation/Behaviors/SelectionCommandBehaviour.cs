using System.Windows;
using System.Windows.Controls;
using System.Windows.Controls.Primitives;
using System.Windows.Input;

namespace Macad.Presentation;

public class SelectionCommandBehaviour : Behavior<Selector>
{
    public static DependencyProperty CommandProperty = 
        DependencyProperty.Register("Command", typeof(ICommand), typeof(SelectionCommandBehaviour), new UIPropertyMetadata(null));

    public ICommand Command
    {
        get => (ICommand)GetValue(CommandProperty);
        set => SetValue(CommandProperty, value);
    }

    public static DependencyProperty CommandParameterProperty = 
        DependencyProperty.Register("CommandParameter", typeof(object), typeof(SelectionCommandBehaviour), new UIPropertyMetadata(null));

    public object CommandParameter
    {
        get => GetValue(CommandParameterProperty);
        set => SetValue(CommandParameterProperty, value);
    }

    public override void OnAttached(Selector target)
    {
        target.SelectionChanged += _target_SelectionChanged;
    }

    public override void OnDetached(Selector target)
    {
        target.SelectionChanged -= _target_SelectionChanged;
    }

    void _target_SelectionChanged(object sender, SelectionChangedEventArgs e)
    {
        if (Command == null) return;

        if (e.AddedItems.Count > 0)
        {
            Command.Execute(CommandParameter);
        }
    }
}