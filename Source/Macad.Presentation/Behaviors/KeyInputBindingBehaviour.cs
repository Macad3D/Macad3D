using System.Windows;
using System.Windows.Input;

namespace Macad.Presentation;

public class KeyInputBindingBehaviour : Behavior<UIElement>
{
    public static readonly DependencyProperty KeyProperty = DependencyProperty.Register("Key", typeof(Key), typeof(KeyInputBindingBehaviour), new PropertyMetadata(default(Key)));

    public Key Key
    {
        get { return (Key)GetValue(KeyProperty); }
        set { SetValue(KeyProperty, value); }
    }

    public static readonly DependencyProperty ModifiersProperty = DependencyProperty.Register("Modifiers", typeof(ModifierKeys), typeof(KeyInputBindingBehaviour), new PropertyMetadata(default(ModifierKeys)));

    public ModifierKeys Modifiers
    {
        get { return (ModifierKeys)GetValue(ModifiersProperty); }
        set { SetValue(ModifiersProperty, value); }
    }

    public static readonly DependencyProperty CommandProperty = DependencyProperty.Register("Command", typeof(ICommand), typeof(KeyInputBindingBehaviour), new PropertyMetadata(default(ICommand)));

    public ICommand Command
    {
        get { return (ICommand)GetValue(CommandProperty); }
        set { SetValue(CommandProperty, value); }
    }

    public static readonly DependencyProperty CommandParameterProperty = DependencyProperty.Register("CommandParameter", typeof(object), typeof(KeyInputBindingBehaviour), new PropertyMetadata(default(object)));

    public object CommandParameter
    {
        get { return (object)GetValue(CommandParameterProperty); }
        set { SetValue(CommandParameterProperty, value); }
    }

    public override void OnAttached(UIElement target)
    {
        target.KeyDown += target_KeyDown;
    }

    public override void OnDetached(UIElement target)
    {
        target.KeyDown -= target_KeyDown;
    }

    void target_KeyDown(object sender, KeyEventArgs e)
    {
        if (Command != null)
        {
            if ((Key == e.Key) && (Modifiers == e.KeyboardDevice.Modifiers) && Command.CanExecute(CommandParameter))
            {
                Command.Execute(CommandParameter);
            }
        }
    }
}